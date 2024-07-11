from ctypes import *
import pyeps  
import babin as ba 

class src :
  ''' src is a class for creating a source object '''

  def __init__(self,pyac2d,src,par):
    ''' Source constructor 

       Parameters:
         pyac2d : Pointer to the pyac2d module 
         src    : 1D source time function array
         par    : Object containing modelling parameters
                  set in the configuration (mod.py) file.

       Returns  : Source object
  
       The pyac2d module is implemented in eps
       and contains all essential wave propagation methods.

    '''

    # Set return type 
    pyac2d.SrcNew.restype=c_void_p
    
    # Convert python variables to eps variables
    sxx = pyeps.Store1di(pyac2d,par.sx)
    syy = pyeps.Store1di(pyac2d,par.sy)
    fxx = pyeps.Store1di(pyac2d,par.fx)
    fyy = pyeps.Store1di(pyac2d,par.fy)
    sflag = pyeps.Store1di(pyac2d,par.sflag)
    wavelet = pyeps.Store1df(pyac2d,src)

    #Create source eps object
    # Set argument types
    pyac2d.SrcNew.argtypes=[c_void_p,c_void_p,c_void_p,
                            c_void_p,c_void_p,c_void_p]
    self.src=pyac2d.SrcNew(wavelet,sxx,syy,fxx,fyy,sflag) 
