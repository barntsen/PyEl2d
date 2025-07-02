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
