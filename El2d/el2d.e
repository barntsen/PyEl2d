import diff
import rec
import src 
import model
import libe             

class el2d :
  float [*,*] p;           # Pressure
  float [*,*] sigmaxx;     # Stress xx comp.
  float [*,*] sigmayy;     # Stress yy comp.
  float [*,*] sigmaxy;     # Stress xy comp.
  float [*,*] sigmayx;     # Stress xy comp.
  float [*,*] vx;          # x-component of particle velocity
  float [*,*] vy;          # y-component of particle velocity
  float [*,*] exx;         # time derivative of strain x-component
  float [*,*] eyy;         # time derivative of strain y-component
  float [*,*] exy;         # time derivative of strain y-component
  float [*,*] eyx;         # time derivative of strain y-component
  float [*,*] e;
  float [*,*] gammaxx;     # Memory variable for sigmaxx
  float [*,*] gammayy;     # Memory variable for sigmayy   
  float [*,*] gammaxy;     # Memory variable for sigmaxy
  float [*,*] gammayx;     # Memory variable for sigmayx
  float [*,*] thetaxxx;    # Memory variable for particle velocity
  float [*,*] thetayyy;
  float [*,*] thetaxyx;
  float [*,*] thetayxy;
  int ts;                 # Timestep no
  int fdp;                # Snapshot file descriptor
  int fdvx;               # Snapshot file descriptor
  int fdvy;               # Snapshot file descriptor
  int fde;                # Snapshot file descriptor
  int fdexy;              # Snapshot file descriptor
  int sresamp;            # Snapshot resampling factor
  int [*] snpflags;       # Flags for types of snapshots


def class el2d El2dNew(struct model Model, int sresamp, int [*] snpflags):

  # El2dNew creates a new El2d object
  #
  # Parameters:
  #     Model   : Model object
  #     sresamp : resampling factor relative to timestep.
  #     snpflags: snpflags[0]=1 # Record p snapshots.
  #               snpflags[1]=1 # Record vx snapshots.
  #               snpflags[2]=1 # Record vy snapshots.
  #               snpflags[3]=1 # Record e snapshots.
  #               snpflags[4]=1 # Record exy snapshots.
  #               A value of 0 means corresponding snapshot
  #               is NOT recorded.
  #
  # Return    :El2d object  

  struct el2d El2d;
  int i,j;

  El2d = new(struct el2d);
  El2d.sresamp = sresamp;
  El2d.snpflags = snpflags;
  El2d.p=new(float [Model.Nx,Model.Ny]); 
  El2d.sigmaxx=new(float [Model.Nx,Model.Ny]); 
  El2d.sigmayy=new(float [Model.Nx,Model.Ny]); 
  El2d.p=new(float [Model.Nx,Model.Ny]); 
  El2d.sigmaxy=new(float [Model.Nx,Model.Ny]); 
  El2d.sigmayx=new(float [Model.Nx,Model.Ny]); 
  El2d.vx=new(float [Model.Nx,Model.Ny]);
  El2d.vy=new(float [Model.Nx,Model.Ny]);
  El2d.exx=new(float [Model.Nx,Model.Ny]);
  El2d.eyy=new(float [Model.Nx,Model.Ny]);
  El2d.exy=new(float [Model.Nx,Model.Ny]);
  El2d.eyx=new(float [Model.Nx,Model.Ny]);
  El2d.e=new(float [Model.Nx,Model.Ny]);
  El2d.gammaxx=new(float [Model.Nx,Model.Ny]);
  El2d.gammayy=new(float [Model.Nx,Model.Ny]);
  El2d.gammaxy=new(float [Model.Nx,Model.Ny]);
  El2d.gammayx=new(float [Model.Nx,Model.Ny]);
  El2d.thetaxxx=new(float [Model.Nx,Model.Ny]);
  El2d.thetayyy=new(float [Model.Nx,Model.Ny]);
  El2d.thetayxy=new(float [Model.Nx,Model.Ny]);
  El2d.thetaxyx=new(float [Model.Nx,Model.Ny]);
  
  for (i=0; i<Model.Nx; i=i+1): 
    for (j=0; j<Model.Ny; j=j+1): 
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
      El2d.e[i,j]       = 0.0;
      El2d.gammaxx[i,j]  = 0.0;
      El2d.gammayy[i,j]  = 0.0;
      El2d.gammaxy[i,j]  = 0.0;
      El2d.gammayx[i,j]  = 0.0;
      El2d.thetaxxx[i,j]  = 0.0;
      El2d.thetayyy[i,j]  = 0.0;
      El2d.thetayxy[i,j]  = 0.0;
      El2d.thetaxyx[i,j]  = 0.0;
      El2d.ts = 0;
    
  

  # Open snapshot files
  if(El2d.snpflags[0] == 1):
    El2d.fdp = LibeOpen("snp-p.bin","w");
  
  if(El2d.snpflags[1] == 1):
    El2d.fdvx = LibeOpen("snp-vx.bin","w");
  
  if(El2d.snpflags[2] == 1):
    El2d.fdvy = LibeOpen("snp-vy.bin","w");
  
  if(El2d.snpflags[3] == 1):
    El2d.fde = LibeOpen("snp-e.bin","w");
  
  LibePs("snap 4: "); LibePi(El2d.snpflags[4]); LibePs("\n");
  if(El2d.snpflags[4] == 1):
    El2d.fdexy = LibeOpen("snp-exy.bin","w");

  return(El2d);


