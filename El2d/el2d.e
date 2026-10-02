import diff
import model
import libe             

struct el2d :
  float [*,*] p            # Pressure
  float [*,*] sigmaxx      # Stress xx comp.
  float [*,*] sigmayy      # Stress yy comp.
  float [*,*] sigmaxy      # Stress xy comp.
  float [*,*] sigmayx      # Stress xy comp.
  float [*,*] vx           # x-component of particle velocity
  float [*,*] vy           # y-component of particle velocity
  float [*,*] exx          # time derivative of strain x-component
  float [*,*] eyy          # time derivative of strain y-component
  float [*,*] exy          # time derivative of strain y-component
  float [*,*] eyx          # time derivative of strain y-component
  float [*,*] gammax      # Memory variable for sigmaxx
  float [*,*] gammay      # Memory variable for sigmayy   
  float [*,*] thetaxx     # Memory variable for particle velocity
  float [*,*] thetayy 
  float [*,*] thetaxy 
  float [*,*] thetayx 
  float [*,*] alphax 
  float [*,*] alphay 
  float [*,*] betaxy 
  float [*,*] betayx 
  int ts                  # Timestep no
  int fdp                 # Snapshot file descriptor
  int fdvx                # Snapshot file descriptor
  int fdvy                # Snapshot file descriptor
  int fdsxx               # Snapshot file descriptor
  int fdsyy               # Snapshot file descriptor
  int fdsxy               # Snapshot file descriptor
  int sresamp             # Snapshot resampling factor
  int [*] snpflags        # Flags for types of snapshots

import rec
import src 

def struct el2d El2dNew(struct model Model, int sresamp, int [*] snpflags):

  # El2dNew creates a new El2d object
  #
  # Parameters:
  #     Model   : Model object
  #     sresamp : resampling factor relative to timestep.
  #     snpflags: snpflags[0]=1 # Record p snapshots.
  #               snpflags[1]=1 # Record vx snapshots.
  #               snpflags[2]=1 # Record vy snapshots.
  #               snpflags[3]=1 # Record sigmaxx snapshots.
  #               snpflags[4]=1 # Record sigmayy snapshots.
  #               snpflags[5]=1 # Record sigmaxy snapshots.
  #               A value of 0 means corresponding snapshot
  #               is NOT recorded.
  #
  # Return    :El2d object  

  #struct el2d El2d 
  #int i,j 

  El2d = new(struct el2d) 
  El2d.sresamp = sresamp 
  El2d.snpflags = snpflags 
  El2d.p=new(float [Model.nx,Model.ny])  
  El2d.sigmaxx=new(float [Model.nx,Model.ny])  
  El2d.sigmayy=new(float [Model.nx,Model.ny])  
  El2d.p=new(float [Model.nx,Model.ny])  
  El2d.sigmaxy=new(float [Model.nx,Model.ny])  
  El2d.sigmayx=new(float [Model.nx,Model.ny])  
  El2d.vx=new(float [Model.nx,Model.ny]) 
  El2d.vy=new(float [Model.nx,Model.ny]) 
  El2d.exx=new(float [Model.nx,Model.ny]) 
  El2d.eyy=new(float [Model.nx,Model.ny]) 
  El2d.exy=new(float [Model.nx,Model.ny]) 
  El2d.eyx=new(float [Model.nx,Model.ny]) 
  El2d.gammax=new(float [Model.nx,Model.ny]) 
  El2d.gammay=new(float [Model.nx,Model.ny]) 
  El2d.alphax=new(float [Model.nx,Model.ny]) 
  El2d.alphay=new(float [Model.nx,Model.ny]) 
  El2d.betaxy=new(float [Model.nx,Model.ny]) 
  El2d.betayx=new(float [Model.nx,Model.ny]) 
  El2d.thetaxx=new(float [Model.nx,Model.ny]) 
  El2d.thetayy=new(float [Model.nx,Model.ny]) 
  El2d.thetayx=new(float [Model.nx,Model.ny]) 
  El2d.thetaxy=new(float [Model.nx,Model.ny]) 
  El2d.ts = 0 
    
  # Open snapshot files
  if(El2d.snpflags[0] == 1):
    El2d.fdp = LibeOpen("snp-p.bin","w") 
  if(El2d.snpflags[1] == 1):
    El2d.fdvx = LibeOpen("snp-vx.bin","w") 
  if(El2d.snpflags[2] == 1):
    El2d.fdvy = LibeOpen("snp-vy.bin","w") 
  
  if(El2d.snpflags[3] == 1):
    El2d.fdsxx = LibeOpen("snp-sxx.bin","w") 
  
  if(El2d.snpflags[4] == 1):
    El2d.fdsyy = LibeOpen("snp-syy.bin","w") 

  if(El2d.snpflags[5] == 1):
    El2d.fdsxy = LibeOpen("snp-sxy.bin","w") 

  return(El2d) 

