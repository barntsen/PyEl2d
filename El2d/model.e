// Methods for the model struct
//

include <libe.i>  
include "model.i" // Model struct definition

//Internal functions
struct model Modelmaxwell(float [*,*] vp, float [*,*] rho, float [*,*] Qp, 
                          float [*,*] Qr, float       Dx,  float       Dt,
                          float W0, int Nb){} 
                          

struct model Modelsls    (float [*,*] vp, float [*,*] vs,  float [*,*] rho, float [*,*] Ql, 
                          float [*,*] Qm, float [*,*] Qp,  float [*,*] Qs,  float       Dx,  
                          float       Dt, float W0, int Nb){} 
                          
                      
int Modeld(float [*] d, float dx, int nb){}  
float Modeltaus(float Q, float w0){}         
float Modeltaue(float Q, float w0){}         
int Modelalphamax(struct model Model){}
int Modelthetamax(struct model Model){}
int Modelalphasls(struct model Model){}
int Modelbetasls(struct model Model){}
int Modeletasls(struct model Model){}
int Modelnusls(struct model Model){}

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
// For the details of the MAXWELL or SLS type models
// see the comments in Modelmaxwell and Modelsls.
struct model ModelNew(float [*,*] vp, float [*,*] vs,  float [*,*] rho, float [*,*] Ql,
                      float [*,*] Qm, float [*,*] Qp,  float [*,*] Qs,  float       Dx,  
                      float       Dt, float W0, int Nb, int Rheol)
                      
{
  struct model m;

  LibePs("Rheol: "); LibePi(Rheol); LibePs("\n");
  if(Rheol == MAXWELL){
  LibePs("Maxwell \n"); 
    m = Modelmaxwell(vp, rho, Qp, Qs, Dx, Dt, W0, Nb); 
  } else if(Rheol == SLS){
  LibePs("Sls \n"); 
    m= Modelsls(vp, vs, rho, Ql, Qm, Qp, Qs, Dx, Dt, W0, Nb);
  }
  else{
    LibePuts(stderr, "Unknown Q-model\n"); 
    LibeFlush(stderr);
    // Bailing out
    LibeExit();
  } 
  return(m);
}

// Modelalphasls computes the standard linear solid  alpha coefficients
//
// Parameters :
// - Model  : Model struct
//
// Returns  : OK or ERR
//
// See the Modelsls documentation for
// the actual formulas used.
// 
// The alpha coefficients for the sls model is computed
int Modelalphasls(struct model Model){

  int Nx,Ny;
  int i,j;
  float Qmin, Qmax;    // Min and Max value of Q
  float argx, argy;    // Tapering values
  float tau0;
  float tauemax,tauemin;  // Max and min of taue
  float tausmax,tausmin;  // Max and min of taus
  float tauex, tausx;     // Taus and Taue relaxation values  x-dir
  float tauey, tausy;     // Taus and Taue relaxation valuses y-dir

  Nx = Model.Nx;
  Ny = Model.Ny;

  // Note that in the following Qmin and Qmax refers to
  // Q-values in the boundary zone only. 
  // Q might be larger or less in the inner part of the model.

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

      Qmax  = Model.Ql[Model.Nb,j]; // Max Q-value at the inner boundary.
      // Note that we compute the inverse
      // of relaxation times, and use the same
      // name for the inverses, taus=1/taus.
      // In all formulas below this section we
      // work with the inverse of the relaxation times.
      tauemax = (tau0/Qmin)*(LibeSqrt(Qmax*Qmax+1.0)+1.0);
      tauemax = 1.0/tauemax;
      tausmax = (tau0/Qmin)*(LibeSqrt(Qmax*Qmax+1.0)-1.0);
      tausmax = 1.0/tausmax;
      tauex = tauemin + (tauemax-tauemin)*Model.dx[i];
      tausx = tausmin + (tausmax-tausmin)*Model.dx[i];
      Qmax  = Model.Ql[i,Model.Nb];
      tauemax = (tau0/Qmin)*(LibeSqrt(Qmax*Qmax+1.0)+1.0);
      tauemax = 1.0/tauemax;
      tausmax = (tau0/Qmin)*(LibeSqrt(Qmax*Qmax+1.0)-1.0);
      tausmax = 1.0/tausmax;

      // Interpolate relaxation times 
      tauey = tauemin + (tauemax-tauemin)*Model.dy[j];
      tausy = tausmin + (tausmax-tausmin)*Model.dy[j];

      // In the equations below the relaxation times taue and taus
      // are inverses (1/taue, 1/taus)
      // Compute alpha and eta coefficients
      argx = Model.dx[i];
      argy = Model.dy[j];
      // An extra tapering factor of exp(-(x/L)**2)
      // is used to taper some coefficeints 
      Model.Alpha1x[i,j]   = LibeExp(-argx)*LibeExp(-Model.Dt*tausx);
      Model.Alpha1y[i,j]   = LibeExp(-argy)*LibeExp(-Model.Dt*tausy);
      Model.Alpha2x[i,j]   = Model.Dt*tauex;
      Model.Alpha2y[i,j]   = Model.Dt*tauey;

      // Fill in values for the visco elastic modification 
      // of  lambda
      Model.Dlambdax[i,j]   = Model.Lambda[i,j]
                             *(1.0-tausx/tauex);
      Model.Dlambday[i,j]   = Model.Lambda[i,j]
                             *(1.0-tausy/tauey);
    }
  }
  return(OK);
}


