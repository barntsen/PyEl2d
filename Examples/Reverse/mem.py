from math import *

dx=50
nx=300000/dx
ny=30000/dx
nt=30/0.01
l=6
nl = (2*l+1)

print("dx,nx.ny,nt ",dx,nx,ny,nt)
mem = nl*2*nx+nl*2*ny
mem  = mem*2*3
mem = mem*nt
mem = mem*4/1.0e+09
print("Memory (Gb)",mem) 


