#!/usr/bin/python3
''' el2dmod is a script for 2D elastic modeling

  Arguments:
    fname : Input configuration file

'''

import time
import matplotlib.pyplot as pl

from datetime import datetime
import importlib
import numpy as np
import babinf as ba
import time
import argparse
import sys

from ctypes import *
import src
import rec
import model
import el2d
import pyeps

#Get configuration file name
parser = argparse.ArgumentParser(description='el2dmod - 2D elastic modeling')
parser.add_argument('fname',help='Configuration file name')
parser.add_argument("-m",dest="m",default='cuda', 
                    help="either of cpu,cuda or omp ")
args = parser.parse_args()

print("** el2dmod ", args.m, "version **",flush=True)


#Get configuration file 
if args.fname is not None :
  tmp=args.fname
  module = tmp.split('.')[0]
  par=importlib.import_module(module, package=None)
else :
  sys.exit("No cfg file name")

# Get PyEl2d library 
pyel2d = el2d.setup(par.path,args.m)

t0=time.perf_counter()   #Start measure wall clock time

# Read the source time function
# and create 2D arrays to hold
# Source time functions
fd = ba.bin(par.fsrc,'r')
Src=fd.read((par.nt,))

sqxx = np.zeros((par.nt,1), dtype=np.float32, order='F')
if (par.srcflags[0] == 1) :
  sqxx[:,0]=Src[:]

sqyy = np.zeros((par.nt,1), dtype=np.float32, order='F')
if (par.srcflags[1] == 1) :
  sqyy[:,0]=Src[:]

sqxy = np.zeros((par.nt,1), dtype=np.float32, order='F')
if (par.srcflags[2] == 1) :
  sqxy[:,0]=Src[:]

sfx = np.zeros((par.nt,1), dtype=np.float32, order='F')
if (par.srcflags[3] == 1) :
  sfx[:,0]=Src[:]

sfy = np.zeros((par.nt,1), dtype=np.float32, order='F')
if (par.srcflags[4] == 1) :
  sfy[:,0]=Src[:]

# Create sources 
src=src.src(pyel2d,par.sx,par.sy,par.nt,par.dt,
            sfx=sfx,sfy=sfy,sqxx=sqxx,sqyy=sqyy,sqxy=sqxy)

# Create receivers 
nrt=int(par.nt/par.resamp)
print("nt: ", par.nt)
print("record lenghth: ",nrt)
rec=rec.rec(pyel2d,par.rx,par.ry,nrt,par.resamp)

#Read the vp model
fd=ba.bin(par.fvp,'r')
vp = fd.read((par.nx,par.ny))

#Read the vs model
fd=ba.bin(par.fvs,'r')
vs = fd.read((par.nx,par.ny))

#Read the rho model
fd=ba.bin(par.frho,'r')
rho = fd.read((par.nx,par.ny))

#Read the ql model
if par.fql != "" :
  fd=ba.bin(par.fql,'r')
  ql = fd.read((par.nx,par.ny))
else :
  ql = None

#Read the qm model
if par.fqm != "" :
  fd=ba.bin(par.fqm,'r')
  qm = fd.read((par.nx,par.ny))
else :
  qm = None

#Read the qp model
if par.fqp != "" :
  fd=ba.bin(par.fqp,'r')
  qp = fd.read((par.nx,par.ny))
else :
  qp = None


# Create model
m = model.model(pyel2d,vp,vs,rho,par.dx,par.dt,par.w0,par.nb,
                par.rheol,par.freesurface,par.Qmin,Ql=ql,Qm=qm,Qp=qp)
print("model time  (secs):", time.perf_counter()-t0, flush=True)

exit()

# Create fd solver
el2d = el2d.el2d(pyel2d,m,par.sresamp,par.snpflags)

# Run solver
t1=time.perf_counter()
el2d.solve(pyel2d,m,src,par.nt,rec,par.l)
tsolve = time.perf_counter()-t1

# Get data
dtype=0
data = rec.getrec(pyel2d,dtype)
print("data dimensions: ", data.shape)
fd=ba.bin("p.bin",'w')
fd.write(data)

dtype=1
data = rec.getrec(pyel2d,dtype)
fd=ba.bin("vx.bin",'w')
fd.write(data)

dtype=2
data = rec.getrec(pyel2d,dtype)
fd=ba.bin("vy.bin",'w')
fd.write(data)

# Log wall clock time and date
now = datetime.now()
dtstring = now.strftime("%b-%d-%Y %H:%M:%S")
print("date              :",dtstring)
print("grid size      nx :", par.nx)  
print("grid size      ny :", par.ny)  
print("timesteps    nt   :", par.nt)  
print("solver time (secs):", tsolve)
print("wall time (secs)  :", time.perf_counter()-t0)

