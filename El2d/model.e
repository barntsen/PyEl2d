# Model 

import libe  

class model :
  int Nx,Ny;
  int Nb;
  float W0;
  float [*,*] Qlx;
  float [*,*] Qly;
  float [*,*] Qmx;
  float [*,*] Qmy;
  float [*,*] Qpx;
  float [*,*] Qpy;
  float [*,*] Lambda;
  float [*,*] Mu;
  float [*,*] Muxy;
  float [*,*] Dmuxyx;
  float [*,*] Dmuxyy;
  float [*,*] Dlambdax;
  float [*,*] Dlambday;
  float [*,*] Dmux;
  float [*,*] Dmuy;
  float [*,*] Drhopx;
  float [*,*] Drhopy;
  float [*,*] Rho;
  float [*,*] Rhox;
  float [*,*] Rhoy;
  float [*,*] Alpha1x;
  float [*,*] Alpha1y;
  float [*,*] Alpha2x;
  float [*,*] Alpha2y;
  float [*,*] Beta1x;
  float [*,*] Beta2x;
  float [*,*] Beta1y;
  float [*,*] Beta2y;
  float [*,*] Eta1x;
  float [*,*] Eta1y;
  float [*,*] Eta2x;
  float [*,*] Eta2y;
  float [*] dx;
  float [*] dy;
  float [*] dx1;
  float [*] dy1;
  float [*] dx2;
  float [*] dy2;
  float Dx;
  float Dt;
  int   Freesurface;


# Constants
const MAXWELL = 1
const SLS     = 2
const MAXWELLR = 3
const CPML = 4

def int Modeld(float [*] d, float dx, int nb):

  # Modeld creates a 1D quadratic profile function tapering the left
  # and right borders.
  #
  # Parameters:
  #   d  : Input 1D float array
  #   dx : Grid spacing
  #   nb : Width of boarder zone
  #
  #  Return: 
  #    OK if no error, ERR in all other cases.

  int i,n;

  n = len(d,0);

  for(i=0; i<n; i=i+1):
    d[i]=1.0;
  


  # Taper left border
  for(i=0; i<nb;i=i+1):
      d[i] = d[i]*((cast(float,i)*dx)/(cast(float,nb)*dx)    \
                 *(cast(float,i)*dx)/(cast(float,nb)*dx));
  

  # taper right border
  for(i=n-1-nb; i<n;i=i+1):
      d[i] = d[i]*((cast(float,n-1-i)*dx)/(cast(float,nb)*dx) \
                 *(cast(float,n-1-i)*dx)/(cast(float,nb)*dx));
  
  return(OK);


def int Modele(float [*] d, float dx, int nb):

  # Modele creates a 1D quadratic profile function tapering the 
  # right border.
  #
  # Parameters:
  #   d  : Input 1D float array
  #   dx : Grid spacing
  #   nb : Width of boarder zone
  #
  #  Return: 
  #    OK if no error, ERR in all other cases.

  int i,n;

  n = len(d,0);

  for(i=0; i<n; i=i+1):
    d[i]=1.0;
  

  # taper right border
  for(i=n-1-nb; i<n;i=i+1):
      d[i] = d[i]*((cast(float,n-1-i)*dx)/(cast(float,nb)*dx)  \
                 *(cast(float,n-1-i)*dx)/(cast(float,nb)*dx));
  
  return(OK);


def float [*,*] Modelcopy(float [*,*] a):

  # Modelcopy returns a copy of a 2D arry.
  #
  # Parameters:
  #   a : 2D Array to be copied.
  #
  # Return:
  #   2D array with copy of a.
  
  int nx,ny;
  int i,j;
  float [*,*] b;

  nx=len(a,0);
  ny=len(a,1);
  b=new(float [nx,ny]);

  for (j=0; j<ny; j=j+1):
    for (i=0; i<nx; i=i+1):
      b[i,j] = a[i,j];
    
  

  return(b);


