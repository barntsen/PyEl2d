# Class for creating a model suitable for use
# with El2dSolve

import libe  

class model :
  float [*,*] tausx,tauex
  float [*,*] tausy,tauey
  float [*,*] chisx,chiex
  float [*,*] chisy,chiey
  float [*,*] chisxxy,chiexxy
  float [*,*] chisyxy,chieyxy
  float [*,*] etasx,etaex
  float [*,*] etasy,etaey
  float [*,*] lambda
  float [*,*] nux,nuy
  float [*,*] mu,muxy
  float dt,dx,w0
  int   nb
  int   nx,ny
  int   freesurface


def struct model ModelNew(float [*,*] Lambda,     float [*,*] mu,      \
                          float [*,*] muxy,                            \
                          float [*,*] nux,    float [*,*] nuy,         \
                          float dx,           float dt,                \
                          float w0,           int   nb,                \
                          int   freesurface,                           \
                          float [*,*] tausx,  float [*,*] tausy,       \
                          float [*,*] tauex,  float [*,*] tauey,       \
                          float [*,*] chisx,  float [*,*] chisy,       \
                          float [*,*] chiex,  float [*,*] chiey,       \
                          float [*,*] chisxxy,  float [*,*] chisyxy,       \
                          float [*,*] chiexxy,  float [*,*] chieyxy,       \
                          float [*,*] etasx,  float [*,*] etasy,       \
                          float [*,*] etaex,  float [*,*] etaey):

  # ModelNew creates a new model.
  #
  # Parameters: 
  #
  #   Lambda :  Lame lambda parameter
  #   mu     :  Lame mu parameter
  #   nux:   : Inverse density staggered in the x-direction
  #   nuy:   : Inverse density staggered in the y-direction
  #   Dx :  Grid interval in x- and y-directions
  #   Dt :  Modeling time sampling interval
  #   w0 :  Q-model peak angular frequency
  #   nb :  Width of border attenuation zone (in grid points)
  #   freesurface : =0 No free surface, =1 Free surface 
  #   tauex : Epsilon Relaxation time for lambda stretched in x-direction
  #   tauey : Epsilon Relaxation time for lambda stretched in y-direction
  #   tauemx : Relaxation time for mu      stretched in x-direction
  #   tauemy : Relaxation time for mu      stretched in y-direction
  #   tauenx : Relaxation time for nu      stretched in x-direction
  #   taueny : Relaxation time for nu      stretched in y-direction
  # 
  # Return:  
  #   Model structure
  #
  #   ModelNew creates the parameters needed by the El2d object
  #   to perform 2D Elastic modeling.

  nx = len(Lambda,0)
  ny = len(Lambda,1)

  m = new(struct model) 
  m.tausx =tausx
  m.tausy =tausy
  m.tauex =tauex
  m.tauey =tauey
  m.chisx =chisx
  m.chisy =chisy
  m.chiex =chiex
  m.chiey =chiey
  m.chisxxy =chisxxy
  m.chisyxy =chisyxy
  m.chiexxy =chiexxy
  m.chieyxy =chieyxy
  m.etasx =etasx
  m.etasy =etasy
  m.etaex =etaex
  m.etaey =etaey
  m.nux    = nux
  m.nuy    = nuy
  m.lambda = Lambda
  m.mu     = mu
  m.muxy   = muxy
  m.dt = dt
  m.w0 = w0
  m.dx = dx
  m.nb = nb
  m.freesurface = freesurface
  m.nx = nx
  m.ny = ny

  return(m)