def int El2dvx(struct el2d El2d, struct model Model) :

  # El2dvx computes the x-component of particle velocity.
  #
  # Parameters:
  #   El2d : Solver object 
  #   Model: Model object
  # 
  # Returns:
  # The El2d.vx particle velocity is computed

  nx = Model.nx 
  ny = Model.ny 
  dt = Model.dt
  
  # The derivative of stress in x and -directions are stored in exx
  # and exy.
  # Scale with inverse density and advance one time step

  parallel(i=0:nx,j=0:ny):
    El2d.vx[i,j] = dt*Model.nu[i,j]*(El2d.exx[i,j] + El2d.exy[i,j])        \
                 + dt*(El2d.thetaxx[i,j]+El2d.thetaxy[i,j])                \
                 + El2d.vx[i,j]                           

    El2d.thetaxx[i,j] = El2d.thetaxx[i,j]*LibeExp(-dt/Model.etasx[i,j])     \
                      + ((Model.nu[i,j]*(1.0-Model.etaex[i,j]               \
                        /Model.etasx[i,j])*dt)/Model.etaex[i,j])            \
                        *El2d.exx[i,j] 
    El2d.thetaxy[i,j] = El2d.thetaxy[i,j]*LibeExp(-dt/Model.etasy[i,j])     \
                      + ((Model.nu[i,j]*(1.0-Model.etaey[i,j]               \
                        /Model.etasy[i,j])*dt)/Model.etaey[i,j])            \
                        *El2d.exy[i,j] 

def int El2dvy(struct el2d El2d, struct model Model) :

  # El2dvy computes the y-component of particle velocity
  #
  # Parameters:
  #   El2d : Solver object 
  #   Model: Model object
  # Returns
  # The El2d.vy particle velocity is computed.

  nx = Model.nx 
  ny = Model.ny 
  dt = Model.dt
  
  # The derivative of stress in y-directions are stored in eyy
  # and eyx.
  # Scale with inverse density and advance one time step

  parallel(i=0:nx,j=0:ny):
    El2d.vy[i,j] = dt*Model.nu[i,j]*(El2d.eyy[i,j] + El2d.eyx[i,j])        \
                 + dt*(El2d.thetayy[i,j]+El2d.thetayx[i,j])                \
                 + El2d.vy[i,j]                           

    El2d.thetayy[i,j] = El2d.thetayy[i,j]*LibeExp(-dt/Model.etasy[i,j])     \
                      + ((Model.nu[i,j]*(1.0-Model.etaey[i,j]               \
                        /Model.etasy[i,j])*dt)/Model.etaey[i,j])            \
                        *El2d.eyy[i,j] 
    El2d.thetayx[i,j] = El2d.thetayx[i,j]*LibeExp(-dt/Model.etasx[i,j])     \
                      + ((Model.nu[i,j]*(1.0-Model.etaex[i,j]               \
                        /Model.etasx[i,j])*dt)/Model.etaex[i,j])            \
                        *El2d.eyx[i,j] 

