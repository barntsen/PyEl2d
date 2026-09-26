//  Translated by epsc  version: Fri Sep 18 13:42:14 2026

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
struct model {nctempfloat2 *tauelx;
nctempfloat2 *tauely;
nctempfloat2 *tauslx;
nctempfloat2 *tausly;
nctempfloat2 *tauemx;
nctempfloat2 *tauemy;
nctempfloat2 *tausmx;
nctempfloat2 *tausmy;
nctempfloat2 *tauenx;
nctempfloat2 *taueny;
nctempfloat2 *tausnx;
nctempfloat2 *tausny;
nctempfloat2 *lambda;
nctempfloat2 *mu;
nctempfloat2 *nu;
float dt;
float dx;
float w0;
int nb;
int nx;
int ny;
int freesurface;
};
typedef struct nctempmodel1 {int d[1]; struct model *a; } nctempmodel1;
struct nctempmodel2 {int d[2]; struct model *a; } ;
struct nctempmodel3 {int d[3]; struct model *a; } ;
struct nctempmodel4 {int d[4]; struct model *a; } ;
struct model* ModelNew (nctempfloat2 *vp,nctempfloat2 *vs,nctempfloat2 *rho,float dx,float w0,float dt,int nb,int freesurface,nctempfloat2 *tauelx,nctempfloat2 *tauely,nctempfloat2 *tauemx,nctempfloat2 *tauemy,nctempfloat2 *tauslx,nctempfloat2 *tausly,nctempfloat2 *tausmx,nctempfloat2 *tausmy,nctempfloat2 *tauenx,nctempfloat2 *taueny,nctempfloat2 *tausnx,nctempfloat2 *tausny);
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
int nctemp13=Model->nx;
nctemp13=nctemp13*Model->ny;
nctempfloat2 *nctemp12;
nctemp12=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp12->d[0]=Model->nx;
nctemp12->d[1]=Model->ny;
nctemp12->a=(float *)RunMalloc(sizeof(float)*nctemp13);
El2d->p=nctemp12;
int nctemp24=Model->nx;
nctemp24=nctemp24*Model->ny;
nctempfloat2 *nctemp23;
nctemp23=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp23->d[0]=Model->nx;
nctemp23->d[1]=Model->ny;
nctemp23->a=(float *)RunMalloc(sizeof(float)*nctemp24);
El2d->sigmaxx=nctemp23;
int nctemp35=Model->nx;
nctemp35=nctemp35*Model->ny;
nctempfloat2 *nctemp34;
nctemp34=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp34->d[0]=Model->nx;
nctemp34->d[1]=Model->ny;
nctemp34->a=(float *)RunMalloc(sizeof(float)*nctemp35);
El2d->sigmayy=nctemp34;
int nctemp46=Model->nx;
nctemp46=nctemp46*Model->ny;
nctempfloat2 *nctemp45;
nctemp45=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp45->d[0]=Model->nx;
nctemp45->d[1]=Model->ny;
nctemp45->a=(float *)RunMalloc(sizeof(float)*nctemp46);
El2d->p=nctemp45;
int nctemp57=Model->nx;
nctemp57=nctemp57*Model->ny;
nctempfloat2 *nctemp56;
nctemp56=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp56->d[0]=Model->nx;
nctemp56->d[1]=Model->ny;
nctemp56->a=(float *)RunMalloc(sizeof(float)*nctemp57);
El2d->sigmaxy=nctemp56;
int nctemp68=Model->nx;
nctemp68=nctemp68*Model->ny;
nctempfloat2 *nctemp67;
nctemp67=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp67->d[0]=Model->nx;
nctemp67->d[1]=Model->ny;
nctemp67->a=(float *)RunMalloc(sizeof(float)*nctemp68);
El2d->sigmayx=nctemp67;
int nctemp79=Model->nx;
nctemp79=nctemp79*Model->ny;
nctempfloat2 *nctemp78;
nctemp78=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp78->d[0]=Model->nx;
nctemp78->d[1]=Model->ny;
nctemp78->a=(float *)RunMalloc(sizeof(float)*nctemp79);
El2d->vx=nctemp78;
int nctemp90=Model->nx;
nctemp90=nctemp90*Model->ny;
nctempfloat2 *nctemp89;
nctemp89=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp89->d[0]=Model->nx;
nctemp89->d[1]=Model->ny;
nctemp89->a=(float *)RunMalloc(sizeof(float)*nctemp90);
El2d->vy=nctemp89;
int nctemp101=Model->nx;
nctemp101=nctemp101*Model->ny;
nctempfloat2 *nctemp100;
nctemp100=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp100->d[0]=Model->nx;
nctemp100->d[1]=Model->ny;
nctemp100->a=(float *)RunMalloc(sizeof(float)*nctemp101);
El2d->exx=nctemp100;
int nctemp112=Model->nx;
nctemp112=nctemp112*Model->ny;
nctempfloat2 *nctemp111;
nctemp111=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp111->d[0]=Model->nx;
nctemp111->d[1]=Model->ny;
nctemp111->a=(float *)RunMalloc(sizeof(float)*nctemp112);
El2d->eyy=nctemp111;
int nctemp123=Model->nx;
nctemp123=nctemp123*Model->ny;
nctempfloat2 *nctemp122;
nctemp122=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp122->d[0]=Model->nx;
nctemp122->d[1]=Model->ny;
nctemp122->a=(float *)RunMalloc(sizeof(float)*nctemp123);
El2d->exy=nctemp122;
int nctemp134=Model->nx;
nctemp134=nctemp134*Model->ny;
nctempfloat2 *nctemp133;
nctemp133=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp133->d[0]=Model->nx;
nctemp133->d[1]=Model->ny;
nctemp133->a=(float *)RunMalloc(sizeof(float)*nctemp134);
El2d->eyx=nctemp133;
int nctemp145=Model->nx;
nctemp145=nctemp145*Model->ny;
nctempfloat2 *nctemp144;
nctemp144=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp144->d[0]=Model->nx;
nctemp144->d[1]=Model->ny;
nctemp144->a=(float *)RunMalloc(sizeof(float)*nctemp145);
El2d->e=nctemp144;
int nctemp156=Model->nx;
nctemp156=nctemp156*Model->ny;
nctempfloat2 *nctemp155;
nctemp155=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp155->d[0]=Model->nx;
nctemp155->d[1]=Model->ny;
nctemp155->a=(float *)RunMalloc(sizeof(float)*nctemp156);
El2d->gammaxx=nctemp155;
int nctemp167=Model->nx;
nctemp167=nctemp167*Model->ny;
nctempfloat2 *nctemp166;
nctemp166=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp166->d[0]=Model->nx;
nctemp166->d[1]=Model->ny;
nctemp166->a=(float *)RunMalloc(sizeof(float)*nctemp167);
El2d->gammayy=nctemp166;
int nctemp178=Model->nx;
nctemp178=nctemp178*Model->ny;
nctempfloat2 *nctemp177;
nctemp177=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp177->d[0]=Model->nx;
nctemp177->d[1]=Model->ny;
nctemp177->a=(float *)RunMalloc(sizeof(float)*nctemp178);
El2d->gammaxy=nctemp177;
int nctemp189=Model->nx;
nctemp189=nctemp189*Model->ny;
nctempfloat2 *nctemp188;
nctemp188=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp188->d[0]=Model->nx;
nctemp188->d[1]=Model->ny;
nctemp188->a=(float *)RunMalloc(sizeof(float)*nctemp189);
El2d->gammayx=nctemp188;
int nctemp200=Model->nx;
nctemp200=nctemp200*Model->ny;
nctempfloat2 *nctemp199;
nctemp199=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp199->d[0]=Model->nx;
nctemp199->d[1]=Model->ny;
nctemp199->a=(float *)RunMalloc(sizeof(float)*nctemp200);
El2d->thetaxxx=nctemp199;
int nctemp211=Model->nx;
nctemp211=nctemp211*Model->ny;
nctempfloat2 *nctemp210;
nctemp210=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp210->d[0]=Model->nx;
nctemp210->d[1]=Model->ny;
nctemp210->a=(float *)RunMalloc(sizeof(float)*nctemp211);
El2d->thetayyy=nctemp210;
int nctemp222=Model->nx;
nctemp222=nctemp222*Model->ny;
nctempfloat2 *nctemp221;
nctemp221=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp221->d[0]=Model->nx;
nctemp221->d[1]=Model->ny;
nctemp221->a=(float *)RunMalloc(sizeof(float)*nctemp222);
El2d->thetayxy=nctemp221;
int nctemp233=Model->nx;
nctemp233=nctemp233*Model->ny;
nctempfloat2 *nctemp232;
nctemp232=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp232->d[0]=Model->nx;
nctemp232->d[1]=Model->ny;
nctemp232->a=(float *)RunMalloc(sizeof(float)*nctemp233);
El2d->thetaxyx=nctemp232;
for(i = 0;i < Model->nx;i = (i + 1)){
{
for(j = 0;j < Model->ny;j = (j + 1)){
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
return El2d;
}
}
int El2dvx (struct el2d* El2d,struct model* Model)
{
int nx;
int ny;
float dt;
int i;
int j;
{
nx = Model->nx;
ny = Model->ny;
dt = Model->dt;

 #pragma omp parallel for
for(j=0;j<ny;j++){for(i=0;i<nx;i++){{
{
El2d->vx->a[i+El2d->vx->d[0]*(j)] = ((dt * Model->nu->a[i+Model->nu->d[0]*(j)]) * (El2d->exx->a[i+El2d->exx->d[0]*(j)] + El2d->exy->a[i+El2d->exy->d[0]*(j)]));
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
nx = Model->nx;
ny = Model->ny;

 #pragma omp parallel for
for(j=0;j<ny;j++){for(i=0;i<nx;i++){{
{
El2d->vy->a[i+El2d->vy->d[0]*(j)] = ((Model->dt * Model->nu->a[i+Model->nu->d[0]*(j)]) * (El2d->eyy->a[i+El2d->eyy->d[0]*(j)] + El2d->eyx->a[i+El2d->eyx->d[0]*(j)]));
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
nx = Model->nx;
ny = Model->ny;

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
nx = Model->nx;
ny = Model->ny;

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
nx = Model->nx;
ny = Model->ny;

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
nx = Model->nx;
ny = Model->ny;

 #pragma omp parallel for
for(j=0;j<ny;j++){for(i=0;i<nx;i++){{
{
El2d->sigmaxx->a[i+El2d->sigmaxx->d[0]*(j)] = (((Model->dt * Model->lambda->a[i+Model->lambda->d[0]*(j)]) * (El2d->exx->a[i+El2d->exx->d[0]*(j)] + El2d->eyy->a[i+El2d->eyy->d[0]*(j)])) + (((2.0 * Model->dt) * Model->mu->a[i+Model->mu->d[0]*(j)]) * El2d->exx->a[i+El2d->exx->d[0]*(j)]));
El2d->sigmayy->a[i+El2d->sigmayy->d[0]*(j)] = (((Model->dt * Model->lambda->a[i+Model->lambda->d[0]*(j)]) * (El2d->exx->a[i+El2d->exx->d[0]*(j)] + El2d->eyy->a[i+El2d->eyy->d[0]*(j)])) + (((2.0 * Model->dt) * Model->mu->a[i+Model->mu->d[0]*(j)]) * El2d->eyy->a[i+El2d->eyy->d[0]*(j)]));
El2d->p->a[i+El2d->p->d[0]*(j)] = (0.5 * (El2d->sigmaxx->a[i+El2d->sigmaxx->d[0]*(j)] + El2d->sigmayy->a[i+El2d->sigmayy->d[0]*(j)]));
El2d->sigmaxy->a[i+El2d->sigmaxy->d[0]*(j)] = (((2.0 * Model->dt) * Model->mu->a[i+Model->mu->d[0]*(j)]) * El2d->exy->a[i+El2d->exy->d[0]*(j)]);
El2d->sigmayx->a[i+El2d->sigmayx->d[0]*(j)] = (((2.0 * Model->dt) * Model->mu->a[i+Model->mu->d[0]*(j)]) * El2d->exy->a[i+El2d->exy->d[0]*(j)]);
}
}
}}}
}
int El2dSnap (struct el2d* El2d,int it)
{
int nx;
int ny;
int n;
nctempchar1 *tmp;
{
int nctemp377 = (El2d->sresamp <= 0);
if(nctemp377)
{
{
return 1;
}
}
int nctemp386=El2d->sigmaxx->d[0];nx =nctemp386;
int nctemp394=El2d->sigmaxx->d[1];ny =nctemp394;
n = (nx * ny);
int nctemp401= it;
int nctemp403= El2d->sresamp;
int nctemp405=LibeMod(nctemp401,nctemp403);
int nctemp398 = (nctemp405 ==0);
if(nctemp398)
{
{
int nctemp410=0;
int nctemp407 = (El2d->snpflags->a[nctemp410] ==1);
if(nctemp407)
{
{
nctempchar1 nctemp419;
nctempchar1 *nctemp418;
nctemp419=*(nctempchar1*)(El2d->p);
int nctemp426 = 4 * n;
nctemp419.d[0]=nctemp426;
nctemp418=&nctemp419;
tmp=nctemp418;
int nctemp428= El2d->fdp;
int nctemp435 = 4 * n;
int nctemp430= nctemp435;
nctempchar1* nctemp436= tmp;
int nctemp439=LibeWrite(nctemp428,nctemp430,nctemp436);
}
}
int nctemp443=1;
int nctemp440 = (El2d->snpflags->a[nctemp443] ==1);
if(nctemp440)
{
{
nctempchar1 nctemp452;
nctempchar1 *nctemp451;
nctemp452=*(nctempchar1*)(El2d->vx);
int nctemp459 = 4 * n;
nctemp452.d[0]=nctemp459;
nctemp451=&nctemp452;
tmp=nctemp451;
int nctemp461= El2d->fdvx;
int nctemp468 = 4 * n;
int nctemp463= nctemp468;
nctempchar1* nctemp469= tmp;
int nctemp472=LibeWrite(nctemp461,nctemp463,nctemp469);
}
}
int nctemp476=2;
int nctemp473 = (El2d->snpflags->a[nctemp476] ==1);
if(nctemp473)
{
{
nctempchar1 nctemp485;
nctempchar1 *nctemp484;
nctemp485=*(nctempchar1*)(El2d->vy);
int nctemp492 = 4 * n;
nctemp485.d[0]=nctemp492;
nctemp484=&nctemp485;
tmp=nctemp484;
int nctemp494= El2d->fdvy;
int nctemp501 = 4 * n;
int nctemp496= nctemp501;
nctempchar1* nctemp502= tmp;
int nctemp505=LibeWrite(nctemp494,nctemp496,nctemp502);
}
}
int nctemp509=3;
int nctemp506 = (El2d->snpflags->a[nctemp509] ==1);
if(nctemp506)
{
{
nctempchar1 nctemp518;
nctempchar1 *nctemp517;
nctemp518=*(nctempchar1*)(El2d->sigmaxx);
int nctemp525 = 4 * n;
nctemp518.d[0]=nctemp525;
nctemp517=&nctemp518;
tmp=nctemp517;
int nctemp527= El2d->fdsxx;
int nctemp534 = 4 * n;
int nctemp529= nctemp534;
nctempchar1* nctemp535= tmp;
int nctemp538=LibeWrite(nctemp527,nctemp529,nctemp535);
}
}
int nctemp542=4;
int nctemp539 = (El2d->snpflags->a[nctemp542] ==1);
if(nctemp539)
{
{
nctempchar1 nctemp551;
nctempchar1 *nctemp550;
nctemp551=*(nctempchar1*)(El2d->sigmayy);
int nctemp558 = 4 * n;
nctemp551.d[0]=nctemp558;
nctemp550=&nctemp551;
tmp=nctemp550;
int nctemp560= El2d->fdsyy;
int nctemp567 = 4 * n;
int nctemp562= nctemp567;
nctempchar1* nctemp568= tmp;
int nctemp571=LibeWrite(nctemp560,nctemp562,nctemp568);
}
}
int nctemp575=5;
int nctemp572 = (El2d->snpflags->a[nctemp575] ==1);
if(nctemp572)
{
{
nctempchar1 nctemp584;
nctempchar1 *nctemp583;
nctemp584=*(nctempchar1*)(El2d->sigmaxy);
int nctemp591 = 4 * n;
nctemp584.d[0]=nctemp591;
nctemp583=&nctemp584;
tmp=nctemp583;
int nctemp593= El2d->fdsxy;
int nctemp600 = 4 * n;
int nctemp595= nctemp600;
nctempchar1* nctemp601= tmp;
int nctemp604=LibeWrite(nctemp593,nctemp595,nctemp601);
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
int nctemp610= l;
struct diff* nctemp612=DiffNew(nctemp610);
Diff =nctemp612;
int nctemp619=Model->nx;
nctemp619=nctemp619*Model->ny;
nctempfloat2 *nctemp618;
nctemp618=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp618->d[0]=Model->nx;
nctemp618->d[1]=Model->ny;
nctemp618->a=(float *)RunMalloc(sizeof(float)*nctemp619);
tmp1=nctemp618;
int nctemp630=Model->nx;
nctemp630=nctemp630*Model->ny;
nctempfloat2 *nctemp629;
nctemp629=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp629->d[0]=Model->nx;
nctemp629->d[1]=Model->ny;
nctemp629->a=(float *)RunMalloc(sizeof(float)*nctemp630);
tmp2=nctemp629;
oldperc = 0.0;
ns = El2d->ts;
ne = (ns + nt);
for(i = ns;i < ne;i = (i + 1)){
{
struct diff* nctemp636= Diff;
nctempfloat2* nctemp638= El2d->sigmaxx;
nctempfloat2* nctemp641= El2d->exx;
float nctemp644= Model->dx;
int nctemp646=DiffDxplus(nctemp636,nctemp638,nctemp641,nctemp644);
struct diff* nctemp648= Diff;
nctempfloat2* nctemp650= El2d->sigmaxy;
nctempfloat2* nctemp653= El2d->exy;
float nctemp656= Model->dx;
int nctemp658=DiffDyminus(nctemp648,nctemp650,nctemp653,nctemp656);
struct el2d* nctemp660= El2d;
struct model* nctemp662= Model;
int nctemp664=El2dvx(nctemp660,nctemp662);
struct diff* nctemp666= Diff;
nctempfloat2* nctemp668= El2d->sigmayy;
nctempfloat2* nctemp671= El2d->eyy;
float nctemp674= Model->dx;
int nctemp676=DiffDyplus(nctemp666,nctemp668,nctemp671,nctemp674);
struct diff* nctemp678= Diff;
nctempfloat2* nctemp680= El2d->sigmaxy;
nctempfloat2* nctemp683= El2d->eyx;
float nctemp686= Model->dx;
int nctemp688=DiffDxminus(nctemp678,nctemp680,nctemp683,nctemp686);
struct el2d* nctemp690= El2d;
struct model* nctemp692= Model;
int nctemp694=El2dvy(nctemp690,nctemp692);
struct diff* nctemp696= Diff;
nctempfloat2* nctemp698= El2d->vx;
nctempfloat2* nctemp701= El2d->exx;
float nctemp704= Model->dx;
int nctemp706=DiffDxminus(nctemp696,nctemp698,nctemp701,nctemp704);
struct diff* nctemp708= Diff;
nctempfloat2* nctemp710= El2d->vy;
nctempfloat2* nctemp713= El2d->eyy;
float nctemp716= Model->dx;
int nctemp718=DiffDyminus(nctemp708,nctemp710,nctemp713,nctemp716);
struct diff* nctemp720= Diff;
nctempfloat2* nctemp722= El2d->vy;
nctempfloat2* nctemp725= tmp1;
float nctemp728= Model->dx;
int nctemp730=DiffDxplus(nctemp720,nctemp722,nctemp725,nctemp728);
struct diff* nctemp732= Diff;
nctempfloat2* nctemp734= El2d->vx;
nctempfloat2* nctemp737= tmp2;
float nctemp740= Model->dx;
int nctemp742=DiffDyplus(nctemp732,nctemp734,nctemp737,nctemp740);
struct el2d* nctemp744= El2d;
struct model* nctemp746= Model;
nctempfloat2* nctemp748= tmp1;
nctempfloat2* nctemp751= tmp2;
int nctemp754=El2dexy(nctemp744,nctemp746,nctemp748,nctemp751);
struct el2d* nctemp756= El2d;
struct model* nctemp758= Model;
nctempfloat2* nctemp760= tmp1;
nctempfloat2* nctemp763= tmp2;
int nctemp766=El2deyx(nctemp756,nctemp758,nctemp760,nctemp763);
struct el2d* nctemp768= El2d;
struct model* nctemp770= Model;
int nctemp772=El2de(nctemp768,nctemp770);
struct el2d* nctemp774= El2d;
struct model* nctemp776= Model;
int nctemp778=El2dstress(nctemp774,nctemp776);
for(k = 0;k < Src->Ns;k = (k + 1)){
{
sx = Src->Sx->a[k];
sy = Src->Sy->a[k];
El2d->sigmaxx->a[sx+El2d->sigmaxx->d[0]*(sy)] = (El2d->sigmaxx->a[sx+El2d->sigmaxx->d[0]*(sy)] + (Model->dt * (Src->Sqxx->a[i+Src->Sqxx->d[0]*(k)] / (Model->dx * Model->dx))));
El2d->sigmayy->a[sx+El2d->sigmayy->d[0]*(sy)] = (El2d->sigmayy->a[sx+El2d->sigmayy->d[0]*(sy)] + (Model->dt * (Src->Sqyy->a[i+Src->Sqyy->d[0]*(k)] / (Model->dx * Model->dx))));
El2d->sigmayy->a[sx+El2d->sigmayy->d[0]*(sy)] = (El2d->sigmaxy->a[sx+El2d->sigmaxy->d[0]*(sy)] + (Model->dt * (Src->Sqxy->a[i+Src->Sqxy->d[0]*(k)] / (Model->dx * Model->dx))));
El2d->vx->a[sx+El2d->vx->d[0]*(sy)] = (El2d->vx->a[sx+El2d->vx->d[0]*(sy)] + (Model->dt * (Src->Sfx->a[i+Src->Sfx->d[0]*(k)] / (Model->dx * Model->dx))));
El2d->vy->a[sx+El2d->vy->d[0]*(sy)] = (El2d->vy->a[sx+El2d->vy->d[0]*(sy)] + (Model->dt * (Src->Sfy->a[i+Src->Sfy->d[0]*(k)] / (Model->dx * Model->dx))));
}
}
float nctemp790=(float)(i);
int nctemp803 = ne - ns;
int nctemp805 = nctemp803 - 1;
float nctemp794=(float)(nctemp805);
float nctemp806 = nctemp790 / nctemp794;
float nctemp807 = 1000.0 * nctemp806;
perc =nctemp807;
float nctemp815 = perc - oldperc;
int nctemp808 = (nctemp815 >= 10.0);
if(nctemp808)
{
{
int nctemp824=(int)(perc);
int nctemp828 = nctemp824 / 10;
iperc =nctemp828;
int nctemp832= iperc;
int nctemp834= 10;
int nctemp836=LibeMod(nctemp832,nctemp834);
int nctemp829 = (nctemp836 ==0);
if(nctemp829)
{
{
int nctemp839= 4;
struct nctempchar1 *nctemp843;
static struct nctempchar1 nctemp844 = {{ 20}, (char*)"percent completed: \0"};
nctemp843=&nctemp844;
nctempchar1* nctemp841= nctemp843;
int nctemp845=LibePuts(nctemp839,nctemp841);
int nctemp847= 4;
int nctemp849= iperc;
int nctemp851=LibePuti(nctemp847,nctemp849);
int nctemp853= 4;
struct nctempchar1 *nctemp857;
static struct nctempchar1 nctemp858 = {{ 3}, (char*)"\n\0"};
nctemp857=&nctemp858;
nctempchar1* nctemp855= nctemp857;
int nctemp859=LibePuts(nctemp853,nctemp855);
int nctemp861= 4;
int nctemp863=LibeFlush(nctemp861);
}
}
oldperc = perc;
}
}
int nctemp864 = (Rec !=0);
if(nctemp864)
{
{
struct rec* nctemp869= Rec;
int nctemp871= i;
nctempfloat2* nctemp873= El2d->p;
dtype =1;
int nctemp876= dtype;
int nctemp881=RecReceiver(nctemp869,nctemp871,nctemp873,nctemp876);
struct rec* nctemp883= Rec;
int nctemp885= i;
nctempfloat2* nctemp887= El2d->vx;
dtype =2;
int nctemp890= dtype;
int nctemp895=RecReceiver(nctemp883,nctemp885,nctemp887,nctemp890);
struct rec* nctemp897= Rec;
int nctemp899= i;
nctempfloat2* nctemp901= El2d->vy;
dtype =3;
int nctemp904= dtype;
int nctemp909=RecReceiver(nctemp897,nctemp899,nctemp901,nctemp904);
struct rec* nctemp911= Rec;
int nctemp913= i;
nctempfloat2* nctemp915= El2d->sigmaxx;
dtype =4;
int nctemp918= dtype;
int nctemp923=RecReceiver(nctemp911,nctemp913,nctemp915,nctemp918);
struct rec* nctemp925= Rec;
int nctemp927= i;
nctempfloat2* nctemp929= El2d->sigmayy;
dtype =5;
int nctemp932= dtype;
int nctemp937=RecReceiver(nctemp925,nctemp927,nctemp929,nctemp932);
struct rec* nctemp939= Rec;
int nctemp941= i;
nctempfloat2* nctemp943= El2d->sigmaxy;
dtype =6;
int nctemp946= dtype;
int nctemp951=RecReceiver(nctemp939,nctemp941,nctemp943,nctemp946);
}
}
struct el2d* nctemp953= El2d;
int nctemp955= i;
int nctemp957=El2dSnap(nctemp953,nctemp955);
}
}
El2d->ts = (El2d->ts + ne);
return 1;
}
}
