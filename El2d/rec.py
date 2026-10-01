from ctypes import *
import numpy as np
import pyeps
import recw
import babin as ba

class rec :
  ''' rec is a class for creating receiver geometry. 

  '''

  def __init__(self,rx,ry,nt,resamp=None):

    ''' Create a new receiver object.

       Parameters :
         pyel2d   : Shared library with object code 
         rx       : 1D array with receiver coordinates x-comp.
         ry       : 1D array with receiver coordinates y-comp.
         nt       : No of time samples
         resamp   : (Optional) Resampling factor (relative to modeling timestep)
                    Default value = 1

       Returns    : 
       Receiver object. rec.re contains a pointer to the eps rec object.

    '''

    if resamp == None :
      resamp =1 
    self.nt = nt
    self.nr = rx.shape[0]
    self.data = pyeps.Fzeros((self.nt,self.nr))
    self.re=recw.RecNew(rx,ry,nt,resamp)

  def getrec(self,rec,dtype):
    ''' Get data record

       Parameters: 
         rec      : Receiver object
         data     : 2D array with dimension nt x nrec
                    where nt is the number of time samples
                    in the data and nrec is the number of receivers
         dtype    : = 0 Gets p
                  : = 1 Gets vx
                  : = 2 Gets vy
                  : = 3 Gets sigmaxx
                  : = 4 Gets sigmaxx
                  : = 5 Gets sigmaxy
 
         Returns  :  
           2D arry with data 

    '''

    recw.RecGetrec(rec,self.data,dtype)
    return(self.data)