// Modelbetasls computes the standard linear solid  beta coefficients
//
// Parameters :
// - Model  : Model struct
//
// Returns  : OK or ERR
//
// See the Modelsls documentation for
// the actual formulas used.
// 
// The beta coefficients for the sls model is computed
int Modelbetasls(struct model Model){

  int Nx,Ny;
  int i,j;
  float Qmin, Qmax;    // Min and Max value of Q
  float argx, argy;    // Tapering values
  float tau0;
  float tauemax,tauemin;  // Max and min of taue
  float tausmax,tausmin;  // Max and min of taus
  float tauex, tausx;     // Taus and Taue relaxation values  x-dir
  float tauey, tausy;     // Taus and Taue relaxation valuses y-dir

  Nx = Model.Nx;
  Ny = Model.Ny;

  // Note that in the following Qmin and Qmax refers to
  // Q-values in the boundary zone only. 
  // Q might be larger or less in the inner part of the model.

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

      Qmax  = Model.Qm[Model.Nb,j]; // Max Q-value at the inner boundary.
      // Note that we compute the inverse
      // of relaxation times, and use the same
      // name for the inverses, taus=1/taus.
      // In all formulas below this section we
      // work with the inverse of the relaxation times.
      tauemax = (tau0/Qmin)*(LibeSqrt(Qmax*Qmax+1.0)+1.0);
      tauemax = 1.0/tauemax;
      tausmax = (tau0/Qmin)*(LibeSqrt(Qmax*Qmax+1.0)-1.0);
      tausmax = 1.0/tausmax;
      tauex = tauemin + (tauemax-tauemin)*Model.dx[i];
      tausx = tausmin + (tausmax-tausmin)*Model.dx[i];
      Qmax  = Model.Qm[i,Model.Nb];
      tauemax = (tau0/Qmin)*(LibeSqrt(Qmax*Qmax+1.0)+1.0);
      tauemax = 1.0/tauemax;
      tausmax = (tau0/Qmin)*(LibeSqrt(Qmax*Qmax+1.0)-1.0);
      tausmax = 1.0/tausmax;

      // Interpolate relaxation times 
      tauey = tauemin + (tauemax-tauemin)*Model.dy[j];
      tausy = tausmin + (tausmax-tausmin)*Model.dy[j];

      // In the equations below the relaxation times taue and taus
      // are inverses (1/taue, 1/taus)
      // Compute alpha and eta coefficients
      argx = Model.dx[i];
      argy = Model.dy[j];
      // An extra tapering factor of exp(-(x/L)**2)
      // is used to taper some coefficeints 
      Model.Beta1x[i,j]   = LibeExp(-argx)*LibeExp(-Model.Dt*tausx);
      Model.Beta1y[i,j]   = LibeExp(-argy)*LibeExp(-Model.Dt*tausy);
      Model.Beta2x[i,j]  = Model.Dt*tauex;
      Model.Beta2y[i,j]  = Model.Dt*tauey;

      // Fill in values for the visco elastic modification 
      // of stiffness and density.
      Model.Dmuy[i,j]     = (Model.Mu[i,j])
                          *(1.0-tausy/tauey);
      Model.Dmux[i,j]     = (Model.Mu[i,j])
                          *(1.0-tausx/tauex);
    }
  }
  return(OK);
}

