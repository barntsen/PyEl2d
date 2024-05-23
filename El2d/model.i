// Model is the model object.
struct model {
int Nx,Ny;
int Nb;
float W0;
float [*,*] Ql;
float [*,*] Qm;
float [*,*] Qp;
float [*,*] Qs;
float [*,*] Lambda;
float [*,*] Mu;
float [*,*] Dlambda;
float [*,*] Dmu;
float [*,*] Drhop;
float [*,*] Drhos;
float [*,*] Rho;
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
float [*,*] Nu1x;
float [*,*] Nu1y;
float [*,*] Nu2x;
float [*,*] Nu2y;
float [*] dx;
float [*] dy;
float Dx;
float Dt;

}
// Methods for the model object

// ModelNew creates a new Model obejct
struct model ModelNew(float [*,*] vp, float [*,*] vs, float [*,*] rho, float [*,*] Ql, float [*,*] Qm,
                      float [*,*] Qp, float [*,*] Qs, float Dx, float Dt, float W0, int Nb, int Rheol){}

// ModelStability computes stability index
float ModelStability(struct model Model){}

// Constants
const MAXWELL = 1;
const SLS     = 2;
const MAXWELLR = 3;