def int Modelstaggerx(float [*,*] a, float [*,*] astagg):

  # Modelstaggerx staggers a 2D array in the x-direction 
  #
  # Parameters
  #    a      : Input array
  #    
  # Returns
  #   astagg : staggered output array
  #
  # astagg[i,j] = 0,5*(a[i]+a[i+1])
  # astagg[nx-1,ny-1] = a[nx-1,ny-1].
  # where nx=len(a,0) and ny=len(a,1)

  int nx,ny;
  int i,j;

  nx=len(a,0);
  ny=len(a,1);

  for (j=0; j<ny; j=j+1):
    for (i=0; i<nx; i=i+1):
      astagg[i,j] = a[i,j];
    
  

  for (j=0; j<ny; j=j+1):
    for (i=0; i<nx-1; i=i+1):
      astagg[i,j] = 0.5*(a[i,j] + a[i+1,j]);
    
  
  return(OK);


def int Modelstaggery(float [*,*] a, float [*,*] astagg):

  # Modelstaggery staggers a 2D array in the y-direction 
  #
  # Parameters
  #   a      : Input array
  #    
  # Returns
  #   astagg : staggered output array
  #
  # astagg[i,j] = 0,5*(a[i,j]+a[i,j+1])
  # astagg[nx-1,ny-1] = a[nx-1,ny-1].
  # where nx=len(a,0) and ny=len(a,1)
  int nx,ny;
  int i,j;

  nx=len(a,0);
  ny=len(a,1);

  for (j=0; j<ny; j=j+1):
    for (i=0; i<nx; i=i+1):
      astagg[i,j] = a[i,j];
    
  

  for (j=0; j<ny-1; j=j+1):
    for (i=0; i<nx; i=i+1):
      astagg[i,j] = 0.5*(a[i,j] + a[i,j+1]);
    
  
  return(OK);


def int Modelslscoeffs(float [*,*] Qx,      float [*,*] Qy, float [*,* ] modx, \
                   float [*,*] mody,    float [*,*]  coeff1x ,             \
                   float [*,*] coeff1y, float [*,*]  coeff2x ,             \
                   float [*,*] coeff2y, struct model Model):

  # Modelslscoeff computes the standard linear solid  coefficients
  # for the wave propagation solver.
  #
  # Parameters :
  #  Qx     : Q-model tapered in the x-direction 
  #  Qy     : Q-model tapered in the y-direction 
  #  modx   : Modulus in x-dir
  #  mody   : Modulus in y-dir
  #  coeff1x : Coefficients used by the solver
  #  coeff1y : Coefficients used by the solver
  #  coeff2x : Coefficients used by the solver
  #  coeff2y : Coefficients used by the solver
  #  Model  : Model struct
  #
  # Returns  : OK or ERR
  #
  # See the documentation for the 
  # definition of coefficients and formulas used.
  # 

  int Nx,Ny;  # Model dimensions
  float tau0; # Relaxation time corresponding to absorption top
  float tauex,tauey; # Relaxation times in y-direction
  float tausx,tausy; # Relaxation times in x-direction
  float [*] d1;      # Quadratic profile function
  float [*] d2;      # Quadratic profile function
  float argx,argy;   # Temp variables
  int i,j;           # Iteration indices

  Nx = Model.Nx;
  Ny = Model.Ny;

  d1 = new(float[Nx]);
  d2 = new(float[Ny]);

  if(Model.Freesurface == 1):
    Modele(d2,Model.Dx,Model.Nb);
  
  else :
    Modeld(d2,Model.Dx,Model.Nb);
  

  Modeld(d1,Model.Dx,Model.Nb);
  Model.dx = d1;
  Model.dy = d2;

  # Compute relaxation times
  for(j=0; j<Ny;j=j+1):
    for(i=0; i<Nx;i=i+1):
      tau0 = 1.0/Model.W0;   

      # Compute relaxation times corresponding to Q
      tauex = (tau0/Qx[i,j])*(LibeSqrt(Qx[i,j]*Qx[i,j]+1.0)+1.0);
      tausx = (tau0/Qx[i,j])*(LibeSqrt(Qx[i,j]*Qx[i,j]+1.0)-1.0);
      tauey = (tau0/Qy[i,j])*(LibeSqrt(Qy[i,j]*Qy[i,j]+1.0)+1.0);
      tausy = (tau0/Qy[i,j])*(LibeSqrt(Qy[i,j]*Qy[i,j]+1.0)-1.0);

      
      # NOTE: Inverting relaxation times here and below

      tauex = 1.0/tauex;
      tauey = 1.0/tauey;
      tausx = 1.0/tausx;
      tausy = 1.0/tausy;

      argx = Model.dx[i];
      argy = Model.dy[j];

      coeff1x[i,j]   = LibeExp(-argx)*LibeExp(-Model.Dt*tausx);
      coeff1y[i,j]   = LibeExp(-argy)*LibeExp(-Model.Dt*tausy);
      coeff2x[i,j]   = Model.Dt*tauex;
      coeff2y[i,j]   = Model.Dt*tauey;

      # Compute the relaxed version of the modulus
      # of  the modulus
      modx[i,j]   = LibeExp(-argx)*modx[i,j]*(1.0-tausx/tauex);
      mody[i,j]   = LibeExp(-argy)*mody[i,j]*(1.0-tausy/tauey);
    
  
  delete(d1);
  delete(d2);

  return(OK);