// Modeletasls computes the standard linear solid  eta coefficients
//
// Parameters :
// - Model  : Model struct
//
// Returns  : OK or ERR
//
// See the Modelsls documentation for
// the actual formulas used.
// 
// The beta coefficients for the sls model is computed
int Modeletasls(struct model Model){

  int Nx,Ny;
  int i,j;
  float Qmin, Qmax;    // Min and Max value of Q
  float argx, argy;    // Tapering values
  float tau0;
  float tauemax,tauemin;  // Max and min of taue
  float tausmax,tausmin;  // Max and min of taus
  float tauex, tausx;     // Taus and Taue relaxation values  x-dir
  float tauey, tausy;     // Taus and Taue relaxation valuses y-dir

  Nx = Model.Nx;
  Ny = Model.Ny;

  // Note that in the following Qmin and Qmax refers to
  // Q-values in the boundary zone only. 
  // Q might be larger or less in the inner part of the model.

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

      Qmax  = Model.Qp[Model.Nb,j]; // Max Q-value at the inner boundary.
      // Note that we compute the inverse
      // of relaxation times, and use the same
      // name for the inverses, taus=1/taus.
      // In all formulas below this section we
      // work with the inverse of the relaxation times.
      tauemax = (tau0/Qmin)*(LibeSqrt(Qmax*Qmax+1.0)+1.0);
      tauemax = 1.0/tauemax;
      tausmax = (tau0/Qmin)*(LibeSqrt(Qmax*Qmax+1.0)-1.0);
      tausmax = 1.0/tausmax;
      tauex = tauemin + (tauemax-tauemin)*Model.dx[i];
      tausx = tausmin + (tausmax-tausmin)*Model.dx[i];
      Qmax  = Model.Qp[i,Model.Nb];
      tauemax = (tau0/Qmin)*(LibeSqrt(Qmax*Qmax+1.0)+1.0);
      tauemax = 1.0/tauemax;
      tausmax = (tau0/Qmin)*(LibeSqrt(Qmax*Qmax+1.0)-1.0);
      tausmax = 1.0/tausmax;

      // Interpolate relaxation times 
      tauey = tauemin + (tauemax-tauemin)*Model.dy[j];
      tausy = tausmin + (tausmax-tausmin)*Model.dy[j];

      // In the equations below the relaxation times taue and taus
      // are inverses (1/taue, 1/taus)
      // Compute alpha and eta coefficients
      argx = Model.dx[i];
      argy = Model.dy[j];
      // An extra tapering factor of exp(-(x/L)**2)
      // is used to taper some coefficeints 
      Model.Eta1x[i,j]   = LibeExp(-argx)*LibeExp(-Model.Dt*tausx);
      Model.Eta1y[i,j]   = LibeExp(-argy)*LibeExp(-Model.Dt*tausy);
      Model.Eta2x[i,j]  = Model.Dt*tauex;
      Model.Eta2y[i,j]  = Model.Dt*tauey;

      // Fill in values for the visco elastic modification 
      // of stiffness and density.
      Model.Drhopy[i,j]     = (Model.Rho[i,j])
                          *(1.0-tausy/tauey);
      Model.Drhopx[i,j]     = (Model.Rho[i,j])
                          *(1.0-tausx/tauex);
    }
  }
  return(OK);
}

