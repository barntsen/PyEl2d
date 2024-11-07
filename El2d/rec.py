from ctypes import *
import numpy as np
import pyeps
import babin as ba

class rec :
  ''' rec is a class for creating receiver geometry. 

  '''

  def __init__(self,pyel2d,rx,ry,nt,resamp=None):

    ''' Create a new receiver object.

       Parameters :
         pyel2d   : Shared library with object code 
         rx       : 1D array with receiver coordinates x-comp.
         ry       : 1D array with receiver coordinates y-comp.
         nt       : No of time samples
         resamp   : (Optional) Resampling factor (relative to modeling timestep)
                    Default value = 1

       Returns    : Receiver object.

    '''

    if resamp == None :
      resamp =1 
    self.nt = nt
    self.nr = rx.shape[0]
    pyel2d.RecNew.restype=c_void_p
    # Convert from python variables to eps variables
    rxx = pyeps.Store1di(pyel2d,rx)  
    ryy = pyeps.Store1di(pyel2d,ry)  
    # Create receiver eps object.
    # Set argument types 
    pyel2d.RecNew.argtypes=[c_void_p,c_void_p,c_int,c_int]
    self.rec= pyel2d.RecNew(rxx,ryy,c_int(nt),c_int(resamp))

  def getrec(self,pyel2d,dtype):
    ''' Get data record

       Parameters: 
         pyel2d   :  Shared library with object code
         dtype    : = 0 Gets sigmaxx
                  : = 1 Gets sigmayy
                  : = 2 Gets vx 
                  : = 3 Gets vy 
 
         Returns  :  
           2D arry with data 

    '''

    # Set argument types
    pyel2d.RecGetrec.argtypes  =[c_void_p,c_int]
    pyel2d.RecGetrec.restype=c_void_p
    rval=pyel2d.RecGetrec(self.rec,dtype)
    rarr = np.zeros((self.nr,self.nt), dtype=np.float32, order='F')
    pyeps.Get2df(pyel2d,rval,rarr)
    return rarr