def struct model Modelsls(float [*,*] vp,  float [*,*] vs, float [*,*] rho,       \
           float [*,*] Qlx, float [*,*] Qly,float [*,*] Qmx, float [*,*] Qmy, \
           float [*,*] Qpx, float [*,*] Qpy,                                  \
           float Dx,        float Dt,       float W0,                         \
           int Nb,          int Freesurface) :

  # Modelsls creates a new model with Standard Linear Solid Q
 
  # Parameters: 
  #
  #   vp :  P-wave velocity model
  #   rho:  Density 
  #   Q  :  Q-values
  #   Dx :  Grid interval in x- and y-directions
  #   Dt :  Modeling time sampling interval
  #   W0 :  Q-model peak angular frequency
  #   Nb :  Width of border attenuation zone (in grid points)
  #
  # Return:  
  #   Model structure
  #

  struct model Model; # Object to instantiate

  int Nx,Ny;          # Model dimensions in x- and y-directions
  int i,j;            # Loop indices
  float [*,*] wrk, wrk2;

  int fd,nb;

  Model= new(struct model);
  Model.Freesurface = Freesurface;
  Model.Dx = Dx;
  Model.Dt = Dt;
  Model.Nx = len(vp,0);
  Model.Ny = len(vp,1);
  Model.Nb = Nb;
  Model.W0 = W0;
  Nx = Model.Nx;
  Ny = Model.Ny;
  Model.Qlx     =  Qlx ; # Lambda Q-values
  Model.Qly     =  Qly ; # Lambda Q-values
  Model.Qmx     =  Qmx ; # Mu     Q-values
  Model.Qmy     =  Qmy ; # Mu     Q-values
  Model.Qpx      = Qpx ; # Rho p  Q-values
  Model.Qpy      = Qpy ; # Rho p  Q-values
  Model.Rho     =  new(float [Nx,Ny]) ; # Unrelaxed Lame mu 
  Model.Rhox     =  new(float [Nx,Ny]) ; # Unrelaxed Lame mu 
  Model.Rhoy     =  new(float [Nx,Ny]) ; # Unrelaxed Lame mu 
  Model.Mu      =  new(float [Nx,Ny]) ; # Unrelaxed Lame mu 
  Model.Muxy    =  new(float [Nx,Ny]) ; # Unrelaxed Lame mu 
  Model.Lambda  =  new(float [Nx,Ny])  ; # Unrelaxed Lame lambda

  # The following parameters are the change in the 
  # bulk modulus caused by visco-elasticity
  # A separate factor is used for the x- and y-directions
  # due to tapering
  Model.Dlambdax = new(float [Nx,Ny]);  
  Model.Dlambday = new(float [Nx,Ny]);  
  Model.Dmux     = new(float [Nx,Ny]);  
  Model.Dmuy     = new(float [Nx,Ny]);
  Model.Dmuxyx     = new(float [Nx,Ny]);  
  Model.Dmuxyy     = new(float [Nx,Ny]);
  Model.Drhopx    = new(float [Nx,Ny]);
  Model.Drhopy    = new(float [Nx,Ny]);
  #Model.Drhosx    = new(float [Nx,Ny]);
  #Model.Drhosy    = new(float [Nx,Ny]);

  # Coeffcients used for updating memory functions
  Model.Alpha1x   =  new(float [Nx,Ny]);
  Model.Alpha1y   =  new(float [Nx,Ny]);
  Model.Alpha2x   =  new(float [Nx,Ny]);
  Model.Alpha2y   =  new(float [Nx,Ny]);
  Model.Beta1x   =  new(float [Nx,Ny]);
  Model.Beta1y   =  new(float [Nx,Ny]);
  Model.Beta2x   =  new(float [Nx,Ny]);
  Model.Beta2y   =  new(float [Nx,Ny]);
  Model.Eta1x   =  new(float [Nx,Ny]);
  Model.Eta1y   =  new(float [Nx,Ny]);
  Model.Eta2x   =  new(float [Nx,Ny]);
  Model.Eta2y   =  new(float [Nx,Ny]);

  # Compute Lame parameters and inverse density
  for(j=0; j<Ny;j=j+1):
    for(i=0; i<Nx;i=i+1):
      Model.Rho[i,j]   = 1.0/rho[i,j];
      Model.Mu[i,j]       = rho[i,j]*vs[i,j]*vs[i,j]; 
      if(Freesurface == 1 && j==0):
        Model.Mu[i,j]       = 0.5*rho[i,j]*vs[i,j]*vs[i,j]; 
      Model.Lambda[i,j]   = rho[i,j]*(vp[i,j]*vp[i,j]-2.0*vs[i,j]*vs[i,j]);
      if(Freesurface == 1 && j==0) :
        Model.Lambda[i,j]   = 0.0;
      Model.Alpha1x[i,j]  = 0.0;
      Model.Alpha1y[i,j]  = 0.0;
      Model.Alpha2x[i,j]  = 0.0;
      Model.Alpha2y[i,j]  = 0.0;
      Model.Beta1x[i,j]  = 0.0;
      Model.Beta1y[i,j]  = 0.0;
      Model.Beta2x[i,j]  = 0.0;
      Model.Beta2y[i,j]  = 0.0;
      Model.Eta1x[i,j]  = 0.0;
      Model.Eta1y[i,j]  = 0.0;
      Model.Eta2x[i,j]  = 0.0;
      Model.Eta2y[i,j]  = 0.0;
      Model.Dlambdax[i,j] = Model.Lambda[i,j];
      Model.Dlambday[i,j] = Model.Lambda[i,j];
      Model.Dmux[i,j] = Model.Mu[i,j];
      Model.Dmuy[i,j] = Model.Mu[i,j];
      Model.Drhopx[i,j] = Model.Rho[i,j];
      Model.Drhopy[i,j] = Model.Rho[i,j];

  # Compute sls coefficients

  Modelslscoeffs(Model.Qlx, Model.Qly,Model.Dlambdax,Model.Dlambday,   \
                 Model.Alpha1x, Model.Alpha1y,                         \
                 Model.Alpha2x, Model.Alpha2y, Model);
  Modelslscoeffs(Model.Qmx, Model.Qmy,Model.Dmux,Model.Dmuy,           \
                 Model.Beta1x, Model.Beta1y,                           \
                 Model.Beta2x, Model.Beta2y, Model);
  Modelslscoeffs(Model.Qpx,  Model.Qpy,Model.Drhopx,Model.Drhopy,      \
                 Model.Eta1x,Model.Eta1y, Model.Eta2x, Model.Eta2y, Model);

