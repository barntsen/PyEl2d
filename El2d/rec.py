
from ctypes import *
import numpy as np
import pyeps
import babin as ba


class rec :
  ''' rec is a class for creating receiver geometry from
       the variables in the configuration (mod.py) file

       Parameters :
         pyac2d   : Reference to the pyac2d eps wave
                    propagation library.    

         par      : Object with parameters set in the
                    configuration (mod.py) file.
       
       Returns    : Receiver object.
  '''

  def __init__(self,pyel2d,rx,ry,nt,resamp):
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
          pyel2d :  Pointer to the eps pyac2d library.
          rec     :  Receiver object
          dtype    : = 0 Gets sigmaxx
                  : = 1 Gets sigmayy
                  : = 2 Gets vx 
                  : = 2 Gets vy 
 
          Returns :  2D arry with data 
    '''

    # Set argument types
    pyel2d.RecSave.argtypes  =[c_void_p,c_int]
    pyel2d.RecSave.returntype=[c_void_p]
    rval=pyel2d.RecGetrec(self.rec,dtype)
    rarr = np.zeros((self.nr,self.nt))
    pyeps.Get2df(pyel2d,rval,rarr)
    return rarr
    

  def save(self,pyac2d,par):
    ''' save records data to file.

        Parameters: 
          pyac2da :  Pointer to the eps pyac2d library.
          par     :  object with parameters set in the
                     configuration (mod.py) file.
 
          Returns :  None
    '''
    fname  = par.press   # Output file name for pressure recording
    fp=pyeps.Store1ds(pyac2d,fname)
    # Set argument types
    pyac2d.RecSave.argtypes=[c_void_p,c_void_p]
    pyac2d.RecSave(self.rec,fp)
