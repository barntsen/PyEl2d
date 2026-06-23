#!/usr/bin/env python3

''' Models create simple two layer elastic model '''

import numpy as np
import matplotlib.pyplot as plt
from pyeps import izeros,fzeros
import babinf as ba

# Create a layered  model
L=3000.0 # Length of model
D=500.0  # Depth of model
d1=200.0
d2=40.0
d3=D-(d1+d2)
x0b=3*L/4
x1b=3*L/4+20.0
db=10

dx = 3.0
nx = int(L/dx + 1)
ny = int(D/dx + 1)
l1=int(d1/dx)+1
l2=int(d2/dx)+1
ix0b=int(x0b/dx)+1
ix1b=int(x1b/dx)+1
lb=int(db/dx)+1


vp1=1500.0
vp2=1600.0
vp3=3000.0
vs1=0.0
vs2=600.0
vs3=vp3/1.8
rho1=1000.0
rho2=1800.0
rho3=2500.0

print("===Model parameters  ")
print("D       : ", D        )
print("L       : ", L        )
print("d1      : ", d1       )
print("d2      : ", d2       )
print("d3      : ", d3       )
print("vp1     : ", vp1      )
print("vp2     : ", vp2      )
print("vp3     : ", vp3      )
print("vs1     : ", vs1      )
print("vs2     : ", vs2      )
print("vs3     : ", vs3      )
print("rho1    : ", rho1     )
print("rho2    : ", rho2     )
print("rho3    : ", rho3     )
print("x0b     : ", x0b      )
print("x1b     : ", x1b      )
  
print("=== Model grid      " )
print("dx      : ", dx       )
print("nx      : ", nx       )
print("ny      : ", ny       )
print("ix0b    : ", ix0b     )
print("ix1b    : ", ix1b     )

# Layer no 3 (Background model)
vp = fzeros((nx,ny))
vp[:,:] = vp3
vs = fzeros((nx,ny))
vs[:,:] = vs3
rho = fzeros((nx,ny))
rho[:,:] = rho3

# Layer no 1 (Water)
vp[:,0:l1]=vp1
vs[:,0:l1]=vs1
rho[:,0:l1]=rho1

# Layer no 2 (sediments)
vp[:,l1:l2]=vp2
vs[:,l1:l2]=vs2
rho[:,l1:l2]=rho2

# Bump
print(l1+lb,l1)
vp[ix0b:ix1b,l1-lb:l1]=vp2
vs[ix0b:ix1b,l1-lb:l1]=vs2
rho[ix0b:ix1b,l1-lb:l1]=rho2

img=plt.imshow(vp.T,cmap="jet")
plt.colorbar(img,shrink=0.2)
plt.savefig("vp.pdf")
plt.show()
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
