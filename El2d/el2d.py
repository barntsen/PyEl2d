import os
from ctypes import *
import importlib
import pyeps
import babin as ba
import pyeps

def setup(path,version) :
  
  ''' setup loads the object library 

    Parameters:
       path:    FULL path to the shared library 
                f.ex if the PyEl2d install directory
                is "/home/barn/PyEl2d"
                the path would be "/home/barn/PyEl2d/Bin".
   
       version : "c" for pure c-version
                 "omp" for openMP version
                 "cuda" for cuda version 
                 "hip"  for hip version
     Returns:
       reference to the shared library
  '''

  #Get pyeps library
  if version == 'c' :
    module1 = 'pyel2dcpu.so'
  elif version == 'cuda':
    module1 = 'pyel2dcuda.so'
    os.environ['NTHREADS'] = str(1024)
    os.environ['NBLOCKS'] = str(1024)
  elif version == 'omp':
    module1 = 'pyel2domp.so'
    os.environ['OMP_NUM_THREADS']=str(6)

  libpath=path+module1
  cdll.LoadLibrary(libpath)
  pyel2d = CDLL(libpath)

  #Initialize I/O
  pyel2d.LibeInit()

  return pyel2d

class el2d :
  def __init__(self,pyel2d,model,sresamp,snpflags):
    ''' el2d is a  class for solving the elastic
      wave equation.  
     
    Parameters: 
      pyel2d   : Reference to the pyel2d shared library
      model    : Model object
      sresamp  : Resampling factor relative to the
                 timestep used in modeling
      snpflags : 1D array 
                   snpflgs[0] = 1 store snapshot for p
                   snpflgs[1] = 1 store snapshot for vx
                   snpflgs[2] = 1 store snapshot for vy 
                   snpflgs[3] = 1 store snapshot for e 
                   snpflgs[4] = 1 store snapshot for exy 

      Returns   : el2d object.
  '''

    # convert snpflags to eps array
    snpflags = pyeps.Store1di(pyel2d,snpflags)

    #Create fd solver
    m = model.model
    # Set input type arguments
    pyel2d.El2dNew.argtypes=[c_void_p,c_int,c_void_p]
    # Set return type argument
    pyel2d.El2dNew.restype=c_void_p
    sresamp = int(sresamp)
    self.el2d = pyel2d.El2dNew(m,sresamp,snpflags)
  
  def solve(self, pyel2d,model,src,rec,nt,l=6) :
    ''' solve computes the solution for the elastic
        2D wave equation.

        Parameters : 
          pyel2d   : Reference to the pyel2d eps library.
          model    : model object.
          src      : src object.
          rec      : rec object.
          nt       : No of timesteps
          l        : Differentiator length

    '''
    # Run the pyel2d solver.
    m=model.model
    # Set argument types
    pyel2d.El2dSolve.argtypes=[c_void_p,c_void_p,c_void_p,c_void_p,c_int,c_int]

    # Make call to solver
    pyel2d.El2dSolve(self.el2d,m,src.src,rec.rec,c_int(nt),c_int(l))
