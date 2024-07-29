from ctypes import *
import pyeps  
import babin as ba 

class src :
  ''' src is a class for creating a source object '''

  def __init__(self,pyac2d,sx,sy,sqxx,sqyy,sfx,sfy):
    ''' _init__ creates a new source object.

    Arguments:
      sx : 1D array with x-coordinate of source position
      sy : 1D array with y-coordinate of source position
      sqxx : 2D array of sxx (xx component of stress) of explosive source.
             sqxx[i,j] contains time sample no i for source no j
             at position (sx[j],sy[j]). 
      sqyy : 2D array of syy (yy component of stress) of explosive source.
             sqyy[i,j] contains time sample no i for source no j
             at position (sx[j],sy[j]). 
      sfx  : 2D array of fx (x component of force) of force source.
             fx[i,j] contains time sample no i for source no j
             at position (sx[j],sy[j]). 
      sfy  : 2D array of fy (y component of force) of force source.
             fy[i,j] contains time sample no i for source no j
             at position (sx[j],sy[j]). 
    
    The source functions sqxx,sqyy,fx and fy are all added as
    sources, if one or more is not needed the arrays must
    contain zeros. 

    '''
    
    # Convert python variables to eps variables

    sxp = pyeps.Store1di(pyac2d,sx)
    print("sx stored")
    syp = pyeps.Store1di(pyac2d,sy)
    print("sy stored")
    sqxxp = pyeps.Store2df(pyac2d,sqxx)
    print("sqxx stored")
    print("sqyy shape: ", sqyy.shape)
    sqyyp = pyeps.Store2df(pyac2d,sqyy)
    print("sqyy stored")
    sfxp = pyeps.Store2df(pyac2d,sfx)
    print("sfx stored")
    sfyp = pyeps.Store2df(pyac2d,sfy)
    print("sfy stored")

    print("All Sources stored")

    #Create source eps object
    # Set argument types
    pyac2d.SrcNew.argtypes=[c_void_p,c_void_p,c_void_p,
                            c_void_p,c_void_p,c_void_p]
    # Set return type 
    pyac2d.SrcNew.restype=c_void_p
    # Do the call
    self.src=pyac2d.SrcNew(sxp,syp,sqxxp,sqyyp,sfxp,sfyp) 