def int El2dvx(struct el2d El2d, struct model Model) :

  # El2dvx computes the x-component of particle velocity.
  #
  # Parameters:
  #   El2d : Solver object 
  #   Model: Model object
  # 
  # Returns:
  # The El2d.vx particle velocity is computed

  int nx,ny;
  int i,j;

  nx = Model.Nx;
  ny = Model.Ny;
  
  # The derivative of stress in x and -directions are stored in exx
  # and exy.
  # Scale with inverse density and advance one time step

  parallel(i=0:nx,j=0:ny):
    El2d.vx[i,j] = Model.Dt*Model.Rhox[i,j]*(El2d.exx[i,j] + El2d.exy[i,j]) \
                 + Model.Dt*El2d.thetaxxx[i,j]*Model.Drhopx[i,j]            \
                 + Model.Dt*El2d.thetayxy[i,j]*Model.Drhopy[i,j]            \
                 + El2d.vx[i,j];

    El2d.thetaxxx[i,j] = Model.Eta1x[i,j]*El2d.thetaxxx[i,j]   \
                     + Model.Eta2x[i,j]*El2d.exx[i,j];         \
    El2d.thetayxy[i,j] = Model.Eta1y[i,j]*El2d.thetayxy[i,j]   \
                     + Model.Eta2y[i,j]*El2d.exy[i,j];
  


def int El2dvy(struct el2d El2d, struct model Model) :

  # El2dvy computes the y-component of particle velocity
  #
  # Parameters:
  #   El2d : Solver object 
  #   Model: Model object
  # Returns
  # The El2d.vy particle velocity is computed.

  int nx,ny;
  int i,j;

  nx = Model.Nx;
  ny = Model.Ny;

  # The derivative of stress in y and x-direction are stored in eyy
  # and exy.
  # Scale with inverse density and advance one time step

  parallel(i=0:nx,j=0:ny):
    El2d.vy[i,j] = Model.Dt*Model.Rhoy[i,j]*(El2d.eyy[i,j] + El2d.eyx[i,j]) \
                 + Model.Dt*El2d.thetayyy[i,j]*Model.Drhopy[i,j]            \
                 + Model.Dt*El2d.thetaxyx[i,j]*Model.Drhopx[i,j]            \
                 + El2d.vy[i,j];
    
    El2d.thetayyy[i,j] = Model.Eta1y[i,j]*El2d.thetayyy[i,j]                \
                     + Model.Eta2y[i,j]*El2d.eyy[i,j];                      \
    El2d.thetaxyx[i,j] = Model.Eta1x[i,j]*El2d.thetaxyx[i,j]                \
                     + Model.Eta2x[i,j]*El2d.eyx[i,j];