// Modelnusls computes the standard linear solid  beta coefficients
//
// Parameters :
// - Model  : Model struct
//
// Returns  : OK or ERR
//
// See the Modelsls documentation for
// the actual formulas used.
// 
// The nu coefficients for the sls model is computed
int Modelnusls(struct model Model){

  int Nx,Ny;
  int i,j;
  float Qmin, Qmax;    // Min and Max value of Q
  float argx, argy;    // Tapering values
  float tau0;
  float tauemax,tauemin;  // Max and min of taue
  float tausmax,tausmin;  // Max and min of taus
  float tauex, tausx;     // Taus and Taue relaxation values  x-dir
  float tauey, tausy;     // Taus and Taue relaxation valuses y-dir

  Nx = Model.Nx;
  Ny = Model.Ny;

  // Note that in the following Qmin and Qmax refers to
  // Q-values in the boundary zone only. 
  // Q might be larger or less in the inner part of the model.

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

      Qmax  = Model.Qs[Model.Nb,j]; // Max Q-value at the inner boundary.
      // Note that we compute the inverse
      // of relaxation times, and use the same
      // name for the inverses, taus=1/taus.
      // In all formulas below this section we
      // work with the inverse of the relaxation times.
      tauemax = (tau0/Qmin)*(LibeSqrt(Qmax*Qmax+1.0)+1.0);
      tauemax = 1.0/tauemax;
      tausmax = (tau0/Qmin)*(LibeSqrt(Qmax*Qmax+1.0)-1.0);
      tausmax = 1.0/tausmax;
      tauex = tauemin + (tauemax-tauemin)*Model.dx[i];
      tausx = tausmin + (tausmax-tausmin)*Model.dx[i];
      Qmax  = Model.Qs[i,Model.Nb];
      tauemax = (tau0/Qmin)*(LibeSqrt(Qmax*Qmax+1.0)+1.0);
      tauemax = 1.0/tauemax;
      tausmax = (tau0/Qmin)*(LibeSqrt(Qmax*Qmax+1.0)-1.0);
      tausmax = 1.0/tausmax;

      // Interpolate relaxation times 
      tauey = tauemin + (tauemax-tauemin)*Model.dy[j];
      tausy = tausmin + (tausmax-tausmin)*Model.dy[j];

      // In the equations below the relaxation times taue and taus
      // are inverses (1/taue, 1/taus)
      // Compute alpha and eta coefficients
      argx = Model.dx[i];
      argy = Model.dy[j];
      // An extra tapering factor of exp(-(x/L)**2)
      // is used to taper some coefficeints 
      Model.Nu1x[i,j]   = LibeExp(-argx)*LibeExp(-Model.Dt*tausx);
      Model.Nu1y[i,j]   = LibeExp(-argy)*LibeExp(-Model.Dt*tausy);
      Model.Nu2x[i,j]  = Model.Dt*tauex;
      Model.Nu2y[i,j]  = Model.Dt*tauey;

      // Fill in values for the visco elastic modification 
      // of density.
      Model.Drhosy[i,j]     = (Model.Rho[i,j])
                          *(1.0-tausy/tauey);
      Model.Drhosx[i,j]     = (Model.Rho[i,j])
                          *(1.0-tausx/tauex);
    }
  }
  return(OK);
}
// Modelmaxwell creates a new model.
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
// ModelNew creates the parameters needed by the El2d object
// to perform 2D acoustic modeling.
// The main parameters are density $\rho$ and bulk modulus $\kappa$ which are
// calculated from the wave velocity and density.
// In addition are the visco-elastic coefficients $\alpha_1$, $\alpha_2$ ,
// $\eta_1$  and $\eta_2$ computed.
//
// The model is defined by several 2D arrays, with the x-coordinate
// as the first index, and the y-coordinate as the second index.
// A position in the model (x,y) maps to the arrays as [i,j]
// where x=Dx*i, y=Dx*j
// The absorbing boundaries is comparable to the CPML method
// but constructed using a visco-elastic medium with
// relaxation specified by a standard-linear solid, while 
// a time dependent density which uses a standard-linear solid
// relaxation mechanism.
//
//                     Nx                Outer border        
//    |----------------------------------------------|
//    |           Qmin=1.1                           |
//    |                                              |
//    |           Qmax=Q(x,y=Dx*Nb)     Inner border |
//    |      ----------------------------------      |
//    |      |                                |      |
//    |      |                                |      | Ny
//    |      |      Q(x,y)                    |      |
//    |      |                                |<-Nb->|
//    |      |                                |      |
//    |      |                                |      |
//    |      ----------------------------------      |
//    |                                              |
//    |                                              |
//    |                                              |
//    |-----------------------------------------------
//
//    Fig 1: Organisation of the Q-model.
//           The other arrays are organised in the same way.
//
// The Boundary condition is implemented by using a strongly
// absorbing medium in a border zone with width Nb.
// The border zone has the same width both in the horizontal
// and vertical directions.
// The medium in the border zone has a Q-value of Qmax
// at the inner bondary (taken from the Q-model) and
// the Q-value is gradualy reduced to Qmin at the outer boundary.
//
//  In the finit-edifference solver we use the Maxwell 
//  solid to implement time dependent 
//  bulk modulus and density.
//  The Maxwell solid model uses
//  one parameter, tau0.
//  tau0 is related to the Q-value by
// (See the notes.tex in the Doc directory for the equations.)
//  
//    taue(Q0) = Q(W0)/W0
//
//  Q0 is here the value for Q at the frequency W0.
//
//  The coeffcients needed by the solver methods in the El2d object are
//    alpha1x =  exp(d_x/Dt)exp(tau0x),                                  \\
//    alpha2x =  - dx Dt/tau0x
//    alpha1y =  exp(d_x/Dt)exp(tau0y),                                  \\
//    alpha2y =  -dx Dt/tau0y
//    eta1x   =  exp(d_x/Dt)exp(tau0x),                                  \\
//    eta2x   =  -dx Dt/tau0x
//    eta1y   =  exp(d_x/Dt)exp(tau0y),                                  \\
//    eta2y   =  -dx Dt/tau0y
//
// tau0 is interpolated between the values given by the Q-value 
// Qmax at the inner border of the model and the Qmin at the outer border. 
// For the interpolation we just assume that the relaxation times
// varies proportionaly with the square of the distance from
// the inner border, according to
//
//   tau0x(x) = tau0xmin + (tau0xmax-tau0xmin)*d(x)
//   tau0y(x) = tau0ymin + (tau0xmax-tau0ymin)*d(y)
//                       
// where 
//
//   d(x) = (x/L)^2
//
// x is the distance from the outer border, while
// L is the length of the border.
// We also have
//
//   tau0xmax = tau0(Qmax)
//   tau0xmin = tau0(Qmin)
//   tau0ymax = tau0(Qmax)
//   tau0ymin = tau0(Qmin)
//
// Here Qmin= 1.1, while Qmax is equal to the value 
// of Q at the inner border.
// 
struct model Modelmaxwell(float [*,*] vp, float [*,*] rho, float [*,*] Qp, float [*,*] Qr, 
                      float Dx, float Dt, float W0, int Nb)
{
  struct model Model; // Object to instantiate

  int Nx,Ny;          // Model dimensions in x- and y-directions
  int i,j;            // Loop indices

  Model= new(struct model);
  Model.Dx = Dx;
  Model.Dt = Dt;
  Model.Nx = len(vp,0);
  Model.Ny = len(vp,1);
  Model.Nb = Nb;
  Model.W0 = W0;
  Nx = Model.Nx;
  Ny = Model.Ny;
  Model.Rho     =  new(float [Nx,Ny]); // Density
  Model.Ql      =  new(float [Nx,Ny]); // Q-values
  Model.Qm      =  new(float [Nx,Ny]); // Q-values
  Model.Lambda  = new(float [Nx,Ny]);  // Unrelaxed bulk modulus

  // The following parameters are the change in the 
  // bulk modulus caused by visco-elasticity
  // A separate factor is used for the x- and y-directions
  // due to tapering
  Model.Dlambdax = new(float [Nx,Ny]);  
  Model.Drhopx     = new(float [Nx,Ny]);

  // Coeffcients used for updating memory functions
  Model.Alpha1x   =  new(float [Nx,Ny]);
  Model.Alpha1y   =  new(float [Nx,Ny]);
  Model.Alpha2x   =  new(float [Nx,Ny]);
  Model.Alpha2y   =  new(float [Nx,Ny]);
  Model.Eta1x   =  new(float [Nx,Ny]);
  Model.Eta1y   =  new(float [Nx,Ny]);
  Model.Eta2x   =  new(float [Nx,Ny]);
  Model.Eta2y   =  new(float [Nx,Ny]);

  // Tapering (profile) functions for
  // the x- and y-directions.
  Model.dx   =  new(float [Nx]);
  Model.dy   =  new(float [Ny]);

  // Store the model
  for(j=0; j<Ny;j=j+1){
    for(i=0; i<Nx;i=i+1){
      Model.Lambda[i,j] = rho[i,j]*vp[i,j]*vp[i,j];
      Model.Rho[i,j]   = 1.0/rho[i,j];
      Model.Ql[i,j]       = Qp[i,j];
      Model.Qm[i,j]       = Qr[i,j];
    }
  }

  //Compute 1D profile functions
  Modeld(Model.dx, Model.Dx, Model.Nb);
  Modeld(Model.dy, Model.Dx, Model.Nb);

  // Comput Alpha coefficients
  Modelalphamax(Model);

  // Comput Theta coefficients
  Modelthetamax(Model);

  for(j=0; j<Ny;j=j+1){
    for(i=0; i<Nx;i=i+1){
      // For the Maxwell solid Dkappa = kappa and Drho = 1/rho
      // to comply with the solver algorithm in ac2d.e
      Model.Dlambdax[i,j]   = Model.Lambda[i,j];
      Model.Drhopx[i,j]     = Model.Rho[i,j];
    }
  }
  return(Model);
}

