//  Translated by epsc  version today  
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
static struct nctempchar1 nctemp308 = {{ 10}, (char*)"snp-e.bin\0"};
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
static struct nctempchar1 nctemp327 = {{ 12}, (char*)"snp-exy.bin\0"};
nctemp326=&nctemp327;
nctempchar1* nctemp324= nctemp326;
struct nctempchar1 *nctemp330;
static struct nctempchar1 nctemp331 = {{ 2}, (char*)"w\0"};
nctemp330=&nctemp331;
nctempchar1* nctemp328= nctemp330;
int nctemp332=LibeOpen(nctemp324,nctemp328);
El2d->fdexy =nctemp332;
}
return El2d;
}
int El2dvx (struct el2d* El2d,struct model* Model)
{
int nx;
int ny;
int i;
int j;
nx = Model->Nx;
ny = Model->Ny;

 #pragma omp parallel for
for(j=0;j<ny;j=j+1){for(i=0;i<nx;i=i+1){{
El2d->vx->a[i+El2d->vx->d[0]*(j)] = (((((Model->Dt * Model->Rhox->a[i+Model->Rhox->d[0]*(j)]) * (El2d->exx->a[i+El2d->exx->d[0]*(j)] + El2d->exy->a[i+El2d->exy->d[0]*(j)])) + ((Model->Dt * El2d->thetaxxx->a[i+El2d->thetaxxx->d[0]*(j)]) * Model->Drhopx->a[i+Model->Drhopx->d[0]*(j)])) + ((Model->Dt * El2d->thetayxy->a[i+El2d->thetayxy->d[0]*(j)]) * Model->Drhopy->a[i+Model->Drhopy->d[0]*(j)])) + El2d->vx->a[i+El2d->vx->d[0]*(j)]);
El2d->thetaxxx->a[i+El2d->thetaxxx->d[0]*(j)] = ((Model->Eta1x->a[i+Model->Eta1x->d[0]*(j)] * El2d->thetaxxx->a[i+El2d->thetaxxx->d[0]*(j)]) + (Model->Eta2x->a[i+Model->Eta2x->d[0]*(j)] * El2d->exx->a[i+El2d->exx->d[0]*(j)]));
El2d->thetayxy->a[i+El2d->thetayxy->d[0]*(j)] = ((Model->Eta1y->a[i+Model->Eta1y->d[0]*(j)] * El2d->thetayxy->a[i+El2d->thetayxy->d[0]*(j)]) + (Model->Eta2y->a[i+Model->Eta2y->d[0]*(j)] * El2d->exy->a[i+El2d->exy->d[0]*(j)]));
}
}}}
int El2dvy (struct el2d* El2d,struct model* Model)
{
int nx;
int ny;
int i;
int j;
nx = Model->Nx;
ny = Model->Ny;

 #pragma omp parallel for
for(j=0;j<ny;j=j+1){for(i=0;i<nx;i=i+1){{
El2d->vy->a[i+El2d->vy->d[0]*(j)] = (((((Model->Dt * Model->Rhoy->a[i+Model->Rhoy->d[0]*(j)]) * (El2d->eyy->a[i+El2d->eyy->d[0]*(j)] + El2d->eyx->a[i+El2d->eyx->d[0]*(j)])) + ((Model->Dt * El2d->thetayyy->a[i+El2d->thetayyy->d[0]*(j)]) * Model->Drhopy->a[i+Model->Drhopy->d[0]*(j)])) + ((Model->Dt * El2d->thetaxyx->a[i+El2d->thetaxyx->d[0]*(j)]) * Model->Drhopx->a[i+Model->Drhopx->d[0]*(j)])) + El2d->vy->a[i+El2d->vy->d[0]*(j)]);
El2d->thetayyy->a[i+El2d->thetayyy->d[0]*(j)] = ((Model->Eta1y->a[i+Model->Eta1y->d[0]*(j)] * El2d->thetayyy->a[i+El2d->thetayyy->d[0]*(j)]) + (Model->Eta2y->a[i+Model->Eta2y->d[0]*(j)] * El2d->eyy->a[i+El2d->eyy->d[0]*(j)]));
El2d->thetaxyx->a[i+El2d->thetaxyx->d[0]*(j)] = ((Model->Eta1x->a[i+Model->Eta1x->d[0]*(j)] * El2d->thetaxyx->a[i+El2d->thetaxyx->d[0]*(j)]) + (Model->Eta2x->a[i+Model->Eta2x->d[0]*(j)] * El2d->eyx->a[i+El2d->eyx->d[0]*(j)]));
}
}}}
int El2de (struct el2d* El2d,struct model* Model)
{
int nx;
int ny;
int i;
int j;
nx = Model->Nx;
ny = Model->Ny;

 #pragma omp parallel for
for(j=0;j<ny;j=j+1){for(i=0;i<nx;i=i+1){{
El2d->e->a[i+El2d->e->d[0]*(j)] = (El2d->exx->a[i+El2d->exx->d[0]*(j)] + El2d->eyy->a[i+El2d->eyy->d[0]*(j)]);
}
}}}
int El2dexy (struct el2d* El2d,struct model* Model,nctempfloat2 *tmp1,nctempfloat2 *tmp2)
{
int nx;
int ny;
int i;
int j;
nx = Model->Nx;
ny = Model->Ny;

 #pragma omp parallel for
for(j=0;j<ny;j=j+1){for(i=0;i<nx;i=i+1){{
El2d->exy->a[i+El2d->exy->d[0]*(j)] = (0.5 * (tmp1->a[i+tmp1->d[0]*(j)] + tmp2->a[i+tmp2->d[0]*(j)]));
}
}}}
int El2deyx (struct el2d* El2d,struct model* Model,nctempfloat2 *tmp1,nctempfloat2 *tmp2)
{
int nx;
int ny;
int i;
int j;
nx = Model->Nx;
ny = Model->Ny;

 #pragma omp parallel for
for(j=0;j<ny;j=j+1){for(i=0;i<nx;i=i+1){{
El2d->eyx->a[i+El2d->eyx->d[0]*(j)] = (0.5 * (tmp1->a[i+tmp1->d[0]*(j)] + tmp2->a[i+tmp2->d[0]*(j)]));
}
}}}
int El2dstress (struct el2d* El2d,struct model* Model)
{
int nx;
int ny;
int i;
int j;
nx = Model->Nx;
ny = Model->Ny;

 #pragma omp parallel for
for(j=0;j<ny;j=j+1){for(i=0;i<nx;i=i+1){{
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
}}}
int El2dSnap (struct el2d* El2d,int it)
{
int n;
int Nx;
int Ny;
nctempchar1 *tmp;
int nctemp358 = (El2d->sresamp <= 0);
if(nctemp358)
{
return 1;
}
int nctemp367=El2d->sigmaxx->d[0];Nx =nctemp367;
int nctemp375=El2d->sigmaxx->d[1];Ny =nctemp375;
n = (Nx * Ny);
int nctemp382= it;
int nctemp384= El2d->sresamp;
int nctemp386=LibeMod(nctemp382,nctemp384);
int nctemp379 = (nctemp386 ==0);
if(nctemp379)
{
int nctemp391=0;
int nctemp388 = (El2d->snpflags->a[nctemp391] ==1);
if(nctemp388)
{
nctempchar1 nctemp400;
nctempchar1 *nctemp399;
nctemp400=*(nctempchar1*)(El2d->p);
int nctemp407 = 4 * n;
nctemp400.d[0]=nctemp407;
nctemp399=&nctemp400;
tmp=nctemp399;
int nctemp409= El2d->fdp;
int nctemp416 = 4 * n;
int nctemp411= nctemp416;
nctempchar1* nctemp417= tmp;
int nctemp420=LibeWrite(nctemp409,nctemp411,nctemp417);
}
int nctemp424=1;
int nctemp421 = (El2d->snpflags->a[nctemp424] ==1);
if(nctemp421)
{
nctempchar1 nctemp433;
nctempchar1 *nctemp432;
nctemp433=*(nctempchar1*)(El2d->vx);
int nctemp440 = 4 * n;
nctemp433.d[0]=nctemp440;
nctemp432=&nctemp433;
tmp=nctemp432;
int nctemp442= El2d->fdvx;
int nctemp449 = 4 * n;
int nctemp444= nctemp449;
nctempchar1* nctemp450= tmp;
int nctemp453=LibeWrite(nctemp442,nctemp444,nctemp450);
}
int nctemp457=2;
int nctemp454 = (El2d->snpflags->a[nctemp457] ==1);
if(nctemp454)
{
nctempchar1 nctemp466;
nctempchar1 *nctemp465;
nctemp466=*(nctempchar1*)(El2d->vy);
int nctemp473 = 4 * n;
nctemp466.d[0]=nctemp473;
nctemp465=&nctemp466;
tmp=nctemp465;
int nctemp475= El2d->fdvy;
int nctemp482 = 4 * n;
int nctemp477= nctemp482;
nctempchar1* nctemp483= tmp;
int nctemp486=LibeWrite(nctemp475,nctemp477,nctemp483);
}
int nctemp490=3;
int nctemp487 = (El2d->snpflags->a[nctemp490] ==1);
if(nctemp487)
{
nctempchar1 nctemp499;
nctempchar1 *nctemp498;
nctemp499=*(nctempchar1*)(El2d->e);
int nctemp506 = 4 * n;
nctemp499.d[0]=nctemp506;
nctemp498=&nctemp499;
tmp=nctemp498;
int nctemp508= El2d->fde;
int nctemp515 = 4 * n;
int nctemp510= nctemp515;
nctempchar1* nctemp516= tmp;
int nctemp519=LibeWrite(nctemp508,nctemp510,nctemp516);
}
int nctemp523=4;
int nctemp520 = (El2d->snpflags->a[nctemp523] ==1);
if(nctemp520)
{
nctempchar1 nctemp532;
nctempchar1 *nctemp531;
nctemp532=*(nctempchar1*)(El2d->exy);
int nctemp539 = 4 * n;
nctemp532.d[0]=nctemp539;
nctemp531=&nctemp532;
tmp=nctemp531;
int nctemp541= El2d->fdexy;
int nctemp548 = 4 * n;
int nctemp543= nctemp548;
nctempchar1* nctemp549= tmp;
int nctemp552=LibeWrite(nctemp541,nctemp543,nctemp549);
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
int nctemp558= l;
struct diff* nctemp560=DiffNew(nctemp558);
Diff =nctemp560;
int nctemp567=Model->Nx;
nctemp567=nctemp567*Model->Ny;
nctempfloat2 *nctemp566;
nctemp566=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp566->d[0]=Model->Nx;
nctemp566->d[1]=Model->Ny;
nctemp566->a=(float *)RunMalloc(sizeof(float)*nctemp567);
tmp1=nctemp566;
int nctemp578=Model->Nx;
nctemp578=nctemp578*Model->Ny;
nctempfloat2 *nctemp577;
nctemp577=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp577->d[0]=Model->Nx;
nctemp577->d[1]=Model->Ny;
nctemp577->a=(float *)RunMalloc(sizeof(float)*nctemp578);
tmp2=nctemp577;
oldperc = 0.0;
ns = El2d->ts;
ne = (ns + nt);
for(i = ns;i < ne;i = (i + 1)){
struct diff* nctemp584= Diff;
nctempfloat2* nctemp586= El2d->sigmaxx;
nctempfloat2* nctemp589= El2d->exx;
float nctemp592= Model->Dx;
int nctemp594=DiffDxplus(nctemp584,nctemp586,nctemp589,nctemp592);
struct diff* nctemp596= Diff;
nctempfloat2* nctemp598= El2d->sigmaxy;
nctempfloat2* nctemp601= El2d->exy;
float nctemp604= Model->Dx;
int nctemp606=DiffDyminus(nctemp596,nctemp598,nctemp601,nctemp604);
struct el2d* nctemp608= El2d;
struct model* nctemp610= Model;
int nctemp612=El2dvx(nctemp608,nctemp610);
struct diff* nctemp614= Diff;
nctempfloat2* nctemp616= El2d->sigmayy;
nctempfloat2* nctemp619= El2d->eyy;
float nctemp622= Model->Dx;
int nctemp624=DiffDyplus(nctemp614,nctemp616,nctemp619,nctemp622);
struct diff* nctemp626= Diff;
nctempfloat2* nctemp628= El2d->sigmaxy;
nctempfloat2* nctemp631= El2d->eyx;
float nctemp634= Model->Dx;
int nctemp636=DiffDxminus(nctemp626,nctemp628,nctemp631,nctemp634);
struct el2d* nctemp638= El2d;
struct model* nctemp640= Model;
int nctemp642=El2dvy(nctemp638,nctemp640);
struct diff* nctemp644= Diff;
nctempfloat2* nctemp646= El2d->vx;
nctempfloat2* nctemp649= El2d->exx;
float nctemp652= Model->Dx;
int nctemp654=DiffDxminus(nctemp644,nctemp646,nctemp649,nctemp652);
struct diff* nctemp656= Diff;
nctempfloat2* nctemp658= El2d->vy;
nctempfloat2* nctemp661= El2d->eyy;
float nctemp664= Model->Dx;
int nctemp666=DiffDyminus(nctemp656,nctemp658,nctemp661,nctemp664);
struct diff* nctemp668= Diff;
nctempfloat2* nctemp670= El2d->vy;
nctempfloat2* nctemp673= tmp1;
float nctemp676= Model->Dx;
int nctemp678=DiffDxplus(nctemp668,nctemp670,nctemp673,nctemp676);
struct diff* nctemp680= Diff;
nctempfloat2* nctemp682= El2d->vx;
nctempfloat2* nctemp685= tmp2;
float nctemp688= Model->Dx;
int nctemp690=DiffDyplus(nctemp680,nctemp682,nctemp685,nctemp688);
struct el2d* nctemp692= El2d;
struct model* nctemp694= Model;
nctempfloat2* nctemp696= tmp1;
nctempfloat2* nctemp699= tmp2;
int nctemp702=El2dexy(nctemp692,nctemp694,nctemp696,nctemp699);
struct el2d* nctemp704= El2d;
struct model* nctemp706= Model;
nctempfloat2* nctemp708= tmp1;
nctempfloat2* nctemp711= tmp2;
int nctemp714=El2deyx(nctemp704,nctemp706,nctemp708,nctemp711);
struct el2d* nctemp716= El2d;
struct model* nctemp718= Model;
int nctemp720=El2de(nctemp716,nctemp718);
struct el2d* nctemp722= El2d;
struct model* nctemp724= Model;
int nctemp726=El2dstress(nctemp722,nctemp724);
for(k = 0;k < Src->Ns;k = (k + 1)){
sx = Src->Sx->a[k];
sy = Src->Sy->a[k];
El2d->sigmaxx->a[sx+El2d->sigmaxx->d[0]*(sy)] = (El2d->sigmaxx->a[sx+El2d->sigmaxx->d[0]*(sy)] + (Model->Dt * (Src->Sqxx->a[i+Src->Sqxx->d[0]*(k)] / (Model->Dx * Model->Dx))));
El2d->sigmayy->a[sx+El2d->sigmayy->d[0]*(sy)] = (El2d->sigmayy->a[sx+El2d->sigmayy->d[0]*(sy)] + (Model->Dt * (Src->Sqyy->a[i+Src->Sqyy->d[0]*(k)] / (Model->Dx * Model->Dx))));
El2d->vx->a[sx+El2d->vx->d[0]*(sy)] = (El2d->vx->a[sx+El2d->vx->d[0]*(sy)] + (Model->Dt * (Src->Sfx->a[i+Src->Sfx->d[0]*(k)] / (Model->Dx * Model->Dx))));
El2d->vy->a[sx+El2d->vy->d[0]*(sy)] = (El2d->vy->a[sx+El2d->vy->d[0]*(sy)] + (Model->Dt * (Src->Sfy->a[i+Src->Sfy->d[0]*(k)] / (Model->Dx * Model->Dx))));
}
float nctemp738=(float)(i);
int nctemp751 = ne - ns;
int nctemp753 = nctemp751 - 1;
float nctemp742=(float)(nctemp753);
float nctemp754 = nctemp738 / nctemp742;
float nctemp755 = 1000.0 * nctemp754;
perc =nctemp755;
float nctemp763 = perc - oldperc;
int nctemp756 = (nctemp763 >= 10.0);
if(nctemp756)
{
int nctemp772=(int)(perc);
int nctemp776 = nctemp772 / 10;
iperc =nctemp776;
int nctemp780= iperc;
int nctemp782= 10;
int nctemp784=LibeMod(nctemp780,nctemp782);
int nctemp777 = (nctemp784 ==0);
if(nctemp777)
{
int nctemp787= 4;
struct nctempchar1 *nctemp791;
static struct nctempchar1 nctemp792 = {{ 20}, (char*)"percent completed: \0"};
nctemp791=&nctemp792;
nctempchar1* nctemp789= nctemp791;
int nctemp793=LibePuts(nctemp787,nctemp789);
int nctemp795= 4;
int nctemp797= iperc;
int nctemp799=LibePuti(nctemp795,nctemp797);
int nctemp801= 4;
struct nctempchar1 *nctemp805;
static struct nctempchar1 nctemp806 = {{ 3}, (char*)"\n\0"};
nctemp805=&nctemp806;
nctempchar1* nctemp803= nctemp805;
int nctemp807=LibePuts(nctemp801,nctemp803);
int nctemp809= 4;
int nctemp811=LibeFlush(nctemp809);
}
oldperc = perc;
}
int nctemp812 = (Rec !=0);
if(nctemp812)
{
struct rec* nctemp817= Rec;
int nctemp819= i;
nctempfloat2* nctemp821= El2d->p;
nctempfloat2* nctemp824= El2d->vx;
nctempfloat2* nctemp827= El2d->vy;
int nctemp830=RecReceiver(nctemp817,nctemp819,nctemp821,nctemp824,nctemp827);
}
struct el2d* nctemp832= El2d;
int nctemp834= i;
int nctemp836=El2dSnap(nctemp832,nctemp834);
}
El2d->ts = (El2d->ts + ne);
return 1;
}