# Stagger the density
  Modelstaggerx(Model.Rho, Model.Rhox);
  Modelstaggery(Model.Rho, Model.Rhoy);

# Stagger viscoelastic part of density
  wrk = Modelcopy(Model.Drhopx);
  Modelstaggerx(wrk, Model.Drhopx);
  delete(wrk);
  wrk = Modelcopy(Model.Drhopy);
  Modelstaggery(wrk, Model.Drhopy);

# Stagger Mu  
  Modelstaggerx(Model.Mu, wrk);
  Modelstaggery(wrk, Model.Muxy);

# Stagger viscoelastic part of mu 
  Modelstaggerx(Model.Dmux, wrk);
  Modelstaggery(wrk, Model.Dmuxyx);
  Modelstaggerx(Model.Dmuy, wrk);
  Modelstaggery(wrk, Model.Dmuxyy);
  delete(wrk);

# Stagger Beta coeffs
  wrk = Modelcopy(Model.Beta1x); 
  wrk2 = new(float[Model.Nx,Model.Ny]);
  Modelstaggery(wrk, wrk2);
  Modelstaggerx(wrk2,Model.Beta1x);
  delete(wrk);
  wrk = Modelcopy(Model.Beta2x); 
  wrk2 = new(float[Model.Nx,Model.Ny]);
  Modelstaggery(wrk, wrk2);
  Modelstaggerx(wrk2,Model.Beta2x);
  delete(wrk);
  delete(wrk2);
  wrk = Modelcopy(Model.Beta1y); 
  wrk2 = new(float[Model.Nx,Model.Ny]);
  Modelstaggery(wrk, wrk2);
  Modelstaggerx(wrk2,Model.Beta1y);
  delete(wrk);
  wrk = Modelcopy(Model.Beta2y); 
  wrk2 = new(float[Model.Nx,Model.Ny]);
  Modelstaggery(wrk, wrk2);
  Modelstaggerx(wrk2,Model.Beta2y);
  delete(wrk);
  delete(wrk2);

