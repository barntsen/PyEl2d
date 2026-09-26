from ctypes import *
import time
import numpy as np
import matplotlib.pyplot as pl
import tau

class model :

  ''' 
      model creates a model suitable for the PyEl2d library 
      solver.

  '''

  def __init__(self,pyac2d,Vp,Vs,Rho,dx,dt,w0,nb=35,rheol=2,
               Freesurface=1, **kwargs):
    ''' Constructor for the model object.

    Arguments: 
      pyac2d: Shared library with object code
      Vp    : P-wave velocity array 
      Vs    : S-wave velocity array
      Rho   : Density array
      dx    : Grid sampling interval
      dt    : Modelling time sampling interval
      w0    : Q-model peak angular frequency
      nb    : (Optional) Width of border zone
      rheol : (Optional) Rheology for Q-model. 
              The default value is a standard linear solid.
      Ql    : Lambda Q-model
      Qm    : Mu Q-model array
      Qr    : Density Q-model array

    All arrays are 2D with the first dimension in the x-direction.

    '''
    
    # Q value at w0 for no attenuation
    Q0=100000.0
    nx = Vp.shape[0]
    ny = Vp.shape[1]

    if 'Ql' in  kwargs :
      Ql = kwargs['Ql']
    else :
      Ql=np.ones((nx,ny), dtype=np.float32,order='F')
      Ql[:,:]=Q0

    if 'Qm' in kwargs == None :
      Qm = kwargs['Ql']
    else :
      Qm=np.ones((nx,ny), dtype=np.float32,order='F')
      Qm[:,:]=Q0

    if 'Qr' in kwargs :
      Qr = kwargs['Ql']
    else :
      Qr=np.ones((nx,ny), dtype=np.float32,order='F')
      Qr[:,:] = Q0

    if Ql is None :
      Ql=np.ones((nx,ny), dtype=np.float32,order='F')
      Ql[:,:] = Q0

    if Qm is None :
      Qm=np.ones((nx,ny), dtype=np.float32,order='F')
      Qm[:,:] = Q0

    if Qr is None :
      Qr=np.ones((nx,ny), dtype=np.float32,order='F')
      Qr[:,:] = Q0

    # Create alpha and d
    f0=w0/(2*np.pi)
    d0=349.1
    alpha,d=alphad(f0,d0,nx,dx,nb)
    taue,taus=taucpml(Q0,f0,dt,d,alpha)

    taue=np.reshap(taue,(nx,1))
    tauex = np.tile(tauex,(1,ny))
