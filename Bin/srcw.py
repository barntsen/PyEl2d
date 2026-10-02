from ctypes import *
import numpy as np
import pyeps
import config
def SrcNew(sx,sy,sqxx,sqyy,sqxy,sfx,sfy):
 pylib=config.pylib
 pylib.SrcNew.argtypes =[c_void_p,c_void_p,c_void_p,c_void_p,c_void_p,c_void_p,c_void_p]
 pylib.SrcNew.restype=c_void_p
 sx_eps=pyeps.eps1di(sx)
 sy_eps=pyeps.eps1di(sy)
 sqxx_eps=pyeps.eps2df(sqxx)
 sqyy_eps=pyeps.eps2df(sqyy)
 sqxy_eps=pyeps.eps2df(sqxy)
 sfx_eps=pyeps.eps2df(sfx)
 sfy_eps=pyeps.eps2df(sfy)
 r_val=pylib.SrcNew(sx_eps,sy_eps,sqxx_eps,sqyy_eps,sqxy_eps,sfx_eps,sfy_eps)
 sx=pyeps.num1di(sx_eps)
 sy=pyeps.num1di(sy_eps)
 sqxx=pyeps.num2df(sqxx_eps)
 sqyy=pyeps.num2df(sqyy_eps)
 sqxy=pyeps.num2df(sqxy_eps)
 sfx=pyeps.num2df(sfx_eps)
 sfy=pyeps.num2df(sfy_eps)
 rval=r_val
 return rval
def SrcDel(Src):
 pylib=config.pylib
 pylib.SrcDel.argtypes =[c_void_p]
 pylib.SrcDel.restype=int
 r_val=pylib.SrcDel(Src)
 rval=r_val
 return rval
def Srcricker(source,t0,f0,nt,dt):
 pylib=config.pylib
 pylib.Srcricker.argtypes =[c_void_p,c_float,c_float,c_int,c_float]
 pylib.Srcricker.restype=int
 source_eps=pyeps.eps1df(source)
 r_val=pylib.Srcricker(source_eps,t0,f0,nt,dt)
 source=pyeps.num1df(source_eps)
 rval=r_val
 return rval
