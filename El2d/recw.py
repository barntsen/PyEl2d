from ctypes import *
import numpy as np
import pyeps
import config
def RecNew(rx,ry,nt,resamp):
 pylib=config.pylib
 pylib.RecNew.argtypes =[c_void_p,c_void_p,c_int,c_int]
 pylib.RecNew.restype=c_void_p
 rx_eps=pyeps.eps1di(rx)
 ry_eps=pyeps.eps1di(ry)
 r_val=pylib.RecNew(rx_eps,ry_eps,nt,resamp)
 rx=pyeps.num1di(rx_eps)
 ry=pyeps.num1di(ry_eps)
 rval=r_val
 return rval
def RecReceiver(Rec,it,field,dtype):
 pylib=config.pylib
 pylib.RecReceiver.argtypes =[c_void_p,c_int,c_void_p,c_int]
 pylib.RecReceiver.restype=int
 field_eps=pyeps.eps2df(field)
 r_val=pylib.RecReceiver(Rec,it,field_eps,dtype)
 field=pyeps.num2df(field_eps)
 rval=r_val
 return rval
def RecGetrec(Rec,data):
 pylib=config.pylib
 pylib.RecGetrec.argtypes =[c_void_p,c_int]
 pylib.RecGetrec.restype=c_void_p
 r_val=pylib.RecGetrec(Rec,data)
 rval=pyeps.num2df(r_val)
 return rval
