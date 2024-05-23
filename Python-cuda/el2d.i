// El22D is the elastic modeling object
//=====================================

struct el2d {
  float [*,*] p;     // Stress 
  float [*,*] sigmaxx;     // Stress xx comp.
  float [*,*] sigmayy;     // Stress yy comp.
  float [*,*] sigmaxy;     // Stress xy comp.
  float [*,*] sigmayx;     // Stress xy comp.
  float [*,*] vx;     // x-component of particle velocity
  float [*,*] vy;     // y-component of particle velocity
  float [*,*] exx;    // time derivative of strain x-component
  float [*,*] eyy;    // time derivative of strain y-component
  float [*,*] exy;    // time derivative of strain y-component
  float [*,*] gammaxx;
  float [*,*] gammayy;
  float [*,*] gammaxy;
  float [*,*] thetax;
  float [*,*] thetay;
  int ts;             // Timestep no
}

// El2ddNew creates a new Ac2d object
//
  struct el2d El2dNew(struct model Model){}

// El2d2dSolve computes the pressure at the next timestep
//
   int El2dSolve(struct el2d El2d, struct model Model,struct src Src, 
                 struct rec Rec,int nt, int l){}
