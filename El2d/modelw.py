from ctypes import *
import numpy as np
import pyeps
import config
def ModelNew(Lambda,mu,muxy,nux,nuy,dx,dt,w0,nb,freesurface,tausx,tausy,tauex,tauey,chisx,chisy,chiex,chiey,chisxxy,chisyxy,chiexxy,chieyxy,etasx,etasy,etaex,etaey):
 pylib=config.pylib
 pylib.ModelNew.argtypes =[c_void_p,c_void_p,c_void_p,c_void_p,c_void_p,c_float,c_float,c_float,c_int,c_int,c_void_p,c_void_p,c_void_p,c_void_p,c_void_p,c_void_p,c_void_p,c_void_p,c_void_p,c_void_p,c_void_p,c_void_p,c_void_p,c_void_p,c_void_p,c_void_p]
 pylib.ModelNew.restype=c_void_p
 Lambda_eps=pyeps.eps2df(Lambda)
 mu_eps=pyeps.eps2df(mu)
 muxy_eps=pyeps.eps2df(muxy)
 nux_eps=pyeps.eps2df(nux)
 nuy_eps=pyeps.eps2df(nuy)
 tausx_eps=pyeps.eps2df(tausx)
 tausy_eps=pyeps.eps2df(tausy)
 tauex_eps=pyeps.eps2df(tauex)
 tauey_eps=pyeps.eps2df(tauey)
 chisx_eps=pyeps.eps2df(chisx)
 chisy_eps=pyeps.eps2df(chisy)
 chiex_eps=pyeps.eps2df(chiex)
 chiey_eps=pyeps.eps2df(chiey)
 chisxxy_eps=pyeps.eps2df(chisxxy)
 chisyxy_eps=pyeps.eps2df(chisyxy)
 chiexxy_eps=pyeps.eps2df(chiexxy)
 chieyxy_eps=pyeps.eps2df(chieyxy)
 etasx_eps=pyeps.eps2df(etasx)
 etasy_eps=pyeps.eps2df(etasy)
 etaex_eps=pyeps.eps2df(etaex)
 etaey_eps=pyeps.eps2df(etaey)
 r_val=pylib.ModelNew(Lambda_eps,mu_eps,muxy_eps,nux_eps,nuy_eps,dx,dt,w0,nb,freesurface,tausx_eps,tausy_eps,tauex_eps,tauey_eps,chisx_eps,chisy_eps,chiex_eps,chiey_eps,chisxxy_eps,chisyxy_eps,chiexxy_eps,chieyxy_eps,etasx_eps,etasy_eps,etaex_eps,etaey_eps)
 Lambda=pyeps.num2df(Lambda_eps)
 mu=pyeps.num2df(mu_eps)
 muxy=pyeps.num2df(muxy_eps)
 nux=pyeps.num2df(nux_eps)
 nuy=pyeps.num2df(nuy_eps)
 tausx=pyeps.num2df(tausx_eps)
 tausy=pyeps.num2df(tausy_eps)
 tauex=pyeps.num2df(tauex_eps)
 tauey=pyeps.num2df(tauey_eps)
 chisx=pyeps.num2df(chisx_eps)
 chisy=pyeps.num2df(chisy_eps)
 chiex=pyeps.num2df(chiex_eps)
 chiey=pyeps.num2df(chiey_eps)
 chisxxy=pyeps.num2df(chisxxy_eps)
 chisyxy=pyeps.num2df(chisyxy_eps)
 chiexxy=pyeps.num2df(chiexxy_eps)
 chieyxy=pyeps.num2df(chieyxy_eps)
 etasx=pyeps.num2df(etasx_eps)
 etasy=pyeps.num2df(etasy_eps)
 etaex=pyeps.num2df(etaex_eps)
 etaey=pyeps.num2df(etaey_eps)
 rval=r_val
 return rval