// Modelalphamax computes the alpha coefficients for the maxwell model.
//
// Parameters :
// - Model  : Model struct
//
// Returns  : OK or ERR
//
// See the Modelmaxwell for more documentation.
//
int Modelalphamax(struct model Model){
  int Nx,Ny;
  int i,j;
  float Qmin, Qmax;          // Q max and min
  float tau0min, tau0max;    // Tau0 max and min
  float tau0x, tau0y;        // Tau0 in x and y-dir
  float argx, argy;          // Tapering values

  Nx = Model.Nx;
  Ny = Model.Ny;

  // Compute relaxation times
  for(j=0; j<Ny;j=j+1){
    for(i=0; i<Nx;i=i+1){

      // Compute relaxation times corresponding to Qmax and Qmin
      // Note that we compute the inverse
      // of tau0, and use the same
      // name for the inverse, tau0=1/tau0.
      
      Qmin = 1.1;  // MinimumQ-value at the outer boundaries:       
      tau0min = Qmin/Model.W0;
      tau0min = 1.0/tau0min;
      Qmax  = Model.Ql[Model.Nb,j];
      tau0max = Qmax/Model.W0;
      tau0max = 1.0/tau0max;

      // Interpolate tau0 in x-direxction
      tau0x = tau0min + (tau0max-tau0min)*Model.dx[i];

      Qmax  = Model.Ql[i,Model.Nb];
      tau0max = Qmax/Model.W0;
      tau0max = 1.0/tau0max;

      // Interpolate tau0 in y-direxction
      tau0y = tau0min + (tau0max-tau0min)*Model.dy[j];

      // In the equations below the relaxation time tau0 
      // is inverse (1/tau0)
      // Compute alpha and eta coefficients
      argx = Model.dx[i];
      argy = Model.dy[j];
      // An extra tapering factor of exp(-(x/L)**2)
      // is used to taper some coefficeints 
      Model.Alpha1x[i,j]   = LibeExp(-argx)*LibeExp(-Model.Dt*tau0x);
      Model.Alpha1y[i,j]   = LibeExp(-argy)*LibeExp(-Model.Dt*tau0y);
      Model.Alpha2x[i,j]   = -Model.Dt*tau0x;
      Model.Alpha2y[i,j]   = -Model.Dt*tau0y;
 
    }
  }
  return(OK);
}
 
