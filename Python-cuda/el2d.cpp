//  Translated by epsc  version December 2021  
extern "C" {
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
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

void *GpuNew(int n);
void *GpuDelete(void *f);
void *GpuError();
void *RunMalloc(int n);
int RunFree(void * );
int RunSync();
int RunGetnt();
int RunGetnb();
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
struct rec {int nr;
nctempint1 *rx;
nctempint1 *ry;
int fd;
int nt;
nctempfloat2 *p;
nctempfloat2 *sxx;
nctempfloat2 *syy;
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
int RecReceiver (struct rec* Rec,int it,nctempfloat2 *p,nctempfloat2 *vx,nctempfloat2 *vy);
nctempfloat2 * RecGetrec (struct rec* Rec,int data);
struct src {nctempint1 *Sx;
nctempint1 *Sy;
nctempfloat2 *Sqyy;
nctempfloat2 *Sqxx;
nctempfloat2 *Sfx;
nctempfloat2 *Sfy;
int Ns;
};
typedef struct nctempsrc1 {int d[1]; struct src *a; } nctempsrc1;
struct nctempsrc2 {int d[2]; struct src *a; } ;
struct nctempsrc3 {int d[3]; struct src *a; } ;
struct nctempsrc4 {int d[4]; struct src *a; } ;
struct src* SrcNew (nctempint1 *sx,nctempint1 *sy,nctempfloat2 *sqxx,nctempfloat2 *sqyy,nctempfloat2 *sfx,nctempfloat2 *sfy);
int SrcDel (struct src* Src);
int Srcricker (nctempfloat1 *source,float t0,float f0,int nt,float dt);
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
int fde;
int fdexy;
int sresamp;
nctempint1 *snpflags;
};
typedef struct nctempel2d1 {int d[1]; struct el2d *a; } nctempel2d1;
struct nctempel2d2 {int d[2]; struct el2d *a; } ;
struct nctempel2d3 {int d[3]; struct el2d *a; } ;
struct nctempel2d4 {int d[4]; struct el2d *a; } ;
struct el2d* El2dNew (struct model* Model,int sresamp,nctempint1 *snpflags)
{
struct el2d* El2d;
int i;
int j;
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
for(j = 0;j < Model->Ny;j = (j + 1)){
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
int nctemp241=0;
int nctemp238 = (El2d->snpflags->a[nctemp241] ==1);
if(nctemp238)
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
int nctemp260=1;
int nctemp257 = (El2d->snpflags->a[nctemp260] ==1);
if(nctemp257)
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
int nctemp279=2;
int nctemp276 = (El2d->snpflags->a[nctemp279] ==1);
if(nctemp276)
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
int nctemp298=3;
int nctemp295 = (El2d->snpflags->a[nctemp298] ==1);
if(nctemp295)
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
El2d->fde =nctemp313;
}
int nctemp317=4;
int nctemp314 = (El2d->snpflags->a[nctemp317] ==1);
if(nctemp314)
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
El2d->fdexy =nctemp332;
}
int nctemp336=5;
int nctemp333 = (El2d->snpflags->a[nctemp336] ==1);
if(nctemp333)
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
El2d->fdexy =nctemp351;
}
return El2d;
}
__global__ void kernel_El2dvx (struct el2d* El2d,struct model* Model)
{
int nx;
int ny;
int i;
int j;
nx = Model->Nx;
ny = Model->Ny;
{
int nctempno=blockIdx.x*blockDim.x + threadIdx.x; i =0;
int nctemp359=i;
int nctemp353=nx-nctemp359;
j =0;
int nctemp366=j;
int nctemp360=ny-nctemp366;
int nctemp367=nctemp353*nctemp360;
for(nctempno=blockIdx.x*blockDim.x + threadIdx.x; nctempno<nctemp367;nctempno+=blockDim.x*gridDim.x){
i=(nctempno/(1))%nctemp353+nctemp359;
j=(nctempno/(1*nctemp353))+nctemp366;
{
El2d->vx->a[i+El2d->vx->d[0]*(j)] = (((((Model->Dt * Model->Rhox->a[i+Model->Rhox->d[0]*(j)]) * (El2d->exx->a[i+El2d->exx->d[0]*(j)] + El2d->exy->a[i+El2d->exy->d[0]*(j)])) + ((Model->Dt * El2d->thetaxxx->a[i+El2d->thetaxxx->d[0]*(j)]) * Model->Drhopx->a[i+Model->Drhopx->d[0]*(j)])) + ((Model->Dt * El2d->thetayxy->a[i+El2d->thetayxy->d[0]*(j)]) * Model->Drhopy->a[i+Model->Drhopy->d[0]*(j)])) + El2d->vx->a[i+El2d->vx->d[0]*(j)]);
El2d->thetaxxx->a[i+El2d->thetaxxx->d[0]*(j)] = ((Model->Eta1x->a[i+Model->Eta1x->d[0]*(j)] * El2d->thetaxxx->a[i+El2d->thetaxxx->d[0]*(j)]) + (Model->Eta2x->a[i+Model->Eta2x->d[0]*(j)] * El2d->exx->a[i+El2d->exx->d[0]*(j)]));
El2d->thetayxy->a[i+El2d->thetayxy->d[0]*(j)] = ((Model->Eta1y->a[i+Model->Eta1y->d[0]*(j)] * El2d->thetayxy->a[i+El2d->thetayxy->d[0]*(j)]) + (Model->Eta2y->a[i+Model->Eta2y->d[0]*(j)] * El2d->exy->a[i+El2d->exy->d[0]*(j)]));
}
}
}
}
int El2dvx (struct el2d* El2d,struct model* Model)
{
  kernel_El2dvx<<< RunGetnb(),RunGetnt() >>>(El2d,Model);
GpuError();
return(1);
}
__global__ void kernel_El2dvy (struct el2d* El2d,struct model* Model)
{
int nx;
int ny;
int i;
int j;
nx = Model->Nx;
ny = Model->Ny;
{
int nctempno=blockIdx.x*blockDim.x + threadIdx.x; i =0;
int nctemp374=i;
int nctemp368=nx-nctemp374;
j =0;
int nctemp381=j;
int nctemp375=ny-nctemp381;
int nctemp382=nctemp368*nctemp375;
for(nctempno=blockIdx.x*blockDim.x + threadIdx.x; nctempno<nctemp382;nctempno+=blockDim.x*gridDim.x){
i=(nctempno/(1))%nctemp368+nctemp374;
j=(nctempno/(1*nctemp368))+nctemp381;
{
El2d->vy->a[i+El2d->vy->d[0]*(j)] = (((((Model->Dt * Model->Rhoy->a[i+Model->Rhoy->d[0]*(j)]) * (El2d->eyy->a[i+El2d->eyy->d[0]*(j)] + El2d->eyx->a[i+El2d->eyx->d[0]*(j)])) + ((Model->Dt * El2d->thetayyy->a[i+El2d->thetayyy->d[0]*(j)]) * Model->Drhopy->a[i+Model->Drhopy->d[0]*(j)])) + ((Model->Dt * El2d->thetaxyx->a[i+El2d->thetaxyx->d[0]*(j)]) * Model->Drhopx->a[i+Model->Drhopx->d[0]*(j)])) + El2d->vy->a[i+El2d->vy->d[0]*(j)]);
El2d->thetayyy->a[i+El2d->thetayyy->d[0]*(j)] = ((Model->Eta1y->a[i+Model->Eta1y->d[0]*(j)] * El2d->thetayyy->a[i+El2d->thetayyy->d[0]*(j)]) + (Model->Eta2y->a[i+Model->Eta2y->d[0]*(j)] * El2d->eyy->a[i+El2d->eyy->d[0]*(j)]));
El2d->thetaxyx->a[i+El2d->thetaxyx->d[0]*(j)] = ((Model->Eta1x->a[i+Model->Eta1x->d[0]*(j)] * El2d->thetaxyx->a[i+El2d->thetaxyx->d[0]*(j)]) + (Model->Eta2x->a[i+Model->Eta2x->d[0]*(j)] * El2d->eyx->a[i+El2d->eyx->d[0]*(j)]));
}
}
}
}
int El2dvy (struct el2d* El2d,struct model* Model)
{
  kernel_El2dvy<<< RunGetnb(),RunGetnt() >>>(El2d,Model);
GpuError();
return(1);
}
__global__ void kernel_El2de (struct el2d* El2d,struct model* Model)
{
int nx;
int ny;
int i;
int j;
nx = Model->Nx;
ny = Model->Ny;
{
int nctempno=blockIdx.x*blockDim.x + threadIdx.x; i =0;
int nctemp389=i;
int nctemp383=nx-nctemp389;
j =0;
int nctemp396=j;
int nctemp390=ny-nctemp396;
int nctemp397=nctemp383*nctemp390;
for(nctempno=blockIdx.x*blockDim.x + threadIdx.x; nctempno<nctemp397;nctempno+=blockDim.x*gridDim.x){
i=(nctempno/(1))%nctemp383+nctemp389;
j=(nctempno/(1*nctemp383))+nctemp396;
{
El2d->e->a[i+El2d->e->d[0]*(j)] = (El2d->exx->a[i+El2d->exx->d[0]*(j)] + El2d->eyy->a[i+El2d->eyy->d[0]*(j)]);
}
}
}
}
int El2de (struct el2d* El2d,struct model* Model)
{
  kernel_El2de<<< RunGetnb(),RunGetnt() >>>(El2d,Model);
GpuError();
return(1);
}
__global__ void kernel_El2dexy (struct el2d* El2d,struct model* Model,nctempfloat2 *tmp1,nctempfloat2 *tmp2)
{
int nx;
int ny;
int i;
int j;
nx = Model->Nx;
ny = Model->Ny;
{
int nctempno=blockIdx.x*blockDim.x + threadIdx.x; i =0;
int nctemp404=i;
int nctemp398=nx-nctemp404;
j =0;
int nctemp411=j;
int nctemp405=ny-nctemp411;
int nctemp412=nctemp398*nctemp405;
for(nctempno=blockIdx.x*blockDim.x + threadIdx.x; nctempno<nctemp412;nctempno+=blockDim.x*gridDim.x){
i=(nctempno/(1))%nctemp398+nctemp404;
j=(nctempno/(1*nctemp398))+nctemp411;
{
El2d->exy->a[i+El2d->exy->d[0]*(j)] = (0.5 * (tmp1->a[i+tmp1->d[0]*(j)] + tmp2->a[i+tmp2->d[0]*(j)]));
}
}
}
}
int El2dexy (struct el2d* El2d,struct model* Model,nctempfloat2 *tmp1,nctempfloat2 *tmp2)
{
  kernel_El2dexy<<< RunGetnb(),RunGetnt() >>>(El2d,Model,tmp1,tmp2);
GpuError();
return(1);
}
__global__ void kernel_El2deyx (struct el2d* El2d,struct model* Model,nctempfloat2 *tmp1,nctempfloat2 *tmp2)
{
int nx;
int ny;
int i;
int j;
nx = Model->Nx;
ny = Model->Ny;
{
int nctempno=blockIdx.x*blockDim.x + threadIdx.x; i =0;
int nctemp419=i;
int nctemp413=nx-nctemp419;
j =0;
int nctemp426=j;
int nctemp420=ny-nctemp426;
int nctemp427=nctemp413*nctemp420;
for(nctempno=blockIdx.x*blockDim.x + threadIdx.x; nctempno<nctemp427;nctempno+=blockDim.x*gridDim.x){
i=(nctempno/(1))%nctemp413+nctemp419;
j=(nctempno/(1*nctemp413))+nctemp426;
{
El2d->eyx->a[i+El2d->eyx->d[0]*(j)] = (0.5 * (tmp1->a[i+tmp1->d[0]*(j)] + tmp2->a[i+tmp2->d[0]*(j)]));
}
}
}
}
int El2deyx (struct el2d* El2d,struct model* Model,nctempfloat2 *tmp1,nctempfloat2 *tmp2)
{
  kernel_El2deyx<<< RunGetnb(),RunGetnt() >>>(El2d,Model,tmp1,tmp2);
GpuError();
return(1);
}
__global__ void kernel_El2dstress (struct el2d* El2d,struct model* Model)
{
int nx;
int ny;
int i;
int j;
nx = Model->Nx;
ny = Model->Ny;
{
int nctempno=blockIdx.x*blockDim.x + threadIdx.x; i =0;
int nctemp434=i;
int nctemp428=nx-nctemp434;
j =0;
int nctemp441=j;
int nctemp435=ny-nctemp441;
int nctemp442=nctemp428*nctemp435;
for(nctempno=blockIdx.x*blockDim.x + threadIdx.x; nctempno<nctemp442;nctempno+=blockDim.x*gridDim.x){
i=(nctempno/(1))%nctemp428+nctemp434;
j=(nctempno/(1*nctemp428))+nctemp441;
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
}
}
int El2dstress (struct el2d* El2d,struct model* Model)
{
  kernel_El2dstress<<< RunGetnb(),RunGetnt() >>>(El2d,Model);
GpuError();
return(1);
}
int El2dSnap (struct el2d* El2d,int it)
{
int n;
int Nx;
int Ny;
nctempchar1 *tmp;
int nctemp443 = (El2d->sresamp <= 0);
if(nctemp443)
{
return 1;
}
int nctemp452=El2d->sigmaxx->d[0];Nx =nctemp452;
int nctemp460=El2d->sigmaxx->d[1];Ny =nctemp460;
n = (Nx * Ny);
int nctemp467= it;
int nctemp469= El2d->sresamp;
int nctemp471=LibeMod(nctemp467,nctemp469);
int nctemp464 = (nctemp471 ==0);
if(nctemp464)
{
int nctemp476=0;
int nctemp473 = (El2d->snpflags->a[nctemp476] ==1);
if(nctemp473)
{
nctempchar1 nctemp485;
nctempchar1 *nctemp484;
nctemp485=*(nctempchar1*)(El2d->p);
int nctemp492 = 4 * n;
nctemp485.d[0]=nctemp492;
nctemp484=&nctemp485;
tmp=nctemp484;
int nctemp494= El2d->fdp;
int nctemp501 = 4 * n;
int nctemp496= nctemp501;
nctempchar1* nctemp502= tmp;
int nctemp505=LibeWrite(nctemp494,nctemp496,nctemp502);
}
int nctemp509=1;
int nctemp506 = (El2d->snpflags->a[nctemp509] ==1);
if(nctemp506)
{
nctempchar1 nctemp518;
nctempchar1 *nctemp517;
nctemp518=*(nctempchar1*)(El2d->vx);
int nctemp525 = 4 * n;
nctemp518.d[0]=nctemp525;
nctemp517=&nctemp518;
tmp=nctemp517;
int nctemp527= El2d->fdvx;
int nctemp534 = 4 * n;
int nctemp529= nctemp534;
nctempchar1* nctemp535= tmp;
int nctemp538=LibeWrite(nctemp527,nctemp529,nctemp535);
}
int nctemp542=2;
int nctemp539 = (El2d->snpflags->a[nctemp542] ==1);
if(nctemp539)
{
nctempchar1 nctemp551;
nctempchar1 *nctemp550;
nctemp551=*(nctempchar1*)(El2d->vy);
int nctemp558 = 4 * n;
nctemp551.d[0]=nctemp558;
nctemp550=&nctemp551;
tmp=nctemp550;
int nctemp560= El2d->fdvy;
int nctemp567 = 4 * n;
int nctemp562= nctemp567;
nctempchar1* nctemp568= tmp;
int nctemp571=LibeWrite(nctemp560,nctemp562,nctemp568);
}
int nctemp575=3;
int nctemp572 = (El2d->snpflags->a[nctemp575] ==1);
if(nctemp572)
{
nctempchar1 nctemp584;
nctempchar1 *nctemp583;
nctemp584=*(nctempchar1*)(El2d->e);
int nctemp591 = 4 * n;
nctemp584.d[0]=nctemp591;
nctemp583=&nctemp584;
tmp=nctemp583;
int nctemp593= El2d->fde;
int nctemp600 = 4 * n;
int nctemp595= nctemp600;
nctempchar1* nctemp601= tmp;
int nctemp604=LibeWrite(nctemp593,nctemp595,nctemp601);
}
int nctemp608=4;
int nctemp605 = (El2d->snpflags->a[nctemp608] ==1);
if(nctemp605)
{
nctempchar1 nctemp617;
nctempchar1 *nctemp616;
nctemp617=*(nctempchar1*)(El2d->exy);
int nctemp624 = 4 * n;
nctemp617.d[0]=nctemp624;
nctemp616=&nctemp617;
tmp=nctemp616;
int nctemp626= El2d->fdexy;
int nctemp633 = 4 * n;
int nctemp628= nctemp633;
nctempchar1* nctemp634= tmp;
int nctemp637=LibeWrite(nctemp626,nctemp628,nctemp634);
}
}
return 1;
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
int nctemp643= l;
struct diff* nctemp645=DiffNew(nctemp643);
Diff =nctemp645;
int nctemp652=Model->Nx;
nctemp652=nctemp652*Model->Ny;
nctempfloat2 *nctemp651;
nctemp651=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp651->d[0]=Model->Nx;
nctemp651->d[1]=Model->Ny;
nctemp651->a=(float *)RunMalloc(sizeof(float)*nctemp652);
tmp1=nctemp651;
int nctemp663=Model->Nx;
nctemp663=nctemp663*Model->Ny;
nctempfloat2 *nctemp662;
nctemp662=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp662->d[0]=Model->Nx;
nctemp662->d[1]=Model->Ny;
nctemp662->a=(float *)RunMalloc(sizeof(float)*nctemp663);
tmp2=nctemp662;
oldperc = 0.0;
ns = El2d->ts;
ne = (ns + nt);
for(i = ns;i < ne;i = (i + 1)){
struct diff* nctemp669= Diff;
nctempfloat2* nctemp671= El2d->sigmaxx;
nctempfloat2* nctemp674= El2d->exx;
float nctemp677= Model->Dx;
int nctemp679=DiffDxplus(nctemp669,nctemp671,nctemp674,nctemp677);
struct diff* nctemp681= Diff;
nctempfloat2* nctemp683= El2d->sigmaxy;
nctempfloat2* nctemp686= El2d->exy;
float nctemp689= Model->Dx;
int nctemp691=DiffDyminus(nctemp681,nctemp683,nctemp686,nctemp689);
struct el2d* nctemp693= El2d;
struct model* nctemp695= Model;
int nctemp697=El2dvx(nctemp693,nctemp695);
struct diff* nctemp699= Diff;
nctempfloat2* nctemp701= El2d->sigmayy;
nctempfloat2* nctemp704= El2d->eyy;
float nctemp707= Model->Dx;
int nctemp709=DiffDyplus(nctemp699,nctemp701,nctemp704,nctemp707);
struct diff* nctemp711= Diff;
nctempfloat2* nctemp713= El2d->sigmaxy;
nctempfloat2* nctemp716= El2d->eyx;
float nctemp719= Model->Dx;
int nctemp721=DiffDxminus(nctemp711,nctemp713,nctemp716,nctemp719);
struct el2d* nctemp723= El2d;
struct model* nctemp725= Model;
int nctemp727=El2dvy(nctemp723,nctemp725);
struct diff* nctemp729= Diff;
nctempfloat2* nctemp731= El2d->vx;
nctempfloat2* nctemp734= El2d->exx;
float nctemp737= Model->Dx;
int nctemp739=DiffDxminus(nctemp729,nctemp731,nctemp734,nctemp737);
struct diff* nctemp741= Diff;
nctempfloat2* nctemp743= El2d->vy;
nctempfloat2* nctemp746= El2d->eyy;
float nctemp749= Model->Dx;
int nctemp751=DiffDyminus(nctemp741,nctemp743,nctemp746,nctemp749);
struct diff* nctemp753= Diff;
nctempfloat2* nctemp755= El2d->vy;
nctempfloat2* nctemp758= tmp1;
float nctemp761= Model->Dx;
int nctemp763=DiffDxplus(nctemp753,nctemp755,nctemp758,nctemp761);
struct diff* nctemp765= Diff;
nctempfloat2* nctemp767= El2d->vx;
nctempfloat2* nctemp770= tmp2;
float nctemp773= Model->Dx;
int nctemp775=DiffDyplus(nctemp765,nctemp767,nctemp770,nctemp773);
struct el2d* nctemp777= El2d;
struct model* nctemp779= Model;
nctempfloat2* nctemp781= tmp1;
nctempfloat2* nctemp784= tmp2;
int nctemp787=El2dexy(nctemp777,nctemp779,nctemp781,nctemp784);
struct el2d* nctemp789= El2d;
struct model* nctemp791= Model;
nctempfloat2* nctemp793= tmp1;
nctempfloat2* nctemp796= tmp2;
int nctemp799=El2deyx(nctemp789,nctemp791,nctemp793,nctemp796);
struct el2d* nctemp801= El2d;
struct model* nctemp803= Model;
int nctemp805=El2de(nctemp801,nctemp803);
struct el2d* nctemp807= El2d;
struct model* nctemp809= Model;
int nctemp811=El2dstress(nctemp807,nctemp809);
for(k = 0;k < Src->Ns;k = (k + 1)){
sx = Src->Sx->a[k];
sy = Src->Sy->a[k];
El2d->sigmaxx->a[sx+El2d->sigmaxx->d[0]*(sy)] = (El2d->sigmaxx->a[sx+El2d->sigmaxx->d[0]*(sy)] + (Model->Dt * (Src->Sqxx->a[i+Src->Sqxx->d[0]*(k)] / (Model->Dx * Model->Dx))));
El2d->sigmayy->a[sx+El2d->sigmayy->d[0]*(sy)] = (El2d->sigmayy->a[sx+El2d->sigmayy->d[0]*(sy)] + (Model->Dt * (Src->Sqyy->a[i+Src->Sqyy->d[0]*(k)] / (Model->Dx * Model->Dx))));
El2d->vx->a[sx+El2d->vx->d[0]*(sy)] = (El2d->vx->a[sx+El2d->vx->d[0]*(sy)] + (Model->Dt * (Src->Sfx->a[i+Src->Sfx->d[0]*(k)] / (Model->Dx * Model->Dx))));
El2d->vy->a[sx+El2d->vy->d[0]*(sy)] = (El2d->vy->a[sx+El2d->vy->d[0]*(sy)] + (Model->Dt * (Src->Sfy->a[i+Src->Sfy->d[0]*(k)] / (Model->Dx * Model->Dx))));
}
float nctemp823=(float)(i);
int nctemp836 = ne - ns;
int nctemp838 = nctemp836 - 1;
float nctemp827=(float)(nctemp838);
float nctemp839 = nctemp823 / nctemp827;
float nctemp840 = 1000.0 * nctemp839;
perc =nctemp840;
float nctemp848 = perc - oldperc;
int nctemp841 = (nctemp848 >= 10.0);
if(nctemp841)
{
int nctemp857=(int)(perc);
int nctemp861 = nctemp857 / 10;
iperc =nctemp861;
int nctemp865= iperc;
int nctemp867= 10;
int nctemp869=LibeMod(nctemp865,nctemp867);
int nctemp862 = (nctemp869 ==0);
if(nctemp862)
{
int nctemp872= 4;
struct nctempchar1 *nctemp876;
static struct nctempchar1 nctemp877 = {{ 20}, (char*)"percent completed: \0"};
nctemp876=&nctemp877;
nctempchar1* nctemp874= nctemp876;
int nctemp878=LibePuts(nctemp872,nctemp874);
int nctemp880= 4;
int nctemp882= iperc;
int nctemp884=LibePuti(nctemp880,nctemp882);
int nctemp886= 4;
struct nctempchar1 *nctemp890;
static struct nctempchar1 nctemp891 = {{ 3}, (char*)"\n\0"};
nctemp890=&nctemp891;
nctempchar1* nctemp888= nctemp890;
int nctemp892=LibePuts(nctemp886,nctemp888);
int nctemp894= 4;
int nctemp896=LibeFlush(nctemp894);
}
oldperc = perc;
}
int nctemp897 = (Rec !=0);
if(nctemp897)
{
struct rec* nctemp902= Rec;
int nctemp904= i;
nctempfloat2* nctemp906= El2d->p;
nctempfloat2* nctemp909= El2d->vx;
nctempfloat2* nctemp912= El2d->vy;
int nctemp915=RecReceiver(nctemp902,nctemp904,nctemp906,nctemp909,nctemp912);
}
struct el2d* nctemp917= El2d;
int nctemp919= i;
int nctemp921=El2dSnap(nctemp917,nctemp919);
}
El2d->ts = (El2d->ts + ne);
return 1;
}
};