def int El2de(struct el2d El2d, struct model Model):

  # El2de computes the sum of exx and eyy
  #
  # Parameters:
  #   El2d : Solver object 
  #   Model: Model object

  int nx,ny;
  int i,j;

  nx = Model.Nx;
  ny = Model.Ny;

  parallel(i=0:nx,j=0:ny):
    El2d.e[i,j] = El2d.exx[i,j]+El2d.eyy[i,j];


def int El2dexy(struct el2d El2d, struct model Model, float [*,*] tmp1,  \
            float [*,*] tmp2) :

  # El2dexy computes the dexy/dt strain
  #
  # Parameters:
  #   El2d : Solver object 
  #   Model: Model object
  #   tmp1 : dvx/dy
  #   tmp2 : dvy/dx

  int nx,ny;
  int i,j;

  nx = Model.Nx;
  ny = Model.Ny;

  parallel(i=0:nx,j=0:ny):
    El2d.exy[i,j] = 0.5*(tmp1[i,j]+tmp2[i,j]);
  
def int El2deyx(struct el2d El2d, struct model Model, float [*,*] tmp1,  \
            float [*,*] tmp2):

  # El2deyx computes the deyx/dt strain.
  #
  # Parameters:
  #   El2d : Solver object 
  #   Model: Model object
  #   tmp1 : dvx/dy
  #   tmp2 : dvy/dx

  int nx,ny;
  int i,j;

  nx = Model.Nx;
  ny = Model.Ny;

  parallel(i=0:nx,j=0:ny):
    El2d.eyx[i,j] = 0.5*(tmp1[i,j]+tmp2[i,j]);
  
def int El2dstress(struct el2d El2d, struct model Model):

  # El2dstress computes elastic stress
  #
  # Parameters:
  #   El2d : Solver object 
  #   Model: Model object

  int nx, ny;
  int i,j;

  nx = Model.Nx;
  ny = Model.Ny;

  parallel(i=0:nx,j=0:ny):
   El2d.sigmaxx[i,j] = Model.Dt*Model.Lambda[i,j]*(El2d.exx[i,j]          \
                     +El2d.eyy[i,j])                                      \
                     + 2.0*Model.Dt*Model.Mu[i,j]*El2d.exx[i,j]           \
                     + Model.Dt*(El2d.gammaxx[i,j]*Model.Dlambdax[i,j]    \
                     + El2d.gammayy[i,j]*Model.Dlambday[i,j])             \
                     + 2.0*Model.Dt*El2d.gammaxx[i,j]*Model.Dmux[i,j]     \
                     + El2d.sigmaxx[i,j];


   El2d.sigmayy[i,j] = Model.Dt*Model.Lambda[i,j]*(El2d.exx[i,j]         \
                     +El2d.eyy[i,j])                                     \
                     + 2.0*Model.Dt*Model.Mu[i,j]*El2d.eyy[i,j]          \
                     + Model.Dt*(El2d.gammaxx[i,j]*Model.Dlambdax[i,j]   \
                     + El2d.gammayy[i,j]*Model.Dlambday[i,j])            \
                     + 2.0*Model.Dt*El2d.gammayy[i,j]*Model.Dmuy[i,j]    \
                     + El2d.sigmayy[i,j];

   El2d.p[i,j]       = 0.5*(El2d.sigmaxx[i,j] + El2d.sigmayy[i,j]);

   El2d.sigmaxy[i,j] = 2.0*Model.Dt*Model.Muxy[i,j]*El2d.exy[i,j]       \
                     + 2.0*Model.Dt*El2d.gammaxy[i,j]*Model.Dmuxyy[i,j] \
                     + El2d.sigmaxy[i,j];
   El2d.sigmayx[i,j] = 2.0*Model.Dt*Model.Muxy[i,j]*El2d.exy[i,j]       \
                     + 2.0*Model.Dt*El2d.gammayx[i,j]*Model.Dmuxyx[i,j] \
                     + El2d.sigmayx[i,j];

   El2d.gammaxx[i,j] = Model.Alpha1x[i,j]*El2d.gammaxx[i,j]   \
                     + Model.Alpha2x[i,j]*El2d.exx[i,j];
   El2d.gammayy[i,j] = Model.Alpha1y[i,j]*El2d.gammayy[i,j]   \
                     + Model.Alpha2y[i,j]*El2d.eyy[i,j];
   El2d.gammaxy[i,j] = Model.Beta1y[i,j]*El2d.gammaxy[i,j]    \
                     + Model.Beta2y[i,j]*El2d.exy[i,j];
   El2d.gammayx[i,j] = Model.Beta1x[i,j]*El2d.gammayx[i,j]    \
                     + Model.Beta2x[i,j]*El2d.eyx[i,j];