// Modelthetamax computes the teta coefficients for the maxwekk model
//
// Parameters :
// - Model  : Model struct
//
// Returns  : OK or ERR
//
// See the Modelmaxwell for more documentation.
//
int Modelthetamax(struct model Model){
  int Nx,Ny;
  int i,j;
  float Qmin, Qmax;         // Q max and min
  float tau0min, tau0max;   // Tau0 max and min
  float tau0x, tau0y;       // tau0 in x- and y-directions
  float argx, argy;         // Tapering values

  Nx=Model.Nx;
  Ny=Model.Ny;

  // Compute relaxation times
  for(j=0; j<Ny;j=j+1){
    for(i=0; i<Nx;i=i+1){

      // Compute relaxation times corresponding to Qmax and Qmin
      // Note that we compute the inverse
      // of tau0, and use the same
      // name for the inverse, tau0=1/tau0.
      
      Qmin = 1.1;  // MinimumQ-value at the outer boundaries:       
      tau0min = Qmin/Model.W0;
      tau0min = 1.0/tau0min;
      Qmax  = Model.Qm[Model.Nb,j];
      tau0max = Qmax/Model.W0;
      tau0max = 1.0/tau0max;

      // Interpolate tau0 in x-direxction
      tau0x = tau0min + (tau0max-tau0min)*Model.dx[i];

      Qmax  = Model.Qm[i,Model.Nb];
      tau0max = Qmax/Model.W0;
      tau0max = 1.0/tau0max;

      // Interpolate tau0 in y-direxction
      tau0y = tau0min + (tau0max-tau0min)*Model.dy[j];

      // In the equations below the relaxation time tau0 
      // is inverse (1/tau0)
      // Compute alpha and eta coefficients
      argx = Model.dx[i];
      argy = Model.dy[j];
      // An extra tapering factor of exp(-(x/L)**2)
      // is used to taper some coefficeints 
      Model.Eta1x[i,j]     = LibeExp(-argx)*LibeExp(-Model.Dt*tau0x);
      Model.Eta1y[i,j]     = LibeExp(-argy)*LibeExp(-Model.Dt*tau0y);
      Model.Eta2x[i,j]     = -Model.Dt*tau0x;
      Model.Eta2y[i,j]     = -Model.Dt*tau0y;
    }
  }
  return(OK);
}

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
// ModelNew creates the parameters needed by the El2d object
// to perform 2D acoustic modeling.
// The main parameters are density $\rho$ and bulk modulus $\kappa$ which are
// calculated from the wave velocity and density.
// In addition are the visco-elastic coefficients $\alpha_1$, $\alpha_2$ ,
// $\eta_1$  and $\eta_2$ computed.
//
// The model is defined by several 2D arrays, with the x-coordinate
// as the first index, and the y-coordinate as the second index.
// A position in the model (x,y) maps to the arrays as [i,j]
// where x=Dx*i, y=Dx*j
// The absorbing boundaries is comparable to the CPML method
// but constructed using a visco-elastic medium with
// relaxation specified by a standard-linear solid, while 
// a time dependent density which uses a standard-linear solid
// relaxation mechanism.
//
//                     Nx                Outer border        
//    |----------------------------------------------|
//    |           Qmin=1.1                           |
//    |                                              |
//    |           Qmax=Q(x,y=Dx*Nb)     Inner border |
//    |      ----------------------------------      |
//    |      |                                |      |
//    |      |                                |      | Ny
//    |      |      Q(x,y)                    |      |
//    |      |                                |<-Nb->|
//    |      |                                |      |
//    |      |                                |      |
//    |      ----------------------------------      |
//    |                                              |
//    |                                              |
//    |                                              |
//    |-----------------------------------------------
//
//    Fig 1: Organisation of the Q-model.
//           The other arrays are organised in the same way.
//
// The Boundary condition is implemented by using a strongly
// absorbing medium in a border zone with width Nb.
// The border zone has the same width both in the horizontal
// and vertical directions.
// The medium in the border zone has a Q-value of Qmax
// at the inner bondary (taken from the Q-model) and
// the Q-value is gradualy reduced to Qmin at the outer boundary.
//
//  In the finit-edifference solver we use the standard
//  linear solid to implement time dependent 
//  bulk modulus and density.
//  The standard linear solid model uses
//  two parameters, $\tau_{sigma}$ and $\tau_{\epsilon}$.
//  These are related to the Q-value by
// (See the notes.tex in the Doc directory for the equations.)
//  
//    taue(Q0) = tau0/Q0(\sqrt{Q^2_0+1} +1\right)
//    taus(Q0) = tau0/Q0(\sqrt{Q^2_0+1} +1\right)
//
//  Q0 is here the value for Q at the frequency W0.
//
//  The coeffcients needed by the solver methods in the El2d object are
//    alpha1x =  exp(d_x/Dt)exp(tausx),                                  \\
//    alpha2x =  dx Dt/tauex
//    alpha1y =  exp(d_x/Dt)exp(tausy),                                  \\
//    alpha2y =  dx Dt/tauey
//    eta1x   =  exp(d_x/Dt)exp(tausx),                                  \\
//    eta2x   =  dx Dt/tauex
//    eta1y   =  exp(d_x/Dt)exp(tausy),                                  \\
//    eta2y   =  dx Dt/tauey
//
// Relaxation times are interpolated between the values given by the Q-value 
// Qmax at the inner border of the model and the Qimin at the outer border. 
// For the interpolation we just assume that the relaxation times
// varies proportionaly with the square of the distance from
// the inner border, according to
//
//   tausx(x) = tausxmin + (tausxmax-tausxmin)*d(x)
//   tausy(x) = tausymin + (tausxmax-tausymin)*d(y)
//   tauex(x) = tauexmin + (tauexmax-tauexmin)*d(x)
//   tauey(x) = taueymin + (tausymax-tausymin)*d(y)
//                       
// where 
//
//   d(x) = (x/L)^2
//
// x is the distance from the outer border, while
// L is the length of the border.
// We also have
//
//   tausxmax = taus(Qmax)
//   tausxmin = taus(Qmin)
//   tausymax = taus(Qmax)
//   tausymin = taus(Qmin)
//   tauexmax = taue(Qmax)
//   tauexmin = taue(Qmin)
//   taueymax = taue(Qmax)
//   taueymin = taue(Qmin)
//
// Here Qmin= 1.1, while Qmax is equal to the value 
// of Q at the inner border.
struct model Modelsls(float [*,*] vp, float [*,*] vs, float [*,*] rho, float [*,*] Ql, float [*,*] Qm,
                      float [*,*] Qp, float [*,*] Qs, float Dx, float Dt, float W0, int Nb)
{
  struct model Model; // Object to instantiate

  int Nx,Ny;          // Model dimensions in x- and y-directions
  int i,j;            // Loop indices

  Model= new(struct model);
  Model.Dx = Dx;
  Model.Dt = Dt;
  Model.Nx = len(vp,0);
  Model.Ny = len(vp,1);
  Model.Nb = Nb;
  Model.W0 = W0;
  Nx = Model.Nx;
  Ny = Model.Ny;
  Model.Rho     =  new(float [Nx,Ny]); // Density
  Model.Ql      =  new(float [Nx,Ny]); // Lambda Q-values
  Model.Qm      =  new(float [Nx,Ny]); // Mu Q-values
  Model.Qp      =  new(float [Nx,Ny]); // Rho p Q-values
  Model.Qs      =  new(float [Nx,Ny]); // Rho s Q-values Q-values
  Model.Mu      = new(float [Nx,Ny]);  // Unrelaxed Lame mu 
  Model.Lambda  = new(float [Nx,Ny]);  // Unrelaxed Lame lambda

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

  // Tapering (profile) functions for
  // the x- and y-directions.
  Model.dx   =  new(float [Nx]);
  Model.dy   =  new(float [Ny]);

  // Store the model
  for(j=0; j<Ny;j=j+1){
    for(i=0; i<Nx;i=i+1){
      Model.Rho[i,j]   = 1.0/rho[i,j];
      Model.Ql[i,j]       = Ql[i,j];
      Model.Qm[i,j]       = Qm[i,j];
      Model.Qp[i,j]       = Qp[i,j];
      Model.Qs[i,j]       = Qs[i,j];
      Model.Mu[i,j]       = rho[i,j]*vs[i,j]*vs[i,j]; 
      Model.Lambda[i,j]   = rho[i,j]*(vp[i,j]*vp[i,j]-2.0*vs[i,j]*vs[i,j]);
    }
  }


  //Compute 1D profile functions
  Modeld(Model.dx, Model.Dx, Model.Nb);
  Modeld(Model.dy, Model.Dx, Model.Nb);

  // Compute alpha and beta coefficients
  Modelalphasls(Model);
  Modelbetasls(Model);
  Modeletasls(Model);
  Modelnusls(Model);
  return(Model);
}
//
// Modelstability checks velocity model for stability.
// 
// Parameters:
//       
//     - Model : Model object
//
// Return      : Stability index
float ModelStability(struct model Model)
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
