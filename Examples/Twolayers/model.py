#!/usr/bin/env python3

''' Models create simple two layer elastic model '''

import numpy as np
import matplotlib.pyplot as pl
from pyeps import izeros,fzeros
import babinf as ba

# Create a layered  model
nx = 300
ny = 300
dx = 2.5
dz = 2.5
d  = 620.0
nd = int(d/dz)

vp = fzeros((nx,ny))
vp[:,:] = 2000.0
vp[:,nd:ny] = 2200.0

vs = fzeros((nx,ny))
vs[:,:] = 1150.0
vs[:,nd:ny] = 1280.0

rho = fzeros((nx,ny))
rho[:,:] = 1000.0

#pl.imshow(vp.T)
#pl.show()
#pl.imshow(vs.T)
#pl.show()
#pl.imshow(rho.T)
#pl.show()


fd=ba.bin("vp.bin",'w')
fd.write(vp)
fd=ba.bin("vs.bin",'w')
fd.write(vs)
fd=ba.bin("rho.bin",'w')
fd.write(rho)
