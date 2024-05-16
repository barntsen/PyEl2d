from ctypes import *

import pyeps
import babin as ba
import pyeps


class el2d :
  ''' el2d is a  class for solving the elastic
      wave equation.  
     
     Parameters: 
       pyel2d  : Reference to the pyel2d wave propagation
                 library.

     Returns   : el2d object.

  '''


  def __init__(self,pyel2d,model):
    # Set return type
    pyel2d.El2dNew.restype=c_void_p

    #Create fd solver
    m = model.model
    pyel2d.El2dNew.argtypes=[c_void_p]
    self.el2d = pyel2d.El2dNew(m)
  
  def solve(self, pyel2d,model,src,rec,par) :
    ''' solve computes the solution for the elastic
        wave equation.

        Parameters : 
          pyel2d   : Reference to the pyel2d eps library.
          model    : model object.
          src      : src object.
          rec      : rec object.
          par      : parameter object set by the configuartion file.

    '''
    # Run the pyel2d solver.
    m=model.model
    # Set argument types
    # DEBUG
    print("call solve:")

    pyel2d.El2dSolve.argtypes=[c_void_p,c_void_p,c_void_p,c_void_p,c_int,c_int]
    pyel2d.El2dSolve(self.el2d,m,src.src,rec.rec,c_int(par.nt),c_int(par.l))

