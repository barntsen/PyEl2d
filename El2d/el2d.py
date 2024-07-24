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


  def __init__(self,pyel2d,model,sresamp,snpflags):

    # convert snpflags to eps array
    ssnpflags = pyeps.Store1di(pyel2d,snpflags)

    #Create fd solver
    m = model.model
    # Set input type arguments
    pyel2d.El2dNew.argtypes=[c_void_p,c_int,c_void_p]
    # Set return type argument
    pyel2d.El2dNew.restype=c_void_p
    self.el2d = pyel2d.El2dNew(m,sresamp,ssnpflags)
  
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
    pyel2d.El2dSolve.argtypes=[c_void_p,c_void_p,c_void_p,c_void_p,c_int,c_int]

    # Make call to solver
    pyel2d.El2dSolve(self.el2d,m,src.src,rec.rec,c_int(par.nt),c_int(par.l))

