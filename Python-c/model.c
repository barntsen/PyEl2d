/*  Translated by epsc  version today */
#include <stddef.h>
typedef struct { float r; float i;} complex; 
typedef struct nctempfloat1 { int d[1]; float *a;} nctempfloat1; 
typedef struct nctempint1 { int d[1]; int *a;} nctempint1; 
typedef struct nctempchar1 { int d[1]; char *a;} nctempchar1; 
typedef struct nctempcomplex1 { int d[1]; complex *a;} nctempcomplex1; 
static struct nctempchar1 nctempstringx = {0, NULL};
static struct nctempchar1 *nctempstring = &nctempstringx;
typedef struct nctempfloat2 { int d[2]; float *a;} nctempfloat2; 
typedef struct nctempint2 { int d[2]; int *a;} nctempint2; 
typedef struct nctempchar2 { int d[2]; char *a;} nctempchar2; 
typedef struct nctempcomplex2 { int d[2]; complex *a;} nctempcomplex2; 
typedef struct nctempfloat3 { int d[3]; float *a;} nctempfloat3; 
typedef struct nctempint3 { int d[3]; int *a;} nctempint3; 
typedef struct nctempchar3 { int d[3]; char *a;} nctempchar3; 
typedef struct nctempcomplex3 { int d[3]; complex *a;} nctempcomplex3; 
typedef struct nctempfloat4 { int d[4]; float *a;} nctempfloat4; 
typedef struct nctempint4 { int d[4]; int *a;} nctempint4; 
typedef struct nctempchar4 { int d[4]; char *a;} nctempchar4; 
typedef struct nctempcomplex4 { int d[4]; complex *a;} nctempcomplex4; 
#include <stdlib.h>
#include <string.h>
void *RunMalloc(int n); 
int RunFree(void *n); 
int LibeArrayex (int line,nctempchar1 *name,int ival,int index,int bound);
int LibeClearerr ();
int LibeGeterrno ();
nctempchar1* LibeGeterrstr ();
struct MainArg {nctempchar1 *arg;
};
typedef struct nctempMainArg1 {int d[1]; struct MainArg *a; } nctempMainArg1;
struct nctempMainArg2 {int d[2]; struct MainArg *a; } ;
struct nctempMainArg3 {int d[3]; struct MainArg *a; } ;
struct nctempMainArg4 {int d[4]; struct MainArg *a; } ;
int Main (struct nctempMainArg1 *MainArgs);
int LibeInit ();
int LibeDelete ();
int LibeExit ();
nctempchar1* LibeGetenv (nctempchar1 *name);
int LibeOpen (nctempchar1 *name,nctempchar1 *mode);
int LibeClose (int fp);
int LibeGetc (int fp);
int LibeUngetc (int fp);
int LibeGetw (int fp,nctempchar1 *text);
int LibePs (nctempchar1 *s);
int LibePi (int n);
int LibePf (float r);
int LibePutf (int fp,float r,nctempchar1 *form);
int LibePutc (int fp,int c);
int LibePuts (int fp,nctempchar1 *s);
int LibePuti (int fp,int ival);
int LibeRead (int fp,int n,nctempchar1 *array);
int LibeWrite (int fp,int n,nctempchar1 *array);
int LibeSeek (int fp,int pos,int flag);
int LibeFlush (int fp);
int LibeStrlen (nctempchar1 *s);
int LibeStrcmp (nctempchar1 *s,nctempchar1 *t);
int LibeStrev (nctempchar1 *s);
nctempchar1* LibeStrsave (nctempchar1 *s);
int LibeStrcpy (nctempchar1 *s,nctempchar1 *t);
int LibeStrcat (nctempchar1 *s,nctempchar1 *t);
nctempchar1* LibeStradd (nctempchar1 *t,nctempchar1 *s);
int LibeIsalpha (int c);
int LibeIsdigit (int c);
int LibeIsalnum (int c);
int LibeAtoi (nctempchar1 *s);
int LibeItoa (int n,nctempchar1 *s);
int LibeItoh (int n,nctempchar1 *s);
float LibeAtof (nctempchar1 *s);
int LibeFtoa (float f,nctempchar1 *fmt,nctempchar1 *s);
float LibeMach (int flag);
float LibeFabs (float x);
float LibeFscale2 (float x,int n);
float LibeGetfman2 (float x);
int LibeGetfexp2 (float x);
float LibeFscale (float x,int n);
int LibeGetfman (float f,int maxdig);
float LibeGetffman (float f);
int LibeGetmaxdig (float f);
int LibeGetfexp (float f);
float LibeClock ();
int LibeSetnb (int n);
int LibeSetnt (int n);
int LibeGetnb ();
int LibeGetnt ();
int LibeMod (int n,int r);
float LibeSqrt (float x);
float LibeLn (float x);
float LibeExp (float x);
float LibeSin (float x);
float LibeCos (float x);
float LibeTan (float x);
float LibeArcsin (float x);
float LibeArccos (float x);
float LibeArctan (float x);
float LibePow (float base,float exponent);
int LibeSystem (nctempchar1 *cmd);
struct model {int Nx;
int Ny;
int Nb;
float W0;
nctempfloat2 *Qp;
nctempfloat2 *Qr;
nctempfloat2 *Qs;
nctempfloat2 *Kappa;
nctempfloat2 *Lambda;
nctempfloat2 *Mu;
nctempfloat2 *Dlambda;
nctempfloat2 *Dlambdax;
nctempfloat2 *Dlambday;
nctempfloat2 *Dmu;
nctempfloat2 *Dmux;
nctempfloat2 *Dmuy;
nctempfloat2 *Dkappax;
nctempfloat2 *Dkappay;
nctempfloat2 *Drhox;
nctempfloat2 *Drhoy;
nctempfloat2 *Rho;
nctempfloat2 *Alpha1x;
nctempfloat2 *Alpha1y;
nctempfloat2 *Alpha2x;
nctempfloat2 *Alpha2y;
nctempfloat2 *Eta1x;
nctempfloat2 *Eta1y;
nctempfloat2 *Eta2x;
nctempfloat2 *Eta2y;
nctempfloat1 *dx;
nctempfloat1 *dy;
float Dx;
float Dt;
};
typedef struct nctempmodel1 {int d[1]; struct model *a; } nctempmodel1;
struct nctempmodel2 {int d[2]; struct model *a; } ;
struct nctempmodel3 {int d[3]; struct model *a; } ;
struct nctempmodel4 {int d[4]; struct model *a; } ;
struct model* ModelNew (nctempfloat2 *vp,nctempfloat2 *vs,nctempfloat2 *rho,nctempfloat2 *Qp,nctempfloat2 *Qr,float Dx,float Dt,float W0,int Nb,int Rheol);
float ModelStability (struct model* Model);
struct model* Modelmaxwell (nctempfloat2 *vp,nctempfloat2 *rho,nctempfloat2 *Qp,nctempfloat2 *Qr,float Dx,float Dt,float W0,int Nb);
struct model* Modelsls (nctempfloat2 *vp,nctempfloat2 *vs,nctempfloat2 *rho,nctempfloat2 *Qp,nctempfloat2 *Qr,float Dx,float Dt,float W0,int Nb);
int Modeld (nctempfloat1 *d,float dx,int nb);
float Modeltaus (float Q,float w0);
float Modeltaue (float Q,float w0);
int Modelalphamax (struct model* Model);
int Modelthetamax (struct model* Model);
int Modelalphasls (struct model* Model);
int Modelthetasls (struct model* Model);
struct model* ModelNew (nctempfloat2 *vp,nctempfloat2 *vs,nctempfloat2 *rho,nctempfloat2 *Qp,nctempfloat2 *Qr,float Dx,float Dt,float W0,int Nb,int Rheol)
{
struct model* m;
int nctemp1 = (Rheol ==1);
if(nctemp1)
{
nctempfloat2* nctemp9= vp;
nctempfloat2* nctemp12= rho;
nctempfloat2* nctemp15= Qp;
nctempfloat2* nctemp18= Qr;
float nctemp21= Dx;
float nctemp23= Dt;
float nctemp25= W0;
int nctemp27= Nb;
struct model* nctemp29=Modelmaxwell(nctemp9,nctemp12,nctemp15,nctemp18,nctemp21,nctemp23,nctemp25,nctemp27);
m =nctemp29;
}
else{
int nctemp30 = (Rheol ==2);
if(nctemp30)
{
nctempfloat2* nctemp38= vp;
nctempfloat2* nctemp41= vs;
nctempfloat2* nctemp44= rho;
nctempfloat2* nctemp47= Qp;
nctempfloat2* nctemp50= Qr;
float nctemp53= Dx;
float nctemp55= Dt;
float nctemp57= W0;
int nctemp59= Nb;
struct model* nctemp61=Modelsls(nctemp38,nctemp41,nctemp44,nctemp47,nctemp50,nctemp53,nctemp55,nctemp57,nctemp59);
m =nctemp61;
}
else{
int nctemp63= 4;
struct nctempchar1 *nctemp67;
static struct nctempchar1 nctemp68 = {{ 18}, (char*)"Unknown Q-model\n\0"};
nctemp67=&nctemp68;
nctempchar1* nctemp65= nctemp67;
int nctemp69=LibePuts(nctemp63,nctemp65);
int nctemp71= 4;
int nctemp73=LibeFlush(nctemp71);
int nctemp75=LibeExit();
}
}
return m;
}
int Modelalphasls (struct model* Model)
{
int Nx;
int Ny;
int i;
int j;
float Qmin;
float Qmax;
float argx;
float argy;
float tau0;
float tauemax;
float tauemin;
float tausmax;
float tausmin;
float tauex;
float tausx;
float tauey;
float tausy;
Nx =Model->Nx;
Ny =Model->Ny;
j =0;
int nctemp89 = (j < Ny);
while(nctemp89){
{
i =0;
int nctemp97 = (i < Nx);
while(nctemp97){
{
float nctemp109 = 1.0 / Model->W0;
tau0 =nctemp109;
Qmin =1.1;
float nctemp125 = tau0 / Qmin;
float nctemp138 = Qmin * Qmin;
float nctemp140 = nctemp138 + 1.0;
float nctemp130= nctemp140;
float nctemp141=LibeSqrt(nctemp130);
float nctemp143 = nctemp141 + 1.0;
float nctemp144 = nctemp125 * nctemp143;
tauemin =nctemp144;
float nctemp153 = 1.0 / tauemin;
tauemin =nctemp153;
float nctemp165 = tau0 / Qmin;
float nctemp178 = Qmin * Qmin;
float nctemp180 = nctemp178 + 1.0;
float nctemp170= nctemp180;
float nctemp181=LibeSqrt(nctemp170);
float nctemp183 = nctemp181 - 1.0;
float nctemp184 = nctemp165 * nctemp183;
tausmin =nctemp184;
float nctemp193 = 1.0 / tausmin;
tausmin =nctemp193;
int nctemp198=Model->Nb;
if((0>Model->Nb)||(Model->Nb>=Model->Qp->d[0])){
nctempstring->a="Model->Qp";
nctempstring->d[0]=strlen("Model->Qp")+1;;
LibeArrayex(108,nctempstring,Model->Nb,0,Model->Qp->d[0]);
}
nctemp198=j*Model->Qp->d[0]+nctemp198;
if((0>j)||(j>=Model->Qp->d[1])){
nctempstring->a="Model->Qp";
nctempstring->d[0]=strlen("Model->Qp")+1;;
LibeArrayex(108,nctempstring,j,1,Model->Qp->d[1]);
}
Qmax =Model->Qp->a[nctemp198];
float nctemp212 = tau0 / Qmin;
float nctemp225 = Qmax * Qmax;
float nctemp227 = nctemp225 + 1.0;
float nctemp217= nctemp227;
float nctemp228=LibeSqrt(nctemp217);
float nctemp230 = nctemp228 + 1.0;
float nctemp231 = nctemp212 * nctemp230;
tauemax =nctemp231;
float nctemp240 = 1.0 / tauemax;
tauemax =nctemp240;
float nctemp252 = tau0 / Qmin;
float nctemp265 = Qmax * Qmax;
float nctemp267 = nctemp265 + 1.0;
float nctemp257= nctemp267;
float nctemp268=LibeSqrt(nctemp257);
float nctemp270 = nctemp268 - 1.0;
float nctemp271 = nctemp252 * nctemp270;
tausmax =nctemp271;
float nctemp280 = 1.0 / tausmax;
tausmax =nctemp280;
float nctemp296 = tauemax - tauemin;
int nctemp298=i;
if((0>i)||(i>=Model->dx->d[0])){
nctempstring->a="Model->dx";
nctempstring->d[0]=strlen("Model->dx")+1;;
LibeArrayex(118,nctempstring,i,0,Model->dx->d[0]);
}
float nctemp300 = nctemp296 * Model->dx->a[nctemp298];
float nctemp301 = tauemin + nctemp300;
tauex =nctemp301;
float nctemp317 = tausmax - tausmin;
int nctemp319=i;
if((0>i)||(i>=Model->dx->d[0])){
nctempstring->a="Model->dx";
nctempstring->d[0]=strlen("Model->dx")+1;;
LibeArrayex(119,nctempstring,i,0,Model->dx->d[0]);
}
float nctemp321 = nctemp317 * Model->dx->a[nctemp319];
float nctemp322 = tausmin + nctemp321;
tausx =nctemp322;
int nctemp327=i;
if((0>i)||(i>=Model->Qp->d[0])){
nctempstring->a="Model->Qp";
nctempstring->d[0]=strlen("Model->Qp")+1;;
LibeArrayex(120,nctempstring,i,0,Model->Qp->d[0]);
}
nctemp327=Model->Nb*Model->Qp->d[0]+nctemp327;
if((0>Model->Nb)||(Model->Nb>=Model->Qp->d[1])){
nctempstring->a="Model->Qp";
nctempstring->d[0]=strlen("Model->Qp")+1;;
LibeArrayex(120,nctempstring,Model->Nb,1,Model->Qp->d[1]);
}
Qmax =Model->Qp->a[nctemp327];
float nctemp341 = tau0 / Qmin;
float nctemp354 = Qmax * Qmax;
float nctemp356 = nctemp354 + 1.0;
float nctemp346= nctemp356;
float nctemp357=LibeSqrt(nctemp346);
float nctemp359 = nctemp357 + 1.0;
float nctemp360 = nctemp341 * nctemp359;
tauemax =nctemp360;
float nctemp369 = 1.0 / tauemax;
tauemax =nctemp369;
float nctemp381 = tau0 / Qmin;
float nctemp394 = Qmax * Qmax;
float nctemp396 = nctemp394 + 1.0;
float nctemp386= nctemp396;
float nctemp397=LibeSqrt(nctemp386);
float nctemp399 = nctemp397 - 1.0;
float nctemp400 = nctemp381 * nctemp399;
tausmax =nctemp400;
float nctemp409 = 1.0 / tausmax;
tausmax =nctemp409;
float nctemp425 = tauemax - tauemin;
int nctemp427=j;
if((0>j)||(j>=Model->dy->d[0])){
nctempstring->a="Model->dy";
nctempstring->d[0]=strlen("Model->dy")+1;;
LibeArrayex(127,nctempstring,j,0,Model->dy->d[0]);
}
float nctemp429 = nctemp425 * Model->dy->a[nctemp427];
float nctemp430 = tauemin + nctemp429;
tauey =nctemp430;
float nctemp446 = tausmax - tausmin;
int nctemp448=j;
if((0>j)||(j>=Model->dy->d[0])){
nctempstring->a="Model->dy";
nctempstring->d[0]=strlen("Model->dy")+1;;
LibeArrayex(128,nctempstring,j,0,Model->dy->d[0]);
}
float nctemp450 = nctemp446 * Model->dy->a[nctemp448];
float nctemp451 = tausmin + nctemp450;
tausy =nctemp451;
int nctemp456=i;
if((0>i)||(i>=Model->dx->d[0])){
nctempstring->a="Model->dx";
nctempstring->d[0]=strlen("Model->dx")+1;;
LibeArrayex(133,nctempstring,i,0,Model->dx->d[0]);
}
argx =Model->dx->a[nctemp456];
int nctemp462=j;
if((0>j)||(j>=Model->dy->d[0])){
nctempstring->a="Model->dy";
nctempstring->d[0]=strlen("Model->dy")+1;;
LibeArrayex(134,nctempstring,j,0,Model->dy->d[0]);
}
argy =Model->dy->a[nctemp462];
int nctemp467=i;
if((0>i)||(i>=Model->Alpha1x->d[0])){
nctempstring->a="Model->Alpha1x";
nctempstring->d[0]=strlen("Model->Alpha1x")+1;;
LibeArrayex(137,nctempstring,i,0,Model->Alpha1x->d[0]);
}
nctemp467=j*Model->Alpha1x->d[0]+nctemp467;
if((0>j)||(j>=Model->Alpha1x->d[1])){
nctempstring->a="Model->Alpha1x";
nctempstring->d[0]=strlen("Model->Alpha1x")+1;;
LibeArrayex(137,nctempstring,j,1,Model->Alpha1x->d[1]);
}
float nctemp475= -argx;
float nctemp474= nctemp475;
float nctemp476=LibeExp(nctemp474);
float nctemp481= -Model->Dt;
float nctemp483 = nctemp481 * tausx;
float nctemp478= nctemp483;
float nctemp484=LibeExp(nctemp478);
float nctemp485 = nctemp476 * nctemp484;
Model->Alpha1x->a[nctemp467] =nctemp485;
int nctemp489=i;
if((0>i)||(i>=Model->Alpha1y->d[0])){
nctempstring->a="Model->Alpha1y";
nctempstring->d[0]=strlen("Model->Alpha1y")+1;;
LibeArrayex(138,nctempstring,i,0,Model->Alpha1y->d[0]);
}
nctemp489=j*Model->Alpha1y->d[0]+nctemp489;
if((0>j)||(j>=Model->Alpha1y->d[1])){
nctempstring->a="Model->Alpha1y";
nctempstring->d[0]=strlen("Model->Alpha1y")+1;;
LibeArrayex(138,nctempstring,j,1,Model->Alpha1y->d[1]);
}
float nctemp497= -argy;
float nctemp496= nctemp497;
float nctemp498=LibeExp(nctemp496);
float nctemp503= -Model->Dt;
float nctemp505 = nctemp503 * tausy;
float nctemp500= nctemp505;
float nctemp506=LibeExp(nctemp500);
float nctemp507 = nctemp498 * nctemp506;
Model->Alpha1y->a[nctemp489] =nctemp507;
int nctemp511=i;
if((0>i)||(i>=Model->Alpha2x->d[0])){
nctempstring->a="Model->Alpha2x";
nctempstring->d[0]=strlen("Model->Alpha2x")+1;;
LibeArrayex(139,nctempstring,i,0,Model->Alpha2x->d[0]);
}
nctemp511=j*Model->Alpha2x->d[0]+nctemp511;
if((0>j)||(j>=Model->Alpha2x->d[1])){
nctempstring->a="Model->Alpha2x";
nctempstring->d[0]=strlen("Model->Alpha2x")+1;;
LibeArrayex(139,nctempstring,j,1,Model->Alpha2x->d[1]);
}
float nctemp519 = Model->Dt * tauex;
Model->Alpha2x->a[nctemp511] =nctemp519;
int nctemp523=i;
if((0>i)||(i>=Model->Alpha2y->d[0])){
nctempstring->a="Model->Alpha2y";
nctempstring->d[0]=strlen("Model->Alpha2y")+1;;
LibeArrayex(140,nctempstring,i,0,Model->Alpha2y->d[0]);
}
nctemp523=j*Model->Alpha2y->d[0]+nctemp523;
if((0>j)||(j>=Model->Alpha2y->d[1])){
nctempstring->a="Model->Alpha2y";
nctempstring->d[0]=strlen("Model->Alpha2y")+1;;
LibeArrayex(140,nctempstring,j,1,Model->Alpha2y->d[1]);
}
float nctemp531 = Model->Dt * tauey;
Model->Alpha2y->a[nctemp523] =nctemp531;
int nctemp535=i;
if((0>i)||(i>=Model->Dkappax->d[0])){
nctempstring->a="Model->Dkappax";
nctempstring->d[0]=strlen("Model->Dkappax")+1;;
LibeArrayex(144,nctempstring,i,0,Model->Dkappax->d[0]);
}
nctemp535=j*Model->Dkappax->d[0]+nctemp535;
if((0>j)||(j>=Model->Dkappax->d[1])){
nctempstring->a="Model->Dkappax";
nctempstring->d[0]=strlen("Model->Dkappax")+1;;
LibeArrayex(144,nctempstring,j,1,Model->Dkappax->d[1]);
}
int nctemp542=i;
if((0>i)||(i>=Model->Kappa->d[0])){
nctempstring->a="Model->Kappa";
nctempstring->d[0]=strlen("Model->Kappa")+1;;
LibeArrayex(144,nctempstring,i,0,Model->Kappa->d[0]);
}
nctemp542=j*Model->Kappa->d[0]+nctemp542;
if((0>j)||(j>=Model->Kappa->d[1])){
nctempstring->a="Model->Kappa";
nctempstring->d[0]=strlen("Model->Kappa")+1;;
LibeArrayex(144,nctempstring,j,1,Model->Kappa->d[1]);
}
float nctemp554 = tausx / tauex;
float nctemp555 = 1.0 - nctemp554;
float nctemp556 = Model->Kappa->a[nctemp542] * nctemp555;
Model->Dkappax->a[nctemp535] =nctemp556;
int nctemp560=i;
if((0>i)||(i>=Model->Dkappay->d[0])){
nctempstring->a="Model->Dkappay";
nctempstring->d[0]=strlen("Model->Dkappay")+1;;
LibeArrayex(146,nctempstring,i,0,Model->Dkappay->d[0]);
}
nctemp560=j*Model->Dkappay->d[0]+nctemp560;
if((0>j)||(j>=Model->Dkappay->d[1])){
nctempstring->a="Model->Dkappay";
nctempstring->d[0]=strlen("Model->Dkappay")+1;;
LibeArrayex(146,nctempstring,j,1,Model->Dkappay->d[1]);
}
int nctemp567=i;
if((0>i)||(i>=Model->Kappa->d[0])){
nctempstring->a="Model->Kappa";
nctempstring->d[0]=strlen("Model->Kappa")+1;;
LibeArrayex(146,nctempstring,i,0,Model->Kappa->d[0]);
}
nctemp567=j*Model->Kappa->d[0]+nctemp567;
if((0>j)||(j>=Model->Kappa->d[1])){
nctempstring->a="Model->Kappa";
nctempstring->d[0]=strlen("Model->Kappa")+1;;
LibeArrayex(146,nctempstring,j,1,Model->Kappa->d[1]);
}
float nctemp579 = tausy / tauey;
float nctemp580 = 1.0 - nctemp579;
float nctemp581 = Model->Kappa->a[nctemp567] * nctemp580;
Model->Dkappay->a[nctemp560] =nctemp581;
int nctemp585=i;
if((0>i)||(i>=Model->Drhox->d[0])){
nctempstring->a="Model->Drhox";
nctempstring->d[0]=strlen("Model->Drhox")+1;;
LibeArrayex(148,nctempstring,i,0,Model->Drhox->d[0]);
}
nctemp585=j*Model->Drhox->d[0]+nctemp585;
if((0>j)||(j>=Model->Drhox->d[1])){
nctempstring->a="Model->Drhox";
nctempstring->d[0]=strlen("Model->Drhox")+1;;
LibeArrayex(148,nctempstring,j,1,Model->Drhox->d[1]);
}
int nctemp592=i;
if((0>i)||(i>=Model->Rho->d[0])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(148,nctempstring,i,0,Model->Rho->d[0]);
}
nctemp592=j*Model->Rho->d[0]+nctemp592;
if((0>j)||(j>=Model->Rho->d[1])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(148,nctempstring,j,1,Model->Rho->d[1]);
}
float nctemp604 = tausx / tauex;
float nctemp605 = 1.0 - nctemp604;
float nctemp606 = Model->Rho->a[nctemp592] * nctemp605;
Model->Drhox->a[nctemp585] =nctemp606;
int nctemp610=i;
if((0>i)||(i>=Model->Drhoy->d[0])){
nctempstring->a="Model->Drhoy";
nctempstring->d[0]=strlen("Model->Drhoy")+1;;
LibeArrayex(150,nctempstring,i,0,Model->Drhoy->d[0]);
}
nctemp610=j*Model->Drhoy->d[0]+nctemp610;
if((0>j)||(j>=Model->Drhoy->d[1])){
nctempstring->a="Model->Drhoy";
nctempstring->d[0]=strlen("Model->Drhoy")+1;;
LibeArrayex(150,nctempstring,j,1,Model->Drhoy->d[1]);
}
int nctemp617=i;
if((0>i)||(i>=Model->Rho->d[0])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(150,nctempstring,i,0,Model->Rho->d[0]);
}
nctemp617=j*Model->Rho->d[0]+nctemp617;
if((0>j)||(j>=Model->Rho->d[1])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(150,nctempstring,j,1,Model->Rho->d[1]);
}
float nctemp629 = tausy / tauey;
float nctemp630 = 1.0 - nctemp629;
float nctemp631 = Model->Rho->a[nctemp617] * nctemp630;
Model->Drhoy->a[nctemp610] =nctemp631;
}
int nctemp640 = i + 1;
i =nctemp640;
int nctemp641 = (i < Nx);
nctemp97=nctemp641;
}
}
int nctemp653 = j + 1;
j =nctemp653;
int nctemp654 = (j < Ny);
nctemp89=nctemp654;
}
return 1;
}
int Modelthetasls (struct model* Model)
{
int Nx;
int Ny;
int i;
int j;
float Qmin;
float Qmax;
float argx;
float argy;
float tauemax;
float tauemin;
float tausmax;
float tausmin;
float tauex;
float tausx;
float tauey;
float tausy;
float tau0;
Nx =Model->Nx;
Ny =Model->Ny;
j =0;
int nctemp671 = (j < Ny);
while(nctemp671){
{
i =0;
int nctemp679 = (i < Nx);
while(nctemp679){
{
float nctemp691 = 1.0 / Model->W0;
tau0 =nctemp691;
Qmin =1.1;
float nctemp707 = tau0 / Qmin;
float nctemp720 = Qmin * Qmin;
float nctemp722 = nctemp720 + 1.0;
float nctemp712= nctemp722;
float nctemp723=LibeSqrt(nctemp712);
float nctemp725 = nctemp723 + 1.0;
float nctemp726 = nctemp707 * nctemp725;
tauemin =nctemp726;
float nctemp735 = 1.0 / tauemin;
tauemin =nctemp735;
float nctemp747 = tau0 / Qmin;
float nctemp760 = Qmin * Qmin;
float nctemp762 = nctemp760 + 1.0;
float nctemp752= nctemp762;
float nctemp763=LibeSqrt(nctemp752);
float nctemp765 = nctemp763 - 1.0;
float nctemp766 = nctemp747 * nctemp765;
tausmin =nctemp766;
float nctemp775 = 1.0 / tausmin;
tausmin =nctemp775;
int nctemp780=Model->Nb;
if((0>Model->Nb)||(Model->Nb>=Model->Qp->d[0])){
nctempstring->a="Model->Qp";
nctempstring->d[0]=strlen("Model->Qp")+1;;
LibeArrayex(190,nctempstring,Model->Nb,0,Model->Qp->d[0]);
}
nctemp780=j*Model->Qp->d[0]+nctemp780;
if((0>j)||(j>=Model->Qp->d[1])){
nctempstring->a="Model->Qp";
nctempstring->d[0]=strlen("Model->Qp")+1;;
LibeArrayex(190,nctempstring,j,1,Model->Qp->d[1]);
}
Qmax =Model->Qp->a[nctemp780];
float nctemp794 = tau0 / Qmin;
float nctemp807 = Qmax * Qmax;
float nctemp809 = nctemp807 + 1.0;
float nctemp799= nctemp809;
float nctemp810=LibeSqrt(nctemp799);
float nctemp812 = nctemp810 + 1.0;
float nctemp813 = nctemp794 * nctemp812;
tauemax =nctemp813;
float nctemp822 = 1.0 / tauemax;
tauemax =nctemp822;
float nctemp834 = tau0 / Qmin;
float nctemp847 = Qmax * Qmax;
float nctemp849 = nctemp847 + 1.0;
float nctemp839= nctemp849;
float nctemp850=LibeSqrt(nctemp839);
float nctemp852 = nctemp850 - 1.0;
float nctemp853 = nctemp834 * nctemp852;
tausmax =nctemp853;
float nctemp862 = 1.0 / tausmax;
tausmax =nctemp862;
float nctemp878 = tauemax - tauemin;
int nctemp880=i;
if((0>i)||(i>=Model->dx->d[0])){
nctempstring->a="Model->dx";
nctempstring->d[0]=strlen("Model->dx")+1;;
LibeArrayex(202,nctempstring,i,0,Model->dx->d[0]);
}
float nctemp882 = nctemp878 * Model->dx->a[nctemp880];
float nctemp883 = tauemin + nctemp882;
tauex =nctemp883;
float nctemp899 = tausmax - tausmin;
int nctemp901=i;
if((0>i)||(i>=Model->dx->d[0])){
nctempstring->a="Model->dx";
nctempstring->d[0]=strlen("Model->dx")+1;;
LibeArrayex(203,nctempstring,i,0,Model->dx->d[0]);
}
float nctemp903 = nctemp899 * Model->dx->a[nctemp901];
float nctemp904 = tausmin + nctemp903;
tausx =nctemp904;
int nctemp909=i;
if((0>i)||(i>=Model->Qr->d[0])){
nctempstring->a="Model->Qr";
nctempstring->d[0]=strlen("Model->Qr")+1;;
LibeArrayex(204,nctempstring,i,0,Model->Qr->d[0]);
}
nctemp909=Model->Nb*Model->Qr->d[0]+nctemp909;
if((0>Model->Nb)||(Model->Nb>=Model->Qr->d[1])){
nctempstring->a="Model->Qr";
nctempstring->d[0]=strlen("Model->Qr")+1;;
LibeArrayex(204,nctempstring,Model->Nb,1,Model->Qr->d[1]);
}
Qmax =Model->Qr->a[nctemp909];
float nctemp923 = tau0 / Qmin;
float nctemp936 = Qmax * Qmax;
float nctemp938 = nctemp936 + 1.0;
float nctemp928= nctemp938;
float nctemp939=LibeSqrt(nctemp928);
float nctemp941 = nctemp939 + 1.0;
float nctemp942 = nctemp923 * nctemp941;
tauemax =nctemp942;
float nctemp951 = 1.0 / tauemax;
tauemax =nctemp951;
float nctemp963 = tau0 / Qmin;
float nctemp976 = Qmax * Qmax;
float nctemp978 = nctemp976 + 1.0;
float nctemp968= nctemp978;
float nctemp979=LibeSqrt(nctemp968);
float nctemp981 = nctemp979 - 1.0;
float nctemp982 = nctemp963 * nctemp981;
tausmax =nctemp982;
float nctemp991 = 1.0 / tausmax;
tausmax =nctemp991;
float nctemp1007 = tauemax - tauemin;
int nctemp1009=j;
if((0>j)||(j>=Model->dy->d[0])){
nctempstring->a="Model->dy";
nctempstring->d[0]=strlen("Model->dy")+1;;
LibeArrayex(211,nctempstring,j,0,Model->dy->d[0]);
}
float nctemp1011 = nctemp1007 * Model->dy->a[nctemp1009];
float nctemp1012 = tauemin + nctemp1011;
tauey =nctemp1012;
float nctemp1028 = tausmax - tausmin;
int nctemp1030=j;
if((0>j)||(j>=Model->dy->d[0])){
nctempstring->a="Model->dy";
nctempstring->d[0]=strlen("Model->dy")+1;;
LibeArrayex(212,nctempstring,j,0,Model->dy->d[0]);
}
float nctemp1032 = nctemp1028 * Model->dy->a[nctemp1030];
float nctemp1033 = tausmin + nctemp1032;
tausy =nctemp1033;
int nctemp1038=i;
if((0>i)||(i>=Model->dx->d[0])){
nctempstring->a="Model->dx";
nctempstring->d[0]=strlen("Model->dx")+1;;
LibeArrayex(217,nctempstring,i,0,Model->dx->d[0]);
}
argx =Model->dx->a[nctemp1038];
int nctemp1044=j;
if((0>j)||(j>=Model->dy->d[0])){
nctempstring->a="Model->dy";
nctempstring->d[0]=strlen("Model->dy")+1;;
LibeArrayex(218,nctempstring,j,0,Model->dy->d[0]);
}
argy =Model->dy->a[nctemp1044];
int nctemp1049=i;
if((0>i)||(i>=Model->Eta1x->d[0])){
nctempstring->a="Model->Eta1x";
nctempstring->d[0]=strlen("Model->Eta1x")+1;;
LibeArrayex(222,nctempstring,i,0,Model->Eta1x->d[0]);
}
nctemp1049=j*Model->Eta1x->d[0]+nctemp1049;
if((0>j)||(j>=Model->Eta1x->d[1])){
nctempstring->a="Model->Eta1x";
nctempstring->d[0]=strlen("Model->Eta1x")+1;;
LibeArrayex(222,nctempstring,j,1,Model->Eta1x->d[1]);
}
float nctemp1057= -argx;
float nctemp1056= nctemp1057;
float nctemp1058=LibeExp(nctemp1056);
float nctemp1063= -Model->Dt;
float nctemp1065 = nctemp1063 * tausx;
float nctemp1060= nctemp1065;
float nctemp1066=LibeExp(nctemp1060);
float nctemp1067 = nctemp1058 * nctemp1066;
Model->Eta1x->a[nctemp1049] =nctemp1067;
int nctemp1071=i;
if((0>i)||(i>=Model->Eta1y->d[0])){
nctempstring->a="Model->Eta1y";
nctempstring->d[0]=strlen("Model->Eta1y")+1;;
LibeArrayex(223,nctempstring,i,0,Model->Eta1y->d[0]);
}
nctemp1071=j*Model->Eta1y->d[0]+nctemp1071;
if((0>j)||(j>=Model->Eta1y->d[1])){
nctempstring->a="Model->Eta1y";
nctempstring->d[0]=strlen("Model->Eta1y")+1;;
LibeArrayex(223,nctempstring,j,1,Model->Eta1y->d[1]);
}
float nctemp1079= -argy;
float nctemp1078= nctemp1079;
float nctemp1080=LibeExp(nctemp1078);
float nctemp1085= -Model->Dt;
float nctemp1087 = nctemp1085 * tausy;
float nctemp1082= nctemp1087;
float nctemp1088=LibeExp(nctemp1082);
float nctemp1089 = nctemp1080 * nctemp1088;
Model->Eta1y->a[nctemp1071] =nctemp1089;
int nctemp1093=i;
if((0>i)||(i>=Model->Eta2x->d[0])){
nctempstring->a="Model->Eta2x";
nctempstring->d[0]=strlen("Model->Eta2x")+1;;
LibeArrayex(224,nctempstring,i,0,Model->Eta2x->d[0]);
}
nctemp1093=j*Model->Eta2x->d[0]+nctemp1093;
if((0>j)||(j>=Model->Eta2x->d[1])){
nctempstring->a="Model->Eta2x";
nctempstring->d[0]=strlen("Model->Eta2x")+1;;
LibeArrayex(224,nctempstring,j,1,Model->Eta2x->d[1]);
}
float nctemp1101 = Model->Dt * tauex;
Model->Eta2x->a[nctemp1093] =nctemp1101;
int nctemp1105=i;
if((0>i)||(i>=Model->Eta2y->d[0])){
nctempstring->a="Model->Eta2y";
nctempstring->d[0]=strlen("Model->Eta2y")+1;;
LibeArrayex(225,nctempstring,i,0,Model->Eta2y->d[0]);
}
nctemp1105=j*Model->Eta2y->d[0]+nctemp1105;
if((0>j)||(j>=Model->Eta2y->d[1])){
nctempstring->a="Model->Eta2y";
nctempstring->d[0]=strlen("Model->Eta2y")+1;;
LibeArrayex(225,nctempstring,j,1,Model->Eta2y->d[1]);
}
float nctemp1113 = Model->Dt * tauey;
Model->Eta2y->a[nctemp1105] =nctemp1113;
}
int nctemp1122 = i + 1;
i =nctemp1122;
int nctemp1123 = (i < Nx);
nctemp679=nctemp1123;
}
}
int nctemp1135 = j + 1;
j =nctemp1135;
int nctemp1136 = (j < Ny);
nctemp671=nctemp1136;
}
return 1;
}
struct model* Modelmaxwell (nctempfloat2 *vp,nctempfloat2 *rho,nctempfloat2 *Qp,nctempfloat2 *Qr,float Dx,float Dt,float W0,int Nb)
{
struct model* Model;
int Nx;
int Ny;
int i;
int j;
struct model *nctemp1145=(struct model*)RunMalloc(sizeof(struct model));
Model =nctemp1145;
Model->Dx =Dx;
Model->Dt =Dt;
int nctemp1159=vp->d[0];Model->Nx =nctemp1159;
int nctemp1167=vp->d[1];Model->Ny =nctemp1167;
Model->Nb =Nb;
Model->W0 =W0;
Nx =Model->Nx;
Ny =Model->Ny;
int nctemp1193=Nx;
nctemp1193=nctemp1193*Ny;
nctempfloat2 *nctemp1192;
nctemp1192=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1192->d[0]=Nx;
nctemp1192->d[1]=Ny;
nctemp1192->a=(float *)RunMalloc(sizeof(float)*nctemp1193);
Model->Rho=nctemp1192;
int nctemp1204=Nx;
nctemp1204=nctemp1204*Ny;
nctempfloat2 *nctemp1203;
nctemp1203=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1203->d[0]=Nx;
nctemp1203->d[1]=Ny;
nctemp1203->a=(float *)RunMalloc(sizeof(float)*nctemp1204);
Model->Qp=nctemp1203;
int nctemp1215=Nx;
nctemp1215=nctemp1215*Ny;
nctempfloat2 *nctemp1214;
nctemp1214=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1214->d[0]=Nx;
nctemp1214->d[1]=Ny;
nctemp1214->a=(float *)RunMalloc(sizeof(float)*nctemp1215);
Model->Qr=nctemp1214;
int nctemp1226=Nx;
nctemp1226=nctemp1226*Ny;
nctempfloat2 *nctemp1225;
nctemp1225=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1225->d[0]=Nx;
nctemp1225->d[1]=Ny;
nctemp1225->a=(float *)RunMalloc(sizeof(float)*nctemp1226);
Model->Kappa=nctemp1225;
int nctemp1237=Nx;
nctemp1237=nctemp1237*Ny;
nctempfloat2 *nctemp1236;
nctemp1236=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1236->d[0]=Nx;
nctemp1236->d[1]=Ny;
nctemp1236->a=(float *)RunMalloc(sizeof(float)*nctemp1237);
Model->Lambda=nctemp1236;
int nctemp1248=Nx;
nctemp1248=nctemp1248*Ny;
nctempfloat2 *nctemp1247;
nctemp1247=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1247->d[0]=Nx;
nctemp1247->d[1]=Ny;
nctemp1247->a=(float *)RunMalloc(sizeof(float)*nctemp1248);
Model->Dkappax=nctemp1247;
int nctemp1259=Nx;
nctemp1259=nctemp1259*Ny;
nctempfloat2 *nctemp1258;
nctemp1258=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1258->d[0]=Nx;
nctemp1258->d[1]=Ny;
nctemp1258->a=(float *)RunMalloc(sizeof(float)*nctemp1259);
Model->Dkappay=nctemp1258;
int nctemp1270=Nx;
nctemp1270=nctemp1270*Ny;
nctempfloat2 *nctemp1269;
nctemp1269=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1269->d[0]=Nx;
nctemp1269->d[1]=Ny;
nctemp1269->a=(float *)RunMalloc(sizeof(float)*nctemp1270);
Model->Drhox=nctemp1269;
int nctemp1281=Nx;
nctemp1281=nctemp1281*Ny;
nctempfloat2 *nctemp1280;
nctemp1280=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1280->d[0]=Nx;
nctemp1280->d[1]=Ny;
nctemp1280->a=(float *)RunMalloc(sizeof(float)*nctemp1281);
Model->Drhoy=nctemp1280;
int nctemp1292=Nx;
nctemp1292=nctemp1292*Ny;
nctempfloat2 *nctemp1291;
nctemp1291=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1291->d[0]=Nx;
nctemp1291->d[1]=Ny;
nctemp1291->a=(float *)RunMalloc(sizeof(float)*nctemp1292);
Model->Alpha1x=nctemp1291;
int nctemp1303=Nx;
nctemp1303=nctemp1303*Ny;
nctempfloat2 *nctemp1302;
nctemp1302=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1302->d[0]=Nx;
nctemp1302->d[1]=Ny;
nctemp1302->a=(float *)RunMalloc(sizeof(float)*nctemp1303);
Model->Alpha1y=nctemp1302;
int nctemp1314=Nx;
nctemp1314=nctemp1314*Ny;
nctempfloat2 *nctemp1313;
nctemp1313=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1313->d[0]=Nx;
nctemp1313->d[1]=Ny;
nctemp1313->a=(float *)RunMalloc(sizeof(float)*nctemp1314);
Model->Alpha2x=nctemp1313;
int nctemp1325=Nx;
nctemp1325=nctemp1325*Ny;
nctempfloat2 *nctemp1324;
nctemp1324=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1324->d[0]=Nx;
nctemp1324->d[1]=Ny;
nctemp1324->a=(float *)RunMalloc(sizeof(float)*nctemp1325);
Model->Alpha2y=nctemp1324;
int nctemp1336=Nx;
nctemp1336=nctemp1336*Ny;
nctempfloat2 *nctemp1335;
nctemp1335=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1335->d[0]=Nx;
nctemp1335->d[1]=Ny;
nctemp1335->a=(float *)RunMalloc(sizeof(float)*nctemp1336);
Model->Eta1x=nctemp1335;
int nctemp1347=Nx;
nctemp1347=nctemp1347*Ny;
nctempfloat2 *nctemp1346;
nctemp1346=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1346->d[0]=Nx;
nctemp1346->d[1]=Ny;
nctemp1346->a=(float *)RunMalloc(sizeof(float)*nctemp1347);
Model->Eta1y=nctemp1346;
int nctemp1358=Nx;
nctemp1358=nctemp1358*Ny;
nctempfloat2 *nctemp1357;
nctemp1357=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1357->d[0]=Nx;
nctemp1357->d[1]=Ny;
nctemp1357->a=(float *)RunMalloc(sizeof(float)*nctemp1358);
Model->Eta2x=nctemp1357;
int nctemp1369=Nx;
nctemp1369=nctemp1369*Ny;
nctempfloat2 *nctemp1368;
nctemp1368=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1368->d[0]=Nx;
nctemp1368->d[1]=Ny;
nctemp1368->a=(float *)RunMalloc(sizeof(float)*nctemp1369);
Model->Eta2y=nctemp1368;
int nctemp1380=Nx;
nctempfloat1 *nctemp1379;
nctemp1379=(nctempfloat1*)RunMalloc(sizeof(nctempfloat1));
nctemp1379->d[0]=Nx;
nctemp1379->a=(float *)RunMalloc(sizeof(float)*nctemp1380);
Model->dx=nctemp1379;
int nctemp1389=Ny;
nctempfloat1 *nctemp1388;
nctemp1388=(nctempfloat1*)RunMalloc(sizeof(nctempfloat1));
nctemp1388->d[0]=Ny;
nctemp1388->a=(float *)RunMalloc(sizeof(float)*nctemp1389);
Model->dy=nctemp1388;
j =0;
int nctemp1396 = (j < Ny);
while(nctemp1396){
{
i =0;
int nctemp1404 = (i < Nx);
while(nctemp1404){
{
int nctemp1411=i;
if((0>i)||(i>=Model->Kappa->d[0])){
nctempstring->a="Model->Kappa";
nctempstring->d[0]=strlen("Model->Kappa")+1;;
LibeArrayex(388,nctempstring,i,0,Model->Kappa->d[0]);
}
nctemp1411=j*Model->Kappa->d[0]+nctemp1411;
if((0>j)||(j>=Model->Kappa->d[1])){
nctempstring->a="Model->Kappa";
nctempstring->d[0]=strlen("Model->Kappa")+1;;
LibeArrayex(388,nctempstring,j,1,Model->Kappa->d[1]);
}
int nctemp1421=i;
if((0>i)||(i>=rho->d[0])){
nctempstring->a="rho";
nctempstring->d[0]=strlen("rho")+1;;
LibeArrayex(388,nctempstring,i,0,rho->d[0]);
}
nctemp1421=j*rho->d[0]+nctemp1421;
if((0>j)||(j>=rho->d[1])){
nctempstring->a="rho";
nctempstring->d[0]=strlen("rho")+1;;
LibeArrayex(388,nctempstring,j,1,rho->d[1]);
}
int nctemp1425=i;
if((0>i)||(i>=vp->d[0])){
nctempstring->a="vp";
nctempstring->d[0]=strlen("vp")+1;;
LibeArrayex(388,nctempstring,i,0,vp->d[0]);
}
nctemp1425=j*vp->d[0]+nctemp1425;
if((0>j)||(j>=vp->d[1])){
nctempstring->a="vp";
nctempstring->d[0]=strlen("vp")+1;;
LibeArrayex(388,nctempstring,j,1,vp->d[1]);
}
float nctemp1428 = rho->a[nctemp1421] * vp->a[nctemp1425];
int nctemp1430=i;
if((0>i)||(i>=vp->d[0])){
nctempstring->a="vp";
nctempstring->d[0]=strlen("vp")+1;;
LibeArrayex(388,nctempstring,i,0,vp->d[0]);
}
nctemp1430=j*vp->d[0]+nctemp1430;
if((0>j)||(j>=vp->d[1])){
nctempstring->a="vp";
nctempstring->d[0]=strlen("vp")+1;;
LibeArrayex(388,nctempstring,j,1,vp->d[1]);
}
float nctemp1433 = nctemp1428 * vp->a[nctemp1430];
Model->Kappa->a[nctemp1411] =nctemp1433;
int nctemp1437=i;
if((0>i)||(i>=Model->Rho->d[0])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(389,nctempstring,i,0,Model->Rho->d[0]);
}
nctemp1437=j*Model->Rho->d[0]+nctemp1437;
if((0>j)||(j>=Model->Rho->d[1])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(389,nctempstring,j,1,Model->Rho->d[1]);
}
int nctemp1445=i;
if((0>i)||(i>=rho->d[0])){
nctempstring->a="rho";
nctempstring->d[0]=strlen("rho")+1;;
LibeArrayex(389,nctempstring,i,0,rho->d[0]);
}
nctemp1445=j*rho->d[0]+nctemp1445;
if((0>j)||(j>=rho->d[1])){
nctempstring->a="rho";
nctempstring->d[0]=strlen("rho")+1;;
LibeArrayex(389,nctempstring,j,1,rho->d[1]);
}
float nctemp1448 = 1.0 / rho->a[nctemp1445];
Model->Rho->a[nctemp1437] =nctemp1448;
int nctemp1452=i;
if((0>i)||(i>=Model->Qp->d[0])){
nctempstring->a="Model->Qp";
nctempstring->d[0]=strlen("Model->Qp")+1;;
LibeArrayex(390,nctempstring,i,0,Model->Qp->d[0]);
}
nctemp1452=j*Model->Qp->d[0]+nctemp1452;
if((0>j)||(j>=Model->Qp->d[1])){
nctempstring->a="Model->Qp";
nctempstring->d[0]=strlen("Model->Qp")+1;;
LibeArrayex(390,nctempstring,j,1,Model->Qp->d[1]);
}
int nctemp1456=i;
if((0>i)||(i>=Qp->d[0])){
nctempstring->a="Qp";
nctempstring->d[0]=strlen("Qp")+1;;
LibeArrayex(390,nctempstring,i,0,Qp->d[0]);
}
nctemp1456=j*Qp->d[0]+nctemp1456;
if((0>j)||(j>=Qp->d[1])){
nctempstring->a="Qp";
nctempstring->d[0]=strlen("Qp")+1;;
LibeArrayex(390,nctempstring,j,1,Qp->d[1]);
}
Model->Qp->a[nctemp1452] =Qp->a[nctemp1456];
int nctemp1462=i;
if((0>i)||(i>=Model->Qr->d[0])){
nctempstring->a="Model->Qr";
nctempstring->d[0]=strlen("Model->Qr")+1;;
LibeArrayex(391,nctempstring,i,0,Model->Qr->d[0]);
}
nctemp1462=j*Model->Qr->d[0]+nctemp1462;
if((0>j)||(j>=Model->Qr->d[1])){
nctempstring->a="Model->Qr";
nctempstring->d[0]=strlen("Model->Qr")+1;;
LibeArrayex(391,nctempstring,j,1,Model->Qr->d[1]);
}
int nctemp1466=i;
if((0>i)||(i>=Qr->d[0])){
nctempstring->a="Qr";
nctempstring->d[0]=strlen("Qr")+1;;
LibeArrayex(391,nctempstring,i,0,Qr->d[0]);
}
nctemp1466=j*Qr->d[0]+nctemp1466;
if((0>j)||(j>=Qr->d[1])){
nctempstring->a="Qr";
nctempstring->d[0]=strlen("Qr")+1;;
LibeArrayex(391,nctempstring,j,1,Qr->d[1]);
}
Model->Qr->a[nctemp1462] =Qr->a[nctemp1466];
}
int nctemp1477 = i + 1;
i =nctemp1477;
int nctemp1478 = (i < Nx);
nctemp1404=nctemp1478;
}
}
int nctemp1490 = j + 1;
j =nctemp1490;
int nctemp1491 = (j < Ny);
nctemp1396=nctemp1491;
}
nctempfloat1* nctemp1496= Model->dx;
float nctemp1499= Model->Dx;
int nctemp1501= Model->Nb;
int nctemp1503=Modeld(nctemp1496,nctemp1499,nctemp1501);
nctempfloat1* nctemp1505= Model->dy;
float nctemp1508= Model->Dx;
int nctemp1510= Model->Nb;
int nctemp1512=Modeld(nctemp1505,nctemp1508,nctemp1510);
struct model* nctemp1514= Model;
int nctemp1516=Modelalphamax(nctemp1514);
struct model* nctemp1518= Model;
int nctemp1520=Modelthetamax(nctemp1518);
j =0;
int nctemp1525 = (j < Ny);
while(nctemp1525){
{
i =0;
int nctemp1533 = (i < Nx);
while(nctemp1533){
{
int nctemp1540=i;
if((0>i)||(i>=Model->Dkappax->d[0])){
nctempstring->a="Model->Dkappax";
nctempstring->d[0]=strlen("Model->Dkappax")+1;;
LibeArrayex(409,nctempstring,i,0,Model->Dkappax->d[0]);
}
nctemp1540=j*Model->Dkappax->d[0]+nctemp1540;
if((0>j)||(j>=Model->Dkappax->d[1])){
nctempstring->a="Model->Dkappax";
nctempstring->d[0]=strlen("Model->Dkappax")+1;;
LibeArrayex(409,nctempstring,j,1,Model->Dkappax->d[1]);
}
int nctemp1544=i;
if((0>i)||(i>=Model->Kappa->d[0])){
nctempstring->a="Model->Kappa";
nctempstring->d[0]=strlen("Model->Kappa")+1;;
LibeArrayex(409,nctempstring,i,0,Model->Kappa->d[0]);
}
nctemp1544=j*Model->Kappa->d[0]+nctemp1544;
if((0>j)||(j>=Model->Kappa->d[1])){
nctempstring->a="Model->Kappa";
nctempstring->d[0]=strlen("Model->Kappa")+1;;
LibeArrayex(409,nctempstring,j,1,Model->Kappa->d[1]);
}
Model->Dkappax->a[nctemp1540] =Model->Kappa->a[nctemp1544];
int nctemp1550=i;
if((0>i)||(i>=Model->Dkappay->d[0])){
nctempstring->a="Model->Dkappay";
nctempstring->d[0]=strlen("Model->Dkappay")+1;;
LibeArrayex(410,nctempstring,i,0,Model->Dkappay->d[0]);
}
nctemp1550=j*Model->Dkappay->d[0]+nctemp1550;
if((0>j)||(j>=Model->Dkappay->d[1])){
nctempstring->a="Model->Dkappay";
nctempstring->d[0]=strlen("Model->Dkappay")+1;;
LibeArrayex(410,nctempstring,j,1,Model->Dkappay->d[1]);
}
int nctemp1554=i;
if((0>i)||(i>=Model->Kappa->d[0])){
nctempstring->a="Model->Kappa";
nctempstring->d[0]=strlen("Model->Kappa")+1;;
LibeArrayex(410,nctempstring,i,0,Model->Kappa->d[0]);
}
nctemp1554=j*Model->Kappa->d[0]+nctemp1554;
if((0>j)||(j>=Model->Kappa->d[1])){
nctempstring->a="Model->Kappa";
nctempstring->d[0]=strlen("Model->Kappa")+1;;
LibeArrayex(410,nctempstring,j,1,Model->Kappa->d[1]);
}
Model->Dkappay->a[nctemp1550] =Model->Kappa->a[nctemp1554];
int nctemp1560=i;
if((0>i)||(i>=Model->Drhox->d[0])){
nctempstring->a="Model->Drhox";
nctempstring->d[0]=strlen("Model->Drhox")+1;;
LibeArrayex(411,nctempstring,i,0,Model->Drhox->d[0]);
}
nctemp1560=j*Model->Drhox->d[0]+nctemp1560;
if((0>j)||(j>=Model->Drhox->d[1])){
nctempstring->a="Model->Drhox";
nctempstring->d[0]=strlen("Model->Drhox")+1;;
LibeArrayex(411,nctempstring,j,1,Model->Drhox->d[1]);
}
int nctemp1564=i;
if((0>i)||(i>=Model->Rho->d[0])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(411,nctempstring,i,0,Model->Rho->d[0]);
}
nctemp1564=j*Model->Rho->d[0]+nctemp1564;
if((0>j)||(j>=Model->Rho->d[1])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(411,nctempstring,j,1,Model->Rho->d[1]);
}
Model->Drhox->a[nctemp1560] =Model->Rho->a[nctemp1564];
int nctemp1570=i;
if((0>i)||(i>=Model->Drhoy->d[0])){
nctempstring->a="Model->Drhoy";
nctempstring->d[0]=strlen("Model->Drhoy")+1;;
LibeArrayex(412,nctempstring,i,0,Model->Drhoy->d[0]);
}
nctemp1570=j*Model->Drhoy->d[0]+nctemp1570;
if((0>j)||(j>=Model->Drhoy->d[1])){
nctempstring->a="Model->Drhoy";
nctempstring->d[0]=strlen("Model->Drhoy")+1;;
LibeArrayex(412,nctempstring,j,1,Model->Drhoy->d[1]);
}
int nctemp1574=i;
if((0>i)||(i>=Model->Rho->d[0])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(412,nctempstring,i,0,Model->Rho->d[0]);
}
nctemp1574=j*Model->Rho->d[0]+nctemp1574;
if((0>j)||(j>=Model->Rho->d[1])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(412,nctempstring,j,1,Model->Rho->d[1]);
}
Model->Drhoy->a[nctemp1570] =Model->Rho->a[nctemp1574];
}
int nctemp1585 = i + 1;
i =nctemp1585;
int nctemp1586 = (i < Nx);
nctemp1533=nctemp1586;
}
}
int nctemp1598 = j + 1;
j =nctemp1598;
int nctemp1599 = (j < Ny);
nctemp1525=nctemp1599;
}
return Model;
}
int Modelalphamax (struct model* Model)
{
int Nx;
int Ny;
int i;
int j;
float Qmin;
float Qmax;
float tau0min;
float tau0max;
float tau0x;
float tau0y;
float argx;
float argy;
Nx =Model->Nx;
Ny =Model->Ny;
j =0;
int nctemp1616 = (j < Ny);
while(nctemp1616){
{
i =0;
int nctemp1624 = (i < Nx);
while(nctemp1624){
{
Qmin =1.1;
float nctemp1640 = Qmin / Model->W0;
tau0min =nctemp1640;
float nctemp1649 = 1.0 / tau0min;
tau0min =nctemp1649;
int nctemp1654=Model->Nb;
if((0>Model->Nb)||(Model->Nb>=Model->Qp->d[0])){
nctempstring->a="Model->Qp";
nctempstring->d[0]=strlen("Model->Qp")+1;;
LibeArrayex(450,nctempstring,Model->Nb,0,Model->Qp->d[0]);
}
nctemp1654=j*Model->Qp->d[0]+nctemp1654;
if((0>j)||(j>=Model->Qp->d[1])){
nctempstring->a="Model->Qp";
nctempstring->d[0]=strlen("Model->Qp")+1;;
LibeArrayex(450,nctempstring,j,1,Model->Qp->d[1]);
}
Qmax =Model->Qp->a[nctemp1654];
float nctemp1665 = Qmax / Model->W0;
tau0max =nctemp1665;
float nctemp1674 = 1.0 / tau0max;
tau0max =nctemp1674;
float nctemp1690 = tau0max - tau0min;
int nctemp1692=i;
if((0>i)||(i>=Model->dx->d[0])){
nctempstring->a="Model->dx";
nctempstring->d[0]=strlen("Model->dx")+1;;
LibeArrayex(455,nctempstring,i,0,Model->dx->d[0]);
}
float nctemp1694 = nctemp1690 * Model->dx->a[nctemp1692];
float nctemp1695 = tau0min + nctemp1694;
tau0x =nctemp1695;
int nctemp1700=i;
if((0>i)||(i>=Model->Qp->d[0])){
nctempstring->a="Model->Qp";
nctempstring->d[0]=strlen("Model->Qp")+1;;
LibeArrayex(457,nctempstring,i,0,Model->Qp->d[0]);
}
nctemp1700=Model->Nb*Model->Qp->d[0]+nctemp1700;
if((0>Model->Nb)||(Model->Nb>=Model->Qp->d[1])){
nctempstring->a="Model->Qp";
nctempstring->d[0]=strlen("Model->Qp")+1;;
LibeArrayex(457,nctempstring,Model->Nb,1,Model->Qp->d[1]);
}
Qmax =Model->Qp->a[nctemp1700];
float nctemp1711 = Qmax / Model->W0;
tau0max =nctemp1711;
float nctemp1720 = 1.0 / tau0max;
tau0max =nctemp1720;
float nctemp1736 = tau0max - tau0min;
int nctemp1738=j;
if((0>j)||(j>=Model->dy->d[0])){
nctempstring->a="Model->dy";
nctempstring->d[0]=strlen("Model->dy")+1;;
LibeArrayex(462,nctempstring,j,0,Model->dy->d[0]);
}
float nctemp1740 = nctemp1736 * Model->dy->a[nctemp1738];
float nctemp1741 = tau0min + nctemp1740;
tau0y =nctemp1741;
int nctemp1746=i;
if((0>i)||(i>=Model->dx->d[0])){
nctempstring->a="Model->dx";
nctempstring->d[0]=strlen("Model->dx")+1;;
LibeArrayex(467,nctempstring,i,0,Model->dx->d[0]);
}
argx =Model->dx->a[nctemp1746];
int nctemp1752=j;
if((0>j)||(j>=Model->dy->d[0])){
nctempstring->a="Model->dy";
nctempstring->d[0]=strlen("Model->dy")+1;;
LibeArrayex(468,nctempstring,j,0,Model->dy->d[0]);
}
argy =Model->dy->a[nctemp1752];
int nctemp1757=i;
if((0>i)||(i>=Model->Alpha1x->d[0])){
nctempstring->a="Model->Alpha1x";
nctempstring->d[0]=strlen("Model->Alpha1x")+1;;
LibeArrayex(471,nctempstring,i,0,Model->Alpha1x->d[0]);
}
nctemp1757=j*Model->Alpha1x->d[0]+nctemp1757;
if((0>j)||(j>=Model->Alpha1x->d[1])){
nctempstring->a="Model->Alpha1x";
nctempstring->d[0]=strlen("Model->Alpha1x")+1;;
LibeArrayex(471,nctempstring,j,1,Model->Alpha1x->d[1]);
}
float nctemp1765= -argx;
float nctemp1764= nctemp1765;
float nctemp1766=LibeExp(nctemp1764);
float nctemp1771= -Model->Dt;
float nctemp1773 = nctemp1771 * tau0x;
float nctemp1768= nctemp1773;
float nctemp1774=LibeExp(nctemp1768);
float nctemp1775 = nctemp1766 * nctemp1774;
Model->Alpha1x->a[nctemp1757] =nctemp1775;
int nctemp1779=i;
if((0>i)||(i>=Model->Alpha1y->d[0])){
nctempstring->a="Model->Alpha1y";
nctempstring->d[0]=strlen("Model->Alpha1y")+1;;
LibeArrayex(472,nctempstring,i,0,Model->Alpha1y->d[0]);
}
nctemp1779=j*Model->Alpha1y->d[0]+nctemp1779;
if((0>j)||(j>=Model->Alpha1y->d[1])){
nctempstring->a="Model->Alpha1y";
nctempstring->d[0]=strlen("Model->Alpha1y")+1;;
LibeArrayex(472,nctempstring,j,1,Model->Alpha1y->d[1]);
}
float nctemp1787= -argy;
float nctemp1786= nctemp1787;
float nctemp1788=LibeExp(nctemp1786);
float nctemp1793= -Model->Dt;
float nctemp1795 = nctemp1793 * tau0y;
float nctemp1790= nctemp1795;
float nctemp1796=LibeExp(nctemp1790);
float nctemp1797 = nctemp1788 * nctemp1796;
Model->Alpha1y->a[nctemp1779] =nctemp1797;
int nctemp1801=i;
if((0>i)||(i>=Model->Alpha2x->d[0])){
nctempstring->a="Model->Alpha2x";
nctempstring->d[0]=strlen("Model->Alpha2x")+1;;
LibeArrayex(473,nctempstring,i,0,Model->Alpha2x->d[0]);
}
nctemp1801=j*Model->Alpha2x->d[0]+nctemp1801;
if((0>j)||(j>=Model->Alpha2x->d[1])){
nctempstring->a="Model->Alpha2x";
nctempstring->d[0]=strlen("Model->Alpha2x")+1;;
LibeArrayex(473,nctempstring,j,1,Model->Alpha2x->d[1]);
}
float nctemp1807= -Model->Dt;
float nctemp1809 = nctemp1807 * tau0x;
Model->Alpha2x->a[nctemp1801] =nctemp1809;
int nctemp1813=i;
if((0>i)||(i>=Model->Alpha2y->d[0])){
nctempstring->a="Model->Alpha2y";
nctempstring->d[0]=strlen("Model->Alpha2y")+1;;
LibeArrayex(474,nctempstring,i,0,Model->Alpha2y->d[0]);
}
nctemp1813=j*Model->Alpha2y->d[0]+nctemp1813;
if((0>j)||(j>=Model->Alpha2y->d[1])){
nctempstring->a="Model->Alpha2y";
nctempstring->d[0]=strlen("Model->Alpha2y")+1;;
LibeArrayex(474,nctempstring,j,1,Model->Alpha2y->d[1]);
}
float nctemp1819= -Model->Dt;
float nctemp1821 = nctemp1819 * tau0y;
Model->Alpha2y->a[nctemp1813] =nctemp1821;
}
int nctemp1830 = i + 1;
i =nctemp1830;
int nctemp1831 = (i < Nx);
nctemp1624=nctemp1831;
}
}
int nctemp1843 = j + 1;
j =nctemp1843;
int nctemp1844 = (j < Ny);
nctemp1616=nctemp1844;
}
return 1;
}
int Modelthetamax (struct model* Model)
{
int Nx;
int Ny;
int i;
int j;
float Qmin;
float Qmax;
float tau0min;
float tau0max;
float tau0x;
float tau0y;
float argx;
float argy;
Nx =Model->Nx;
Ny =Model->Ny;
j =0;
int nctemp1861 = (j < Ny);
while(nctemp1861){
{
i =0;
int nctemp1869 = (i < Nx);
while(nctemp1869){
{
Qmin =1.1;
float nctemp1885 = Qmin / Model->W0;
tau0min =nctemp1885;
float nctemp1894 = 1.0 / tau0min;
tau0min =nctemp1894;
int nctemp1899=Model->Nb;
if((0>Model->Nb)||(Model->Nb>=Model->Qr->d[0])){
nctempstring->a="Model->Qr";
nctempstring->d[0]=strlen("Model->Qr")+1;;
LibeArrayex(513,nctempstring,Model->Nb,0,Model->Qr->d[0]);
}
nctemp1899=j*Model->Qr->d[0]+nctemp1899;
if((0>j)||(j>=Model->Qr->d[1])){
nctempstring->a="Model->Qr";
nctempstring->d[0]=strlen("Model->Qr")+1;;
LibeArrayex(513,nctempstring,j,1,Model->Qr->d[1]);
}
Qmax =Model->Qr->a[nctemp1899];
float nctemp1910 = Qmax / Model->W0;
tau0max =nctemp1910;
float nctemp1919 = 1.0 / tau0max;
tau0max =nctemp1919;
float nctemp1935 = tau0max - tau0min;
int nctemp1937=i;
if((0>i)||(i>=Model->dx->d[0])){
nctempstring->a="Model->dx";
nctempstring->d[0]=strlen("Model->dx")+1;;
LibeArrayex(518,nctempstring,i,0,Model->dx->d[0]);
}
float nctemp1939 = nctemp1935 * Model->dx->a[nctemp1937];
float nctemp1940 = tau0min + nctemp1939;
tau0x =nctemp1940;
int nctemp1945=i;
if((0>i)||(i>=Model->Qr->d[0])){
nctempstring->a="Model->Qr";
nctempstring->d[0]=strlen("Model->Qr")+1;;
LibeArrayex(520,nctempstring,i,0,Model->Qr->d[0]);
}
nctemp1945=Model->Nb*Model->Qr->d[0]+nctemp1945;
if((0>Model->Nb)||(Model->Nb>=Model->Qr->d[1])){
nctempstring->a="Model->Qr";
nctempstring->d[0]=strlen("Model->Qr")+1;;
LibeArrayex(520,nctempstring,Model->Nb,1,Model->Qr->d[1]);
}
Qmax =Model->Qr->a[nctemp1945];
float nctemp1956 = Qmax / Model->W0;
tau0max =nctemp1956;
float nctemp1965 = 1.0 / tau0max;
tau0max =nctemp1965;
float nctemp1981 = tau0max - tau0min;
int nctemp1983=j;
if((0>j)||(j>=Model->dy->d[0])){
nctempstring->a="Model->dy";
nctempstring->d[0]=strlen("Model->dy")+1;;
LibeArrayex(525,nctempstring,j,0,Model->dy->d[0]);
}
float nctemp1985 = nctemp1981 * Model->dy->a[nctemp1983];
float nctemp1986 = tau0min + nctemp1985;
tau0y =nctemp1986;
int nctemp1991=i;
if((0>i)||(i>=Model->dx->d[0])){
nctempstring->a="Model->dx";
nctempstring->d[0]=strlen("Model->dx")+1;;
LibeArrayex(530,nctempstring,i,0,Model->dx->d[0]);
}
argx =Model->dx->a[nctemp1991];
int nctemp1997=j;
if((0>j)||(j>=Model->dy->d[0])){
nctempstring->a="Model->dy";
nctempstring->d[0]=strlen("Model->dy")+1;;
LibeArrayex(531,nctempstring,j,0,Model->dy->d[0]);
}
argy =Model->dy->a[nctemp1997];
int nctemp2002=i;
if((0>i)||(i>=Model->Eta1x->d[0])){
nctempstring->a="Model->Eta1x";
nctempstring->d[0]=strlen("Model->Eta1x")+1;;
LibeArrayex(534,nctempstring,i,0,Model->Eta1x->d[0]);
}
nctemp2002=j*Model->Eta1x->d[0]+nctemp2002;
if((0>j)||(j>=Model->Eta1x->d[1])){
nctempstring->a="Model->Eta1x";
nctempstring->d[0]=strlen("Model->Eta1x")+1;;
LibeArrayex(534,nctempstring,j,1,Model->Eta1x->d[1]);
}
float nctemp2010= -argx;
float nctemp2009= nctemp2010;
float nctemp2011=LibeExp(nctemp2009);
float nctemp2016= -Model->Dt;
float nctemp2018 = nctemp2016 * tau0x;
float nctemp2013= nctemp2018;
float nctemp2019=LibeExp(nctemp2013);
float nctemp2020 = nctemp2011 * nctemp2019;
Model->Eta1x->a[nctemp2002] =nctemp2020;
int nctemp2024=i;
if((0>i)||(i>=Model->Eta1y->d[0])){
nctempstring->a="Model->Eta1y";
nctempstring->d[0]=strlen("Model->Eta1y")+1;;
LibeArrayex(535,nctempstring,i,0,Model->Eta1y->d[0]);
}
nctemp2024=j*Model->Eta1y->d[0]+nctemp2024;
if((0>j)||(j>=Model->Eta1y->d[1])){
nctempstring->a="Model->Eta1y";
nctempstring->d[0]=strlen("Model->Eta1y")+1;;
LibeArrayex(535,nctempstring,j,1,Model->Eta1y->d[1]);
}
float nctemp2032= -argy;
float nctemp2031= nctemp2032;
float nctemp2033=LibeExp(nctemp2031);
float nctemp2038= -Model->Dt;
float nctemp2040 = nctemp2038 * tau0y;
float nctemp2035= nctemp2040;
float nctemp2041=LibeExp(nctemp2035);
float nctemp2042 = nctemp2033 * nctemp2041;
Model->Eta1y->a[nctemp2024] =nctemp2042;
int nctemp2046=i;
if((0>i)||(i>=Model->Eta2x->d[0])){
nctempstring->a="Model->Eta2x";
nctempstring->d[0]=strlen("Model->Eta2x")+1;;
LibeArrayex(536,nctempstring,i,0,Model->Eta2x->d[0]);
}
nctemp2046=j*Model->Eta2x->d[0]+nctemp2046;
if((0>j)||(j>=Model->Eta2x->d[1])){
nctempstring->a="Model->Eta2x";
nctempstring->d[0]=strlen("Model->Eta2x")+1;;
LibeArrayex(536,nctempstring,j,1,Model->Eta2x->d[1]);
}
float nctemp2052= -Model->Dt;
float nctemp2054 = nctemp2052 * tau0x;
Model->Eta2x->a[nctemp2046] =nctemp2054;
int nctemp2058=i;
if((0>i)||(i>=Model->Eta2y->d[0])){
nctempstring->a="Model->Eta2y";
nctempstring->d[0]=strlen("Model->Eta2y")+1;;
LibeArrayex(537,nctempstring,i,0,Model->Eta2y->d[0]);
}
nctemp2058=j*Model->Eta2y->d[0]+nctemp2058;
if((0>j)||(j>=Model->Eta2y->d[1])){
nctempstring->a="Model->Eta2y";
nctempstring->d[0]=strlen("Model->Eta2y")+1;;
LibeArrayex(537,nctempstring,j,1,Model->Eta2y->d[1]);
}
float nctemp2064= -Model->Dt;
float nctemp2066 = nctemp2064 * tau0y;
Model->Eta2y->a[nctemp2058] =nctemp2066;
}
int nctemp2075 = i + 1;
i =nctemp2075;
int nctemp2076 = (i < Nx);
nctemp1869=nctemp2076;
}
}
int nctemp2088 = j + 1;
j =nctemp2088;
int nctemp2089 = (j < Ny);
nctemp1861=nctemp2089;
}
return 1;
}
struct model* Modelsls (nctempfloat2 *vp,nctempfloat2 *vs,nctempfloat2 *rho,nctempfloat2 *Qp,nctempfloat2 *Qr,float Dx,float Dt,float W0,int Nb)
{
struct model* Model;
int Nx;
int Ny;
int i;
int j;
struct model *nctemp2098=(struct model*)RunMalloc(sizeof(struct model));
Model =nctemp2098;
Model->Dx =Dx;
Model->Dt =Dt;
int nctemp2112=vp->d[0];Model->Nx =nctemp2112;
int nctemp2120=vp->d[1];Model->Ny =nctemp2120;
Model->Nb =Nb;
Model->W0 =W0;
Nx =Model->Nx;
Ny =Model->Ny;
int nctemp2146=Nx;
nctemp2146=nctemp2146*Ny;
nctempfloat2 *nctemp2145;
nctemp2145=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp2145->d[0]=Nx;
nctemp2145->d[1]=Ny;
nctemp2145->a=(float *)RunMalloc(sizeof(float)*nctemp2146);
Model->Rho=nctemp2145;
int nctemp2157=Nx;
nctemp2157=nctemp2157*Ny;
nctempfloat2 *nctemp2156;
nctemp2156=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp2156->d[0]=Nx;
nctemp2156->d[1]=Ny;
nctemp2156->a=(float *)RunMalloc(sizeof(float)*nctemp2157);
Model->Qp=nctemp2156;
int nctemp2168=Nx;
nctemp2168=nctemp2168*Ny;
nctempfloat2 *nctemp2167;
nctemp2167=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp2167->d[0]=Nx;
nctemp2167->d[1]=Ny;
nctemp2167->a=(float *)RunMalloc(sizeof(float)*nctemp2168);
Model->Qr=nctemp2167;
int nctemp2179=Nx;
nctemp2179=nctemp2179*Ny;
nctempfloat2 *nctemp2178;
nctemp2178=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp2178->d[0]=Nx;
nctemp2178->d[1]=Ny;
nctemp2178->a=(float *)RunMalloc(sizeof(float)*nctemp2179);
Model->Kappa=nctemp2178;
int nctemp2190=Nx;
nctemp2190=nctemp2190*Ny;
nctempfloat2 *nctemp2189;
nctemp2189=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp2189->d[0]=Nx;
nctemp2189->d[1]=Ny;
nctemp2189->a=(float *)RunMalloc(sizeof(float)*nctemp2190);
Model->Mu=nctemp2189;
int nctemp2201=Nx;
nctemp2201=nctemp2201*Ny;
nctempfloat2 *nctemp2200;
nctemp2200=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp2200->d[0]=Nx;
nctemp2200->d[1]=Ny;
nctemp2200->a=(float *)RunMalloc(sizeof(float)*nctemp2201);
Model->Lambda=nctemp2200;
int nctemp2212=Nx;
nctemp2212=nctemp2212*Ny;
nctempfloat2 *nctemp2211;
nctemp2211=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp2211->d[0]=Nx;
nctemp2211->d[1]=Ny;
nctemp2211->a=(float *)RunMalloc(sizeof(float)*nctemp2212);
Model->Dkappax=nctemp2211;
int nctemp2223=Nx;
nctemp2223=nctemp2223*Ny;
nctempfloat2 *nctemp2222;
nctemp2222=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp2222->d[0]=Nx;
nctemp2222->d[1]=Ny;
nctemp2222->a=(float *)RunMalloc(sizeof(float)*nctemp2223);
Model->Dkappay=nctemp2222;
int nctemp2234=Nx;
nctemp2234=nctemp2234*Ny;
nctempfloat2 *nctemp2233;
nctemp2233=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp2233->d[0]=Nx;
nctemp2233->d[1]=Ny;
nctemp2233->a=(float *)RunMalloc(sizeof(float)*nctemp2234);
Model->Dlambdax=nctemp2233;
int nctemp2245=Nx;
nctemp2245=nctemp2245*Ny;
nctempfloat2 *nctemp2244;
nctemp2244=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp2244->d[0]=Nx;
nctemp2244->d[1]=Ny;
nctemp2244->a=(float *)RunMalloc(sizeof(float)*nctemp2245);
Model->Dlambday=nctemp2244;
int nctemp2256=Nx;
nctemp2256=nctemp2256*Ny;
nctempfloat2 *nctemp2255;
nctemp2255=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp2255->d[0]=Nx;
nctemp2255->d[1]=Ny;
nctemp2255->a=(float *)RunMalloc(sizeof(float)*nctemp2256);
Model->Dmux=nctemp2255;
int nctemp2267=Nx;
nctemp2267=nctemp2267*Ny;
nctempfloat2 *nctemp2266;
nctemp2266=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp2266->d[0]=Nx;
nctemp2266->d[1]=Ny;
nctemp2266->a=(float *)RunMalloc(sizeof(float)*nctemp2267);
Model->Dmuy=nctemp2266;
int nctemp2278=Nx;
nctemp2278=nctemp2278*Ny;
nctempfloat2 *nctemp2277;
nctemp2277=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp2277->d[0]=Nx;
nctemp2277->d[1]=Ny;
nctemp2277->a=(float *)RunMalloc(sizeof(float)*nctemp2278);
Model->Drhox=nctemp2277;
int nctemp2289=Nx;
nctemp2289=nctemp2289*Ny;
nctempfloat2 *nctemp2288;
nctemp2288=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp2288->d[0]=Nx;
nctemp2288->d[1]=Ny;
nctemp2288->a=(float *)RunMalloc(sizeof(float)*nctemp2289);
Model->Drhoy=nctemp2288;
int nctemp2300=Nx;
nctemp2300=nctemp2300*Ny;
nctempfloat2 *nctemp2299;
nctemp2299=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp2299->d[0]=Nx;
nctemp2299->d[1]=Ny;
nctemp2299->a=(float *)RunMalloc(sizeof(float)*nctemp2300);
Model->Alpha1x=nctemp2299;
int nctemp2311=Nx;
nctemp2311=nctemp2311*Ny;
nctempfloat2 *nctemp2310;
nctemp2310=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp2310->d[0]=Nx;
nctemp2310->d[1]=Ny;
nctemp2310->a=(float *)RunMalloc(sizeof(float)*nctemp2311);
Model->Alpha1y=nctemp2310;
int nctemp2322=Nx;
nctemp2322=nctemp2322*Ny;
nctempfloat2 *nctemp2321;
nctemp2321=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp2321->d[0]=Nx;
nctemp2321->d[1]=Ny;
nctemp2321->a=(float *)RunMalloc(sizeof(float)*nctemp2322);
Model->Alpha2x=nctemp2321;
int nctemp2333=Nx;
nctemp2333=nctemp2333*Ny;
nctempfloat2 *nctemp2332;
nctemp2332=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp2332->d[0]=Nx;
nctemp2332->d[1]=Ny;
nctemp2332->a=(float *)RunMalloc(sizeof(float)*nctemp2333);
Model->Alpha2y=nctemp2332;
int nctemp2344=Nx;
nctemp2344=nctemp2344*Ny;
nctempfloat2 *nctemp2343;
nctemp2343=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp2343->d[0]=Nx;
nctemp2343->d[1]=Ny;
nctemp2343->a=(float *)RunMalloc(sizeof(float)*nctemp2344);
Model->Eta1x=nctemp2343;
int nctemp2355=Nx;
nctemp2355=nctemp2355*Ny;
nctempfloat2 *nctemp2354;
nctemp2354=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp2354->d[0]=Nx;
nctemp2354->d[1]=Ny;
nctemp2354->a=(float *)RunMalloc(sizeof(float)*nctemp2355);
Model->Eta1y=nctemp2354;
int nctemp2366=Nx;
nctemp2366=nctemp2366*Ny;
nctempfloat2 *nctemp2365;
nctemp2365=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp2365->d[0]=Nx;
nctemp2365->d[1]=Ny;
nctemp2365->a=(float *)RunMalloc(sizeof(float)*nctemp2366);
Model->Eta2x=nctemp2365;
int nctemp2377=Nx;
nctemp2377=nctemp2377*Ny;
nctempfloat2 *nctemp2376;
nctemp2376=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp2376->d[0]=Nx;
nctemp2376->d[1]=Ny;
nctemp2376->a=(float *)RunMalloc(sizeof(float)*nctemp2377);
Model->Eta2y=nctemp2376;
int nctemp2388=Nx;
nctempfloat1 *nctemp2387;
nctemp2387=(nctempfloat1*)RunMalloc(sizeof(nctempfloat1));
nctemp2387->d[0]=Nx;
nctemp2387->a=(float *)RunMalloc(sizeof(float)*nctemp2388);
Model->dx=nctemp2387;
int nctemp2397=Ny;
nctempfloat1 *nctemp2396;
nctemp2396=(nctempfloat1*)RunMalloc(sizeof(nctempfloat1));
nctemp2396->d[0]=Ny;
nctemp2396->a=(float *)RunMalloc(sizeof(float)*nctemp2397);
Model->dy=nctemp2396;
j =0;
int nctemp2404 = (j < Ny);
while(nctemp2404){
{
i =0;
int nctemp2412 = (i < Nx);
while(nctemp2412){
{
int nctemp2419=i;
if((0>i)||(i>=Model->Kappa->d[0])){
nctempstring->a="Model->Kappa";
nctempstring->d[0]=strlen("Model->Kappa")+1;;
LibeArrayex(711,nctempstring,i,0,Model->Kappa->d[0]);
}
nctemp2419=j*Model->Kappa->d[0]+nctemp2419;
if((0>j)||(j>=Model->Kappa->d[1])){
nctempstring->a="Model->Kappa";
nctempstring->d[0]=strlen("Model->Kappa")+1;;
LibeArrayex(711,nctempstring,j,1,Model->Kappa->d[1]);
}
int nctemp2429=i;
if((0>i)||(i>=rho->d[0])){
nctempstring->a="rho";
nctempstring->d[0]=strlen("rho")+1;;
LibeArrayex(711,nctempstring,i,0,rho->d[0]);
}
nctemp2429=j*rho->d[0]+nctemp2429;
if((0>j)||(j>=rho->d[1])){
nctempstring->a="rho";
nctempstring->d[0]=strlen("rho")+1;;
LibeArrayex(711,nctempstring,j,1,rho->d[1]);
}
int nctemp2433=i;
if((0>i)||(i>=vp->d[0])){
nctempstring->a="vp";
nctempstring->d[0]=strlen("vp")+1;;
LibeArrayex(711,nctempstring,i,0,vp->d[0]);
}
nctemp2433=j*vp->d[0]+nctemp2433;
if((0>j)||(j>=vp->d[1])){
nctempstring->a="vp";
nctempstring->d[0]=strlen("vp")+1;;
LibeArrayex(711,nctempstring,j,1,vp->d[1]);
}
float nctemp2436 = rho->a[nctemp2429] * vp->a[nctemp2433];
int nctemp2438=i;
if((0>i)||(i>=vp->d[0])){
nctempstring->a="vp";
nctempstring->d[0]=strlen("vp")+1;;
LibeArrayex(711,nctempstring,i,0,vp->d[0]);
}
nctemp2438=j*vp->d[0]+nctemp2438;
if((0>j)||(j>=vp->d[1])){
nctempstring->a="vp";
nctempstring->d[0]=strlen("vp")+1;;
LibeArrayex(711,nctempstring,j,1,vp->d[1]);
}
float nctemp2441 = nctemp2436 * vp->a[nctemp2438];
Model->Kappa->a[nctemp2419] =nctemp2441;
int nctemp2445=i;
if((0>i)||(i>=Model->Rho->d[0])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(712,nctempstring,i,0,Model->Rho->d[0]);
}
nctemp2445=j*Model->Rho->d[0]+nctemp2445;
if((0>j)||(j>=Model->Rho->d[1])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(712,nctempstring,j,1,Model->Rho->d[1]);
}
int nctemp2453=i;
if((0>i)||(i>=rho->d[0])){
nctempstring->a="rho";
nctempstring->d[0]=strlen("rho")+1;;
LibeArrayex(712,nctempstring,i,0,rho->d[0]);
}
nctemp2453=j*rho->d[0]+nctemp2453;
if((0>j)||(j>=rho->d[1])){
nctempstring->a="rho";
nctempstring->d[0]=strlen("rho")+1;;
LibeArrayex(712,nctempstring,j,1,rho->d[1]);
}
float nctemp2456 = 1.0 / rho->a[nctemp2453];
Model->Rho->a[nctemp2445] =nctemp2456;
int nctemp2460=i;
if((0>i)||(i>=Model->Qp->d[0])){
nctempstring->a="Model->Qp";
nctempstring->d[0]=strlen("Model->Qp")+1;;
LibeArrayex(713,nctempstring,i,0,Model->Qp->d[0]);
}
nctemp2460=j*Model->Qp->d[0]+nctemp2460;
if((0>j)||(j>=Model->Qp->d[1])){
nctempstring->a="Model->Qp";
nctempstring->d[0]=strlen("Model->Qp")+1;;
LibeArrayex(713,nctempstring,j,1,Model->Qp->d[1]);
}
int nctemp2464=i;
if((0>i)||(i>=Qp->d[0])){
nctempstring->a="Qp";
nctempstring->d[0]=strlen("Qp")+1;;
LibeArrayex(713,nctempstring,i,0,Qp->d[0]);
}
nctemp2464=j*Qp->d[0]+nctemp2464;
if((0>j)||(j>=Qp->d[1])){
nctempstring->a="Qp";
nctempstring->d[0]=strlen("Qp")+1;;
LibeArrayex(713,nctempstring,j,1,Qp->d[1]);
}
Model->Qp->a[nctemp2460] =Qp->a[nctemp2464];
int nctemp2470=i;
if((0>i)||(i>=Model->Qr->d[0])){
nctempstring->a="Model->Qr";
nctempstring->d[0]=strlen("Model->Qr")+1;;
LibeArrayex(714,nctempstring,i,0,Model->Qr->d[0]);
}
nctemp2470=j*Model->Qr->d[0]+nctemp2470;
if((0>j)||(j>=Model->Qr->d[1])){
nctempstring->a="Model->Qr";
nctempstring->d[0]=strlen("Model->Qr")+1;;
LibeArrayex(714,nctempstring,j,1,Model->Qr->d[1]);
}
int nctemp2474=i;
if((0>i)||(i>=Qr->d[0])){
nctempstring->a="Qr";
nctempstring->d[0]=strlen("Qr")+1;;
LibeArrayex(714,nctempstring,i,0,Qr->d[0]);
}
nctemp2474=j*Qr->d[0]+nctemp2474;
if((0>j)||(j>=Qr->d[1])){
nctempstring->a="Qr";
nctempstring->d[0]=strlen("Qr")+1;;
LibeArrayex(714,nctempstring,j,1,Qr->d[1]);
}
Model->Qr->a[nctemp2470] =Qr->a[nctemp2474];
int nctemp2480=i;
if((0>i)||(i>=Model->Mu->d[0])){
nctempstring->a="Model->Mu";
nctempstring->d[0]=strlen("Model->Mu")+1;;
LibeArrayex(715,nctempstring,i,0,Model->Mu->d[0]);
}
nctemp2480=j*Model->Mu->d[0]+nctemp2480;
if((0>j)||(j>=Model->Mu->d[1])){
nctempstring->a="Model->Mu";
nctempstring->d[0]=strlen("Model->Mu")+1;;
LibeArrayex(715,nctempstring,j,1,Model->Mu->d[1]);
}
int nctemp2490=i;
if((0>i)||(i>=rho->d[0])){
nctempstring->a="rho";
nctempstring->d[0]=strlen("rho")+1;;
LibeArrayex(715,nctempstring,i,0,rho->d[0]);
}
nctemp2490=j*rho->d[0]+nctemp2490;
if((0>j)||(j>=rho->d[1])){
nctempstring->a="rho";
nctempstring->d[0]=strlen("rho")+1;;
LibeArrayex(715,nctempstring,j,1,rho->d[1]);
}
int nctemp2494=i;
if((0>i)||(i>=vs->d[0])){
nctempstring->a="vs";
nctempstring->d[0]=strlen("vs")+1;;
LibeArrayex(715,nctempstring,i,0,vs->d[0]);
}
nctemp2494=j*vs->d[0]+nctemp2494;
if((0>j)||(j>=vs->d[1])){
nctempstring->a="vs";
nctempstring->d[0]=strlen("vs")+1;;
LibeArrayex(715,nctempstring,j,1,vs->d[1]);
}
float nctemp2497 = rho->a[nctemp2490] * vs->a[nctemp2494];
int nctemp2499=i;
if((0>i)||(i>=vs->d[0])){
nctempstring->a="vs";
nctempstring->d[0]=strlen("vs")+1;;
LibeArrayex(715,nctempstring,i,0,vs->d[0]);
}
nctemp2499=j*vs->d[0]+nctemp2499;
if((0>j)||(j>=vs->d[1])){
nctempstring->a="vs";
nctempstring->d[0]=strlen("vs")+1;;
LibeArrayex(715,nctempstring,j,1,vs->d[1]);
}
float nctemp2502 = nctemp2497 * vs->a[nctemp2499];
Model->Mu->a[nctemp2480] =nctemp2502;
int nctemp2506=i;
if((0>i)||(i>=Model->Lambda->d[0])){
nctempstring->a="Model->Lambda";
nctempstring->d[0]=strlen("Model->Lambda")+1;;
LibeArrayex(716,nctempstring,i,0,Model->Lambda->d[0]);
}
nctemp2506=j*Model->Lambda->d[0]+nctemp2506;
if((0>j)||(j>=Model->Lambda->d[1])){
nctempstring->a="Model->Lambda";
nctempstring->d[0]=strlen("Model->Lambda")+1;;
LibeArrayex(716,nctempstring,j,1,Model->Lambda->d[1]);
}
int nctemp2513=i;
if((0>i)||(i>=rho->d[0])){
nctempstring->a="rho";
nctempstring->d[0]=strlen("rho")+1;;
LibeArrayex(716,nctempstring,i,0,rho->d[0]);
}
nctemp2513=j*rho->d[0]+nctemp2513;
if((0>j)||(j>=rho->d[1])){
nctempstring->a="rho";
nctempstring->d[0]=strlen("rho")+1;;
LibeArrayex(716,nctempstring,j,1,rho->d[1]);
}
int nctemp2523=i;
if((0>i)||(i>=vp->d[0])){
nctempstring->a="vp";
nctempstring->d[0]=strlen("vp")+1;;
LibeArrayex(716,nctempstring,i,0,vp->d[0]);
}
nctemp2523=j*vp->d[0]+nctemp2523;
if((0>j)||(j>=vp->d[1])){
nctempstring->a="vp";
nctempstring->d[0]=strlen("vp")+1;;
LibeArrayex(716,nctempstring,j,1,vp->d[1]);
}
int nctemp2527=i;
if((0>i)||(i>=vp->d[0])){
nctempstring->a="vp";
nctempstring->d[0]=strlen("vp")+1;;
LibeArrayex(716,nctempstring,i,0,vp->d[0]);
}
nctemp2527=j*vp->d[0]+nctemp2527;
if((0>j)||(j>=vp->d[1])){
nctempstring->a="vp";
nctempstring->d[0]=strlen("vp")+1;;
LibeArrayex(716,nctempstring,j,1,vp->d[1]);
}
float nctemp2530 = vp->a[nctemp2523] * vp->a[nctemp2527];
int nctemp2539=i;
if((0>i)||(i>=vs->d[0])){
nctempstring->a="vs";
nctempstring->d[0]=strlen("vs")+1;;
LibeArrayex(716,nctempstring,i,0,vs->d[0]);
}
nctemp2539=j*vs->d[0]+nctemp2539;
if((0>j)||(j>=vs->d[1])){
nctempstring->a="vs";
nctempstring->d[0]=strlen("vs")+1;;
LibeArrayex(716,nctempstring,j,1,vs->d[1]);
}
float nctemp2542 = 2.0 * vs->a[nctemp2539];
int nctemp2544=i;
if((0>i)||(i>=vs->d[0])){
nctempstring->a="vs";
nctempstring->d[0]=strlen("vs")+1;;
LibeArrayex(716,nctempstring,i,0,vs->d[0]);
}
nctemp2544=j*vs->d[0]+nctemp2544;
if((0>j)||(j>=vs->d[1])){
nctempstring->a="vs";
nctempstring->d[0]=strlen("vs")+1;;
LibeArrayex(716,nctempstring,j,1,vs->d[1]);
}
float nctemp2547 = nctemp2542 * vs->a[nctemp2544];
float nctemp2548 = nctemp2530 - nctemp2547;
float nctemp2549 = rho->a[nctemp2513] * nctemp2548;
Model->Lambda->a[nctemp2506] =nctemp2549;
}
int nctemp2558 = i + 1;
i =nctemp2558;
int nctemp2559 = (i < Nx);
nctemp2412=nctemp2559;
}
}
int nctemp2571 = j + 1;
j =nctemp2571;
int nctemp2572 = (j < Ny);
nctemp2404=nctemp2572;
}
return Model;
nctempfloat1* nctemp2578= Model->dx;
float nctemp2581= Model->Dx;
int nctemp2583= Model->Nb;
int nctemp2585=Modeld(nctemp2578,nctemp2581,nctemp2583);
nctempfloat1* nctemp2587= Model->dy;
float nctemp2590= Model->Dx;
int nctemp2592= Model->Nb;
int nctemp2594=Modeld(nctemp2587,nctemp2590,nctemp2592);
struct model* nctemp2596= Model;
int nctemp2598=Modelalphasls(nctemp2596);
struct model* nctemp2600= Model;
int nctemp2602=Modelthetasls(nctemp2600);
return Model;
}
float ModelStability (struct model* Model)
{
int nx;
int ny;
int i;
int j;
float vp;
float stab;
nx =Model->Nx;
ny =Model->Ny;
j =0;
int nctemp2616 = (j < ny);
while(nctemp2616){
{
i =0;
int nctemp2624 = (i < nx);
while(nctemp2624){
{
int nctemp2636=i;
if((0>i)||(i>=Model->Kappa->d[0])){
nctempstring->a="Model->Kappa";
nctempstring->d[0]=strlen("Model->Kappa")+1;;
LibeArrayex(750,nctempstring,i,0,Model->Kappa->d[0]);
}
nctemp2636=j*Model->Kappa->d[0]+nctemp2636;
if((0>j)||(j>=Model->Kappa->d[1])){
nctempstring->a="Model->Kappa";
nctempstring->d[0]=strlen("Model->Kappa")+1;;
LibeArrayex(750,nctempstring,j,1,Model->Kappa->d[1]);
}
int nctemp2640=i;
if((0>i)||(i>=Model->Rho->d[0])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(750,nctempstring,i,0,Model->Rho->d[0]);
}
nctemp2640=j*Model->Rho->d[0]+nctemp2640;
if((0>j)||(j>=Model->Rho->d[1])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(750,nctempstring,j,1,Model->Rho->d[1]);
}
float nctemp2643 = Model->Kappa->a[nctemp2636] * Model->Rho->a[nctemp2640];
float nctemp2632= nctemp2643;
float nctemp2644=LibeSqrt(nctemp2632);
vp =nctemp2644;
float nctemp2656 = vp * Model->Dt;
float nctemp2658 = nctemp2656 / Model->Dx;
stab =nctemp2658;
float nctemp2667= 2.0;
float nctemp2669=LibeSqrt(nctemp2667);
float nctemp2670 = 1.0 / nctemp2669;
int nctemp2659 = (stab > nctemp2670);
if(nctemp2659)
{
int nctemp2672= 4;
struct nctempchar1 *nctemp2676;
static struct nctempchar1 nctemp2677 = {{ 28}, (char*)"Stability index too large! \0"};
nctemp2676=&nctemp2677;
nctempchar1* nctemp2674= nctemp2676;
int nctemp2678=LibePuts(nctemp2672,nctemp2674);
int nctemp2680= 4;
float nctemp2682= stab;
struct nctempchar1 *nctemp2686;
static struct nctempchar1 nctemp2687 = {{ 2}, (char*)"g\0"};
nctemp2686=&nctemp2687;
nctempchar1* nctemp2684= nctemp2686;
int nctemp2688=LibePutf(nctemp2680,nctemp2682,nctemp2684);
int nctemp2690= 4;
struct nctempchar1 *nctemp2694;
static struct nctempchar1 nctemp2695 = {{ 3}, (char*)"\n\0"};
nctemp2694=&nctemp2695;
nctempchar1* nctemp2692= nctemp2694;
int nctemp2696=LibePuts(nctemp2690,nctemp2692);
int nctemp2698= 4;
struct nctempchar1 *nctemp2702;
static struct nctempchar1 nctemp2703 = {{ 7}, (char*)"vp: \n\0"};
nctemp2702=&nctemp2703;
nctempchar1* nctemp2700= nctemp2702;
int nctemp2704=LibePuts(nctemp2698,nctemp2700);
int nctemp2706= 4;
float nctemp2708= vp;
struct nctempchar1 *nctemp2712;
static struct nctempchar1 nctemp2713 = {{ 2}, (char*)"g\0"};
nctemp2712=&nctemp2713;
nctempchar1* nctemp2710= nctemp2712;
int nctemp2714=LibePutf(nctemp2706,nctemp2708,nctemp2710);
int nctemp2716= 4;
struct nctempchar1 *nctemp2720;
static struct nctempchar1 nctemp2721 = {{ 3}, (char*)"\n\0"};
nctemp2720=&nctemp2721;
nctempchar1* nctemp2718= nctemp2720;
int nctemp2722=LibePuts(nctemp2716,nctemp2718);
int nctemp2724= 4;
struct nctempchar1 *nctemp2728;
static struct nctempchar1 nctemp2729 = {{ 7}, (char*)"dt: \n\0"};
nctemp2728=&nctemp2729;
nctempchar1* nctemp2726= nctemp2728;
int nctemp2730=LibePuts(nctemp2724,nctemp2726);
int nctemp2732= 4;
float nctemp2734= Model->Dt;
struct nctempchar1 *nctemp2738;
static struct nctempchar1 nctemp2739 = {{ 2}, (char*)"g\0"};
nctemp2738=&nctemp2739;
nctempchar1* nctemp2736= nctemp2738;
int nctemp2740=LibePutf(nctemp2732,nctemp2734,nctemp2736);
int nctemp2742= 4;
struct nctempchar1 *nctemp2746;
static struct nctempchar1 nctemp2747 = {{ 3}, (char*)"\n\0"};
nctemp2746=&nctemp2747;
nctempchar1* nctemp2744= nctemp2746;
int nctemp2748=LibePuts(nctemp2742,nctemp2744);
int nctemp2750= 4;
struct nctempchar1 *nctemp2754;
static struct nctempchar1 nctemp2755 = {{ 7}, (char*)"dx: \n\0"};
nctemp2754=&nctemp2755;
nctempchar1* nctemp2752= nctemp2754;
int nctemp2756=LibePuts(nctemp2750,nctemp2752);
int nctemp2758= 4;
float nctemp2760= Model->Dx;
struct nctempchar1 *nctemp2764;
static struct nctempchar1 nctemp2765 = {{ 2}, (char*)"g\0"};
nctemp2764=&nctemp2765;
nctempchar1* nctemp2762= nctemp2764;
int nctemp2766=LibePutf(nctemp2758,nctemp2760,nctemp2762);
int nctemp2768= 4;
struct nctempchar1 *nctemp2772;
static struct nctempchar1 nctemp2773 = {{ 3}, (char*)"\n\0"};
nctemp2772=&nctemp2773;
nctempchar1* nctemp2770= nctemp2772;
int nctemp2774=LibePuts(nctemp2768,nctemp2770);
int nctemp2776= 4;
int nctemp2778=LibeFlush(nctemp2776);
}
}
int nctemp2787 = i + 1;
i =nctemp2787;
int nctemp2788 = (i < nx);
nctemp2624=nctemp2788;
}
}
int nctemp2800 = j + 1;
j =nctemp2800;
int nctemp2801 = (j < ny);
nctemp2616=nctemp2801;
}
return stab;
}
int Modeld (nctempfloat1 *d,float dx,int nb)
{
int i;
int n;
int nctemp2810=d->d[0];n =nctemp2810;
i =0;
int nctemp2818 = (i < n);
while(nctemp2818){
{
int nctemp2825=i;
if((0>i)||(i>=d->d[0])){
nctempstring->a="d";
nctempstring->d[0]=strlen("d")+1;;
LibeArrayex(788,nctempstring,i,0,d->d[0]);
}
d->a[nctemp2825] =1.0;
}
int nctemp2836 = i + 1;
i =nctemp2836;
int nctemp2837 = (i < n);
nctemp2818=nctemp2837;
}
i =0;
int nctemp2845 = (i < nb);
while(nctemp2845){
{
int nctemp2852=i;
if((0>i)||(i>=d->d[0])){
nctempstring->a="d";
nctempstring->d[0]=strlen("d")+1;;
LibeArrayex(793,nctempstring,i,0,d->d[0]);
}
int nctemp2858=i;
if((0>i)||(i>=d->d[0])){
nctempstring->a="d";
nctempstring->d[0]=strlen("d")+1;;
LibeArrayex(793,nctempstring,i,0,d->d[0]);
}
float nctemp2873=(float)(i);
float nctemp2877 = nctemp2873 * dx;
float nctemp2882=(float)(nb);
float nctemp2886 = nctemp2882 * dx;
float nctemp2887 = nctemp2877 / nctemp2886;
float nctemp2892=(float)(i);
float nctemp2896 = nctemp2892 * dx;
float nctemp2897 = nctemp2887 * nctemp2896;
float nctemp2902=(float)(nb);
float nctemp2906 = nctemp2902 * dx;
float nctemp2907 = nctemp2897 / nctemp2906;
float nctemp2908 = d->a[nctemp2858] * nctemp2907;
d->a[nctemp2852] =nctemp2908;
}
int nctemp2917 = i + 1;
i =nctemp2917;
int nctemp2918 = (i < nb);
nctemp2845=nctemp2918;
}
int nctemp2933 = n - 1;
int nctemp2935 = nctemp2933 - nb;
i =nctemp2935;
int nctemp2936 = (i < n);
while(nctemp2936){
{
int nctemp2943=i;
if((0>i)||(i>=d->d[0])){
nctempstring->a="d";
nctempstring->d[0]=strlen("d")+1;;
LibeArrayex(799,nctempstring,i,0,d->d[0]);
}
int nctemp2949=i;
if((0>i)||(i>=d->d[0])){
nctempstring->a="d";
nctempstring->d[0]=strlen("d")+1;;
LibeArrayex(799,nctempstring,i,0,d->d[0]);
}
int nctemp2973 = n - 1;
int nctemp2975 = nctemp2973 - i;
float nctemp2964=(float)(nctemp2975);
float nctemp2977 = nctemp2964 * dx;
float nctemp2982=(float)(nb);
float nctemp2986 = nctemp2982 * dx;
float nctemp2987 = nctemp2977 / nctemp2986;
int nctemp3001 = n - 1;
int nctemp3003 = nctemp3001 - i;
float nctemp2992=(float)(nctemp3003);
float nctemp3005 = nctemp2992 * dx;
float nctemp3006 = nctemp2987 * nctemp3005;
float nctemp3011=(float)(nb);
float nctemp3015 = nctemp3011 * dx;
float nctemp3016 = nctemp3006 / nctemp3015;
float nctemp3017 = d->a[nctemp2949] * nctemp3016;
d->a[nctemp2943] =nctemp3017;
}
int nctemp3026 = i + 1;
i =nctemp3026;
int nctemp3027 = (i < n);
nctemp2936=nctemp3027;
}
return 1;
}
