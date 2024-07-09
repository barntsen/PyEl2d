// Methods for the model struct
//

include <libe.i>  
include "model.i" // Model struct definition

//Internal functions
struct model Modelsls(float [*,*] vp,  float [*,*] vs, float [*,*] rho, 
                      float [*,*] Qlx, float [*,*] Qly,float [*,*] Qmx, float [*,*] Qmy,
                      float [*,*] Qpx, float [*,*] Qpy,float [*,*] Qsx, float [*,*] Qsy,
                      float Dx,        float Dt,       float W0,        int Nb){}
int Modelslscoeffs(float [*,*] Qx,      float [*,*] Qy, float [*,* ] modx, 
                   float [*,*] mody,    float [*,*]  coeff1x , 
                   float [*,*] coeff1y, float [*,*]  coeff2x , 
                   float [*,*] coeff2y, struct model Model){}

int Modeld(float [*] d, float dx, int nb){}

int Modelslscoeffs2(float [*,*] Q,       float [*,* ] modx, 
                   float [*,*] mody,    float [*,*]  coeff1x , 
                   float [*,*] coeff1y, float [*,*]  coeff2x , 
                   float [*,*] coeff2y, struct model Model){}


// Functions

// Modeld creates a 1D profile function tapering the left
// and right borders.
//
// Parameters:
//
//   d  : Input 1D float array
//   dx : Grid spacing
//   nb : Width of boarder zone
//
//   Return: OK if no error, ERR in all other cases.
int Modeld(float [*] d, float dx, int nb){
  int i,n;

  n = len(d,0);

  for(i=0; i<n; i=i+1){
    d[i]=1.0;
  }


  // Taper left border
  for(i=0; i<nb;i=i+1){
      d[i] = d[i]*((cast(float,i)*dx)/(cast(float,nb)*dx)
                 *(cast(float,i)*dx)/(cast(float,nb)*dx));
  }
  // taper right border
  for(i=n-1-nb; i<n;i=i+1){
      d[i] = d[i]*((cast(float,n-1-i)*dx)/(cast(float,nb)*dx)
                 *(cast(float,n-1-i)*dx)/(cast(float,nb)*dx));
  }
  return(OK);
}



