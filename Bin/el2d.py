import os
from ctypes import *
import importlib
import pyeps
import babin as ba
import pyeps
import el2dw

def libpath() :
  
  ''' libpath  returns the FULL path to shared libraries 

    Parameters:
     Returns:
       Full path to directory with shared libs.
  '''

  cwd = os.getcwd()
  top = "PyEl2d"
  pos = cwd.find(top)
  libpath = cwd[0:pos+len(top)] +"/Bin/"
  return libpath

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
  libpath=path+"/"+module1

  cdll.LoadLibrary(libpath)
  pyel2d = CDLL(libpath)

  #Initialize I/O
  pyel2d.LibeInit()

  return pyel2d

class el2d :
  def __init__(self,model,sresamp,snpflags):
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
                   snpflgs[3] = 1 store snapshot for exx 
                   snpflgs[4] = 1 store snapshot for eyy 
                   snpflgs[5] = 1 store snapshot for exy 

      Returns   : el2d object.
  '''

    self.el = el2dw.El2dNew(model,sresamp,snpflags)
  
  def solve(self,el,mod,sr,nt,rec=None,l=6) :
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
    el2dw.El2dSolve(el,mod,sr,rec,nt,l=6)
