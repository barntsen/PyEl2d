# Basic wave propagation 

This directory contain scripts and python code to run a simple
wave propagation example using the pyel2d library.

## Installation

Run the mk.sh script to set up everything.

     ./mk.sh 

## Wave propagation in layered media
The file ```layers.py``` contains the following script

        import numpy as np
        import matplotlib.pyplot as pl
        import el2d
        import src
        import rec
        import model
        from pyeps import izeros,fzeros
        import babin as ba

        # Setup of library
        #arch="c"        # Cpu
        #arch="omp"      # Cpu multiprocessor
        arch="cuda"      # Nvidia

        print("** Elastic 2d ",arch," version")
        path=el2d.libpath()
        lib = el2d.setup(path,arch)

        # Set the size of the model
        nx = 501          # Size in x-direction
        ny = 101          # Size in y-direction
        dx = 10.0          # Grid size

        # Set the simulation time
        nt = 4001          # No of time samples
        dt = 0.0005        # Time sampling interval

        # Set source position
        sx = izeros((1,))
        sy = izeros((1,))
        sx[0] = nx/2      # x-coord (in gridpoints) of source
        sy[0] = 1      # y-coord (in gridpoints) of source

        # Set source time parameters (using the default ricker wavelet)
        f0 = 25.0
        t0 = 0.1

        # Create a source object
        s = src.src(lib,sx,sy,nt,dt,f0,t0)

        # Create receivers
        rx=izeros((nx))
        ry=izeros((nx))

        for i in range(0,nx) :
          rx[i] = i
          ry[i] = 2

        resamp=10
        ntr=int(nt/resamp)
        r=rec.rec(lib,rx,ry,ntr,resamp)

        # Create a layered model
        vp = fzeros((nx,ny))
        vp[:,:] = 1500.0
        vp[:,int(ny/2):ny]=2000.0 
        vs = fzeros((nx,ny))
        vs[:,int(ny/2):ny]=1000.0 
        rho = fzeros((nx,ny))
        rho[:,:] = 1000.0

        w0=2.0*3.14159*f0
        m = model.model(lib,vp,vs,rho,dx,dt,w0)

        # Set snapshot type
        snptype=izeros((5,))
        snptype[0] = 1  # (Output pressure)

        # Turn off recording of snapshots.
        sresamp = 0

        # Create solver
        sol = el2d.el2d(lib,m,sresamp,snptype)

        # Run the simulation
        sol.solve(lib,m,s,nt,r)

        # Get data
        dtype=0
        data = r.getrec(lib,dtype)
        fd=ba.bin("p.bin",'w')
        fd.write(data)

The first code block contains the import of 
necessary modules:

         import numpy as np
         import matplotlib.pyplot as pl
         import el2d
         import src
         import rec
         import model
         from pyeps import izeros,fzeros

Except for the standard numpy and matplotlib five modules
are needed, ``` el2d,src,rec, model``` and ```pyeps```. 
We will get back to each of these modules below.

The next code block locates the object library containing
the compiled C, Cuda or Open MP coda. Note that there are
three different libraries, and below we have selected the
Cuda version appropriate for running on Nvidia GPUs.

         # Setup of library
         #arch="c"        # Cpu
         #arch="omp"      # Cpu multiprocessor
         arch="cuda"      # Nvidia

         print("** Elastic 2d ",arch," version")
         path=el2d.libpath()
         lib = el2d.setup(path,arch)

The ```el2d.libpath()``` call will locate the path of the object library
and the ```el2d.setup(path,arch)``` call will create a reference to the library
and store in the ```lib``` variable. This reference is used for making
calls to the C, Cuda or Open MP functions.

Next we will need to set the size of the area we want to simulate in,
```nx``` gives the number of gridpoints in the finite-difference grid in
the horizontal direction, while ```ny``` gives the number of gridpoints in
the vertical direction.

        # Set the size of the model
         nx = 256          # Size in x-direction
         ny = 256          # Size in y-direction
         dx = 5.0          # Grid size

         # Set the simulation time
         nt = 1501         # No of time samples
         dt = 0.0005        # Time sampling interval

We also have to specify the size of each gridcell using the ```dx``` parameter.
The simulation time which is given by the number of
timesteps ```nt``` and the time sampling interval ```dt```.