int Modelslscoeffs2(float [*,*] Q,       float [*,* ] modx, 
                   float [*,*] mody,    float [*,*]  coeff1x , 
                   float [*,*] coeff1y, float [*,*]  coeff2x , 
                   float [*,*] coeff2y, struct model Model){

// Modelslscoeff computes the standard linear solid  coefficients
//
// Parameters :
//  Q      : Q-model 
//  modx   : Modulus in x-dir
//  mody   : Modulus in y-dir
//  Model  : Model struct
//
// Returns  : OK or ERR
//
// See the Modelsls documentation for
// the actual formulas used.
// 

  int Nx,Ny;
  int i,j;
  float Qmin, Qmax;       // Min and Max value of Q
  float argx, argy;       // Tapering values
  float tau0;             // =1/W0
  float tauemax,tauemin;  // Max and min of taue
  float tausmax,tausmin;  // Max and min of taus
  float tauex, tausx;     // Taus and Taue relaxation values  x-dir
  float tauey, tausy;     // Taus and Taue relaxation valuses y-dir
  float [*] d1;
  float [*] d2;
  float [*] taus,taue;
  char  [*] data;
  int fd;

  Nx = Model.Nx;
  Ny = Model.Ny;

  taus=new(float[Nx]);
  taue=new(float[Nx]);
  // Note that in the following Qmin and Qmax refers to
  // Q-values in the boundary zone only. 
  // Q might be larger or less in the inner part of the model.

  d1 = new(float [Nx]);
  d2 = new(float [Ny]);
  Modeld(d1,Model.Dx,Model.Nb);
  Modeld(d2,Model.Dx,Model.Nb);
  Model.dx = d1;
  Model.dy = d2;
  // Compute relaxation times
  for(j=0; j<Ny;j=j+1){
    for(i=0; i<Nx;i=i+1){
      tau0 = 1.0/Model.W0;   // Relaxation time corresponding to absorption top
      Qmin = 1.1;            // MinimumQ-value at the outer boundaries

      // Compute relaxation times corresponding to Qmax and Qmin
      tauemin = (tau0/Qmin)*(LibeSqrt(Qmin*Qmin+1.0)+1.0);
      tauemin = 1.0/tauemin;
      tausmin = (tau0/Qmin)*(LibeSqrt(Qmin*Qmin+1.0)-1.0);
      tausmin = 1.0/tausmin;

      Qmax  = Q[Model.Nb,j]; // Max Q-value at the inner boundary.
      // Note that we compute the inverse
      // of relaxation times, and use the same
      // name for the inverses, taus=1/taus.
      // In all formulas below this section we
      // work with the inverse of the relaxation times.

      // Quadratic interpolation of taue and taus in x-dir
      tauemax = (tau0/Qmax)*(LibeSqrt(Qmax*Qmax+1.0)+1.0);
      tauemax = 1.0/tauemax;
      tausmax = (tau0/Qmax)*(LibeSqrt(Qmax*Qmax+1.0)-1.0);
      tausmax = 1.0/tausmax;
      tauex = tauemin + (tauemax-tauemin)*Model.dx[i];
      tausx = tausmin + (tausmax-tausmin)*Model.dx[i];

      // Quadratic interpolation of taue and taus in y-dir
      Qmax  = Q[i,Model.Nb];
      tauemax = (tau0/Qmax)*(LibeSqrt(Qmax*Qmax+1.0)+1.0);
      tauemax = 1.0/tauemax;
      tausmax = (tau0/Qmax)*(LibeSqrt(Qmax*Qmax+1.0)-1.0);
      tausmax = 1.0/tausmax;
      tauey = tauemin + (tauemax-tauemin)*Model.dy[j];
      tausy = tausmin + (tausmax-tausmin)*Model.dy[j];

      // In the equations below the relaxation times taue and taus
      // are inverses (1/taue, 1/taus)
      // Compute coefficients for use in El2dSolve.
      argx = Model.dx[i];
      argy = Model.dy[j];

      // A tapering factor of exp(-(x/L)**2)
      // is used to taper the exponential term
      coeff1x[i,j]   = LibeExp(-argx)*LibeExp(-Model.Dt*tausx);
      coeff1y[i,j]   = LibeExp(-argy)*LibeExp(-Model.Dt*tausy);
      /*
      taus[i]        = coeff1x[i,j];
      taue[i]        = coeff1y[i,j];
      */
    
      // Quadratic taper is used for the taus.
      coeff2x[i,j]   = Model.Dt*tauex;
      coeff2y[i,j]   = Model.Dt*tauey;

      // Compute the relaxed version of the modulus
      // of  the modulus
      modx[i,j]   = LibeExp(-argx)*modx[i,j] *(1.0-tausx/tauex);
      mody[i,j]   = LibeExp(-argy)*mody[i,j]*(1.0-tausy/tauey);
                             
    }
  }
  delete(d1);
  delete(d2);
  /*
  data = cast( char [4*Nx],taus);
  fd = LibeOpen("taus2.bin","w");
  LibeWrite(fd,4*Nx,data);
  LibeClose(fd);

  data = cast( char [4*Nx],taue);
  fd = LibeOpen("taue2.bin","w");
  LibeWrite(fd,4*Nx,data);
  LibeClose(fd);
  */
  return(OK);
}


int Modelslscoeffs(float [*,*] Qx,      float [*,*] Qy, float [*,* ] modx, 
                   float [*,*] mody,    float [*,*]  coeff1x , 
                   float [*,*] coeff1y, float [*,*]  coeff2x , 
                   float [*,*] coeff2y, struct model Model){
// Modelslscoeff computes the standard linear solid  coefficients
//
// Parameters :
//  Q      : Q-model 
//  modx   : Modulus in x-dir
//  mody   : Modulus in y-dir
//  Model  : Model struct
//
// Returns  : OK or ERR
//
// See the Modelsls documentation for
// the actual formulas used.
// 

  int Nx,Ny;
  int i,j;
  float tau0;    
  float tauex,tauey;
  float tausx,tausy;
  float [*] d1;
  float [*] d2;
  float argx,argy;
  
  float [*] taus,taue;
  char  [*] data;
  int fd;

  Nx = Model.Nx;
  Ny = Model.Ny;

  d1 = new(float[Nx]);
  d2 = new(float[Ny]);
  taus = new(float[Nx]);
  taue = new(float[Nx]);
  Modeld(d1,Model.Dx,Model.Nb);
  Modeld(d2,Model.Dx,Model.Nb);
  Model.dx = d1;
  Model.dy = d2;

  // Compute relaxation times
  for(j=0; j<Ny;j=j+1){
    for(i=0; i<Nx;i=i+1){
      tau0 = 1.0/Model.W0;   // Relaxation time corresponding to absorption top

      // Compute relaxation times corresponding to Q
      tauex = (tau0/Qx[i,j])*(LibeSqrt(Qx[i,j]*Qx[i,j]+1.0)+1.0);
      tausx = (tau0/Qx[i,j])*(LibeSqrt(Qx[i,j]*Qx[i,j]+1.0)-1.0);
      tauey = (tau0/Qy[i,j])*(LibeSqrt(Qy[i,j]*Qy[i,j]+1.0)+1.0);
      tausy = (tau0/Qy[i,j])*(LibeSqrt(Qy[i,j]*Qy[i,j]+1.0)-1.0);

      
      // NOTE: Inverting relaxation times here and below

      tauex = 1.0/tauex;
      tauey = 1.0/tauey;
      tausx = 1.0/tausx;
      tausy = 1.0/tausy;

      argx = Model.dx[i];
      argy = Model.dy[j];

      coeff1x[i,j]   = LibeExp(-Model.Dt*tausx);
      coeff1y[i,j]   = LibeExp(-Model.Dt*tausy);
      coeff2x[i,j]   = Model.Dt*tauex;
      coeff2y[i,j]   = Model.Dt*tauey;
      taus[i] = coeff2x[i,j]; 
      taue[j] = coeff2y[i,j];

      // Compute the relaxed version of the modulus
      // of  the modulus
      modx[i,j]   = modx[i,j]*(1.0-tausx/tauex);
      mody[i,j]   = mody[i,j]*(1.0-tausy/tauey);
    }
  }
  delete(d1);
  delete(d2);

  data = cast( char [4*Nx],taus);
  fd = LibeOpen("taus.bin","w");
  LibeWrite(fd,4*Nx,data);
  LibeClose(fd);

  data = cast( char [4*Nx],taue);
  fd = LibeOpen("taue.bin","w");
  LibeWrite(fd,4*Nx,data);
  LibeClose(fd);
  

  return(OK);
}

