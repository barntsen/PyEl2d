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
struct el2d {nctempfloat2 *p;
nctempfloat2 *sigmaxx;
nctempfloat2 *sigmayy;
nctempfloat2 *sigmaxy;
nctempfloat2 *vx;
nctempfloat2 *vy;
nctempfloat2 *exx;
nctempfloat2 *eyy;
nctempfloat2 *exy;
nctempfloat2 *gammax;
nctempfloat2 *gammay;
nctempfloat2 *thetax;
nctempfloat2 *thetay;
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
El2d->vx=nctemp56;
int nctemp68=Model->Nx;
nctemp68=nctemp68*Model->Ny;
nctempfloat2 *nctemp67;
nctemp67=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp67->d[0]=Model->Nx;
nctemp67->d[1]=Model->Ny;
nctemp67->a=(float *)RunMalloc(sizeof(float)*nctemp68);
El2d->vy=nctemp67;
int nctemp79=Model->Nx;
nctemp79=nctemp79*Model->Ny;
nctempfloat2 *nctemp78;
nctemp78=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp78->d[0]=Model->Nx;
nctemp78->d[1]=Model->Ny;
nctemp78->a=(float *)RunMalloc(sizeof(float)*nctemp79);
El2d->exx=nctemp78;
int nctemp90=Model->Nx;
nctemp90=nctemp90*Model->Ny;
nctempfloat2 *nctemp89;
nctemp89=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp89->d[0]=Model->Nx;
nctemp89->d[1]=Model->Ny;
nctemp89->a=(float *)RunMalloc(sizeof(float)*nctemp90);
El2d->eyy=nctemp89;
int nctemp101=Model->Nx;
nctemp101=nctemp101*Model->Ny;
nctempfloat2 *nctemp100;
nctemp100=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp100->d[0]=Model->Nx;
nctemp100->d[1]=Model->Ny;
nctemp100->a=(float *)RunMalloc(sizeof(float)*nctemp101);
El2d->exy=nctemp100;
int nctemp112=Model->Nx;
nctemp112=nctemp112*Model->Ny;
nctempfloat2 *nctemp111;
nctemp111=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp111->d[0]=Model->Nx;
nctemp111->d[1]=Model->Ny;
nctemp111->a=(float *)RunMalloc(sizeof(float)*nctemp112);
El2d->gammax=nctemp111;
int nctemp123=Model->Nx;
nctemp123=nctemp123*Model->Ny;
nctempfloat2 *nctemp122;
nctemp122=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp122->d[0]=Model->Nx;
nctemp122->d[1]=Model->Ny;
nctemp122->a=(float *)RunMalloc(sizeof(float)*nctemp123);
El2d->gammay=nctemp122;
int nctemp134=Model->Nx;
nctemp134=nctemp134*Model->Ny;
nctempfloat2 *nctemp133;
nctemp133=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp133->d[0]=Model->Nx;
nctemp133->d[1]=Model->Ny;
nctemp133->a=(float *)RunMalloc(sizeof(float)*nctemp134);
El2d->thetax=nctemp133;
int nctemp145=Model->Nx;
nctemp145=nctemp145*Model->Ny;
nctempfloat2 *nctemp144;
nctemp144=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp144->d[0]=Model->Nx;
nctemp144->d[1]=Model->Ny;
nctemp144->a=(float *)RunMalloc(sizeof(float)*nctemp145);
El2d->thetay=nctemp144;
i =0;
int nctemp154 = (i < Model->Nx);
while(nctemp154){
{
j =0;
int nctemp162 = (j < Model->Ny);
while(nctemp162){
{
int nctemp169=i;
if((0>i)||(i>=El2d->p->d[0])){
nctempstring->a="El2d->p";
nctempstring->d[0]=strlen("El2d->p")+1;;
LibeArrayex(47,nctempstring,i,0,El2d->p->d[0]);
}
nctemp169=j*El2d->p->d[0]+nctemp169;
if((0>j)||(j>=El2d->p->d[1])){
nctempstring->a="El2d->p";
nctempstring->d[0]=strlen("El2d->p")+1;;
LibeArrayex(47,nctempstring,j,1,El2d->p->d[1]);
}
El2d->p->a[nctemp169] =0.0;
int nctemp176=i;
if((0>i)||(i>=El2d->sigmaxx->d[0])){
nctempstring->a="El2d->sigmaxx";
nctempstring->d[0]=strlen("El2d->sigmaxx")+1;;
LibeArrayex(48,nctempstring,i,0,El2d->sigmaxx->d[0]);
}
nctemp176=j*El2d->sigmaxx->d[0]+nctemp176;
if((0>j)||(j>=El2d->sigmaxx->d[1])){
nctempstring->a="El2d->sigmaxx";
nctempstring->d[0]=strlen("El2d->sigmaxx")+1;;
LibeArrayex(48,nctempstring,j,1,El2d->sigmaxx->d[1]);
}
El2d->sigmaxx->a[nctemp176] =0.0;
int nctemp183=i;
if((0>i)||(i>=El2d->sigmayy->d[0])){
nctempstring->a="El2d->sigmayy";
nctempstring->d[0]=strlen("El2d->sigmayy")+1;;
LibeArrayex(49,nctempstring,i,0,El2d->sigmayy->d[0]);
}
nctemp183=j*El2d->sigmayy->d[0]+nctemp183;
if((0>j)||(j>=El2d->sigmayy->d[1])){
nctempstring->a="El2d->sigmayy";
nctempstring->d[0]=strlen("El2d->sigmayy")+1;;
LibeArrayex(49,nctempstring,j,1,El2d->sigmayy->d[1]);
}
El2d->sigmayy->a[nctemp183] =0.0;
int nctemp190=i;
if((0>i)||(i>=El2d->sigmaxy->d[0])){
nctempstring->a="El2d->sigmaxy";
nctempstring->d[0]=strlen("El2d->sigmaxy")+1;;
LibeArrayex(50,nctempstring,i,0,El2d->sigmaxy->d[0]);
}
nctemp190=j*El2d->sigmaxy->d[0]+nctemp190;
if((0>j)||(j>=El2d->sigmaxy->d[1])){
nctempstring->a="El2d->sigmaxy";
nctempstring->d[0]=strlen("El2d->sigmaxy")+1;;
LibeArrayex(50,nctempstring,j,1,El2d->sigmaxy->d[1]);
}
El2d->sigmaxy->a[nctemp190] =0.0;
int nctemp197=i;
if((0>i)||(i>=El2d->vx->d[0])){
nctempstring->a="El2d->vx";
nctempstring->d[0]=strlen("El2d->vx")+1;;
LibeArrayex(51,nctempstring,i,0,El2d->vx->d[0]);
}
nctemp197=j*El2d->vx->d[0]+nctemp197;
if((0>j)||(j>=El2d->vx->d[1])){
nctempstring->a="El2d->vx";
nctempstring->d[0]=strlen("El2d->vx")+1;;
LibeArrayex(51,nctempstring,j,1,El2d->vx->d[1]);
}
El2d->vx->a[nctemp197] =0.0;
int nctemp204=i;
if((0>i)||(i>=El2d->vy->d[0])){
nctempstring->a="El2d->vy";
nctempstring->d[0]=strlen("El2d->vy")+1;;
LibeArrayex(52,nctempstring,i,0,El2d->vy->d[0]);
}
nctemp204=j*El2d->vy->d[0]+nctemp204;
if((0>j)||(j>=El2d->vy->d[1])){
nctempstring->a="El2d->vy";
nctempstring->d[0]=strlen("El2d->vy")+1;;
LibeArrayex(52,nctempstring,j,1,El2d->vy->d[1]);
}
El2d->vy->a[nctemp204] =0.0;
int nctemp211=i;
if((0>i)||(i>=El2d->exx->d[0])){
nctempstring->a="El2d->exx";
nctempstring->d[0]=strlen("El2d->exx")+1;;
LibeArrayex(53,nctempstring,i,0,El2d->exx->d[0]);
}
nctemp211=j*El2d->exx->d[0]+nctemp211;
if((0>j)||(j>=El2d->exx->d[1])){
nctempstring->a="El2d->exx";
nctempstring->d[0]=strlen("El2d->exx")+1;;
LibeArrayex(53,nctempstring,j,1,El2d->exx->d[1]);
}
El2d->exx->a[nctemp211] =0.0;
int nctemp218=i;
if((0>i)||(i>=El2d->eyy->d[0])){
nctempstring->a="El2d->eyy";
nctempstring->d[0]=strlen("El2d->eyy")+1;;
LibeArrayex(54,nctempstring,i,0,El2d->eyy->d[0]);
}
nctemp218=j*El2d->eyy->d[0]+nctemp218;
if((0>j)||(j>=El2d->eyy->d[1])){
nctempstring->a="El2d->eyy";
nctempstring->d[0]=strlen("El2d->eyy")+1;;
LibeArrayex(54,nctempstring,j,1,El2d->eyy->d[1]);
}
El2d->eyy->a[nctemp218] =0.0;
int nctemp225=i;
if((0>i)||(i>=El2d->exy->d[0])){
nctempstring->a="El2d->exy";
nctempstring->d[0]=strlen("El2d->exy")+1;;
LibeArrayex(55,nctempstring,i,0,El2d->exy->d[0]);
}
nctemp225=j*El2d->exy->d[0]+nctemp225;
if((0>j)||(j>=El2d->exy->d[1])){
nctempstring->a="El2d->exy";
nctempstring->d[0]=strlen("El2d->exy")+1;;
LibeArrayex(55,nctempstring,j,1,El2d->exy->d[1]);
}
El2d->exy->a[nctemp225] =0.0;
int nctemp232=i;
if((0>i)||(i>=El2d->gammax->d[0])){
nctempstring->a="El2d->gammax";
nctempstring->d[0]=strlen("El2d->gammax")+1;;
LibeArrayex(56,nctempstring,i,0,El2d->gammax->d[0]);
}
nctemp232=j*El2d->gammax->d[0]+nctemp232;
if((0>j)||(j>=El2d->gammax->d[1])){
nctempstring->a="El2d->gammax";
nctempstring->d[0]=strlen("El2d->gammax")+1;;
LibeArrayex(56,nctempstring,j,1,El2d->gammax->d[1]);
}
El2d->gammax->a[nctemp232] =0.0;
int nctemp239=i;
if((0>i)||(i>=El2d->gammay->d[0])){
nctempstring->a="El2d->gammay";
nctempstring->d[0]=strlen("El2d->gammay")+1;;
LibeArrayex(57,nctempstring,i,0,El2d->gammay->d[0]);
}
nctemp239=j*El2d->gammay->d[0]+nctemp239;
if((0>j)||(j>=El2d->gammay->d[1])){
nctempstring->a="El2d->gammay";
nctempstring->d[0]=strlen("El2d->gammay")+1;;
LibeArrayex(57,nctempstring,j,1,El2d->gammay->d[1]);
}
El2d->gammay->a[nctemp239] =0.0;
int nctemp246=i;
if((0>i)||(i>=El2d->thetax->d[0])){
nctempstring->a="El2d->thetax";
nctempstring->d[0]=strlen("El2d->thetax")+1;;
LibeArrayex(58,nctempstring,i,0,El2d->thetax->d[0]);
}
nctemp246=j*El2d->thetax->d[0]+nctemp246;
if((0>j)||(j>=El2d->thetax->d[1])){
nctempstring->a="El2d->thetax";
nctempstring->d[0]=strlen("El2d->thetax")+1;;
LibeArrayex(58,nctempstring,j,1,El2d->thetax->d[1]);
}
El2d->thetax->a[nctemp246] =0.0;
int nctemp253=i;
if((0>i)||(i>=El2d->thetay->d[0])){
nctempstring->a="El2d->thetay";
nctempstring->d[0]=strlen("El2d->thetay")+1;;
LibeArrayex(59,nctempstring,i,0,El2d->thetay->d[0]);
}
nctemp253=j*El2d->thetay->d[0]+nctemp253;
if((0>j)||(j>=El2d->thetay->d[1])){
nctempstring->a="El2d->thetay";
nctempstring->d[0]=strlen("El2d->thetay")+1;;
LibeArrayex(59,nctempstring,j,1,El2d->thetay->d[1]);
}
El2d->thetay->a[nctemp253] =0.0;
El2d->ts =0;
}
int nctemp269 = j + 1;
j =nctemp269;
int nctemp270 = (j < Model->Ny);
nctemp162=nctemp270;
}
}
int nctemp282 = i + 1;
i =nctemp282;
int nctemp283 = (i < Model->Nx);
nctemp154=nctemp283;
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
int nctemp292= l;
struct diff* nctemp294=DiffNew(nctemp292);
Diff =nctemp294;
int nctemp301=Model->Nx;
nctemp301=nctemp301*Model->Ny;
nctempfloat2 *nctemp300;
nctemp300=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp300->d[0]=Model->Nx;
nctemp300->d[1]=Model->Ny;
nctemp300->a=(float *)RunMalloc(sizeof(float)*nctemp301);
tmp1=nctemp300;
int nctemp312=Model->Nx;
nctemp312=nctemp312*Model->Ny;
nctempfloat2 *nctemp311;
nctemp311=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp311->d[0]=Model->Nx;
nctemp311->d[1]=Model->Ny;
nctemp311->a=(float *)RunMalloc(sizeof(float)*nctemp312);
tmp2=nctemp311;
oldperc =0.0;
ns =El2d->ts;
int nctemp333 = ns + nt;
ne =nctemp333;
i =ns;
int nctemp338 = (i < ne);
while(nctemp338){
{
struct diff* nctemp343= Diff;
nctempfloat2* nctemp345= El2d->sigmaxx;
nctempfloat2* nctemp348= El2d->exx;
float nctemp351= Model->Dx;
int nctemp353=DiffDxplus(nctemp343,nctemp345,nctemp348,nctemp351);
struct diff* nctemp355= Diff;
nctempfloat2* nctemp357= El2d->sigmaxy;
nctempfloat2* nctemp360= El2d->exy;
float nctemp363= Model->Dx;
int nctemp365=DiffDyminus(nctemp355,nctemp357,nctemp360,nctemp363);
struct el2d* nctemp367= El2d;
struct model* nctemp369= Model;
int nctemp371=El2dvx(nctemp367,nctemp369);
struct diff* nctemp373= Diff;
nctempfloat2* nctemp375= El2d->sigmayy;
nctempfloat2* nctemp378= El2d->eyy;
float nctemp381= Model->Dx;
int nctemp383=DiffDyplus(nctemp373,nctemp375,nctemp378,nctemp381);
struct diff* nctemp385= Diff;
nctempfloat2* nctemp387= El2d->sigmaxy;
nctempfloat2* nctemp390= El2d->exy;
float nctemp393= Model->Dx;
int nctemp395=DiffDxminus(nctemp385,nctemp387,nctemp390,nctemp393);
struct el2d* nctemp397= El2d;
struct model* nctemp399= Model;
int nctemp401=El2dvy(nctemp397,nctemp399);
struct diff* nctemp403= Diff;
nctempfloat2* nctemp405= El2d->vx;
nctempfloat2* nctemp408= El2d->exx;
float nctemp411= Model->Dx;
int nctemp413=DiffDxminus(nctemp403,nctemp405,nctemp408,nctemp411);
struct diff* nctemp415= Diff;
nctempfloat2* nctemp417= El2d->vy;
nctempfloat2* nctemp420= El2d->eyy;
float nctemp423= Model->Dx;
int nctemp425=DiffDyminus(nctemp415,nctemp417,nctemp420,nctemp423);
struct diff* nctemp427= Diff;
nctempfloat2* nctemp429= El2d->vy;
nctempfloat2* nctemp432= tmp1;
float nctemp435= Model->Dx;
int nctemp437=DiffDxplus(nctemp427,nctemp429,nctemp432,nctemp435);
struct diff* nctemp439= Diff;
nctempfloat2* nctemp441= El2d->vx;
nctempfloat2* nctemp444= tmp2;
float nctemp447= Model->Dx;
int nctemp449=DiffDyplus(nctemp439,nctemp441,nctemp444,nctemp447);
struct el2d* nctemp451= El2d;
struct model* nctemp453= Model;
nctempfloat2* nctemp455= tmp1;
nctempfloat2* nctemp458= tmp2;
int nctemp461=El2dexy(nctemp451,nctemp453,nctemp455,nctemp458);
struct el2d* nctemp463= El2d;
struct model* nctemp465= Model;
int nctemp467=El2dstress(nctemp463,nctemp465);
k =0;
int nctemp472 = (k < Src->Ns);
while(nctemp472){
{
int nctemp480=k;
if((0>k)||(k>=Src->Sx->d[0])){
nctempstring->a="Src->Sx";
nctempstring->d[0]=strlen("Src->Sx")+1;;
LibeArrayex(139,nctempstring,k,0,Src->Sx->d[0]);
}
sx =Src->Sx->a[nctemp480];
int nctemp486=k;
if((0>k)||(k>=Src->Sy->d[0])){
nctempstring->a="Src->Sy";
nctempstring->d[0]=strlen("Src->Sy")+1;;
LibeArrayex(140,nctempstring,k,0,Src->Sy->d[0]);
}
sy =Src->Sy->a[nctemp486];
int nctemp491=sx;
if((0>sx)||(sx>=El2d->vy->d[0])){
nctempstring->a="El2d->vy";
nctempstring->d[0]=strlen("El2d->vy")+1;;
LibeArrayex(147,nctempstring,sx,0,El2d->vy->d[0]);
}
nctemp491=sy*El2d->vy->d[0]+nctemp491;
if((0>sy)||(sy>=El2d->vy->d[1])){
nctempstring->a="El2d->vy";
nctempstring->d[0]=strlen("El2d->vy")+1;;
LibeArrayex(147,nctempstring,sy,1,El2d->vy->d[1]);
}
int nctemp498=sx;
if((0>sx)||(sx>=El2d->vy->d[0])){
nctempstring->a="El2d->vy";
nctempstring->d[0]=strlen("El2d->vy")+1;;
LibeArrayex(147,nctempstring,sx,0,El2d->vy->d[0]);
}
nctemp498=sy*El2d->vy->d[0]+nctemp498;
if((0>sy)||(sy>=El2d->vy->d[1])){
nctempstring->a="El2d->vy";
nctempstring->d[0]=strlen("El2d->vy")+1;;
LibeArrayex(147,nctempstring,sy,1,El2d->vy->d[1]);
}
int nctemp509=i;
if((0>i)||(i>=Src->Src->d[0])){
nctempstring->a="Src->Src";
nctempstring->d[0]=strlen("Src->Src")+1;;
LibeArrayex(148,nctempstring,i,0,Src->Src->d[0]);
}
float nctemp516 = Model->Dx * Model->Dx;
float nctemp517 = Src->Src->a[nctemp509] / nctemp516;
float nctemp518 = Model->Dt * nctemp517;
float nctemp519 = El2d->vy->a[nctemp498] + nctemp518;
El2d->vy->a[nctemp491] =nctemp519;
}
int nctemp528 = k + 1;
k =nctemp528;
int nctemp529 = (k < Src->Ns);
nctemp472=nctemp529;
}
float nctemp544=(float)(i);
int nctemp557 = ne - ns;
int nctemp559 = nctemp557 - 1;
float nctemp548=(float)(nctemp559);
float nctemp560 = nctemp544 / nctemp548;
float nctemp561 = 1000.0 * nctemp560;
perc =nctemp561;
float nctemp569 = perc - oldperc;
int nctemp562 = (nctemp569 >= 10.0);
if(nctemp562)
{
int nctemp578=(int)(perc);
int nctemp582 = nctemp578 / 10;
iperc =nctemp582;
int nctemp586= iperc;
int nctemp588= 10;
int nctemp590=LibeMod(nctemp586,nctemp588);
int nctemp583 = (nctemp590 ==0);
if(nctemp583)
{
int nctemp593= 4;
int nctemp595= iperc;
int nctemp597=LibePuti(nctemp593,nctemp595);
int nctemp599= 4;
struct nctempchar1 *nctemp603;
static struct nctempchar1 nctemp604 = {{ 3}, (char*)"\n\0"};
nctemp603=&nctemp604;
nctempchar1* nctemp601= nctemp603;
int nctemp605=LibePuts(nctemp599,nctemp601);
int nctemp607= 4;
int nctemp609=LibeFlush(nctemp607);
}
oldperc =perc;
}
struct rec* nctemp615= Rec;
int nctemp617= i;
nctempfloat2* nctemp619= El2d->vx;
int nctemp622=RecReceiver(nctemp615,nctemp617,nctemp619);
struct rec* nctemp624= Rec;
int nctemp626= i;
nctempfloat2* nctemp628= El2d->vx;
int nctemp631=RecSnap(nctemp624,nctemp626,nctemp628);
}
int nctemp640 = i + 1;
i =nctemp640;
int nctemp641 = (i < ne);
nctemp338=nctemp641;
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
int nctemp661=i;
if((0>i)||(i>=El2d->vx->d[0])){
nctempstring->a="El2d->vx";
nctempstring->d[0]=strlen("El2d->vx")+1;;
LibeArrayex(188,nctempstring,i,0,El2d->vx->d[0]);
}
nctemp661=j*El2d->vx->d[0]+nctemp661;
if((0>j)||(j>=El2d->vx->d[1])){
nctempstring->a="El2d->vx";
nctempstring->d[0]=strlen("El2d->vx")+1;;
LibeArrayex(188,nctempstring,j,1,El2d->vx->d[1]);
}
int nctemp675=i;
if((0>i)||(i>=Model->Rho->d[0])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(188,nctempstring,i,0,Model->Rho->d[0]);
}
nctemp675=j*Model->Rho->d[0]+nctemp675;
if((0>j)||(j>=Model->Rho->d[1])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(188,nctempstring,j,1,Model->Rho->d[1]);
}
float nctemp678 = Model->Dt * Model->Rho->a[nctemp675];
int nctemp683=i;
if((0>i)||(i>=El2d->exx->d[0])){
nctempstring->a="El2d->exx";
nctempstring->d[0]=strlen("El2d->exx")+1;;
LibeArrayex(188,nctempstring,i,0,El2d->exx->d[0]);
}
nctemp683=j*El2d->exx->d[0]+nctemp683;
if((0>j)||(j>=El2d->exx->d[1])){
nctempstring->a="El2d->exx";
nctempstring->d[0]=strlen("El2d->exx")+1;;
LibeArrayex(188,nctempstring,j,1,El2d->exx->d[1]);
}
int nctemp687=i;
if((0>i)||(i>=El2d->exy->d[0])){
nctempstring->a="El2d->exy";
nctempstring->d[0]=strlen("El2d->exy")+1;;
LibeArrayex(188,nctempstring,i,0,El2d->exy->d[0]);
}
nctemp687=j*El2d->exy->d[0]+nctemp687;
if((0>j)||(j>=El2d->exy->d[1])){
nctempstring->a="El2d->exy";
nctempstring->d[0]=strlen("El2d->exy")+1;;
LibeArrayex(188,nctempstring,j,1,El2d->exy->d[1]);
}
float nctemp690 = El2d->exx->a[nctemp683] + El2d->exy->a[nctemp687];
float nctemp691 = nctemp678 * nctemp690;
int nctemp693=i;
if((0>i)||(i>=El2d->vx->d[0])){
nctempstring->a="El2d->vx";
nctempstring->d[0]=strlen("El2d->vx")+1;;
LibeArrayex(189,nctempstring,i,0,El2d->vx->d[0]);
}
nctemp693=j*El2d->vx->d[0]+nctemp693;
if((0>j)||(j>=El2d->vx->d[1])){
nctempstring->a="El2d->vx";
nctempstring->d[0]=strlen("El2d->vx")+1;;
LibeArrayex(189,nctempstring,j,1,El2d->vx->d[1]);
}
float nctemp696 = nctemp691 + El2d->vx->a[nctemp693];
El2d->vx->a[nctemp661] =nctemp696;
}
}}return 1;
}
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
int nctemp713=i;
if((0>i)||(i>=El2d->vy->d[0])){
nctempstring->a="El2d->vy";
nctempstring->d[0]=strlen("El2d->vy")+1;;
LibeArrayex(210,nctempstring,i,0,El2d->vy->d[0]);
}
nctemp713=j*El2d->vy->d[0]+nctemp713;
if((0>j)||(j>=El2d->vy->d[1])){
nctempstring->a="El2d->vy";
nctempstring->d[0]=strlen("El2d->vy")+1;;
LibeArrayex(210,nctempstring,j,1,El2d->vy->d[1]);
}
int nctemp727=i;
if((0>i)||(i>=Model->Rho->d[0])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(210,nctempstring,i,0,Model->Rho->d[0]);
}
nctemp727=j*Model->Rho->d[0]+nctemp727;
if((0>j)||(j>=Model->Rho->d[1])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(210,nctempstring,j,1,Model->Rho->d[1]);
}
float nctemp730 = Model->Dt * Model->Rho->a[nctemp727];
int nctemp735=i;
if((0>i)||(i>=El2d->eyy->d[0])){
nctempstring->a="El2d->eyy";
nctempstring->d[0]=strlen("El2d->eyy")+1;;
LibeArrayex(210,nctempstring,i,0,El2d->eyy->d[0]);
}
nctemp735=j*El2d->eyy->d[0]+nctemp735;
if((0>j)||(j>=El2d->eyy->d[1])){
nctempstring->a="El2d->eyy";
nctempstring->d[0]=strlen("El2d->eyy")+1;;
LibeArrayex(210,nctempstring,j,1,El2d->eyy->d[1]);
}
int nctemp739=i;
if((0>i)||(i>=El2d->exy->d[0])){
nctempstring->a="El2d->exy";
nctempstring->d[0]=strlen("El2d->exy")+1;;
LibeArrayex(210,nctempstring,i,0,El2d->exy->d[0]);
}
nctemp739=j*El2d->exy->d[0]+nctemp739;
if((0>j)||(j>=El2d->exy->d[1])){
nctempstring->a="El2d->exy";
nctempstring->d[0]=strlen("El2d->exy")+1;;
LibeArrayex(210,nctempstring,j,1,El2d->exy->d[1]);
}
float nctemp742 = El2d->eyy->a[nctemp735] + El2d->exy->a[nctemp739];
float nctemp743 = nctemp730 * nctemp742;
int nctemp745=i;
if((0>i)||(i>=El2d->vy->d[0])){
nctempstring->a="El2d->vy";
nctempstring->d[0]=strlen("El2d->vy")+1;;
LibeArrayex(211,nctempstring,i,0,El2d->vy->d[0]);
}
nctemp745=j*El2d->vy->d[0]+nctemp745;
if((0>j)||(j>=El2d->vy->d[1])){
nctempstring->a="El2d->vy";
nctempstring->d[0]=strlen("El2d->vy")+1;;
LibeArrayex(211,nctempstring,j,1,El2d->vy->d[1]);
}
float nctemp748 = nctemp743 + El2d->vy->a[nctemp745];
El2d->vy->a[nctemp713] =nctemp748;
}
}}return 1;
}
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
int nctemp765=i;
if((0>i)||(i>=El2d->exy->d[0])){
nctempstring->a="El2d->exy";
nctempstring->d[0]=strlen("El2d->exy")+1;;
LibeArrayex(230,nctempstring,i,0,El2d->exy->d[0]);
}
nctemp765=j*El2d->exy->d[0]+nctemp765;
if((0>j)||(j>=El2d->exy->d[1])){
nctempstring->a="El2d->exy";
nctempstring->d[0]=strlen("El2d->exy")+1;;
LibeArrayex(230,nctempstring,j,1,El2d->exy->d[1]);
}
int nctemp776=i;
if((0>i)||(i>=tmp1->d[0])){
nctempstring->a="tmp1";
nctempstring->d[0]=strlen("tmp1")+1;;
LibeArrayex(230,nctempstring,i,0,tmp1->d[0]);
}
nctemp776=j*tmp1->d[0]+nctemp776;
if((0>j)||(j>=tmp1->d[1])){
nctempstring->a="tmp1";
nctempstring->d[0]=strlen("tmp1")+1;;
LibeArrayex(230,nctempstring,j,1,tmp1->d[1]);
}
int nctemp780=i;
if((0>i)||(i>=tmp2->d[0])){
nctempstring->a="tmp2";
nctempstring->d[0]=strlen("tmp2")+1;;
LibeArrayex(230,nctempstring,i,0,tmp2->d[0]);
}
nctemp780=j*tmp2->d[0]+nctemp780;
if((0>j)||(j>=tmp2->d[1])){
nctempstring->a="tmp2";
nctempstring->d[0]=strlen("tmp2")+1;;
LibeArrayex(230,nctempstring,j,1,tmp2->d[1]);
}
float nctemp783 = tmp1->a[nctemp776] + tmp2->a[nctemp780];
float nctemp784 = 0.5 * nctemp783;
El2d->exy->a[nctemp765] =nctemp784;
}
}}return 1;
}
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
int nctemp801=i;
if((0>i)||(i>=El2d->sigmaxx->d[0])){
nctempstring->a="El2d->sigmaxx";
nctempstring->d[0]=strlen("El2d->sigmaxx")+1;;
LibeArrayex(247,nctempstring,i,0,El2d->sigmaxx->d[0]);
}
nctemp801=j*El2d->sigmaxx->d[0]+nctemp801;
if((0>j)||(j>=El2d->sigmaxx->d[1])){
nctempstring->a="El2d->sigmaxx";
nctempstring->d[0]=strlen("El2d->sigmaxx")+1;;
LibeArrayex(247,nctempstring,j,1,El2d->sigmaxx->d[1]);
}
int nctemp818=i;
if((0>i)||(i>=Model->Lambda->d[0])){
nctempstring->a="Model->Lambda";
nctempstring->d[0]=strlen("Model->Lambda")+1;;
LibeArrayex(247,nctempstring,i,0,Model->Lambda->d[0]);
}
nctemp818=j*Model->Lambda->d[0]+nctemp818;
if((0>j)||(j>=Model->Lambda->d[1])){
nctempstring->a="Model->Lambda";
nctempstring->d[0]=strlen("Model->Lambda")+1;;
LibeArrayex(247,nctempstring,j,1,Model->Lambda->d[1]);
}
float nctemp821 = Model->Dt * Model->Lambda->a[nctemp818];
int nctemp826=i;
if((0>i)||(i>=El2d->exx->d[0])){
nctempstring->a="El2d->exx";
nctempstring->d[0]=strlen("El2d->exx")+1;;
LibeArrayex(247,nctempstring,i,0,El2d->exx->d[0]);
}
nctemp826=j*El2d->exx->d[0]+nctemp826;
if((0>j)||(j>=El2d->exx->d[1])){
nctempstring->a="El2d->exx";
nctempstring->d[0]=strlen("El2d->exx")+1;;
LibeArrayex(247,nctempstring,j,1,El2d->exx->d[1]);
}
int nctemp830=i;
if((0>i)||(i>=El2d->eyy->d[0])){
nctempstring->a="El2d->eyy";
nctempstring->d[0]=strlen("El2d->eyy")+1;;
LibeArrayex(247,nctempstring,i,0,El2d->eyy->d[0]);
}
nctemp830=j*El2d->eyy->d[0]+nctemp830;
if((0>j)||(j>=El2d->eyy->d[1])){
nctempstring->a="El2d->eyy";
nctempstring->d[0]=strlen("El2d->eyy")+1;;
LibeArrayex(247,nctempstring,j,1,El2d->eyy->d[1]);
}
float nctemp833 = El2d->exx->a[nctemp826] + El2d->eyy->a[nctemp830];
float nctemp834 = nctemp821 * nctemp833;
float nctemp846 = 2.0 * Model->Dt;
int nctemp848=i;
if((0>i)||(i>=Model->Mu->d[0])){
nctempstring->a="Model->Mu";
nctempstring->d[0]=strlen("Model->Mu")+1;;
LibeArrayex(248,nctempstring,i,0,Model->Mu->d[0]);
}
nctemp848=j*Model->Mu->d[0]+nctemp848;
if((0>j)||(j>=Model->Mu->d[1])){
nctempstring->a="Model->Mu";
nctempstring->d[0]=strlen("Model->Mu")+1;;
LibeArrayex(248,nctempstring,j,1,Model->Mu->d[1]);
}
float nctemp851 = nctemp846 * Model->Mu->a[nctemp848];
int nctemp853=i;
if((0>i)||(i>=El2d->exx->d[0])){
nctempstring->a="El2d->exx";
nctempstring->d[0]=strlen("El2d->exx")+1;;
LibeArrayex(248,nctempstring,i,0,El2d->exx->d[0]);
}
nctemp853=j*El2d->exx->d[0]+nctemp853;
if((0>j)||(j>=El2d->exx->d[1])){
nctempstring->a="El2d->exx";
nctempstring->d[0]=strlen("El2d->exx")+1;;
LibeArrayex(248,nctempstring,j,1,El2d->exx->d[1]);
}
float nctemp856 = nctemp851 * El2d->exx->a[nctemp853];
float nctemp857 = nctemp834 + nctemp856;
int nctemp859=i;
if((0>i)||(i>=El2d->sigmaxx->d[0])){
nctempstring->a="El2d->sigmaxx";
nctempstring->d[0]=strlen("El2d->sigmaxx")+1;;
LibeArrayex(249,nctempstring,i,0,El2d->sigmaxx->d[0]);
}
nctemp859=j*El2d->sigmaxx->d[0]+nctemp859;
if((0>j)||(j>=El2d->sigmaxx->d[1])){
nctempstring->a="El2d->sigmaxx";
nctempstring->d[0]=strlen("El2d->sigmaxx")+1;;
LibeArrayex(249,nctempstring,j,1,El2d->sigmaxx->d[1]);
}
float nctemp862 = nctemp857 + El2d->sigmaxx->a[nctemp859];
El2d->sigmaxx->a[nctemp801] =nctemp862;
int nctemp866=i;
if((0>i)||(i>=El2d->sigmayy->d[0])){
nctempstring->a="El2d->sigmayy";
nctempstring->d[0]=strlen("El2d->sigmayy")+1;;
LibeArrayex(251,nctempstring,i,0,El2d->sigmayy->d[0]);
}
nctemp866=j*El2d->sigmayy->d[0]+nctemp866;
if((0>j)||(j>=El2d->sigmayy->d[1])){
nctempstring->a="El2d->sigmayy";
nctempstring->d[0]=strlen("El2d->sigmayy")+1;;
LibeArrayex(251,nctempstring,j,1,El2d->sigmayy->d[1]);
}
int nctemp883=i;
if((0>i)||(i>=Model->Lambda->d[0])){
nctempstring->a="Model->Lambda";
nctempstring->d[0]=strlen("Model->Lambda")+1;;
LibeArrayex(251,nctempstring,i,0,Model->Lambda->d[0]);
}
nctemp883=j*Model->Lambda->d[0]+nctemp883;
if((0>j)||(j>=Model->Lambda->d[1])){
nctempstring->a="Model->Lambda";
nctempstring->d[0]=strlen("Model->Lambda")+1;;
LibeArrayex(251,nctempstring,j,1,Model->Lambda->d[1]);
}
float nctemp886 = Model->Dt * Model->Lambda->a[nctemp883];
int nctemp891=i;
if((0>i)||(i>=El2d->exx->d[0])){
nctempstring->a="El2d->exx";
nctempstring->d[0]=strlen("El2d->exx")+1;;
LibeArrayex(251,nctempstring,i,0,El2d->exx->d[0]);
}
nctemp891=j*El2d->exx->d[0]+nctemp891;
if((0>j)||(j>=El2d->exx->d[1])){
nctempstring->a="El2d->exx";
nctempstring->d[0]=strlen("El2d->exx")+1;;
LibeArrayex(251,nctempstring,j,1,El2d->exx->d[1]);
}
int nctemp895=i;
if((0>i)||(i>=El2d->eyy->d[0])){
nctempstring->a="El2d->eyy";
nctempstring->d[0]=strlen("El2d->eyy")+1;;
LibeArrayex(251,nctempstring,i,0,El2d->eyy->d[0]);
}
nctemp895=j*El2d->eyy->d[0]+nctemp895;
if((0>j)||(j>=El2d->eyy->d[1])){
nctempstring->a="El2d->eyy";
nctempstring->d[0]=strlen("El2d->eyy")+1;;
LibeArrayex(251,nctempstring,j,1,El2d->eyy->d[1]);
}
float nctemp898 = El2d->exx->a[nctemp891] + El2d->eyy->a[nctemp895];
float nctemp899 = nctemp886 * nctemp898;
float nctemp911 = 2.0 * Model->Dt;
int nctemp913=i;
if((0>i)||(i>=Model->Mu->d[0])){
nctempstring->a="Model->Mu";
nctempstring->d[0]=strlen("Model->Mu")+1;;
LibeArrayex(252,nctempstring,i,0,Model->Mu->d[0]);
}
nctemp913=j*Model->Mu->d[0]+nctemp913;
if((0>j)||(j>=Model->Mu->d[1])){
nctempstring->a="Model->Mu";
nctempstring->d[0]=strlen("Model->Mu")+1;;
LibeArrayex(252,nctempstring,j,1,Model->Mu->d[1]);
}
float nctemp916 = nctemp911 * Model->Mu->a[nctemp913];
int nctemp918=i;
if((0>i)||(i>=El2d->eyy->d[0])){
nctempstring->a="El2d->eyy";
nctempstring->d[0]=strlen("El2d->eyy")+1;;
LibeArrayex(252,nctempstring,i,0,El2d->eyy->d[0]);
}
nctemp918=j*El2d->eyy->d[0]+nctemp918;
if((0>j)||(j>=El2d->eyy->d[1])){
nctempstring->a="El2d->eyy";
nctempstring->d[0]=strlen("El2d->eyy")+1;;
LibeArrayex(252,nctempstring,j,1,El2d->eyy->d[1]);
}
float nctemp921 = nctemp916 * El2d->eyy->a[nctemp918];
float nctemp922 = nctemp899 + nctemp921;
int nctemp924=i;
if((0>i)||(i>=El2d->sigmayy->d[0])){
nctempstring->a="El2d->sigmayy";
nctempstring->d[0]=strlen("El2d->sigmayy")+1;;
LibeArrayex(253,nctempstring,i,0,El2d->sigmayy->d[0]);
}
nctemp924=j*El2d->sigmayy->d[0]+nctemp924;
if((0>j)||(j>=El2d->sigmayy->d[1])){
nctempstring->a="El2d->sigmayy";
nctempstring->d[0]=strlen("El2d->sigmayy")+1;;
LibeArrayex(253,nctempstring,j,1,El2d->sigmayy->d[1]);
}
float nctemp927 = nctemp922 + El2d->sigmayy->a[nctemp924];
El2d->sigmayy->a[nctemp866] =nctemp927;
int nctemp931=i;
if((0>i)||(i>=El2d->sigmaxy->d[0])){
nctempstring->a="El2d->sigmaxy";
nctempstring->d[0]=strlen("El2d->sigmaxy")+1;;
LibeArrayex(254,nctempstring,i,0,El2d->sigmaxy->d[0]);
}
nctemp931=j*El2d->sigmaxy->d[0]+nctemp931;
if((0>j)||(j>=El2d->sigmaxy->d[1])){
nctempstring->a="El2d->sigmaxy";
nctempstring->d[0]=strlen("El2d->sigmaxy")+1;;
LibeArrayex(254,nctempstring,j,1,El2d->sigmaxy->d[1]);
}
float nctemp948 = 2.0 * Model->Dt;
int nctemp950=i;
if((0>i)||(i>=Model->Mu->d[0])){
nctempstring->a="Model->Mu";
nctempstring->d[0]=strlen("Model->Mu")+1;;
LibeArrayex(254,nctempstring,i,0,Model->Mu->d[0]);
}
nctemp950=j*Model->Mu->d[0]+nctemp950;
if((0>j)||(j>=Model->Mu->d[1])){
nctempstring->a="Model->Mu";
nctempstring->d[0]=strlen("Model->Mu")+1;;
LibeArrayex(254,nctempstring,j,1,Model->Mu->d[1]);
}
float nctemp953 = nctemp948 * Model->Mu->a[nctemp950];
int nctemp955=i;
if((0>i)||(i>=El2d->exy->d[0])){
nctempstring->a="El2d->exy";
nctempstring->d[0]=strlen("El2d->exy")+1;;
LibeArrayex(254,nctempstring,i,0,El2d->exy->d[0]);
}
nctemp955=j*El2d->exy->d[0]+nctemp955;
if((0>j)||(j>=El2d->exy->d[1])){
nctempstring->a="El2d->exy";
nctempstring->d[0]=strlen("El2d->exy")+1;;
LibeArrayex(254,nctempstring,j,1,El2d->exy->d[1]);
}
float nctemp958 = nctemp953 * El2d->exy->a[nctemp955];
int nctemp960=i;
if((0>i)||(i>=El2d->sigmaxy->d[0])){
nctempstring->a="El2d->sigmaxy";
nctempstring->d[0]=strlen("El2d->sigmaxy")+1;;
LibeArrayex(255,nctempstring,i,0,El2d->sigmaxy->d[0]);
}
nctemp960=j*El2d->sigmaxy->d[0]+nctemp960;
if((0>j)||(j>=El2d->sigmaxy->d[1])){
nctempstring->a="El2d->sigmaxy";
nctempstring->d[0]=strlen("El2d->sigmaxy")+1;;
LibeArrayex(255,nctempstring,j,1,El2d->sigmaxy->d[1]);
}
float nctemp963 = nctemp958 + El2d->sigmaxy->a[nctemp960];
El2d->sigmaxy->a[nctemp931] =nctemp963;
}
}}return 1;
}
