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
  def tauborder(self,taue1dx,taue1dy,taus1dx,taus1dy,nx,ny):

    ''' tauborder computes taue and taus for top,bottom,right and 
        left border zone

    Parameters: 
      taue1dx: 1D array with taue relaxation times in the border  zone
               x-direction
      taus1dx: 1D array with taus relaxation times in the border zone
               x-direction
      taue1dy: 1D array with taue relaxation times in the border  zone
               y-direction
      taus1dy: 1D array with taus relaxation times in the border zone
               y-direction

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
        tauex[j,i] = taue1dx[j]
        tausx[j,i] = taus1dx[j]

    for i in range(0,nx):
      for j in range(0,ny):
        tauey[i,j] = taue1dy[j]
        tausy[i,j] = taus1dy[j]

    return(tauex,tauey,tausx,tausy)

  def staggerx(self, a):

    ''' stagger will interpolate a 2D array halfway between gridpoints 

    Parameters: 
      a: 2D Input array

    Returns:
      Output array interpolated half way beteen gridpoints:
      output = (a[i,j]+a[i+1,j])/2
      The last gridpoint is unchanged.
    
    ''' 

    b=pyeps.Fzeros(a.shape)
    for i in range(0,shape[1]):
      for j in range(0,shape[0]-1):
        b[i,j]=(a[i,j]+a[i+1,j])/2.0
        
    return(b)

  def __init__(self,vp,vs,rho,dx,dt,w0,nb=35,rheol=2,
               freesurface=1, **kwargs):
    ''' Initialization of the model object

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
      freesurface : =1 Turn free surface on =0 Turn free surface off

      Optional arguments (if not present default of Q=100000 is used)
      Ql    : Lambda Q-model
      Qm    : Mu Q-model array
      Qr    : Density Q-model array

      Returns:
      Model object is returned.
      model.mod contains a pointer to the eps object.

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
    alphax,ddx=tau.alphad(f0,d0,nx,dx,nb)
    taue1dx,taus1dx=tau.taucpml(Q0,f0,dt,ddx,alphax)
    alphay,ddy=tau.alphad(f0,d0,ny,dx,nb)
    taue1dy,taus1dy=tau.taucpml(Q0,f0,dt,ddy,alphay)

    # Create 2D arrays with relaxation times 
    tauex,tauey,tausx,tausy = \
                self.tauborder(taue1dx,taue1dy,taus1dx,taus1dy,nx,ny) 
    chiex,chiey,chisx,chisy = \
                self.tauborder(taue1dx,taue1dy,taus1dx,taus1dy,nx,ny) 
    etaex,etaey,etasx,etasy = \
                self.tauborder(taue1dx,taue1dy,taus1dx,taus1dy,nx,ny) 
    
    # Create eps model object.
    model.mod=modelw.ModelNew(vp,vs,rho,dx,w0,dt,nb,
                         freesurface,tausx,tausy,tauex,tauey,
                         chisx,chisy,chiex,chiey,etasx,etasy,
                         etaex,etaey)

