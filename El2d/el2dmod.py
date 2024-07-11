#!/usr/bin/python3
''' el2dmod is a script for 2D elastic modeling

  Arguments:
    fname : Input configuration file

'''

import time
from datetime import datetime
import importlib
import numpy as np
import babin as ba
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
parser.add_argument('fname',help='Configuartion file name')
parser.add_argument("-m",dest="m",default='cuda', 
                    help="either of cpu,cuda or omp ")
args = parser.parse_args()

print("** el2dmod ", args.m, "version **",flush=True)

#Get pyeps library
if args.m == 'cpu' :
  module1 = 'pyel2dcpu.so'
elif args.m == 'cuda':
  module1 = 'pyel2dcuda.so'
elif args.m == 'omp':
  module1 = 'pyel2domp.so'
  
libpath="/home/barn/Dropbox/Src/PyEl2d/Bin/"+module1
cdll.LoadLibrary(libpath)
pyel2d = CDLL(libpath)

#Get configuration file 
if args.fname is not None :
  tmp=args.fname
  module = tmp.split('.')[0]
  par=importlib.import_module(module, package=None)
else :
  sys.exit("No cfg file name")
  

#Initialize I/O
pyel2d.LibeInit()

t0=time.perf_counter()   #Start measure wall clock time

# Create source 

#Read the source time function
fd = ba.bin(par.fsrc,'r')
Src=fd.read((par.nt,))
src=src.src(pyel2d,Src,par)

# Create receivers 
rec=rec.rec(pyel2d,par)

#Read the vp model
fd=ba.bin(par.fvp,'r')
vp = fd.read((par.ny,par.nx))

#Read the vs model
fd=ba.bin(par.fvs,'r')
vs = fd.read((par.ny,par.nx))

#Read the rho model
fd=ba.bin(par.frho,'r')
rho = fd.read((par.ny,par.nx))

#Read the ql model
fd=ba.bin(par.fql,'r')
ql = fd.read((par.ny,par.nx))

#Read the qm model
fd=ba.bin(par.fqm,'r')
qm = fd.read((par.ny,par.nx))

#Read the qp model
fd=ba.bin(par.fqp,'r')
qp = fd.read((par.ny,par.nx))

#Read the qs model
fd=ba.bin(par.fqs,'r')
qs = fd.read((par.ny,par.nx))

# Create model
model = model.model(pyel2d,vp,vs,rho,ql,qm,qp,qs,par)
print("model time  (secs):", time.perf_counter()-t0, flush=True)

# Create fd solver
el2d = el2d.el2d(pyel2d,model)


# Run solver
t1=time.perf_counter()
el2d.solve(pyel2d,model,src,rec,par)

# Log wall clock time and date
now = datetime.now()
dtstring = now.strftime("%b-%d-%Y %H:%M:%S")
print("date              :",dtstring)
print("grid size      nx :", par.nx)  
print("grid size      ny :", par.ny)  
print("timesteps    nt   :", par.nt)  
print("solver time (secs):", time.perf_counter()-t1)
print("wall time (secs)  :", time.perf_counter()-t0)

# Save data
rec.save(pyel2d,par)
