from ctypes import *
import time
import matplotlib.pyplot as pl
import pyeps
import babin as ba
import pyeps
import q 

class model :
  ''' model creates a model suitable for the PyEl2d library 
      solver.

  '''

  def __init__(self,pyac2d,Vp,Vs,Rho,Ql,Qm,Qp,Qs,par):
    ''' Constructor for the model object.

    Arguments: 
      pyac2d: Reference to the shared library with eps functions
      Vp    : P-wave velocity array 
      Vs    : S-wave velocity array
      Rho   : density array
      Ql    : Lambda Q-model
      Qm    : Mu Q-model array
      Qp    : Density P-wave Q-model array
      Qs    : Density S-wave Q-model array
      par   : Parameters for modelling (see the mod.py configuration file)

    All arrays are 2D with the first dimension in the y-direction.

    '''
 
    #Convert vp array to eps
    vp=pyeps.Store2df(pyac2d,Vp);

    #Convert vs array to eps
    vs=pyeps.Store2df(pyac2d,Vs);

    #Convert density array to eps
    rho=pyeps.Store2df(pyac2d,Rho);

    #Smooth the Ql model
    Qlx,Qly=q.sls(Ql,par.nb,par.dx,par.dt,par.w0)
    #Convert Q arrays to eps
    qlx=pyeps.Store2df(pyac2d,Qlx);
    qly=pyeps.Store2df(pyac2d,Qly);

    #Smooth the Qm model
    Qmx,Qmy=q.sls(Qm,par.nb,par.dx,par.dt,par.w0)
    #Convert Q arrays to eps
    qmx=pyeps.Store2df(pyac2d,Qmx);
    qmy=pyeps.Store2df(pyac2d,Qmy);

    #Smooth the Qp model
    Qpx,Qpy=q.sls(Qp,par.nb,par.dx,par.dt,par.w0)
    #Convert Q arrays to eps
    qpx=pyeps.Store2df(pyac2d,Qpx);
    qpy=pyeps.Store2df(pyac2d,Qpy);

    #Smooth the Qs model
    Qsx,Qsy=q.sls(Qs,par.nb,par.dx,par.dt,par.w0)
    #Convert Q arrays to eps
    qsx=pyeps.Store2df(pyac2d,Qsx);
    qsy=pyeps.Store2df(pyac2d,Qsy);

    #Create a new model
    # Set argument and return types
    pyac2d.ModelNew.argtypes=  [c_void_p,c_void_p,c_void_p,c_void_p,c_void_p,
                                c_void_p,c_void_p,c_void_p,c_void_p,c_void_p, 
                                c_void_p,
                                c_float,c_float,c_float,c_int,c_int]
    pyac2d.ModelNew.restype=c_void_p

    #Create a pointer to the model eps object.
    self.model=pyac2d.ModelNew (vp,vs,rho,qlx,qly,qmx,qmy,qpx,
                                qpy,qsx,qsy,c_float(par.dx),c_float(par.dt),
                                c_float(par.w0),c_int(par.nb),c_int(par.rheol))
