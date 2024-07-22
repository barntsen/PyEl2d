from ctypes import *
import pyeps  
import babin as ba 
import par.py

class src :
  ''' src is a class for creating a source object '''

  def __init__(self,pyac2d,sx,sy,sqxx,sqyy,sfx,sfy):
    ''' Source constructor 

       Parameters:
         

       Returns  : Source object
  
       The pyac2d module is implemented in eps

    '''

    
    # Convert python variables to eps variables
    sxx = pyeps.Store1di(pyac2d,par.sx)
    syy = pyeps.Store1di(pyac2d,par.sy)
    qxx = pyeps.Store1di(pyac2d,par.fx)
    qyy = pyeps.Store1di(pyac2d,par.fy)
    sflag = pyeps.Store1di(pyac2d,par.sflag)
    wavelet = pyeps.Store1df(pyac2d,src)

    #Create source eps object
    # Set argument types
    pyac2d.SrcNew.argtypes=[c_void_p,c_void_p,c_void_p,
                            c_void_p,c_void_p,c_void_p]
    # Set return type 
    pyac2d.SrcNew.restype=c_void_p
    # Do the call
    self.src=pyac2d.SrcNew(sx,sy,sqxx,sqyy,sfx,sfy) 