def int El2dSnap(struct el2d El2d,int it) :

  # El2dSnap records snapshots.
  #
  # Arguments: 
  #  El2d:   : El2d object
  #  it      : Current time step       
  # Returns  : Integer (OK or ERR)

  int n;
  int Nx, Ny;
  char [*] tmp;
  
  if (El2d.sresamp <= 0):
    return(OK);
  
  Nx = len(El2d.sigmaxx,0);
  Ny = len(El2d.sigmaxx,1);
  n = Nx*Ny;
  if(LibeMod(it,El2d.sresamp) == 0):
    if(El2d.snpflags[0] == 1):
      tmp = cast(char [4*n],El2d.p);
      LibeWrite(El2d.fdp,4*n,tmp);
    
    if(El2d.snpflags[1] == 1):
      tmp = cast(char [4*n],El2d.vx);
      LibeWrite(El2d.fdvx,4*n,tmp);
    
    if(El2d.snpflags[2] == 1):
      tmp = cast(char [4*n],El2d.vy);
      LibeWrite(El2d.fdvy,4*n,tmp);
    
    if(El2d.snpflags[3] == 1):
      tmp = cast(char [4*n],El2d.e);
      LibeWrite(El2d.fde,4*n,tmp);
    
    if(El2d.snpflags[4] == 1):
      tmp = cast(char [4*n],El2d.exy);
      LibeWrite(El2d.fdexy,4*n,tmp);
  
  return(OK);

