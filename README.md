#  PyEl2d - Python library for 2D Visco-Elastic wave propagation

PyEl2d is a python library with a set of objects and methods for performing
2D Elastic Wave propagation using the Finite-Difference method.
The stress-velocity Finite-Difference formulation is used, with visco-elastic
stress-strain relation and dynamic (time-dependent) effective density.
This formulation allows boundary conditions to be created by tapering
the Q-model at the edges, with no special code at the boundaries.
The boundary conditions are shown to be identical to the 
Perfectly-Matched-Layer (PML) method.

The time critical core functions are written in C, C with Open Mp or Cuda.
The C and Cuda code is machine generated from a simple python-like scripting language. 
This makes it possible to maintain a single source code version for cpu and gpu.

## Installation
Clone the repo to a local directory.
The install.sh script in the top directory will compile the c/cuda code and
install a simple script (el2dmod) for running simulations.
gcc and nvcc are used for the compilation and must be installed.
To install the C cpu version type

     ./install.sh c 

To install the Cuda gpu version type

     ./install.sh cuda

To install the Open MP multicore cpu version type

     ./install.sh omp

## Getting started
The Examples/Basic directory contain a basic example for how to use
PyEl2d.

The file ```basic.py``` reads:

         ''' El2d performs modeling of elastic waves '''

         import numpy as np
         import matplotlib.pyplot as pl
         import el2d
         import src
         import rec
         import model
         from pyeps import izeros,fzeros

         # Setup of library
         #arch="c"        # Cpu
         #arch="omp"      # Cpu multiprocessor
         arch="cuda"      # Nvidia

         print("** Elastic 2d ",arch," version")
         path=el2d.libpath()
         lib = el2d.setup(path,arch)

         # Set the size of the model
         nx = 256          # Size in x-direction
         ny = 256          # Size in y-direction
         dx = 5.0          # Grid size

         # Set the simulation time
         nt = 1501         # No of time samples
         dt = 0.0005        # Time sampling interval

         # Set source position
         sx = izeros((1,))
         sy = izeros((1,))
         sx[0] = nx/2      # x-coord (in gridpoints) of source
         sy[0] = ny/2      # y-coord (in gridpoints) of source

         # Set source time parameters (using the default ricker wavelet)
         f0 = 25.0
         t0 = 0.1

         # Create a source object
         s = src.src(lib,sx,sy,nt,dt,f0,t0)

         # Create a simplistic model
         vp = fzeros((nx,ny))
         vp[:,:] = 2200.0
         vs = fzeros((nx,ny))
         vs = vp/2.0
         rho = fzeros((nx,ny))
         rho[:,:] = 1000.0

         w0=2.0*3.14159*f0
         m = model.model(lib,vp,vs,rho,dx,dt,w0)

         # Set snapshot type
         snptype=izeros((5,))
         snptype[0] = 1  # (Output pressure)

         # Set snapshot resampling
         sresamp = 10

         # Create solver
         sol = el2d.el2d(lib,m,sresamp,snptype)

         # Run the simulation
         sol.solve(lib,m,s,nt)

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

We will also need to specify the P-wave velocity, S-wave velocity and
density. This is done by creating three numpy arrays with dimensions
```nx``` and ```ny``` and populating the arrays with velocity and density
values. In our case we just create three arrays with constant velocities.
Note that we use the ```fzeros()``` function to create the velocity
arrays to ensure the arrays contain 32 bit floats.

        # Create a simplistic model
         vp = fzeros((nx,ny))
         vp[:,:] = 2200.0
         vs = fzeros((nx,ny))
         vs = vp/2.0
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

Before we can start the simulation, we have to specify what kind of
data we want as output. In our case we choose to record the pressure
for the entire area defined by the velocity and density models.

        # Set snapshot type
         snptype=izeros((5,))
         snptype[0] = 1  # (Output pressure)

```snptype``` is an integer array of length five.
Setting the first element to 1 and the rest to zero will select pressure
to be recorded. The output will be stored on a file with name
```snp-p.bin```

         # Set snapshot resampling
         sresamp = 10


However, this will create large amounts of data, even for small models.
In order to limit the output data volum we set the 
```sresamp``` parameter to 10, which means that data is stored only every 
10'th timestep, i.e the time between each snapshot of the pressure is 
10```dt```. If the ```sresamp``` parameter is set to zero, no output
is genrated.

         # Set snapshot type
         snptype=izeros((5,))
         snptype[0] = 1  # (Output pressure)

         # Set snapshot resampling
         sresamp = 10

We are now in position to perform the actual simulation by first creating
a solver object and then use the solve method to run the simulation.

         # Create solver
         sol = el2d.el2d(lib,m,sresamp,snptype)

         # Run the simulation
         sol.solve(lib,m,s,nt)
 
The shell script ```run.sh``` will run the basic.py python script. 
You should see a printed output for every 10 percent of 
the simulation completed. 
After the simulation is finished the ```run.sh``` script will
show a movie of the output. In our case you should see a
P-wave expanding from the source in the middle of the model
and absorbed at the bondaries, except at the top of the model 
where there is a reflection from the free surface.

## Directories

 - El2d        -eps and Python source code for the library
 - Python-c    -C code for the wave propagation library (machine generated).
 - Python-cuda -Cuda code for the wave propagation library (machine generated).
 - Python-omp  -C code with openmp for the wave propagation library.
 - Scripts     -Support scripts for plotting, model creation etc..
 - Examples    -Simulation examples
 - Tests       -Simple test cases
 - Doc         -Documentation of the finite-difference method
                and code.
 - Bin         -Python executable scripts
