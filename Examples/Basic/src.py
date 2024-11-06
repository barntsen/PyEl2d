from math import *
from ctypes import *
import numpy as np
import pyeps  
import babin as ba 

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
    
  wavelet = np.zeros(nt,dtype=np.float32)
  w0 = 2.0*3.14159*f0;

  for i in range(0,nt) :
    t = i*dt-t0;
    arg = w0*t;
    wavelet[i] = (1.0-0.5*arg*arg)*exp(-0.25*arg*arg);

  return wavelet

class src :

  ''' src is a class for creating a source object '''

  def __init__(self,pyac2d,sx,sy,nt,dt,f0=None,t0=None,**kwargs) :


    ''' init__ creates a new source object.

    Arguments:
      pyac2d : shared library with object code
      sx :   : 1D array with x-coordinate of source position
      sy     : 1D array with y-coordinate of source position
      nt     : Number of time samples in the source function
      dt     : Time sampling interval for source time functions
      f0     : (Optional) Default ricker pulse peak frequency. 
               Only used when none of the source types below are specified.
      t0     : (Optional) Default ricker pulse time delay. 
               Only used when none of the source types below are specified.
      sfx    : (Optional) 2D array of fx (x component of force) of force source.
               fx[i,j] contains time sample no i for source no j
               at position (sx[j],sy[j]). Default is value is a zero array.
      sfy    : (Optional) 2D array of fy (y component of force) of force source.
               fy[i,j] contains time sample no i for source no j
               at position (sx[j],sy[j]). Default value is a zero array.
      sqxx   : (Optional) 2D array of sxx (xx component of stress) of explosive source.
               sqxx[i,j] contains time sample no i for source no j
               at position (sx[j],sy[j]). Default value is a zero array.
      sqyy :   (Optional) 2D array of syy (yy component of stress) of explosive source.
               sqyy[i,j] contains time sample no i for source no j
               at position (sx[j],sy[j]). Default value is a zero array.

      If all arrays sfx,sfy,sqxx and sqyy are missing the sqxx and sqyy is
      set with the time function equal to a ricker pulse with parameters f0 and t0.

    '''

    # Set sources
    
    nosource = True
    
    if 'sfx' in kwargs :
      sfx = kwargs['sfx']
      nosource = False
    else :
      sfx = np.zeros((nt,1), dtype=np.float32)

    if 'sfy' in kwargs :
      sfy = kwargs['sfy'] 
      nosource = False
    else :
      sfy = np.zeros((nt,1), dtype=np.float32)

    if 'sqxx' in kwargs :
      sqxx = kwargs['sqxx'] 
      nosource = False
    else :
      sqxx = np.zeros((nt,1), dtype=np.float32)

    if 'sqyy' in kwargs :
      sqyy = kwargs['sqyy'] 
      nosource = False
    else :
      sqyy = np.zeros((nt,1), dtype=np.float32)
    
    if(nosource == True) :
      sqxx[:,0] = ricker(nt,f0,t0,dt)
      sqyy[:,0] = ricker(nt,f0,t0,dt)
    
    # Convert python variables to eps variables

    sxp = pyeps.Store1di(pyac2d,sx)
    syp = pyeps.Store1di(pyac2d,sy)
    sqxxp = pyeps.Store2df(pyac2d,sqxx)
    sqyyp = pyeps.Store2df(pyac2d,sqyy)
    sfxp = pyeps.Store2df(pyac2d,sfx)
    sfyp = pyeps.Store2df(pyac2d,sfy)

    #Create source eps object

    # Set argument types
    pyac2d.SrcNew.argtypes=[c_void_p,c_void_p,c_void_p,
                            c_void_p,c_void_p,c_void_p]
    # Set return type 
    pyac2d.SrcNew.restype=c_void_p
    # Do the call
    self.src=pyac2d.SrcNew(sxp,syp,sqxxp,sqyyp,sfxp,sfyp) 

