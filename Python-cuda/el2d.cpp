//  Translated by eps
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
struct model* ModelNew (nctempfloat2 *vp,nctempfloat2 *vs,nctempfloat2 *rho,float dx,float w0,float dt,int nb,int freesurface,nctempfloat2 *tauelx,nctempfloat2 *tauely,nctempfloat2 *tauslx,nctempfloat2 *tausly,nctempfloat2 *tauemx,nctempfloat2 *tauemy,nctempfloat2 *tausmx,nctempfloat2 *tausmy,nctempfloat2 *tauenx,nctempfloat2 *taueny,nctempfloat2 *tausnx,nctempfloat2 *tausny);
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
__global__ void kernel_El2dvx (struct el2d* El2d,struct model* Model)
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
{
El2d->vx->a[i+El2d->vx->d[0]*(j)] = (((dt * Model->nu->a[i+Model->nu->d[0]*(j)]) * (El2d->exx->a[i+El2d->exx->d[0]*(j)] + El2d->exy->a[i+El2d->exy->d[0]*(j)])) + El2d->vx->a[i+El2d->vx->d[0]*(j)]);
}
}
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
{
nx = Model->nx;
ny = Model->ny;
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
{
El2d->vy->a[i+El2d->vy->d[0]*(j)] = (((Model->dt * Model->nu->a[i+Model->nu->d[0]*(j)]) * (El2d->eyy->a[i+El2d->eyy->d[0]*(j)] + El2d->eyx->a[i+El2d->eyx->d[0]*(j)])) + El2d->vy->a[i+El2d->vy->d[0]*(j)]);
}
}
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
{
nx = Model->nx;
ny = Model->ny;
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
{
El2d->e->a[i+El2d->e->d[0]*(j)] = (El2d->exx->a[i+El2d->exx->d[0]*(j)] + El2d->eyy->a[i+El2d->eyy->d[0]*(j)]);
}
}
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
{
nx = Model->nx;
ny = Model->ny;
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
{
El2d->exy->a[i+El2d->exy->d[0]*(j)] = (0.5 * (tmp1->a[i+tmp1->d[0]*(j)] + tmp2->a[i+tmp2->d[0]*(j)]));
}
}
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
{
nx = Model->nx;
ny = Model->ny;
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
{
El2d->eyx->a[i+El2d->eyx->d[0]*(j)] = (0.5 * (tmp1->a[i+tmp1->d[0]*(j)] + tmp2->a[i+tmp2->d[0]*(j)]));
}
}
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
{
nx = Model->nx;
ny = Model->ny;
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
{
El2d->sigmaxx->a[i+El2d->sigmaxx->d[0]*(j)] = ((((Model->dt * Model->lambda->a[i+Model->lambda->d[0]*(j)]) * (El2d->exx->a[i+El2d->exx->d[0]*(j)] + El2d->eyy->a[i+El2d->eyy->d[0]*(j)])) + (((2.0 * Model->dt) * Model->mu->a[i+Model->mu->d[0]*(j)]) * El2d->exx->a[i+El2d->exx->d[0]*(j)])) + El2d->sigmaxx->a[i+El2d->sigmaxx->d[0]*(j)]);
El2d->sigmayy->a[i+El2d->sigmayy->d[0]*(j)] = ((((Model->dt * Model->lambda->a[i+Model->lambda->d[0]*(j)]) * (El2d->exx->a[i+El2d->exx->d[0]*(j)] + El2d->eyy->a[i+El2d->eyy->d[0]*(j)])) + (((2.0 * Model->dt) * Model->mu->a[i+Model->mu->d[0]*(j)]) * El2d->eyy->a[i+El2d->eyy->d[0]*(j)])) + El2d->sigmayy->a[i+El2d->sigmayy->d[0]*(j)]);
El2d->p->a[i+El2d->p->d[0]*(j)] = (0.5 * (El2d->sigmaxx->a[i+El2d->sigmaxx->d[0]*(j)] + El2d->sigmayy->a[i+El2d->sigmayy->d[0]*(j)]));
El2d->sigmaxy->a[i+El2d->sigmaxy->d[0]*(j)] = ((((2.0 * Model->dt) * Model->mu->a[i+Model->mu->d[0]*(j)]) * El2d->exy->a[i+El2d->exy->d[0]*(j)]) + El2d->sigmaxy->a[i+El2d->sigmaxy->d[0]*(j)]);
El2d->sigmayx->a[i+El2d->sigmayx->d[0]*(j)] = ((((2.0 * Model->dt) * Model->mu->a[i+Model->mu->d[0]*(j)]) * El2d->exy->a[i+El2d->exy->d[0]*(j)]) + El2d->sigmayx->a[i+El2d->sigmayx->d[0]*(j)]);
}
}
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
int nx;
int ny;
int n;
nctempchar1 *tmp;
int err;
{
int nctemp443 = (El2d->sresamp <= 0);
if(nctemp443)
{
{
return 1;
}
}
int nctemp452=El2d->sigmaxx->d[0];nx =nctemp452;
int nctemp460=El2d->sigmaxx->d[1];ny =nctemp460;
n = (nx * ny);
int nctemp467= it;
int nctemp469= El2d->sresamp;
int nctemp471=LibeMod(nctemp467,nctemp469);
int nctemp464 = (nctemp471 ==0);
if(nctemp464)
{
{
int nctemp476=0;
int nctemp473 = (El2d->snpflags->a[nctemp476] ==1);
if(nctemp473)
{
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
}
int nctemp509=1;
int nctemp506 = (El2d->snpflags->a[nctemp509] ==1);
if(nctemp506)
{
{
nctempchar1 nctemp518;
nctempchar1 *nctemp517;
nctemp518=*(nctempchar1*)(El2d->vx);
int nctemp525 = 4 * n;
nctemp518.d[0]=nctemp525;
nctemp517=&nctemp518;
tmp=nctemp517;
int nctemp530= El2d->fdvx;
int nctemp537 = 4 * n;
int nctemp532= nctemp537;
nctempchar1* nctemp538= tmp;
int nctemp541=LibeWrite(nctemp530,nctemp532,nctemp538);
err =nctemp541;
}
}
int nctemp545=2;
int nctemp542 = (El2d->snpflags->a[nctemp545] ==1);
if(nctemp542)
{
{
nctempchar1 nctemp554;
nctempchar1 *nctemp553;
nctemp554=*(nctempchar1*)(El2d->vy);
int nctemp561 = 4 * n;
nctemp554.d[0]=nctemp561;
nctemp553=&nctemp554;
tmp=nctemp553;
int nctemp563= El2d->fdvy;
int nctemp570 = 4 * n;
int nctemp565= nctemp570;
nctempchar1* nctemp571= tmp;
int nctemp574=LibeWrite(nctemp563,nctemp565,nctemp571);
}
}
int nctemp578=3;
int nctemp575 = (El2d->snpflags->a[nctemp578] ==1);
if(nctemp575)
{
{
nctempchar1 nctemp587;
nctempchar1 *nctemp586;
nctemp587=*(nctempchar1*)(El2d->sigmaxx);
int nctemp594 = 4 * n;
nctemp587.d[0]=nctemp594;
nctemp586=&nctemp587;
tmp=nctemp586;
int nctemp596= El2d->fdsxx;
int nctemp603 = 4 * n;
int nctemp598= nctemp603;
nctempchar1* nctemp604= tmp;
int nctemp607=LibeWrite(nctemp596,nctemp598,nctemp604);
}
}
int nctemp611=4;
int nctemp608 = (El2d->snpflags->a[nctemp611] ==1);
if(nctemp608)
{
{
nctempchar1 nctemp620;
nctempchar1 *nctemp619;
nctemp620=*(nctempchar1*)(El2d->sigmayy);
int nctemp627 = 4 * n;
nctemp620.d[0]=nctemp627;
nctemp619=&nctemp620;
tmp=nctemp619;
int nctemp629= El2d->fdsyy;
int nctemp636 = 4 * n;
int nctemp631= nctemp636;
nctempchar1* nctemp637= tmp;
int nctemp640=LibeWrite(nctemp629,nctemp631,nctemp637);
}
}
int nctemp644=5;
int nctemp641 = (El2d->snpflags->a[nctemp644] ==1);
if(nctemp641)
{
{
nctempchar1 nctemp653;
nctempchar1 *nctemp652;
nctemp653=*(nctempchar1*)(El2d->sigmaxy);
int nctemp660 = 4 * n;
nctemp653.d[0]=nctemp660;
nctemp652=&nctemp653;
tmp=nctemp652;
int nctemp662= El2d->fdsxy;
int nctemp669 = 4 * n;
int nctemp664= nctemp669;
nctempchar1* nctemp670= tmp;
int nctemp673=LibeWrite(nctemp662,nctemp664,nctemp670);
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
{
int nctemp679= l;
struct diff* nctemp681=DiffNew(nctemp679);
Diff =nctemp681;
int nctemp688=Model->nx;
nctemp688=nctemp688*Model->ny;
nctempfloat2 *nctemp687;
nctemp687=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp687->d[0]=Model->nx;
nctemp687->d[1]=Model->ny;
nctemp687->a=(float *)RunMalloc(sizeof(float)*nctemp688);
tmp1=nctemp687;
int nctemp699=Model->nx;
nctemp699=nctemp699*Model->ny;
nctempfloat2 *nctemp698;
nctemp698=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp698->d[0]=Model->nx;
nctemp698->d[1]=Model->ny;
nctemp698->a=(float *)RunMalloc(sizeof(float)*nctemp699);
tmp2=nctemp698;
oldperc = 0.0;
ns = El2d->ts;
ne = (ns + nt);
for(i = ns;i < ne;i = (i + 1)){
{
struct diff* nctemp705= Diff;
nctempfloat2* nctemp707= El2d->sigmaxx;
nctempfloat2* nctemp710= El2d->exx;
float nctemp713= Model->dx;
int nctemp715=DiffDxplus(nctemp705,nctemp707,nctemp710,nctemp713);
struct diff* nctemp717= Diff;
nctempfloat2* nctemp719= El2d->sigmaxy;
nctempfloat2* nctemp722= El2d->exy;
float nctemp725= Model->dx;
int nctemp727=DiffDyminus(nctemp717,nctemp719,nctemp722,nctemp725);
struct el2d* nctemp729= El2d;
struct model* nctemp731= Model;
int nctemp733=El2dvx(nctemp729,nctemp731);
struct diff* nctemp735= Diff;
nctempfloat2* nctemp737= El2d->sigmayy;
nctempfloat2* nctemp740= El2d->eyy;
float nctemp743= Model->dx;
int nctemp745=DiffDyplus(nctemp735,nctemp737,nctemp740,nctemp743);
struct diff* nctemp747= Diff;
nctempfloat2* nctemp749= El2d->sigmaxy;
nctempfloat2* nctemp752= El2d->eyx;
float nctemp755= Model->dx;
int nctemp757=DiffDxminus(nctemp747,nctemp749,nctemp752,nctemp755);
struct el2d* nctemp759= El2d;
struct model* nctemp761= Model;
int nctemp763=El2dvy(nctemp759,nctemp761);
struct diff* nctemp765= Diff;
nctempfloat2* nctemp767= El2d->vx;
nctempfloat2* nctemp770= El2d->exx;
float nctemp773= Model->dx;
int nctemp775=DiffDxminus(nctemp765,nctemp767,nctemp770,nctemp773);
struct diff* nctemp777= Diff;
nctempfloat2* nctemp779= El2d->vy;
nctempfloat2* nctemp782= El2d->eyy;
float nctemp785= Model->dx;
int nctemp787=DiffDyminus(nctemp777,nctemp779,nctemp782,nctemp785);
struct diff* nctemp789= Diff;
nctempfloat2* nctemp791= El2d->vy;
nctempfloat2* nctemp794= tmp1;
float nctemp797= Model->dx;
int nctemp799=DiffDxplus(nctemp789,nctemp791,nctemp794,nctemp797);
struct diff* nctemp801= Diff;
nctempfloat2* nctemp803= El2d->vx;
nctempfloat2* nctemp806= tmp2;
float nctemp809= Model->dx;
int nctemp811=DiffDyplus(nctemp801,nctemp803,nctemp806,nctemp809);
struct el2d* nctemp813= El2d;
struct model* nctemp815= Model;
nctempfloat2* nctemp817= tmp1;
nctempfloat2* nctemp820= tmp2;
int nctemp823=El2dexy(nctemp813,nctemp815,nctemp817,nctemp820);
struct el2d* nctemp825= El2d;
struct model* nctemp827= Model;
nctempfloat2* nctemp829= tmp1;
nctempfloat2* nctemp832= tmp2;
int nctemp835=El2deyx(nctemp825,nctemp827,nctemp829,nctemp832);
struct el2d* nctemp837= El2d;
struct model* nctemp839= Model;
int nctemp841=El2de(nctemp837,nctemp839);
struct el2d* nctemp843= El2d;
struct model* nctemp845= Model;
int nctemp847=El2dstress(nctemp843,nctemp845);
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
float nctemp859=(float)(i);
int nctemp872 = ne - ns;
int nctemp874 = nctemp872 - 1;
float nctemp863=(float)(nctemp874);
float nctemp875 = nctemp859 / nctemp863;
float nctemp876 = 1000.0 * nctemp875;
perc =nctemp876;
float nctemp884 = perc - oldperc;
int nctemp877 = (nctemp884 >= 10.0);
if(nctemp877)
{
{
int nctemp893=(int)(perc);
int nctemp897 = nctemp893 / 10;
iperc =nctemp897;
int nctemp901= iperc;
int nctemp903= 10;
int nctemp905=LibeMod(nctemp901,nctemp903);
int nctemp898 = (nctemp905 ==0);
if(nctemp898)
{
{
int nctemp908= 4;
struct nctempchar1 *nctemp912;
static struct nctempchar1 nctemp913 = {{ 20}, (char*)"percent completed: \0"};
nctemp912=&nctemp913;
nctempchar1* nctemp910= nctemp912;
int nctemp914=LibePuts(nctemp908,nctemp910);
int nctemp916= 4;
int nctemp918= iperc;
int nctemp920=LibePuti(nctemp916,nctemp918);
int nctemp922= 4;
struct nctempchar1 *nctemp926;
static struct nctempchar1 nctemp927 = {{ 3}, (char*)"\n\0"};
nctemp926=&nctemp927;
nctempchar1* nctemp924= nctemp926;
int nctemp928=LibePuts(nctemp922,nctemp924);
int nctemp930= 4;
int nctemp932=LibeFlush(nctemp930);
}
}
oldperc = perc;
}
}
struct el2d* nctemp934= El2d;
int nctemp936= i;
int nctemp938=El2dSnap(nctemp934,nctemp936);
}
}
El2d->ts = (El2d->ts + ne);
return 1;
}
}
};