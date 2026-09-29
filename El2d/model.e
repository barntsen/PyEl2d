# Class for creating a model suitable for use
# with El2d.solve

import libe  

class model :
  float [*,*] tausx,tauex
  float [*,*] tausy,tauey
  float [*,*] chisx,chiex
  float [*,*] chisy,chiey
  float [*,*] etasx,etaex
  float [*,*] etasy,etaey
  float [*,*] lambda,  mu, nu
  float dt,dx,w0
  int   nb
  int   nx,ny
  int   freesurface


def struct model ModelNew(float [*,*] vp,     float [*,*] vs,          \
                          float [*,*] rho,    float dx,                \
                          float w0,           float dt,                \
                          int   nb,           int   freesurface,       \
                          float [*,*] tausx,  float [*,*] tausy,       \
                          float [*,*] tauex,  float [*,*] tauey,       \
                          float [*,*] chisx,  float [*,*] chisy,       \
                          float [*,*] chiex,  float [*,*] chiey,       \
                          float [*,*] etasx,  float [*,*] etasy,       \
                          float [*,*] etaex,  float [*,*] etaey):

  # ModelNew creates a new model.
  #
  # Parameters: 
  #
  #   vp :  P-wave velocity model
  #   vs :  S-wave velocity model
  #   rho:  Density 
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

  nx = len(vp,0)
  ny = len(vp,1)

  m = new(struct model) 
  m.mu     = new(float[nx,ny])
  m.lambda = new(float[nx,ny])
  m.nu     = new(float[nx,ny])

  m.tausx =tausx
  m.tausy =tausy
  m.tauex =tauex
  m.tauey =tauey
  m.chisx =chisx
  m.chisy =chisy
  m.chiex =chiex
  m.chiey =chiey
  m.etasx =etasx
  m.etasy =etasy
  m.etaex =etaex
  m.etaey =etaey

  for j in range(0,ny) :
    for i in range(0,nx) :
      m.nu[i,j]=1.0/rho[i,j]
      m.mu[i,j]=vs[i,j]*vs[i,j]*rho[i,j]
      m.lambda[i,j] = rho[i,j]*(vp[i,j]*vp[i,j] - 2.0*vs[i,j]*vs[i,j])

  m.dt = dt
  m.w0 = w0
  m.dx = dx
  m.nb = nb
  m.freesurface = freesurface
  m.nx = nx
  m.ny = ny

  return(m)


