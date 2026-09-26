from ctypes import *
import numpy as np
import pyeps
import config
def El2dNew(Model,sresamp,snpflags):
 pylib=config.pylib
 pylib.El2dNew.argtypes =[c_void_p,c_int,c_void_p]
 pylib.El2dNew.restype=c_void_p
 snpflags_eps=pyeps.eps1di(snpflags)
 r_val=pylib.El2dNew(Model,sresamp,snpflags_eps)
 snpflags=pyeps.num1di(snpflags_eps)
 rval=r_val
 return rval
def El2dvx(El2d,Model):
 pylib=config.pylib
 pylib.El2dvx.argtypes =[c_void_p,c_void_p]
 pylib.El2dvx.restype=int
 r_val=pylib.El2dvx(El2d,Model)
 rval=r_val
 return rval
def El2dvy(El2d,Model):
 pylib=config.pylib
 pylib.El2dvy.argtypes =[c_void_p,c_void_p]
 pylib.El2dvy.restype=int
 r_val=pylib.El2dvy(El2d,Model)
 rval=r_val
 return rval
def El2dstress(El2d,Model):
 pylib=config.pylib
 pylib.El2dstress.argtypes =[c_void_p,c_void_p]
 pylib.El2dstress.restype=int
 r_val=pylib.El2dstress(El2d,Model)
 rval=r_val
 return rval
def El2dSnap(El2d,it):
 pylib=config.pylib
 pylib.El2dSnap.argtypes =[c_void_p,c_int]
 pylib.El2dSnap.restype=int
 r_val=pylib.El2dSnap(El2d,it)
 rval=r_val
 return rval
def El2dSolve(El2d,Model,Src,Rec,nt,l):
 pylib=config.pylib
 pylib.El2dSolve.argtypes =[c_void_p,c_void_p,c_void_p,c_void_p,c_int,c_int]
 pylib.El2dSolve.restype=int
 r_val=pylib.El2dSolve(El2d,Model,Src,Rec,nt,l)
 rval=r_val
 return rval
