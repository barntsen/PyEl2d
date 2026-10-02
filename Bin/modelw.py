from ctypes import *
import numpy as np
import pyeps
import config
def ModelNew(vp,vs,rho,dx,w0,dt,nb,freesurface,tausx,tausy,tauex,tauey,chisx,chisy,chiex,chiey,etasx,etasy,etaex,etaey):
 pylib=config.pylib
 pylib.ModelNew.argtypes =[c_void_p,c_void_p,c_void_p,c_float,c_float,c_float,c_int,c_int,c_void_p,c_void_p,c_void_p,c_void_p,c_void_p,c_void_p,c_void_p,c_void_p,c_void_p,c_void_p,c_void_p,c_void_p]
 pylib.ModelNew.restype=c_void_p
 vp_eps=pyeps.eps2df(vp)
 vs_eps=pyeps.eps2df(vs)
 rho_eps=pyeps.eps2df(rho)
 tausx_eps=pyeps.eps2df(tausx)
 tausy_eps=pyeps.eps2df(tausy)
 tauex_eps=pyeps.eps2df(tauex)
 tauey_eps=pyeps.eps2df(tauey)
 chisx_eps=pyeps.eps2df(chisx)
 chisy_eps=pyeps.eps2df(chisy)
 chiex_eps=pyeps.eps2df(chiex)
 chiey_eps=pyeps.eps2df(chiey)
 etasx_eps=pyeps.eps2df(etasx)
 etasy_eps=pyeps.eps2df(etasy)
 etaex_eps=pyeps.eps2df(etaex)
 etaey_eps=pyeps.eps2df(etaey)
 r_val=pylib.ModelNew(vp_eps,vs_eps,rho_eps,dx,w0,dt,nb,freesurface,tausx_eps,tausy_eps,tauex_eps,tauey_eps,chisx_eps,chisy_eps,chiex_eps,chiey_eps,etasx_eps,etasy_eps,etaex_eps,etaey_eps)
 vp=pyeps.num2df(vp_eps)
 vs=pyeps.num2df(vs_eps)
 rho=pyeps.num2df(rho_eps)
 tausx=pyeps.num2df(tausx_eps)
 tausy=pyeps.num2df(tausy_eps)
 tauex=pyeps.num2df(tauex_eps)
 tauey=pyeps.num2df(tauey_eps)
 chisx=pyeps.num2df(chisx_eps)
 chisy=pyeps.num2df(chisy_eps)
 chiex=pyeps.num2df(chiex_eps)
 chiey=pyeps.num2df(chiey_eps)
 etasx=pyeps.num2df(etasx_eps)
 etasy=pyeps.num2df(etasy_eps)
 etaex=pyeps.num2df(etaex_eps)
 etaey=pyeps.num2df(etaey_eps)
 rval=r_val
 return rval