def int El2dstress(struct el2d El2d, struct model Model):

  # El2dstress computes elastic stress
  #
  # Parameters:
  #   El2d : Solver object 
  #   Model: Model object

  nx = Model.nx 
  ny = Model.ny 
  dt = Model.dt

  parallel(i=0:nx,j=0:ny):
   El2d.sigmaxx[i,j] = Model.dt*Model.lambda[i,j]                         \
                      *(El2d.exx[i,j] +El2d.eyy[i,j])                     \
                      + Model.dt*2.0*Model.mu[i,j]*El2d.exx[i,j]              \
                      + dt*(El2d.gammax[i,j]+El2d.gammay[i,j]             \
                      + El2d.alphax[i,j])                                 \
                      + El2d.sigmaxx[i,j] 

   El2d.sigmayy[i,j] = Model.dt*Model.lambda[i,j]                          \
                      *(El2d.exx[i,j]+El2d.eyy[i,j])                       \
                      + Model.dt*2.0*Model.mu[i,j]*El2d.eyy[i,j]               \
                      + dt*(El2d.gammax[i,j]+El2d.gammay[i,j]              \
                      + El2d.alphay[i,j])                                  \
                      + El2d.sigmayy[i,j] 

   El2d.p[i,j]       = 0.5*(El2d.sigmaxx[i,j] + El2d.sigmayy[i,j]) 

   El2d.sigmaxy[i,j] = Model.dt*Model.mu[i,j]*(El2d.exy[i,j]+El2d.eyx[i,j]) \
                      + dt*(El2d.betaxy[i,j] + El2d.betayx[i,j])            \
                      + El2d.sigmaxy[i,j] 

   El2d.sigmayx[i,j] = Model.dt*Model.mu[i,j]*(El2d.eyx[i,j] +El2d.exy[i,j]) \
                      + dt*(El2d.betayx[i,j]+El2d.betaxy[i,j])              \
                      + El2d.sigmayx[i,j] 
   
   El2d.gammax[i,j]  = El2d.gammax[i,j]*LibeExp(-dt/Model.tausx[i,j])      \
                       + ((Model.lambda[i,j]*(1.0-Model.tauex[i,j]         \
                        /Model.tausx[i,j])*dt)/Model.tauex[i,j])           \
                        *El2d.exx[i,j] 

   El2d.gammay[i,j]  = El2d.gammay[i,j]*LibeExp(-dt/Model.tausy[i,j])      \
                       + ((Model.lambda[i,j]*(1.0-Model.tauey[i,j]         \
                        /Model.tausy[i,j])*dt)/Model.tauey[i,j])           \
                        *El2d.eyy[i,j] 

   El2d.alphax[i,j]  = El2d.alphax[i,j]*LibeExp(-dt/Model.chisx[i,j])     \
                       + ((Model.mu[i,j]*(1.0-Model.chiex[i,j]            \
                        /Model.chisx[i,j])*dt)/Model.chiex[i,j])          \
                        *El2d.exx[i,j] 

   El2d.alphay[i,j]  = El2d.alphay[i,j]*LibeExp(-dt/Model.chisx[i,j])     \
                       + ((Model.mu[i,j]*(1.0-Model.chiex[i,j]            \
                        /Model.chisx[i,j])*dt)/Model.chiex[i,j])          \
                        *El2d.eyy[i,j] 

   El2d.betaxy[i,j]  = El2d.betaxy[i,j]*LibeExp(-dt/Model.chisy[i,j])     \
                       + ((Model.mu[i,j]*(1.0-Model.chiey[i,j]            \
                        /Model.chisy[i,j])*dt)/Model.chiey[i,j])          \
                        *El2d.exy[i,j] 

   El2d.betayx[i,j]  = El2d.betayx[i,j]*LibeExp(-dt/Model.chisx[i,j])     \
                       + ((Model.mu[i,j]*(1.0-Model.chiex[i,j]            \
                        /Model.chisx[i,j])*dt)/Model.chiex[i,j])          \
                        *El2d.eyx[i,j] 
                        
                        
