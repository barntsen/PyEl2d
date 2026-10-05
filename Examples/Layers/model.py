#!/usr/bin/env python3

''' Models create simple two layer elastic model '''

import numpy as np
import matplotlib.pyplot as pl
from pyeps import izeros,fzeros
import babinf as ba

# Create a layered  model
nx = 256
ny = 256
dx = 5.0
dz = 5.0
d  = 1000.0
nd = int(100)

vp = fzeros((nx,ny))
vp[:,:] = 1500.0 
vp[:,nd:ny] = 4000.0

vs = fzeros((nx,ny))
vs[:,:] = 0.0
vs[:,nd:ny] = 2000.0

rho = fzeros((nx,ny))
rho[:,:] = 1000.0
rho[:,nd:ny] = 2600.0

pl.imshow(vp.T)
#pl.show()
#pl.imshow(vs.T)
#pl.show()
#pl.imshow(rho.T)
pl.show()


fd=ba.bin("vp.bin",'w')
fd.write(vp)
fd=ba.bin("vs.bin",'w')
fd.write(vs)
fd=ba.bin("rho.bin",'w')
fd.write(rho)
