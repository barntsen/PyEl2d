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
struct diff {int l;
int lmax;
nctempfloat2 *coeffs;
nctempfloat1 *w;
};
typedef struct nctempdiff1 {int d[1]; struct diff *a; } nctempdiff1;
struct nctempdiff2 {int d[2]; struct diff *a; } ;
struct nctempdiff3 {int d[3]; struct diff *a; } ;
struct nctempdiff4 {int d[4]; struct diff *a; } ;
struct diff* DiffNew (int l);
int DiffDxminus (struct diff* Diff,nctempfloat2 *A,nctempfloat2 *dA,float dx);
int DiffDyminus (struct diff* Diff,nctempfloat2 *A,nctempfloat2 *dA,float dx);
int DiffDxplus (struct diff* Diff,nctempfloat2 *A,nctempfloat2 *dA,float dx);
int DiffDyplus (struct diff* Diff,nctempfloat2 *A,nctempfloat2 *dA,float dx);
struct rec {int nr;
nctempint1 *rx;
nctempint1 *ry;
int fd;
int nt;
nctempfloat2 *p;
nctempfloat2 *wrk;
int resamp;
int sresamp;
int pit;
};
typedef struct nctemprec1 {int d[1]; struct rec *a; } nctemprec1;
struct nctemprec2 {int d[2]; struct rec *a; } ;
struct nctemprec3 {int d[3]; struct rec *a; } ;
struct nctemprec4 {int d[4]; struct rec *a; } ;
struct rec* RecNew (nctempint1 *rx,nctempint1 *ry,int nt,int resamp,int sresamp,nctempchar1 *file);
int RecReceiver (struct rec* Rec,int it,nctempfloat2 *p);
int RecSave (struct rec* Rec,nctempchar1 *file);
int RecSnap (struct rec* Rec,int it,nctempfloat2 *snp);
struct src {nctempfloat1 *Src;
nctempint1 *Sx;
nctempint1 *Sy;
int Ns;
};
typedef struct nctempsrc1 {int d[1]; struct src *a; } nctempsrc1;
struct nctempsrc2 {int d[2]; struct src *a; } ;
struct nctempsrc3 {int d[3]; struct src *a; } ;
struct nctempsrc4 {int d[4]; struct src *a; } ;
struct src* SrcNew (nctempfloat1 *source,nctempint1 *sx,nctempint1 *sy);
int SrcDel (struct src* Src);
struct model {int Nx;
int Ny;
int Nb;
float W0;
nctempfloat2 *Ql;
nctempfloat2 *Qm;
nctempfloat2 *Qp;
nctempfloat2 *Qs;
nctempfloat2 *Lambda;
nctempfloat2 *Mu;
nctempfloat2 *Dlambdax;
nctempfloat2 *Dlambday;
nctempfloat2 *Dmux;
nctempfloat2 *Dmuy;
nctempfloat2 *Drhopx;
nctempfloat2 *Drhopy;
nctempfloat2 *Drhosx;
nctempfloat2 *Drhosy;
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
nctempfloat2 *Nu1x;
nctempfloat2 *Nu1y;
nctempfloat2 *Nu2x;
nctempfloat2 *Nu2y;
nctempfloat1 *dx;
nctempfloat1 *dy;
float Dx;
float Dt;
};
typedef struct nctempmodel1 {int d[1]; struct model *a; } nctempmodel1;
struct nctempmodel2 {int d[2]; struct model *a; } ;
struct nctempmodel3 {int d[3]; struct model *a; } ;
struct nctempmodel4 {int d[4]; struct model *a; } ;
struct model* ModelNew (nctempfloat2 *vp,nctempfloat2 *vs,nctempfloat2 *rho,nctempfloat2 *Ql,nctempfloat2 *Qm,nctempfloat2 *Qp,nctempfloat2 *Qs,float Dx,float Dt,float W0,int Nb,int Rheol);
float ModelStability (struct model* Model);
struct el2d {nctempfloat2 *p;
nctempfloat2 *sigmaxx;
nctempfloat2 *sigmayy;
nctempfloat2 *sigmaxy;
nctempfloat2 *sigmayx;
nctempfloat2 *vx;
nctempfloat2 *vy;
nctempfloat2 *exx;
nctempfloat2 *eyy;
nctempfloat2 *exy;
nctempfloat2 *eyx;
nctempfloat2 *gammaxx;
nctempfloat2 *gammayy;
nctempfloat2 *gammaxy;
nctempfloat2 *gammayx;
nctempfloat2 *thetaxxx;
nctempfloat2 *thetayyy;
nctempfloat2 *thetaxyx;
nctempfloat2 *thetayxy;
int ts;
};
typedef struct nctempel2d1 {int d[1]; struct el2d *a; } nctempel2d1;
struct nctempel2d2 {int d[2]; struct el2d *a; } ;
struct nctempel2d3 {int d[3]; struct el2d *a; } ;
struct nctempel2d4 {int d[4]; struct el2d *a; } ;
struct el2d* El2dNew (struct model* Model);
int El2dSolve (struct el2d* El2d,struct model* Model,struct src* Src,struct rec* Rec,int nt,int l);
int El2dvx (struct el2d* El2d,struct model* Model);
int El2dvy (struct el2d* El2d,struct model* Model);
int El2dexy (struct el2d* El2d,struct model* Model,nctempfloat2 *vx,nctempfloat2 *vy);
int El2deyx (struct el2d* El2d,struct model* Model,nctempfloat2 *vx,nctempfloat2 *vy);
int El2dstress (struct el2d* El2d,struct model* Model);
struct el2d* El2dNew (struct model* Model)
{
struct el2d* El2d;
int i;
int j;
struct el2d *nctemp5=(struct el2d*)RunMalloc(sizeof(struct el2d));
El2d =nctemp5;
int nctemp13=Model->Nx;
nctemp13=nctemp13*Model->Ny;
nctempfloat2 *nctemp12;
nctemp12=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp12->d[0]=Model->Nx;
nctemp12->d[1]=Model->Ny;
nctemp12->a=(float *)RunMalloc(sizeof(float)*nctemp13);
El2d->p=nctemp12;
int nctemp24=Model->Nx;
nctemp24=nctemp24*Model->Ny;
nctempfloat2 *nctemp23;
nctemp23=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp23->d[0]=Model->Nx;
nctemp23->d[1]=Model->Ny;
nctemp23->a=(float *)RunMalloc(sizeof(float)*nctemp24);
El2d->sigmaxx=nctemp23;
int nctemp35=Model->Nx;
nctemp35=nctemp35*Model->Ny;
nctempfloat2 *nctemp34;
nctemp34=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp34->d[0]=Model->Nx;
nctemp34->d[1]=Model->Ny;
nctemp34->a=(float *)RunMalloc(sizeof(float)*nctemp35);
El2d->sigmayy=nctemp34;
int nctemp46=Model->Nx;
nctemp46=nctemp46*Model->Ny;
nctempfloat2 *nctemp45;
nctemp45=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp45->d[0]=Model->Nx;
nctemp45->d[1]=Model->Ny;
nctemp45->a=(float *)RunMalloc(sizeof(float)*nctemp46);
El2d->sigmaxy=nctemp45;
int nctemp57=Model->Nx;
nctemp57=nctemp57*Model->Ny;
nctempfloat2 *nctemp56;
nctemp56=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp56->d[0]=Model->Nx;
nctemp56->d[1]=Model->Ny;
nctemp56->a=(float *)RunMalloc(sizeof(float)*nctemp57);
El2d->sigmayx=nctemp56;
int nctemp68=Model->Nx;
nctemp68=nctemp68*Model->Ny;
nctempfloat2 *nctemp67;
nctemp67=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp67->d[0]=Model->Nx;
nctemp67->d[1]=Model->Ny;
nctemp67->a=(float *)RunMalloc(sizeof(float)*nctemp68);
El2d->vx=nctemp67;
int nctemp79=Model->Nx;
nctemp79=nctemp79*Model->Ny;
nctempfloat2 *nctemp78;
nctemp78=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp78->d[0]=Model->Nx;
nctemp78->d[1]=Model->Ny;
nctemp78->a=(float *)RunMalloc(sizeof(float)*nctemp79);
El2d->vy=nctemp78;
int nctemp90=Model->Nx;
nctemp90=nctemp90*Model->Ny;
nctempfloat2 *nctemp89;
nctemp89=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp89->d[0]=Model->Nx;
nctemp89->d[1]=Model->Ny;
nctemp89->a=(float *)RunMalloc(sizeof(float)*nctemp90);
El2d->exx=nctemp89;
int nctemp101=Model->Nx;
nctemp101=nctemp101*Model->Ny;
nctempfloat2 *nctemp100;
nctemp100=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp100->d[0]=Model->Nx;
nctemp100->d[1]=Model->Ny;
nctemp100->a=(float *)RunMalloc(sizeof(float)*nctemp101);
El2d->eyy=nctemp100;
int nctemp112=Model->Nx;
nctemp112=nctemp112*Model->Ny;
nctempfloat2 *nctemp111;
nctemp111=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp111->d[0]=Model->Nx;
nctemp111->d[1]=Model->Ny;
nctemp111->a=(float *)RunMalloc(sizeof(float)*nctemp112);
El2d->exy=nctemp111;
int nctemp123=Model->Nx;
nctemp123=nctemp123*Model->Ny;
nctempfloat2 *nctemp122;
nctemp122=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp122->d[0]=Model->Nx;
nctemp122->d[1]=Model->Ny;
nctemp122->a=(float *)RunMalloc(sizeof(float)*nctemp123);
El2d->eyx=nctemp122;
int nctemp134=Model->Nx;
nctemp134=nctemp134*Model->Ny;
nctempfloat2 *nctemp133;
nctemp133=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp133->d[0]=Model->Nx;
nctemp133->d[1]=Model->Ny;
nctemp133->a=(float *)RunMalloc(sizeof(float)*nctemp134);
El2d->gammaxx=nctemp133;
int nctemp145=Model->Nx;
nctemp145=nctemp145*Model->Ny;
nctempfloat2 *nctemp144;
nctemp144=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp144->d[0]=Model->Nx;
nctemp144->d[1]=Model->Ny;
nctemp144->a=(float *)RunMalloc(sizeof(float)*nctemp145);
El2d->gammayy=nctemp144;
int nctemp156=Model->Nx;
nctemp156=nctemp156*Model->Ny;
nctempfloat2 *nctemp155;
nctemp155=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp155->d[0]=Model->Nx;
nctemp155->d[1]=Model->Ny;
nctemp155->a=(float *)RunMalloc(sizeof(float)*nctemp156);
El2d->gammaxy=nctemp155;
int nctemp167=Model->Nx;
nctemp167=nctemp167*Model->Ny;
nctempfloat2 *nctemp166;
nctemp166=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp166->d[0]=Model->Nx;
nctemp166->d[1]=Model->Ny;
nctemp166->a=(float *)RunMalloc(sizeof(float)*nctemp167);
El2d->gammayx=nctemp166;
int nctemp178=Model->Nx;
nctemp178=nctemp178*Model->Ny;
nctempfloat2 *nctemp177;
nctemp177=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp177->d[0]=Model->Nx;
nctemp177->d[1]=Model->Ny;
nctemp177->a=(float *)RunMalloc(sizeof(float)*nctemp178);
El2d->thetaxxx=nctemp177;
int nctemp189=Model->Nx;
nctemp189=nctemp189*Model->Ny;
nctempfloat2 *nctemp188;
nctemp188=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp188->d[0]=Model->Nx;
nctemp188->d[1]=Model->Ny;
nctemp188->a=(float *)RunMalloc(sizeof(float)*nctemp189);
El2d->thetayyy=nctemp188;
int nctemp200=Model->Nx;
nctemp200=nctemp200*Model->Ny;
nctempfloat2 *nctemp199;
nctemp199=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp199->d[0]=Model->Nx;
nctemp199->d[1]=Model->Ny;
nctemp199->a=(float *)RunMalloc(sizeof(float)*nctemp200);
El2d->thetayxy=nctemp199;
int nctemp211=Model->Nx;
nctemp211=nctemp211*Model->Ny;
nctempfloat2 *nctemp210;
nctemp210=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp210->d[0]=Model->Nx;
nctemp210->d[1]=Model->Ny;
nctemp210->a=(float *)RunMalloc(sizeof(float)*nctemp211);
El2d->thetaxyx=nctemp210;
i =0;
int nctemp220 = (i < Model->Nx);
while(nctemp220){
{
j =0;
int nctemp228 = (j < Model->Ny);
while(nctemp228){
{
int nctemp235=i;
if((0>i)||(i>=El2d->p->d[0])){
nctempstring->a="El2d->p";
nctempstring->d[0]=strlen("El2d->p")+1;;
LibeArrayex(54,nctempstring,i,0,El2d->p->d[0]);
}
nctemp235=j*El2d->p->d[0]+nctemp235;
if((0>j)||(j>=El2d->p->d[1])){
nctempstring->a="El2d->p";
nctempstring->d[0]=strlen("El2d->p")+1;;
LibeArrayex(54,nctempstring,j,1,El2d->p->d[1]);
}
El2d->p->a[nctemp235] =0.0;
int nctemp242=i;
if((0>i)||(i>=El2d->sigmaxx->d[0])){
nctempstring->a="El2d->sigmaxx";
nctempstring->d[0]=strlen("El2d->sigmaxx")+1;;
LibeArrayex(55,nctempstring,i,0,El2d->sigmaxx->d[0]);
}
nctemp242=j*El2d->sigmaxx->d[0]+nctemp242;
if((0>j)||(j>=El2d->sigmaxx->d[1])){
nctempstring->a="El2d->sigmaxx";
nctempstring->d[0]=strlen("El2d->sigmaxx")+1;;
LibeArrayex(55,nctempstring,j,1,El2d->sigmaxx->d[1]);
}
El2d->sigmaxx->a[nctemp242] =0.0;
int nctemp249=i;
if((0>i)||(i>=El2d->sigmayy->d[0])){
nctempstring->a="El2d->sigmayy";
nctempstring->d[0]=strlen("El2d->sigmayy")+1;;
LibeArrayex(56,nctempstring,i,0,El2d->sigmayy->d[0]);
}
nctemp249=j*El2d->sigmayy->d[0]+nctemp249;
if((0>j)||(j>=El2d->sigmayy->d[1])){
nctempstring->a="El2d->sigmayy";
nctempstring->d[0]=strlen("El2d->sigmayy")+1;;
LibeArrayex(56,nctempstring,j,1,El2d->sigmayy->d[1]);
}
El2d->sigmayy->a[nctemp249] =0.0;
int nctemp256=i;
if((0>i)||(i>=El2d->sigmaxy->d[0])){
nctempstring->a="El2d->sigmaxy";
nctempstring->d[0]=strlen("El2d->sigmaxy")+1;;
LibeArrayex(57,nctempstring,i,0,El2d->sigmaxy->d[0]);
}
nctemp256=j*El2d->sigmaxy->d[0]+nctemp256;
if((0>j)||(j>=El2d->sigmaxy->d[1])){
nctempstring->a="El2d->sigmaxy";
nctempstring->d[0]=strlen("El2d->sigmaxy")+1;;
LibeArrayex(57,nctempstring,j,1,El2d->sigmaxy->d[1]);
}
El2d->sigmaxy->a[nctemp256] =0.0;
int nctemp263=i;
if((0>i)||(i>=El2d->sigmayx->d[0])){
nctempstring->a="El2d->sigmayx";
nctempstring->d[0]=strlen("El2d->sigmayx")+1;;
LibeArrayex(58,nctempstring,i,0,El2d->sigmayx->d[0]);
}
nctemp263=j*El2d->sigmayx->d[0]+nctemp263;
if((0>j)||(j>=El2d->sigmayx->d[1])){
nctempstring->a="El2d->sigmayx";
nctempstring->d[0]=strlen("El2d->sigmayx")+1;;
LibeArrayex(58,nctempstring,j,1,El2d->sigmayx->d[1]);
}
El2d->sigmayx->a[nctemp263] =0.0;
int nctemp270=i;
if((0>i)||(i>=El2d->vx->d[0])){
nctempstring->a="El2d->vx";
nctempstring->d[0]=strlen("El2d->vx")+1;;
LibeArrayex(59,nctempstring,i,0,El2d->vx->d[0]);
}
nctemp270=j*El2d->vx->d[0]+nctemp270;
if((0>j)||(j>=El2d->vx->d[1])){
nctempstring->a="El2d->vx";
nctempstring->d[0]=strlen("El2d->vx")+1;;
LibeArrayex(59,nctempstring,j,1,El2d->vx->d[1]);
}
El2d->vx->a[nctemp270] =0.0;
int nctemp277=i;
if((0>i)||(i>=El2d->vy->d[0])){
nctempstring->a="El2d->vy";
nctempstring->d[0]=strlen("El2d->vy")+1;;
LibeArrayex(60,nctempstring,i,0,El2d->vy->d[0]);
}
nctemp277=j*El2d->vy->d[0]+nctemp277;
if((0>j)||(j>=El2d->vy->d[1])){
nctempstring->a="El2d->vy";
nctempstring->d[0]=strlen("El2d->vy")+1;;
LibeArrayex(60,nctempstring,j,1,El2d->vy->d[1]);
}
El2d->vy->a[nctemp277] =0.0;
int nctemp284=i;
if((0>i)||(i>=El2d->exx->d[0])){
nctempstring->a="El2d->exx";
nctempstring->d[0]=strlen("El2d->exx")+1;;
LibeArrayex(61,nctempstring,i,0,El2d->exx->d[0]);
}
nctemp284=j*El2d->exx->d[0]+nctemp284;
if((0>j)||(j>=El2d->exx->d[1])){
nctempstring->a="El2d->exx";
nctempstring->d[0]=strlen("El2d->exx")+1;;
LibeArrayex(61,nctempstring,j,1,El2d->exx->d[1]);
}
El2d->exx->a[nctemp284] =0.0;
int nctemp291=i;
if((0>i)||(i>=El2d->eyy->d[0])){
nctempstring->a="El2d->eyy";
nctempstring->d[0]=strlen("El2d->eyy")+1;;
LibeArrayex(62,nctempstring,i,0,El2d->eyy->d[0]);
}
nctemp291=j*El2d->eyy->d[0]+nctemp291;
if((0>j)||(j>=El2d->eyy->d[1])){
nctempstring->a="El2d->eyy";
nctempstring->d[0]=strlen("El2d->eyy")+1;;
LibeArrayex(62,nctempstring,j,1,El2d->eyy->d[1]);
}
El2d->eyy->a[nctemp291] =0.0;
int nctemp298=i;
if((0>i)||(i>=El2d->exy->d[0])){
nctempstring->a="El2d->exy";
nctempstring->d[0]=strlen("El2d->exy")+1;;
LibeArrayex(63,nctempstring,i,0,El2d->exy->d[0]);
}
nctemp298=j*El2d->exy->d[0]+nctemp298;
if((0>j)||(j>=El2d->exy->d[1])){
nctempstring->a="El2d->exy";
nctempstring->d[0]=strlen("El2d->exy")+1;;
LibeArrayex(63,nctempstring,j,1,El2d->exy->d[1]);
}
El2d->exy->a[nctemp298] =0.0;
int nctemp305=i;
if((0>i)||(i>=El2d->eyx->d[0])){
nctempstring->a="El2d->eyx";
nctempstring->d[0]=strlen("El2d->eyx")+1;;
LibeArrayex(64,nctempstring,i,0,El2d->eyx->d[0]);
}
nctemp305=j*El2d->eyx->d[0]+nctemp305;
if((0>j)||(j>=El2d->eyx->d[1])){
nctempstring->a="El2d->eyx";
nctempstring->d[0]=strlen("El2d->eyx")+1;;
LibeArrayex(64,nctempstring,j,1,El2d->eyx->d[1]);
}
El2d->eyx->a[nctemp305] =0.0;
int nctemp312=i;
if((0>i)||(i>=El2d->gammaxx->d[0])){
nctempstring->a="El2d->gammaxx";
nctempstring->d[0]=strlen("El2d->gammaxx")+1;;
LibeArrayex(65,nctempstring,i,0,El2d->gammaxx->d[0]);
}
nctemp312=j*El2d->gammaxx->d[0]+nctemp312;
if((0>j)||(j>=El2d->gammaxx->d[1])){
nctempstring->a="El2d->gammaxx";
nctempstring->d[0]=strlen("El2d->gammaxx")+1;;
LibeArrayex(65,nctempstring,j,1,El2d->gammaxx->d[1]);
}
El2d->gammaxx->a[nctemp312] =0.0;
int nctemp319=i;
if((0>i)||(i>=El2d->gammayy->d[0])){
nctempstring->a="El2d->gammayy";
nctempstring->d[0]=strlen("El2d->gammayy")+1;;
LibeArrayex(66,nctempstring,i,0,El2d->gammayy->d[0]);
}
nctemp319=j*El2d->gammayy->d[0]+nctemp319;
if((0>j)||(j>=El2d->gammayy->d[1])){
nctempstring->a="El2d->gammayy";
nctempstring->d[0]=strlen("El2d->gammayy")+1;;
LibeArrayex(66,nctempstring,j,1,El2d->gammayy->d[1]);
}
El2d->gammayy->a[nctemp319] =0.0;
int nctemp326=i;
if((0>i)||(i>=El2d->gammaxy->d[0])){
nctempstring->a="El2d->gammaxy";
nctempstring->d[0]=strlen("El2d->gammaxy")+1;;
LibeArrayex(67,nctempstring,i,0,El2d->gammaxy->d[0]);
}
nctemp326=j*El2d->gammaxy->d[0]+nctemp326;
if((0>j)||(j>=El2d->gammaxy->d[1])){
nctempstring->a="El2d->gammaxy";
nctempstring->d[0]=strlen("El2d->gammaxy")+1;;
LibeArrayex(67,nctempstring,j,1,El2d->gammaxy->d[1]);
}
El2d->gammaxy->a[nctemp326] =0.0;
int nctemp333=i;
if((0>i)||(i>=El2d->gammayx->d[0])){
nctempstring->a="El2d->gammayx";
nctempstring->d[0]=strlen("El2d->gammayx")+1;;
LibeArrayex(68,nctempstring,i,0,El2d->gammayx->d[0]);
}
nctemp333=j*El2d->gammayx->d[0]+nctemp333;
if((0>j)||(j>=El2d->gammayx->d[1])){
nctempstring->a="El2d->gammayx";
nctempstring->d[0]=strlen("El2d->gammayx")+1;;
LibeArrayex(68,nctempstring,j,1,El2d->gammayx->d[1]);
}
El2d->gammayx->a[nctemp333] =0.0;
int nctemp340=i;
if((0>i)||(i>=El2d->thetaxxx->d[0])){
nctempstring->a="El2d->thetaxxx";
nctempstring->d[0]=strlen("El2d->thetaxxx")+1;;
LibeArrayex(69,nctempstring,i,0,El2d->thetaxxx->d[0]);
}
nctemp340=j*El2d->thetaxxx->d[0]+nctemp340;
if((0>j)||(j>=El2d->thetaxxx->d[1])){
nctempstring->a="El2d->thetaxxx";
nctempstring->d[0]=strlen("El2d->thetaxxx")+1;;
LibeArrayex(69,nctempstring,j,1,El2d->thetaxxx->d[1]);
}
El2d->thetaxxx->a[nctemp340] =0.0;
int nctemp347=i;
if((0>i)||(i>=El2d->thetayyy->d[0])){
nctempstring->a="El2d->thetayyy";
nctempstring->d[0]=strlen("El2d->thetayyy")+1;;
LibeArrayex(70,nctempstring,i,0,El2d->thetayyy->d[0]);
}
nctemp347=j*El2d->thetayyy->d[0]+nctemp347;
if((0>j)||(j>=El2d->thetayyy->d[1])){
nctempstring->a="El2d->thetayyy";
nctempstring->d[0]=strlen("El2d->thetayyy")+1;;
LibeArrayex(70,nctempstring,j,1,El2d->thetayyy->d[1]);
}
El2d->thetayyy->a[nctemp347] =0.0;
int nctemp354=i;
if((0>i)||(i>=El2d->thetayxy->d[0])){
nctempstring->a="El2d->thetayxy";
nctempstring->d[0]=strlen("El2d->thetayxy")+1;;
LibeArrayex(71,nctempstring,i,0,El2d->thetayxy->d[0]);
}
nctemp354=j*El2d->thetayxy->d[0]+nctemp354;
if((0>j)||(j>=El2d->thetayxy->d[1])){
nctempstring->a="El2d->thetayxy";
nctempstring->d[0]=strlen("El2d->thetayxy")+1;;
LibeArrayex(71,nctempstring,j,1,El2d->thetayxy->d[1]);
}
El2d->thetayxy->a[nctemp354] =0.0;
int nctemp361=i;
if((0>i)||(i>=El2d->thetaxyx->d[0])){
nctempstring->a="El2d->thetaxyx";
nctempstring->d[0]=strlen("El2d->thetaxyx")+1;;
LibeArrayex(72,nctempstring,i,0,El2d->thetaxyx->d[0]);
}
nctemp361=j*El2d->thetaxyx->d[0]+nctemp361;
if((0>j)||(j>=El2d->thetaxyx->d[1])){
nctempstring->a="El2d->thetaxyx";
nctempstring->d[0]=strlen("El2d->thetaxyx")+1;;
LibeArrayex(72,nctempstring,j,1,El2d->thetaxyx->d[1]);
}
El2d->thetaxyx->a[nctemp361] =0.0;
El2d->ts =0;
}
int nctemp377 = j + 1;
j =nctemp377;
int nctemp378 = (j < Model->Ny);
nctemp228=nctemp378;
}
}
int nctemp390 = i + 1;
i =nctemp390;
int nctemp391 = (i < Model->Nx);
nctemp220=nctemp391;
}
return El2d;
}
int El2dSolve (struct el2d* El2d,struct model* Model,struct src* Src,struct rec* Rec,int nt,int l)
{
int sx;
int sy;
struct diff* Diff;
int ns;
int ne;
nctempfloat2 *tmp1;
nctempfloat2 *tmp2;
int i;
int k;
float perc;
float oldperc;
int iperc;
int nctemp400= l;
struct diff* nctemp402=DiffNew(nctemp400);
Diff =nctemp402;
int nctemp409=Model->Nx;
nctemp409=nctemp409*Model->Ny;
nctempfloat2 *nctemp408;
nctemp408=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp408->d[0]=Model->Nx;
nctemp408->d[1]=Model->Ny;
nctemp408->a=(float *)RunMalloc(sizeof(float)*nctemp409);
tmp1=nctemp408;
int nctemp420=Model->Nx;
nctemp420=nctemp420*Model->Ny;
nctempfloat2 *nctemp419;
nctemp419=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp419->d[0]=Model->Nx;
nctemp419->d[1]=Model->Ny;
nctemp419->a=(float *)RunMalloc(sizeof(float)*nctemp420);
tmp2=nctemp419;
oldperc =0.0;
ns =El2d->ts;
int nctemp441 = ns + nt;
ne =nctemp441;
i =ns;
int nctemp446 = (i < ne);
while(nctemp446){
{
struct diff* nctemp451= Diff;
nctempfloat2* nctemp453= El2d->sigmaxx;
nctempfloat2* nctemp456= El2d->exx;
float nctemp459= Model->Dx;
int nctemp461=DiffDxplus(nctemp451,nctemp453,nctemp456,nctemp459);
struct diff* nctemp463= Diff;
nctempfloat2* nctemp465= El2d->sigmaxy;
nctempfloat2* nctemp468= El2d->exy;
float nctemp471= Model->Dx;
int nctemp473=DiffDyminus(nctemp463,nctemp465,nctemp468,nctemp471);
struct el2d* nctemp475= El2d;
struct model* nctemp477= Model;
int nctemp479=El2dvx(nctemp475,nctemp477);
struct diff* nctemp481= Diff;
nctempfloat2* nctemp483= El2d->sigmayy;
nctempfloat2* nctemp486= El2d->eyy;
float nctemp489= Model->Dx;
int nctemp491=DiffDyplus(nctemp481,nctemp483,nctemp486,nctemp489);
struct diff* nctemp493= Diff;
nctempfloat2* nctemp495= El2d->sigmaxy;
nctempfloat2* nctemp498= El2d->eyx;
float nctemp501= Model->Dx;
int nctemp503=DiffDxminus(nctemp493,nctemp495,nctemp498,nctemp501);
struct el2d* nctemp505= El2d;
struct model* nctemp507= Model;
int nctemp509=El2dvy(nctemp505,nctemp507);
struct diff* nctemp511= Diff;
nctempfloat2* nctemp513= El2d->vx;
nctempfloat2* nctemp516= El2d->exx;
float nctemp519= Model->Dx;
int nctemp521=DiffDxminus(nctemp511,nctemp513,nctemp516,nctemp519);
struct diff* nctemp523= Diff;
nctempfloat2* nctemp525= El2d->vy;
nctempfloat2* nctemp528= El2d->eyy;
float nctemp531= Model->Dx;
int nctemp533=DiffDyminus(nctemp523,nctemp525,nctemp528,nctemp531);
struct diff* nctemp535= Diff;
nctempfloat2* nctemp537= El2d->vy;
nctempfloat2* nctemp540= tmp1;
float nctemp543= Model->Dx;
int nctemp545=DiffDxplus(nctemp535,nctemp537,nctemp540,nctemp543);
struct diff* nctemp547= Diff;
nctempfloat2* nctemp549= El2d->vx;
nctempfloat2* nctemp552= tmp2;
float nctemp555= Model->Dx;
int nctemp557=DiffDyplus(nctemp547,nctemp549,nctemp552,nctemp555);
struct el2d* nctemp559= El2d;
struct model* nctemp561= Model;
nctempfloat2* nctemp563= tmp1;
nctempfloat2* nctemp566= tmp2;
int nctemp569=El2dexy(nctemp559,nctemp561,nctemp563,nctemp566);
struct el2d* nctemp571= El2d;
struct model* nctemp573= Model;
nctempfloat2* nctemp575= tmp1;
nctempfloat2* nctemp578= tmp2;
int nctemp581=El2deyx(nctemp571,nctemp573,nctemp575,nctemp578);
struct el2d* nctemp583= El2d;
struct model* nctemp585= Model;
int nctemp587=El2dstress(nctemp583,nctemp585);
k =0;
int nctemp592 = (k < Src->Ns);
while(nctemp592){
{
int nctemp600=k;
if((0>k)||(k>=Src->Sx->d[0])){
nctempstring->a="Src->Sx";
nctempstring->d[0]=strlen("Src->Sx")+1;;
LibeArrayex(153,nctempstring,k,0,Src->Sx->d[0]);
}
sx =Src->Sx->a[nctemp600];
int nctemp606=k;
if((0>k)||(k>=Src->Sy->d[0])){
nctempstring->a="Src->Sy";
nctempstring->d[0]=strlen("Src->Sy")+1;;
LibeArrayex(154,nctempstring,k,0,Src->Sy->d[0]);
}
sy =Src->Sy->a[nctemp606];
int nctemp611=sx;
if((0>sx)||(sx>=El2d->sigmaxx->d[0])){
nctempstring->a="El2d->sigmaxx";
nctempstring->d[0]=strlen("El2d->sigmaxx")+1;;
LibeArrayex(155,nctempstring,sx,0,El2d->sigmaxx->d[0]);
}
nctemp611=sy*El2d->sigmaxx->d[0]+nctemp611;
if((0>sy)||(sy>=El2d->sigmaxx->d[1])){
nctempstring->a="El2d->sigmaxx";
nctempstring->d[0]=strlen("El2d->sigmaxx")+1;;
LibeArrayex(155,nctempstring,sy,1,El2d->sigmaxx->d[1]);
}
int nctemp618=sx;
if((0>sx)||(sx>=El2d->sigmaxx->d[0])){
nctempstring->a="El2d->sigmaxx";
nctempstring->d[0]=strlen("El2d->sigmaxx")+1;;
LibeArrayex(155,nctempstring,sx,0,El2d->sigmaxx->d[0]);
}
nctemp618=sy*El2d->sigmaxx->d[0]+nctemp618;
if((0>sy)||(sy>=El2d->sigmaxx->d[1])){
nctempstring->a="El2d->sigmaxx";
nctempstring->d[0]=strlen("El2d->sigmaxx")+1;;
LibeArrayex(155,nctempstring,sy,1,El2d->sigmaxx->d[1]);
}
int nctemp629=i;
if((0>i)||(i>=Src->Src->d[0])){
nctempstring->a="Src->Src";
nctempstring->d[0]=strlen("Src->Src")+1;;
LibeArrayex(156,nctempstring,i,0,Src->Src->d[0]);
}
float nctemp636 = Model->Dx * Model->Dx;
float nctemp637 = Src->Src->a[nctemp629] / nctemp636;
float nctemp638 = Model->Dt * nctemp637;
float nctemp639 = El2d->sigmaxx->a[nctemp618] + nctemp638;
El2d->sigmaxx->a[nctemp611] =nctemp639;
int nctemp643=sx;
if((0>sx)||(sx>=El2d->sigmayy->d[0])){
nctempstring->a="El2d->sigmayy";
nctempstring->d[0]=strlen("El2d->sigmayy")+1;;
LibeArrayex(158,nctempstring,sx,0,El2d->sigmayy->d[0]);
}
nctemp643=sy*El2d->sigmayy->d[0]+nctemp643;
if((0>sy)||(sy>=El2d->sigmayy->d[1])){
nctempstring->a="El2d->sigmayy";
nctempstring->d[0]=strlen("El2d->sigmayy")+1;;
LibeArrayex(158,nctempstring,sy,1,El2d->sigmayy->d[1]);
}
int nctemp650=sx;
if((0>sx)||(sx>=El2d->sigmayy->d[0])){
nctempstring->a="El2d->sigmayy";
nctempstring->d[0]=strlen("El2d->sigmayy")+1;;
LibeArrayex(158,nctempstring,sx,0,El2d->sigmayy->d[0]);
}
nctemp650=sy*El2d->sigmayy->d[0]+nctemp650;
if((0>sy)||(sy>=El2d->sigmayy->d[1])){
nctempstring->a="El2d->sigmayy";
nctempstring->d[0]=strlen("El2d->sigmayy")+1;;
LibeArrayex(158,nctempstring,sy,1,El2d->sigmayy->d[1]);
}
int nctemp661=i;
if((0>i)||(i>=Src->Src->d[0])){
nctempstring->a="Src->Src";
nctempstring->d[0]=strlen("Src->Src")+1;;
LibeArrayex(159,nctempstring,i,0,Src->Src->d[0]);
}
float nctemp668 = Model->Dx * Model->Dx;
float nctemp669 = Src->Src->a[nctemp661] / nctemp668;
float nctemp670 = Model->Dt * nctemp669;
float nctemp671 = El2d->sigmayy->a[nctemp650] + nctemp670;
El2d->sigmayy->a[nctemp643] =nctemp671;
}
int nctemp680 = k + 1;
k =nctemp680;
int nctemp681 = (k < Src->Ns);
nctemp592=nctemp681;
}
float nctemp696=(float)(i);
int nctemp709 = ne - ns;
int nctemp711 = nctemp709 - 1;
float nctemp700=(float)(nctemp711);
float nctemp712 = nctemp696 / nctemp700;
float nctemp713 = 1000.0 * nctemp712;
perc =nctemp713;
float nctemp721 = perc - oldperc;
int nctemp714 = (nctemp721 >= 10.0);
if(nctemp714)
{
int nctemp730=(int)(perc);
int nctemp734 = nctemp730 / 10;
iperc =nctemp734;
int nctemp738= iperc;
int nctemp740= 10;
int nctemp742=LibeMod(nctemp738,nctemp740);
int nctemp735 = (nctemp742 ==0);
if(nctemp735)
{
int nctemp745= 4;
int nctemp747= iperc;
int nctemp749=LibePuti(nctemp745,nctemp747);
int nctemp751= 4;
struct nctempchar1 *nctemp755;
static struct nctempchar1 nctemp756 = {{ 3}, (char*)"\n\0"};
nctemp755=&nctemp756;
nctempchar1* nctemp753= nctemp755;
int nctemp757=LibePuts(nctemp751,nctemp753);
int nctemp759= 4;
int nctemp761=LibeFlush(nctemp759);
}
oldperc =perc;
}
struct rec* nctemp767= Rec;
int nctemp769= i;
nctempfloat2* nctemp771= El2d->vx;
int nctemp774=RecReceiver(nctemp767,nctemp769,nctemp771);
struct rec* nctemp776= Rec;
int nctemp778= i;
nctempfloat2* nctemp780= El2d->sigmaxx;
int nctemp783=RecSnap(nctemp776,nctemp778,nctemp780);
}
int nctemp792 = i + 1;
i =nctemp792;
int nctemp793 = (i < ne);
nctemp446=nctemp793;
}
return 1;
}
int El2dvx (struct el2d* El2d,struct model* Model)
{
int nx;
int ny;
int i;
int j;
nx =Model->Nx;
ny =Model->Ny;

 #pragma omp parallel for
for(j=0;j<ny;j=j+1){for(i=0;i<nx;i=i+1){{
int nctemp813=i;
if((0>i)||(i>=El2d->vx->d[0])){
nctempstring->a="El2d->vx";
nctempstring->d[0]=strlen("El2d->vx")+1;;
LibeArrayex(203,nctempstring,i,0,El2d->vx->d[0]);
}
nctemp813=j*El2d->vx->d[0]+nctemp813;
if((0>j)||(j>=El2d->vx->d[1])){
nctempstring->a="El2d->vx";
nctempstring->d[0]=strlen("El2d->vx")+1;;
LibeArrayex(203,nctempstring,j,1,El2d->vx->d[1]);
}
int nctemp833=i;
if((0>i)||(i>=Model->Rho->d[0])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(203,nctempstring,i,0,Model->Rho->d[0]);
}
nctemp833=j*Model->Rho->d[0]+nctemp833;
if((0>j)||(j>=Model->Rho->d[1])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(203,nctempstring,j,1,Model->Rho->d[1]);
}
float nctemp836 = Model->Dt * Model->Rho->a[nctemp833];
int nctemp841=i;
if((0>i)||(i>=El2d->exx->d[0])){
nctempstring->a="El2d->exx";
nctempstring->d[0]=strlen("El2d->exx")+1;;
LibeArrayex(203,nctempstring,i,0,El2d->exx->d[0]);
}
nctemp841=j*El2d->exx->d[0]+nctemp841;
if((0>j)||(j>=El2d->exx->d[1])){
nctempstring->a="El2d->exx";
nctempstring->d[0]=strlen("El2d->exx")+1;;
LibeArrayex(203,nctempstring,j,1,El2d->exx->d[1]);
}
int nctemp845=i;
if((0>i)||(i>=El2d->exy->d[0])){
nctempstring->a="El2d->exy";
nctempstring->d[0]=strlen("El2d->exy")+1;;
LibeArrayex(203,nctempstring,i,0,El2d->exy->d[0]);
}
nctemp845=j*El2d->exy->d[0]+nctemp845;
if((0>j)||(j>=El2d->exy->d[1])){
nctempstring->a="El2d->exy";
nctempstring->d[0]=strlen("El2d->exy")+1;;
LibeArrayex(203,nctempstring,j,1,El2d->exy->d[1]);
}
float nctemp848 = El2d->exx->a[nctemp841] + El2d->exy->a[nctemp845];
float nctemp849 = nctemp836 * nctemp848;
int nctemp858=i;
if((0>i)||(i>=El2d->thetaxxx->d[0])){
nctempstring->a="El2d->thetaxxx";
nctempstring->d[0]=strlen("El2d->thetaxxx")+1;;
LibeArrayex(204,nctempstring,i,0,El2d->thetaxxx->d[0]);
}
nctemp858=j*El2d->thetaxxx->d[0]+nctemp858;
if((0>j)||(j>=El2d->thetaxxx->d[1])){
nctempstring->a="El2d->thetaxxx";
nctempstring->d[0]=strlen("El2d->thetaxxx")+1;;
LibeArrayex(204,nctempstring,j,1,El2d->thetaxxx->d[1]);
}
float nctemp861 = Model->Dt * El2d->thetaxxx->a[nctemp858];
int nctemp863=i;
if((0>i)||(i>=Model->Drhopx->d[0])){
nctempstring->a="Model->Drhopx";
nctempstring->d[0]=strlen("Model->Drhopx")+1;;
LibeArrayex(204,nctempstring,i,0,Model->Drhopx->d[0]);
}
nctemp863=j*Model->Drhopx->d[0]+nctemp863;
if((0>j)||(j>=Model->Drhopx->d[1])){
nctempstring->a="Model->Drhopx";
nctempstring->d[0]=strlen("Model->Drhopx")+1;;
LibeArrayex(204,nctempstring,j,1,Model->Drhopx->d[1]);
}
float nctemp866 = nctemp861 * Model->Drhopx->a[nctemp863];
float nctemp867 = nctemp849 + nctemp866;
int nctemp876=i;
if((0>i)||(i>=El2d->thetayxy->d[0])){
nctempstring->a="El2d->thetayxy";
nctempstring->d[0]=strlen("El2d->thetayxy")+1;;
LibeArrayex(205,nctempstring,i,0,El2d->thetayxy->d[0]);
}
nctemp876=j*El2d->thetayxy->d[0]+nctemp876;
if((0>j)||(j>=El2d->thetayxy->d[1])){
nctempstring->a="El2d->thetayxy";
nctempstring->d[0]=strlen("El2d->thetayxy")+1;;
LibeArrayex(205,nctempstring,j,1,El2d->thetayxy->d[1]);
}
float nctemp879 = Model->Dt * El2d->thetayxy->a[nctemp876];
int nctemp881=i;
if((0>i)||(i>=Model->Drhosy->d[0])){
nctempstring->a="Model->Drhosy";
nctempstring->d[0]=strlen("Model->Drhosy")+1;;
LibeArrayex(205,nctempstring,i,0,Model->Drhosy->d[0]);
}
nctemp881=j*Model->Drhosy->d[0]+nctemp881;
if((0>j)||(j>=Model->Drhosy->d[1])){
nctempstring->a="Model->Drhosy";
nctempstring->d[0]=strlen("Model->Drhosy")+1;;
LibeArrayex(205,nctempstring,j,1,Model->Drhosy->d[1]);
}
float nctemp884 = nctemp879 * Model->Drhosy->a[nctemp881];
float nctemp885 = nctemp867 + nctemp884;
int nctemp887=i;
if((0>i)||(i>=El2d->vx->d[0])){
nctempstring->a="El2d->vx";
nctempstring->d[0]=strlen("El2d->vx")+1;;
LibeArrayex(206,nctempstring,i,0,El2d->vx->d[0]);
}
nctemp887=j*El2d->vx->d[0]+nctemp887;
if((0>j)||(j>=El2d->vx->d[1])){
nctempstring->a="El2d->vx";
nctempstring->d[0]=strlen("El2d->vx")+1;;
LibeArrayex(206,nctempstring,j,1,El2d->vx->d[1]);
}
float nctemp890 = nctemp885 + El2d->vx->a[nctemp887];
El2d->vx->a[nctemp813] =nctemp890;
int nctemp894=i;
if((0>i)||(i>=El2d->thetaxxx->d[0])){
nctempstring->a="El2d->thetaxxx";
nctempstring->d[0]=strlen("El2d->thetaxxx")+1;;
LibeArrayex(208,nctempstring,i,0,El2d->thetaxxx->d[0]);
}
nctemp894=j*El2d->thetaxxx->d[0]+nctemp894;
if((0>j)||(j>=El2d->thetaxxx->d[1])){
nctempstring->a="El2d->thetaxxx";
nctempstring->d[0]=strlen("El2d->thetaxxx")+1;;
LibeArrayex(208,nctempstring,j,1,El2d->thetaxxx->d[1]);
}
int nctemp904=i;
if((0>i)||(i>=Model->Eta1x->d[0])){
nctempstring->a="Model->Eta1x";
nctempstring->d[0]=strlen("Model->Eta1x")+1;;
LibeArrayex(208,nctempstring,i,0,Model->Eta1x->d[0]);
}
nctemp904=j*Model->Eta1x->d[0]+nctemp904;
if((0>j)||(j>=Model->Eta1x->d[1])){
nctempstring->a="Model->Eta1x";
nctempstring->d[0]=strlen("Model->Eta1x")+1;;
LibeArrayex(208,nctempstring,j,1,Model->Eta1x->d[1]);
}
int nctemp908=i;
if((0>i)||(i>=El2d->thetaxxx->d[0])){
nctempstring->a="El2d->thetaxxx";
nctempstring->d[0]=strlen("El2d->thetaxxx")+1;;
LibeArrayex(208,nctempstring,i,0,El2d->thetaxxx->d[0]);
}
nctemp908=j*El2d->thetaxxx->d[0]+nctemp908;
if((0>j)||(j>=El2d->thetaxxx->d[1])){
nctempstring->a="El2d->thetaxxx";
nctempstring->d[0]=strlen("El2d->thetaxxx")+1;;
LibeArrayex(208,nctempstring,j,1,El2d->thetaxxx->d[1]);
}
float nctemp911 = Model->Eta1x->a[nctemp904] * El2d->thetaxxx->a[nctemp908];
int nctemp916=i;
if((0>i)||(i>=Model->Eta2x->d[0])){
nctempstring->a="Model->Eta2x";
nctempstring->d[0]=strlen("Model->Eta2x")+1;;
LibeArrayex(209,nctempstring,i,0,Model->Eta2x->d[0]);
}
nctemp916=j*Model->Eta2x->d[0]+nctemp916;
if((0>j)||(j>=Model->Eta2x->d[1])){
nctempstring->a="Model->Eta2x";
nctempstring->d[0]=strlen("Model->Eta2x")+1;;
LibeArrayex(209,nctempstring,j,1,Model->Eta2x->d[1]);
}
int nctemp920=i;
if((0>i)||(i>=El2d->exx->d[0])){
nctempstring->a="El2d->exx";
nctempstring->d[0]=strlen("El2d->exx")+1;;
LibeArrayex(209,nctempstring,i,0,El2d->exx->d[0]);
}
nctemp920=j*El2d->exx->d[0]+nctemp920;
if((0>j)||(j>=El2d->exx->d[1])){
nctempstring->a="El2d->exx";
nctempstring->d[0]=strlen("El2d->exx")+1;;
LibeArrayex(209,nctempstring,j,1,El2d->exx->d[1]);
}
float nctemp923 = Model->Eta2x->a[nctemp916] * El2d->exx->a[nctemp920];
float nctemp924 = nctemp911 + nctemp923;
El2d->thetaxxx->a[nctemp894] =nctemp924;
int nctemp928=i;
if((0>i)||(i>=El2d->thetayxy->d[0])){
nctempstring->a="El2d->thetayxy";
nctempstring->d[0]=strlen("El2d->thetayxy")+1;;
LibeArrayex(210,nctempstring,i,0,El2d->thetayxy->d[0]);
}
nctemp928=j*El2d->thetayxy->d[0]+nctemp928;
if((0>j)||(j>=El2d->thetayxy->d[1])){
nctempstring->a="El2d->thetayxy";
nctempstring->d[0]=strlen("El2d->thetayxy")+1;;
LibeArrayex(210,nctempstring,j,1,El2d->thetayxy->d[1]);
}
int nctemp938=i;
if((0>i)||(i>=Model->Nu1y->d[0])){
nctempstring->a="Model->Nu1y";
nctempstring->d[0]=strlen("Model->Nu1y")+1;;
LibeArrayex(210,nctempstring,i,0,Model->Nu1y->d[0]);
}
nctemp938=j*Model->Nu1y->d[0]+nctemp938;
if((0>j)||(j>=Model->Nu1y->d[1])){
nctempstring->a="Model->Nu1y";
nctempstring->d[0]=strlen("Model->Nu1y")+1;;
LibeArrayex(210,nctempstring,j,1,Model->Nu1y->d[1]);
}
int nctemp942=i;
if((0>i)||(i>=El2d->thetayxy->d[0])){
nctempstring->a="El2d->thetayxy";
nctempstring->d[0]=strlen("El2d->thetayxy")+1;;
LibeArrayex(210,nctempstring,i,0,El2d->thetayxy->d[0]);
}
nctemp942=j*El2d->thetayxy->d[0]+nctemp942;
if((0>j)||(j>=El2d->thetayxy->d[1])){
nctempstring->a="El2d->thetayxy";
nctempstring->d[0]=strlen("El2d->thetayxy")+1;;
LibeArrayex(210,nctempstring,j,1,El2d->thetayxy->d[1]);
}
float nctemp945 = Model->Nu1y->a[nctemp938] * El2d->thetayxy->a[nctemp942];
int nctemp950=i;
if((0>i)||(i>=Model->Nu2y->d[0])){
nctempstring->a="Model->Nu2y";
nctempstring->d[0]=strlen("Model->Nu2y")+1;;
LibeArrayex(211,nctempstring,i,0,Model->Nu2y->d[0]);
}
nctemp950=j*Model->Nu2y->d[0]+nctemp950;
if((0>j)||(j>=Model->Nu2y->d[1])){
nctempstring->a="Model->Nu2y";
nctempstring->d[0]=strlen("Model->Nu2y")+1;;
LibeArrayex(211,nctempstring,j,1,Model->Nu2y->d[1]);
}
int nctemp954=i;
if((0>i)||(i>=El2d->exy->d[0])){
nctempstring->a="El2d->exy";
nctempstring->d[0]=strlen("El2d->exy")+1;;
LibeArrayex(211,nctempstring,i,0,El2d->exy->d[0]);
}
nctemp954=j*El2d->exy->d[0]+nctemp954;
if((0>j)||(j>=El2d->exy->d[1])){
nctempstring->a="El2d->exy";
nctempstring->d[0]=strlen("El2d->exy")+1;;
LibeArrayex(211,nctempstring,j,1,El2d->exy->d[1]);
}
float nctemp957 = Model->Nu2y->a[nctemp950] * El2d->exy->a[nctemp954];
float nctemp958 = nctemp945 + nctemp957;
El2d->thetayxy->a[nctemp928] =nctemp958;
}
}}}
int El2dvy (struct el2d* El2d,struct model* Model)
{
int nx;
int ny;
int i;
int j;
nx =Model->Nx;
ny =Model->Ny;

 #pragma omp parallel for
for(j=0;j<ny;j=j+1){for(i=0;i<nx;i=i+1){{
int nctemp974=i;
if((0>i)||(i>=El2d->vy->d[0])){
nctempstring->a="El2d->vy";
nctempstring->d[0]=strlen("El2d->vy")+1;;
LibeArrayex(231,nctempstring,i,0,El2d->vy->d[0]);
}
nctemp974=j*El2d->vy->d[0]+nctemp974;
if((0>j)||(j>=El2d->vy->d[1])){
nctempstring->a="El2d->vy";
nctempstring->d[0]=strlen("El2d->vy")+1;;
LibeArrayex(231,nctempstring,j,1,El2d->vy->d[1]);
}
int nctemp994=i;
if((0>i)||(i>=Model->Rho->d[0])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(231,nctempstring,i,0,Model->Rho->d[0]);
}
nctemp994=j*Model->Rho->d[0]+nctemp994;
if((0>j)||(j>=Model->Rho->d[1])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(231,nctempstring,j,1,Model->Rho->d[1]);
}
float nctemp997 = Model->Dt * Model->Rho->a[nctemp994];
int nctemp1002=i;
if((0>i)||(i>=El2d->eyy->d[0])){
nctempstring->a="El2d->eyy";
nctempstring->d[0]=strlen("El2d->eyy")+1;;
LibeArrayex(231,nctempstring,i,0,El2d->eyy->d[0]);
}
nctemp1002=j*El2d->eyy->d[0]+nctemp1002;
if((0>j)||(j>=El2d->eyy->d[1])){
nctempstring->a="El2d->eyy";
nctempstring->d[0]=strlen("El2d->eyy")+1;;
LibeArrayex(231,nctempstring,j,1,El2d->eyy->d[1]);
}
int nctemp1006=i;
if((0>i)||(i>=El2d->eyx->d[0])){
nctempstring->a="El2d->eyx";
nctempstring->d[0]=strlen("El2d->eyx")+1;;
LibeArrayex(231,nctempstring,i,0,El2d->eyx->d[0]);
}
nctemp1006=j*El2d->eyx->d[0]+nctemp1006;
if((0>j)||(j>=El2d->eyx->d[1])){
nctempstring->a="El2d->eyx";
nctempstring->d[0]=strlen("El2d->eyx")+1;;
LibeArrayex(231,nctempstring,j,1,El2d->eyx->d[1]);
}
float nctemp1009 = El2d->eyy->a[nctemp1002] + El2d->eyx->a[nctemp1006];
float nctemp1010 = nctemp997 * nctemp1009;
int nctemp1019=i;
if((0>i)||(i>=El2d->thetayyy->d[0])){
nctempstring->a="El2d->thetayyy";
nctempstring->d[0]=strlen("El2d->thetayyy")+1;;
LibeArrayex(232,nctempstring,i,0,El2d->thetayyy->d[0]);
}
nctemp1019=j*El2d->thetayyy->d[0]+nctemp1019;
if((0>j)||(j>=El2d->thetayyy->d[1])){
nctempstring->a="El2d->thetayyy";
nctempstring->d[0]=strlen("El2d->thetayyy")+1;;
LibeArrayex(232,nctempstring,j,1,El2d->thetayyy->d[1]);
}
float nctemp1022 = Model->Dt * El2d->thetayyy->a[nctemp1019];
int nctemp1024=i;
if((0>i)||(i>=Model->Drhopy->d[0])){
nctempstring->a="Model->Drhopy";
nctempstring->d[0]=strlen("Model->Drhopy")+1;;
LibeArrayex(232,nctempstring,i,0,Model->Drhopy->d[0]);
}
nctemp1024=j*Model->Drhopy->d[0]+nctemp1024;
if((0>j)||(j>=Model->Drhopy->d[1])){
nctempstring->a="Model->Drhopy";
nctempstring->d[0]=strlen("Model->Drhopy")+1;;
LibeArrayex(232,nctempstring,j,1,Model->Drhopy->d[1]);
}
float nctemp1027 = nctemp1022 * Model->Drhopy->a[nctemp1024];
float nctemp1028 = nctemp1010 + nctemp1027;
int nctemp1037=i;
if((0>i)||(i>=El2d->thetaxyx->d[0])){
nctempstring->a="El2d->thetaxyx";
nctempstring->d[0]=strlen("El2d->thetaxyx")+1;;
LibeArrayex(233,nctempstring,i,0,El2d->thetaxyx->d[0]);
}
nctemp1037=j*El2d->thetaxyx->d[0]+nctemp1037;
if((0>j)||(j>=El2d->thetaxyx->d[1])){
nctempstring->a="El2d->thetaxyx";
nctempstring->d[0]=strlen("El2d->thetaxyx")+1;;
LibeArrayex(233,nctempstring,j,1,El2d->thetaxyx->d[1]);
}
float nctemp1040 = Model->Dt * El2d->thetaxyx->a[nctemp1037];
int nctemp1042=i;
if((0>i)||(i>=Model->Drhosx->d[0])){
nctempstring->a="Model->Drhosx";
nctempstring->d[0]=strlen("Model->Drhosx")+1;;
LibeArrayex(233,nctempstring,i,0,Model->Drhosx->d[0]);
}
nctemp1042=j*Model->Drhosx->d[0]+nctemp1042;
if((0>j)||(j>=Model->Drhosx->d[1])){
nctempstring->a="Model->Drhosx";
nctempstring->d[0]=strlen("Model->Drhosx")+1;;
LibeArrayex(233,nctempstring,j,1,Model->Drhosx->d[1]);
}
float nctemp1045 = nctemp1040 * Model->Drhosx->a[nctemp1042];
float nctemp1046 = nctemp1028 + nctemp1045;
int nctemp1048=i;
if((0>i)||(i>=El2d->vy->d[0])){
nctempstring->a="El2d->vy";
nctempstring->d[0]=strlen("El2d->vy")+1;;
LibeArrayex(234,nctempstring,i,0,El2d->vy->d[0]);
}
nctemp1048=j*El2d->vy->d[0]+nctemp1048;
if((0>j)||(j>=El2d->vy->d[1])){
nctempstring->a="El2d->vy";
nctempstring->d[0]=strlen("El2d->vy")+1;;
LibeArrayex(234,nctempstring,j,1,El2d->vy->d[1]);
}
float nctemp1051 = nctemp1046 + El2d->vy->a[nctemp1048];
El2d->vy->a[nctemp974] =nctemp1051;
int nctemp1055=i;
if((0>i)||(i>=El2d->thetayyy->d[0])){
nctempstring->a="El2d->thetayyy";
nctempstring->d[0]=strlen("El2d->thetayyy")+1;;
LibeArrayex(236,nctempstring,i,0,El2d->thetayyy->d[0]);
}
nctemp1055=j*El2d->thetayyy->d[0]+nctemp1055;
if((0>j)||(j>=El2d->thetayyy->d[1])){
nctempstring->a="El2d->thetayyy";
nctempstring->d[0]=strlen("El2d->thetayyy")+1;;
LibeArrayex(236,nctempstring,j,1,El2d->thetayyy->d[1]);
}
int nctemp1065=i;
if((0>i)||(i>=Model->Eta1y->d[0])){
nctempstring->a="Model->Eta1y";
nctempstring->d[0]=strlen("Model->Eta1y")+1;;
LibeArrayex(236,nctempstring,i,0,Model->Eta1y->d[0]);
}
nctemp1065=j*Model->Eta1y->d[0]+nctemp1065;
if((0>j)||(j>=Model->Eta1y->d[1])){
nctempstring->a="Model->Eta1y";
nctempstring->d[0]=strlen("Model->Eta1y")+1;;
LibeArrayex(236,nctempstring,j,1,Model->Eta1y->d[1]);
}
int nctemp1069=i;
if((0>i)||(i>=El2d->thetayyy->d[0])){
nctempstring->a="El2d->thetayyy";
nctempstring->d[0]=strlen("El2d->thetayyy")+1;;
LibeArrayex(236,nctempstring,i,0,El2d->thetayyy->d[0]);
}
nctemp1069=j*El2d->thetayyy->d[0]+nctemp1069;
if((0>j)||(j>=El2d->thetayyy->d[1])){
nctempstring->a="El2d->thetayyy";
nctempstring->d[0]=strlen("El2d->thetayyy")+1;;
LibeArrayex(236,nctempstring,j,1,El2d->thetayyy->d[1]);
}
float nctemp1072 = Model->Eta1y->a[nctemp1065] * El2d->thetayyy->a[nctemp1069];
int nctemp1077=i;
if((0>i)||(i>=Model->Eta2y->d[0])){
nctempstring->a="Model->Eta2y";
nctempstring->d[0]=strlen("Model->Eta2y")+1;;
LibeArrayex(237,nctempstring,i,0,Model->Eta2y->d[0]);
}
nctemp1077=j*Model->Eta2y->d[0]+nctemp1077;
if((0>j)||(j>=Model->Eta2y->d[1])){
nctempstring->a="Model->Eta2y";
nctempstring->d[0]=strlen("Model->Eta2y")+1;;
LibeArrayex(237,nctempstring,j,1,Model->Eta2y->d[1]);
}
int nctemp1081=i;
if((0>i)||(i>=El2d->eyy->d[0])){
nctempstring->a="El2d->eyy";
nctempstring->d[0]=strlen("El2d->eyy")+1;;
LibeArrayex(237,nctempstring,i,0,El2d->eyy->d[0]);
}
nctemp1081=j*El2d->eyy->d[0]+nctemp1081;
if((0>j)||(j>=El2d->eyy->d[1])){
nctempstring->a="El2d->eyy";
nctempstring->d[0]=strlen("El2d->eyy")+1;;
LibeArrayex(237,nctempstring,j,1,El2d->eyy->d[1]);
}
float nctemp1084 = Model->Eta2y->a[nctemp1077] * El2d->eyy->a[nctemp1081];
float nctemp1085 = nctemp1072 + nctemp1084;
El2d->thetayyy->a[nctemp1055] =nctemp1085;
int nctemp1089=i;
if((0>i)||(i>=El2d->thetaxyx->d[0])){
nctempstring->a="El2d->thetaxyx";
nctempstring->d[0]=strlen("El2d->thetaxyx")+1;;
LibeArrayex(238,nctempstring,i,0,El2d->thetaxyx->d[0]);
}
nctemp1089=j*El2d->thetaxyx->d[0]+nctemp1089;
if((0>j)||(j>=El2d->thetaxyx->d[1])){
nctempstring->a="El2d->thetaxyx";
nctempstring->d[0]=strlen("El2d->thetaxyx")+1;;
LibeArrayex(238,nctempstring,j,1,El2d->thetaxyx->d[1]);
}
int nctemp1099=i;
if((0>i)||(i>=Model->Eta1x->d[0])){
nctempstring->a="Model->Eta1x";
nctempstring->d[0]=strlen("Model->Eta1x")+1;;
LibeArrayex(238,nctempstring,i,0,Model->Eta1x->d[0]);
}
nctemp1099=j*Model->Eta1x->d[0]+nctemp1099;
if((0>j)||(j>=Model->Eta1x->d[1])){
nctempstring->a="Model->Eta1x";
nctempstring->d[0]=strlen("Model->Eta1x")+1;;
LibeArrayex(238,nctempstring,j,1,Model->Eta1x->d[1]);
}
int nctemp1103=i;
if((0>i)||(i>=El2d->thetaxyx->d[0])){
nctempstring->a="El2d->thetaxyx";
nctempstring->d[0]=strlen("El2d->thetaxyx")+1;;
LibeArrayex(238,nctempstring,i,0,El2d->thetaxyx->d[0]);
}
nctemp1103=j*El2d->thetaxyx->d[0]+nctemp1103;
if((0>j)||(j>=El2d->thetaxyx->d[1])){
nctempstring->a="El2d->thetaxyx";
nctempstring->d[0]=strlen("El2d->thetaxyx")+1;;
LibeArrayex(238,nctempstring,j,1,El2d->thetaxyx->d[1]);
}
float nctemp1106 = Model->Eta1x->a[nctemp1099] * El2d->thetaxyx->a[nctemp1103];
int nctemp1111=i;
if((0>i)||(i>=Model->Eta2x->d[0])){
nctempstring->a="Model->Eta2x";
nctempstring->d[0]=strlen("Model->Eta2x")+1;;
LibeArrayex(239,nctempstring,i,0,Model->Eta2x->d[0]);
}
nctemp1111=j*Model->Eta2x->d[0]+nctemp1111;
if((0>j)||(j>=Model->Eta2x->d[1])){
nctempstring->a="Model->Eta2x";
nctempstring->d[0]=strlen("Model->Eta2x")+1;;
LibeArrayex(239,nctempstring,j,1,Model->Eta2x->d[1]);
}
int nctemp1115=i;
if((0>i)||(i>=El2d->eyx->d[0])){
nctempstring->a="El2d->eyx";
nctempstring->d[0]=strlen("El2d->eyx")+1;;
LibeArrayex(239,nctempstring,i,0,El2d->eyx->d[0]);
}
nctemp1115=j*El2d->eyx->d[0]+nctemp1115;
if((0>j)||(j>=El2d->eyx->d[1])){
nctempstring->a="El2d->eyx";
nctempstring->d[0]=strlen("El2d->eyx")+1;;
LibeArrayex(239,nctempstring,j,1,El2d->eyx->d[1]);
}
float nctemp1118 = Model->Eta2x->a[nctemp1111] * El2d->eyx->a[nctemp1115];
float nctemp1119 = nctemp1106 + nctemp1118;
El2d->thetaxyx->a[nctemp1089] =nctemp1119;
}
}}}
int El2dexy (struct el2d* El2d,struct model* Model,nctempfloat2 *tmp1,nctempfloat2 *tmp2)
{
int nx;
int ny;
int i;
int j;
nx =Model->Nx;
ny =Model->Ny;

 #pragma omp parallel for
for(j=0;j<ny;j=j+1){for(i=0;i<nx;i=i+1){{
int nctemp1135=i;
if((0>i)||(i>=El2d->exy->d[0])){
nctempstring->a="El2d->exy";
nctempstring->d[0]=strlen("El2d->exy")+1;;
LibeArrayex(256,nctempstring,i,0,El2d->exy->d[0]);
}
nctemp1135=j*El2d->exy->d[0]+nctemp1135;
if((0>j)||(j>=El2d->exy->d[1])){
nctempstring->a="El2d->exy";
nctempstring->d[0]=strlen("El2d->exy")+1;;
LibeArrayex(256,nctempstring,j,1,El2d->exy->d[1]);
}
int nctemp1146=i;
if((0>i)||(i>=tmp1->d[0])){
nctempstring->a="tmp1";
nctempstring->d[0]=strlen("tmp1")+1;;
LibeArrayex(256,nctempstring,i,0,tmp1->d[0]);
}
nctemp1146=j*tmp1->d[0]+nctemp1146;
if((0>j)||(j>=tmp1->d[1])){
nctempstring->a="tmp1";
nctempstring->d[0]=strlen("tmp1")+1;;
LibeArrayex(256,nctempstring,j,1,tmp1->d[1]);
}
int nctemp1150=i;
if((0>i)||(i>=tmp2->d[0])){
nctempstring->a="tmp2";
nctempstring->d[0]=strlen("tmp2")+1;;
LibeArrayex(256,nctempstring,i,0,tmp2->d[0]);
}
nctemp1150=j*tmp2->d[0]+nctemp1150;
if((0>j)||(j>=tmp2->d[1])){
nctempstring->a="tmp2";
nctempstring->d[0]=strlen("tmp2")+1;;
LibeArrayex(256,nctempstring,j,1,tmp2->d[1]);
}
float nctemp1153 = tmp1->a[nctemp1146] + tmp2->a[nctemp1150];
float nctemp1154 = 0.5 * nctemp1153;
El2d->exy->a[nctemp1135] =nctemp1154;
}
}}}
int El2deyx (struct el2d* El2d,struct model* Model,nctempfloat2 *tmp1,nctempfloat2 *tmp2)
{
int nx;
int ny;
int i;
int j;
nx =Model->Nx;
ny =Model->Ny;

 #pragma omp parallel for
for(j=0;j<ny;j=j+1){for(i=0;i<nx;i=i+1){{
int nctemp1170=i;
if((0>i)||(i>=El2d->eyx->d[0])){
nctempstring->a="El2d->eyx";
nctempstring->d[0]=strlen("El2d->eyx")+1;;
LibeArrayex(273,nctempstring,i,0,El2d->eyx->d[0]);
}
nctemp1170=j*El2d->eyx->d[0]+nctemp1170;
if((0>j)||(j>=El2d->eyx->d[1])){
nctempstring->a="El2d->eyx";
nctempstring->d[0]=strlen("El2d->eyx")+1;;
LibeArrayex(273,nctempstring,j,1,El2d->eyx->d[1]);
}
int nctemp1181=i;
if((0>i)||(i>=tmp1->d[0])){
nctempstring->a="tmp1";
nctempstring->d[0]=strlen("tmp1")+1;;
LibeArrayex(273,nctempstring,i,0,tmp1->d[0]);
}
nctemp1181=j*tmp1->d[0]+nctemp1181;
if((0>j)||(j>=tmp1->d[1])){
nctempstring->a="tmp1";
nctempstring->d[0]=strlen("tmp1")+1;;
LibeArrayex(273,nctempstring,j,1,tmp1->d[1]);
}
int nctemp1185=i;
if((0>i)||(i>=tmp2->d[0])){
nctempstring->a="tmp2";
nctempstring->d[0]=strlen("tmp2")+1;;
LibeArrayex(273,nctempstring,i,0,tmp2->d[0]);
}
nctemp1185=j*tmp2->d[0]+nctemp1185;
if((0>j)||(j>=tmp2->d[1])){
nctempstring->a="tmp2";
nctempstring->d[0]=strlen("tmp2")+1;;
LibeArrayex(273,nctempstring,j,1,tmp2->d[1]);
}
float nctemp1188 = tmp1->a[nctemp1181] + tmp2->a[nctemp1185];
float nctemp1189 = 0.5 * nctemp1188;
El2d->eyx->a[nctemp1170] =nctemp1189;
}
}}}
int El2dstress (struct el2d* El2d,struct model* Model)
{
int nx;
int ny;
int i;
int j;
int l;
nx =Model->Nx;
ny =Model->Ny;

 #pragma omp parallel for
for(j=0;j<ny;j=j+1){for(i=0;i<nx;i=i+1){{
int nctemp1205=i;
if((0>i)||(i>=El2d->sigmaxx->d[0])){
nctempstring->a="El2d->sigmaxx";
nctempstring->d[0]=strlen("El2d->sigmaxx")+1;;
LibeArrayex(289,nctempstring,i,0,El2d->sigmaxx->d[0]);
}
nctemp1205=j*El2d->sigmaxx->d[0]+nctemp1205;
if((0>j)||(j>=El2d->sigmaxx->d[1])){
nctempstring->a="El2d->sigmaxx";
nctempstring->d[0]=strlen("El2d->sigmaxx")+1;;
LibeArrayex(289,nctempstring,j,1,El2d->sigmaxx->d[1]);
}
int nctemp1228=i;
if((0>i)||(i>=Model->Lambda->d[0])){
nctempstring->a="Model->Lambda";
nctempstring->d[0]=strlen("Model->Lambda")+1;;
LibeArrayex(289,nctempstring,i,0,Model->Lambda->d[0]);
}
nctemp1228=j*Model->Lambda->d[0]+nctemp1228;
if((0>j)||(j>=Model->Lambda->d[1])){
nctempstring->a="Model->Lambda";
nctempstring->d[0]=strlen("Model->Lambda")+1;;
LibeArrayex(289,nctempstring,j,1,Model->Lambda->d[1]);
}
float nctemp1231 = Model->Dt * Model->Lambda->a[nctemp1228];
int nctemp1236=i;
if((0>i)||(i>=El2d->exx->d[0])){
nctempstring->a="El2d->exx";
nctempstring->d[0]=strlen("El2d->exx")+1;;
LibeArrayex(289,nctempstring,i,0,El2d->exx->d[0]);
}
nctemp1236=j*El2d->exx->d[0]+nctemp1236;
if((0>j)||(j>=El2d->exx->d[1])){
nctempstring->a="El2d->exx";
nctempstring->d[0]=strlen("El2d->exx")+1;;
LibeArrayex(289,nctempstring,j,1,El2d->exx->d[1]);
}
int nctemp1240=i;
if((0>i)||(i>=El2d->eyy->d[0])){
nctempstring->a="El2d->eyy";
nctempstring->d[0]=strlen("El2d->eyy")+1;;
LibeArrayex(289,nctempstring,i,0,El2d->eyy->d[0]);
}
nctemp1240=j*El2d->eyy->d[0]+nctemp1240;
if((0>j)||(j>=El2d->eyy->d[1])){
nctempstring->a="El2d->eyy";
nctempstring->d[0]=strlen("El2d->eyy")+1;;
LibeArrayex(289,nctempstring,j,1,El2d->eyy->d[1]);
}
float nctemp1243 = El2d->exx->a[nctemp1236] + El2d->eyy->a[nctemp1240];
float nctemp1244 = nctemp1231 * nctemp1243;
float nctemp1256 = 2.0 * Model->Dt;
int nctemp1258=i;
if((0>i)||(i>=Model->Mu->d[0])){
nctempstring->a="Model->Mu";
nctempstring->d[0]=strlen("Model->Mu")+1;;
LibeArrayex(290,nctempstring,i,0,Model->Mu->d[0]);
}
nctemp1258=j*Model->Mu->d[0]+nctemp1258;
if((0>j)||(j>=Model->Mu->d[1])){
nctempstring->a="Model->Mu";
nctempstring->d[0]=strlen("Model->Mu")+1;;
LibeArrayex(290,nctempstring,j,1,Model->Mu->d[1]);
}
float nctemp1261 = nctemp1256 * Model->Mu->a[nctemp1258];
int nctemp1263=i;
if((0>i)||(i>=El2d->exx->d[0])){
nctempstring->a="El2d->exx";
nctempstring->d[0]=strlen("El2d->exx")+1;;
LibeArrayex(290,nctempstring,i,0,El2d->exx->d[0]);
}
nctemp1263=j*El2d->exx->d[0]+nctemp1263;
if((0>j)||(j>=El2d->exx->d[1])){
nctempstring->a="El2d->exx";
nctempstring->d[0]=strlen("El2d->exx")+1;;
LibeArrayex(290,nctempstring,j,1,El2d->exx->d[1]);
}
float nctemp1266 = nctemp1261 * El2d->exx->a[nctemp1263];
float nctemp1267 = nctemp1244 + nctemp1266;
int nctemp1279=i;
if((0>i)||(i>=El2d->gammaxx->d[0])){
nctempstring->a="El2d->gammaxx";
nctempstring->d[0]=strlen("El2d->gammaxx")+1;;
LibeArrayex(291,nctempstring,i,0,El2d->gammaxx->d[0]);
}
nctemp1279=j*El2d->gammaxx->d[0]+nctemp1279;
if((0>j)||(j>=El2d->gammaxx->d[1])){
nctempstring->a="El2d->gammaxx";
nctempstring->d[0]=strlen("El2d->gammaxx")+1;;
LibeArrayex(291,nctempstring,j,1,El2d->gammaxx->d[1]);
}
int nctemp1283=i;
if((0>i)||(i>=Model->Dlambdax->d[0])){
nctempstring->a="Model->Dlambdax";
nctempstring->d[0]=strlen("Model->Dlambdax")+1;;
LibeArrayex(291,nctempstring,i,0,Model->Dlambdax->d[0]);
}
nctemp1283=j*Model->Dlambdax->d[0]+nctemp1283;
if((0>j)||(j>=Model->Dlambdax->d[1])){
nctempstring->a="Model->Dlambdax";
nctempstring->d[0]=strlen("Model->Dlambdax")+1;;
LibeArrayex(291,nctempstring,j,1,Model->Dlambdax->d[1]);
}
float nctemp1286 = El2d->gammaxx->a[nctemp1279] * Model->Dlambdax->a[nctemp1283];
int nctemp1291=i;
if((0>i)||(i>=El2d->gammayy->d[0])){
nctempstring->a="El2d->gammayy";
nctempstring->d[0]=strlen("El2d->gammayy")+1;;
LibeArrayex(292,nctempstring,i,0,El2d->gammayy->d[0]);
}
nctemp1291=j*El2d->gammayy->d[0]+nctemp1291;
if((0>j)||(j>=El2d->gammayy->d[1])){
nctempstring->a="El2d->gammayy";
nctempstring->d[0]=strlen("El2d->gammayy")+1;;
LibeArrayex(292,nctempstring,j,1,El2d->gammayy->d[1]);
}
int nctemp1295=i;
if((0>i)||(i>=Model->Dlambday->d[0])){
nctempstring->a="Model->Dlambday";
nctempstring->d[0]=strlen("Model->Dlambday")+1;;
LibeArrayex(292,nctempstring,i,0,Model->Dlambday->d[0]);
}
nctemp1295=j*Model->Dlambday->d[0]+nctemp1295;
if((0>j)||(j>=Model->Dlambday->d[1])){
nctempstring->a="Model->Dlambday";
nctempstring->d[0]=strlen("Model->Dlambday")+1;;
LibeArrayex(292,nctempstring,j,1,Model->Dlambday->d[1]);
}
float nctemp1298 = El2d->gammayy->a[nctemp1291] * Model->Dlambday->a[nctemp1295];
float nctemp1299 = nctemp1286 + nctemp1298;
float nctemp1300 = Model->Dt * nctemp1299;
float nctemp1301 = nctemp1267 + nctemp1300;
float nctemp1313 = 2.0 * Model->Dt;
int nctemp1315=i;
if((0>i)||(i>=El2d->gammaxx->d[0])){
nctempstring->a="El2d->gammaxx";
nctempstring->d[0]=strlen("El2d->gammaxx")+1;;
LibeArrayex(293,nctempstring,i,0,El2d->gammaxx->d[0]);
}
nctemp1315=j*El2d->gammaxx->d[0]+nctemp1315;
if((0>j)||(j>=El2d->gammaxx->d[1])){
nctempstring->a="El2d->gammaxx";
nctempstring->d[0]=strlen("El2d->gammaxx")+1;;
LibeArrayex(293,nctempstring,j,1,El2d->gammaxx->d[1]);
}
float nctemp1318 = nctemp1313 * El2d->gammaxx->a[nctemp1315];
int nctemp1320=i;
if((0>i)||(i>=Model->Dmux->d[0])){
nctempstring->a="Model->Dmux";
nctempstring->d[0]=strlen("Model->Dmux")+1;;
LibeArrayex(293,nctempstring,i,0,Model->Dmux->d[0]);
}
nctemp1320=j*Model->Dmux->d[0]+nctemp1320;
if((0>j)||(j>=Model->Dmux->d[1])){
nctempstring->a="Model->Dmux";
nctempstring->d[0]=strlen("Model->Dmux")+1;;
LibeArrayex(293,nctempstring,j,1,Model->Dmux->d[1]);
}
float nctemp1323 = nctemp1318 * Model->Dmux->a[nctemp1320];
float nctemp1324 = nctemp1301 + nctemp1323;
int nctemp1326=i;
if((0>i)||(i>=El2d->sigmaxx->d[0])){
nctempstring->a="El2d->sigmaxx";
nctempstring->d[0]=strlen("El2d->sigmaxx")+1;;
LibeArrayex(294,nctempstring,i,0,El2d->sigmaxx->d[0]);
}
nctemp1326=j*El2d->sigmaxx->d[0]+nctemp1326;
if((0>j)||(j>=El2d->sigmaxx->d[1])){
nctempstring->a="El2d->sigmaxx";
nctempstring->d[0]=strlen("El2d->sigmaxx")+1;;
LibeArrayex(294,nctempstring,j,1,El2d->sigmaxx->d[1]);
}
float nctemp1329 = nctemp1324 + El2d->sigmaxx->a[nctemp1326];
El2d->sigmaxx->a[nctemp1205] =nctemp1329;
int nctemp1333=i;
if((0>i)||(i>=El2d->sigmayy->d[0])){
nctempstring->a="El2d->sigmayy";
nctempstring->d[0]=strlen("El2d->sigmayy")+1;;
LibeArrayex(297,nctempstring,i,0,El2d->sigmayy->d[0]);
}
nctemp1333=j*El2d->sigmayy->d[0]+nctemp1333;
if((0>j)||(j>=El2d->sigmayy->d[1])){
nctempstring->a="El2d->sigmayy";
nctempstring->d[0]=strlen("El2d->sigmayy")+1;;
LibeArrayex(297,nctempstring,j,1,El2d->sigmayy->d[1]);
}
int nctemp1356=i;
if((0>i)||(i>=Model->Lambda->d[0])){
nctempstring->a="Model->Lambda";
nctempstring->d[0]=strlen("Model->Lambda")+1;;
LibeArrayex(297,nctempstring,i,0,Model->Lambda->d[0]);
}
nctemp1356=j*Model->Lambda->d[0]+nctemp1356;
if((0>j)||(j>=Model->Lambda->d[1])){
nctempstring->a="Model->Lambda";
nctempstring->d[0]=strlen("Model->Lambda")+1;;
LibeArrayex(297,nctempstring,j,1,Model->Lambda->d[1]);
}
float nctemp1359 = Model->Dt * Model->Lambda->a[nctemp1356];
int nctemp1364=i;
if((0>i)||(i>=El2d->exx->d[0])){
nctempstring->a="El2d->exx";
nctempstring->d[0]=strlen("El2d->exx")+1;;
LibeArrayex(297,nctempstring,i,0,El2d->exx->d[0]);
}
nctemp1364=j*El2d->exx->d[0]+nctemp1364;
if((0>j)||(j>=El2d->exx->d[1])){
nctempstring->a="El2d->exx";
nctempstring->d[0]=strlen("El2d->exx")+1;;
LibeArrayex(297,nctempstring,j,1,El2d->exx->d[1]);
}
int nctemp1368=i;
if((0>i)||(i>=El2d->eyy->d[0])){
nctempstring->a="El2d->eyy";
nctempstring->d[0]=strlen("El2d->eyy")+1;;
LibeArrayex(297,nctempstring,i,0,El2d->eyy->d[0]);
}
nctemp1368=j*El2d->eyy->d[0]+nctemp1368;
if((0>j)||(j>=El2d->eyy->d[1])){
nctempstring->a="El2d->eyy";
nctempstring->d[0]=strlen("El2d->eyy")+1;;
LibeArrayex(297,nctempstring,j,1,El2d->eyy->d[1]);
}
float nctemp1371 = El2d->exx->a[nctemp1364] + El2d->eyy->a[nctemp1368];
float nctemp1372 = nctemp1359 * nctemp1371;
float nctemp1384 = 2.0 * Model->Dt;
int nctemp1386=i;
if((0>i)||(i>=Model->Mu->d[0])){
nctempstring->a="Model->Mu";
nctempstring->d[0]=strlen("Model->Mu")+1;;
LibeArrayex(298,nctempstring,i,0,Model->Mu->d[0]);
}
nctemp1386=j*Model->Mu->d[0]+nctemp1386;
if((0>j)||(j>=Model->Mu->d[1])){
nctempstring->a="Model->Mu";
nctempstring->d[0]=strlen("Model->Mu")+1;;
LibeArrayex(298,nctempstring,j,1,Model->Mu->d[1]);
}
float nctemp1389 = nctemp1384 * Model->Mu->a[nctemp1386];
int nctemp1391=i;
if((0>i)||(i>=El2d->eyy->d[0])){
nctempstring->a="El2d->eyy";
nctempstring->d[0]=strlen("El2d->eyy")+1;;
LibeArrayex(298,nctempstring,i,0,El2d->eyy->d[0]);
}
nctemp1391=j*El2d->eyy->d[0]+nctemp1391;
if((0>j)||(j>=El2d->eyy->d[1])){
nctempstring->a="El2d->eyy";
nctempstring->d[0]=strlen("El2d->eyy")+1;;
LibeArrayex(298,nctempstring,j,1,El2d->eyy->d[1]);
}
float nctemp1394 = nctemp1389 * El2d->eyy->a[nctemp1391];
float nctemp1395 = nctemp1372 + nctemp1394;
int nctemp1407=i;
if((0>i)||(i>=El2d->gammaxx->d[0])){
nctempstring->a="El2d->gammaxx";
nctempstring->d[0]=strlen("El2d->gammaxx")+1;;
LibeArrayex(299,nctempstring,i,0,El2d->gammaxx->d[0]);
}
nctemp1407=j*El2d->gammaxx->d[0]+nctemp1407;
if((0>j)||(j>=El2d->gammaxx->d[1])){
nctempstring->a="El2d->gammaxx";
nctempstring->d[0]=strlen("El2d->gammaxx")+1;;
LibeArrayex(299,nctempstring,j,1,El2d->gammaxx->d[1]);
}
int nctemp1411=i;
if((0>i)||(i>=Model->Dlambdax->d[0])){
nctempstring->a="Model->Dlambdax";
nctempstring->d[0]=strlen("Model->Dlambdax")+1;;
LibeArrayex(299,nctempstring,i,0,Model->Dlambdax->d[0]);
}
nctemp1411=j*Model->Dlambdax->d[0]+nctemp1411;
if((0>j)||(j>=Model->Dlambdax->d[1])){
nctempstring->a="Model->Dlambdax";
nctempstring->d[0]=strlen("Model->Dlambdax")+1;;
LibeArrayex(299,nctempstring,j,1,Model->Dlambdax->d[1]);
}
float nctemp1414 = El2d->gammaxx->a[nctemp1407] * Model->Dlambdax->a[nctemp1411];
int nctemp1419=i;
if((0>i)||(i>=El2d->gammayy->d[0])){
nctempstring->a="El2d->gammayy";
nctempstring->d[0]=strlen("El2d->gammayy")+1;;
LibeArrayex(300,nctempstring,i,0,El2d->gammayy->d[0]);
}
nctemp1419=j*El2d->gammayy->d[0]+nctemp1419;
if((0>j)||(j>=El2d->gammayy->d[1])){
nctempstring->a="El2d->gammayy";
nctempstring->d[0]=strlen("El2d->gammayy")+1;;
LibeArrayex(300,nctempstring,j,1,El2d->gammayy->d[1]);
}
int nctemp1423=i;
if((0>i)||(i>=Model->Dlambday->d[0])){
nctempstring->a="Model->Dlambday";
nctempstring->d[0]=strlen("Model->Dlambday")+1;;
LibeArrayex(300,nctempstring,i,0,Model->Dlambday->d[0]);
}
nctemp1423=j*Model->Dlambday->d[0]+nctemp1423;
if((0>j)||(j>=Model->Dlambday->d[1])){
nctempstring->a="Model->Dlambday";
nctempstring->d[0]=strlen("Model->Dlambday")+1;;
LibeArrayex(300,nctempstring,j,1,Model->Dlambday->d[1]);
}
float nctemp1426 = El2d->gammayy->a[nctemp1419] * Model->Dlambday->a[nctemp1423];
float nctemp1427 = nctemp1414 + nctemp1426;
float nctemp1428 = Model->Dt * nctemp1427;
float nctemp1429 = nctemp1395 + nctemp1428;
float nctemp1441 = 2.0 * Model->Dt;
int nctemp1443=i;
if((0>i)||(i>=El2d->gammayy->d[0])){
nctempstring->a="El2d->gammayy";
nctempstring->d[0]=strlen("El2d->gammayy")+1;;
LibeArrayex(301,nctempstring,i,0,El2d->gammayy->d[0]);
}
nctemp1443=j*El2d->gammayy->d[0]+nctemp1443;
if((0>j)||(j>=El2d->gammayy->d[1])){
nctempstring->a="El2d->gammayy";
nctempstring->d[0]=strlen("El2d->gammayy")+1;;
LibeArrayex(301,nctempstring,j,1,El2d->gammayy->d[1]);
}
float nctemp1446 = nctemp1441 * El2d->gammayy->a[nctemp1443];
int nctemp1448=i;
if((0>i)||(i>=Model->Dmuy->d[0])){
nctempstring->a="Model->Dmuy";
nctempstring->d[0]=strlen("Model->Dmuy")+1;;
LibeArrayex(301,nctempstring,i,0,Model->Dmuy->d[0]);
}
nctemp1448=j*Model->Dmuy->d[0]+nctemp1448;
if((0>j)||(j>=Model->Dmuy->d[1])){
nctempstring->a="Model->Dmuy";
nctempstring->d[0]=strlen("Model->Dmuy")+1;;
LibeArrayex(301,nctempstring,j,1,Model->Dmuy->d[1]);
}
float nctemp1451 = nctemp1446 * Model->Dmuy->a[nctemp1448];
float nctemp1452 = nctemp1429 + nctemp1451;
int nctemp1454=i;
if((0>i)||(i>=El2d->sigmayy->d[0])){
nctempstring->a="El2d->sigmayy";
nctempstring->d[0]=strlen("El2d->sigmayy")+1;;
LibeArrayex(302,nctempstring,i,0,El2d->sigmayy->d[0]);
}
nctemp1454=j*El2d->sigmayy->d[0]+nctemp1454;
if((0>j)||(j>=El2d->sigmayy->d[1])){
nctempstring->a="El2d->sigmayy";
nctempstring->d[0]=strlen("El2d->sigmayy")+1;;
LibeArrayex(302,nctempstring,j,1,El2d->sigmayy->d[1]);
}
float nctemp1457 = nctemp1452 + El2d->sigmayy->a[nctemp1454];
El2d->sigmayy->a[nctemp1333] =nctemp1457;
int nctemp1461=i;
if((0>i)||(i>=El2d->sigmaxy->d[0])){
nctempstring->a="El2d->sigmaxy";
nctempstring->d[0]=strlen("El2d->sigmaxy")+1;;
LibeArrayex(304,nctempstring,i,0,El2d->sigmaxy->d[0]);
}
nctemp1461=j*El2d->sigmaxy->d[0]+nctemp1461;
if((0>j)||(j>=El2d->sigmaxy->d[1])){
nctempstring->a="El2d->sigmaxy";
nctempstring->d[0]=strlen("El2d->sigmaxy")+1;;
LibeArrayex(304,nctempstring,j,1,El2d->sigmaxy->d[1]);
}
float nctemp1481 = 2.0 * Model->Dt;
int nctemp1483=i;
if((0>i)||(i>=Model->Mu->d[0])){
nctempstring->a="Model->Mu";
nctempstring->d[0]=strlen("Model->Mu")+1;;
LibeArrayex(304,nctempstring,i,0,Model->Mu->d[0]);
}
nctemp1483=j*Model->Mu->d[0]+nctemp1483;
if((0>j)||(j>=Model->Mu->d[1])){
nctempstring->a="Model->Mu";
nctempstring->d[0]=strlen("Model->Mu")+1;;
LibeArrayex(304,nctempstring,j,1,Model->Mu->d[1]);
}
float nctemp1486 = nctemp1481 * Model->Mu->a[nctemp1483];
int nctemp1488=i;
if((0>i)||(i>=El2d->exy->d[0])){
nctempstring->a="El2d->exy";
nctempstring->d[0]=strlen("El2d->exy")+1;;
LibeArrayex(304,nctempstring,i,0,El2d->exy->d[0]);
}
nctemp1488=j*El2d->exy->d[0]+nctemp1488;
if((0>j)||(j>=El2d->exy->d[1])){
nctempstring->a="El2d->exy";
nctempstring->d[0]=strlen("El2d->exy")+1;;
LibeArrayex(304,nctempstring,j,1,El2d->exy->d[1]);
}
float nctemp1491 = nctemp1486 * El2d->exy->a[nctemp1488];
float nctemp1503 = 2.0 * Model->Dt;
int nctemp1505=i;
if((0>i)||(i>=El2d->gammaxy->d[0])){
nctempstring->a="El2d->gammaxy";
nctempstring->d[0]=strlen("El2d->gammaxy")+1;;
LibeArrayex(305,nctempstring,i,0,El2d->gammaxy->d[0]);
}
nctemp1505=j*El2d->gammaxy->d[0]+nctemp1505;
if((0>j)||(j>=El2d->gammaxy->d[1])){
nctempstring->a="El2d->gammaxy";
nctempstring->d[0]=strlen("El2d->gammaxy")+1;;
LibeArrayex(305,nctempstring,j,1,El2d->gammaxy->d[1]);
}
float nctemp1508 = nctemp1503 * El2d->gammaxy->a[nctemp1505];
int nctemp1510=i;
if((0>i)||(i>=Model->Dmuy->d[0])){
nctempstring->a="Model->Dmuy";
nctempstring->d[0]=strlen("Model->Dmuy")+1;;
LibeArrayex(305,nctempstring,i,0,Model->Dmuy->d[0]);
}
nctemp1510=j*Model->Dmuy->d[0]+nctemp1510;
if((0>j)||(j>=Model->Dmuy->d[1])){
nctempstring->a="Model->Dmuy";
nctempstring->d[0]=strlen("Model->Dmuy")+1;;
LibeArrayex(305,nctempstring,j,1,Model->Dmuy->d[1]);
}
float nctemp1513 = nctemp1508 * Model->Dmuy->a[nctemp1510];
float nctemp1514 = nctemp1491 + nctemp1513;
int nctemp1516=i;
if((0>i)||(i>=El2d->sigmaxy->d[0])){
nctempstring->a="El2d->sigmaxy";
nctempstring->d[0]=strlen("El2d->sigmaxy")+1;;
LibeArrayex(306,nctempstring,i,0,El2d->sigmaxy->d[0]);
}
nctemp1516=j*El2d->sigmaxy->d[0]+nctemp1516;
if((0>j)||(j>=El2d->sigmaxy->d[1])){
nctempstring->a="El2d->sigmaxy";
nctempstring->d[0]=strlen("El2d->sigmaxy")+1;;
LibeArrayex(306,nctempstring,j,1,El2d->sigmaxy->d[1]);
}
float nctemp1519 = nctemp1514 + El2d->sigmaxy->a[nctemp1516];
El2d->sigmaxy->a[nctemp1461] =nctemp1519;
int nctemp1523=i;
if((0>i)||(i>=El2d->sigmayx->d[0])){
nctempstring->a="El2d->sigmayx";
nctempstring->d[0]=strlen("El2d->sigmayx")+1;;
LibeArrayex(307,nctempstring,i,0,El2d->sigmayx->d[0]);
}
nctemp1523=j*El2d->sigmayx->d[0]+nctemp1523;
if((0>j)||(j>=El2d->sigmayx->d[1])){
nctempstring->a="El2d->sigmayx";
nctempstring->d[0]=strlen("El2d->sigmayx")+1;;
LibeArrayex(307,nctempstring,j,1,El2d->sigmayx->d[1]);
}
float nctemp1543 = 2.0 * Model->Dt;
int nctemp1545=i;
if((0>i)||(i>=Model->Mu->d[0])){
nctempstring->a="Model->Mu";
nctempstring->d[0]=strlen("Model->Mu")+1;;
LibeArrayex(307,nctempstring,i,0,Model->Mu->d[0]);
}
nctemp1545=j*Model->Mu->d[0]+nctemp1545;
if((0>j)||(j>=Model->Mu->d[1])){
nctempstring->a="Model->Mu";
nctempstring->d[0]=strlen("Model->Mu")+1;;
LibeArrayex(307,nctempstring,j,1,Model->Mu->d[1]);
}
float nctemp1548 = nctemp1543 * Model->Mu->a[nctemp1545];
int nctemp1550=i;
if((0>i)||(i>=El2d->exy->d[0])){
nctempstring->a="El2d->exy";
nctempstring->d[0]=strlen("El2d->exy")+1;;
LibeArrayex(307,nctempstring,i,0,El2d->exy->d[0]);
}
nctemp1550=j*El2d->exy->d[0]+nctemp1550;
if((0>j)||(j>=El2d->exy->d[1])){
nctempstring->a="El2d->exy";
nctempstring->d[0]=strlen("El2d->exy")+1;;
LibeArrayex(307,nctempstring,j,1,El2d->exy->d[1]);
}
float nctemp1553 = nctemp1548 * El2d->exy->a[nctemp1550];
float nctemp1565 = 2.0 * Model->Dt;
int nctemp1567=i;
if((0>i)||(i>=El2d->gammayx->d[0])){
nctempstring->a="El2d->gammayx";
nctempstring->d[0]=strlen("El2d->gammayx")+1;;
LibeArrayex(308,nctempstring,i,0,El2d->gammayx->d[0]);
}
nctemp1567=j*El2d->gammayx->d[0]+nctemp1567;
if((0>j)||(j>=El2d->gammayx->d[1])){
nctempstring->a="El2d->gammayx";
nctempstring->d[0]=strlen("El2d->gammayx")+1;;
LibeArrayex(308,nctempstring,j,1,El2d->gammayx->d[1]);
}
float nctemp1570 = nctemp1565 * El2d->gammayx->a[nctemp1567];
int nctemp1572=i;
if((0>i)||(i>=Model->Dmux->d[0])){
nctempstring->a="Model->Dmux";
nctempstring->d[0]=strlen("Model->Dmux")+1;;
LibeArrayex(308,nctempstring,i,0,Model->Dmux->d[0]);
}
nctemp1572=j*Model->Dmux->d[0]+nctemp1572;
if((0>j)||(j>=Model->Dmux->d[1])){
nctempstring->a="Model->Dmux";
nctempstring->d[0]=strlen("Model->Dmux")+1;;
LibeArrayex(308,nctempstring,j,1,Model->Dmux->d[1]);
}
float nctemp1575 = nctemp1570 * Model->Dmux->a[nctemp1572];
float nctemp1576 = nctemp1553 + nctemp1575;
int nctemp1578=i;
if((0>i)||(i>=El2d->sigmayx->d[0])){
nctempstring->a="El2d->sigmayx";
nctempstring->d[0]=strlen("El2d->sigmayx")+1;;
LibeArrayex(309,nctempstring,i,0,El2d->sigmayx->d[0]);
}
nctemp1578=j*El2d->sigmayx->d[0]+nctemp1578;
if((0>j)||(j>=El2d->sigmayx->d[1])){
nctempstring->a="El2d->sigmayx";
nctempstring->d[0]=strlen("El2d->sigmayx")+1;;
LibeArrayex(309,nctempstring,j,1,El2d->sigmayx->d[1]);
}
float nctemp1581 = nctemp1576 + El2d->sigmayx->a[nctemp1578];
El2d->sigmayx->a[nctemp1523] =nctemp1581;
int nctemp1585=i;
if((0>i)||(i>=El2d->gammaxx->d[0])){
nctempstring->a="El2d->gammaxx";
nctempstring->d[0]=strlen("El2d->gammaxx")+1;;
LibeArrayex(311,nctempstring,i,0,El2d->gammaxx->d[0]);
}
nctemp1585=j*El2d->gammaxx->d[0]+nctemp1585;
if((0>j)||(j>=El2d->gammaxx->d[1])){
nctempstring->a="El2d->gammaxx";
nctempstring->d[0]=strlen("El2d->gammaxx")+1;;
LibeArrayex(311,nctempstring,j,1,El2d->gammaxx->d[1]);
}
int nctemp1595=i;
if((0>i)||(i>=Model->Alpha1x->d[0])){
nctempstring->a="Model->Alpha1x";
nctempstring->d[0]=strlen("Model->Alpha1x")+1;;
LibeArrayex(311,nctempstring,i,0,Model->Alpha1x->d[0]);
}
nctemp1595=j*Model->Alpha1x->d[0]+nctemp1595;
if((0>j)||(j>=Model->Alpha1x->d[1])){
nctempstring->a="Model->Alpha1x";
nctempstring->d[0]=strlen("Model->Alpha1x")+1;;
LibeArrayex(311,nctempstring,j,1,Model->Alpha1x->d[1]);
}
int nctemp1599=i;
if((0>i)||(i>=El2d->gammaxx->d[0])){
nctempstring->a="El2d->gammaxx";
nctempstring->d[0]=strlen("El2d->gammaxx")+1;;
LibeArrayex(311,nctempstring,i,0,El2d->gammaxx->d[0]);
}
nctemp1599=j*El2d->gammaxx->d[0]+nctemp1599;
if((0>j)||(j>=El2d->gammaxx->d[1])){
nctempstring->a="El2d->gammaxx";
nctempstring->d[0]=strlen("El2d->gammaxx")+1;;
LibeArrayex(311,nctempstring,j,1,El2d->gammaxx->d[1]);
}
float nctemp1602 = Model->Alpha1x->a[nctemp1595] * El2d->gammaxx->a[nctemp1599];
int nctemp1607=i;
if((0>i)||(i>=Model->Alpha2x->d[0])){
nctempstring->a="Model->Alpha2x";
nctempstring->d[0]=strlen("Model->Alpha2x")+1;;
LibeArrayex(312,nctempstring,i,0,Model->Alpha2x->d[0]);
}
nctemp1607=j*Model->Alpha2x->d[0]+nctemp1607;
if((0>j)||(j>=Model->Alpha2x->d[1])){
nctempstring->a="Model->Alpha2x";
nctempstring->d[0]=strlen("Model->Alpha2x")+1;;
LibeArrayex(312,nctempstring,j,1,Model->Alpha2x->d[1]);
}
int nctemp1611=i;
if((0>i)||(i>=El2d->exx->d[0])){
nctempstring->a="El2d->exx";
nctempstring->d[0]=strlen("El2d->exx")+1;;
LibeArrayex(312,nctempstring,i,0,El2d->exx->d[0]);
}
nctemp1611=j*El2d->exx->d[0]+nctemp1611;
if((0>j)||(j>=El2d->exx->d[1])){
nctempstring->a="El2d->exx";
nctempstring->d[0]=strlen("El2d->exx")+1;;
LibeArrayex(312,nctempstring,j,1,El2d->exx->d[1]);
}
float nctemp1614 = Model->Alpha2x->a[nctemp1607] * El2d->exx->a[nctemp1611];
float nctemp1615 = nctemp1602 + nctemp1614;
El2d->gammaxx->a[nctemp1585] =nctemp1615;
int nctemp1619=i;
if((0>i)||(i>=El2d->gammayy->d[0])){
nctempstring->a="El2d->gammayy";
nctempstring->d[0]=strlen("El2d->gammayy")+1;;
LibeArrayex(313,nctempstring,i,0,El2d->gammayy->d[0]);
}
nctemp1619=j*El2d->gammayy->d[0]+nctemp1619;
if((0>j)||(j>=El2d->gammayy->d[1])){
nctempstring->a="El2d->gammayy";
nctempstring->d[0]=strlen("El2d->gammayy")+1;;
LibeArrayex(313,nctempstring,j,1,El2d->gammayy->d[1]);
}
int nctemp1629=i;
if((0>i)||(i>=Model->Alpha1y->d[0])){
nctempstring->a="Model->Alpha1y";
nctempstring->d[0]=strlen("Model->Alpha1y")+1;;
LibeArrayex(313,nctempstring,i,0,Model->Alpha1y->d[0]);
}
nctemp1629=j*Model->Alpha1y->d[0]+nctemp1629;
if((0>j)||(j>=Model->Alpha1y->d[1])){
nctempstring->a="Model->Alpha1y";
nctempstring->d[0]=strlen("Model->Alpha1y")+1;;
LibeArrayex(313,nctempstring,j,1,Model->Alpha1y->d[1]);
}
int nctemp1633=i;
if((0>i)||(i>=El2d->gammayy->d[0])){
nctempstring->a="El2d->gammayy";
nctempstring->d[0]=strlen("El2d->gammayy")+1;;
LibeArrayex(313,nctempstring,i,0,El2d->gammayy->d[0]);
}
nctemp1633=j*El2d->gammayy->d[0]+nctemp1633;
if((0>j)||(j>=El2d->gammayy->d[1])){
nctempstring->a="El2d->gammayy";
nctempstring->d[0]=strlen("El2d->gammayy")+1;;
LibeArrayex(313,nctempstring,j,1,El2d->gammayy->d[1]);
}
float nctemp1636 = Model->Alpha1y->a[nctemp1629] * El2d->gammayy->a[nctemp1633];
int nctemp1641=i;
if((0>i)||(i>=Model->Alpha2y->d[0])){
nctempstring->a="Model->Alpha2y";
nctempstring->d[0]=strlen("Model->Alpha2y")+1;;
LibeArrayex(314,nctempstring,i,0,Model->Alpha2y->d[0]);
}
nctemp1641=j*Model->Alpha2y->d[0]+nctemp1641;
if((0>j)||(j>=Model->Alpha2y->d[1])){
nctempstring->a="Model->Alpha2y";
nctempstring->d[0]=strlen("Model->Alpha2y")+1;;
LibeArrayex(314,nctempstring,j,1,Model->Alpha2y->d[1]);
}
int nctemp1645=i;
if((0>i)||(i>=El2d->eyy->d[0])){
nctempstring->a="El2d->eyy";
nctempstring->d[0]=strlen("El2d->eyy")+1;;
LibeArrayex(314,nctempstring,i,0,El2d->eyy->d[0]);
}
nctemp1645=j*El2d->eyy->d[0]+nctemp1645;
if((0>j)||(j>=El2d->eyy->d[1])){
nctempstring->a="El2d->eyy";
nctempstring->d[0]=strlen("El2d->eyy")+1;;
LibeArrayex(314,nctempstring,j,1,El2d->eyy->d[1]);
}
float nctemp1648 = Model->Alpha2y->a[nctemp1641] * El2d->eyy->a[nctemp1645];
float nctemp1649 = nctemp1636 + nctemp1648;
El2d->gammayy->a[nctemp1619] =nctemp1649;
int nctemp1653=i;
if((0>i)||(i>=El2d->gammaxy->d[0])){
nctempstring->a="El2d->gammaxy";
nctempstring->d[0]=strlen("El2d->gammaxy")+1;;
LibeArrayex(315,nctempstring,i,0,El2d->gammaxy->d[0]);
}
nctemp1653=j*El2d->gammaxy->d[0]+nctemp1653;
if((0>j)||(j>=El2d->gammaxy->d[1])){
nctempstring->a="El2d->gammaxy";
nctempstring->d[0]=strlen("El2d->gammaxy")+1;;
LibeArrayex(315,nctempstring,j,1,El2d->gammaxy->d[1]);
}
int nctemp1663=i;
if((0>i)||(i>=Model->Beta1y->d[0])){
nctempstring->a="Model->Beta1y";
nctempstring->d[0]=strlen("Model->Beta1y")+1;;
LibeArrayex(315,nctempstring,i,0,Model->Beta1y->d[0]);
}
nctemp1663=j*Model->Beta1y->d[0]+nctemp1663;
if((0>j)||(j>=Model->Beta1y->d[1])){
nctempstring->a="Model->Beta1y";
nctempstring->d[0]=strlen("Model->Beta1y")+1;;
LibeArrayex(315,nctempstring,j,1,Model->Beta1y->d[1]);
}
int nctemp1667=i;
if((0>i)||(i>=El2d->gammaxy->d[0])){
nctempstring->a="El2d->gammaxy";
nctempstring->d[0]=strlen("El2d->gammaxy")+1;;
LibeArrayex(315,nctempstring,i,0,El2d->gammaxy->d[0]);
}
nctemp1667=j*El2d->gammaxy->d[0]+nctemp1667;
if((0>j)||(j>=El2d->gammaxy->d[1])){
nctempstring->a="El2d->gammaxy";
nctempstring->d[0]=strlen("El2d->gammaxy")+1;;
LibeArrayex(315,nctempstring,j,1,El2d->gammaxy->d[1]);
}
float nctemp1670 = Model->Beta1y->a[nctemp1663] * El2d->gammaxy->a[nctemp1667];
int nctemp1675=i;
if((0>i)||(i>=Model->Beta2y->d[0])){
nctempstring->a="Model->Beta2y";
nctempstring->d[0]=strlen("Model->Beta2y")+1;;
LibeArrayex(316,nctempstring,i,0,Model->Beta2y->d[0]);
}
nctemp1675=j*Model->Beta2y->d[0]+nctemp1675;
if((0>j)||(j>=Model->Beta2y->d[1])){
nctempstring->a="Model->Beta2y";
nctempstring->d[0]=strlen("Model->Beta2y")+1;;
LibeArrayex(316,nctempstring,j,1,Model->Beta2y->d[1]);
}
int nctemp1679=i;
if((0>i)||(i>=El2d->exy->d[0])){
nctempstring->a="El2d->exy";
nctempstring->d[0]=strlen("El2d->exy")+1;;
LibeArrayex(316,nctempstring,i,0,El2d->exy->d[0]);
}
nctemp1679=j*El2d->exy->d[0]+nctemp1679;
if((0>j)||(j>=El2d->exy->d[1])){
nctempstring->a="El2d->exy";
nctempstring->d[0]=strlen("El2d->exy")+1;;
LibeArrayex(316,nctempstring,j,1,El2d->exy->d[1]);
}
float nctemp1682 = Model->Beta2y->a[nctemp1675] * El2d->exy->a[nctemp1679];
float nctemp1683 = nctemp1670 + nctemp1682;
El2d->gammaxy->a[nctemp1653] =nctemp1683;
int nctemp1687=i;
if((0>i)||(i>=El2d->gammayx->d[0])){
nctempstring->a="El2d->gammayx";
nctempstring->d[0]=strlen("El2d->gammayx")+1;;
LibeArrayex(317,nctempstring,i,0,El2d->gammayx->d[0]);
}
nctemp1687=j*El2d->gammayx->d[0]+nctemp1687;
if((0>j)||(j>=El2d->gammayx->d[1])){
nctempstring->a="El2d->gammayx";
nctempstring->d[0]=strlen("El2d->gammayx")+1;;
LibeArrayex(317,nctempstring,j,1,El2d->gammayx->d[1]);
}
int nctemp1697=i;
if((0>i)||(i>=Model->Beta1x->d[0])){
nctempstring->a="Model->Beta1x";
nctempstring->d[0]=strlen("Model->Beta1x")+1;;
LibeArrayex(317,nctempstring,i,0,Model->Beta1x->d[0]);
}
nctemp1697=j*Model->Beta1x->d[0]+nctemp1697;
if((0>j)||(j>=Model->Beta1x->d[1])){
nctempstring->a="Model->Beta1x";
nctempstring->d[0]=strlen("Model->Beta1x")+1;;
LibeArrayex(317,nctempstring,j,1,Model->Beta1x->d[1]);
}
int nctemp1701=i;
if((0>i)||(i>=El2d->gammayx->d[0])){
nctempstring->a="El2d->gammayx";
nctempstring->d[0]=strlen("El2d->gammayx")+1;;
LibeArrayex(317,nctempstring,i,0,El2d->gammayx->d[0]);
}
nctemp1701=j*El2d->gammayx->d[0]+nctemp1701;
if((0>j)||(j>=El2d->gammayx->d[1])){
nctempstring->a="El2d->gammayx";
nctempstring->d[0]=strlen("El2d->gammayx")+1;;
LibeArrayex(317,nctempstring,j,1,El2d->gammayx->d[1]);
}
float nctemp1704 = Model->Beta1x->a[nctemp1697] * El2d->gammayx->a[nctemp1701];
int nctemp1709=i;
if((0>i)||(i>=Model->Beta2x->d[0])){
nctempstring->a="Model->Beta2x";
nctempstring->d[0]=strlen("Model->Beta2x")+1;;
LibeArrayex(318,nctempstring,i,0,Model->Beta2x->d[0]);
}
nctemp1709=j*Model->Beta2x->d[0]+nctemp1709;
if((0>j)||(j>=Model->Beta2x->d[1])){
nctempstring->a="Model->Beta2x";
nctempstring->d[0]=strlen("Model->Beta2x")+1;;
LibeArrayex(318,nctempstring,j,1,Model->Beta2x->d[1]);
}
int nctemp1713=i;
if((0>i)||(i>=El2d->eyx->d[0])){
nctempstring->a="El2d->eyx";
nctempstring->d[0]=strlen("El2d->eyx")+1;;
LibeArrayex(318,nctempstring,i,0,El2d->eyx->d[0]);
}
nctemp1713=j*El2d->eyx->d[0]+nctemp1713;
if((0>j)||(j>=El2d->eyx->d[1])){
nctempstring->a="El2d->eyx";
nctempstring->d[0]=strlen("El2d->eyx")+1;;
LibeArrayex(318,nctempstring,j,1,El2d->eyx->d[1]);
}
float nctemp1716 = Model->Beta2x->a[nctemp1709] * El2d->eyx->a[nctemp1713];
float nctemp1717 = nctemp1704 + nctemp1716;
El2d->gammayx->a[nctemp1687] =nctemp1717;
}
}}}
