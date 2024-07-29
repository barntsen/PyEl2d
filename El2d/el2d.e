// El2d object

// Imports
  include <libe.i>             
  include "diff.i"
  include "rec.i"
  include "src.i"
  include "model.i"
  include "el2d.i"

// Internal functions

  int El2dvx(struct el2d El2d, struct model Model){}
  int El2dvy(struct el2d El2d, struct model Model){}
  int El2dexy(struct el2d El2d, struct model Model, float [*,*] vx, 
              float [*,*] vy){}
  int El2deyx(struct el2d El2d, struct model Model, float [*,*] vx,          
              float [*,*] vy){}
  int El2dstress(struct el2d El2d, struct model Model){} 

  int El2dSnap(struct el2d El2d,int it){}

// Public functions

// El2dNew creates a new El2d object
//
// Parameters:
//   - Model : Model object
//
// Return    :El2d object  
  struct el2d El2dNew(struct model Model, int sresamp, int [*] snpflags){
  struct el2d El2d;
  int i,j;
  
  El2d = new(struct el2d);
  El2d.sresamp = sresamp;
  El2d.snpflags = snpflags;
  El2d.p=new(float [Model.Nx,Model.Ny]); 
  El2d.sigmaxx=new(float [Model.Nx,Model.Ny]); 
  El2d.sigmayy=new(float [Model.Nx,Model.Ny]); 
  El2d.sigmaxy=new(float [Model.Nx,Model.Ny]); 
  El2d.sigmayx=new(float [Model.Nx,Model.Ny]); 
  El2d.vx=new(float [Model.Nx,Model.Ny]);
  El2d.vy=new(float [Model.Nx,Model.Ny]);
  El2d.exx=new(float [Model.Nx,Model.Ny]);
  El2d.eyy=new(float [Model.Nx,Model.Ny]);
  El2d.exy=new(float [Model.Nx,Model.Ny]);
  El2d.eyx=new(float [Model.Nx,Model.Ny]);
  El2d.gammaxx=new(float [Model.Nx,Model.Ny]);
  El2d.gammayy=new(float [Model.Nx,Model.Ny]);
  El2d.gammaxy=new(float [Model.Nx,Model.Ny]);
  El2d.gammayx=new(float [Model.Nx,Model.Ny]);
  El2d.thetaxxx=new(float [Model.Nx,Model.Ny]);
  El2d.thetayyy=new(float [Model.Nx,Model.Ny]);
  El2d.thetayxy=new(float [Model.Nx,Model.Ny]);
  El2d.thetaxyx=new(float [Model.Nx,Model.Ny]);
  
  for (i=0; i<Model.Nx; i=i+1){ 
    for (j=0; j<Model.Ny; j=j+1){ 
      El2d.p[i,j]       = 0.0;
      El2d.sigmaxx[i,j] = 0.0;
      El2d.sigmayy[i,j] = 0.0;
      El2d.sigmaxy[i,j] = 0.0;
      El2d.sigmayx[i,j] = 0.0;
      El2d.vx[i,j]      = 0.0;
      El2d.vy[i,j]      = 0.0;
      El2d.exx[i,j]     = 0.0;
      El2d.eyy[i,j]     = 0.0;
      El2d.exy[i,j]     = 0.0;
      El2d.eyx[i,j]     = 0.0;
      El2d.gammaxx[i,j]  = 0.0;
      El2d.gammayy[i,j]  = 0.0;
      El2d.gammaxy[i,j]  = 0.0;
      El2d.gammayx[i,j]  = 0.0;
      El2d.thetaxxx[i,j]  = 0.0;
      El2d.thetayyy[i,j]  = 0.0;
      El2d.thetayxy[i,j]  = 0.0;
      El2d.thetaxyx[i,j]  = 0.0;
      El2d.ts = 0;
    }
  }
  // Open snapshot file
  if(El2d.snpflags[0] == 1){
    El2d.fdsxx = LibeOpen("snp-sxx.bin","w");
  }
  if(El2d.snpflags[1] == 1){
    El2d.fdsxx = LibeOpen("snp-syy.bin","w");
  }
  if(El2d.snpflags[2] == 1){
    El2d.fdsxx = LibeOpen("snp-vx.bin","w");
  }
  if(El2d.snpflags[3] == 1){
    El2d.fdsxx = LibeOpen("snp-vy.bin","w");
  }

  return(El2d);
}
// El2dSolve computes the solution of the elastic wave equation.
// The elastic equation of motion are integrated using Virieux's (1986) 
// stress-velocity scheme.
// (See the Manual in the Doc directory).
// 
//     vx(t+dt)   = dt/rhox [d^+x sigma_xx(t) + d^+y sigma_yx dt fx] + vx(t)
//                
//     vy(t+dt)   = dt/rhox [d^+x sigma_xy(t) + d^+y sigma_yy dt fy] + vy(t)
//                
//
//     dexx/dt     =  d^-_x v_x 
//     deyy/dt     =  d^-_y v_y 
//     dexy/dt     =  0.5*[d^-_x v_y + d^-_y v_x]
//
//     sigmaxx(t+dt)     = dt*lambda[dexx/dt(t+dt/2) + deyy(t+dt/2)] 
//                       + 2*mu*dexx/dt(t+dt/2) + dt*qxx(t+dt/2)
//                       + sigmaxx(t)
//                                                     
//     sigmayy(t+dt)     = dt*lambda[deyy/dt(t+dt/2) + dexx(t+dt/2)] 
//                       + 2*mu*deyy/dt(t+dt/2) + dt*qxx(t+dt/2)
//                         + sigmayy(t)
//     sigmaxy(t+dt)     = 2*dt*mu*dexy/dt(t+dt/2)
//                       + sigmaxy(t)
//
//  
//  Parameters:  
//    El2d : Solver object
//    Model: Model object
//    Src  : Source object
//    Rec  : Receiver object
//    nt   : Number of timesteps to do starting with current step  
//    l    : The differentiator operator length
int El2dSolve(struct el2d El2d, struct model Model, struct src Src, 
              struct rec Rec,int nt,int l)
{
  int sx,sy;         // Pressure Source x,y-coordinates 
  struct diff Diff;  // Differentiator object
  int ns,ne;         // Start stop timesteps
  float [*,*] tmp1,tmp2;
  int i,k;
  float [*,*] p;

