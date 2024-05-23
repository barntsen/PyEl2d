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
nctempfloat2 *Ql;
nctempfloat2 *Qm;
nctempfloat2 *Qs;
nctempfloat2 *Lambda;
nctempfloat2 *Mu;
nctempfloat2 *Dlambda;
nctempfloat2 *Dmu;
nctempfloat2 *Drhox;
nctempfloat2 *Drhoy;
nctempfloat2 *Rho;
nctempfloat2 *Alpha1x;
nctempfloat2 *Alpha1y;
nctempfloat2 *Alpha2x;
nctempfloat2 *Alpha2y;
nctempfloat2 *Beta1x;
nctempfloat2 *Beta2x;
nctempfloat2 *Beta1y;
nctempfloat2 *Beta2y;
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
struct model* Modelsls (nctempfloat2 *vp,nctempfloat2 *vs,nctempfloat2 *rho,nctempfloat2 *Ql,nctempfloat2 *Qm,float Dx,float Dt,float W0,int Nb);
int Modeld (nctempfloat1 *d,float dx,int nb);
float Modeltaus (float Q,float w0);
float Modeltaue (float Q,float w0);
int Modelalphamax (struct model* Model);
int Modelthetamax (struct model* Model);
int Modelalphasls (struct model* Model);
int Modelbetasls (struct model* Model);
int Modeletasls (struct model* Model);
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
if((0>Model->Nb)||(Model->Nb>=Model->Ql->d[0])){
nctempstring->a="Model->Ql";
nctempstring->d[0]=strlen("Model->Ql")+1;;
LibeArrayex(108,nctempstring,Model->Nb,0,Model->Ql->d[0]);
}
nctemp198=j*Model->Ql->d[0]+nctemp198;
if((0>j)||(j>=Model->Ql->d[1])){
nctempstring->a="Model->Ql";
nctempstring->d[0]=strlen("Model->Ql")+1;;
LibeArrayex(108,nctempstring,j,1,Model->Ql->d[1]);
}
Qmax =Model->Ql->a[nctemp198];
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
if((0>i)||(i>=Model->Ql->d[0])){
nctempstring->a="Model->Ql";
nctempstring->d[0]=strlen("Model->Ql")+1;;
LibeArrayex(120,nctempstring,i,0,Model->Ql->d[0]);
}
nctemp327=Model->Nb*Model->Ql->d[0]+nctemp327;
if((0>Model->Nb)||(Model->Nb>=Model->Ql->d[1])){
nctempstring->a="Model->Ql";
nctempstring->d[0]=strlen("Model->Ql")+1;;
LibeArrayex(120,nctempstring,Model->Nb,1,Model->Ql->d[1]);
}
Qmax =Model->Ql->a[nctemp327];
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
if((0>i)||(i>=Model->Dlambda->d[0])){
nctempstring->a="Model->Dlambda";
nctempstring->d[0]=strlen("Model->Dlambda")+1;;
LibeArrayex(144,nctempstring,i,0,Model->Dlambda->d[0]);
}
nctemp535=j*Model->Dlambda->d[0]+nctemp535;
if((0>j)||(j>=Model->Dlambda->d[1])){
nctempstring->a="Model->Dlambda";
nctempstring->d[0]=strlen("Model->Dlambda")+1;;
LibeArrayex(144,nctempstring,j,1,Model->Dlambda->d[1]);
}
int nctemp542=i;
if((0>i)||(i>=Model->Lambda->d[0])){
nctempstring->a="Model->Lambda";
nctempstring->d[0]=strlen("Model->Lambda")+1;;
LibeArrayex(144,nctempstring,i,0,Model->Lambda->d[0]);
}
nctemp542=j*Model->Lambda->d[0]+nctemp542;
if((0>j)||(j>=Model->Lambda->d[1])){
nctempstring->a="Model->Lambda";
nctempstring->d[0]=strlen("Model->Lambda")+1;;
LibeArrayex(144,nctempstring,j,1,Model->Lambda->d[1]);
}
float nctemp554 = tausx / tauex;
float nctemp555 = 1.0 - nctemp554;
float nctemp556 = Model->Lambda->a[nctemp542] * nctemp555;
Model->Dlambda->a[nctemp535] =nctemp556;
}
int nctemp565 = i + 1;
i =nctemp565;
int nctemp566 = (i < Nx);
nctemp97=nctemp566;
}
}
int nctemp578 = j + 1;
j =nctemp578;
int nctemp579 = (j < Ny);
nctemp89=nctemp579;
}
return 1;
}
int Modelbetasls (struct model* Model)
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
int nctemp596 = (j < Ny);
while(nctemp596){
{
i =0;
int nctemp604 = (i < Nx);
while(nctemp604){
{
float nctemp616 = 1.0 / Model->W0;
tau0 =nctemp616;
Qmin =1.1;
float nctemp632 = tau0 / Qmin;
float nctemp645 = Qmin * Qmin;
float nctemp647 = nctemp645 + 1.0;
float nctemp637= nctemp647;
float nctemp648=LibeSqrt(nctemp637);
float nctemp650 = nctemp648 + 1.0;
float nctemp651 = nctemp632 * nctemp650;
tauemin =nctemp651;
float nctemp660 = 1.0 / tauemin;
tauemin =nctemp660;
float nctemp672 = tau0 / Qmin;
float nctemp685 = Qmin * Qmin;
float nctemp687 = nctemp685 + 1.0;
float nctemp677= nctemp687;
float nctemp688=LibeSqrt(nctemp677);
float nctemp690 = nctemp688 - 1.0;
float nctemp691 = nctemp672 * nctemp690;
tausmin =nctemp691;
float nctemp700 = 1.0 / tausmin;
tausmin =nctemp700;
int nctemp705=Model->Nb;
if((0>Model->Nb)||(Model->Nb>=Model->Qm->d[0])){
nctempstring->a="Model->Qm";
nctempstring->d[0]=strlen("Model->Qm")+1;;
LibeArrayex(194,nctempstring,Model->Nb,0,Model->Qm->d[0]);
}
nctemp705=j*Model->Qm->d[0]+nctemp705;
if((0>j)||(j>=Model->Qm->d[1])){
nctempstring->a="Model->Qm";
nctempstring->d[0]=strlen("Model->Qm")+1;;
LibeArrayex(194,nctempstring,j,1,Model->Qm->d[1]);
}
Qmax =Model->Qm->a[nctemp705];
float nctemp719 = tau0 / Qmin;
float nctemp732 = Qmax * Qmax;
float nctemp734 = nctemp732 + 1.0;
float nctemp724= nctemp734;
float nctemp735=LibeSqrt(nctemp724);
float nctemp737 = nctemp735 + 1.0;
float nctemp738 = nctemp719 * nctemp737;
tauemax =nctemp738;
float nctemp747 = 1.0 / tauemax;
tauemax =nctemp747;
float nctemp759 = tau0 / Qmin;
float nctemp772 = Qmax * Qmax;
float nctemp774 = nctemp772 + 1.0;
float nctemp764= nctemp774;
float nctemp775=LibeSqrt(nctemp764);
float nctemp777 = nctemp775 - 1.0;
float nctemp778 = nctemp759 * nctemp777;
tausmax =nctemp778;
float nctemp787 = 1.0 / tausmax;
tausmax =nctemp787;
float nctemp803 = tauemax - tauemin;
int nctemp805=i;
if((0>i)||(i>=Model->dx->d[0])){
nctempstring->a="Model->dx";
nctempstring->d[0]=strlen("Model->dx")+1;;
LibeArrayex(204,nctempstring,i,0,Model->dx->d[0]);
}
float nctemp807 = nctemp803 * Model->dx->a[nctemp805];
float nctemp808 = tauemin + nctemp807;
tauex =nctemp808;
float nctemp824 = tausmax - tausmin;
int nctemp826=i;
if((0>i)||(i>=Model->dx->d[0])){
nctempstring->a="Model->dx";
nctempstring->d[0]=strlen("Model->dx")+1;;
LibeArrayex(205,nctempstring,i,0,Model->dx->d[0]);
}
float nctemp828 = nctemp824 * Model->dx->a[nctemp826];
float nctemp829 = tausmin + nctemp828;
tausx =nctemp829;
int nctemp834=i;
if((0>i)||(i>=Model->Ql->d[0])){
nctempstring->a="Model->Ql";
nctempstring->d[0]=strlen("Model->Ql")+1;;
LibeArrayex(206,nctempstring,i,0,Model->Ql->d[0]);
}
nctemp834=Model->Nb*Model->Ql->d[0]+nctemp834;
if((0>Model->Nb)||(Model->Nb>=Model->Ql->d[1])){
nctempstring->a="Model->Ql";
nctempstring->d[0]=strlen("Model->Ql")+1;;
LibeArrayex(206,nctempstring,Model->Nb,1,Model->Ql->d[1]);
}
Qmax =Model->Ql->a[nctemp834];
float nctemp848 = tau0 / Qmin;
float nctemp861 = Qmax * Qmax;
float nctemp863 = nctemp861 + 1.0;
float nctemp853= nctemp863;
float nctemp864=LibeSqrt(nctemp853);
float nctemp866 = nctemp864 + 1.0;
float nctemp867 = nctemp848 * nctemp866;
tauemax =nctemp867;
float nctemp876 = 1.0 / tauemax;
tauemax =nctemp876;
float nctemp888 = tau0 / Qmin;
float nctemp901 = Qmax * Qmax;
float nctemp903 = nctemp901 + 1.0;
float nctemp893= nctemp903;
float nctemp904=LibeSqrt(nctemp893);
float nctemp906 = nctemp904 - 1.0;
float nctemp907 = nctemp888 * nctemp906;
tausmax =nctemp907;
float nctemp916 = 1.0 / tausmax;
tausmax =nctemp916;
float nctemp932 = tauemax - tauemin;
int nctemp934=j;
if((0>j)||(j>=Model->dy->d[0])){
nctempstring->a="Model->dy";
nctempstring->d[0]=strlen("Model->dy")+1;;
LibeArrayex(213,nctempstring,j,0,Model->dy->d[0]);
}
float nctemp936 = nctemp932 * Model->dy->a[nctemp934];
float nctemp937 = tauemin + nctemp936;
tauey =nctemp937;
float nctemp953 = tausmax - tausmin;
int nctemp955=j;
if((0>j)||(j>=Model->dy->d[0])){
nctempstring->a="Model->dy";
nctempstring->d[0]=strlen("Model->dy")+1;;
LibeArrayex(214,nctempstring,j,0,Model->dy->d[0]);
}
float nctemp957 = nctemp953 * Model->dy->a[nctemp955];
float nctemp958 = tausmin + nctemp957;
tausy =nctemp958;
int nctemp963=i;
if((0>i)||(i>=Model->dx->d[0])){
nctempstring->a="Model->dx";
nctempstring->d[0]=strlen("Model->dx")+1;;
LibeArrayex(219,nctempstring,i,0,Model->dx->d[0]);
}
argx =Model->dx->a[nctemp963];
int nctemp969=j;
if((0>j)||(j>=Model->dy->d[0])){
nctempstring->a="Model->dy";
nctempstring->d[0]=strlen("Model->dy")+1;;
LibeArrayex(220,nctempstring,j,0,Model->dy->d[0]);
}
argy =Model->dy->a[nctemp969];
int nctemp974=i;
if((0>i)||(i>=Model->Beta1x->d[0])){
nctempstring->a="Model->Beta1x";
nctempstring->d[0]=strlen("Model->Beta1x")+1;;
LibeArrayex(223,nctempstring,i,0,Model->Beta1x->d[0]);
}
nctemp974=j*Model->Beta1x->d[0]+nctemp974;
if((0>j)||(j>=Model->Beta1x->d[1])){
nctempstring->a="Model->Beta1x";
nctempstring->d[0]=strlen("Model->Beta1x")+1;;
LibeArrayex(223,nctempstring,j,1,Model->Beta1x->d[1]);
}
float nctemp982= -argx;
float nctemp981= nctemp982;
float nctemp983=LibeExp(nctemp981);
float nctemp988= -Model->Dt;
float nctemp990 = nctemp988 * tausx;
float nctemp985= nctemp990;
float nctemp991=LibeExp(nctemp985);
float nctemp992 = nctemp983 * nctemp991;
Model->Beta1x->a[nctemp974] =nctemp992;
int nctemp996=i;
if((0>i)||(i>=Model->Beta1y->d[0])){
nctempstring->a="Model->Beta1y";
nctempstring->d[0]=strlen("Model->Beta1y")+1;;
LibeArrayex(224,nctempstring,i,0,Model->Beta1y->d[0]);
}
nctemp996=j*Model->Beta1y->d[0]+nctemp996;
if((0>j)||(j>=Model->Beta1y->d[1])){
nctempstring->a="Model->Beta1y";
nctempstring->d[0]=strlen("Model->Beta1y")+1;;
LibeArrayex(224,nctempstring,j,1,Model->Beta1y->d[1]);
}
float nctemp1004= -argy;
float nctemp1003= nctemp1004;
float nctemp1005=LibeExp(nctemp1003);
float nctemp1010= -Model->Dt;
float nctemp1012 = nctemp1010 * tausy;
float nctemp1007= nctemp1012;
float nctemp1013=LibeExp(nctemp1007);
float nctemp1014 = nctemp1005 * nctemp1013;
Model->Beta1y->a[nctemp996] =nctemp1014;
int nctemp1018=i;
if((0>i)||(i>=Model->Beta2x->d[0])){
nctempstring->a="Model->Beta2x";
nctempstring->d[0]=strlen("Model->Beta2x")+1;;
LibeArrayex(225,nctempstring,i,0,Model->Beta2x->d[0]);
}
nctemp1018=j*Model->Beta2x->d[0]+nctemp1018;
if((0>j)||(j>=Model->Beta2x->d[1])){
nctempstring->a="Model->Beta2x";
nctempstring->d[0]=strlen("Model->Beta2x")+1;;
LibeArrayex(225,nctempstring,j,1,Model->Beta2x->d[1]);
}
float nctemp1026 = Model->Dt * tauex;
Model->Beta2x->a[nctemp1018] =nctemp1026;
int nctemp1030=i;
if((0>i)||(i>=Model->Beta2y->d[0])){
nctempstring->a="Model->Beta2y";
nctempstring->d[0]=strlen("Model->Beta2y")+1;;
LibeArrayex(226,nctempstring,i,0,Model->Beta2y->d[0]);
}
nctemp1030=j*Model->Beta2y->d[0]+nctemp1030;
if((0>j)||(j>=Model->Beta2y->d[1])){
nctempstring->a="Model->Beta2y";
nctempstring->d[0]=strlen("Model->Beta2y")+1;;
LibeArrayex(226,nctempstring,j,1,Model->Beta2y->d[1]);
}
float nctemp1038 = Model->Dt * tauey;
Model->Beta2y->a[nctemp1030] =nctemp1038;
int nctemp1042=i;
if((0>i)||(i>=Model->Dmu->d[0])){
nctempstring->a="Model->Dmu";
nctempstring->d[0]=strlen("Model->Dmu")+1;;
LibeArrayex(230,nctempstring,i,0,Model->Dmu->d[0]);
}
nctemp1042=j*Model->Dmu->d[0]+nctemp1042;
if((0>j)||(j>=Model->Dmu->d[1])){
nctempstring->a="Model->Dmu";
nctempstring->d[0]=strlen("Model->Dmu")+1;;
LibeArrayex(230,nctempstring,j,1,Model->Dmu->d[1]);
}
int nctemp1049=i;
if((0>i)||(i>=Model->Mu->d[0])){
nctempstring->a="Model->Mu";
nctempstring->d[0]=strlen("Model->Mu")+1;;
LibeArrayex(230,nctempstring,i,0,Model->Mu->d[0]);
}
nctemp1049=j*Model->Mu->d[0]+nctemp1049;
if((0>j)||(j>=Model->Mu->d[1])){
nctempstring->a="Model->Mu";
nctempstring->d[0]=strlen("Model->Mu")+1;;
LibeArrayex(230,nctempstring,j,1,Model->Mu->d[1]);
}
float nctemp1061 = tausy / tauey;
float nctemp1062 = 1.0 - nctemp1061;
float nctemp1063 = Model->Mu->a[nctemp1049] * nctemp1062;
Model->Dmu->a[nctemp1042] =nctemp1063;
}
int nctemp1072 = i + 1;
i =nctemp1072;
int nctemp1073 = (i < Nx);
nctemp604=nctemp1073;
}
}
int nctemp1085 = j + 1;
j =nctemp1085;
int nctemp1086 = (j < Ny);
nctemp596=nctemp1086;
}
return 1;
}
int Modeletasls (struct model* Model)
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
int nctemp1103 = (j < Ny);
while(nctemp1103){
{
i =0;
int nctemp1111 = (i < Nx);
while(nctemp1111){
{
float nctemp1123 = 1.0 / Model->W0;
tau0 =nctemp1123;
Qmin =1.1;
float nctemp1139 = tau0 / Qmin;
float nctemp1152 = Qmin * Qmin;
float nctemp1154 = nctemp1152 + 1.0;
float nctemp1144= nctemp1154;
float nctemp1155=LibeSqrt(nctemp1144);
float nctemp1157 = nctemp1155 + 1.0;
float nctemp1158 = nctemp1139 * nctemp1157;
tauemin =nctemp1158;
float nctemp1167 = 1.0 / tauemin;
tauemin =nctemp1167;
float nctemp1179 = tau0 / Qmin;
float nctemp1192 = Qmin * Qmin;
float nctemp1194 = nctemp1192 + 1.0;
float nctemp1184= nctemp1194;
float nctemp1195=LibeSqrt(nctemp1184);
float nctemp1197 = nctemp1195 - 1.0;
float nctemp1198 = nctemp1179 * nctemp1197;
tausmin =nctemp1198;
float nctemp1207 = 1.0 / tausmin;
tausmin =nctemp1207;
int nctemp1212=Model->Nb;
if((0>Model->Nb)||(Model->Nb>=Model->Ql->d[0])){
nctempstring->a="Model->Ql";
nctempstring->d[0]=strlen("Model->Ql")+1;;
LibeArrayex(272,nctempstring,Model->Nb,0,Model->Ql->d[0]);
}
nctemp1212=j*Model->Ql->d[0]+nctemp1212;
if((0>j)||(j>=Model->Ql->d[1])){
nctempstring->a="Model->Ql";
nctempstring->d[0]=strlen("Model->Ql")+1;;
LibeArrayex(272,nctempstring,j,1,Model->Ql->d[1]);
}
Qmax =Model->Ql->a[nctemp1212];
float nctemp1226 = tau0 / Qmin;
float nctemp1239 = Qmax * Qmax;
float nctemp1241 = nctemp1239 + 1.0;
float nctemp1231= nctemp1241;
float nctemp1242=LibeSqrt(nctemp1231);
float nctemp1244 = nctemp1242 + 1.0;
float nctemp1245 = nctemp1226 * nctemp1244;
tauemax =nctemp1245;
float nctemp1254 = 1.0 / tauemax;
tauemax =nctemp1254;
float nctemp1266 = tau0 / Qmin;
float nctemp1279 = Qmax * Qmax;
float nctemp1281 = nctemp1279 + 1.0;
float nctemp1271= nctemp1281;
float nctemp1282=LibeSqrt(nctemp1271);
float nctemp1284 = nctemp1282 - 1.0;
float nctemp1285 = nctemp1266 * nctemp1284;
tausmax =nctemp1285;
float nctemp1294 = 1.0 / tausmax;
tausmax =nctemp1294;
float nctemp1310 = tauemax - tauemin;
int nctemp1312=i;
if((0>i)||(i>=Model->dx->d[0])){
nctempstring->a="Model->dx";
nctempstring->d[0]=strlen("Model->dx")+1;;
LibeArrayex(284,nctempstring,i,0,Model->dx->d[0]);
}
float nctemp1314 = nctemp1310 * Model->dx->a[nctemp1312];
float nctemp1315 = tauemin + nctemp1314;
tauex =nctemp1315;
float nctemp1331 = tausmax - tausmin;
int nctemp1333=i;
if((0>i)||(i>=Model->dx->d[0])){
nctempstring->a="Model->dx";
nctempstring->d[0]=strlen("Model->dx")+1;;
LibeArrayex(285,nctempstring,i,0,Model->dx->d[0]);
}
float nctemp1335 = nctemp1331 * Model->dx->a[nctemp1333];
float nctemp1336 = tausmin + nctemp1335;
tausx =nctemp1336;
int nctemp1341=i;
if((0>i)||(i>=Model->Ql->d[0])){
nctempstring->a="Model->Ql";
nctempstring->d[0]=strlen("Model->Ql")+1;;
LibeArrayex(286,nctempstring,i,0,Model->Ql->d[0]);
}
nctemp1341=Model->Nb*Model->Ql->d[0]+nctemp1341;
if((0>Model->Nb)||(Model->Nb>=Model->Ql->d[1])){
nctempstring->a="Model->Ql";
nctempstring->d[0]=strlen("Model->Ql")+1;;
LibeArrayex(286,nctempstring,Model->Nb,1,Model->Ql->d[1]);
}
Qmax =Model->Ql->a[nctemp1341];
float nctemp1355 = tau0 / Qmin;
float nctemp1368 = Qmax * Qmax;
float nctemp1370 = nctemp1368 + 1.0;
float nctemp1360= nctemp1370;
float nctemp1371=LibeSqrt(nctemp1360);
float nctemp1373 = nctemp1371 + 1.0;
float nctemp1374 = nctemp1355 * nctemp1373;
tauemax =nctemp1374;
float nctemp1383 = 1.0 / tauemax;
tauemax =nctemp1383;
float nctemp1395 = tau0 / Qmin;
float nctemp1408 = Qmax * Qmax;
float nctemp1410 = nctemp1408 + 1.0;
float nctemp1400= nctemp1410;
float nctemp1411=LibeSqrt(nctemp1400);
float nctemp1413 = nctemp1411 - 1.0;
float nctemp1414 = nctemp1395 * nctemp1413;
tausmax =nctemp1414;
float nctemp1423 = 1.0 / tausmax;
tausmax =nctemp1423;
float nctemp1439 = tauemax - tauemin;
int nctemp1441=j;
if((0>j)||(j>=Model->dy->d[0])){
nctempstring->a="Model->dy";
nctempstring->d[0]=strlen("Model->dy")+1;;
LibeArrayex(293,nctempstring,j,0,Model->dy->d[0]);
}
float nctemp1443 = nctemp1439 * Model->dy->a[nctemp1441];
float nctemp1444 = tauemin + nctemp1443;
tauey =nctemp1444;
float nctemp1460 = tausmax - tausmin;
int nctemp1462=j;
if((0>j)||(j>=Model->dy->d[0])){
nctempstring->a="Model->dy";
nctempstring->d[0]=strlen("Model->dy")+1;;
LibeArrayex(294,nctempstring,j,0,Model->dy->d[0]);
}
float nctemp1464 = nctemp1460 * Model->dy->a[nctemp1462];
float nctemp1465 = tausmin + nctemp1464;
tausy =nctemp1465;
int nctemp1470=i;
if((0>i)||(i>=Model->dx->d[0])){
nctempstring->a="Model->dx";
nctempstring->d[0]=strlen("Model->dx")+1;;
LibeArrayex(299,nctempstring,i,0,Model->dx->d[0]);
}
argx =Model->dx->a[nctemp1470];
int nctemp1476=j;
if((0>j)||(j>=Model->dy->d[0])){
nctempstring->a="Model->dy";
nctempstring->d[0]=strlen("Model->dy")+1;;
LibeArrayex(300,nctempstring,j,0,Model->dy->d[0]);
}
argy =Model->dy->a[nctemp1476];
int nctemp1481=i;
if((0>i)||(i>=Model->Eta1x->d[0])){
nctempstring->a="Model->Eta1x";
nctempstring->d[0]=strlen("Model->Eta1x")+1;;
LibeArrayex(304,nctempstring,i,0,Model->Eta1x->d[0]);
}
nctemp1481=j*Model->Eta1x->d[0]+nctemp1481;
if((0>j)||(j>=Model->Eta1x->d[1])){
nctempstring->a="Model->Eta1x";
nctempstring->d[0]=strlen("Model->Eta1x")+1;;
LibeArrayex(304,nctempstring,j,1,Model->Eta1x->d[1]);
}
float nctemp1489= -argx;
float nctemp1488= nctemp1489;
float nctemp1490=LibeExp(nctemp1488);
float nctemp1495= -Model->Dt;
float nctemp1497 = nctemp1495 * tausx;
float nctemp1492= nctemp1497;
float nctemp1498=LibeExp(nctemp1492);
float nctemp1499 = nctemp1490 * nctemp1498;
Model->Eta1x->a[nctemp1481] =nctemp1499;
int nctemp1503=i;
if((0>i)||(i>=Model->Eta1y->d[0])){
nctempstring->a="Model->Eta1y";
nctempstring->d[0]=strlen("Model->Eta1y")+1;;
LibeArrayex(305,nctempstring,i,0,Model->Eta1y->d[0]);
}
nctemp1503=j*Model->Eta1y->d[0]+nctemp1503;
if((0>j)||(j>=Model->Eta1y->d[1])){
nctempstring->a="Model->Eta1y";
nctempstring->d[0]=strlen("Model->Eta1y")+1;;
LibeArrayex(305,nctempstring,j,1,Model->Eta1y->d[1]);
}
float nctemp1511= -argy;
float nctemp1510= nctemp1511;
float nctemp1512=LibeExp(nctemp1510);
float nctemp1517= -Model->Dt;
float nctemp1519 = nctemp1517 * tausy;
float nctemp1514= nctemp1519;
float nctemp1520=LibeExp(nctemp1514);
float nctemp1521 = nctemp1512 * nctemp1520;
Model->Eta1y->a[nctemp1503] =nctemp1521;
int nctemp1525=i;
if((0>i)||(i>=Model->Eta2x->d[0])){
nctempstring->a="Model->Eta2x";
nctempstring->d[0]=strlen("Model->Eta2x")+1;;
LibeArrayex(306,nctempstring,i,0,Model->Eta2x->d[0]);
}
nctemp1525=j*Model->Eta2x->d[0]+nctemp1525;
if((0>j)||(j>=Model->Eta2x->d[1])){
nctempstring->a="Model->Eta2x";
nctempstring->d[0]=strlen("Model->Eta2x")+1;;
LibeArrayex(306,nctempstring,j,1,Model->Eta2x->d[1]);
}
float nctemp1533 = Model->Dt * tauex;
Model->Eta2x->a[nctemp1525] =nctemp1533;
int nctemp1537=i;
if((0>i)||(i>=Model->Eta2y->d[0])){
nctempstring->a="Model->Eta2y";
nctempstring->d[0]=strlen("Model->Eta2y")+1;;
LibeArrayex(307,nctempstring,i,0,Model->Eta2y->d[0]);
}
nctemp1537=j*Model->Eta2y->d[0]+nctemp1537;
if((0>j)||(j>=Model->Eta2y->d[1])){
nctempstring->a="Model->Eta2y";
nctempstring->d[0]=strlen("Model->Eta2y")+1;;
LibeArrayex(307,nctempstring,j,1,Model->Eta2y->d[1]);
}
float nctemp1545 = Model->Dt * tauey;
Model->Eta2y->a[nctemp1537] =nctemp1545;
}
int nctemp1554 = i + 1;
i =nctemp1554;
int nctemp1555 = (i < Nx);
nctemp1111=nctemp1555;
}
}
int nctemp1567 = j + 1;
j =nctemp1567;
int nctemp1568 = (j < Ny);
nctemp1103=nctemp1568;
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
struct model *nctemp1577=(struct model*)RunMalloc(sizeof(struct model));
Model =nctemp1577;
Model->Dx =Dx;
Model->Dt =Dt;
int nctemp1591=vp->d[0];Model->Nx =nctemp1591;
int nctemp1599=vp->d[1];Model->Ny =nctemp1599;
Model->Nb =Nb;
Model->W0 =W0;
Nx =Model->Nx;
Ny =Model->Ny;
int nctemp1625=Nx;
nctemp1625=nctemp1625*Ny;
nctempfloat2 *nctemp1624;
nctemp1624=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1624->d[0]=Nx;
nctemp1624->d[1]=Ny;
nctemp1624->a=(float *)RunMalloc(sizeof(float)*nctemp1625);
Model->Rho=nctemp1624;
int nctemp1636=Nx;
nctemp1636=nctemp1636*Ny;
nctempfloat2 *nctemp1635;
nctemp1635=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1635->d[0]=Nx;
nctemp1635->d[1]=Ny;
nctemp1635->a=(float *)RunMalloc(sizeof(float)*nctemp1636);
Model->Ql=nctemp1635;
int nctemp1647=Nx;
nctemp1647=nctemp1647*Ny;
nctempfloat2 *nctemp1646;
nctemp1646=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1646->d[0]=Nx;
nctemp1646->d[1]=Ny;
nctemp1646->a=(float *)RunMalloc(sizeof(float)*nctemp1647);
Model->Qm=nctemp1646;
int nctemp1658=Nx;
nctemp1658=nctemp1658*Ny;
nctempfloat2 *nctemp1657;
nctemp1657=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1657->d[0]=Nx;
nctemp1657->d[1]=Ny;
nctemp1657->a=(float *)RunMalloc(sizeof(float)*nctemp1658);
Model->Lambda=nctemp1657;
int nctemp1669=Nx;
nctemp1669=nctemp1669*Ny;
nctempfloat2 *nctemp1668;
nctemp1668=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1668->d[0]=Nx;
nctemp1668->d[1]=Ny;
nctemp1668->a=(float *)RunMalloc(sizeof(float)*nctemp1669);
Model->Dlambda=nctemp1668;
int nctemp1680=Nx;
nctemp1680=nctemp1680*Ny;
nctempfloat2 *nctemp1679;
nctemp1679=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1679->d[0]=Nx;
nctemp1679->d[1]=Ny;
nctemp1679->a=(float *)RunMalloc(sizeof(float)*nctemp1680);
Model->Drhox=nctemp1679;
int nctemp1691=Nx;
nctemp1691=nctemp1691*Ny;
nctempfloat2 *nctemp1690;
nctemp1690=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1690->d[0]=Nx;
nctemp1690->d[1]=Ny;
nctemp1690->a=(float *)RunMalloc(sizeof(float)*nctemp1691);
Model->Drhoy=nctemp1690;
int nctemp1702=Nx;
nctemp1702=nctemp1702*Ny;
nctempfloat2 *nctemp1701;
nctemp1701=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1701->d[0]=Nx;
nctemp1701->d[1]=Ny;
nctemp1701->a=(float *)RunMalloc(sizeof(float)*nctemp1702);
Model->Alpha1x=nctemp1701;
int nctemp1713=Nx;
nctemp1713=nctemp1713*Ny;
nctempfloat2 *nctemp1712;
nctemp1712=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1712->d[0]=Nx;
nctemp1712->d[1]=Ny;
nctemp1712->a=(float *)RunMalloc(sizeof(float)*nctemp1713);
Model->Alpha1y=nctemp1712;
int nctemp1724=Nx;
nctemp1724=nctemp1724*Ny;
nctempfloat2 *nctemp1723;
nctemp1723=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1723->d[0]=Nx;
nctemp1723->d[1]=Ny;
nctemp1723->a=(float *)RunMalloc(sizeof(float)*nctemp1724);
Model->Alpha2x=nctemp1723;
int nctemp1735=Nx;
nctemp1735=nctemp1735*Ny;
nctempfloat2 *nctemp1734;
nctemp1734=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1734->d[0]=Nx;
nctemp1734->d[1]=Ny;
nctemp1734->a=(float *)RunMalloc(sizeof(float)*nctemp1735);
Model->Alpha2y=nctemp1734;
int nctemp1746=Nx;
nctemp1746=nctemp1746*Ny;
nctempfloat2 *nctemp1745;
nctemp1745=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1745->d[0]=Nx;
nctemp1745->d[1]=Ny;
nctemp1745->a=(float *)RunMalloc(sizeof(float)*nctemp1746);
Model->Eta1x=nctemp1745;
int nctemp1757=Nx;
nctemp1757=nctemp1757*Ny;
nctempfloat2 *nctemp1756;
nctemp1756=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1756->d[0]=Nx;
nctemp1756->d[1]=Ny;
nctemp1756->a=(float *)RunMalloc(sizeof(float)*nctemp1757);
Model->Eta1y=nctemp1756;
int nctemp1768=Nx;
nctemp1768=nctemp1768*Ny;
nctempfloat2 *nctemp1767;
nctemp1767=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1767->d[0]=Nx;
nctemp1767->d[1]=Ny;
nctemp1767->a=(float *)RunMalloc(sizeof(float)*nctemp1768);
Model->Eta2x=nctemp1767;
int nctemp1779=Nx;
nctemp1779=nctemp1779*Ny;
nctempfloat2 *nctemp1778;
nctemp1778=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1778->d[0]=Nx;
nctemp1778->d[1]=Ny;
nctemp1778->a=(float *)RunMalloc(sizeof(float)*nctemp1779);
Model->Eta2y=nctemp1778;
int nctemp1790=Nx;
nctempfloat1 *nctemp1789;
nctemp1789=(nctempfloat1*)RunMalloc(sizeof(nctempfloat1));
nctemp1789->d[0]=Nx;
nctemp1789->a=(float *)RunMalloc(sizeof(float)*nctemp1790);
Model->dx=nctemp1789;
int nctemp1799=Ny;
nctempfloat1 *nctemp1798;
nctemp1798=(nctempfloat1*)RunMalloc(sizeof(nctempfloat1));
nctemp1798->d[0]=Ny;
nctemp1798->a=(float *)RunMalloc(sizeof(float)*nctemp1799);
Model->dy=nctemp1798;
j =0;
int nctemp1806 = (j < Ny);
while(nctemp1806){
{
i =0;
int nctemp1814 = (i < Nx);
while(nctemp1814){
{
int nctemp1821=i;
if((0>i)||(i>=Model->Lambda->d[0])){
nctempstring->a="Model->Lambda";
nctempstring->d[0]=strlen("Model->Lambda")+1;;
LibeArrayex(468,nctempstring,i,0,Model->Lambda->d[0]);
}
nctemp1821=j*Model->Lambda->d[0]+nctemp1821;
if((0>j)||(j>=Model->Lambda->d[1])){
nctempstring->a="Model->Lambda";
nctempstring->d[0]=strlen("Model->Lambda")+1;;
LibeArrayex(468,nctempstring,j,1,Model->Lambda->d[1]);
}
int nctemp1831=i;
if((0>i)||(i>=rho->d[0])){
nctempstring->a="rho";
nctempstring->d[0]=strlen("rho")+1;;
LibeArrayex(468,nctempstring,i,0,rho->d[0]);
}
nctemp1831=j*rho->d[0]+nctemp1831;
if((0>j)||(j>=rho->d[1])){
nctempstring->a="rho";
nctempstring->d[0]=strlen("rho")+1;;
LibeArrayex(468,nctempstring,j,1,rho->d[1]);
}
int nctemp1835=i;
if((0>i)||(i>=vp->d[0])){
nctempstring->a="vp";
nctempstring->d[0]=strlen("vp")+1;;
LibeArrayex(468,nctempstring,i,0,vp->d[0]);
}
nctemp1835=j*vp->d[0]+nctemp1835;
if((0>j)||(j>=vp->d[1])){
nctempstring->a="vp";
nctempstring->d[0]=strlen("vp")+1;;
LibeArrayex(468,nctempstring,j,1,vp->d[1]);
}
float nctemp1838 = rho->a[nctemp1831] * vp->a[nctemp1835];
int nctemp1840=i;
if((0>i)||(i>=vp->d[0])){
nctempstring->a="vp";
nctempstring->d[0]=strlen("vp")+1;;
LibeArrayex(468,nctempstring,i,0,vp->d[0]);
}
nctemp1840=j*vp->d[0]+nctemp1840;
if((0>j)||(j>=vp->d[1])){
nctempstring->a="vp";
nctempstring->d[0]=strlen("vp")+1;;
LibeArrayex(468,nctempstring,j,1,vp->d[1]);
}
float nctemp1843 = nctemp1838 * vp->a[nctemp1840];
Model->Lambda->a[nctemp1821] =nctemp1843;
int nctemp1847=i;
if((0>i)||(i>=Model->Rho->d[0])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(469,nctempstring,i,0,Model->Rho->d[0]);
}
nctemp1847=j*Model->Rho->d[0]+nctemp1847;
if((0>j)||(j>=Model->Rho->d[1])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(469,nctempstring,j,1,Model->Rho->d[1]);
}
int nctemp1855=i;
if((0>i)||(i>=rho->d[0])){
nctempstring->a="rho";
nctempstring->d[0]=strlen("rho")+1;;
LibeArrayex(469,nctempstring,i,0,rho->d[0]);
}
nctemp1855=j*rho->d[0]+nctemp1855;
if((0>j)||(j>=rho->d[1])){
nctempstring->a="rho";
nctempstring->d[0]=strlen("rho")+1;;
LibeArrayex(469,nctempstring,j,1,rho->d[1]);
}
float nctemp1858 = 1.0 / rho->a[nctemp1855];
Model->Rho->a[nctemp1847] =nctemp1858;
int nctemp1862=i;
if((0>i)||(i>=Model->Ql->d[0])){
nctempstring->a="Model->Ql";
nctempstring->d[0]=strlen("Model->Ql")+1;;
LibeArrayex(470,nctempstring,i,0,Model->Ql->d[0]);
}
nctemp1862=j*Model->Ql->d[0]+nctemp1862;
if((0>j)||(j>=Model->Ql->d[1])){
nctempstring->a="Model->Ql";
nctempstring->d[0]=strlen("Model->Ql")+1;;
LibeArrayex(470,nctempstring,j,1,Model->Ql->d[1]);
}
int nctemp1866=i;
if((0>i)||(i>=Qp->d[0])){
nctempstring->a="Qp";
nctempstring->d[0]=strlen("Qp")+1;;
LibeArrayex(470,nctempstring,i,0,Qp->d[0]);
}
nctemp1866=j*Qp->d[0]+nctemp1866;
if((0>j)||(j>=Qp->d[1])){
nctempstring->a="Qp";
nctempstring->d[0]=strlen("Qp")+1;;
LibeArrayex(470,nctempstring,j,1,Qp->d[1]);
}
Model->Ql->a[nctemp1862] =Qp->a[nctemp1866];
int nctemp1872=i;
if((0>i)||(i>=Model->Qm->d[0])){
nctempstring->a="Model->Qm";
nctempstring->d[0]=strlen("Model->Qm")+1;;
LibeArrayex(471,nctempstring,i,0,Model->Qm->d[0]);
}
nctemp1872=j*Model->Qm->d[0]+nctemp1872;
if((0>j)||(j>=Model->Qm->d[1])){
nctempstring->a="Model->Qm";
nctempstring->d[0]=strlen("Model->Qm")+1;;
LibeArrayex(471,nctempstring,j,1,Model->Qm->d[1]);
}
int nctemp1876=i;
if((0>i)||(i>=Qr->d[0])){
nctempstring->a="Qr";
nctempstring->d[0]=strlen("Qr")+1;;
LibeArrayex(471,nctempstring,i,0,Qr->d[0]);
}
nctemp1876=j*Qr->d[0]+nctemp1876;
if((0>j)||(j>=Qr->d[1])){
nctempstring->a="Qr";
nctempstring->d[0]=strlen("Qr")+1;;
LibeArrayex(471,nctempstring,j,1,Qr->d[1]);
}
Model->Qm->a[nctemp1872] =Qr->a[nctemp1876];
}
int nctemp1887 = i + 1;
i =nctemp1887;
int nctemp1888 = (i < Nx);
nctemp1814=nctemp1888;
}
}
int nctemp1900 = j + 1;
j =nctemp1900;
int nctemp1901 = (j < Ny);
nctemp1806=nctemp1901;
}
nctempfloat1* nctemp1906= Model->dx;
float nctemp1909= Model->Dx;
int nctemp1911= Model->Nb;
int nctemp1913=Modeld(nctemp1906,nctemp1909,nctemp1911);
nctempfloat1* nctemp1915= Model->dy;
float nctemp1918= Model->Dx;
int nctemp1920= Model->Nb;
int nctemp1922=Modeld(nctemp1915,nctemp1918,nctemp1920);
struct model* nctemp1924= Model;
int nctemp1926=Modelalphamax(nctemp1924);
struct model* nctemp1928= Model;
int nctemp1930=Modelthetamax(nctemp1928);
j =0;
int nctemp1935 = (j < Ny);
while(nctemp1935){
{
i =0;
int nctemp1943 = (i < Nx);
while(nctemp1943){
{
int nctemp1950=i;
if((0>i)||(i>=Model->Dlambda->d[0])){
nctempstring->a="Model->Dlambda";
nctempstring->d[0]=strlen("Model->Dlambda")+1;;
LibeArrayex(489,nctempstring,i,0,Model->Dlambda->d[0]);
}
nctemp1950=j*Model->Dlambda->d[0]+nctemp1950;
if((0>j)||(j>=Model->Dlambda->d[1])){
nctempstring->a="Model->Dlambda";
nctempstring->d[0]=strlen("Model->Dlambda")+1;;
LibeArrayex(489,nctempstring,j,1,Model->Dlambda->d[1]);
}
int nctemp1954=i;
if((0>i)||(i>=Model->Lambda->d[0])){
nctempstring->a="Model->Lambda";
nctempstring->d[0]=strlen("Model->Lambda")+1;;
LibeArrayex(489,nctempstring,i,0,Model->Lambda->d[0]);
}
nctemp1954=j*Model->Lambda->d[0]+nctemp1954;
if((0>j)||(j>=Model->Lambda->d[1])){
nctempstring->a="Model->Lambda";
nctempstring->d[0]=strlen("Model->Lambda")+1;;
LibeArrayex(489,nctempstring,j,1,Model->Lambda->d[1]);
}
Model->Dlambda->a[nctemp1950] =Model->Lambda->a[nctemp1954];
int nctemp1960=i;
if((0>i)||(i>=Model->Drhox->d[0])){
nctempstring->a="Model->Drhox";
nctempstring->d[0]=strlen("Model->Drhox")+1;;
LibeArrayex(490,nctempstring,i,0,Model->Drhox->d[0]);
}
nctemp1960=j*Model->Drhox->d[0]+nctemp1960;
if((0>j)||(j>=Model->Drhox->d[1])){
nctempstring->a="Model->Drhox";
nctempstring->d[0]=strlen("Model->Drhox")+1;;
LibeArrayex(490,nctempstring,j,1,Model->Drhox->d[1]);
}
int nctemp1964=i;
if((0>i)||(i>=Model->Rho->d[0])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(490,nctempstring,i,0,Model->Rho->d[0]);
}
nctemp1964=j*Model->Rho->d[0]+nctemp1964;
if((0>j)||(j>=Model->Rho->d[1])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(490,nctempstring,j,1,Model->Rho->d[1]);
}
Model->Drhox->a[nctemp1960] =Model->Rho->a[nctemp1964];
int nctemp1970=i;
if((0>i)||(i>=Model->Drhoy->d[0])){
nctempstring->a="Model->Drhoy";
nctempstring->d[0]=strlen("Model->Drhoy")+1;;
LibeArrayex(491,nctempstring,i,0,Model->Drhoy->d[0]);
}
nctemp1970=j*Model->Drhoy->d[0]+nctemp1970;
if((0>j)||(j>=Model->Drhoy->d[1])){
nctempstring->a="Model->Drhoy";
nctempstring->d[0]=strlen("Model->Drhoy")+1;;
LibeArrayex(491,nctempstring,j,1,Model->Drhoy->d[1]);
}
int nctemp1974=i;
if((0>i)||(i>=Model->Rho->d[0])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(491,nctempstring,i,0,Model->Rho->d[0]);
}
nctemp1974=j*Model->Rho->d[0]+nctemp1974;
if((0>j)||(j>=Model->Rho->d[1])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(491,nctempstring,j,1,Model->Rho->d[1]);
}
Model->Drhoy->a[nctemp1970] =Model->Rho->a[nctemp1974];
}
int nctemp1985 = i + 1;
i =nctemp1985;
int nctemp1986 = (i < Nx);
nctemp1943=nctemp1986;
}
}
int nctemp1998 = j + 1;
j =nctemp1998;
int nctemp1999 = (j < Ny);
nctemp1935=nctemp1999;
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
int nctemp2016 = (j < Ny);
while(nctemp2016){
{
i =0;
int nctemp2024 = (i < Nx);
while(nctemp2024){
{
Qmin =1.1;
float nctemp2040 = Qmin / Model->W0;
tau0min =nctemp2040;
float nctemp2049 = 1.0 / tau0min;
tau0min =nctemp2049;
int nctemp2054=Model->Nb;
if((0>Model->Nb)||(Model->Nb>=Model->Ql->d[0])){
nctempstring->a="Model->Ql";
nctempstring->d[0]=strlen("Model->Ql")+1;;
LibeArrayex(529,nctempstring,Model->Nb,0,Model->Ql->d[0]);
}
nctemp2054=j*Model->Ql->d[0]+nctemp2054;
if((0>j)||(j>=Model->Ql->d[1])){
nctempstring->a="Model->Ql";
nctempstring->d[0]=strlen("Model->Ql")+1;;
LibeArrayex(529,nctempstring,j,1,Model->Ql->d[1]);
}
Qmax =Model->Ql->a[nctemp2054];
float nctemp2065 = Qmax / Model->W0;
tau0max =nctemp2065;
float nctemp2074 = 1.0 / tau0max;
tau0max =nctemp2074;
float nctemp2090 = tau0max - tau0min;
int nctemp2092=i;
if((0>i)||(i>=Model->dx->d[0])){
nctempstring->a="Model->dx";
nctempstring->d[0]=strlen("Model->dx")+1;;
LibeArrayex(534,nctempstring,i,0,Model->dx->d[0]);
}
float nctemp2094 = nctemp2090 * Model->dx->a[nctemp2092];
float nctemp2095 = tau0min + nctemp2094;
tau0x =nctemp2095;
int nctemp2100=i;
if((0>i)||(i>=Model->Ql->d[0])){
nctempstring->a="Model->Ql";
nctempstring->d[0]=strlen("Model->Ql")+1;;
LibeArrayex(536,nctempstring,i,0,Model->Ql->d[0]);
}
nctemp2100=Model->Nb*Model->Ql->d[0]+nctemp2100;
if((0>Model->Nb)||(Model->Nb>=Model->Ql->d[1])){
nctempstring->a="Model->Ql";
nctempstring->d[0]=strlen("Model->Ql")+1;;
LibeArrayex(536,nctempstring,Model->Nb,1,Model->Ql->d[1]);
}
Qmax =Model->Ql->a[nctemp2100];
float nctemp2111 = Qmax / Model->W0;
tau0max =nctemp2111;
float nctemp2120 = 1.0 / tau0max;
tau0max =nctemp2120;
float nctemp2136 = tau0max - tau0min;
int nctemp2138=j;
if((0>j)||(j>=Model->dy->d[0])){
nctempstring->a="Model->dy";
nctempstring->d[0]=strlen("Model->dy")+1;;
LibeArrayex(541,nctempstring,j,0,Model->dy->d[0]);
}
float nctemp2140 = nctemp2136 * Model->dy->a[nctemp2138];
float nctemp2141 = tau0min + nctemp2140;
tau0y =nctemp2141;
int nctemp2146=i;
if((0>i)||(i>=Model->dx->d[0])){
nctempstring->a="Model->dx";
nctempstring->d[0]=strlen("Model->dx")+1;;
LibeArrayex(546,nctempstring,i,0,Model->dx->d[0]);
}
argx =Model->dx->a[nctemp2146];
int nctemp2152=j;
if((0>j)||(j>=Model->dy->d[0])){
nctempstring->a="Model->dy";
nctempstring->d[0]=strlen("Model->dy")+1;;
LibeArrayex(547,nctempstring,j,0,Model->dy->d[0]);
}
argy =Model->dy->a[nctemp2152];
int nctemp2157=i;
if((0>i)||(i>=Model->Alpha1x->d[0])){
nctempstring->a="Model->Alpha1x";
nctempstring->d[0]=strlen("Model->Alpha1x")+1;;
LibeArrayex(550,nctempstring,i,0,Model->Alpha1x->d[0]);
}
nctemp2157=j*Model->Alpha1x->d[0]+nctemp2157;
if((0>j)||(j>=Model->Alpha1x->d[1])){
nctempstring->a="Model->Alpha1x";
nctempstring->d[0]=strlen("Model->Alpha1x")+1;;
LibeArrayex(550,nctempstring,j,1,Model->Alpha1x->d[1]);
}
float nctemp2165= -argx;
float nctemp2164= nctemp2165;
float nctemp2166=LibeExp(nctemp2164);
float nctemp2171= -Model->Dt;
float nctemp2173 = nctemp2171 * tau0x;
float nctemp2168= nctemp2173;
float nctemp2174=LibeExp(nctemp2168);
float nctemp2175 = nctemp2166 * nctemp2174;
Model->Alpha1x->a[nctemp2157] =nctemp2175;
int nctemp2179=i;
if((0>i)||(i>=Model->Alpha1y->d[0])){
nctempstring->a="Model->Alpha1y";
nctempstring->d[0]=strlen("Model->Alpha1y")+1;;
LibeArrayex(551,nctempstring,i,0,Model->Alpha1y->d[0]);
}
nctemp2179=j*Model->Alpha1y->d[0]+nctemp2179;
if((0>j)||(j>=Model->Alpha1y->d[1])){
nctempstring->a="Model->Alpha1y";
nctempstring->d[0]=strlen("Model->Alpha1y")+1;;
LibeArrayex(551,nctempstring,j,1,Model->Alpha1y->d[1]);
}
float nctemp2187= -argy;
float nctemp2186= nctemp2187;
float nctemp2188=LibeExp(nctemp2186);
float nctemp2193= -Model->Dt;
float nctemp2195 = nctemp2193 * tau0y;
float nctemp2190= nctemp2195;
float nctemp2196=LibeExp(nctemp2190);
float nctemp2197 = nctemp2188 * nctemp2196;
Model->Alpha1y->a[nctemp2179] =nctemp2197;
int nctemp2201=i;
if((0>i)||(i>=Model->Alpha2x->d[0])){
nctempstring->a="Model->Alpha2x";
nctempstring->d[0]=strlen("Model->Alpha2x")+1;;
LibeArrayex(552,nctempstring,i,0,Model->Alpha2x->d[0]);
}
nctemp2201=j*Model->Alpha2x->d[0]+nctemp2201;
if((0>j)||(j>=Model->Alpha2x->d[1])){
nctempstring->a="Model->Alpha2x";
nctempstring->d[0]=strlen("Model->Alpha2x")+1;;
LibeArrayex(552,nctempstring,j,1,Model->Alpha2x->d[1]);
}
float nctemp2207= -Model->Dt;
float nctemp2209 = nctemp2207 * tau0x;
Model->Alpha2x->a[nctemp2201] =nctemp2209;
int nctemp2213=i;
if((0>i)||(i>=Model->Alpha2y->d[0])){
nctempstring->a="Model->Alpha2y";
nctempstring->d[0]=strlen("Model->Alpha2y")+1;;
LibeArrayex(553,nctempstring,i,0,Model->Alpha2y->d[0]);
}
nctemp2213=j*Model->Alpha2y->d[0]+nctemp2213;
if((0>j)||(j>=Model->Alpha2y->d[1])){
nctempstring->a="Model->Alpha2y";
nctempstring->d[0]=strlen("Model->Alpha2y")+1;;
LibeArrayex(553,nctempstring,j,1,Model->Alpha2y->d[1]);
}
float nctemp2219= -Model->Dt;
float nctemp2221 = nctemp2219 * tau0y;
Model->Alpha2y->a[nctemp2213] =nctemp2221;
}
int nctemp2230 = i + 1;
i =nctemp2230;
int nctemp2231 = (i < Nx);
nctemp2024=nctemp2231;
}
}
int nctemp2243 = j + 1;
j =nctemp2243;
int nctemp2244 = (j < Ny);
nctemp2016=nctemp2244;
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
int nctemp2261 = (j < Ny);
while(nctemp2261){
{
i =0;
int nctemp2269 = (i < Nx);
while(nctemp2269){
{
Qmin =1.1;
float nctemp2285 = Qmin / Model->W0;
tau0min =nctemp2285;
float nctemp2294 = 1.0 / tau0min;
tau0min =nctemp2294;
int nctemp2299=Model->Nb;
if((0>Model->Nb)||(Model->Nb>=Model->Qm->d[0])){
nctempstring->a="Model->Qm";
nctempstring->d[0]=strlen("Model->Qm")+1;;
LibeArrayex(592,nctempstring,Model->Nb,0,Model->Qm->d[0]);
}
nctemp2299=j*Model->Qm->d[0]+nctemp2299;
if((0>j)||(j>=Model->Qm->d[1])){
nctempstring->a="Model->Qm";
nctempstring->d[0]=strlen("Model->Qm")+1;;
LibeArrayex(592,nctempstring,j,1,Model->Qm->d[1]);
}
Qmax =Model->Qm->a[nctemp2299];
float nctemp2310 = Qmax / Model->W0;
tau0max =nctemp2310;
float nctemp2319 = 1.0 / tau0max;
tau0max =nctemp2319;
float nctemp2335 = tau0max - tau0min;
int nctemp2337=i;
if((0>i)||(i>=Model->dx->d[0])){
nctempstring->a="Model->dx";
nctempstring->d[0]=strlen("Model->dx")+1;;
LibeArrayex(597,nctempstring,i,0,Model->dx->d[0]);
}
float nctemp2339 = nctemp2335 * Model->dx->a[nctemp2337];
float nctemp2340 = tau0min + nctemp2339;
tau0x =nctemp2340;
int nctemp2345=i;
if((0>i)||(i>=Model->Qm->d[0])){
nctempstring->a="Model->Qm";
nctempstring->d[0]=strlen("Model->Qm")+1;;
LibeArrayex(599,nctempstring,i,0,Model->Qm->d[0]);
}
nctemp2345=Model->Nb*Model->Qm->d[0]+nctemp2345;
if((0>Model->Nb)||(Model->Nb>=Model->Qm->d[1])){
nctempstring->a="Model->Qm";
nctempstring->d[0]=strlen("Model->Qm")+1;;
LibeArrayex(599,nctempstring,Model->Nb,1,Model->Qm->d[1]);
}
Qmax =Model->Qm->a[nctemp2345];
float nctemp2356 = Qmax / Model->W0;
tau0max =nctemp2356;
float nctemp2365 = 1.0 / tau0max;
tau0max =nctemp2365;
float nctemp2381 = tau0max - tau0min;
int nctemp2383=j;
if((0>j)||(j>=Model->dy->d[0])){
nctempstring->a="Model->dy";
nctempstring->d[0]=strlen("Model->dy")+1;;
LibeArrayex(604,nctempstring,j,0,Model->dy->d[0]);
}
float nctemp2385 = nctemp2381 * Model->dy->a[nctemp2383];
float nctemp2386 = tau0min + nctemp2385;
tau0y =nctemp2386;
int nctemp2391=i;
if((0>i)||(i>=Model->dx->d[0])){
nctempstring->a="Model->dx";
nctempstring->d[0]=strlen("Model->dx")+1;;
LibeArrayex(609,nctempstring,i,0,Model->dx->d[0]);
}
argx =Model->dx->a[nctemp2391];
int nctemp2397=j;
if((0>j)||(j>=Model->dy->d[0])){
nctempstring->a="Model->dy";
nctempstring->d[0]=strlen("Model->dy")+1;;
LibeArrayex(610,nctempstring,j,0,Model->dy->d[0]);
}
argy =Model->dy->a[nctemp2397];
int nctemp2402=i;
if((0>i)||(i>=Model->Eta1x->d[0])){
nctempstring->a="Model->Eta1x";
nctempstring->d[0]=strlen("Model->Eta1x")+1;;
LibeArrayex(613,nctempstring,i,0,Model->Eta1x->d[0]);
}
nctemp2402=j*Model->Eta1x->d[0]+nctemp2402;
if((0>j)||(j>=Model->Eta1x->d[1])){
nctempstring->a="Model->Eta1x";
nctempstring->d[0]=strlen("Model->Eta1x")+1;;
LibeArrayex(613,nctempstring,j,1,Model->Eta1x->d[1]);
}
float nctemp2410= -argx;
float nctemp2409= nctemp2410;
float nctemp2411=LibeExp(nctemp2409);
float nctemp2416= -Model->Dt;
float nctemp2418 = nctemp2416 * tau0x;
float nctemp2413= nctemp2418;
float nctemp2419=LibeExp(nctemp2413);
float nctemp2420 = nctemp2411 * nctemp2419;
Model->Eta1x->a[nctemp2402] =nctemp2420;
int nctemp2424=i;
if((0>i)||(i>=Model->Eta1y->d[0])){
nctempstring->a="Model->Eta1y";
nctempstring->d[0]=strlen("Model->Eta1y")+1;;
LibeArrayex(614,nctempstring,i,0,Model->Eta1y->d[0]);
}
nctemp2424=j*Model->Eta1y->d[0]+nctemp2424;
if((0>j)||(j>=Model->Eta1y->d[1])){
nctempstring->a="Model->Eta1y";
nctempstring->d[0]=strlen("Model->Eta1y")+1;;
LibeArrayex(614,nctempstring,j,1,Model->Eta1y->d[1]);
}
float nctemp2432= -argy;
float nctemp2431= nctemp2432;
float nctemp2433=LibeExp(nctemp2431);
float nctemp2438= -Model->Dt;
float nctemp2440 = nctemp2438 * tau0y;
float nctemp2435= nctemp2440;
float nctemp2441=LibeExp(nctemp2435);
float nctemp2442 = nctemp2433 * nctemp2441;
Model->Eta1y->a[nctemp2424] =nctemp2442;
int nctemp2446=i;
if((0>i)||(i>=Model->Eta2x->d[0])){
nctempstring->a="Model->Eta2x";
nctempstring->d[0]=strlen("Model->Eta2x")+1;;
LibeArrayex(615,nctempstring,i,0,Model->Eta2x->d[0]);
}
nctemp2446=j*Model->Eta2x->d[0]+nctemp2446;
if((0>j)||(j>=Model->Eta2x->d[1])){
nctempstring->a="Model->Eta2x";
nctempstring->d[0]=strlen("Model->Eta2x")+1;;
LibeArrayex(615,nctempstring,j,1,Model->Eta2x->d[1]);
}
float nctemp2452= -Model->Dt;
float nctemp2454 = nctemp2452 * tau0x;
Model->Eta2x->a[nctemp2446] =nctemp2454;
int nctemp2458=i;
if((0>i)||(i>=Model->Eta2y->d[0])){
nctempstring->a="Model->Eta2y";
nctempstring->d[0]=strlen("Model->Eta2y")+1;;
LibeArrayex(616,nctempstring,i,0,Model->Eta2y->d[0]);
}
nctemp2458=j*Model->Eta2y->d[0]+nctemp2458;
if((0>j)||(j>=Model->Eta2y->d[1])){
nctempstring->a="Model->Eta2y";
nctempstring->d[0]=strlen("Model->Eta2y")+1;;
LibeArrayex(616,nctempstring,j,1,Model->Eta2y->d[1]);
}
float nctemp2464= -Model->Dt;
float nctemp2466 = nctemp2464 * tau0y;
Model->Eta2y->a[nctemp2458] =nctemp2466;
}
int nctemp2475 = i + 1;
i =nctemp2475;
int nctemp2476 = (i < Nx);
nctemp2269=nctemp2476;
}
}
int nctemp2488 = j + 1;
j =nctemp2488;
int nctemp2489 = (j < Ny);
nctemp2261=nctemp2489;
}
return 1;
}
struct model* Modelsls (nctempfloat2 *vp,nctempfloat2 *vs,nctempfloat2 *rho,nctempfloat2 *Ql,nctempfloat2 *Qm,float Dx,float Dt,float W0,int Nb)
{
struct model* Model;
int Nx;
int Ny;
int i;
int j;
struct model *nctemp2498=(struct model*)RunMalloc(sizeof(struct model));
Model =nctemp2498;
Model->Dx =Dx;
Model->Dt =Dt;
int nctemp2512=vp->d[0];Model->Nx =nctemp2512;
int nctemp2520=vp->d[1];Model->Ny =nctemp2520;
Model->Nb =Nb;
Model->W0 =W0;
Nx =Model->Nx;
Ny =Model->Ny;
int nctemp2546=Nx;
nctemp2546=nctemp2546*Ny;
nctempfloat2 *nctemp2545;
nctemp2545=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp2545->d[0]=Nx;
nctemp2545->d[1]=Ny;
nctemp2545->a=(float *)RunMalloc(sizeof(float)*nctemp2546);
Model->Rho=nctemp2545;
int nctemp2557=Nx;
nctemp2557=nctemp2557*Ny;
nctempfloat2 *nctemp2556;
nctemp2556=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp2556->d[0]=Nx;
nctemp2556->d[1]=Ny;
nctemp2556->a=(float *)RunMalloc(sizeof(float)*nctemp2557);
Model->Ql=nctemp2556;
int nctemp2568=Nx;
nctemp2568=nctemp2568*Ny;
nctempfloat2 *nctemp2567;
nctemp2567=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp2567->d[0]=Nx;
nctemp2567->d[1]=Ny;
nctemp2567->a=(float *)RunMalloc(sizeof(float)*nctemp2568);
Model->Qm=nctemp2567;
int nctemp2579=Nx;
nctemp2579=nctemp2579*Ny;
nctempfloat2 *nctemp2578;
nctemp2578=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp2578->d[0]=Nx;
nctemp2578->d[1]=Ny;
nctemp2578->a=(float *)RunMalloc(sizeof(float)*nctemp2579);
Model->Mu=nctemp2578;
int nctemp2590=Nx;
nctemp2590=nctemp2590*Ny;
nctempfloat2 *nctemp2589;
nctemp2589=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp2589->d[0]=Nx;
nctemp2589->d[1]=Ny;
nctemp2589->a=(float *)RunMalloc(sizeof(float)*nctemp2590);
Model->Lambda=nctemp2589;
int nctemp2601=Nx;
nctemp2601=nctemp2601*Ny;
nctempfloat2 *nctemp2600;
nctemp2600=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp2600->d[0]=Nx;
nctemp2600->d[1]=Ny;
nctemp2600->a=(float *)RunMalloc(sizeof(float)*nctemp2601);
Model->Dlambda=nctemp2600;
int nctemp2612=Nx;
nctemp2612=nctemp2612*Ny;
nctempfloat2 *nctemp2611;
nctemp2611=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp2611->d[0]=Nx;
nctemp2611->d[1]=Ny;
nctemp2611->a=(float *)RunMalloc(sizeof(float)*nctemp2612);
Model->Dmu=nctemp2611;
int nctemp2623=Nx;
nctemp2623=nctemp2623*Ny;
nctempfloat2 *nctemp2622;
nctemp2622=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp2622->d[0]=Nx;
nctemp2622->d[1]=Ny;
nctemp2622->a=(float *)RunMalloc(sizeof(float)*nctemp2623);
Model->Dmu=nctemp2622;
int nctemp2634=Nx;
nctemp2634=nctemp2634*Ny;
nctempfloat2 *nctemp2633;
nctemp2633=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp2633->d[0]=Nx;
nctemp2633->d[1]=Ny;
nctemp2633->a=(float *)RunMalloc(sizeof(float)*nctemp2634);
Model->Drhox=nctemp2633;
int nctemp2645=Nx;
nctemp2645=nctemp2645*Ny;
nctempfloat2 *nctemp2644;
nctemp2644=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp2644->d[0]=Nx;
nctemp2644->d[1]=Ny;
nctemp2644->a=(float *)RunMalloc(sizeof(float)*nctemp2645);
Model->Drhoy=nctemp2644;
int nctemp2656=Nx;
nctemp2656=nctemp2656*Ny;
nctempfloat2 *nctemp2655;
nctemp2655=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp2655->d[0]=Nx;
nctemp2655->d[1]=Ny;
nctemp2655->a=(float *)RunMalloc(sizeof(float)*nctemp2656);
Model->Alpha1x=nctemp2655;
int nctemp2667=Nx;
nctemp2667=nctemp2667*Ny;
nctempfloat2 *nctemp2666;
nctemp2666=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp2666->d[0]=Nx;
nctemp2666->d[1]=Ny;
nctemp2666->a=(float *)RunMalloc(sizeof(float)*nctemp2667);
Model->Alpha1y=nctemp2666;
int nctemp2678=Nx;
nctemp2678=nctemp2678*Ny;
nctempfloat2 *nctemp2677;
nctemp2677=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp2677->d[0]=Nx;
nctemp2677->d[1]=Ny;
nctemp2677->a=(float *)RunMalloc(sizeof(float)*nctemp2678);
Model->Alpha2x=nctemp2677;
int nctemp2689=Nx;
nctemp2689=nctemp2689*Ny;
nctempfloat2 *nctemp2688;
nctemp2688=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp2688->d[0]=Nx;
nctemp2688->d[1]=Ny;
nctemp2688->a=(float *)RunMalloc(sizeof(float)*nctemp2689);
Model->Alpha2y=nctemp2688;
int nctemp2700=Nx;
nctemp2700=nctemp2700*Ny;
nctempfloat2 *nctemp2699;
nctemp2699=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp2699->d[0]=Nx;
nctemp2699->d[1]=Ny;
nctemp2699->a=(float *)RunMalloc(sizeof(float)*nctemp2700);
Model->Beta1x=nctemp2699;
int nctemp2711=Nx;
nctemp2711=nctemp2711*Ny;
nctempfloat2 *nctemp2710;
nctemp2710=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp2710->d[0]=Nx;
nctemp2710->d[1]=Ny;
nctemp2710->a=(float *)RunMalloc(sizeof(float)*nctemp2711);
Model->Beta1y=nctemp2710;
int nctemp2722=Nx;
nctemp2722=nctemp2722*Ny;
nctempfloat2 *nctemp2721;
nctemp2721=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp2721->d[0]=Nx;
nctemp2721->d[1]=Ny;
nctemp2721->a=(float *)RunMalloc(sizeof(float)*nctemp2722);
Model->Beta2x=nctemp2721;
int nctemp2733=Nx;
nctemp2733=nctemp2733*Ny;
nctempfloat2 *nctemp2732;
nctemp2732=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp2732->d[0]=Nx;
nctemp2732->d[1]=Ny;
nctemp2732->a=(float *)RunMalloc(sizeof(float)*nctemp2733);
Model->Beta2y=nctemp2732;
int nctemp2744=Nx;
nctemp2744=nctemp2744*Ny;
nctempfloat2 *nctemp2743;
nctemp2743=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp2743->d[0]=Nx;
nctemp2743->d[1]=Ny;
nctemp2743->a=(float *)RunMalloc(sizeof(float)*nctemp2744);
Model->Eta1x=nctemp2743;
int nctemp2755=Nx;
nctemp2755=nctemp2755*Ny;
nctempfloat2 *nctemp2754;
nctemp2754=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp2754->d[0]=Nx;
nctemp2754->d[1]=Ny;
nctemp2754->a=(float *)RunMalloc(sizeof(float)*nctemp2755);
Model->Eta1y=nctemp2754;
int nctemp2766=Nx;
nctemp2766=nctemp2766*Ny;
nctempfloat2 *nctemp2765;
nctemp2765=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp2765->d[0]=Nx;
nctemp2765->d[1]=Ny;
nctemp2765->a=(float *)RunMalloc(sizeof(float)*nctemp2766);
Model->Eta2x=nctemp2765;
int nctemp2777=Nx;
nctemp2777=nctemp2777*Ny;
nctempfloat2 *nctemp2776;
nctemp2776=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp2776->d[0]=Nx;
nctemp2776->d[1]=Ny;
nctemp2776->a=(float *)RunMalloc(sizeof(float)*nctemp2777);
Model->Eta2y=nctemp2776;
int nctemp2788=Nx;
nctempfloat1 *nctemp2787;
nctemp2787=(nctempfloat1*)RunMalloc(sizeof(nctempfloat1));
nctemp2787->d[0]=Nx;
nctemp2787->a=(float *)RunMalloc(sizeof(float)*nctemp2788);
Model->dx=nctemp2787;
int nctemp2797=Ny;
nctempfloat1 *nctemp2796;
nctemp2796=(nctempfloat1*)RunMalloc(sizeof(nctempfloat1));
nctemp2796->d[0]=Ny;
nctemp2796->a=(float *)RunMalloc(sizeof(float)*nctemp2797);
Model->dy=nctemp2796;
j =0;
int nctemp2804 = (j < Ny);
while(nctemp2804){
{
i =0;
int nctemp2812 = (i < Nx);
while(nctemp2812){
{
int nctemp2819=i;
if((0>i)||(i>=Model->Rho->d[0])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(790,nctempstring,i,0,Model->Rho->d[0]);
}
nctemp2819=j*Model->Rho->d[0]+nctemp2819;
if((0>j)||(j>=Model->Rho->d[1])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(790,nctempstring,j,1,Model->Rho->d[1]);
}
int nctemp2827=i;
if((0>i)||(i>=rho->d[0])){
nctempstring->a="rho";
nctempstring->d[0]=strlen("rho")+1;;
LibeArrayex(790,nctempstring,i,0,rho->d[0]);
}
nctemp2827=j*rho->d[0]+nctemp2827;
if((0>j)||(j>=rho->d[1])){
nctempstring->a="rho";
nctempstring->d[0]=strlen("rho")+1;;
LibeArrayex(790,nctempstring,j,1,rho->d[1]);
}
float nctemp2830 = 1.0 / rho->a[nctemp2827];
Model->Rho->a[nctemp2819] =nctemp2830;
int nctemp2834=i;
if((0>i)||(i>=Model->Ql->d[0])){
nctempstring->a="Model->Ql";
nctempstring->d[0]=strlen("Model->Ql")+1;;
LibeArrayex(791,nctempstring,i,0,Model->Ql->d[0]);
}
nctemp2834=j*Model->Ql->d[0]+nctemp2834;
if((0>j)||(j>=Model->Ql->d[1])){
nctempstring->a="Model->Ql";
nctempstring->d[0]=strlen("Model->Ql")+1;;
LibeArrayex(791,nctempstring,j,1,Model->Ql->d[1]);
}
int nctemp2838=i;
if((0>i)||(i>=Ql->d[0])){
nctempstring->a="Ql";
nctempstring->d[0]=strlen("Ql")+1;;
LibeArrayex(791,nctempstring,i,0,Ql->d[0]);
}
nctemp2838=j*Ql->d[0]+nctemp2838;
if((0>j)||(j>=Ql->d[1])){
nctempstring->a="Ql";
nctempstring->d[0]=strlen("Ql")+1;;
LibeArrayex(791,nctempstring,j,1,Ql->d[1]);
}
Model->Ql->a[nctemp2834] =Ql->a[nctemp2838];
int nctemp2844=i;
if((0>i)||(i>=Model->Qm->d[0])){
nctempstring->a="Model->Qm";
nctempstring->d[0]=strlen("Model->Qm")+1;;
LibeArrayex(792,nctempstring,i,0,Model->Qm->d[0]);
}
nctemp2844=j*Model->Qm->d[0]+nctemp2844;
if((0>j)||(j>=Model->Qm->d[1])){
nctempstring->a="Model->Qm";
nctempstring->d[0]=strlen("Model->Qm")+1;;
LibeArrayex(792,nctempstring,j,1,Model->Qm->d[1]);
}
int nctemp2848=i;
if((0>i)||(i>=Qm->d[0])){
nctempstring->a="Qm";
nctempstring->d[0]=strlen("Qm")+1;;
LibeArrayex(792,nctempstring,i,0,Qm->d[0]);
}
nctemp2848=j*Qm->d[0]+nctemp2848;
if((0>j)||(j>=Qm->d[1])){
nctempstring->a="Qm";
nctempstring->d[0]=strlen("Qm")+1;;
LibeArrayex(792,nctempstring,j,1,Qm->d[1]);
}
Model->Qm->a[nctemp2844] =Qm->a[nctemp2848];
int nctemp2854=i;
if((0>i)||(i>=Model->Mu->d[0])){
nctempstring->a="Model->Mu";
nctempstring->d[0]=strlen("Model->Mu")+1;;
LibeArrayex(793,nctempstring,i,0,Model->Mu->d[0]);
}
nctemp2854=j*Model->Mu->d[0]+nctemp2854;
if((0>j)||(j>=Model->Mu->d[1])){
nctempstring->a="Model->Mu";
nctempstring->d[0]=strlen("Model->Mu")+1;;
LibeArrayex(793,nctempstring,j,1,Model->Mu->d[1]);
}
int nctemp2864=i;
if((0>i)||(i>=rho->d[0])){
nctempstring->a="rho";
nctempstring->d[0]=strlen("rho")+1;;
LibeArrayex(793,nctempstring,i,0,rho->d[0]);
}
nctemp2864=j*rho->d[0]+nctemp2864;
if((0>j)||(j>=rho->d[1])){
nctempstring->a="rho";
nctempstring->d[0]=strlen("rho")+1;;
LibeArrayex(793,nctempstring,j,1,rho->d[1]);
}
int nctemp2868=i;
if((0>i)||(i>=vs->d[0])){
nctempstring->a="vs";
nctempstring->d[0]=strlen("vs")+1;;
LibeArrayex(793,nctempstring,i,0,vs->d[0]);
}
nctemp2868=j*vs->d[0]+nctemp2868;
if((0>j)||(j>=vs->d[1])){
nctempstring->a="vs";
nctempstring->d[0]=strlen("vs")+1;;
LibeArrayex(793,nctempstring,j,1,vs->d[1]);
}
float nctemp2871 = rho->a[nctemp2864] * vs->a[nctemp2868];
int nctemp2873=i;
if((0>i)||(i>=vs->d[0])){
nctempstring->a="vs";
nctempstring->d[0]=strlen("vs")+1;;
LibeArrayex(793,nctempstring,i,0,vs->d[0]);
}
nctemp2873=j*vs->d[0]+nctemp2873;
if((0>j)||(j>=vs->d[1])){
nctempstring->a="vs";
nctempstring->d[0]=strlen("vs")+1;;
LibeArrayex(793,nctempstring,j,1,vs->d[1]);
}
float nctemp2876 = nctemp2871 * vs->a[nctemp2873];
Model->Mu->a[nctemp2854] =nctemp2876;
int nctemp2880=i;
if((0>i)||(i>=Model->Lambda->d[0])){
nctempstring->a="Model->Lambda";
nctempstring->d[0]=strlen("Model->Lambda")+1;;
LibeArrayex(794,nctempstring,i,0,Model->Lambda->d[0]);
}
nctemp2880=j*Model->Lambda->d[0]+nctemp2880;
if((0>j)||(j>=Model->Lambda->d[1])){
nctempstring->a="Model->Lambda";
nctempstring->d[0]=strlen("Model->Lambda")+1;;
LibeArrayex(794,nctempstring,j,1,Model->Lambda->d[1]);
}
int nctemp2887=i;
if((0>i)||(i>=rho->d[0])){
nctempstring->a="rho";
nctempstring->d[0]=strlen("rho")+1;;
LibeArrayex(794,nctempstring,i,0,rho->d[0]);
}
nctemp2887=j*rho->d[0]+nctemp2887;
if((0>j)||(j>=rho->d[1])){
nctempstring->a="rho";
nctempstring->d[0]=strlen("rho")+1;;
LibeArrayex(794,nctempstring,j,1,rho->d[1]);
}
int nctemp2897=i;
if((0>i)||(i>=vp->d[0])){
nctempstring->a="vp";
nctempstring->d[0]=strlen("vp")+1;;
LibeArrayex(794,nctempstring,i,0,vp->d[0]);
}
nctemp2897=j*vp->d[0]+nctemp2897;
if((0>j)||(j>=vp->d[1])){
nctempstring->a="vp";
nctempstring->d[0]=strlen("vp")+1;;
LibeArrayex(794,nctempstring,j,1,vp->d[1]);
}
int nctemp2901=i;
if((0>i)||(i>=vp->d[0])){
nctempstring->a="vp";
nctempstring->d[0]=strlen("vp")+1;;
LibeArrayex(794,nctempstring,i,0,vp->d[0]);
}
nctemp2901=j*vp->d[0]+nctemp2901;
if((0>j)||(j>=vp->d[1])){
nctempstring->a="vp";
nctempstring->d[0]=strlen("vp")+1;;
LibeArrayex(794,nctempstring,j,1,vp->d[1]);
}
float nctemp2904 = vp->a[nctemp2897] * vp->a[nctemp2901];
int nctemp2913=i;
if((0>i)||(i>=vs->d[0])){
nctempstring->a="vs";
nctempstring->d[0]=strlen("vs")+1;;
LibeArrayex(794,nctempstring,i,0,vs->d[0]);
}
nctemp2913=j*vs->d[0]+nctemp2913;
if((0>j)||(j>=vs->d[1])){
nctempstring->a="vs";
nctempstring->d[0]=strlen("vs")+1;;
LibeArrayex(794,nctempstring,j,1,vs->d[1]);
}
float nctemp2916 = 2.0 * vs->a[nctemp2913];
int nctemp2918=i;
if((0>i)||(i>=vs->d[0])){
nctempstring->a="vs";
nctempstring->d[0]=strlen("vs")+1;;
LibeArrayex(794,nctempstring,i,0,vs->d[0]);
}
nctemp2918=j*vs->d[0]+nctemp2918;
if((0>j)||(j>=vs->d[1])){
nctempstring->a="vs";
nctempstring->d[0]=strlen("vs")+1;;
LibeArrayex(794,nctempstring,j,1,vs->d[1]);
}
float nctemp2921 = nctemp2916 * vs->a[nctemp2918];
float nctemp2922 = nctemp2904 - nctemp2921;
float nctemp2923 = rho->a[nctemp2887] * nctemp2922;
Model->Lambda->a[nctemp2880] =nctemp2923;
}
int nctemp2932 = i + 1;
i =nctemp2932;
int nctemp2933 = (i < Nx);
nctemp2812=nctemp2933;
}
}
int nctemp2945 = j + 1;
j =nctemp2945;
int nctemp2946 = (j < Ny);
nctemp2804=nctemp2946;
}
nctempfloat1* nctemp2951= Model->dx;
float nctemp2954= Model->Dx;
int nctemp2956= Model->Nb;
int nctemp2958=Modeld(nctemp2951,nctemp2954,nctemp2956);
nctempfloat1* nctemp2960= Model->dy;
float nctemp2963= Model->Dx;
int nctemp2965= Model->Nb;
int nctemp2967=Modeld(nctemp2960,nctemp2963,nctemp2965);
struct model* nctemp2969= Model;
int nctemp2971=Modelalphasls(nctemp2969);
struct model* nctemp2973= Model;
int nctemp2975=Modelbetasls(nctemp2973);
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
int nctemp2989 = (j < ny);
while(nctemp2989){
{
i =0;
int nctemp2997 = (i < nx);
while(nctemp2997){
{
int nctemp3012=i;
if((0>i)||(i>=Model->Lambda->d[0])){
nctempstring->a="Model->Lambda";
nctempstring->d[0]=strlen("Model->Lambda")+1;;
LibeArrayex(826,nctempstring,i,0,Model->Lambda->d[0]);
}
nctemp3012=j*Model->Lambda->d[0]+nctemp3012;
if((0>j)||(j>=Model->Lambda->d[1])){
nctempstring->a="Model->Lambda";
nctempstring->d[0]=strlen("Model->Lambda")+1;;
LibeArrayex(826,nctempstring,j,1,Model->Lambda->d[1]);
}
int nctemp3020=i;
if((0>i)||(i>=Model->Mu->d[0])){
nctempstring->a="Model->Mu";
nctempstring->d[0]=strlen("Model->Mu")+1;;
LibeArrayex(826,nctempstring,i,0,Model->Mu->d[0]);
}
nctemp3020=j*Model->Mu->d[0]+nctemp3020;
if((0>j)||(j>=Model->Mu->d[1])){
nctempstring->a="Model->Mu";
nctempstring->d[0]=strlen("Model->Mu")+1;;
LibeArrayex(826,nctempstring,j,1,Model->Mu->d[1]);
}
float nctemp3023 = 2.0 * Model->Mu->a[nctemp3020];
float nctemp3024 = Model->Lambda->a[nctemp3012] + nctemp3023;
int nctemp3026=i;
if((0>i)||(i>=Model->Rho->d[0])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(826,nctempstring,i,0,Model->Rho->d[0]);
}
nctemp3026=j*Model->Rho->d[0]+nctemp3026;
if((0>j)||(j>=Model->Rho->d[1])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(826,nctempstring,j,1,Model->Rho->d[1]);
}
float nctemp3029 = nctemp3024 / Model->Rho->a[nctemp3026];
float nctemp3005= nctemp3029;
float nctemp3030=LibeSqrt(nctemp3005);
vp =nctemp3030;
float nctemp3042 = vp * Model->Dt;
float nctemp3044 = nctemp3042 / Model->Dx;
stab =nctemp3044;
float nctemp3053= 2.0;
float nctemp3055=LibeSqrt(nctemp3053);
float nctemp3056 = 1.0 / nctemp3055;
int nctemp3045 = (stab > nctemp3056);
if(nctemp3045)
{
int nctemp3058= 4;
struct nctempchar1 *nctemp3062;
static struct nctempchar1 nctemp3063 = {{ 28}, (char*)"Stability index too large! \0"};
nctemp3062=&nctemp3063;
nctempchar1* nctemp3060= nctemp3062;
int nctemp3064=LibePuts(nctemp3058,nctemp3060);
int nctemp3066= 4;
float nctemp3068= stab;
struct nctempchar1 *nctemp3072;
static struct nctempchar1 nctemp3073 = {{ 2}, (char*)"g\0"};
nctemp3072=&nctemp3073;
nctempchar1* nctemp3070= nctemp3072;
int nctemp3074=LibePutf(nctemp3066,nctemp3068,nctemp3070);
int nctemp3076= 4;
struct nctempchar1 *nctemp3080;
static struct nctempchar1 nctemp3081 = {{ 3}, (char*)"\n\0"};
nctemp3080=&nctemp3081;
nctempchar1* nctemp3078= nctemp3080;
int nctemp3082=LibePuts(nctemp3076,nctemp3078);
int nctemp3084= 4;
struct nctempchar1 *nctemp3088;
static struct nctempchar1 nctemp3089 = {{ 7}, (char*)"vp: \n\0"};
nctemp3088=&nctemp3089;
nctempchar1* nctemp3086= nctemp3088;
int nctemp3090=LibePuts(nctemp3084,nctemp3086);
int nctemp3092= 4;
float nctemp3094= vp;
struct nctempchar1 *nctemp3098;
static struct nctempchar1 nctemp3099 = {{ 2}, (char*)"g\0"};
nctemp3098=&nctemp3099;
nctempchar1* nctemp3096= nctemp3098;
int nctemp3100=LibePutf(nctemp3092,nctemp3094,nctemp3096);
int nctemp3102= 4;
struct nctempchar1 *nctemp3106;
static struct nctempchar1 nctemp3107 = {{ 3}, (char*)"\n\0"};
nctemp3106=&nctemp3107;
nctempchar1* nctemp3104= nctemp3106;
int nctemp3108=LibePuts(nctemp3102,nctemp3104);
int nctemp3110= 4;
struct nctempchar1 *nctemp3114;
static struct nctempchar1 nctemp3115 = {{ 7}, (char*)"dt: \n\0"};
nctemp3114=&nctemp3115;
nctempchar1* nctemp3112= nctemp3114;
int nctemp3116=LibePuts(nctemp3110,nctemp3112);
int nctemp3118= 4;
float nctemp3120= Model->Dt;
struct nctempchar1 *nctemp3124;
static struct nctempchar1 nctemp3125 = {{ 2}, (char*)"g\0"};
nctemp3124=&nctemp3125;
nctempchar1* nctemp3122= nctemp3124;
int nctemp3126=LibePutf(nctemp3118,nctemp3120,nctemp3122);
int nctemp3128= 4;
struct nctempchar1 *nctemp3132;
static struct nctempchar1 nctemp3133 = {{ 3}, (char*)"\n\0"};
nctemp3132=&nctemp3133;
nctempchar1* nctemp3130= nctemp3132;
int nctemp3134=LibePuts(nctemp3128,nctemp3130);
int nctemp3136= 4;
struct nctempchar1 *nctemp3140;
static struct nctempchar1 nctemp3141 = {{ 7}, (char*)"dx: \n\0"};
nctemp3140=&nctemp3141;
nctempchar1* nctemp3138= nctemp3140;
int nctemp3142=LibePuts(nctemp3136,nctemp3138);
int nctemp3144= 4;
float nctemp3146= Model->Dx;
struct nctempchar1 *nctemp3150;
static struct nctempchar1 nctemp3151 = {{ 2}, (char*)"g\0"};
nctemp3150=&nctemp3151;
nctempchar1* nctemp3148= nctemp3150;
int nctemp3152=LibePutf(nctemp3144,nctemp3146,nctemp3148);
int nctemp3154= 4;
struct nctempchar1 *nctemp3158;
static struct nctempchar1 nctemp3159 = {{ 3}, (char*)"\n\0"};
nctemp3158=&nctemp3159;
nctempchar1* nctemp3156= nctemp3158;
int nctemp3160=LibePuts(nctemp3154,nctemp3156);
int nctemp3162= 4;
int nctemp3164=LibeFlush(nctemp3162);
}
}
int nctemp3173 = i + 1;
i =nctemp3173;
int nctemp3174 = (i < nx);
nctemp2997=nctemp3174;
}
}
int nctemp3186 = j + 1;
j =nctemp3186;
int nctemp3187 = (j < ny);
nctemp2989=nctemp3187;
}
return stab;
}
int Modeld (nctempfloat1 *d,float dx,int nb)
{
int i;
int n;
int nctemp3196=d->d[0];n =nctemp3196;
i =0;
int nctemp3204 = (i < n);
while(nctemp3204){
{
int nctemp3211=i;
if((0>i)||(i>=d->d[0])){
nctempstring->a="d";
nctempstring->d[0]=strlen("d")+1;;
LibeArrayex(864,nctempstring,i,0,d->d[0]);
}
d->a[nctemp3211] =1.0;
}
int nctemp3222 = i + 1;
i =nctemp3222;
int nctemp3223 = (i < n);
nctemp3204=nctemp3223;
}
i =0;
int nctemp3231 = (i < nb);
while(nctemp3231){
{
int nctemp3238=i;
if((0>i)||(i>=d->d[0])){
nctempstring->a="d";
nctempstring->d[0]=strlen("d")+1;;
LibeArrayex(869,nctempstring,i,0,d->d[0]);
}
int nctemp3244=i;
if((0>i)||(i>=d->d[0])){
nctempstring->a="d";
nctempstring->d[0]=strlen("d")+1;;
LibeArrayex(869,nctempstring,i,0,d->d[0]);
}
float nctemp3259=(float)(i);
float nctemp3263 = nctemp3259 * dx;
float nctemp3268=(float)(nb);
float nctemp3272 = nctemp3268 * dx;
float nctemp3273 = nctemp3263 / nctemp3272;
float nctemp3278=(float)(i);
float nctemp3282 = nctemp3278 * dx;
float nctemp3283 = nctemp3273 * nctemp3282;
float nctemp3288=(float)(nb);
float nctemp3292 = nctemp3288 * dx;
float nctemp3293 = nctemp3283 / nctemp3292;
float nctemp3294 = d->a[nctemp3244] * nctemp3293;
d->a[nctemp3238] =nctemp3294;
}
int nctemp3303 = i + 1;
i =nctemp3303;
int nctemp3304 = (i < nb);
nctemp3231=nctemp3304;
}
int nctemp3319 = n - 1;
int nctemp3321 = nctemp3319 - nb;
i =nctemp3321;
int nctemp3322 = (i < n);
while(nctemp3322){
{
int nctemp3329=i;
if((0>i)||(i>=d->d[0])){
nctempstring->a="d";
nctempstring->d[0]=strlen("d")+1;;
LibeArrayex(875,nctempstring,i,0,d->d[0]);
}
int nctemp3335=i;
if((0>i)||(i>=d->d[0])){
nctempstring->a="d";
nctempstring->d[0]=strlen("d")+1;;
LibeArrayex(875,nctempstring,i,0,d->d[0]);
}
int nctemp3359 = n - 1;
int nctemp3361 = nctemp3359 - i;
float nctemp3350=(float)(nctemp3361);
float nctemp3363 = nctemp3350 * dx;
float nctemp3368=(float)(nb);
float nctemp3372 = nctemp3368 * dx;
float nctemp3373 = nctemp3363 / nctemp3372;
int nctemp3387 = n - 1;
int nctemp3389 = nctemp3387 - i;
float nctemp3378=(float)(nctemp3389);
float nctemp3391 = nctemp3378 * dx;
float nctemp3392 = nctemp3373 * nctemp3391;
float nctemp3397=(float)(nb);
float nctemp3401 = nctemp3397 * dx;
float nctemp3402 = nctemp3392 / nctemp3401;
float nctemp3403 = d->a[nctemp3335] * nctemp3402;
d->a[nctemp3329] =nctemp3403;
}
int nctemp3412 = i + 1;
i =nctemp3412;
int nctemp3413 = (i < n);
nctemp3322=nctemp3413;
}
return 1;
}
