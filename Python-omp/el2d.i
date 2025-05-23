# El22D is the elastic modeling object
#=====================================

struct el2d :
  float [*,*] p;     # Stress 
  float [*,*] sigmaxx;     # Stress xx comp.
  float [*,*] sigmayy;     # Stress yy comp.
  float [*,*] sigmaxy;     # Stress xy comp.
  float [*,*] sigmayx;     # Stress xy comp.
  float [*,*] vx;     # x-component of particle velocity
  float [*,*] vy;     # y-component of particle velocity
  float [*,*] exx;    # time derivative of strain x-component
  float [*,*] eyy;    # time derivative of strain y-component
  float [*,*] exy;    # time derivative of strain y-component
  float [*,*] eyx;    # time derivative of strain y-component
  float [*,*] gammaxx;
  float [*,*] gammayy;
  float [*,*] gammaxy;
  float [*,*] gammayx;
  float [*,*] thetaxxx;
  float [*,*] thetayyy;
  float [*,*] thetaxyx;
  float [*,*] thetayxy;
  int ts;             # Timestep no
  int fdsxx;          # Snapshot file descriptor
  int fdsyy;          # Snapshot file descriptor
  int fdvx;          # Snapshot file descriptor
  int fdvy;          # Snapshot file descriptor
  int sresamp;        # Snapshot resampling factor
  int [*] snpflags;     # Flags for types of snapshots
end

# El2ddNew creates a new Ac2d object
#
  struct el2d El2dNew(struct model Model, int sresamp, int [*] snpflags):end

# El2d2dSolve computes the pressure at the next timestep
#
   int El2dSolve(struct el2d El2d, struct model Model,struct src Src, 
                 struct rec Rec,int nt, int l):end
























