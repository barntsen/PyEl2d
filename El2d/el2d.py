from ctypes import *
import pyeps
import babin as ba
import pyeps


class el2d :
  def __init__(self,pyel2d,model,sresamp,snpflags):
    ''' el2d is a  class for solving the elastic
      wave equation.  
     
    Parameters: 
      pyel2d  : Reference to the pyel2d shared library
      model   : Model object
      sreamp  : Resampling factor relative to the
              timestep used in modeling
      snpflags: 1D array snpflgs[0] = 1 store snapshot for sigmaxx
                       snpflgs[1] = 1 store snapshot for sigmaxx
                       snpflgs[2] = 1 store snapshot for vx 
                       snpflgs[3] = 1 store snapshot for vy 

      Attributes : el2d is a pointer to the eps El2d object

      Returns   : el2d object.

  '''

    # convert snpflags to eps array
    ssnpflags = pyeps.Store1di(pyel2d,snpflags)

    #Create fd solver
    m = model.model
    # Set input type arguments
    pyel2d.El2dNew.argtypes=[c_void_p,c_int,c_void_p]
    # Set return type argument
    pyel2d.El2dNew.restype=c_void_p
    sresamp = int(sresamp)
    self.el2d = pyel2d.El2dNew(m,sresamp,ssnpflags)
  
  def solve(self, pyel2d,model,src,rec,nt,l) :
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