struct model Modelsls(float [*,*] vp,  float [*,*] vs, float [*,*] rho, 
                      float [*,*] Qlx, float [*,*] Qly,float [*,*] Qmx, float [*,*] Qmy,
                      float [*,*] Qpx, float [*,*] Qpy,float [*,*] Qsx, float [*,*] Qsy,
                      float Dx,        float Dt,       float W0,        int Nb)
// Modelsls creates a new model with Standard Linear Solid Q
//
// Parameters: 
//
//  - vp :  P-wave velocity model
//  - rho:  Density 
//  - Q  :  Q-values
//  - Dx :  Grid interval in x- and y-directions
//  - Dt :  Modeling time sampling interval
//  - W0 :  Q-model peak angular frequency
//  - Nb :  Width of border attenuation zone (in grid points)
//
// Return:  Model structure
//
{
  struct model Model; // Object to instantiate

  int Nx,Ny;          // Model dimensions in x- and y-directions
  int i,j;            // Loop indices
  int fd;
  int dsize;
  char [*] data;

  Model= new(struct model);
  Model.Dx = Dx;
  Model.Dt = Dt;
  Model.Nx = len(vp,0);
  Model.Ny = len(vp,1);
  Model.Nb = Nb;
  Model.W0 = W0;
  Nx = Model.Nx;
  Ny = Model.Ny;
  Model.Qlx     =  Qlx ; // Lambda Q-values
  Model.Qly     =  Qly ; // Lambda Q-values
  Model.Qmx     =  Qlx ; // Mu     Q-values
  Model.Qmy     =  Qly ; // Mu     Q-values
  Model.Qpx      = Qpx ; // Rho p  Q-values
  Model.Qpy      = Qpy ; // Rho p  Q-values
  Model.Qsx      = Qsx ; // Rho s  Q-values 
  Model.Qsy      = Qsy ; // Rho s  Q-values 
  Model.Rho     =  new(float [Nx,Ny]) ; // Unrelaxed Lame mu 
  Model.Mu      =  new(float [Nx,Ny]) ; // Unrelaxed Lame mu 
  Model.Lambda  =  new(float [Nx,Ny])  ; // Unrelaxed Lame lambda

  // The following parameters are the change in the 
  // bulk modulus caused by visco-elasticity
  // A separate factor is used for the x- and y-directions
  // due to tapering
  Model.Dlambdax = new(float [Nx,Ny]);  
  Model.Dlambday = new(float [Nx,Ny]);  
  Model.Dmux     = new(float [Nx,Ny]);  
  Model.Dmuy     = new(float [Nx,Ny]);
  Model.Drhopx    = new(float [Nx,Ny]);
  Model.Drhopy    = new(float [Nx,Ny]);
  Model.Drhosx    = new(float [Nx,Ny]);
  Model.Drhosy    = new(float [Nx,Ny]);

  // Coeffcients used for updating memory functions
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
  Model.Nu1x   =  new(float [Nx,Ny]);
  Model.Nu1y   =  new(float [Nx,Ny]);
  Model.Nu2x   =  new(float [Nx,Ny]);
  Model.Nu2y   =  new(float [Nx,Ny]);

  // Compute Lame parameters and inverse density
  for(j=0; j<Ny;j=j+1){
    for(i=0; i<Nx;i=i+1){
      Model.Rho[i,j]   = 1.0/rho[i,j];
      Model.Mu[i,j]       = rho[i,j]*vs[i,j]*vs[i,j]; 
      Model.Lambda[i,j]   = rho[i,j]*(vp[i,j]*vp[i,j]-2.0*vs[i,j]*vs[i,j]);
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
      Model.Drhosx[i,j] = Model.Rho[i,j];
      Model.Drhosy[i,j] = Model.Rho[i,j];
    }
  }

  // Compute sls coefficients
 /*
  Modelslscoeffs(Model.Qlx, Model.Qly,Model.Dlambdax,Model.Dlambday,
                 Model.Alpha1x, Model.Alpha1y, 
                 Model.Alpha2x, Model.Alpha2y, Model);
  Modelslscoeffs(Model.Qmx, Model.Qmy,Model.Dmux,Model.Dmuy,Model.Beta1x, Model.Beta1y, 
                 Model.Beta2x, Model.Beta2y, Model);
  Modelslscoeffs(Model.Qpx, Model.Qpy,Model.Drhopx,Model.Drhopy,Model.Eta1x, 
                 Model.Eta1y, Model.Eta2x, Model.Eta2y, Model);
  Modelslscoeffs(Model.Qsx, Model.Qsy,Model.Drhosx,Model.Drhosy,Model.Nu1x, Model.Nu1y, 
                 Model.Nu2x, Model.Nu2y, Model);

  */
  Modelslscoeffs2(Model.Qlx, Model.Dlambdax,Model.Dlambday,
                 Model.Alpha1x, Model.Alpha1y, 
                 Model.Alpha2x, Model.Alpha2y, Model);
  Modelslscoeffs2(Model.Qmx, Model.Dmux,Model.Dmuy,Model.Beta1x, Model.Beta1y, 
                 Model.Beta2x, Model.Beta2y, Model);
  Modelslscoeffs2(Model.Qpx, Model.Drhopx,Model.Drhopy,Model.Eta1x, 
                 Model.Eta1y, Model.Eta2x, Model.Eta2y, Model);
  Modelslscoeffs2(Model.Qsx, Model.Drhosx,Model.Drhosy,Model.Nu1x, Model.Nu1y, 
                 Model.Nu2x, Model.Nu2y, Model);




  return(Model);
}

