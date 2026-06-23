//  Translated by epsc  version: Tue Jun 23 16:01:28 2026

#include <stddef.h>
#include <stdio.h>
#include <assert.h>
typedef struct { float r; float i;} complex; 
typedef struct nctempfloat1 { int d[1]; float *a;} nctempfloat1; 
typedef struct nctempint1 { int d[1]; int *a;} nctempint1; 
typedef struct nctempchar1 { int d[1]; char *a;} nctempchar1; 
typedef struct nctempcomplex1 { int d[1]; complex *a;} nctempcomplex1; 
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
int DiffDxplus (struct diff* Diff,nctempfloat2 *A,nctempfloat2 *dA,float dx);
int DiffDyminus (struct diff* Diff,nctempfloat2 *A,nctempfloat2 *dA,float dx);
int DiffDyplus (struct diff* Diff,nctempfloat2 *A,nctempfloat2 *dA,float dx);
struct model {int Nx;
int Ny;
int Nb;
float W0;
nctempfloat2 *Qlx;
nctempfloat2 *Qly;
nctempfloat2 *Qmx;
nctempfloat2 *Qmy;
nctempfloat2 *Qpx;
nctempfloat2 *Qpy;
nctempfloat2 *Lambda;
nctempfloat2 *Mu;
nctempfloat2 *Muxy;
nctempfloat2 *Dmuxyx;
nctempfloat2 *Dmuxyy;
nctempfloat2 *Dlambdax;
nctempfloat2 *Dlambday;
nctempfloat2 *Dmux;
nctempfloat2 *Dmuy;
nctempfloat2 *Drhopx;
nctempfloat2 *Drhopy;
nctempfloat2 *Rho;
nctempfloat2 *Rhox;
nctempfloat2 *Rhoy;
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
nctempfloat1 *dx1;
nctempfloat1 *dy1;
nctempfloat1 *dx2;
nctempfloat1 *dy2;
float Dx;
float Dt;
int Freesurface;
};
typedef struct nctempmodel1 {int d[1]; struct model *a; } nctempmodel1;
struct nctempmodel2 {int d[2]; struct model *a; } ;
struct nctempmodel3 {int d[3]; struct model *a; } ;
struct nctempmodel4 {int d[4]; struct model *a; } ;
int Modeld (nctempfloat1 *d,float dx,int nb);
int Modele (nctempfloat1 *d,float dx,int nb);
nctempfloat2 * Modelcopy (nctempfloat2 *a);
int Modelstaggerx (nctempfloat2 *a,nctempfloat2 *astagg);
int Modelstaggery (nctempfloat2 *a,nctempfloat2 *astagg);
int Modelslscoeffs (nctempfloat2 *Qx,nctempfloat2 *Qy,nctempfloat2 *modx,nctempfloat2 *mody,nctempfloat2 *coeff1x,nctempfloat2 *coeff1y,nctempfloat2 *coeff2x,nctempfloat2 *coeff2y,struct model* Model);
struct model* Modelsls (nctempfloat2 *vp,nctempfloat2 *vs,nctempfloat2 *rho,nctempfloat2 *Qlx,nctempfloat2 *Qly,nctempfloat2 *Qmx,nctempfloat2 *Qmy,nctempfloat2 *Qpx,nctempfloat2 *Qpy,float Dx,float Dt,float W0,int Nb,int Freesurface);
float ModelStability (struct model* Model);
struct model* ModelNew (nctempfloat2 *vp,nctempfloat2 *vs,nctempfloat2 *rho,nctempfloat2 *Qlx,nctempfloat2 *Qly,nctempfloat2 *Qmx,nctempfloat2 *Qmy,nctempfloat2 *Qpx,nctempfloat2 *Qpy,float Dx,float Dt,float W0,int Nb,int Rheol,int Freesurface);
struct MainArg {nctempchar1 *arg;
};
typedef struct nctempMainArg1 {int d[1]; struct MainArg *a; } nctempMainArg1;
struct nctempMainArg2 {int d[2]; struct MainArg *a; } ;
struct nctempMainArg3 {int d[3]; struct MainArg *a; } ;
struct nctempMainArg4 {int d[4]; struct MainArg *a; } ;
int LibeErrinit ();
int LibeGeterrno ();
int LibeClearerr ();
nctempchar1 * LibeGeterrstr ();
nctempchar1 * LibeGetenv (nctempchar1 *name);
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
int LibeMod (int n,int r);
float LibeSqrt (float x);
float LibeLn (float x);
float LibeExp (float x);
float LibeSincos (float x,float y,float sign);
float LibeSin (float x);
float LibeCos (float x);
float LibeTan (float x);
float LibeArcsin (float x);
float LibeArccos (float x);
float LibeAtan (float f);
float LibeArctan (float x);
float LibePow (float base,float exponent);
int LibeMathinit ();
int LibeStrlen (nctempchar1 *s);
int LibeStrcmp (nctempchar1 *s,nctempchar1 *t);
int LibeStrev (nctempchar1 *s);
int LibeStrcpy (nctempchar1 *s,nctempchar1 *t);
int LibeStrcat (nctempchar1 *s,nctempchar1 *t);
nctempchar1 * LibeStradd (nctempchar1 *t,nctempchar1 *s);
nctempchar1 * LibeStrsave (nctempchar1 *s);
int LibeIsalhpa (int c);
int LibeIsdigit (int c);
int LibeIsalnum (int c);
int LibeAtoi (nctempchar1 *s);
int LibeItoa (int n,nctempchar1 *s);
int LibeItoh (int n,nctempchar1 *s);
float LibeAtof (nctempchar1 *s);
int LibeFtoaf (int mant,int nexp,int nfield,int nfrac,nctempchar1 *s);
int LibeFtoae (int mant,int nexp,int nfield,int nfrac,nctempchar1 *s);
int LibeFtoa (float f,nctempchar1 *fmt,nctempchar1 *s);
struct LibeFdescr {int cnt;
int ptr;
int bufsize;
nctempchar1 *base;
int readflg;
int writflg;
int unbflg;
int errflg;
int eoflg;
int fd;
};
typedef struct nctempLibeFdescr1 {int d[1]; struct LibeFdescr *a; } nctempLibeFdescr1;
struct nctempLibeFdescr2 {int d[2]; struct LibeFdescr *a; } ;
struct nctempLibeFdescr3 {int d[3]; struct LibeFdescr *a; } ;
struct nctempLibeFdescr4 {int d[4]; struct LibeFdescr *a; } ;
int LibeIoinit ();
int LibeFlushbuff (int fp);
int LibeFillbuff (int fp);
int LibeFlush (int fp);
int LibeOpen (nctempchar1 *name,nctempchar1 *mode);
int LibeClose (int fp);
int LibeGetc (int fp);
int LibeUngetc (int fp);
int LibeGetw (int fp,nctempchar1 *text);
int LibePutc (int fp,int c);
int LibePuts (int fp,nctempchar1 *s);
int LibePuti (int fp,int ival);
int LibePutf (int fp,float fval,nctempchar1 *form);
int LibePs (nctempchar1 *s);
int LibePi (int n);
int LibePf (float r);
int LibeRead (int fp,int n,nctempchar1 *buffer);
int LibeWrite (int fp,int n,nctempchar1 *buffer);
int LibeSeek (int fp,int pos,int flag);
int LibeIodelete ();
int LibeSetnb (int nb);
int LibeSetnt (int nt);
int LibeGetnb ();
int LibeGetnt ();
int LibeArrayex (int line,nctempchar1 *name,int ival,int index,int bound);
int LibeSystem (nctempchar1 *cmd);
int LibeInit ();
int LibeExit ();
nctempchar1 * LibeDate ();
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
nctempfloat2 *e;
nctempfloat2 *gammaxx;
nctempfloat2 *gammayy;
nctempfloat2 *gammaxy;
nctempfloat2 *gammayx;
nctempfloat2 *thetaxxx;
nctempfloat2 *thetayyy;
nctempfloat2 *thetaxyx;
nctempfloat2 *thetayxy;
int ts;
int fdp;
int fdvx;
int fdvy;
int fdsxx;
int fdsyy;
int fdsxy;
int sresamp;
nctempint1 *snpflags;
};
typedef struct nctempel2d1 {int d[1]; struct el2d *a; } nctempel2d1;
struct nctempel2d2 {int d[2]; struct el2d *a; } ;
struct nctempel2d3 {int d[3]; struct el2d *a; } ;
struct nctempel2d4 {int d[4]; struct el2d *a; } ;
struct rec {int nr;
nctempint1 *rx;
nctempint1 *ry;
int fd;
int nt;
nctempfloat2 *p;
nctempfloat2 *sxx;
nctempfloat2 *syy;
nctempfloat2 *sxy;
nctempfloat2 *exx;
nctempfloat2 *vx;
nctempfloat2 *vy;
nctempfloat2 *wrk;
int resamp;
int pit;
};
typedef struct nctemprec1 {int d[1]; struct rec *a; } nctemprec1;
struct nctemprec2 {int d[2]; struct rec *a; } ;
struct nctemprec3 {int d[3]; struct rec *a; } ;
struct nctemprec4 {int d[4]; struct rec *a; } ;
struct rec* RecNew (nctempint1 *rx,nctempint1 *ry,int nt,int resamp);
int RecReceiver (struct rec* Rec,int it,nctempfloat2 *field,int dtype);
nctempfloat2 * RecGetrec (struct rec* Rec,int data);
struct src {nctempint1 *Sx;
nctempint1 *Sy;
nctempfloat2 *Sqyy;
nctempfloat2 *Sqxx;
nctempfloat2 *Sqxy;
nctempfloat2 *Sfx;
nctempfloat2 *Sfy;
int Ns;
};
typedef struct nctempsrc1 {int d[1]; struct src *a; } nctempsrc1;
struct nctempsrc2 {int d[2]; struct src *a; } ;
struct nctempsrc3 {int d[3]; struct src *a; } ;
struct nctempsrc4 {int d[4]; struct src *a; } ;
struct src* SrcNew (nctempint1 *sx,nctempint1 *sy,nctempfloat2 *sqxx,nctempfloat2 *sqyy,nctempfloat2 *sqxy,nctempfloat2 *sfx,nctempfloat2 *sfy);
int SrcDel (struct src* Src);
int Srcricker (nctempfloat1 *source,float t0,float f0,int nt,float dt);
struct el2d* El2dNew (struct model* Model,int sresamp,nctempint1 *snpflags)
{
struct el2d* El2d;
int i;
int j;
{
struct el2d *nctemp5=(struct el2d*)RunMalloc(sizeof(struct el2d));
El2d =nctemp5;
El2d->sresamp = sresamp;
El2d->snpflags = snpflags;
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
El2d->p=nctemp45;
int nctemp57=Model->Nx;
nctemp57=nctemp57*Model->Ny;
nctempfloat2 *nctemp56;
nctemp56=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp56->d[0]=Model->Nx;
nctemp56->d[1]=Model->Ny;
nctemp56->a=(float *)RunMalloc(sizeof(float)*nctemp57);
El2d->sigmaxy=nctemp56;
int nctemp68=Model->Nx;
nctemp68=nctemp68*Model->Ny;
nctempfloat2 *nctemp67;
nctemp67=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp67->d[0]=Model->Nx;
nctemp67->d[1]=Model->Ny;
nctemp67->a=(float *)RunMalloc(sizeof(float)*nctemp68);
El2d->sigmayx=nctemp67;
int nctemp79=Model->Nx;
nctemp79=nctemp79*Model->Ny;
nctempfloat2 *nctemp78;
nctemp78=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp78->d[0]=Model->Nx;
nctemp78->d[1]=Model->Ny;
nctemp78->a=(float *)RunMalloc(sizeof(float)*nctemp79);
El2d->vx=nctemp78;
int nctemp90=Model->Nx;
nctemp90=nctemp90*Model->Ny;
nctempfloat2 *nctemp89;
nctemp89=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp89->d[0]=Model->Nx;
nctemp89->d[1]=Model->Ny;
nctemp89->a=(float *)RunMalloc(sizeof(float)*nctemp90);
El2d->vy=nctemp89;
int nctemp101=Model->Nx;
nctemp101=nctemp101*Model->Ny;
nctempfloat2 *nctemp100;
nctemp100=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp100->d[0]=Model->Nx;
nctemp100->d[1]=Model->Ny;
nctemp100->a=(float *)RunMalloc(sizeof(float)*nctemp101);
El2d->exx=nctemp100;
int nctemp112=Model->Nx;
nctemp112=nctemp112*Model->Ny;
nctempfloat2 *nctemp111;
nctemp111=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp111->d[0]=Model->Nx;
nctemp111->d[1]=Model->Ny;
nctemp111->a=(float *)RunMalloc(sizeof(float)*nctemp112);
El2d->eyy=nctemp111;
int nctemp123=Model->Nx;
nctemp123=nctemp123*Model->Ny;
nctempfloat2 *nctemp122;
nctemp122=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp122->d[0]=Model->Nx;
nctemp122->d[1]=Model->Ny;
nctemp122->a=(float *)RunMalloc(sizeof(float)*nctemp123);
El2d->exy=nctemp122;
int nctemp134=Model->Nx;
nctemp134=nctemp134*Model->Ny;
nctempfloat2 *nctemp133;
nctemp133=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp133->d[0]=Model->Nx;
nctemp133->d[1]=Model->Ny;
nctemp133->a=(float *)RunMalloc(sizeof(float)*nctemp134);
El2d->eyx=nctemp133;
int nctemp145=Model->Nx;
nctemp145=nctemp145*Model->Ny;
nctempfloat2 *nctemp144;
nctemp144=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp144->d[0]=Model->Nx;
nctemp144->d[1]=Model->Ny;
nctemp144->a=(float *)RunMalloc(sizeof(float)*nctemp145);
El2d->e=nctemp144;
int nctemp156=Model->Nx;
nctemp156=nctemp156*Model->Ny;
nctempfloat2 *nctemp155;
nctemp155=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp155->d[0]=Model->Nx;
nctemp155->d[1]=Model->Ny;
nctemp155->a=(float *)RunMalloc(sizeof(float)*nctemp156);
El2d->gammaxx=nctemp155;
int nctemp167=Model->Nx;
nctemp167=nctemp167*Model->Ny;
nctempfloat2 *nctemp166;
nctemp166=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp166->d[0]=Model->Nx;
nctemp166->d[1]=Model->Ny;
nctemp166->a=(float *)RunMalloc(sizeof(float)*nctemp167);
El2d->gammayy=nctemp166;
int nctemp178=Model->Nx;
nctemp178=nctemp178*Model->Ny;
nctempfloat2 *nctemp177;
nctemp177=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp177->d[0]=Model->Nx;
nctemp177->d[1]=Model->Ny;
nctemp177->a=(float *)RunMalloc(sizeof(float)*nctemp178);
El2d->gammaxy=nctemp177;
int nctemp189=Model->Nx;
nctemp189=nctemp189*Model->Ny;
nctempfloat2 *nctemp188;
nctemp188=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp188->d[0]=Model->Nx;
nctemp188->d[1]=Model->Ny;
nctemp188->a=(float *)RunMalloc(sizeof(float)*nctemp189);
El2d->gammayx=nctemp188;
int nctemp200=Model->Nx;
nctemp200=nctemp200*Model->Ny;
nctempfloat2 *nctemp199;
nctemp199=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp199->d[0]=Model->Nx;
nctemp199->d[1]=Model->Ny;
nctemp199->a=(float *)RunMalloc(sizeof(float)*nctemp200);
El2d->thetaxxx=nctemp199;
int nctemp211=Model->Nx;
nctemp211=nctemp211*Model->Ny;
nctempfloat2 *nctemp210;
nctemp210=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp210->d[0]=Model->Nx;
nctemp210->d[1]=Model->Ny;
nctemp210->a=(float *)RunMalloc(sizeof(float)*nctemp211);
El2d->thetayyy=nctemp210;
int nctemp222=Model->Nx;
nctemp222=nctemp222*Model->Ny;
nctempfloat2 *nctemp221;
nctemp221=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp221->d[0]=Model->Nx;
nctemp221->d[1]=Model->Ny;
nctemp221->a=(float *)RunMalloc(sizeof(float)*nctemp222);
El2d->thetayxy=nctemp221;
int nctemp233=Model->Nx;
nctemp233=nctemp233*Model->Ny;
nctempfloat2 *nctemp232;
nctemp232=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp232->d[0]=Model->Nx;
nctemp232->d[1]=Model->Ny;
nctemp232->a=(float *)RunMalloc(sizeof(float)*nctemp233);
El2d->thetaxyx=nctemp232;
for(i = 0;i < Model->Nx;i = (i + 1)){
{
for(j = 0;j < Model->Ny;j = (j + 1)){
{
El2d->p->a[i+El2d->p->d[0]*(j)] = 0.0;
El2d->sigmaxx->a[i+El2d->sigmaxx->d[0]*(j)] = 0.0;
El2d->sigmayy->a[i+El2d->sigmayy->d[0]*(j)] = 0.0;
El2d->sigmaxy->a[i+El2d->sigmaxy->d[0]*(j)] = 0.0;
El2d->sigmayx->a[i+El2d->sigmayx->d[0]*(j)] = 0.0;
El2d->vx->a[i+El2d->vx->d[0]*(j)] = 0.0;
El2d->vy->a[i+El2d->vy->d[0]*(j)] = 0.0;
El2d->exx->a[i+El2d->exx->d[0]*(j)] = 0.0;
El2d->eyy->a[i+El2d->eyy->d[0]*(j)] = 0.0;
El2d->exy->a[i+El2d->exy->d[0]*(j)] = 0.0;
El2d->eyx->a[i+El2d->eyx->d[0]*(j)] = 0.0;
El2d->e->a[i+El2d->e->d[0]*(j)] = 0.0;
El2d->gammaxx->a[i+El2d->gammaxx->d[0]*(j)] = 0.0;
El2d->gammayy->a[i+El2d->gammayy->d[0]*(j)] = 0.0;
El2d->gammaxy->a[i+El2d->gammaxy->d[0]*(j)] = 0.0;
El2d->gammayx->a[i+El2d->gammayx->d[0]*(j)] = 0.0;
El2d->thetaxxx->a[i+El2d->thetaxxx->d[0]*(j)] = 0.0;
El2d->thetayyy->a[i+El2d->thetayyy->d[0]*(j)] = 0.0;
El2d->thetayxy->a[i+El2d->thetayxy->d[0]*(j)] = 0.0;
El2d->thetaxyx->a[i+El2d->thetaxyx->d[0]*(j)] = 0.0;
El2d->ts = 0;
}
}
}
}
int nctemp241=0;
int nctemp238 = (El2d->snpflags->a[nctemp241] ==1);
if(nctemp238)
{
{
struct nctempchar1 *nctemp250;
static struct nctempchar1 nctemp251 = {{ 10}, (char*)"snp-p.bin\0"};
nctemp250=&nctemp251;
nctempchar1* nctemp248= nctemp250;
struct nctempchar1 *nctemp254;
static struct nctempchar1 nctemp255 = {{ 2}, (char*)"w\0"};
nctemp254=&nctemp255;
nctempchar1* nctemp252= nctemp254;
int nctemp256=LibeOpen(nctemp248,nctemp252);
El2d->fdp =nctemp256;
}
}
int nctemp260=1;
int nctemp257 = (El2d->snpflags->a[nctemp260] ==1);
if(nctemp257)
{
{
struct nctempchar1 *nctemp269;
static struct nctempchar1 nctemp270 = {{ 11}, (char*)"snp-vx.bin\0"};
nctemp269=&nctemp270;
nctempchar1* nctemp267= nctemp269;
struct nctempchar1 *nctemp273;
static struct nctempchar1 nctemp274 = {{ 2}, (char*)"w\0"};
nctemp273=&nctemp274;
nctempchar1* nctemp271= nctemp273;
int nctemp275=LibeOpen(nctemp267,nctemp271);
El2d->fdvx =nctemp275;
}
}
int nctemp279=2;
int nctemp276 = (El2d->snpflags->a[nctemp279] ==1);
if(nctemp276)
{
{
struct nctempchar1 *nctemp288;
static struct nctempchar1 nctemp289 = {{ 11}, (char*)"snp-vy.bin\0"};
nctemp288=&nctemp289;
nctempchar1* nctemp286= nctemp288;
struct nctempchar1 *nctemp292;
static struct nctempchar1 nctemp293 = {{ 2}, (char*)"w\0"};
nctemp292=&nctemp293;
nctempchar1* nctemp290= nctemp292;
int nctemp294=LibeOpen(nctemp286,nctemp290);
El2d->fdvy =nctemp294;
}
}
int nctemp298=3;
int nctemp295 = (El2d->snpflags->a[nctemp298] ==1);
if(nctemp295)
{
{
struct nctempchar1 *nctemp307;
static struct nctempchar1 nctemp308 = {{ 12}, (char*)"snp-sxx.bin\0"};
nctemp307=&nctemp308;
nctempchar1* nctemp305= nctemp307;
struct nctempchar1 *nctemp311;
static struct nctempchar1 nctemp312 = {{ 2}, (char*)"w\0"};
nctemp311=&nctemp312;
nctempchar1* nctemp309= nctemp311;
int nctemp313=LibeOpen(nctemp305,nctemp309);
El2d->fdsxx =nctemp313;
}
}
int nctemp317=4;
int nctemp314 = (El2d->snpflags->a[nctemp317] ==1);
if(nctemp314)
{
{
struct nctempchar1 *nctemp326;
static struct nctempchar1 nctemp327 = {{ 12}, (char*)"snp-syy.bin\0"};
nctemp326=&nctemp327;
nctempchar1* nctemp324= nctemp326;
struct nctempchar1 *nctemp330;
static struct nctempchar1 nctemp331 = {{ 2}, (char*)"w\0"};
nctemp330=&nctemp331;
nctempchar1* nctemp328= nctemp330;
int nctemp332=LibeOpen(nctemp324,nctemp328);
El2d->fdsyy =nctemp332;
}
}
int nctemp336=5;
int nctemp333 = (El2d->snpflags->a[nctemp336] ==1);
if(nctemp333)
{
{
struct nctempchar1 *nctemp345;
static struct nctempchar1 nctemp346 = {{ 12}, (char*)"snp-sxy.bin\0"};
nctemp345=&nctemp346;
nctempchar1* nctemp343= nctemp345;
struct nctempchar1 *nctemp349;
static struct nctempchar1 nctemp350 = {{ 2}, (char*)"w\0"};
nctemp349=&nctemp350;
nctempchar1* nctemp347= nctemp349;
int nctemp351=LibeOpen(nctemp343,nctemp347);
El2d->fdsxy =nctemp351;
}
}
int nctemp355=6;
int nctemp352 = (El2d->snpflags->a[nctemp355] ==1);
if(nctemp352)
{
{
struct nctempchar1 *nctemp364;
static struct nctempchar1 nctemp365 = {{ 12}, (char*)"snp-exx.bin\0"};
nctemp364=&nctemp365;
nctempchar1* nctemp362= nctemp364;
struct nctempchar1 *nctemp368;
static struct nctempchar1 nctemp369 = {{ 2}, (char*)"w\0"};
nctemp368=&nctemp369;
nctempchar1* nctemp366= nctemp368;
int nctemp370=LibeOpen(nctemp362,nctemp366);
El2d->fdsxy =nctemp370;
}
}
return El2d;
}
}
int El2dvx (struct el2d* El2d,struct model* Model)
{
int nx;
int ny;
int i;
int j;
{
nx = Model->Nx;
ny = Model->Ny;

 #pragma omp parallel for
for(j=0;j<ny;j++){for(i=0;i<nx;i++){{
{
El2d->vx->a[i+El2d->vx->d[0]*(j)] = (((((Model->Dt * Model->Rhox->a[i+Model->Rhox->d[0]*(j)]) * (El2d->exx->a[i+El2d->exx->d[0]*(j)] + El2d->exy->a[i+El2d->exy->d[0]*(j)])) + ((Model->Dt * El2d->thetaxxx->a[i+El2d->thetaxxx->d[0]*(j)]) * Model->Drhopx->a[i+Model->Drhopx->d[0]*(j)])) + ((Model->Dt * El2d->thetayxy->a[i+El2d->thetayxy->d[0]*(j)]) * Model->Drhopy->a[i+Model->Drhopy->d[0]*(j)])) + El2d->vx->a[i+El2d->vx->d[0]*(j)]);
El2d->thetaxxx->a[i+El2d->thetaxxx->d[0]*(j)] = ((Model->Eta1x->a[i+Model->Eta1x->d[0]*(j)] * El2d->thetaxxx->a[i+El2d->thetaxxx->d[0]*(j)]) + (Model->Eta2x->a[i+Model->Eta2x->d[0]*(j)] * El2d->exx->a[i+El2d->exx->d[0]*(j)]));
El2d->thetayxy->a[i+El2d->thetayxy->d[0]*(j)] = ((Model->Eta1y->a[i+Model->Eta1y->d[0]*(j)] * El2d->thetayxy->a[i+El2d->thetayxy->d[0]*(j)]) + (Model->Eta2y->a[i+Model->Eta2y->d[0]*(j)] * El2d->exy->a[i+El2d->exy->d[0]*(j)]));
}
}
}}}
}
int El2dvy (struct el2d* El2d,struct model* Model)
{
int nx;
int ny;
int i;
int j;
{
nx = Model->Nx;
ny = Model->Ny;

 #pragma omp parallel for
for(j=0;j<ny;j++){for(i=0;i<nx;i++){{
{
El2d->vy->a[i+El2d->vy->d[0]*(j)] = (((((Model->Dt * Model->Rhoy->a[i+Model->Rhoy->d[0]*(j)]) * (El2d->eyy->a[i+El2d->eyy->d[0]*(j)] + El2d->eyx->a[i+El2d->eyx->d[0]*(j)])) + ((Model->Dt * El2d->thetayyy->a[i+El2d->thetayyy->d[0]*(j)]) * Model->Drhopy->a[i+Model->Drhopy->d[0]*(j)])) + ((Model->Dt * El2d->thetaxyx->a[i+El2d->thetaxyx->d[0]*(j)]) * Model->Drhopx->a[i+Model->Drhopx->d[0]*(j)])) + El2d->vy->a[i+El2d->vy->d[0]*(j)]);
El2d->thetayyy->a[i+El2d->thetayyy->d[0]*(j)] = ((Model->Eta1y->a[i+Model->Eta1y->d[0]*(j)] * El2d->thetayyy->a[i+El2d->thetayyy->d[0]*(j)]) + (Model->Eta2y->a[i+Model->Eta2y->d[0]*(j)] * El2d->eyy->a[i+El2d->eyy->d[0]*(j)]));
El2d->thetaxyx->a[i+El2d->thetaxyx->d[0]*(j)] = ((Model->Eta1x->a[i+Model->Eta1x->d[0]*(j)] * El2d->thetaxyx->a[i+El2d->thetaxyx->d[0]*(j)]) + (Model->Eta2x->a[i+Model->Eta2x->d[0]*(j)] * El2d->eyx->a[i+El2d->eyx->d[0]*(j)]));
}
}
}}}
}
int El2de (struct el2d* El2d,struct model* Model)
{
int nx;
int ny;
int i;
int j;
{
nx = Model->Nx;
ny = Model->Ny;

 #pragma omp parallel for
for(j=0;j<ny;j++){for(i=0;i<nx;i++){{
{
El2d->e->a[i+El2d->e->d[0]*(j)] = (El2d->exx->a[i+El2d->exx->d[0]*(j)] + El2d->eyy->a[i+El2d->eyy->d[0]*(j)]);
}
}
}}}
}
int El2dexy (struct el2d* El2d,struct model* Model,nctempfloat2 *tmp1,nctempfloat2 *tmp2)
{
int nx;
int ny;
int i;
int j;
{
nx = Model->Nx;
ny = Model->Ny;

 #pragma omp parallel for
for(j=0;j<ny;j++){for(i=0;i<nx;i++){{
{
El2d->exy->a[i+El2d->exy->d[0]*(j)] = (0.5 * (tmp1->a[i+tmp1->d[0]*(j)] + tmp2->a[i+tmp2->d[0]*(j)]));
}
}
}}}
}
int El2deyx (struct el2d* El2d,struct model* Model,nctempfloat2 *tmp1,nctempfloat2 *tmp2)
{
int nx;
int ny;
int i;
int j;
{
nx = Model->Nx;
ny = Model->Ny;

 #pragma omp parallel for
for(j=0;j<ny;j++){for(i=0;i<nx;i++){{
{
El2d->eyx->a[i+El2d->eyx->d[0]*(j)] = (0.5 * (tmp1->a[i+tmp1->d[0]*(j)] + tmp2->a[i+tmp2->d[0]*(j)]));
}
}
}}}
}
int El2dstress (struct el2d* El2d,struct model* Model)
{
int nx;
int ny;
int i;
int j;
{
nx = Model->Nx;
ny = Model->Ny;

 #pragma omp parallel for
for(j=0;j<ny;j++){for(i=0;i<nx;i++){{
{
El2d->sigmaxx->a[i+El2d->sigmaxx->d[0]*(j)] = ((((((Model->Dt * Model->Lambda->a[i+Model->Lambda->d[0]*(j)]) * (El2d->exx->a[i+El2d->exx->d[0]*(j)] + El2d->eyy->a[i+El2d->eyy->d[0]*(j)])) + (((2.0 * Model->Dt) * Model->Mu->a[i+Model->Mu->d[0]*(j)]) * El2d->exx->a[i+El2d->exx->d[0]*(j)])) + (Model->Dt * ((El2d->gammaxx->a[i+El2d->gammaxx->d[0]*(j)] * Model->Dlambdax->a[i+Model->Dlambdax->d[0]*(j)]) + (El2d->gammayy->a[i+El2d->gammayy->d[0]*(j)] * Model->Dlambday->a[i+Model->Dlambday->d[0]*(j)])))) + (((2.0 * Model->Dt) * El2d->gammaxx->a[i+El2d->gammaxx->d[0]*(j)]) * Model->Dmux->a[i+Model->Dmux->d[0]*(j)])) + El2d->sigmaxx->a[i+El2d->sigmaxx->d[0]*(j)]);
El2d->sigmayy->a[i+El2d->sigmayy->d[0]*(j)] = ((((((Model->Dt * Model->Lambda->a[i+Model->Lambda->d[0]*(j)]) * (El2d->exx->a[i+El2d->exx->d[0]*(j)] + El2d->eyy->a[i+El2d->eyy->d[0]*(j)])) + (((2.0 * Model->Dt) * Model->Mu->a[i+Model->Mu->d[0]*(j)]) * El2d->eyy->a[i+El2d->eyy->d[0]*(j)])) + (Model->Dt * ((El2d->gammaxx->a[i+El2d->gammaxx->d[0]*(j)] * Model->Dlambdax->a[i+Model->Dlambdax->d[0]*(j)]) + (El2d->gammayy->a[i+El2d->gammayy->d[0]*(j)] * Model->Dlambday->a[i+Model->Dlambday->d[0]*(j)])))) + (((2.0 * Model->Dt) * El2d->gammayy->a[i+El2d->gammayy->d[0]*(j)]) * Model->Dmuy->a[i+Model->Dmuy->d[0]*(j)])) + El2d->sigmayy->a[i+El2d->sigmayy->d[0]*(j)]);
El2d->p->a[i+El2d->p->d[0]*(j)] = (0.5 * (El2d->sigmaxx->a[i+El2d->sigmaxx->d[0]*(j)] + El2d->sigmayy->a[i+El2d->sigmayy->d[0]*(j)]));
El2d->sigmaxy->a[i+El2d->sigmaxy->d[0]*(j)] = (((((2.0 * Model->Dt) * Model->Muxy->a[i+Model->Muxy->d[0]*(j)]) * El2d->exy->a[i+El2d->exy->d[0]*(j)]) + (((2.0 * Model->Dt) * El2d->gammaxy->a[i+El2d->gammaxy->d[0]*(j)]) * Model->Dmuxyy->a[i+Model->Dmuxyy->d[0]*(j)])) + El2d->sigmaxy->a[i+El2d->sigmaxy->d[0]*(j)]);
El2d->sigmayx->a[i+El2d->sigmayx->d[0]*(j)] = (((((2.0 * Model->Dt) * Model->Muxy->a[i+Model->Muxy->d[0]*(j)]) * El2d->exy->a[i+El2d->exy->d[0]*(j)]) + (((2.0 * Model->Dt) * El2d->gammayx->a[i+El2d->gammayx->d[0]*(j)]) * Model->Dmuxyx->a[i+Model->Dmuxyx->d[0]*(j)])) + El2d->sigmayx->a[i+El2d->sigmayx->d[0]*(j)]);
El2d->gammaxx->a[i+El2d->gammaxx->d[0]*(j)] = ((Model->Alpha1x->a[i+Model->Alpha1x->d[0]*(j)] * El2d->gammaxx->a[i+El2d->gammaxx->d[0]*(j)]) + (Model->Alpha2x->a[i+Model->Alpha2x->d[0]*(j)] * El2d->exx->a[i+El2d->exx->d[0]*(j)]));
El2d->gammayy->a[i+El2d->gammayy->d[0]*(j)] = ((Model->Alpha1y->a[i+Model->Alpha1y->d[0]*(j)] * El2d->gammayy->a[i+El2d->gammayy->d[0]*(j)]) + (Model->Alpha2y->a[i+Model->Alpha2y->d[0]*(j)] * El2d->eyy->a[i+El2d->eyy->d[0]*(j)]));
El2d->gammaxy->a[i+El2d->gammaxy->d[0]*(j)] = ((Model->Beta1y->a[i+Model->Beta1y->d[0]*(j)] * El2d->gammaxy->a[i+El2d->gammaxy->d[0]*(j)]) + (Model->Beta2y->a[i+Model->Beta2y->d[0]*(j)] * El2d->exy->a[i+El2d->exy->d[0]*(j)]));
El2d->gammayx->a[i+El2d->gammayx->d[0]*(j)] = ((Model->Beta1x->a[i+Model->Beta1x->d[0]*(j)] * El2d->gammayx->a[i+El2d->gammayx->d[0]*(j)]) + (Model->Beta2x->a[i+Model->Beta2x->d[0]*(j)] * El2d->eyx->a[i+El2d->eyx->d[0]*(j)]));
}
}
}}}
}
int El2dSnap (struct el2d* El2d,int it)
{
int Nx;
int Ny;
int n;
nctempchar1 *tmp;
{
int nctemp396 = (El2d->sresamp <= 0);
if(nctemp396)
{
{
return 1;
}
}
int nctemp405=El2d->sigmaxx->d[0];Nx =nctemp405;
int nctemp413=El2d->sigmaxx->d[1];Ny =nctemp413;
n = (Nx * Ny);
int nctemp420= it;
int nctemp422= El2d->sresamp;
int nctemp424=LibeMod(nctemp420,nctemp422);
int nctemp417 = (nctemp424 ==0);
if(nctemp417)
{
{
int nctemp429=0;
int nctemp426 = (El2d->snpflags->a[nctemp429] ==1);
if(nctemp426)
{
{
nctempchar1 nctemp438;
nctempchar1 *nctemp437;
nctemp438=*(nctempchar1*)(El2d->p);
int nctemp445 = 4 * n;
nctemp438.d[0]=nctemp445;
nctemp437=&nctemp438;
tmp=nctemp437;
int nctemp447= El2d->fdp;
int nctemp454 = 4 * n;
int nctemp449= nctemp454;
nctempchar1* nctemp455= tmp;
int nctemp458=LibeWrite(nctemp447,nctemp449,nctemp455);
}
}
int nctemp462=1;
int nctemp459 = (El2d->snpflags->a[nctemp462] ==1);
if(nctemp459)
{
{
nctempchar1 nctemp471;
nctempchar1 *nctemp470;
nctemp471=*(nctempchar1*)(El2d->vx);
int nctemp478 = 4 * n;
nctemp471.d[0]=nctemp478;
nctemp470=&nctemp471;
tmp=nctemp470;
int nctemp480= El2d->fdvx;
int nctemp487 = 4 * n;
int nctemp482= nctemp487;
nctempchar1* nctemp488= tmp;
int nctemp491=LibeWrite(nctemp480,nctemp482,nctemp488);
}
}
int nctemp495=2;
int nctemp492 = (El2d->snpflags->a[nctemp495] ==1);
if(nctemp492)
{
{
nctempchar1 nctemp504;
nctempchar1 *nctemp503;
nctemp504=*(nctempchar1*)(El2d->vy);
int nctemp511 = 4 * n;
nctemp504.d[0]=nctemp511;
nctemp503=&nctemp504;
tmp=nctemp503;
int nctemp513= El2d->fdvy;
int nctemp520 = 4 * n;
int nctemp515= nctemp520;
nctempchar1* nctemp521= tmp;
int nctemp524=LibeWrite(nctemp513,nctemp515,nctemp521);
}
}
int nctemp528=3;
int nctemp525 = (El2d->snpflags->a[nctemp528] ==1);
if(nctemp525)
{
{
nctempchar1 nctemp537;
nctempchar1 *nctemp536;
nctemp537=*(nctempchar1*)(El2d->sigmaxx);
int nctemp544 = 4 * n;
nctemp537.d[0]=nctemp544;
nctemp536=&nctemp537;
tmp=nctemp536;
int nctemp546= El2d->fdsxx;
int nctemp553 = 4 * n;
int nctemp548= nctemp553;
nctempchar1* nctemp554= tmp;
int nctemp557=LibeWrite(nctemp546,nctemp548,nctemp554);
}
}
int nctemp561=4;
int nctemp558 = (El2d->snpflags->a[nctemp561] ==1);
if(nctemp558)
{
{
nctempchar1 nctemp570;
nctempchar1 *nctemp569;
nctemp570=*(nctempchar1*)(El2d->sigmayy);
int nctemp577 = 4 * n;
nctemp570.d[0]=nctemp577;
nctemp569=&nctemp570;
tmp=nctemp569;
int nctemp579= El2d->fdsyy;
int nctemp586 = 4 * n;
int nctemp581= nctemp586;
nctempchar1* nctemp587= tmp;
int nctemp590=LibeWrite(nctemp579,nctemp581,nctemp587);
}
}
int nctemp594=5;
int nctemp591 = (El2d->snpflags->a[nctemp594] ==1);
if(nctemp591)
{
{
nctempchar1 nctemp603;
nctempchar1 *nctemp602;
nctemp603=*(nctempchar1*)(El2d->sigmaxy);
int nctemp610 = 4 * n;
nctemp603.d[0]=nctemp610;
nctemp602=&nctemp603;
tmp=nctemp602;
int nctemp612= El2d->fdsxy;
int nctemp619 = 4 * n;
int nctemp614= nctemp619;
nctempchar1* nctemp620= tmp;
int nctemp623=LibeWrite(nctemp612,nctemp614,nctemp620);
}
}
int nctemp627=6;
int nctemp624 = (El2d->snpflags->a[nctemp627] ==1);
if(nctemp624)
{
{
nctempchar1 nctemp636;
nctempchar1 *nctemp635;
nctemp636=*(nctempchar1*)(El2d->exx);
int nctemp643 = 4 * n;
nctemp636.d[0]=nctemp643;
nctemp635=&nctemp636;
tmp=nctemp635;
int nctemp645= El2d->fdsxy;
int nctemp652 = 4 * n;
int nctemp647= nctemp652;
nctempchar1* nctemp653= tmp;
int nctemp656=LibeWrite(nctemp645,nctemp647,nctemp653);
}
}
}
}
return 1;
}
}
int El2dSolve (struct el2d* El2d,struct model* Model,struct src* Src,struct rec* Rec,int nt,int l)
{
struct diff* Diff;
nctempfloat2 *tmp1;
nctempfloat2 *tmp2;
float oldperc;
int ns;
int ne;
int i;
int k;
int sx;
int sy;
float perc;
int iperc;
int dtype;
{
int nctemp662= l;
struct diff* nctemp664=DiffNew(nctemp662);
Diff =nctemp664;
int nctemp671=Model->Nx;
nctemp671=nctemp671*Model->Ny;
nctempfloat2 *nctemp670;
nctemp670=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp670->d[0]=Model->Nx;
nctemp670->d[1]=Model->Ny;
nctemp670->a=(float *)RunMalloc(sizeof(float)*nctemp671);
tmp1=nctemp670;
int nctemp682=Model->Nx;
nctemp682=nctemp682*Model->Ny;
nctempfloat2 *nctemp681;
nctemp681=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp681->d[0]=Model->Nx;
nctemp681->d[1]=Model->Ny;
nctemp681->a=(float *)RunMalloc(sizeof(float)*nctemp682);
tmp2=nctemp681;
oldperc = 0.0;
ns = El2d->ts;
ne = (ns + nt);
for(i = ns;i < ne;i = (i + 1)){
{
struct diff* nctemp688= Diff;
nctempfloat2* nctemp690= El2d->sigmaxx;
nctempfloat2* nctemp693= El2d->exx;
float nctemp696= Model->Dx;
int nctemp698=DiffDxplus(nctemp688,nctemp690,nctemp693,nctemp696);
struct diff* nctemp700= Diff;
nctempfloat2* nctemp702= El2d->sigmaxy;
nctempfloat2* nctemp705= El2d->exy;
float nctemp708= Model->Dx;
int nctemp710=DiffDyminus(nctemp700,nctemp702,nctemp705,nctemp708);
struct el2d* nctemp712= El2d;
struct model* nctemp714= Model;
int nctemp716=El2dvx(nctemp712,nctemp714);
struct diff* nctemp718= Diff;
nctempfloat2* nctemp720= El2d->sigmayy;
nctempfloat2* nctemp723= El2d->eyy;
float nctemp726= Model->Dx;
int nctemp728=DiffDyplus(nctemp718,nctemp720,nctemp723,nctemp726);
struct diff* nctemp730= Diff;
nctempfloat2* nctemp732= El2d->sigmaxy;
nctempfloat2* nctemp735= El2d->eyx;
float nctemp738= Model->Dx;
int nctemp740=DiffDxminus(nctemp730,nctemp732,nctemp735,nctemp738);
struct el2d* nctemp742= El2d;
struct model* nctemp744= Model;
int nctemp746=El2dvy(nctemp742,nctemp744);
struct diff* nctemp748= Diff;
nctempfloat2* nctemp750= El2d->vx;
nctempfloat2* nctemp753= El2d->exx;
float nctemp756= Model->Dx;
int nctemp758=DiffDxminus(nctemp748,nctemp750,nctemp753,nctemp756);
struct diff* nctemp760= Diff;
nctempfloat2* nctemp762= El2d->vy;
nctempfloat2* nctemp765= El2d->eyy;
float nctemp768= Model->Dx;
int nctemp770=DiffDyminus(nctemp760,nctemp762,nctemp765,nctemp768);
struct diff* nctemp772= Diff;
nctempfloat2* nctemp774= El2d->vy;
nctempfloat2* nctemp777= tmp1;
float nctemp780= Model->Dx;
int nctemp782=DiffDxplus(nctemp772,nctemp774,nctemp777,nctemp780);
struct diff* nctemp784= Diff;
nctempfloat2* nctemp786= El2d->vx;
nctempfloat2* nctemp789= tmp2;
float nctemp792= Model->Dx;
int nctemp794=DiffDyplus(nctemp784,nctemp786,nctemp789,nctemp792);
struct el2d* nctemp796= El2d;
struct model* nctemp798= Model;
nctempfloat2* nctemp800= tmp1;
nctempfloat2* nctemp803= tmp2;
int nctemp806=El2dexy(nctemp796,nctemp798,nctemp800,nctemp803);
struct el2d* nctemp808= El2d;
struct model* nctemp810= Model;
nctempfloat2* nctemp812= tmp1;
nctempfloat2* nctemp815= tmp2;
int nctemp818=El2deyx(nctemp808,nctemp810,nctemp812,nctemp815);
struct el2d* nctemp820= El2d;
struct model* nctemp822= Model;
int nctemp824=El2de(nctemp820,nctemp822);
struct el2d* nctemp826= El2d;
struct model* nctemp828= Model;
int nctemp830=El2dstress(nctemp826,nctemp828);
for(k = 0;k < Src->Ns;k = (k + 1)){
{
sx = Src->Sx->a[k];
sy = Src->Sy->a[k];
El2d->sigmaxx->a[sx+El2d->sigmaxx->d[0]*(sy)] = (El2d->sigmaxx->a[sx+El2d->sigmaxx->d[0]*(sy)] + (Model->Dt * (Src->Sqxx->a[i+Src->Sqxx->d[0]*(k)] / (Model->Dx * Model->Dx))));
El2d->sigmayy->a[sx+El2d->sigmayy->d[0]*(sy)] = (El2d->sigmayy->a[sx+El2d->sigmayy->d[0]*(sy)] + (Model->Dt * (Src->Sqyy->a[i+Src->Sqyy->d[0]*(k)] / (Model->Dx * Model->Dx))));
El2d->sigmayy->a[sx+El2d->sigmayy->d[0]*(sy)] = (El2d->sigmaxy->a[sx+El2d->sigmaxy->d[0]*(sy)] + (Model->Dt * (Src->Sqxy->a[i+Src->Sqxy->d[0]*(k)] / (Model->Dx * Model->Dx))));
El2d->vx->a[sx+El2d->vx->d[0]*(sy)] = (El2d->vx->a[sx+El2d->vx->d[0]*(sy)] + (Model->Dt * (Src->Sfx->a[i+Src->Sfx->d[0]*(k)] / (Model->Dx * Model->Dx))));
El2d->vy->a[sx+El2d->vy->d[0]*(sy)] = (El2d->vy->a[sx+El2d->vy->d[0]*(sy)] + (Model->Dt * (Src->Sfy->a[i+Src->Sfy->d[0]*(k)] / (Model->Dx * Model->Dx))));
}
}
float nctemp842=(float)(i);
int nctemp855 = ne - ns;
int nctemp857 = nctemp855 - 1;
float nctemp846=(float)(nctemp857);
float nctemp858 = nctemp842 / nctemp846;
float nctemp859 = 1000.0 * nctemp858;
perc =nctemp859;
float nctemp867 = perc - oldperc;
int nctemp860 = (nctemp867 >= 10.0);
if(nctemp860)
{
{
int nctemp876=(int)(perc);
int nctemp880 = nctemp876 / 10;
iperc =nctemp880;
int nctemp884= iperc;
int nctemp886= 10;
int nctemp888=LibeMod(nctemp884,nctemp886);
int nctemp881 = (nctemp888 ==0);
if(nctemp881)
{
{
int nctemp891= 4;
struct nctempchar1 *nctemp895;
static struct nctempchar1 nctemp896 = {{ 20}, (char*)"percent completed: \0"};
nctemp895=&nctemp896;
nctempchar1* nctemp893= nctemp895;
int nctemp897=LibePuts(nctemp891,nctemp893);
int nctemp899= 4;
int nctemp901= iperc;
int nctemp903=LibePuti(nctemp899,nctemp901);
int nctemp905= 4;
struct nctempchar1 *nctemp909;
static struct nctempchar1 nctemp910 = {{ 3}, (char*)"\n\0"};
nctemp909=&nctemp910;
nctempchar1* nctemp907= nctemp909;
int nctemp911=LibePuts(nctemp905,nctemp907);
int nctemp913= 4;
int nctemp915=LibeFlush(nctemp913);
}
}
oldperc = perc;
}
}
int nctemp916 = (Rec !=0);
if(nctemp916)
{
{
struct rec* nctemp921= Rec;
int nctemp923= i;
nctempfloat2* nctemp925= El2d->p;
dtype =1;
int nctemp928= dtype;
int nctemp933=RecReceiver(nctemp921,nctemp923,nctemp925,nctemp928);
struct rec* nctemp935= Rec;
int nctemp937= i;
nctempfloat2* nctemp939= El2d->vx;
dtype =2;
int nctemp942= dtype;
int nctemp947=RecReceiver(nctemp935,nctemp937,nctemp939,nctemp942);
struct rec* nctemp949= Rec;
int nctemp951= i;
nctempfloat2* nctemp953= El2d->vy;
dtype =3;
int nctemp956= dtype;
int nctemp961=RecReceiver(nctemp949,nctemp951,nctemp953,nctemp956);
struct rec* nctemp963= Rec;
int nctemp965= i;
nctempfloat2* nctemp967= El2d->sigmaxx;
dtype =4;
int nctemp970= dtype;
int nctemp975=RecReceiver(nctemp963,nctemp965,nctemp967,nctemp970);
struct rec* nctemp977= Rec;
int nctemp979= i;
nctempfloat2* nctemp981= El2d->sigmayy;
dtype =5;
int nctemp984= dtype;
int nctemp989=RecReceiver(nctemp977,nctemp979,nctemp981,nctemp984);
struct rec* nctemp991= Rec;
int nctemp993= i;
nctempfloat2* nctemp995= El2d->sigmaxy;
dtype =6;
int nctemp998= dtype;
int nctemp1003=RecReceiver(nctemp991,nctemp993,nctemp995,nctemp998);
struct rec* nctemp1005= Rec;
int nctemp1007= i;
nctempfloat2* nctemp1009= El2d->exx;
dtype =7;
int nctemp1012= dtype;
int nctemp1017=RecReceiver(nctemp1005,nctemp1007,nctemp1009,nctemp1012);
struct rec* nctemp1019= Rec;
int nctemp1021= i;
nctempfloat2* nctemp1023= El2d->exx;
int nctemp1030= -1;
dtype =nctemp1030;
int nctemp1026= dtype;
int nctemp1031=RecReceiver(nctemp1019,nctemp1021,nctemp1023,nctemp1026);
}
}
struct el2d* nctemp1033= El2d;
int nctemp1035= i;
int nctemp1037=El2dSnap(nctemp1033,nctemp1035);
}
}
El2d->ts = (El2d->ts + ne);
return 1;
}
}