  float perc,oldperc; // Percentage finished current and old
  int iperc;          // Percentage finished

  Diff = DiffNew(l);  // Create differentiator object
  tmp1 = new(float[Model.Nx, Model.Ny]);
  tmp2 = new(float[Model.Nx, Model.Ny]);

  oldperc=0.0;
  ns=El2d.ts;         //Get current timestep 
  ne = ns+nt;         
  for(i=ns; i<ne; i=i+1){

    // Compute spatial derivatives of stress
    // Use exx, exy and eyy as temp storage
    DiffDxplus(Diff,El2d.sigmaxx,El2d.exx,Model.Dx); 
    DiffDyminus(Diff,El2d.sigmaxy,El2d.exy,Model.Dx); 
    // Compute vx
    El2dvx(El2d,Model);                        
    DiffDyplus(Diff,El2d.sigmayy,El2d.eyy,Model.Dx); 
    DiffDxminus(Diff,El2d.sigmaxy,El2d.eyx,Model.Dx); 
    // Compute vy
    El2dvy(El2d,Model);                        

    // Compute strains
    DiffDxminus(Diff,El2d.vx,El2d.exx,Model.Dx);  
    DiffDyminus(Diff,El2d.vy,El2d.eyy,Model.Dx); 
    DiffDxplus(Diff,El2d.vy,tmp1,Model.Dx);       
    DiffDyplus(Diff,El2d.vx,tmp2,Model.Dx);    
    El2dexy(El2d,Model,tmp1,tmp2);
    El2deyx(El2d,Model,tmp1,tmp2);

    // Update stress
     El2dstress(El2d,Model);  
   
    // Add source
    for (k=0; k<Src.Ns;k=k+1){
      sx=Src.Sx[k];
      sy=Src.Sy[k];
      
      El2d.sigmaxx[sx,sy] = El2d.sigmaxx[sx,sy]
                    + Model.Dt*(Src.Sqxx[i,k]/(Model.Dx*Model.Dx)) ; 
        El2d.sigmayy[sx,sy] = El2d.sigmayy[sx,sy]
                    + Model.Dt*(Src.Sqyy[i,k]/(Model.Dx*Model.Dx)) ; 
        El2d.vx[sx,sy] = El2d.vx[sx,sy]
                    + Model.Dt*(Src.Sfx[i,k]/(Model.Dx*Model.Dx)) ; 
        El2d.vy[sx,sy] = El2d.vy[sx,sy]
                    + Model.Dt*(Src.Sfy[i,k]/(Model.Dx*Model.Dx)) ; 
    }

    // Print progress
    perc=1000.0*(cast(float,i)/cast(float,ne-ns-1));
    if(perc-oldperc >= 10.0){
      iperc=cast(int,perc)/10;
      if(LibeMod(iperc,10)==0){
        LibePuti(stderr,iperc);
        LibePuts(stderr,"\n");
        LibeFlush(stderr);
      }
      oldperc=perc;
   }

    //Record wavefield
    RecReceiver(Rec,i,El2d.sigmaxx,El2d.sigmayy,El2d.vx,El2d.vy); 

    // Record Snapshots
    El2dSnap(El2d,i);

    RecSave(Rec,"xaa.bin");
  }
  return(1);
}
// El2dvx computes the x-component of particle velocity
//
// Parameters:
//   El2d : Solver object 
//   Model: Model object
int El2dvx(struct el2d El2d, struct model Model)
{
  int nx,ny;
  int i,j;

  nx = Model.Nx;
  ny = Model.Ny;
  
  // The derivative of stress in x and -directions are stored in exx
  // and exy.
  // Scale with inverse density and advance one time step
  parallel(i=0:nx,j=0:ny){
    El2d.vx[i,j] = Model.Dt*Model.Rho[i,j]*(El2d.exx[i,j] + El2d.exy[i,j])
                 + Model.Dt*El2d.thetaxxx[i,j]*Model.Drhopx[i,j]
                 + Model.Dt*El2d.thetayxy[i,j]*Model.Drhosy[i,j] 
                 + El2d.vx[i,j];

    El2d.thetaxxx[i,j] = Model.Eta1x[i,j]*El2d.thetaxxx[i,j]
                     + Model.Eta2x[i,j]*El2d.exx[i,j];
    El2d.thetayxy[i,j] = Model.Nu1y[i,j]*El2d.thetayxy[i,j]
                     + Model.Nu2y[i,j]*El2d.exy[i,j];
  }
}
// El2dvy computes the y-component of particle velocity
//
// Parameters:
//   El2d : Solver object 
//   Model: Model object
int El2dvy(struct el2d El2d, struct model Model)
{
  int nx,ny;
  int i,j;

  nx = Model.Nx;
  ny = Model.Ny;

  // The derivative of stress in y and x-direction are stored in eyy
  // and exy.
  // Scale with inverse density and advance one time step
  parallel(i=0:nx,j=0:ny){
    El2d.vy[i,j] = Model.Dt*Model.Rho[i,j]*(El2d.eyy[i,j] + El2d.eyx[i,j])
                 + Model.Dt*El2d.thetayyy[i,j]*Model.Drhopy[i,j]
                 + Model.Dt*El2d.thetaxyx[i,j]*Model.Drhosx[i,j]
                 + El2d.vy[i,j];
    
    El2d.thetayyy[i,j] = Model.Eta1y[i,j]*El2d.thetayyy[i,j]
                     + Model.Eta2y[i,j]*El2d.eyy[i,j];
    El2d.thetaxyx[i,j] = Model.Nu1x[i,j]*El2d.thetaxyx[i,j]
                     + Model.Nu2x[i,j]*El2d.eyx[i,j];
  }
}
// El2dexy computes the dexy/dt strain
//
// Parameters:
//   El2d : Solver object 
//   Model: Model object
int El2dexy(struct el2d El2d, struct model Model, float [*,*] tmp1, 
            float [*,*] tmp2)
{
  int nx,ny;
  int i,j;

  nx = Model.Nx;
  ny = Model.Ny;

  parallel(i=0:nx,j=0:ny){
    El2d.exy[i,j] = 0.5*(tmp1[i,j]+tmp2[i,j]);
  }
}
// El2deyx computes the deyx/dt strain
//
// Parameters:
//   El2d : Solver object 
//   Model: Model object
int El2deyx(struct el2d El2d, struct model Model, float [*,*] tmp1, 
            float [*,*] tmp2)
{
  int nx,ny;
  int i,j;

  nx = Model.Nx;
  ny = Model.Ny;

  parallel(i=0:nx,j=0:ny){
    El2d.eyx[i,j] = 0.5*(tmp1[i,j]+tmp2[i,j]);
  }
}
// El2dstress computes elastic stress
//
// Parameters:
//   El2d : Solver object 
//   Model: Model object
int El2dstress(struct el2d El2d, struct model Model){
  int nx, ny;
  int i,j,l;

  nx = Model.Nx;
  ny = Model.Ny;

  parallel(i=0:nx,j=0:ny){
   El2d.sigmaxx[i,j] = Model.Dt*Model.Lambda[i,j]*(El2d.exx[i,j]
                     +El2d.eyy[i,j])  
                     + 2.0*Model.Dt*Model.Mu[i,j]*El2d.exx[i,j]
                     + Model.Dt*(El2d.gammaxx[i,j]*Model.Dlambdax[i,j]
                     + El2d.gammayy[i,j]*Model.Dlambday[i,j])
                     + 2.0*Model.Dt*El2d.gammaxx[i,j]*Model.Dmux[i,j]
                     + El2d.sigmaxx[i,j];


   El2d.sigmayy[i,j] = Model.Dt*Model.Lambda[i,j]*(El2d.exx[i,j]
                     +El2d.eyy[i,j])  
                     + 2.0*Model.Dt*Model.Mu[i,j]*El2d.eyy[i,j]
                     + Model.Dt*(El2d.gammaxx[i,j]*Model.Dlambdax[i,j]
                     + El2d.gammayy[i,j]*Model.Dlambday[i,j])
                     + 2.0*Model.Dt*El2d.gammayy[i,j]*Model.Dmuy[i,j]
                     + El2d.sigmayy[i,j];

   El2d.sigmaxy[i,j] = 2.0*Model.Dt*Model.Mu[i,j]*El2d.exy[i,j]
                     + 2.0*Model.Dt*El2d.gammaxy[i,j]*Model.Dmuy[i,j]
                     + El2d.sigmaxy[i,j];
   El2d.sigmayx[i,j] = 2.0*Model.Dt*Model.Mu[i,j]*El2d.exy[i,j]
                     + 2.0*Model.Dt*El2d.gammayx[i,j]*Model.Dmux[i,j]
                     + El2d.sigmayx[i,j];

   El2d.gammaxx[i,j] = Model.Alpha1x[i,j]*El2d.gammaxx[i,j] 
                     + Model.Alpha2x[i,j]*El2d.exx[i,j];
   El2d.gammayy[i,j] = Model.Alpha1y[i,j]*El2d.gammayy[i,j] 
                     + Model.Alpha2y[i,j]*El2d.eyy[i,j];
   El2d.gammaxy[i,j] = Model.Beta1y[i,j]*El2d.gammaxy[i,j] 
                     + Model.Beta2y[i,j]*El2d.exy[i,j];
   El2d.gammayx[i,j] = Model.Beta1x[i,j]*El2d.gammayx[i,j] 
                     + Model.Beta2x[i,j]*El2d.eyx[i,j];
  }
}
// El2dSnap records snapshots
//
// Arguments: 
//  El2d:   : El2d object
//  it      : Current time step       
// Returns  : Integer (OK or ERR)
int El2dSnap(struct el2d El2d,int it)
{
  int n;
  int Nx, Ny;
  char [*] tmp;
  
  if (El2d.sresamp <= 0){
    return(OK);
  }
  Nx = len(El2d.sigmaxx,0);
  Ny = len(El2d.sigmaxx,1);
  n = Nx*Ny;
  if(LibeMod(it,El2d.sresamp) == 0){
    if(El2d.snpflags[0] == 1){
      tmp = cast(char [4*n],El2d.sigmaxx);
      LibeWrite(El2d.fdsxx,4*n,tmp);
    }
    if(El2d.snpflags[1] == 1){
      tmp = cast(char [4*n],El2d.sigmayy);
      LibeWrite(El2d.fdsyy,4*n,tmp);
    }
    if(El2d.snpflags[2] == 1){
      tmp = cast(char [4*n],El2d.vx);
      LibeWrite(El2d.fdvx,4*n,tmp);
    }
    if(El2d.snpflags[3] == 1){
      tmp = cast(char [4*n],El2d.vy);
      LibeWrite(El2d.fdvy,4*n,tmp);
    }
  }
  return(OK);
}