# Stagger Eta coeffs
  wrk = Modelcopy(Model.Eta1x);
  Modelstaggerx(wrk,Model.Eta1x);
  delete(wrk);
  wrk = Modelcopy(Model.Eta2x);
  Modelstaggerx(wrk,Model.Eta2x);
  delete(wrk);

  wrk = Modelcopy(Model.Eta1y);
  Modelstaggery(wrk,Model.Eta1y);
  delete(wrk);
  wrk = Modelcopy(Model.Eta2y);
  Modelstaggery(wrk,Model.Eta2y);
  delete(wrk);
  return(Model);


def struct model ModelNew(float [*,*] vp,  float [*,*] vs, float [*,*] rho,     \
          float [*,*] Qlx, float [*,*] Qly,float [*,*] Qmx, float [*,*] Qmy,\
          float [*,*] Qpx, float [*,*] Qpy,                                 \
          float Dx,        float Dt,       float W0,                        \
          int Nb,          int Rheol,      int Freesurface):

  # ModelNew creates a new model.
  #
  # Parameters: 
  #
  #   vp :  P-wave velocity model
  #   rho:  Density 
  #   Q  :  Q-values
  #   Dx :  Grid interval in x- and y-directions
  #   Dt :  Modeling time sampling interval
  #   W0 :  Q-model peak angular frequency
  #   Nb :  Width of border attenuation zone (in grid points)
  #   Rheol : Type of Q-model. Rheol=MAXWELL (Maxwell solid)
  #                             Rheol=SLS     (Standard linear solid)
  #
  # Return:  
  #   Model structure
  #
  #   ModelNew creates the parameters needed by the El2d object
  #   to perform 2D Elastic modeling.
  #   For the details of the SLS type models
  #   see the comments in Modelsls.

  struct model m;

  if(Rheol == SLS):
    m= Modelsls(vp,vs,rho,Qlx,Qly,Qmx,Qmy,Qpx,Qpy,Dx, Dt, W0, Nb, Freesurface);
  else :
    LibePuts(stderr, "Unknown Q-model\n"); 
    LibeFlush(stderr);
    # Bailing out
    LibeExit();
   
  return(m);

def float ModelStability(struct model Model):

  # Modelstability checks velocity model for stability.
  # 
  # Parameters:
  #       
  #   Model : Model object
  #
  # Return  : 
  #   Stability index

  int nx,ny;
  int i,j;
  float vp,stab;

  nx = Model.Nx;
  ny = Model.Ny;
  for(j=0; j<ny; j=j+1):
    for(i=0; i<nx; i=i+1):
      vp = LibeSqrt((Model.Lambda[i,j]+2.0*Model.Mu[i,j])/Model.Rho[i,j]);
      stab = (vp*Model.Dt)/Model.Dx;
      if(stab > 1.0/LibeSqrt(2.0)):
        LibePuts(stderr,"Stability index too large! ");
        LibePutf(stderr,stab,"g");
        LibePuts(stderr,"\n"); 
        LibePuts(stderr,"vp: \n");
        LibePutf(stderr,vp,"g");
        LibePuts(stderr,"\n");
        LibePuts(stderr,"dt: \n");
        LibePutf(stderr,Model.Dt,"g");
        LibePuts(stderr,"\n");
        LibePuts(stderr,"dx: \n");
        LibePutf(stderr,Model.Dx,"g");
        LibePuts(stderr,"\n");
        LibeFlush(stderr);
      
    
  

  return(stab);