struct model ModelNew(float [*,*] vp,  float [*,*] vs, float [*,*] rho, 
                      float [*,*] Qlx, float [*,*] Qly,float [*,*] Qmx, float [*,*] Qmy,
                      float [*,*] Qpx, float [*,*] Qpy,float [*,*] Qsx, float [*,*] Qsy,
                      float Dx,        float Dt,       float W0,       int Nb, int Rheol)
// ModelNew creates a new model.
//
// Parameters: 
//
//  - vp :  P-wave velocity model
//  - rho:  Density 
//  - Q  :  Q-values
//  - Dx :  Grid interval in x- and y-directions
//  - Dt :  Modeling time sampling interval
//  - W0 :  Q-model peak angular frequency
//  - Nb :  Width of border attenuation zone (in grid points)
//  - Rheol : Type of Q-model. Rheol=MAXWELL (Maxwell solid)
//                             Rheol=SLS     (Standard linear solid)
//
// Return:  Model structure
//
// ModelNew creates the parameters needed by the El2d object
// to perform 2D acoustic modeling.
// For the details of the SLS type models
// see the comments in Modelsls.
{
  struct model m;

  LibePs("Rheol: "); LibePi(Rheol); LibePs("\n");
  if(Rheol == SLS){
    m= Modelsls(vp,vs,rho,Qlx,Qly,Qmx,Qmy,Qpx,Qpy,Qsx, Qsy,
                Dx, Dt, W0, Nb);
  }
  else{
    LibePuts(stderr, "Unknown Q-model\n"); 
    LibeFlush(stderr);
    // Bailing out
    LibeExit();
  } 
  return(m);
}

float ModelStability(struct model Model)
//
// Modelstability checks velocity model for stability.
// 
// Parameters:
//       
//     - Model : Model object
//
// Return      : Stability index
{
  int nx,ny;
  int i,j;
  float vp,stab;

  nx = Model.Nx;
  ny = Model.Ny;
  for(j=0; j<ny; j=j+1){
    for(i=0; i<nx; i=i+1){
      vp = LibeSqrt((Model.Lambda[i,j]+2.0*Model.Mu[i,j])/Model.Rho[i,j]);
      stab = (vp*Model.Dt)/Model.Dx;
      if(stab > 1.0/LibeSqrt(2.0)){
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
      }
    }
  }

  return(stab);
}
