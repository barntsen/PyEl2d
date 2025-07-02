from ctypes import *
import time
import numpy as np
import matplotlib.pyplot as pl
import q
import pyeps
import babin as ba

class model :

  ''' 
      model creates a model suitable for the PyEl2d library 
      solver.

  '''

  def __init__(self,pyac2d,Vp,Vs,Rho,dx,dt,w0,nb=35,rheol=2,
               Freesurface=1,**kwargs):
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
      Qp    : Density Q-model array

    All arrays are 2D with the first dimension in the x-direction.

    '''

    #Convert vp array to eps
    vp=pyeps.Store2df(pyac2d,Vp);

    #Convert vs array to eps
    vs=pyeps.Store2df(pyac2d,Vs);

    #Convert density array to eps
    rho=pyeps.Store2df(pyac2d,Rho);
    
    nx = Vp.shape[0]
    ny = Vp.shape[1]

    if 'Ql' in  kwargs :
      Ql = kwargs['Ql']
    else :
      Ql=np.ones((nx,ny), dtype=np.float32,order='F')
      Ql[:,:]=100000.0

    if 'Qm' in kwargs == None :
      Qm = kwargs['Ql']
    else :
      Qm=np.ones((nx,ny), dtype=np.float32,order='F')
      Qm[:,:]=100000.0

    if 'Qp' in kwargs :
      Qp = kwargs['Ql']
    else :
      Qp=np.ones((nx,ny), dtype=np.float32,order='F')
      Qp[:,:] = 100000.0

    if Ql is None :
      Ql=np.ones((nx,ny), dtype=np.float32,order='F')
      Ql[:,:] = 100000.0

    if Qm is None :
      Qm=np.ones((nx,ny), dtype=np.float32,order='F')
      Qm[:,:] = 100000.0

    if Qp is None :
      Qp=np.ones((nx,ny), dtype=np.float32,order='F')
      Qp[:,:] = 100000.0

    #Smooth the Ql model
    Qlx,Qly=q.sls(Ql,nb,dx,dt,w0,Freesurface)

    #Convert Q arrays to eps
    qlx=pyeps.Store2df(pyac2d,Qlx);
    qly=pyeps.Store2df(pyac2d,Qly);

    #Smooth the Qm model
    Qmx,Qmy=q.sls(Qm,nb,dx,dt,w0,Freesurface)
    #Convert Q arrays to eps
    qmx=pyeps.Store2df(pyac2d,Qmx);
    qmy=pyeps.Store2df(pyac2d,Qmy);

    #Smooth the Qp model
    Qpx,Qpy=q.sls(Qp,nb,dx,dt,w0,Freesurface)
    #Convert Q arrays to eps
    qpx=pyeps.Store2df(pyac2d,Qpx);
    qpy=pyeps.Store2df(pyac2d,Qpy);

    #Create a new model
    # Set argument and return types
    pyac2d.ModelNew.argtypes=  [c_void_p,c_void_p,c_void_p,c_void_p,c_void_p,
                                c_void_p,c_void_p,c_void_p,c_void_p, 
                                c_float,c_float,c_float,c_int,c_int]
    pyac2d.ModelNew.restype=c_void_p

    #Create a pointer to the model eps object.
    self.model=pyac2d.ModelNew (vp,vs,rho,qlx,qly,qmx,qmy,qpx,
                                qpy,c_float(dx),c_float(dt),
                                c_float(w0),c_int(nb),c_int(rheol),
                                c_int(Freesurface))