def int El2dSolve(struct el2d El2d, struct model Model, struct src Src, \
              struct rec Rec,int nt,int l):

  # El2dSolve computes the solution of the elastic wave equation.
  #  Parameters:  
  #    El2d : Solver object
  #    Model: Model object
  #    Src  : Source object
  #    Rec  : Receiver object
  #    nt   : Number of timesteps to do starting with current step  
  #    l    : The differentiator operator length
  # 
  # Returns:
  # The elastic equation of motion are integrated using Virieux's (1986) 
  # stress-velocity scheme.
  # (See the Manual in the Doc directory).
  # 
  #     vx(t+dt)   = dt/rhox [d^+x sigma_xx(t) + d^+y sigma_yx dt fx] + vx(t)
  #     vy(t+dt)   = dt/rhox [d^+x sigma_xy(t) + d^+y sigma_yy dt fy] + vy(t)
  #
  #     dexx/dt     =  d^-_x v_x 
  #     deyy/dt     =  d^-_y v_y 
  #     dexy/dt     =  0.5*[d^-_x v_y + d^-_y v_x]
  #
  #     sigmaxx(t+dt)     = dt*lambda[dexx/dt(t+dt/2) + deyy(t+dt/2)] 
  #                       + 2*mu*dexx/dt(t+dt/2) + dt*qxx(t+dt/2)
  #                       + sigmaxx(t)
  #                                                     
  #     sigmayy(t+dt)     = dt*lambda[deyy/dt(t+dt/2) + dexx(t+dt/2)] 
  #                       + 2*mu*deyy/dt(t+dt/2) + dt*qxx(t+dt/2)
  #                         + sigmayy(t)
  #     sigmaxy(t+dt)     = 2*dt*mu*dexy/dt(t+dt/2)
  #                       + sigmaxy(t)
  #
  #  

  int sx,sy;         # Pressure Source x,y-coordinates 
  struct diff Diff;  # Differentiator object
  int ns,ne;         # Start stop timesteps
  float [*,*] tmp1,tmp2;
  int i,k;

  float perc,oldperc; # Percentage finished current and old
  int iperc;          # Percentage finished

  Diff = DiffNew(l);  # Create differentiator object
  tmp1 = new(float[Model.Nx, Model.Ny]);
  tmp2 = new(float[Model.Nx, Model.Ny]);

  oldperc=0.0;
  ns=El2d.ts;         #Get current timestep 
  ne = ns+nt;         
  for(i=ns; i<ne; i=i+1):

    # Compute spatial derivatives of stress
    # Use exx, exy and eyy as temp storage
    DiffDxplus(Diff,El2d.sigmaxx,El2d.exx,Model.Dx); 
    DiffDyminus(Diff,El2d.sigmaxy,El2d.exy,Model.Dx); 

    # Compute vx
    El2dvx(El2d,Model);                        
    DiffDyplus(Diff,El2d.sigmayy,El2d.eyy,Model.Dx); 
    DiffDxminus(Diff,El2d.sigmaxy,El2d.eyx,Model.Dx); 
    # Compute vy
    El2dvy(El2d,Model);                        

    # Compute strains
    DiffDxminus(Diff,El2d.vx,El2d.exx,Model.Dx);  
    DiffDyminus(Diff,El2d.vy,El2d.eyy,Model.Dx); 
    DiffDxplus(Diff,El2d.vy,tmp1,Model.Dx);       
    DiffDyplus(Diff,El2d.vx,tmp2,Model.Dx);    
    El2dexy(El2d,Model,tmp1,tmp2);
    El2deyx(El2d,Model,tmp1,tmp2);
    El2de(El2d,Model);

    # Update stress
    El2dstress(El2d,Model);  
   
    # Add source
    for (k=0; k<Src.Ns;k=k+1):
      sx=Src.Sx[k];
      sy=Src.Sy[k];
      El2d.sigmaxx[sx,sy] = El2d.sigmaxx[sx,sy]                      \
        + Model.Dt*(Src.Sqxx[i,k]/(Model.Dx*Model.Dx)) ;   
      El2d.sigmayy[sx,sy] = El2d.sigmayy[sx,sy]                      \
        + Model.Dt*(Src.Sqyy[i,k]/(Model.Dx*Model.Dx)) ; 
      El2d.vx[sx,sy] = El2d.vx[sx,sy]                                \
        + Model.Dt*(Src.Sfx[i,k]/(Model.Dx*Model.Dx)) ; 
      El2d.vy[sx,sy] = El2d.vy[sx,sy]                                \
        + Model.Dt*(Src.Sfy[i,k]/(Model.Dx*Model.Dx)) ; 
    

    # Print progress
    perc=1000.0*(cast(float,i)/cast(float,ne-ns-1));
    if(perc-oldperc >= 10.0):
      iperc=cast(int,perc)/10;
      if(LibeMod(iperc,10)==0):
        LibePuti(stderr,iperc);
        LibePuts(stderr,"\n");
        LibeFlush(stderr);
      
      oldperc=perc;

    #Record wavefield
    RecReceiver(Rec,i,El2d.p,El2d.vx,El2d.vy); 

    # Record Snapshots
    El2dSnap(El2d,i);

  # Update the time variable
  El2d.ts = El2d.ts+ne;

  return(1);


