// Model is the model object.
struct model {
int Nx,Ny;
int Nb;
float W0;
float [*,*] Qlx;
float [*,*] Qly;
float [*,*] Qmx;
float [*,*] Qmy;
float [*,*] Qpx;
float [*,*] Qpy;
//float [*,*] Qsx;
//float [*,*] Qsy;
float [*,*] Lambda;
float [*,*] Mu;
float [*,*] Dlambdax;
float [*,*] Dlambday;
float [*,*] Dmux;
float [*,*] Dmuy;
float [*,*] Drhopx;
float [*,*] Drhopy;
float [*,*] Drhosx;
float [*,*] Drhosy;
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
//float [*,*] Nu1x;
//float [*,*] Nu1y;
//float [*,*] Nu2x;
//float [*,*] Nu2y;
float [*] dx;
float [*] dy;
float [*] dx1;
float [*] dy1;
float [*] dx2;
float [*] dy2;
float Dx;
float Dt;

}
// Methods for the model object

struct model ModelNew(float [*,*] vp,  float [*,*] vs, float [*,*] rho, 
                      float [*,*] Qlx, float [*,*] Qly,float [*,*] Qmx, float [*,*] Qmy,
                      float [*,*] Qpx, float [*,*] Qpy,
                      float Dx,        float Dt,       float W0,  int Nb, int Rheol){}

float ModelStability(struct model Model){}

// Constants
const MAXWELL = 1;
const SLS     = 2;
const MAXWELLR = 3;
const CPML = 4;
