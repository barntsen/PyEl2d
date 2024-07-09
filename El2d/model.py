from ctypes import *
import time
import pyeps
import babin as ba
import pyeps
import sls


class model :
  ''' model creates a model suitable for the PyEl2d library 
      solver.

     Parameters: 
       pyac2d  : Reference to the pyEl2d wave propagation
                 library.

     Returns   : model object.       

  '''

  def __init__(self,pyac2d,par):
    t0=time.perf_counter()
    #Get the vp model
    fin = ba.bin(par.fvp)
    data=fin.read((par.ny,par.nx))
    #Convert 2d numpy float array to eps
    vp=pyeps.Store2df(pyac2d,data);

    #Get the vs model
    fin = ba.bin(par.fvs)
    data=fin.read((par.ny,par.nx))
    #Convert 2d numpy float array to eps
    vs=pyeps.Store2df(pyac2d,data);

    #Get the density model
    fin = ba.bin(par.frho)
    data=fin.read((par.ny,par.nx))
    #Convert 2d numpy float array to eps
    rho=pyeps.Store2df(pyac2d,data);

    #Get the Ql model
    fin = ba.bin(par.fql)
    data=fin.read((par.ny,par.nx))
    #Smooth the Ql model
    datax,datay=sls.method1(data,par.nb,par.dx,par.dt,par.w0)
    #Convert 2d numpy float arrays to eps arrays
    qlx=pyeps.Store2df(pyac2d,datax);
    qly=pyeps.Store2df(pyac2d,datay);

    #Get the Qm model
    fin = ba.bin(par.fqm)
    data=fin.read((par.ny,par.nx))
    #Smooth the Qm model
    datax,datay=sls.method1(data,par.nb,par.dx,par.dt,par.w0)
    #Convert 2d numpy float arrays to eps arrays
    qmx=pyeps.Store2df(pyac2d,datax);
    qmy=pyeps.Store2df(pyac2d,datay);

    #Get the Qp model                                                          
    fin = ba.bin(par.fqp)
    data=fin.read((par.ny,par.nx))
    #Smooth the Qp model
    datax,datay=sls.method1(data,par.nb,par.dx,par.dt,par.w0)
    #Convert 2d numpy float arrays to eps arrays
    qpx=pyeps.Store2df(pyac2d,datax);
    qpy=pyeps.Store2df(pyac2d,datay);

    #Get the Qs model                                                          
    fin = ba.bin(par.fqp)
    data=fin.read((par.ny,par.nx))
    #Smooth the Qp model
    datax,datay=sls.method1(data,par.nb,par.dx,par.dt,par.w0)
    #Convert 2d numpy float arrays to eps arrays
    qsx=pyeps.Store2df(pyac2d,datax);
    qsy=pyeps.Store2df(pyac2d,datay);

    print("Model conversion: ", time.perf_counter()-t0)
    #Create a new model
    # Set argument types
    pyac2d.ModelNew.argtypes=  [c_void_p,c_void_p,c_void_p,c_void_p,c_void_p,
                                c_void_p,c_void_p,c_void_p,c_void_p,c_void_p, 
                                c_void_p,
                                c_float,c_float,c_float,c_int,c_int]
    pyac2d.ModelNew.restype=c_void_p

    # Create a new model
    self.model=pyac2d.ModelNew (vp,vs,rho,qlx,qly,qmx,qmy,qpx,qpy,qsx,qsy,c_float(par.dx),c_float(par.dt),
                                c_float(par.w0),c_int(par.nb),c_int(par.rheol))