In order to simulate elastic waves we need a source. The source is
specified by giving the source position by two integers, which refers to the
gridpoint positions. The first integer is the gridpoint number in
the horizontal direction, while the second integer is the gridpoint number
in the vertical direction. Gridpoints starts at 0, and the vertical axis is
positive downwards and starts at 0 at the top of the grid.

        # Set source position
         sx = izeros((1,))
         sy = izeros((1,))
         sx[0] = nx/2      # x-coord (in gridpoints) of source
         sy[0] = ny/2      # y-coord (in gridpoints) of source

Note that we use the ```izeros``` function to create a numpy array
with 32 bit integers (numpy default is 64 bit integers), which is needed
by the C, Cuda or Open MP libraries.
Using 64 bit integers causes an error.
Here sx is a numpy array where ```sx[0]``` contains the horizontal
coordinate, while ```sy[0]``` contains the vertical coordinate.
In general it is possible to add as many sources as are needed by makeing
the ```sx``` and ```sy``` arrays larger. However, in our case we need just one,
and we set the position in the center of the grid.

Before we create an object for the grid, we need to specify two more
parameters, the center frequency of the source, ```f0``` and a time delay
```t0``` to make the source causal,

         # Set source time parameters (using the default ricker wavelet)
         f0 = 25.0
         t0 = 0.1

We can now create a source object by using the ```src``` method of the
```src``` object.

         # Create a source object
         s = src.src(lib,sx,sy,nt,dt,f0,t0)

The variable ```s``` contains a reference to the source object, and will
be used further down.

The code block below introduces receivers to record data.
The ```rx``` and ```ry``` arrays contain lists of horizontal 
coordinates (integers) specifying at what gridpoints we want receivers.

        # Create receivers
        rx=izeros((nx))
        ry=izeros((nx))

        for i in range(0,nx) :
          rx[i] = i
          ry[i] = 2

Usually the time steps used for modeling are quite small, so
in most cases we want to record data with larger sampling interval.
This is specified by using a resampling factor, ```resamp```.
For example, if ``` resamp is equal to two, only data for every second time step
is recorded. In the code below we record data for every 10'th time step.

        resamp=10
        ntr=int(nt/resamp)
        r=rec.rec(lib,rx,ry,ntr,resamp)

The ```ntr`` parameter which is supplied in the last call (which creates the receiver object)
specifies how many samples each receiver will contain.




We will also need to specify the P-wave velocity, S-wave velocity and
density. This is done by creating three numpy arrays with dimensions
```nx``` and ```ny``` and populating the arrays with velocity and density
values. In our case we just create three arrays with two layers.
Note that we use the ```fzeros()``` function to create the velocity
arrays to ensure the arrays contain 32 bit floats.

        # Create a layered model
        vp = fzeros((nx,ny))
        vp[:,:] = 1500.0
        vp[:,int(ny/2):ny]=2000.0 
        vs = fzeros((nx,ny))
        vs[:,int(ny/2):ny]=1000.0 
        rho = fzeros((nx,ny))
        rho[:,:] = 1000.0


We now need to create a model object by:

         w0=2.0*3.14159*f0
         m = model.model(lib,vp,vs,rho,dx,dt,w0)

Here  the ```w0``` angular frequency is a paremeter used to describe 
a viscoelastic
medium. In our case we simply set $w_0 = 2\pi f_0$.

There are one important restriction of some of the parameters
we have defined. The size of the gridcells
,```dx``` , the time sampling intervall ```dt``` and the largest P-wave 
velocity $v_{max}$ have to obey the inequality:
$(v_{max} dt/dx)^2 < 1/2$.
This will be checked when the model object is created and an error
message printed if the condition on the parameters is not met.

We are now in position to perform the actual simulation by first creating
a solver object and then use the solve method to run the simulation.

         # Create solver
         sol = el2d.el2d(lib,m,sresamp,snptype)

         # Run the simulation
         sol.solve(lib,m,s,nt)
 
The shell script ```run.sh``` will run the basic.py python script. 
You should see a printed output for every 10 percent of 
the simulation completed. 

After the simulation is finished the ```r.getrec``` routine
will fetch the receiver data. The ```dtype`` argument select the
pressure to be recorded at the receivers.

        # Get data
        dtype=0
        data = r.getrec(lib,dtype)
        fd=ba.bin("p.bin",'w')
        fd.write(data)

Finally the two last lines records the receiver data in a file with name ```p.bin```