def int El2dSnap(struct el2d El2d,int it) :

  # El2dSnap records snapshots.
  #
  # Arguments: 
  #  El2d:   : El2d object
  #  it      : Current time step       
  # Returns  : Integer (OK or ERR)

  if (El2d.sresamp <= 0):
    return(OK) 
  

  nx = len(El2d.sigmaxx,0) 
  ny = len(El2d.sigmaxx,1) 
  n = nx*ny 


  if(LibeMod(it,El2d.sresamp) == 0):
    if(El2d.snpflags[0] == 1):
      tmp = cast(char [4*n],El2d.p) 
      LibeWrite(El2d.fdp,4*n,tmp) 
    
    if(El2d.snpflags[1] == 1):
      tmp = cast(char [4*n],El2d.vx) 
      LibeWrite(El2d.fdvx,4*n,tmp) 
    
    if(El2d.snpflags[2] == 1):
      tmp = cast(char [4*n],El2d.vy) 
      LibeWrite(El2d.fdvy,4*n,tmp) 
    
    if(El2d.snpflags[3] == 1):
      tmp = cast(char [4*n],El2d.sigmaxx) 
      LibeWrite(El2d.fdsxx,4*n,tmp) 
    
    if(El2d.snpflags[4] == 1):
      tmp = cast(char [4*n],El2d.sigmayy) 
      LibeWrite(El2d.fdsyy,4*n,tmp) 
  
    if(El2d.snpflags[5] == 1):
      tmp = cast(char [4*n],El2d.sigmaxy) 
      LibeWrite(El2d.fdsxy,4*n,tmp) 
  
  return(OK) 

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


  Diff = DiffNew(l)   # Create differentiator object

  oldperc=0.0 
  ns=El2d.ts          #Get current timestep 
  ne = ns+nt          
  for(i=ns; i<ne; i=i+1):

    # Compute vx
    # Use exx, and exy as temp storage
    DiffDxplus(Diff,El2d.sigmaxx,El2d.exx,Model.dx)  
    DiffDyminus(Diff,El2d.sigmaxy,El2d.exy,Model.dx)  
    El2dvx(El2d,Model)                         

    # Compute vy
    # Use eyy, eyx and eyy as temp storage
    DiffDyplus(Diff,El2d.sigmayy,El2d.eyy,Model.dx)  
    DiffDxminus(Diff,El2d.sigmaxy,El2d.eyx,Model.dx)  
    El2dvy(El2d,Model)                         

    # Compute strains
    DiffDxminus(Diff,El2d.vx,El2d.exx,Model.dx)   
    DiffDyminus(Diff,El2d.vy,El2d.eyy,Model.dx)  
    DiffDxplus(Diff,El2d.vy,El2d.eyx,Model.dx)        
    DiffDyplus(Diff,El2d.vx,El2d.exy,Model.dx)     

    # Update stress
    El2dstress(El2d,Model)   
   
    # Add source
    for (k=0; k<Src.Ns;k=k+1):
      sx=Src.Sx[k] 
      sy=Src.Sy[k] 
      El2d.sigmaxx[sx,sy] = El2d.sigmaxx[sx,sy]                      \
        + Model.dt*(Src.Sqxx[i,k]/(Model.dx*Model.dx))     
      El2d.sigmayy[sx,sy] = El2d.sigmayy[sx,sy]                      \
        + Model.dt*(Src.Sqyy[i,k]/(Model.dx*Model.dx))   
      El2d.sigmayy[sx,sy] = El2d.sigmaxy[sx,sy]                      \
        + Model.dt*(Src.Sqxy[i,k]/(Model.dx*Model.dx))   
      El2d.vx[sx,sy] = El2d.vx[sx,sy]                                \
        + Model.dt*(Src.Sfx[i,k]/(Model.dx*Model.dx))   
      El2d.vy[sx,sy] = El2d.vy[sx,sy]                                \
        + Model.dt*(Src.Sfy[i,k]/(Model.dx*Model.dx))   
    

    # Print progress
    perc=1000.0*(cast(float,i)/cast(float,ne-ns-1)) 
    if(perc-oldperc >= 10.0):
      iperc=cast(int,perc)/10 
      if(LibeMod(iperc,10)==0):
        LibePuts(stderr, "percent completed: ") 
        LibePuti(stderr,iperc) 
        LibePuts(stderr,"\n") 
        LibeFlush(stderr) 
      
      oldperc=perc 

    #Record wavefield
    if(Rec != NULL) :
      RecReceiver(Rec,i,El2d.p,dtype=1)  
      RecReceiver(Rec,i,El2d.vx,dtype=2)  
      RecReceiver(Rec,i,El2d.vy,dtype=3)  
      RecReceiver(Rec,i,El2d.sigmaxx,dtype=4)  
      RecReceiver(Rec,i,El2d.sigmayy,dtype=5)  
      RecReceiver(Rec,i,El2d.sigmaxy,dtype=6)  

    # Record Snapshots
    El2dSnap(El2d,i) 

  # Update the time variable
  El2d.ts = El2d.ts+ne 

  return(OK) 


