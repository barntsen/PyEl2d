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
nctempfloat2 *gammaxx;
nctempfloat2 *gammayy;
nctempfloat2 *gammaxy;
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
El2d->gammaxx=nctemp111;
int nctemp123=Model->Nx;
nctemp123=nctemp123*Model->Ny;
nctempfloat2 *nctemp122;
nctemp122=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp122->d[0]=Model->Nx;
nctemp122->d[1]=Model->Ny;
nctemp122->a=(float *)RunMalloc(sizeof(float)*nctemp123);
El2d->gammayy=nctemp122;
int nctemp134=Model->Nx;
nctemp134=nctemp134*Model->Ny;
nctempfloat2 *nctemp133;
nctemp133=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp133->d[0]=Model->Nx;
nctemp133->d[1]=Model->Ny;
nctemp133->a=(float *)RunMalloc(sizeof(float)*nctemp134);
El2d->gammaxy=nctemp133;
int nctemp145=Model->Nx;
nctemp145=nctemp145*Model->Ny;
nctempfloat2 *nctemp144;
nctemp144=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp144->d[0]=Model->Nx;
nctemp144->d[1]=Model->Ny;
nctemp144->a=(float *)RunMalloc(sizeof(float)*nctemp145);
El2d->thetax=nctemp144;
int nctemp156=Model->Nx;
nctemp156=nctemp156*Model->Ny;
nctempfloat2 *nctemp155;
nctemp155=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp155->d[0]=Model->Nx;
nctemp155->d[1]=Model->Ny;
nctemp155->a=(float *)RunMalloc(sizeof(float)*nctemp156);
El2d->thetay=nctemp155;
i =0;
int nctemp165 = (i < Model->Nx);
while(nctemp165){
{
j =0;
int nctemp173 = (j < Model->Ny);
while(nctemp173){
{
int nctemp180=i;
if((0>i)||(i>=El2d->p->d[0])){
nctempstring->a="El2d->p";
nctempstring->d[0]=strlen("El2d->p")+1;;
LibeArrayex(49,nctempstring,i,0,El2d->p->d[0]);
}
nctemp180=j*El2d->p->d[0]+nctemp180;
if((0>j)||(j>=El2d->p->d[1])){
nctempstring->a="El2d->p";
nctempstring->d[0]=strlen("El2d->p")+1;;
LibeArrayex(49,nctempstring,j,1,El2d->p->d[1]);
}
El2d->p->a[nctemp180] =0.0;
int nctemp187=i;
if((0>i)||(i>=El2d->sigmaxx->d[0])){
nctempstring->a="El2d->sigmaxx";
nctempstring->d[0]=strlen("El2d->sigmaxx")+1;;
LibeArrayex(50,nctempstring,i,0,El2d->sigmaxx->d[0]);
}
nctemp187=j*El2d->sigmaxx->d[0]+nctemp187;
if((0>j)||(j>=El2d->sigmaxx->d[1])){
nctempstring->a="El2d->sigmaxx";
nctempstring->d[0]=strlen("El2d->sigmaxx")+1;;
LibeArrayex(50,nctempstring,j,1,El2d->sigmaxx->d[1]);
}
El2d->sigmaxx->a[nctemp187] =0.0;
int nctemp194=i;
if((0>i)||(i>=El2d->sigmayy->d[0])){
nctempstring->a="El2d->sigmayy";
nctempstring->d[0]=strlen("El2d->sigmayy")+1;;
LibeArrayex(51,nctempstring,i,0,El2d->sigmayy->d[0]);
}
nctemp194=j*El2d->sigmayy->d[0]+nctemp194;
if((0>j)||(j>=El2d->sigmayy->d[1])){
nctempstring->a="El2d->sigmayy";
nctempstring->d[0]=strlen("El2d->sigmayy")+1;;
LibeArrayex(51,nctempstring,j,1,El2d->sigmayy->d[1]);
}
El2d->sigmayy->a[nctemp194] =0.0;
int nctemp201=i;
if((0>i)||(i>=El2d->sigmaxy->d[0])){
nctempstring->a="El2d->sigmaxy";
nctempstring->d[0]=strlen("El2d->sigmaxy")+1;;
LibeArrayex(52,nctempstring,i,0,El2d->sigmaxy->d[0]);
}
nctemp201=j*El2d->sigmaxy->d[0]+nctemp201;
if((0>j)||(j>=El2d->sigmaxy->d[1])){
nctempstring->a="El2d->sigmaxy";
nctempstring->d[0]=strlen("El2d->sigmaxy")+1;;
LibeArrayex(52,nctempstring,j,1,El2d->sigmaxy->d[1]);
}
El2d->sigmaxy->a[nctemp201] =0.0;
int nctemp208=i;
if((0>i)||(i>=El2d->vx->d[0])){
nctempstring->a="El2d->vx";
nctempstring->d[0]=strlen("El2d->vx")+1;;
LibeArrayex(53,nctempstring,i,0,El2d->vx->d[0]);
}
nctemp208=j*El2d->vx->d[0]+nctemp208;
if((0>j)||(j>=El2d->vx->d[1])){
nctempstring->a="El2d->vx";
nctempstring->d[0]=strlen("El2d->vx")+1;;
LibeArrayex(53,nctempstring,j,1,El2d->vx->d[1]);
}
El2d->vx->a[nctemp208] =0.0;
int nctemp215=i;
if((0>i)||(i>=El2d->vy->d[0])){
nctempstring->a="El2d->vy";
nctempstring->d[0]=strlen("El2d->vy")+1;;
LibeArrayex(54,nctempstring,i,0,El2d->vy->d[0]);
}
nctemp215=j*El2d->vy->d[0]+nctemp215;
if((0>j)||(j>=El2d->vy->d[1])){
nctempstring->a="El2d->vy";
nctempstring->d[0]=strlen("El2d->vy")+1;;
LibeArrayex(54,nctempstring,j,1,El2d->vy->d[1]);
}
El2d->vy->a[nctemp215] =0.0;
int nctemp222=i;
if((0>i)||(i>=El2d->exx->d[0])){
nctempstring->a="El2d->exx";
nctempstring->d[0]=strlen("El2d->exx")+1;;
LibeArrayex(55,nctempstring,i,0,El2d->exx->d[0]);
}
nctemp222=j*El2d->exx->d[0]+nctemp222;
if((0>j)||(j>=El2d->exx->d[1])){
nctempstring->a="El2d->exx";
nctempstring->d[0]=strlen("El2d->exx")+1;;
LibeArrayex(55,nctempstring,j,1,El2d->exx->d[1]);
}
El2d->exx->a[nctemp222] =0.0;
int nctemp229=i;
if((0>i)||(i>=El2d->eyy->d[0])){
nctempstring->a="El2d->eyy";
nctempstring->d[0]=strlen("El2d->eyy")+1;;
LibeArrayex(56,nctempstring,i,0,El2d->eyy->d[0]);
}
nctemp229=j*El2d->eyy->d[0]+nctemp229;
if((0>j)||(j>=El2d->eyy->d[1])){
nctempstring->a="El2d->eyy";
nctempstring->d[0]=strlen("El2d->eyy")+1;;
LibeArrayex(56,nctempstring,j,1,El2d->eyy->d[1]);
}
El2d->eyy->a[nctemp229] =0.0;
int nctemp236=i;
if((0>i)||(i>=El2d->exy->d[0])){
nctempstring->a="El2d->exy";
nctempstring->d[0]=strlen("El2d->exy")+1;;
LibeArrayex(57,nctempstring,i,0,El2d->exy->d[0]);
}
nctemp236=j*El2d->exy->d[0]+nctemp236;
if((0>j)||(j>=El2d->exy->d[1])){
nctempstring->a="El2d->exy";
nctempstring->d[0]=strlen("El2d->exy")+1;;
LibeArrayex(57,nctempstring,j,1,El2d->exy->d[1]);
}
El2d->exy->a[nctemp236] =0.0;
int nctemp243=i;
if((0>i)||(i>=El2d->gammaxx->d[0])){
nctempstring->a="El2d->gammaxx";
nctempstring->d[0]=strlen("El2d->gammaxx")+1;;
LibeArrayex(58,nctempstring,i,0,El2d->gammaxx->d[0]);
}
nctemp243=j*El2d->gammaxx->d[0]+nctemp243;
if((0>j)||(j>=El2d->gammaxx->d[1])){
nctempstring->a="El2d->gammaxx";
nctempstring->d[0]=strlen("El2d->gammaxx")+1;;
LibeArrayex(58,nctempstring,j,1,El2d->gammaxx->d[1]);
}
El2d->gammaxx->a[nctemp243] =0.0;
int nctemp250=i;
if((0>i)||(i>=El2d->gammayy->d[0])){
nctempstring->a="El2d->gammayy";
nctempstring->d[0]=strlen("El2d->gammayy")+1;;
LibeArrayex(59,nctempstring,i,0,El2d->gammayy->d[0]);
}
nctemp250=j*El2d->gammayy->d[0]+nctemp250;
if((0>j)||(j>=El2d->gammayy->d[1])){
nctempstring->a="El2d->gammayy";
nctempstring->d[0]=strlen("El2d->gammayy")+1;;
LibeArrayex(59,nctempstring,j,1,El2d->gammayy->d[1]);
}
El2d->gammayy->a[nctemp250] =0.0;
int nctemp257=i;
if((0>i)||(i>=El2d->gammaxy->d[0])){
nctempstring->a="El2d->gammaxy";
nctempstring->d[0]=strlen("El2d->gammaxy")+1;;
LibeArrayex(60,nctempstring,i,0,El2d->gammaxy->d[0]);
}
nctemp257=j*El2d->gammaxy->d[0]+nctemp257;
if((0>j)||(j>=El2d->gammaxy->d[1])){
nctempstring->a="El2d->gammaxy";
nctempstring->d[0]=strlen("El2d->gammaxy")+1;;
LibeArrayex(60,nctempstring,j,1,El2d->gammaxy->d[1]);
}
El2d->gammaxy->a[nctemp257] =0.0;
int nctemp264=i;
if((0>i)||(i>=El2d->thetax->d[0])){
nctempstring->a="El2d->thetax";
nctempstring->d[0]=strlen("El2d->thetax")+1;;
LibeArrayex(61,nctempstring,i,0,El2d->thetax->d[0]);
}
nctemp264=j*El2d->thetax->d[0]+nctemp264;
if((0>j)||(j>=El2d->thetax->d[1])){
nctempstring->a="El2d->thetax";
nctempstring->d[0]=strlen("El2d->thetax")+1;;
LibeArrayex(61,nctempstring,j,1,El2d->thetax->d[1]);
}
El2d->thetax->a[nctemp264] =0.0;
int nctemp271=i;
if((0>i)||(i>=El2d->thetay->d[0])){
nctempstring->a="El2d->thetay";
nctempstring->d[0]=strlen("El2d->thetay")+1;;
LibeArrayex(62,nctempstring,i,0,El2d->thetay->d[0]);
}
nctemp271=j*El2d->thetay->d[0]+nctemp271;
if((0>j)||(j>=El2d->thetay->d[1])){
nctempstring->a="El2d->thetay";
nctempstring->d[0]=strlen("El2d->thetay")+1;;
LibeArrayex(62,nctempstring,j,1,El2d->thetay->d[1]);
}
El2d->thetay->a[nctemp271] =0.0;
El2d->ts =0;
}
int nctemp287 = j + 1;
j =nctemp287;
int nctemp288 = (j < Model->Ny);
nctemp173=nctemp288;
}
}
int nctemp300 = i + 1;
i =nctemp300;
int nctemp301 = (i < Model->Nx);
nctemp165=nctemp301;
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
int nctemp310= l;
struct diff* nctemp312=DiffNew(nctemp310);
Diff =nctemp312;
int nctemp319=Model->Nx;
nctemp319=nctemp319*Model->Ny;
nctempfloat2 *nctemp318;
nctemp318=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp318->d[0]=Model->Nx;
nctemp318->d[1]=Model->Ny;
nctemp318->a=(float *)RunMalloc(sizeof(float)*nctemp319);
tmp1=nctemp318;
int nctemp330=Model->Nx;
nctemp330=nctemp330*Model->Ny;
nctempfloat2 *nctemp329;
nctemp329=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp329->d[0]=Model->Nx;
nctemp329->d[1]=Model->Ny;
nctemp329->a=(float *)RunMalloc(sizeof(float)*nctemp330);
tmp2=nctemp329;
oldperc =0.0;
ns =El2d->ts;
int nctemp351 = ns + nt;
ne =nctemp351;
i =ns;
int nctemp356 = (i < ne);
while(nctemp356){
{
struct diff* nctemp361= Diff;
nctempfloat2* nctemp363= El2d->sigmaxx;
nctempfloat2* nctemp366= El2d->exx;
float nctemp369= Model->Dx;
int nctemp371=DiffDxplus(nctemp361,nctemp363,nctemp366,nctemp369);
struct diff* nctemp373= Diff;
nctempfloat2* nctemp375= El2d->sigmaxy;
nctempfloat2* nctemp378= El2d->exy;
float nctemp381= Model->Dx;
int nctemp383=DiffDyminus(nctemp373,nctemp375,nctemp378,nctemp381);
struct el2d* nctemp385= El2d;
struct model* nctemp387= Model;
int nctemp389=El2dvx(nctemp385,nctemp387);
struct diff* nctemp391= Diff;
nctempfloat2* nctemp393= El2d->sigmayy;
nctempfloat2* nctemp396= El2d->eyy;
float nctemp399= Model->Dx;
int nctemp401=DiffDyplus(nctemp391,nctemp393,nctemp396,nctemp399);
struct diff* nctemp403= Diff;
nctempfloat2* nctemp405= El2d->sigmaxy;
nctempfloat2* nctemp408= El2d->exy;
float nctemp411= Model->Dx;
int nctemp413=DiffDxminus(nctemp403,nctemp405,nctemp408,nctemp411);
struct el2d* nctemp415= El2d;
struct model* nctemp417= Model;
int nctemp419=El2dvy(nctemp415,nctemp417);
struct diff* nctemp421= Diff;
nctempfloat2* nctemp423= El2d->vx;
nctempfloat2* nctemp426= El2d->exx;
float nctemp429= Model->Dx;
int nctemp431=DiffDxminus(nctemp421,nctemp423,nctemp426,nctemp429);
struct diff* nctemp433= Diff;
nctempfloat2* nctemp435= El2d->vy;
nctempfloat2* nctemp438= El2d->eyy;
float nctemp441= Model->Dx;
int nctemp443=DiffDyminus(nctemp433,nctemp435,nctemp438,nctemp441);
struct diff* nctemp445= Diff;
nctempfloat2* nctemp447= El2d->vy;
nctempfloat2* nctemp450= tmp1;
float nctemp453= Model->Dx;
int nctemp455=DiffDxplus(nctemp445,nctemp447,nctemp450,nctemp453);
struct diff* nctemp457= Diff;
nctempfloat2* nctemp459= El2d->vx;
nctempfloat2* nctemp462= tmp2;
float nctemp465= Model->Dx;
int nctemp467=DiffDyplus(nctemp457,nctemp459,nctemp462,nctemp465);
struct el2d* nctemp469= El2d;
struct model* nctemp471= Model;
nctempfloat2* nctemp473= tmp1;
nctempfloat2* nctemp476= tmp2;
int nctemp479=El2dexy(nctemp469,nctemp471,nctemp473,nctemp476);
struct el2d* nctemp481= El2d;
struct model* nctemp483= Model;
int nctemp485=El2dstress(nctemp481,nctemp483);
k =0;
int nctemp490 = (k < Src->Ns);
while(nctemp490){
{
int nctemp498=k;
if((0>k)||(k>=Src->Sx->d[0])){
nctempstring->a="Src->Sx";
nctempstring->d[0]=strlen("Src->Sx")+1;;
LibeArrayex(142,nctempstring,k,0,Src->Sx->d[0]);
}
sx =Src->Sx->a[nctemp498];
int nctemp504=k;
if((0>k)||(k>=Src->Sy->d[0])){
nctempstring->a="Src->Sy";
nctempstring->d[0]=strlen("Src->Sy")+1;;
LibeArrayex(143,nctempstring,k,0,Src->Sy->d[0]);
}
sy =Src->Sy->a[nctemp504];
int nctemp509=sx;
if((0>sx)||(sx>=El2d->vy->d[0])){
nctempstring->a="El2d->vy";
nctempstring->d[0]=strlen("El2d->vy")+1;;
LibeArrayex(150,nctempstring,sx,0,El2d->vy->d[0]);
}
nctemp509=sy*El2d->vy->d[0]+nctemp509;
if((0>sy)||(sy>=El2d->vy->d[1])){
nctempstring->a="El2d->vy";
nctempstring->d[0]=strlen("El2d->vy")+1;;
LibeArrayex(150,nctempstring,sy,1,El2d->vy->d[1]);
}
int nctemp516=sx;
if((0>sx)||(sx>=El2d->vy->d[0])){
nctempstring->a="El2d->vy";
nctempstring->d[0]=strlen("El2d->vy")+1;;
LibeArrayex(150,nctempstring,sx,0,El2d->vy->d[0]);
}
nctemp516=sy*El2d->vy->d[0]+nctemp516;
if((0>sy)||(sy>=El2d->vy->d[1])){
nctempstring->a="El2d->vy";
nctempstring->d[0]=strlen("El2d->vy")+1;;
LibeArrayex(150,nctempstring,sy,1,El2d->vy->d[1]);
}
int nctemp527=i;
if((0>i)||(i>=Src->Src->d[0])){
nctempstring->a="Src->Src";
nctempstring->d[0]=strlen("Src->Src")+1;;
LibeArrayex(151,nctempstring,i,0,Src->Src->d[0]);
}
float nctemp534 = Model->Dx * Model->Dx;
float nctemp535 = Src->Src->a[nctemp527] / nctemp534;
float nctemp536 = Model->Dt * nctemp535;
float nctemp537 = El2d->vy->a[nctemp516] + nctemp536;
El2d->vy->a[nctemp509] =nctemp537;
}
int nctemp546 = k + 1;
k =nctemp546;
int nctemp547 = (k < Src->Ns);
nctemp490=nctemp547;
}
float nctemp562=(float)(i);
int nctemp575 = ne - ns;
int nctemp577 = nctemp575 - 1;
float nctemp566=(float)(nctemp577);
float nctemp578 = nctemp562 / nctemp566;
float nctemp579 = 1000.0 * nctemp578;
perc =nctemp579;
float nctemp587 = perc - oldperc;
int nctemp580 = (nctemp587 >= 10.0);
if(nctemp580)
{
int nctemp596=(int)(perc);
int nctemp600 = nctemp596 / 10;
iperc =nctemp600;
int nctemp604= iperc;
int nctemp606= 10;
int nctemp608=LibeMod(nctemp604,nctemp606);
int nctemp601 = (nctemp608 ==0);
if(nctemp601)
{
int nctemp611= 4;
int nctemp613= iperc;
int nctemp615=LibePuti(nctemp611,nctemp613);
int nctemp617= 4;
struct nctempchar1 *nctemp621;
static struct nctempchar1 nctemp622 = {{ 3}, (char*)"\n\0"};
nctemp621=&nctemp622;
nctempchar1* nctemp619= nctemp621;
int nctemp623=LibePuts(nctemp617,nctemp619);
int nctemp625= 4;
int nctemp627=LibeFlush(nctemp625);
}
oldperc =perc;
}
struct rec* nctemp633= Rec;
int nctemp635= i;
nctempfloat2* nctemp637= El2d->vx;
int nctemp640=RecReceiver(nctemp633,nctemp635,nctemp637);
struct rec* nctemp642= Rec;
int nctemp644= i;
nctempfloat2* nctemp646= El2d->vx;
int nctemp649=RecSnap(nctemp642,nctemp644,nctemp646);
}
int nctemp658 = i + 1;
i =nctemp658;
int nctemp659 = (i < ne);
nctemp356=nctemp659;
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
int nctemp679=i;
if((0>i)||(i>=El2d->vx->d[0])){
nctempstring->a="El2d->vx";
nctempstring->d[0]=strlen("El2d->vx")+1;;
LibeArrayex(191,nctempstring,i,0,El2d->vx->d[0]);
}
nctemp679=j*El2d->vx->d[0]+nctemp679;
if((0>j)||(j>=El2d->vx->d[1])){
nctempstring->a="El2d->vx";
nctempstring->d[0]=strlen("El2d->vx")+1;;
LibeArrayex(191,nctempstring,j,1,El2d->vx->d[1]);
}
int nctemp693=i;
if((0>i)||(i>=Model->Rho->d[0])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(191,nctempstring,i,0,Model->Rho->d[0]);
}
nctemp693=j*Model->Rho->d[0]+nctemp693;
if((0>j)||(j>=Model->Rho->d[1])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(191,nctempstring,j,1,Model->Rho->d[1]);
}
float nctemp696 = Model->Dt * Model->Rho->a[nctemp693];
int nctemp701=i;
if((0>i)||(i>=El2d->exx->d[0])){
nctempstring->a="El2d->exx";
nctempstring->d[0]=strlen("El2d->exx")+1;;
LibeArrayex(191,nctempstring,i,0,El2d->exx->d[0]);
}
nctemp701=j*El2d->exx->d[0]+nctemp701;
if((0>j)||(j>=El2d->exx->d[1])){
nctempstring->a="El2d->exx";
nctempstring->d[0]=strlen("El2d->exx")+1;;
LibeArrayex(191,nctempstring,j,1,El2d->exx->d[1]);
}
int nctemp705=i;
if((0>i)||(i>=El2d->exy->d[0])){
nctempstring->a="El2d->exy";
nctempstring->d[0]=strlen("El2d->exy")+1;;
LibeArrayex(191,nctempstring,i,0,El2d->exy->d[0]);
}
nctemp705=j*El2d->exy->d[0]+nctemp705;
if((0>j)||(j>=El2d->exy->d[1])){
nctempstring->a="El2d->exy";
nctempstring->d[0]=strlen("El2d->exy")+1;;
LibeArrayex(191,nctempstring,j,1,El2d->exy->d[1]);
}
float nctemp708 = El2d->exx->a[nctemp701] + El2d->exy->a[nctemp705];
float nctemp709 = nctemp696 * nctemp708;
int nctemp711=i;
if((0>i)||(i>=El2d->vx->d[0])){
nctempstring->a="El2d->vx";
nctempstring->d[0]=strlen("El2d->vx")+1;;
LibeArrayex(192,nctempstring,i,0,El2d->vx->d[0]);
}
nctemp711=j*El2d->vx->d[0]+nctemp711;
if((0>j)||(j>=El2d->vx->d[1])){
nctempstring->a="El2d->vx";
nctempstring->d[0]=strlen("El2d->vx")+1;;
LibeArrayex(192,nctempstring,j,1,El2d->vx->d[1]);
}
float nctemp714 = nctemp709 + El2d->vx->a[nctemp711];
El2d->vx->a[nctemp679] =nctemp714;
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
int nctemp730=i;
if((0>i)||(i>=El2d->vy->d[0])){
nctempstring->a="El2d->vy";
nctempstring->d[0]=strlen("El2d->vy")+1;;
LibeArrayex(212,nctempstring,i,0,El2d->vy->d[0]);
}
nctemp730=j*El2d->vy->d[0]+nctemp730;
if((0>j)||(j>=El2d->vy->d[1])){
nctempstring->a="El2d->vy";
nctempstring->d[0]=strlen("El2d->vy")+1;;
LibeArrayex(212,nctempstring,j,1,El2d->vy->d[1]);
}
int nctemp744=i;
if((0>i)||(i>=Model->Rho->d[0])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(212,nctempstring,i,0,Model->Rho->d[0]);
}
nctemp744=j*Model->Rho->d[0]+nctemp744;
if((0>j)||(j>=Model->Rho->d[1])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(212,nctempstring,j,1,Model->Rho->d[1]);
}
float nctemp747 = Model->Dt * Model->Rho->a[nctemp744];
int nctemp752=i;
if((0>i)||(i>=El2d->eyy->d[0])){
nctempstring->a="El2d->eyy";
nctempstring->d[0]=strlen("El2d->eyy")+1;;
LibeArrayex(212,nctempstring,i,0,El2d->eyy->d[0]);
}
nctemp752=j*El2d->eyy->d[0]+nctemp752;
if((0>j)||(j>=El2d->eyy->d[1])){
nctempstring->a="El2d->eyy";
nctempstring->d[0]=strlen("El2d->eyy")+1;;
LibeArrayex(212,nctempstring,j,1,El2d->eyy->d[1]);
}
int nctemp756=i;
if((0>i)||(i>=El2d->exy->d[0])){
nctempstring->a="El2d->exy";
nctempstring->d[0]=strlen("El2d->exy")+1;;
LibeArrayex(212,nctempstring,i,0,El2d->exy->d[0]);
}
nctemp756=j*El2d->exy->d[0]+nctemp756;
if((0>j)||(j>=El2d->exy->d[1])){
nctempstring->a="El2d->exy";
nctempstring->d[0]=strlen("El2d->exy")+1;;
LibeArrayex(212,nctempstring,j,1,El2d->exy->d[1]);
}
float nctemp759 = El2d->eyy->a[nctemp752] + El2d->exy->a[nctemp756];
float nctemp760 = nctemp747 * nctemp759;
int nctemp762=i;
if((0>i)||(i>=El2d->vy->d[0])){
nctempstring->a="El2d->vy";
nctempstring->d[0]=strlen("El2d->vy")+1;;
LibeArrayex(213,nctempstring,i,0,El2d->vy->d[0]);
}
nctemp762=j*El2d->vy->d[0]+nctemp762;
if((0>j)||(j>=El2d->vy->d[1])){
nctempstring->a="El2d->vy";
nctempstring->d[0]=strlen("El2d->vy")+1;;
LibeArrayex(213,nctempstring,j,1,El2d->vy->d[1]);
}
float nctemp765 = nctemp760 + El2d->vy->a[nctemp762];
El2d->vy->a[nctemp730] =nctemp765;
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
int nctemp781=i;
if((0>i)||(i>=El2d->exy->d[0])){
nctempstring->a="El2d->exy";
nctempstring->d[0]=strlen("El2d->exy")+1;;
LibeArrayex(230,nctempstring,i,0,El2d->exy->d[0]);
}
nctemp781=j*El2d->exy->d[0]+nctemp781;
if((0>j)||(j>=El2d->exy->d[1])){
nctempstring->a="El2d->exy";
nctempstring->d[0]=strlen("El2d->exy")+1;;
LibeArrayex(230,nctempstring,j,1,El2d->exy->d[1]);
}
int nctemp792=i;
if((0>i)||(i>=tmp1->d[0])){
nctempstring->a="tmp1";
nctempstring->d[0]=strlen("tmp1")+1;;
LibeArrayex(230,nctempstring,i,0,tmp1->d[0]);
}
nctemp792=j*tmp1->d[0]+nctemp792;
if((0>j)||(j>=tmp1->d[1])){
nctempstring->a="tmp1";
nctempstring->d[0]=strlen("tmp1")+1;;
LibeArrayex(230,nctempstring,j,1,tmp1->d[1]);
}
int nctemp796=i;
if((0>i)||(i>=tmp2->d[0])){
nctempstring->a="tmp2";
nctempstring->d[0]=strlen("tmp2")+1;;
LibeArrayex(230,nctempstring,i,0,tmp2->d[0]);
}
nctemp796=j*tmp2->d[0]+nctemp796;
if((0>j)||(j>=tmp2->d[1])){
nctempstring->a="tmp2";
nctempstring->d[0]=strlen("tmp2")+1;;
LibeArrayex(230,nctempstring,j,1,tmp2->d[1]);
}
float nctemp799 = tmp1->a[nctemp792] + tmp2->a[nctemp796];
float nctemp800 = 0.5 * nctemp799;
El2d->exy->a[nctemp781] =nctemp800;
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
int nctemp816=i;
if((0>i)||(i>=El2d->sigmaxx->d[0])){
nctempstring->a="El2d->sigmaxx";
nctempstring->d[0]=strlen("El2d->sigmaxx")+1;;
LibeArrayex(246,nctempstring,i,0,El2d->sigmaxx->d[0]);
}
nctemp816=j*El2d->sigmaxx->d[0]+nctemp816;
if((0>j)||(j>=El2d->sigmaxx->d[1])){
nctempstring->a="El2d->sigmaxx";
nctempstring->d[0]=strlen("El2d->sigmaxx")+1;;
LibeArrayex(246,nctempstring,j,1,El2d->sigmaxx->d[1]);
}
int nctemp839=i;
if((0>i)||(i>=Model->Lambda->d[0])){
nctempstring->a="Model->Lambda";
nctempstring->d[0]=strlen("Model->Lambda")+1;;
LibeArrayex(246,nctempstring,i,0,Model->Lambda->d[0]);
}
nctemp839=j*Model->Lambda->d[0]+nctemp839;
if((0>j)||(j>=Model->Lambda->d[1])){
nctempstring->a="Model->Lambda";
nctempstring->d[0]=strlen("Model->Lambda")+1;;
LibeArrayex(246,nctempstring,j,1,Model->Lambda->d[1]);
}
float nctemp842 = Model->Dt * Model->Lambda->a[nctemp839];
int nctemp847=i;
if((0>i)||(i>=El2d->exx->d[0])){
nctempstring->a="El2d->exx";
nctempstring->d[0]=strlen("El2d->exx")+1;;
LibeArrayex(246,nctempstring,i,0,El2d->exx->d[0]);
}
nctemp847=j*El2d->exx->d[0]+nctemp847;
if((0>j)||(j>=El2d->exx->d[1])){
nctempstring->a="El2d->exx";
nctempstring->d[0]=strlen("El2d->exx")+1;;
LibeArrayex(246,nctempstring,j,1,El2d->exx->d[1]);
}
int nctemp851=i;
if((0>i)||(i>=El2d->eyy->d[0])){
nctempstring->a="El2d->eyy";
nctempstring->d[0]=strlen("El2d->eyy")+1;;
LibeArrayex(246,nctempstring,i,0,El2d->eyy->d[0]);
}
nctemp851=j*El2d->eyy->d[0]+nctemp851;
if((0>j)||(j>=El2d->eyy->d[1])){
nctempstring->a="El2d->eyy";
nctempstring->d[0]=strlen("El2d->eyy")+1;;
LibeArrayex(246,nctempstring,j,1,El2d->eyy->d[1]);
}
float nctemp854 = El2d->exx->a[nctemp847] + El2d->eyy->a[nctemp851];
float nctemp855 = nctemp842 * nctemp854;
float nctemp867 = 2.0 * Model->Dt;
int nctemp869=i;
if((0>i)||(i>=Model->Mu->d[0])){
nctempstring->a="Model->Mu";
nctempstring->d[0]=strlen("Model->Mu")+1;;
LibeArrayex(247,nctempstring,i,0,Model->Mu->d[0]);
}
nctemp869=j*Model->Mu->d[0]+nctemp869;
if((0>j)||(j>=Model->Mu->d[1])){
nctempstring->a="Model->Mu";
nctempstring->d[0]=strlen("Model->Mu")+1;;
LibeArrayex(247,nctempstring,j,1,Model->Mu->d[1]);
}
float nctemp872 = nctemp867 * Model->Mu->a[nctemp869];
int nctemp874=i;
if((0>i)||(i>=El2d->exx->d[0])){
nctempstring->a="El2d->exx";
nctempstring->d[0]=strlen("El2d->exx")+1;;
LibeArrayex(247,nctempstring,i,0,El2d->exx->d[0]);
}
nctemp874=j*El2d->exx->d[0]+nctemp874;
if((0>j)||(j>=El2d->exx->d[1])){
nctempstring->a="El2d->exx";
nctempstring->d[0]=strlen("El2d->exx")+1;;
LibeArrayex(247,nctempstring,j,1,El2d->exx->d[1]);
}
float nctemp877 = nctemp872 * El2d->exx->a[nctemp874];
float nctemp878 = nctemp855 + nctemp877;
int nctemp890=i;
if((0>i)||(i>=El2d->gammaxx->d[0])){
nctempstring->a="El2d->gammaxx";
nctempstring->d[0]=strlen("El2d->gammaxx")+1;;
LibeArrayex(248,nctempstring,i,0,El2d->gammaxx->d[0]);
}
nctemp890=j*El2d->gammaxx->d[0]+nctemp890;
if((0>j)||(j>=El2d->gammaxx->d[1])){
nctempstring->a="El2d->gammaxx";
nctempstring->d[0]=strlen("El2d->gammaxx")+1;;
LibeArrayex(248,nctempstring,j,1,El2d->gammaxx->d[1]);
}
int nctemp894=i;
if((0>i)||(i>=El2d->gammayy->d[0])){
nctempstring->a="El2d->gammayy";
nctempstring->d[0]=strlen("El2d->gammayy")+1;;
LibeArrayex(248,nctempstring,i,0,El2d->gammayy->d[0]);
}
nctemp894=j*El2d->gammayy->d[0]+nctemp894;
if((0>j)||(j>=El2d->gammayy->d[1])){
nctempstring->a="El2d->gammayy";
nctempstring->d[0]=strlen("El2d->gammayy")+1;;
LibeArrayex(248,nctempstring,j,1,El2d->gammayy->d[1]);
}
float nctemp897 = El2d->gammaxx->a[nctemp890] + El2d->gammayy->a[nctemp894];
float nctemp898 = Model->Dt * nctemp897;
int nctemp900=i;
if((0>i)||(i>=Model->Dlambda->d[0])){
nctempstring->a="Model->Dlambda";
nctempstring->d[0]=strlen("Model->Dlambda")+1;;
LibeArrayex(248,nctempstring,i,0,Model->Dlambda->d[0]);
}
nctemp900=j*Model->Dlambda->d[0]+nctemp900;
if((0>j)||(j>=Model->Dlambda->d[1])){
nctempstring->a="Model->Dlambda";
nctempstring->d[0]=strlen("Model->Dlambda")+1;;
LibeArrayex(248,nctempstring,j,1,Model->Dlambda->d[1]);
}
float nctemp903 = nctemp898 * Model->Dlambda->a[nctemp900];
float nctemp904 = nctemp878 + nctemp903;
float nctemp916 = 2.0 * Model->Dt;
int nctemp918=i;
if((0>i)||(i>=El2d->gammaxx->d[0])){
nctempstring->a="El2d->gammaxx";
nctempstring->d[0]=strlen("El2d->gammaxx")+1;;
LibeArrayex(249,nctempstring,i,0,El2d->gammaxx->d[0]);
}
nctemp918=j*El2d->gammaxx->d[0]+nctemp918;
if((0>j)||(j>=El2d->gammaxx->d[1])){
nctempstring->a="El2d->gammaxx";
nctempstring->d[0]=strlen("El2d->gammaxx")+1;;
LibeArrayex(249,nctempstring,j,1,El2d->gammaxx->d[1]);
}
float nctemp921 = nctemp916 * El2d->gammaxx->a[nctemp918];
int nctemp923=i;
if((0>i)||(i>=Model->Dmu->d[0])){
nctempstring->a="Model->Dmu";
nctempstring->d[0]=strlen("Model->Dmu")+1;;
LibeArrayex(249,nctempstring,i,0,Model->Dmu->d[0]);
}
nctemp923=j*Model->Dmu->d[0]+nctemp923;
if((0>j)||(j>=Model->Dmu->d[1])){
nctempstring->a="Model->Dmu";
nctempstring->d[0]=strlen("Model->Dmu")+1;;
LibeArrayex(249,nctempstring,j,1,Model->Dmu->d[1]);
}
float nctemp926 = nctemp921 * Model->Dmu->a[nctemp923];
float nctemp927 = nctemp904 + nctemp926;
int nctemp929=i;
if((0>i)||(i>=El2d->sigmaxx->d[0])){
nctempstring->a="El2d->sigmaxx";
nctempstring->d[0]=strlen("El2d->sigmaxx")+1;;
LibeArrayex(250,nctempstring,i,0,El2d->sigmaxx->d[0]);
}
nctemp929=j*El2d->sigmaxx->d[0]+nctemp929;
if((0>j)||(j>=El2d->sigmaxx->d[1])){
nctempstring->a="El2d->sigmaxx";
nctempstring->d[0]=strlen("El2d->sigmaxx")+1;;
LibeArrayex(250,nctempstring,j,1,El2d->sigmaxx->d[1]);
}
float nctemp932 = nctemp927 + El2d->sigmaxx->a[nctemp929];
El2d->sigmaxx->a[nctemp816] =nctemp932;
int nctemp936=i;
if((0>i)||(i>=El2d->sigmayy->d[0])){
nctempstring->a="El2d->sigmayy";
nctempstring->d[0]=strlen("El2d->sigmayy")+1;;
LibeArrayex(252,nctempstring,i,0,El2d->sigmayy->d[0]);
}
nctemp936=j*El2d->sigmayy->d[0]+nctemp936;
if((0>j)||(j>=El2d->sigmayy->d[1])){
nctempstring->a="El2d->sigmayy";
nctempstring->d[0]=strlen("El2d->sigmayy")+1;;
LibeArrayex(252,nctempstring,j,1,El2d->sigmayy->d[1]);
}
int nctemp959=i;
if((0>i)||(i>=Model->Lambda->d[0])){
nctempstring->a="Model->Lambda";
nctempstring->d[0]=strlen("Model->Lambda")+1;;
LibeArrayex(252,nctempstring,i,0,Model->Lambda->d[0]);
}
nctemp959=j*Model->Lambda->d[0]+nctemp959;
if((0>j)||(j>=Model->Lambda->d[1])){
nctempstring->a="Model->Lambda";
nctempstring->d[0]=strlen("Model->Lambda")+1;;
LibeArrayex(252,nctempstring,j,1,Model->Lambda->d[1]);
}
float nctemp962 = Model->Dt * Model->Lambda->a[nctemp959];
int nctemp967=i;
if((0>i)||(i>=El2d->exx->d[0])){
nctempstring->a="El2d->exx";
nctempstring->d[0]=strlen("El2d->exx")+1;;
LibeArrayex(252,nctempstring,i,0,El2d->exx->d[0]);
}
nctemp967=j*El2d->exx->d[0]+nctemp967;
if((0>j)||(j>=El2d->exx->d[1])){
nctempstring->a="El2d->exx";
nctempstring->d[0]=strlen("El2d->exx")+1;;
LibeArrayex(252,nctempstring,j,1,El2d->exx->d[1]);
}
int nctemp971=i;
if((0>i)||(i>=El2d->eyy->d[0])){
nctempstring->a="El2d->eyy";
nctempstring->d[0]=strlen("El2d->eyy")+1;;
LibeArrayex(252,nctempstring,i,0,El2d->eyy->d[0]);
}
nctemp971=j*El2d->eyy->d[0]+nctemp971;
if((0>j)||(j>=El2d->eyy->d[1])){
nctempstring->a="El2d->eyy";
nctempstring->d[0]=strlen("El2d->eyy")+1;;
LibeArrayex(252,nctempstring,j,1,El2d->eyy->d[1]);
}
float nctemp974 = El2d->exx->a[nctemp967] + El2d->eyy->a[nctemp971];
float nctemp975 = nctemp962 * nctemp974;
float nctemp987 = 2.0 * Model->Dt;
int nctemp989=i;
if((0>i)||(i>=Model->Mu->d[0])){
nctempstring->a="Model->Mu";
nctempstring->d[0]=strlen("Model->Mu")+1;;
LibeArrayex(253,nctempstring,i,0,Model->Mu->d[0]);
}
nctemp989=j*Model->Mu->d[0]+nctemp989;
if((0>j)||(j>=Model->Mu->d[1])){
nctempstring->a="Model->Mu";
nctempstring->d[0]=strlen("Model->Mu")+1;;
LibeArrayex(253,nctempstring,j,1,Model->Mu->d[1]);
}
float nctemp992 = nctemp987 * Model->Mu->a[nctemp989];
int nctemp994=i;
if((0>i)||(i>=El2d->eyy->d[0])){
nctempstring->a="El2d->eyy";
nctempstring->d[0]=strlen("El2d->eyy")+1;;
LibeArrayex(253,nctempstring,i,0,El2d->eyy->d[0]);
}
nctemp994=j*El2d->eyy->d[0]+nctemp994;
if((0>j)||(j>=El2d->eyy->d[1])){
nctempstring->a="El2d->eyy";
nctempstring->d[0]=strlen("El2d->eyy")+1;;
LibeArrayex(253,nctempstring,j,1,El2d->eyy->d[1]);
}
float nctemp997 = nctemp992 * El2d->eyy->a[nctemp994];
float nctemp998 = nctemp975 + nctemp997;
int nctemp1010=i;
if((0>i)||(i>=El2d->gammaxx->d[0])){
nctempstring->a="El2d->gammaxx";
nctempstring->d[0]=strlen("El2d->gammaxx")+1;;
LibeArrayex(254,nctempstring,i,0,El2d->gammaxx->d[0]);
}
nctemp1010=j*El2d->gammaxx->d[0]+nctemp1010;
if((0>j)||(j>=El2d->gammaxx->d[1])){
nctempstring->a="El2d->gammaxx";
nctempstring->d[0]=strlen("El2d->gammaxx")+1;;
LibeArrayex(254,nctempstring,j,1,El2d->gammaxx->d[1]);
}
int nctemp1014=i;
if((0>i)||(i>=El2d->gammayy->d[0])){
nctempstring->a="El2d->gammayy";
nctempstring->d[0]=strlen("El2d->gammayy")+1;;
LibeArrayex(254,nctempstring,i,0,El2d->gammayy->d[0]);
}
nctemp1014=j*El2d->gammayy->d[0]+nctemp1014;
if((0>j)||(j>=El2d->gammayy->d[1])){
nctempstring->a="El2d->gammayy";
nctempstring->d[0]=strlen("El2d->gammayy")+1;;
LibeArrayex(254,nctempstring,j,1,El2d->gammayy->d[1]);
}
float nctemp1017 = El2d->gammaxx->a[nctemp1010] + El2d->gammayy->a[nctemp1014];
float nctemp1018 = Model->Dt * nctemp1017;
int nctemp1020=i;
if((0>i)||(i>=Model->Dlambda->d[0])){
nctempstring->a="Model->Dlambda";
nctempstring->d[0]=strlen("Model->Dlambda")+1;;
LibeArrayex(254,nctempstring,i,0,Model->Dlambda->d[0]);
}
nctemp1020=j*Model->Dlambda->d[0]+nctemp1020;
if((0>j)||(j>=Model->Dlambda->d[1])){
nctempstring->a="Model->Dlambda";
nctempstring->d[0]=strlen("Model->Dlambda")+1;;
LibeArrayex(254,nctempstring,j,1,Model->Dlambda->d[1]);
}
float nctemp1023 = nctemp1018 * Model->Dlambda->a[nctemp1020];
float nctemp1024 = nctemp998 + nctemp1023;
float nctemp1036 = 2.0 * Model->Dt;
int nctemp1038=i;
if((0>i)||(i>=El2d->gammayy->d[0])){
nctempstring->a="El2d->gammayy";
nctempstring->d[0]=strlen("El2d->gammayy")+1;;
LibeArrayex(255,nctempstring,i,0,El2d->gammayy->d[0]);
}
nctemp1038=j*El2d->gammayy->d[0]+nctemp1038;
if((0>j)||(j>=El2d->gammayy->d[1])){
nctempstring->a="El2d->gammayy";
nctempstring->d[0]=strlen("El2d->gammayy")+1;;
LibeArrayex(255,nctempstring,j,1,El2d->gammayy->d[1]);
}
float nctemp1041 = nctemp1036 * El2d->gammayy->a[nctemp1038];
int nctemp1043=i;
if((0>i)||(i>=Model->Dmu->d[0])){
nctempstring->a="Model->Dmu";
nctempstring->d[0]=strlen("Model->Dmu")+1;;
LibeArrayex(255,nctempstring,i,0,Model->Dmu->d[0]);
}
nctemp1043=j*Model->Dmu->d[0]+nctemp1043;
if((0>j)||(j>=Model->Dmu->d[1])){
nctempstring->a="Model->Dmu";
nctempstring->d[0]=strlen("Model->Dmu")+1;;
LibeArrayex(255,nctempstring,j,1,Model->Dmu->d[1]);
}
float nctemp1046 = nctemp1041 * Model->Dmu->a[nctemp1043];
float nctemp1047 = nctemp1024 + nctemp1046;
int nctemp1049=i;
if((0>i)||(i>=El2d->sigmayy->d[0])){
nctempstring->a="El2d->sigmayy";
nctempstring->d[0]=strlen("El2d->sigmayy")+1;;
LibeArrayex(256,nctempstring,i,0,El2d->sigmayy->d[0]);
}
nctemp1049=j*El2d->sigmayy->d[0]+nctemp1049;
if((0>j)||(j>=El2d->sigmayy->d[1])){
nctempstring->a="El2d->sigmayy";
nctempstring->d[0]=strlen("El2d->sigmayy")+1;;
LibeArrayex(256,nctempstring,j,1,El2d->sigmayy->d[1]);
}
float nctemp1052 = nctemp1047 + El2d->sigmayy->a[nctemp1049];
El2d->sigmayy->a[nctemp936] =nctemp1052;
int nctemp1056=i;
if((0>i)||(i>=El2d->sigmaxy->d[0])){
nctempstring->a="El2d->sigmaxy";
nctempstring->d[0]=strlen("El2d->sigmaxy")+1;;
LibeArrayex(258,nctempstring,i,0,El2d->sigmaxy->d[0]);
}
nctemp1056=j*El2d->sigmaxy->d[0]+nctemp1056;
if((0>j)||(j>=El2d->sigmaxy->d[1])){
nctempstring->a="El2d->sigmaxy";
nctempstring->d[0]=strlen("El2d->sigmaxy")+1;;
LibeArrayex(258,nctempstring,j,1,El2d->sigmaxy->d[1]);
}
float nctemp1076 = 2.0 * Model->Dt;
int nctemp1078=i;
if((0>i)||(i>=Model->Mu->d[0])){
nctempstring->a="Model->Mu";
nctempstring->d[0]=strlen("Model->Mu")+1;;
LibeArrayex(258,nctempstring,i,0,Model->Mu->d[0]);
}
nctemp1078=j*Model->Mu->d[0]+nctemp1078;
if((0>j)||(j>=Model->Mu->d[1])){
nctempstring->a="Model->Mu";
nctempstring->d[0]=strlen("Model->Mu")+1;;
LibeArrayex(258,nctempstring,j,1,Model->Mu->d[1]);
}
float nctemp1081 = nctemp1076 * Model->Mu->a[nctemp1078];
int nctemp1083=i;
if((0>i)||(i>=El2d->exy->d[0])){
nctempstring->a="El2d->exy";
nctempstring->d[0]=strlen("El2d->exy")+1;;
LibeArrayex(258,nctempstring,i,0,El2d->exy->d[0]);
}
nctemp1083=j*El2d->exy->d[0]+nctemp1083;
if((0>j)||(j>=El2d->exy->d[1])){
nctempstring->a="El2d->exy";
nctempstring->d[0]=strlen("El2d->exy")+1;;
LibeArrayex(258,nctempstring,j,1,El2d->exy->d[1]);
}
float nctemp1086 = nctemp1081 * El2d->exy->a[nctemp1083];
float nctemp1098 = 2.0 * Model->Dt;
int nctemp1100=i;
if((0>i)||(i>=El2d->gammaxy->d[0])){
nctempstring->a="El2d->gammaxy";
nctempstring->d[0]=strlen("El2d->gammaxy")+1;;
LibeArrayex(259,nctempstring,i,0,El2d->gammaxy->d[0]);
}
nctemp1100=j*El2d->gammaxy->d[0]+nctemp1100;
if((0>j)||(j>=El2d->gammaxy->d[1])){
nctempstring->a="El2d->gammaxy";
nctempstring->d[0]=strlen("El2d->gammaxy")+1;;
LibeArrayex(259,nctempstring,j,1,El2d->gammaxy->d[1]);
}
float nctemp1103 = nctemp1098 * El2d->gammaxy->a[nctemp1100];
int nctemp1105=i;
if((0>i)||(i>=Model->Dmu->d[0])){
nctempstring->a="Model->Dmu";
nctempstring->d[0]=strlen("Model->Dmu")+1;;
LibeArrayex(259,nctempstring,i,0,Model->Dmu->d[0]);
}
nctemp1105=j*Model->Dmu->d[0]+nctemp1105;
if((0>j)||(j>=Model->Dmu->d[1])){
nctempstring->a="Model->Dmu";
nctempstring->d[0]=strlen("Model->Dmu")+1;;
LibeArrayex(259,nctempstring,j,1,Model->Dmu->d[1]);
}
float nctemp1108 = nctemp1103 * Model->Dmu->a[nctemp1105];
float nctemp1109 = nctemp1086 + nctemp1108;
int nctemp1111=i;
if((0>i)||(i>=El2d->sigmaxy->d[0])){
nctempstring->a="El2d->sigmaxy";
nctempstring->d[0]=strlen("El2d->sigmaxy")+1;;
LibeArrayex(260,nctempstring,i,0,El2d->sigmaxy->d[0]);
}
nctemp1111=j*El2d->sigmaxy->d[0]+nctemp1111;
if((0>j)||(j>=El2d->sigmaxy->d[1])){
nctempstring->a="El2d->sigmaxy";
nctempstring->d[0]=strlen("El2d->sigmaxy")+1;;
LibeArrayex(260,nctempstring,j,1,El2d->sigmaxy->d[1]);
}
float nctemp1114 = nctemp1109 + El2d->sigmaxy->a[nctemp1111];
El2d->sigmaxy->a[nctemp1056] =nctemp1114;
int nctemp1118=i;
if((0>i)||(i>=El2d->gammaxx->d[0])){
nctempstring->a="El2d->gammaxx";
nctempstring->d[0]=strlen("El2d->gammaxx")+1;;
LibeArrayex(262,nctempstring,i,0,El2d->gammaxx->d[0]);
}
nctemp1118=j*El2d->gammaxx->d[0]+nctemp1118;
if((0>j)||(j>=El2d->gammaxx->d[1])){
nctempstring->a="El2d->gammaxx";
nctempstring->d[0]=strlen("El2d->gammaxx")+1;;
LibeArrayex(262,nctempstring,j,1,El2d->gammaxx->d[1]);
}
int nctemp1128=i;
if((0>i)||(i>=Model->Alpha1x->d[0])){
nctempstring->a="Model->Alpha1x";
nctempstring->d[0]=strlen("Model->Alpha1x")+1;;
LibeArrayex(262,nctempstring,i,0,Model->Alpha1x->d[0]);
}
nctemp1128=j*Model->Alpha1x->d[0]+nctemp1128;
if((0>j)||(j>=Model->Alpha1x->d[1])){
nctempstring->a="Model->Alpha1x";
nctempstring->d[0]=strlen("Model->Alpha1x")+1;;
LibeArrayex(262,nctempstring,j,1,Model->Alpha1x->d[1]);
}
int nctemp1132=i;
if((0>i)||(i>=El2d->gammaxx->d[0])){
nctempstring->a="El2d->gammaxx";
nctempstring->d[0]=strlen("El2d->gammaxx")+1;;
LibeArrayex(262,nctempstring,i,0,El2d->gammaxx->d[0]);
}
nctemp1132=j*El2d->gammaxx->d[0]+nctemp1132;
if((0>j)||(j>=El2d->gammaxx->d[1])){
nctempstring->a="El2d->gammaxx";
nctempstring->d[0]=strlen("El2d->gammaxx")+1;;
LibeArrayex(262,nctempstring,j,1,El2d->gammaxx->d[1]);
}
float nctemp1135 = Model->Alpha1x->a[nctemp1128] * El2d->gammaxx->a[nctemp1132];
int nctemp1140=i;
if((0>i)||(i>=Model->Alpha2x->d[0])){
nctempstring->a="Model->Alpha2x";
nctempstring->d[0]=strlen("Model->Alpha2x")+1;;
LibeArrayex(263,nctempstring,i,0,Model->Alpha2x->d[0]);
}
nctemp1140=j*Model->Alpha2x->d[0]+nctemp1140;
if((0>j)||(j>=Model->Alpha2x->d[1])){
nctempstring->a="Model->Alpha2x";
nctempstring->d[0]=strlen("Model->Alpha2x")+1;;
LibeArrayex(263,nctempstring,j,1,Model->Alpha2x->d[1]);
}
int nctemp1144=i;
if((0>i)||(i>=El2d->exx->d[0])){
nctempstring->a="El2d->exx";
nctempstring->d[0]=strlen("El2d->exx")+1;;
LibeArrayex(263,nctempstring,i,0,El2d->exx->d[0]);
}
nctemp1144=j*El2d->exx->d[0]+nctemp1144;
if((0>j)||(j>=El2d->exx->d[1])){
nctempstring->a="El2d->exx";
nctempstring->d[0]=strlen("El2d->exx")+1;;
LibeArrayex(263,nctempstring,j,1,El2d->exx->d[1]);
}
float nctemp1147 = Model->Alpha2x->a[nctemp1140] * El2d->exx->a[nctemp1144];
float nctemp1148 = nctemp1135 + nctemp1147;
El2d->gammaxx->a[nctemp1118] =nctemp1148;
int nctemp1152=i;
if((0>i)||(i>=El2d->gammayy->d[0])){
nctempstring->a="El2d->gammayy";
nctempstring->d[0]=strlen("El2d->gammayy")+1;;
LibeArrayex(264,nctempstring,i,0,El2d->gammayy->d[0]);
}
nctemp1152=j*El2d->gammayy->d[0]+nctemp1152;
if((0>j)||(j>=El2d->gammayy->d[1])){
nctempstring->a="El2d->gammayy";
nctempstring->d[0]=strlen("El2d->gammayy")+1;;
LibeArrayex(264,nctempstring,j,1,El2d->gammayy->d[1]);
}
int nctemp1162=i;
if((0>i)||(i>=Model->Alpha1y->d[0])){
nctempstring->a="Model->Alpha1y";
nctempstring->d[0]=strlen("Model->Alpha1y")+1;;
LibeArrayex(264,nctempstring,i,0,Model->Alpha1y->d[0]);
}
nctemp1162=j*Model->Alpha1y->d[0]+nctemp1162;
if((0>j)||(j>=Model->Alpha1y->d[1])){
nctempstring->a="Model->Alpha1y";
nctempstring->d[0]=strlen("Model->Alpha1y")+1;;
LibeArrayex(264,nctempstring,j,1,Model->Alpha1y->d[1]);
}
int nctemp1166=i;
if((0>i)||(i>=El2d->gammayy->d[0])){
nctempstring->a="El2d->gammayy";
nctempstring->d[0]=strlen("El2d->gammayy")+1;;
LibeArrayex(264,nctempstring,i,0,El2d->gammayy->d[0]);
}
nctemp1166=j*El2d->gammayy->d[0]+nctemp1166;
if((0>j)||(j>=El2d->gammayy->d[1])){
nctempstring->a="El2d->gammayy";
nctempstring->d[0]=strlen("El2d->gammayy")+1;;
LibeArrayex(264,nctempstring,j,1,El2d->gammayy->d[1]);
}
float nctemp1169 = Model->Alpha1y->a[nctemp1162] * El2d->gammayy->a[nctemp1166];
int nctemp1174=i;
if((0>i)||(i>=Model->Alpha2y->d[0])){
nctempstring->a="Model->Alpha2y";
nctempstring->d[0]=strlen("Model->Alpha2y")+1;;
LibeArrayex(265,nctempstring,i,0,Model->Alpha2y->d[0]);
}
nctemp1174=j*Model->Alpha2y->d[0]+nctemp1174;
if((0>j)||(j>=Model->Alpha2y->d[1])){
nctempstring->a="Model->Alpha2y";
nctempstring->d[0]=strlen("Model->Alpha2y")+1;;
LibeArrayex(265,nctempstring,j,1,Model->Alpha2y->d[1]);
}
int nctemp1178=i;
if((0>i)||(i>=El2d->eyy->d[0])){
nctempstring->a="El2d->eyy";
nctempstring->d[0]=strlen("El2d->eyy")+1;;
LibeArrayex(265,nctempstring,i,0,El2d->eyy->d[0]);
}
nctemp1178=j*El2d->eyy->d[0]+nctemp1178;
if((0>j)||(j>=El2d->eyy->d[1])){
nctempstring->a="El2d->eyy";
nctempstring->d[0]=strlen("El2d->eyy")+1;;
LibeArrayex(265,nctempstring,j,1,El2d->eyy->d[1]);
}
float nctemp1181 = Model->Alpha2y->a[nctemp1174] * El2d->eyy->a[nctemp1178];
float nctemp1182 = nctemp1169 + nctemp1181;
El2d->gammayy->a[nctemp1152] =nctemp1182;
int nctemp1186=i;
if((0>i)||(i>=El2d->gammaxy->d[0])){
nctempstring->a="El2d->gammaxy";
nctempstring->d[0]=strlen("El2d->gammaxy")+1;;
LibeArrayex(266,nctempstring,i,0,El2d->gammaxy->d[0]);
}
nctemp1186=j*El2d->gammaxy->d[0]+nctemp1186;
if((0>j)||(j>=El2d->gammaxy->d[1])){
nctempstring->a="El2d->gammaxy";
nctempstring->d[0]=strlen("El2d->gammaxy")+1;;
LibeArrayex(266,nctempstring,j,1,El2d->gammaxy->d[1]);
}
int nctemp1196=i;
if((0>i)||(i>=Model->Beta1y->d[0])){
nctempstring->a="Model->Beta1y";
nctempstring->d[0]=strlen("Model->Beta1y")+1;;
LibeArrayex(266,nctempstring,i,0,Model->Beta1y->d[0]);
}
nctemp1196=j*Model->Beta1y->d[0]+nctemp1196;
if((0>j)||(j>=Model->Beta1y->d[1])){
nctempstring->a="Model->Beta1y";
nctempstring->d[0]=strlen("Model->Beta1y")+1;;
LibeArrayex(266,nctempstring,j,1,Model->Beta1y->d[1]);
}
int nctemp1200=i;
if((0>i)||(i>=El2d->gammaxy->d[0])){
nctempstring->a="El2d->gammaxy";
nctempstring->d[0]=strlen("El2d->gammaxy")+1;;
LibeArrayex(266,nctempstring,i,0,El2d->gammaxy->d[0]);
}
nctemp1200=j*El2d->gammaxy->d[0]+nctemp1200;
if((0>j)||(j>=El2d->gammaxy->d[1])){
nctempstring->a="El2d->gammaxy";
nctempstring->d[0]=strlen("El2d->gammaxy")+1;;
LibeArrayex(266,nctempstring,j,1,El2d->gammaxy->d[1]);
}
float nctemp1203 = Model->Beta1y->a[nctemp1196] * El2d->gammaxy->a[nctemp1200];
int nctemp1208=i;
if((0>i)||(i>=Model->Beta2y->d[0])){
nctempstring->a="Model->Beta2y";
nctempstring->d[0]=strlen("Model->Beta2y")+1;;
LibeArrayex(267,nctempstring,i,0,Model->Beta2y->d[0]);
}
nctemp1208=j*Model->Beta2y->d[0]+nctemp1208;
if((0>j)||(j>=Model->Beta2y->d[1])){
nctempstring->a="Model->Beta2y";
nctempstring->d[0]=strlen("Model->Beta2y")+1;;
LibeArrayex(267,nctempstring,j,1,Model->Beta2y->d[1]);
}
int nctemp1212=i;
if((0>i)||(i>=El2d->exy->d[0])){
nctempstring->a="El2d->exy";
nctempstring->d[0]=strlen("El2d->exy")+1;;
LibeArrayex(267,nctempstring,i,0,El2d->exy->d[0]);
}
nctemp1212=j*El2d->exy->d[0]+nctemp1212;
if((0>j)||(j>=El2d->exy->d[1])){
nctempstring->a="El2d->exy";
nctempstring->d[0]=strlen("El2d->exy")+1;;
LibeArrayex(267,nctempstring,j,1,El2d->exy->d[1]);
}
float nctemp1215 = Model->Beta2y->a[nctemp1208] * El2d->exy->a[nctemp1212];
float nctemp1216 = nctemp1203 + nctemp1215;
El2d->gammaxy->a[nctemp1186] =nctemp1216;
}
}}}
