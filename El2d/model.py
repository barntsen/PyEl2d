from ctypes import *
import time
import numpy as np
import matplotlib.pyplot as plt
import tau
import pyeps
import modelw

class model :

  ''' 
      model creates a model suitable for the PyEl2d library 
      solver.

  '''
  def tauborder(self,taue,taus,nx,ny):

    ''' tauborder computes taue and taus for top,bottom,right and 
        left border zone

    Parameters: 
      taue: 1D array with taue relaxation times in the cpml zone
      taus: 1D array with taus relaxation times in the cpml zone

    Returns:
      tauex: 2D array with taue realaxation times for left and right
             border zone
      tauey: 2D array with taue realaxation times for top and bottom
             border zone
      tausx: 2D array with taus realaxation times for left and right
             border zone
      tausy: 2D array with taus realaxation times for top and bottom
              border zone
    
    ''' 

    tauex = pyeps.Fzeros((nx,ny))
    tauey = pyeps.Fzeros((nx,ny))
    tausx = pyeps.Fzeros((nx,ny))
    tausy = pyeps.Fzeros((nx,ny))

    for i in range(0,ny):
      for j in range(0,nx):
        tauex[j,i] = taue[j]
        tausx[j,i] = taus[j]

    for i in range(0,nx):
      for j in range(0,ny):
        tauey[i,j] = taue[j]
        tausy[i,j] = taus[j]

    return(tauex,tauey,tausx,tausy)

  def __init__(self,vp,vs,rho,dx,dt,w0,nb=35,rheol=2,
               freesurface=1, **kwargs):
    ''' Constructor for the model object.

    Arguments: 
      vp    : P-wave velocity array 
      vs    : S-wave velocity array
      rho   : Density array
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
    nx = vp.shape[0]
    ny = vp.shape[1]

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
    alpha,d=tau.alphad(f0,d0,nx,dx,nb)
    taue,taus=tau.taucpml(Q0,f0,dt,d,alpha)

    # Create 2D arrays with relaxation times 
    tauex,tauey,tausx,tausy = self.tauborder(taue,taus,nx,ny) 
    chiex,chiey,chisx,chisy = self.tauborder(taue,taus,nx,ny) 
    etaex,etaey,etasx,etasy = self.tauborder(taue,taus,nx,ny) 
    
    model.mod=modelw.ModelNew(vp,vs,rho,dx,w0,dt,nb,
                         freesurface,tausy,tausx,tauey,tauex,
                         chisy,chisx,chiey,chiex,etasy,etasx,
                         etaey,etaex)

