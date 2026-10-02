from math import *
from ctypes import *
import numpy as np
import pyeps  
import babin as ba 
import srcw

def ricker(nt,f0,t0,dt) :

  ''' ricker creates a ricker wavelet.
        

      Parameters :
        nt       : No of time samples
        f0       : Peak frequency
        t0       : Time delay
        dt       : Time sampling interval

      Returns :
        A 1D array with the Ricker pulse is returned.

  '''       
    
  wavelet = pyeps.Fzeros((nt,))
  w0 = 2.0*3.14159*f0;

  for i in range(0,nt) :
    t = i*dt-t0;
    arg = w0*t;
    wavelet[i] = (1.0-0.5*arg*arg)*exp(-0.25*arg*arg);
  return wavelet

class src :

  ''' src is a class for creating a source object '''

  def __init__(self,sx,sy,nt,dt,f0=25.0,t0=0.05,**kwargs) :


    ''' init__ creates a new source object.

    Arguments:
      sx    : 1D array with x-coordinate of source position
      sy    : 1D array with y-coordinate of source position
      nt    : Number of time samples in the source function
      dt    : Time sampling interval for source time functions
      f0    : (Optional) Default ricker pulse peak frequency. 
              Only used when none of the source types below are specified.
      t0    : (Optional) Default ricker pulse time delay. 
              Only used when none of the source types below are specified.
      sfx   : (Optional) 2D array of fx (x component of force) of force source.
              fx[i,j] contains time sample no i for source no j
              at position (sx[j],sy[j]). 
      sfy   : (Optional) 2D array of fy (y component of force) of force source.
              fy[i,j] contains time sample no i for source no j
              at position (sx[j],sy[j]). 
      sqxx  : (Optional) 2D array of sxx (xx component of stress) of 
              source.
              sqxx[i,j] contains time sample no i for source no j
              at position (sx[j],sy[j]). 
      sqyy :  (Optional) 2D array of syy (yy component of stress) of 
              source.
              sqyy[i,j] contains time sample no i for source no j
              at position (sx[j],sy[j]). Default value is a zero array.

      sqxy :  (Optional) 2D array of sxy (xy component of stress) of 
              source.
              sqxy[i,j] contains time sample no i for source no j
              at position (sx[j],sy[j]). Default value is a zero array.

      Returns:

      Src model object is returned. src.sr contains a pointer to
      the eps src object.
      If all arrays sfx,sfy,sqxx, sqyy and sqxy are missing the sqxx and 
      sqyy is set with the time function equal to a ricker pulse with 
      parameters f0 and t0.

    '''

    # Set sources
    
    nosource = True
    
    if 'sfx' in kwargs :
      sfx = kwargs['sfx']
      nosource = False
    else :
      sfx = pyeps.Fzeros((nt,1))

    if 'sfy' in kwargs :
      sfy = kwargs['sfy'] 
      nosource = False
    else :
      sfy = pyeps.Fzeros((nt,1))

    if 'sqxx' in kwargs :
      sqxx = kwargs['sqxx'] 
      nosource = False
    else :
      sqxx = pyeps.Fzeros((nt,1))

    if 'sqyy' in kwargs :
      sqyy = kwargs['sqyy'] 
      nosource = False
    else :
      sqyy = pyeps.Fzeros((nt,1))

    if 'sqxy' in kwargs :
      sqxy = kwargs['sqxy'] 
      nosource = False
    else :
      sqxy = pyeps.Fzeros((nt,1))
    
    if(nosource == True) :
      f0=25.0
      t0=0.05
      sqxx = pyeps.Fzeros((nt,1))
      sqyy = pyeps.Fzeros((nt,1))
      tmp       = ricker(nt,f0,t0,dt)
      sqxx[:,0] = tmp[:] 
      sqyy[:,0] = tmp[:]
    
    self.sr=srcw.SrcNew(sx,sy,sqxx,sqyy,sqxy,sfx,sfy)

