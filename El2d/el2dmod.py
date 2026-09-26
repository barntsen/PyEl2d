#!/usr/bin/python3
''' el2dmod is a script for 2D elastic modeling

  Arguments:
    fname : Input configuration file

'''

import time
import matplotlib.pyplot as plt

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
parser.add_argument('-path',help='Library path')
parser.add_argument('fname',help='Configuration file name')
parser.add_argument("-m",dest="m",default='cuda', 
                    help="either of cpu,cuda or omp ")
args = parser.parse_args()

print("** el2dmod ", args.m, "version **",flush=True)

# Get PyEl2d library 
pyel2d = pyeps.setup(args.path)

#Get configuration file 
if args.fname is not None :
  tmp=args.fname
  module = tmp.split('.')[0]
  par=importlib.import_module(module, package=None)
else :
  sys.exit("No cfg file name")

t0=time.perf_counter()   #Start measure wall clock time

# Read the source time function
# and create 2D arrays to hold
# Source time functions
fd = ba.bin(par.fsrc,'r')
Src=pyeps.Fzeros((par.nt,))
tmp=fd.read((par.nt,))
Src[:] = tmp[:]

sqxx = pyeps.Fzeros((par.nt,1))
if (par.srcflags[0] == 1) :
  sqxx[:,0]=Src[:]

sqyy = pyeps.Fzeros((par.nt,1))
if (par.srcflags[1] == 1) :
  sqyy[:,0]=Src[:]

sqxy = pyeps.Fzeros((par.nt,1))
if (par.srcflags[2] == 1) :
  sqxy[:,0]=Src[:]

sfx = pyeps.Fzeros((par.nt,1))
if (par.srcflags[3] == 1) :
  sfx[:,0]=Src[:]

sfy = pyeps.Fzeros((par.nt,1))
if (par.srcflags[4] == 1) :
  sfy[:,0]=Src[:]

# Create sources 

src=src.src(par.sx,par.sy,par.nt,par.dt,
            sfx=sfx,sfy=sfy,sqxx=sqxx,sqyy=sqyy,sqxy=sqxy)

# Create receivers 
nrt=int(par.nt/par.resamp)
rec=rec.rec(par.rx,par.ry,nrt,par.resamp)

#Read the vp model
fd=ba.bin(par.fvp,'r')
tmp = fd.read((par.nx,par.ny))
vp=pyeps.Fzeros((par.nx,par.ny))
vp[:,:]=tmp[:,:]

#Read the vs model
fd=ba.bin(par.fvs,'r')
tmp = fd.read((par.nx,par.ny))
vs=pyeps.Fzeros((par.nx,par.ny))
vs[:,:]=tmp[:,:]

#Read the rho model
fd=ba.bin(par.frho,'r')
tmp = fd.read((par.nx,par.ny))
rho=pyeps.Fzeros((par.nx,par.ny))
rho[:,:]=tmp[:,:]

#Read the ql model
if par.fql != "" :
  fd=ba.bin(par.fql,'r')
  tmp = fd.read((par.nx,par.ny))
  ql=pyeps.Fzeros((par.nx,par.ny))
  ql[:,:]=tmp[:,:]
else :
  ql = None

#Read the qm model
if par.fqm != "" :
  fd=ba.bin(par.fqm,'r')
  tmp = fd.read((par.nx,par.ny))
  qm=pyeps.Fzeros((par.nx,par.ny))
  qm[:,:]=tmp[:,:]
else :
  qm = None

#Read the qp model
if par.fqp != "" :
  fd=ba.bin(par.fqp,'r')
  tmp = fd.read((par.nx,par.ny))
  qp=pyeps.Fzeros((par.nx,par.ny))
  qp[:,:]=tmp[:,:]
else :
  qp = None

# Create model
m = model.model(vp,vs,rho,par.dx,par.dt,par.w0,par.nb,
                par.rheol,par.freesurface,Ql=ql,Qm=qm,Qp=qp)
print("model time  (secs):", time.perf_counter()-t0, flush=True)

# Create fd solver

e=el2d.el2d(m.mod,par.sresamp,par.snpflags)

# Run solver
t1=time.perf_counter()
e.solve(e.el,m.mod,src.sr,par.nt,rec.re,par.l)
tsolve = time.perf_counter()-t1

# Get data
#dtype=0
#data = rec.getrec(rec.re,dtype)
#print("data dimensions: ", data.shape)
#fd=ba.bin("p.bin",'w')
#fd.write(data)

#dtype=1
#data = rec.getrec(pyel2d,dtype)
#fd=ba.bin("vx.bin",'w')
#fd.write(data)

#dtype=2
#data = rec.getrec(pyel2d,dtype)
#fd=ba.bin("vy.bin",'w')
#fd.write(data)

# Log wall clock time and date
now = datetime.now()
dtstring = now.strftime("%b-%d-%Y %H:%M:%S")
print("date              :",dtstring)
print("grid size      nx :", par.nx)  
print("grid size      ny :", par.ny)  
print("timesteps    nt   :", par.nt)  
print("solver time (secs):", tsolve)
print("wall time (secs)  :", time.perf_counter()-t0)

