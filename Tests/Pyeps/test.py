#!/usr/bin/python3
''' Test script for pyeps

  Arguments:
    fname : Input configuration file

'''

import time
from datetime import datetime
import importlib
import numpy as np

from ctypes import *
import pyeps

libpath="/home/barn/Dropbox/Src/PyEl2d/Tests/Pyeps/pyepscpu.so"
cdll.LoadLibrary(libpath)
pylib = CDLL(libpath)

#Initialize I/O
pylib.LibeInit()

# Test Set2df and Get2df
print("====== Test of Set2df and Get2df:")
nx=5
ny=5
arr=np.ones((nx,ny),dtype=np.float32)
out=np.zeros((nx,ny),dtype=np.float32)
narr=pyeps.Store2df(pylib,arr);
pyeps.Get2df(pylib,narr,out);
print(out)

# Test Set1df and Get1df
print("====== Test of Set1df and Get1df:")
nx=5
arr=np.ones(nx,dtype=np.float32)
out=np.zeros(nx,dtype=np.float32)
narr=pyeps.Store1df(pylib,arr);
pyeps.Get1df(pylib,narr,out);
print(out)

# Test Set1di and Get1di
print("====== Test of Set1di and Get1di:")
nx=5
arr=np.ones(nx,dtype=np.int32)
out=np.zeros(nx,dtype=np.int32)
narr=pyeps.Store1di(pylib,arr);
pyeps.Get1di(pylib,narr,out);
print(out)

# Test Set1ds and Get1ds
print("====== Test of Set1ds and Get1ds:")
nx=5
arr="hello"
narr=pyeps.Store1ds(pylib,arr);
out=pyeps.Get1ds(pylib,narr);
print(out)
