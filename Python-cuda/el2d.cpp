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
struct model {nctempfloat2 *tausx;
nctempfloat2 *tauex;
nctempfloat2 *tausy;
nctempfloat2 *tauey;
nctempfloat2 *chisx;
nctempfloat2 *chiex;
nctempfloat2 *chisy;
nctempfloat2 *chiey;
nctempfloat2 *etasx;
nctempfloat2 *etaex;
nctempfloat2 *etasy;
nctempfloat2 *etaey;
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
struct model* ModelNew (nctempfloat2 *vp,nctempfloat2 *vs,nctempfloat2 *rho,float dx,float w0,float dt,int nb,int freesurface,nctempfloat2 *tausx,nctempfloat2 *tausy,nctempfloat2 *tauex,nctempfloat2 *tauey,nctempfloat2 *chisx,nctempfloat2 *chisy,nctempfloat2 *chiex,nctempfloat2 *chiey,nctempfloat2 *etasx,nctempfloat2 *etasy,nctempfloat2 *etaex,nctempfloat2 *etaey);
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
nctempfloat2 *gammax;
nctempfloat2 *gammay;
nctempfloat2 *thetaxx;
nctempfloat2 *thetayy;
nctempfloat2 *thetaxy;
nctempfloat2 *thetayx;
nctempfloat2 *alphax;
nctempfloat2 *alphay;
nctempfloat2 *betaxy;
nctempfloat2 *betayx;
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
int RecCopy (nctempfloat2 *a,nctempfloat2 *b);
int RecGetrec (struct rec* Rec,nctempfloat2 *data,int type);
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
El2d->gammax=nctemp144;
int nctemp156=Model->nx;
nctemp156=nctemp156*Model->ny;
nctempfloat2 *nctemp155;
nctemp155=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp155->d[0]=Model->nx;
nctemp155->d[1]=Model->ny;
nctemp155->a=(float *)RunMalloc(sizeof(float)*nctemp156);
El2d->gammay=nctemp155;
int nctemp167=Model->nx;
nctemp167=nctemp167*Model->ny;
nctempfloat2 *nctemp166;
nctemp166=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp166->d[0]=Model->nx;
nctemp166->d[1]=Model->ny;
nctemp166->a=(float *)RunMalloc(sizeof(float)*nctemp167);
El2d->alphax=nctemp166;
int nctemp178=Model->nx;
nctemp178=nctemp178*Model->ny;
nctempfloat2 *nctemp177;
nctemp177=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp177->d[0]=Model->nx;
nctemp177->d[1]=Model->ny;
nctemp177->a=(float *)RunMalloc(sizeof(float)*nctemp178);
El2d->alphay=nctemp177;
int nctemp189=Model->nx;
nctemp189=nctemp189*Model->ny;
nctempfloat2 *nctemp188;
nctemp188=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp188->d[0]=Model->nx;
nctemp188->d[1]=Model->ny;
nctemp188->a=(float *)RunMalloc(sizeof(float)*nctemp189);
El2d->betaxy=nctemp188;
int nctemp200=Model->nx;
nctemp200=nctemp200*Model->ny;
nctempfloat2 *nctemp199;
nctemp199=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp199->d[0]=Model->nx;
nctemp199->d[1]=Model->ny;
nctemp199->a=(float *)RunMalloc(sizeof(float)*nctemp200);
El2d->betayx=nctemp199;
int nctemp211=Model->nx;
nctemp211=nctemp211*Model->ny;
nctempfloat2 *nctemp210;
nctemp210=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp210->d[0]=Model->nx;
nctemp210->d[1]=Model->ny;
nctemp210->a=(float *)RunMalloc(sizeof(float)*nctemp211);
El2d->thetaxx=nctemp210;
int nctemp222=Model->nx;
nctemp222=nctemp222*Model->ny;
nctempfloat2 *nctemp221;
nctemp221=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp221->d[0]=Model->nx;
nctemp221->d[1]=Model->ny;
nctemp221->a=(float *)RunMalloc(sizeof(float)*nctemp222);
El2d->thetayy=nctemp221;
int nctemp233=Model->nx;
nctemp233=nctemp233*Model->ny;
nctempfloat2 *nctemp232;
nctemp232=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp232->d[0]=Model->nx;
nctemp232->d[1]=Model->ny;
nctemp232->a=(float *)RunMalloc(sizeof(float)*nctemp233);
El2d->thetayx=nctemp232;
int nctemp244=Model->nx;
nctemp244=nctemp244*Model->ny;
nctempfloat2 *nctemp243;
nctemp243=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp243->d[0]=Model->nx;
nctemp243->d[1]=Model->ny;
nctemp243->a=(float *)RunMalloc(sizeof(float)*nctemp244);
El2d->thetaxy=nctemp243;
El2d->ts = 0;
int nctemp252=0;
int nctemp249 = (El2d->snpflags->a[nctemp252] ==1);
if(nctemp249)
{
{
struct nctempchar1 *nctemp261;
static struct nctempchar1 nctemp262 = {{ 10}, (char*)"snp-p.bin\0"};
nctemp261=&nctemp262;
nctempchar1* nctemp259= nctemp261;
struct nctempchar1 *nctemp265;
static struct nctempchar1 nctemp266 = {{ 2}, (char*)"w\0"};
nctemp265=&nctemp266;
nctempchar1* nctemp263= nctemp265;
int nctemp267=LibeOpen(nctemp259,nctemp263);
El2d->fdp =nctemp267;
}
}
int nctemp271=1;
int nctemp268 = (El2d->snpflags->a[nctemp271] ==1);
if(nctemp268)
{
{
struct nctempchar1 *nctemp280;
static struct nctempchar1 nctemp281 = {{ 11}, (char*)"snp-vx.bin\0"};
nctemp280=&nctemp281;
nctempchar1* nctemp278= nctemp280;
struct nctempchar1 *nctemp284;
static struct nctempchar1 nctemp285 = {{ 2}, (char*)"w\0"};
nctemp284=&nctemp285;
nctempchar1* nctemp282= nctemp284;
int nctemp286=LibeOpen(nctemp278,nctemp282);
El2d->fdvx =nctemp286;
}
}
int nctemp290=2;
int nctemp287 = (El2d->snpflags->a[nctemp290] ==1);
if(nctemp287)
{
{
struct nctempchar1 *nctemp299;
static struct nctempchar1 nctemp300 = {{ 11}, (char*)"snp-vy.bin\0"};
nctemp299=&nctemp300;
nctempchar1* nctemp297= nctemp299;
struct nctempchar1 *nctemp303;
static struct nctempchar1 nctemp304 = {{ 2}, (char*)"w\0"};
nctemp303=&nctemp304;
nctempchar1* nctemp301= nctemp303;
int nctemp305=LibeOpen(nctemp297,nctemp301);
El2d->fdvy =nctemp305;
}
}
int nctemp309=3;
int nctemp306 = (El2d->snpflags->a[nctemp309] ==1);
if(nctemp306)
{
{
struct nctempchar1 *nctemp318;
static struct nctempchar1 nctemp319 = {{ 12}, (char*)"snp-sxx.bin\0"};
nctemp318=&nctemp319;
nctempchar1* nctemp316= nctemp318;
struct nctempchar1 *nctemp322;
static struct nctempchar1 nctemp323 = {{ 2}, (char*)"w\0"};
nctemp322=&nctemp323;
nctempchar1* nctemp320= nctemp322;
int nctemp324=LibeOpen(nctemp316,nctemp320);
El2d->fdsxx =nctemp324;
}
}
int nctemp328=4;
int nctemp325 = (El2d->snpflags->a[nctemp328] ==1);
if(nctemp325)
{
{
struct nctempchar1 *nctemp337;
static struct nctempchar1 nctemp338 = {{ 12}, (char*)"snp-syy.bin\0"};
nctemp337=&nctemp338;
nctempchar1* nctemp335= nctemp337;
struct nctempchar1 *nctemp341;
static struct nctempchar1 nctemp342 = {{ 2}, (char*)"w\0"};
nctemp341=&nctemp342;
nctempchar1* nctemp339= nctemp341;
int nctemp343=LibeOpen(nctemp335,nctemp339);
El2d->fdsyy =nctemp343;
}
}
int nctemp347=5;
int nctemp344 = (El2d->snpflags->a[nctemp347] ==1);
if(nctemp344)
{
{
struct nctempchar1 *nctemp356;
static struct nctempchar1 nctemp357 = {{ 12}, (char*)"snp-sxy.bin\0"};
nctemp356=&nctemp357;
nctempchar1* nctemp354= nctemp356;
struct nctempchar1 *nctemp360;
static struct nctempchar1 nctemp361 = {{ 2}, (char*)"w\0"};
nctemp360=&nctemp361;
nctempchar1* nctemp358= nctemp360;
int nctemp362=LibeOpen(nctemp354,nctemp358);
El2d->fdsxy =nctemp362;
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
int nctemp370=i;
int nctemp364=nx-nctemp370;
j =0;
int nctemp377=j;
int nctemp371=ny-nctemp377;
int nctemp378=nctemp364*nctemp371;
for(nctempno=blockIdx.x*blockDim.x + threadIdx.x; nctempno<nctemp378;nctempno+=blockDim.x*gridDim.x){
i=(nctempno/(1))%nctemp364+nctemp370;
j=(nctempno/(1*nctemp364))+nctemp377;
{
{
El2d->vx->a[i+El2d->vx->d[0]*(j)] = ((((dt * Model->nu->a[i+Model->nu->d[0]*(j)]) * (El2d->exx->a[i+El2d->exx->d[0]*(j)] + El2d->exy->a[i+El2d->exy->d[0]*(j)])) + (dt * (El2d->thetaxx->a[i+El2d->thetaxx->d[0]*(j)] + El2d->thetaxy->a[i+El2d->thetaxy->d[0]*(j)]))) + El2d->vx->a[i+El2d->vx->d[0]*(j)]);
int nctemp382=i;
nctemp382=j*El2d->thetaxx->d[0]+nctemp382;
int nctemp392=i;
nctemp392=j*El2d->thetaxx->d[0]+nctemp392;
float nctemp399= -dt;
int nctemp401=i;
nctemp401=j*Model->etasx->d[0]+nctemp401;
float nctemp404 = nctemp399 / Model->etasx->a[nctemp401];
float nctemp396= nctemp404;
float nctemp405=exp(nctemp396);
float nctemp406 = El2d->thetaxx->a[nctemp392] * nctemp405;
int nctemp420=i;
nctemp420=j*Model->nu->d[0]+nctemp420;
int nctemp431=i;
nctemp431=j*Model->etaex->d[0]+nctemp431;
int nctemp435=i;
nctemp435=j*Model->etasx->d[0]+nctemp435;
float nctemp438 = Model->etaex->a[nctemp431] / Model->etasx->a[nctemp435];
float nctemp439 = 1.0 - nctemp438;
float nctemp440 = Model->nu->a[nctemp420] * nctemp439;
float nctemp442 = nctemp440 * dt;
int nctemp444=i;
nctemp444=j*Model->etaex->d[0]+nctemp444;
float nctemp447 = nctemp442 / Model->etaex->a[nctemp444];
int nctemp449=i;
nctemp449=j*El2d->exx->d[0]+nctemp449;
float nctemp452 = nctemp447 * El2d->exx->a[nctemp449];
float nctemp453 = nctemp406 + nctemp452;
El2d->thetaxx->a[nctemp382] =nctemp453;
int nctemp457=i;
nctemp457=j*El2d->thetaxy->d[0]+nctemp457;
int nctemp467=i;
nctemp467=j*El2d->thetaxy->d[0]+nctemp467;
float nctemp474= -dt;
int nctemp476=i;
nctemp476=j*Model->etasy->d[0]+nctemp476;
float nctemp479 = nctemp474 / Model->etasy->a[nctemp476];
float nctemp471= nctemp479;
float nctemp480=exp(nctemp471);
float nctemp481 = El2d->thetaxy->a[nctemp467] * nctemp480;
int nctemp495=i;
nctemp495=j*Model->nu->d[0]+nctemp495;
int nctemp506=i;
nctemp506=j*Model->etaey->d[0]+nctemp506;
int nctemp510=i;
nctemp510=j*Model->etasy->d[0]+nctemp510;
float nctemp513 = Model->etaey->a[nctemp506] / Model->etasy->a[nctemp510];
float nctemp514 = 1.0 - nctemp513;
float nctemp515 = Model->nu->a[nctemp495] * nctemp514;
float nctemp517 = nctemp515 * dt;
int nctemp519=i;
nctemp519=j*Model->etaey->d[0]+nctemp519;
float nctemp522 = nctemp517 / Model->etaey->a[nctemp519];
int nctemp524=i;
nctemp524=j*El2d->exy->d[0]+nctemp524;
float nctemp527 = nctemp522 * El2d->exy->a[nctemp524];
float nctemp528 = nctemp481 + nctemp527;
El2d->thetaxy->a[nctemp457] =nctemp528;
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
float dt;
int i;
int j;
{
nx = Model->nx;
ny = Model->ny;
dt = Model->dt;
{
int nctempno=blockIdx.x*blockDim.x + threadIdx.x; i =0;
int nctemp535=i;
int nctemp529=nx-nctemp535;
j =0;
int nctemp542=j;
int nctemp536=ny-nctemp542;
int nctemp543=nctemp529*nctemp536;
for(nctempno=blockIdx.x*blockDim.x + threadIdx.x; nctempno<nctemp543;nctempno+=blockDim.x*gridDim.x){
i=(nctempno/(1))%nctemp529+nctemp535;
j=(nctempno/(1*nctemp529))+nctemp542;
{
{
El2d->vy->a[i+El2d->vy->d[0]*(j)] = ((((dt * Model->nu->a[i+Model->nu->d[0]*(j)]) * (El2d->eyy->a[i+El2d->eyy->d[0]*(j)] + El2d->eyx->a[i+El2d->eyx->d[0]*(j)])) + (dt * (El2d->thetayy->a[i+El2d->thetayy->d[0]*(j)] + El2d->thetayx->a[i+El2d->thetayx->d[0]*(j)]))) + El2d->vy->a[i+El2d->vy->d[0]*(j)]);
int nctemp547=i;
nctemp547=j*El2d->thetayy->d[0]+nctemp547;
int nctemp557=i;
nctemp557=j*El2d->thetayy->d[0]+nctemp557;
float nctemp564= -dt;
int nctemp566=i;
nctemp566=j*Model->etasy->d[0]+nctemp566;
float nctemp569 = nctemp564 / Model->etasy->a[nctemp566];
float nctemp561= nctemp569;
float nctemp570=exp(nctemp561);
float nctemp571 = El2d->thetayy->a[nctemp557] * nctemp570;
int nctemp585=i;
nctemp585=j*Model->nu->d[0]+nctemp585;
int nctemp596=i;
nctemp596=j*Model->etaey->d[0]+nctemp596;
int nctemp600=i;
nctemp600=j*Model->etasy->d[0]+nctemp600;
float nctemp603 = Model->etaey->a[nctemp596] / Model->etasy->a[nctemp600];
float nctemp604 = 1.0 - nctemp603;
float nctemp605 = Model->nu->a[nctemp585] * nctemp604;
float nctemp607 = nctemp605 * dt;
int nctemp609=i;
nctemp609=j*Model->etaey->d[0]+nctemp609;
float nctemp612 = nctemp607 / Model->etaey->a[nctemp609];
int nctemp614=i;
nctemp614=j*El2d->eyy->d[0]+nctemp614;
float nctemp617 = nctemp612 * El2d->eyy->a[nctemp614];
float nctemp618 = nctemp571 + nctemp617;
El2d->thetayy->a[nctemp547] =nctemp618;
int nctemp622=i;
nctemp622=j*El2d->thetayx->d[0]+nctemp622;
int nctemp632=i;
nctemp632=j*El2d->thetayx->d[0]+nctemp632;
float nctemp639= -dt;
int nctemp641=i;
nctemp641=j*Model->etasx->d[0]+nctemp641;
float nctemp644 = nctemp639 / Model->etasx->a[nctemp641];
float nctemp636= nctemp644;
float nctemp645=exp(nctemp636);
float nctemp646 = El2d->thetayx->a[nctemp632] * nctemp645;
int nctemp660=i;
nctemp660=j*Model->nu->d[0]+nctemp660;
int nctemp671=i;
nctemp671=j*Model->etaex->d[0]+nctemp671;
int nctemp675=i;
nctemp675=j*Model->etasx->d[0]+nctemp675;
float nctemp678 = Model->etaex->a[nctemp671] / Model->etasx->a[nctemp675];
float nctemp679 = 1.0 - nctemp678;
float nctemp680 = Model->nu->a[nctemp660] * nctemp679;
float nctemp682 = nctemp680 * dt;
int nctemp684=i;
nctemp684=j*Model->etaex->d[0]+nctemp684;
float nctemp687 = nctemp682 / Model->etaex->a[nctemp684];
int nctemp689=i;
nctemp689=j*El2d->eyx->d[0]+nctemp689;
float nctemp692 = nctemp687 * El2d->eyx->a[nctemp689];
float nctemp693 = nctemp646 + nctemp692;
El2d->thetayx->a[nctemp622] =nctemp693;
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
__global__ void kernel_El2dstress (struct el2d* El2d,struct model* Model)
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
int nctemp700=i;
int nctemp694=nx-nctemp700;
j =0;
int nctemp707=j;
int nctemp701=ny-nctemp707;
int nctemp708=nctemp694*nctemp701;
for(nctempno=blockIdx.x*blockDim.x + threadIdx.x; nctempno<nctemp708;nctempno+=blockDim.x*gridDim.x){
i=(nctempno/(1))%nctemp694+nctemp700;
j=(nctempno/(1*nctemp694))+nctemp707;
{
{
El2d->sigmaxx->a[i+El2d->sigmaxx->d[0]*(j)] = (((((Model->dt * Model->lambda->a[i+Model->lambda->d[0]*(j)]) * (El2d->exx->a[i+El2d->exx->d[0]*(j)] + El2d->eyy->a[i+El2d->eyy->d[0]*(j)])) + (((Model->dt * 2.0) * Model->mu->a[i+Model->mu->d[0]*(j)]) * El2d->exx->a[i+El2d->exx->d[0]*(j)])) + (dt * ((El2d->gammax->a[i+El2d->gammax->d[0]*(j)] + El2d->gammay->a[i+El2d->gammay->d[0]*(j)]) + El2d->alphax->a[i+El2d->alphax->d[0]*(j)]))) + El2d->sigmaxx->a[i+El2d->sigmaxx->d[0]*(j)]);
El2d->sigmayy->a[i+El2d->sigmayy->d[0]*(j)] = (((((Model->dt * Model->lambda->a[i+Model->lambda->d[0]*(j)]) * (El2d->exx->a[i+El2d->exx->d[0]*(j)] + El2d->eyy->a[i+El2d->eyy->d[0]*(j)])) + (((Model->dt * 2.0) * Model->mu->a[i+Model->mu->d[0]*(j)]) * El2d->eyy->a[i+El2d->eyy->d[0]*(j)])) + (dt * ((El2d->gammax->a[i+El2d->gammax->d[0]*(j)] + El2d->gammay->a[i+El2d->gammay->d[0]*(j)]) + El2d->alphay->a[i+El2d->alphay->d[0]*(j)]))) + El2d->sigmayy->a[i+El2d->sigmayy->d[0]*(j)]);
El2d->p->a[i+El2d->p->d[0]*(j)] = (0.5 * (El2d->sigmaxx->a[i+El2d->sigmaxx->d[0]*(j)] + El2d->sigmayy->a[i+El2d->sigmayy->d[0]*(j)]));
El2d->sigmaxy->a[i+El2d->sigmaxy->d[0]*(j)] = ((((Model->dt * Model->mu->a[i+Model->mu->d[0]*(j)]) * (El2d->exy->a[i+El2d->exy->d[0]*(j)] + El2d->eyx->a[i+El2d->eyx->d[0]*(j)])) + (dt * (El2d->betaxy->a[i+El2d->betaxy->d[0]*(j)] + El2d->betayx->a[i+El2d->betayx->d[0]*(j)]))) + El2d->sigmaxy->a[i+El2d->sigmaxy->d[0]*(j)]);
El2d->sigmayx->a[i+El2d->sigmayx->d[0]*(j)] = ((((Model->dt * Model->mu->a[i+Model->mu->d[0]*(j)]) * (El2d->eyx->a[i+El2d->eyx->d[0]*(j)] + El2d->exy->a[i+El2d->exy->d[0]*(j)])) + (dt * (El2d->betayx->a[i+El2d->betayx->d[0]*(j)] + El2d->betaxy->a[i+El2d->betaxy->d[0]*(j)]))) + El2d->sigmayx->a[i+El2d->sigmayx->d[0]*(j)]);
int nctemp712=i;
nctemp712=j*El2d->gammax->d[0]+nctemp712;
int nctemp722=i;
nctemp722=j*El2d->gammax->d[0]+nctemp722;
float nctemp729= -dt;
int nctemp731=i;
nctemp731=j*Model->tausx->d[0]+nctemp731;
float nctemp734 = nctemp729 / Model->tausx->a[nctemp731];
float nctemp726= nctemp734;
float nctemp735=exp(nctemp726);
float nctemp736 = El2d->gammax->a[nctemp722] * nctemp735;
int nctemp750=i;
nctemp750=j*Model->lambda->d[0]+nctemp750;
int nctemp761=i;
nctemp761=j*Model->tauex->d[0]+nctemp761;
int nctemp765=i;
nctemp765=j*Model->tausx->d[0]+nctemp765;
float nctemp768 = Model->tauex->a[nctemp761] / Model->tausx->a[nctemp765];
float nctemp769 = 1.0 - nctemp768;
float nctemp770 = Model->lambda->a[nctemp750] * nctemp769;
float nctemp772 = nctemp770 * dt;
int nctemp774=i;
nctemp774=j*Model->tauex->d[0]+nctemp774;
float nctemp777 = nctemp772 / Model->tauex->a[nctemp774];
int nctemp779=i;
nctemp779=j*El2d->exx->d[0]+nctemp779;
float nctemp782 = nctemp777 * El2d->exx->a[nctemp779];
float nctemp783 = nctemp736 + nctemp782;
El2d->gammax->a[nctemp712] =nctemp783;
int nctemp787=i;
nctemp787=j*El2d->gammay->d[0]+nctemp787;
int nctemp797=i;
nctemp797=j*El2d->gammay->d[0]+nctemp797;
float nctemp804= -dt;
int nctemp806=i;
nctemp806=j*Model->tausy->d[0]+nctemp806;
float nctemp809 = nctemp804 / Model->tausy->a[nctemp806];
float nctemp801= nctemp809;
float nctemp810=exp(nctemp801);
float nctemp811 = El2d->gammay->a[nctemp797] * nctemp810;
int nctemp825=i;
nctemp825=j*Model->lambda->d[0]+nctemp825;
int nctemp836=i;
nctemp836=j*Model->tauey->d[0]+nctemp836;
int nctemp840=i;
nctemp840=j*Model->tausy->d[0]+nctemp840;
float nctemp843 = Model->tauey->a[nctemp836] / Model->tausy->a[nctemp840];
float nctemp844 = 1.0 - nctemp843;
float nctemp845 = Model->lambda->a[nctemp825] * nctemp844;
float nctemp847 = nctemp845 * dt;
int nctemp849=i;
nctemp849=j*Model->tauey->d[0]+nctemp849;
float nctemp852 = nctemp847 / Model->tauey->a[nctemp849];
int nctemp854=i;
nctemp854=j*El2d->eyy->d[0]+nctemp854;
float nctemp857 = nctemp852 * El2d->eyy->a[nctemp854];
float nctemp858 = nctemp811 + nctemp857;
El2d->gammay->a[nctemp787] =nctemp858;
int nctemp862=i;
nctemp862=j*El2d->alphax->d[0]+nctemp862;
int nctemp872=i;
nctemp872=j*El2d->alphax->d[0]+nctemp872;
float nctemp879= -dt;
int nctemp881=i;
nctemp881=j*Model->chisx->d[0]+nctemp881;
float nctemp884 = nctemp879 / Model->chisx->a[nctemp881];
float nctemp876= nctemp884;
float nctemp885=exp(nctemp876);
float nctemp886 = El2d->alphax->a[nctemp872] * nctemp885;
int nctemp900=i;
nctemp900=j*Model->mu->d[0]+nctemp900;
int nctemp911=i;
nctemp911=j*Model->chiex->d[0]+nctemp911;
int nctemp915=i;
nctemp915=j*Model->chisx->d[0]+nctemp915;
float nctemp918 = Model->chiex->a[nctemp911] / Model->chisx->a[nctemp915];
float nctemp919 = 1.0 - nctemp918;
float nctemp920 = Model->mu->a[nctemp900] * nctemp919;
float nctemp922 = nctemp920 * dt;
int nctemp924=i;
nctemp924=j*Model->chiex->d[0]+nctemp924;
float nctemp927 = nctemp922 / Model->chiex->a[nctemp924];
int nctemp929=i;
nctemp929=j*El2d->exx->d[0]+nctemp929;
float nctemp932 = nctemp927 * El2d->exx->a[nctemp929];
float nctemp933 = nctemp886 + nctemp932;
El2d->alphax->a[nctemp862] =nctemp933;
int nctemp937=i;
nctemp937=j*El2d->alphay->d[0]+nctemp937;
int nctemp947=i;
nctemp947=j*El2d->alphay->d[0]+nctemp947;
float nctemp954= -dt;
int nctemp956=i;
nctemp956=j*Model->chisx->d[0]+nctemp956;
float nctemp959 = nctemp954 / Model->chisx->a[nctemp956];
float nctemp951= nctemp959;
float nctemp960=exp(nctemp951);
float nctemp961 = El2d->alphay->a[nctemp947] * nctemp960;
int nctemp975=i;
nctemp975=j*Model->mu->d[0]+nctemp975;
int nctemp986=i;
nctemp986=j*Model->chiex->d[0]+nctemp986;
int nctemp990=i;
nctemp990=j*Model->chisx->d[0]+nctemp990;
float nctemp993 = Model->chiex->a[nctemp986] / Model->chisx->a[nctemp990];
float nctemp994 = 1.0 - nctemp993;
float nctemp995 = Model->mu->a[nctemp975] * nctemp994;
float nctemp997 = nctemp995 * dt;
int nctemp999=i;
nctemp999=j*Model->chiex->d[0]+nctemp999;
float nctemp1002 = nctemp997 / Model->chiex->a[nctemp999];
int nctemp1004=i;
nctemp1004=j*El2d->eyy->d[0]+nctemp1004;
float nctemp1007 = nctemp1002 * El2d->eyy->a[nctemp1004];
float nctemp1008 = nctemp961 + nctemp1007;
El2d->alphay->a[nctemp937] =nctemp1008;
int nctemp1012=i;
nctemp1012=j*El2d->betaxy->d[0]+nctemp1012;
int nctemp1022=i;
nctemp1022=j*El2d->betaxy->d[0]+nctemp1022;
float nctemp1029= -dt;
int nctemp1031=i;
nctemp1031=j*Model->chisy->d[0]+nctemp1031;
float nctemp1034 = nctemp1029 / Model->chisy->a[nctemp1031];
float nctemp1026= nctemp1034;
float nctemp1035=exp(nctemp1026);
float nctemp1036 = El2d->betaxy->a[nctemp1022] * nctemp1035;
int nctemp1050=i;
nctemp1050=j*Model->mu->d[0]+nctemp1050;
int nctemp1061=i;
nctemp1061=j*Model->chiey->d[0]+nctemp1061;
int nctemp1065=i;
nctemp1065=j*Model->chisy->d[0]+nctemp1065;
float nctemp1068 = Model->chiey->a[nctemp1061] / Model->chisy->a[nctemp1065];
float nctemp1069 = 1.0 - nctemp1068;
float nctemp1070 = Model->mu->a[nctemp1050] * nctemp1069;
float nctemp1072 = nctemp1070 * dt;
int nctemp1074=i;
nctemp1074=j*Model->chiey->d[0]+nctemp1074;
float nctemp1077 = nctemp1072 / Model->chiey->a[nctemp1074];
int nctemp1079=i;
nctemp1079=j*El2d->exy->d[0]+nctemp1079;
float nctemp1082 = nctemp1077 * El2d->exy->a[nctemp1079];
float nctemp1083 = nctemp1036 + nctemp1082;
El2d->betaxy->a[nctemp1012] =nctemp1083;
int nctemp1087=i;
nctemp1087=j*El2d->betayx->d[0]+nctemp1087;
int nctemp1097=i;
nctemp1097=j*El2d->betayx->d[0]+nctemp1097;
float nctemp1104= -dt;
int nctemp1106=i;
nctemp1106=j*Model->chisx->d[0]+nctemp1106;
float nctemp1109 = nctemp1104 / Model->chisx->a[nctemp1106];
float nctemp1101= nctemp1109;
float nctemp1110=exp(nctemp1101);
float nctemp1111 = El2d->betayx->a[nctemp1097] * nctemp1110;
int nctemp1125=i;
nctemp1125=j*Model->mu->d[0]+nctemp1125;
int nctemp1136=i;
nctemp1136=j*Model->chiex->d[0]+nctemp1136;
int nctemp1140=i;
nctemp1140=j*Model->chisx->d[0]+nctemp1140;
float nctemp1143 = Model->chiex->a[nctemp1136] / Model->chisx->a[nctemp1140];
float nctemp1144 = 1.0 - nctemp1143;
float nctemp1145 = Model->mu->a[nctemp1125] * nctemp1144;
float nctemp1147 = nctemp1145 * dt;
int nctemp1149=i;
nctemp1149=j*Model->chiex->d[0]+nctemp1149;
float nctemp1152 = nctemp1147 / Model->chiex->a[nctemp1149];
int nctemp1154=i;
nctemp1154=j*El2d->eyx->d[0]+nctemp1154;
float nctemp1157 = nctemp1152 * El2d->eyx->a[nctemp1154];
float nctemp1158 = nctemp1111 + nctemp1157;
El2d->betayx->a[nctemp1087] =nctemp1158;
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
int nctemp1159 = (El2d->sresamp <= 0);
if(nctemp1159)
{
{
return 1;
}
}
int nctemp1168=El2d->sigmaxx->d[0];nx =nctemp1168;
int nctemp1176=El2d->sigmaxx->d[1];ny =nctemp1176;
n = (nx * ny);
int nctemp1183= it;
int nctemp1185= El2d->sresamp;
int nctemp1187=LibeMod(nctemp1183,nctemp1185);
int nctemp1180 = (nctemp1187 ==0);
if(nctemp1180)
{
{
int nctemp1192=0;
int nctemp1189 = (El2d->snpflags->a[nctemp1192] ==1);
if(nctemp1189)
{
{
nctempchar1 nctemp1201;
nctempchar1 *nctemp1200;
nctemp1201=*(nctempchar1*)(El2d->p);
int nctemp1208 = 4 * n;
nctemp1201.d[0]=nctemp1208;
nctemp1200=&nctemp1201;
tmp=nctemp1200;
int nctemp1210= El2d->fdp;
int nctemp1217 = 4 * n;
int nctemp1212= nctemp1217;
nctempchar1* nctemp1218= tmp;
int nctemp1221=LibeWrite(nctemp1210,nctemp1212,nctemp1218);
}
}
int nctemp1225=1;
int nctemp1222 = (El2d->snpflags->a[nctemp1225] ==1);
if(nctemp1222)
{
{
nctempchar1 nctemp1234;
nctempchar1 *nctemp1233;
nctemp1234=*(nctempchar1*)(El2d->vx);
int nctemp1241 = 4 * n;
nctemp1234.d[0]=nctemp1241;
nctemp1233=&nctemp1234;
tmp=nctemp1233;
int nctemp1246= El2d->fdvx;
int nctemp1253 = 4 * n;
int nctemp1248= nctemp1253;
nctempchar1* nctemp1254= tmp;
int nctemp1257=LibeWrite(nctemp1246,nctemp1248,nctemp1254);
err =nctemp1257;
}
}
int nctemp1261=2;
int nctemp1258 = (El2d->snpflags->a[nctemp1261] ==1);
if(nctemp1258)
{
{
nctempchar1 nctemp1270;
nctempchar1 *nctemp1269;
nctemp1270=*(nctempchar1*)(El2d->vy);
int nctemp1277 = 4 * n;
nctemp1270.d[0]=nctemp1277;
nctemp1269=&nctemp1270;
tmp=nctemp1269;
int nctemp1279= El2d->fdvy;
int nctemp1286 = 4 * n;
int nctemp1281= nctemp1286;
nctempchar1* nctemp1287= tmp;
int nctemp1290=LibeWrite(nctemp1279,nctemp1281,nctemp1287);
}
}
int nctemp1294=3;
int nctemp1291 = (El2d->snpflags->a[nctemp1294] ==1);
if(nctemp1291)
{
{
nctempchar1 nctemp1303;
nctempchar1 *nctemp1302;
nctemp1303=*(nctempchar1*)(El2d->sigmaxx);
int nctemp1310 = 4 * n;
nctemp1303.d[0]=nctemp1310;
nctemp1302=&nctemp1303;
tmp=nctemp1302;
int nctemp1312= El2d->fdsxx;
int nctemp1319 = 4 * n;
int nctemp1314= nctemp1319;
nctempchar1* nctemp1320= tmp;
int nctemp1323=LibeWrite(nctemp1312,nctemp1314,nctemp1320);
}
}
int nctemp1327=4;
int nctemp1324 = (El2d->snpflags->a[nctemp1327] ==1);
if(nctemp1324)
{
{
nctempchar1 nctemp1336;
nctempchar1 *nctemp1335;
nctemp1336=*(nctempchar1*)(El2d->sigmayy);
int nctemp1343 = 4 * n;
nctemp1336.d[0]=nctemp1343;
nctemp1335=&nctemp1336;
tmp=nctemp1335;
int nctemp1345= El2d->fdsyy;
int nctemp1352 = 4 * n;
int nctemp1347= nctemp1352;
nctempchar1* nctemp1353= tmp;
int nctemp1356=LibeWrite(nctemp1345,nctemp1347,nctemp1353);
}
}
int nctemp1360=5;
int nctemp1357 = (El2d->snpflags->a[nctemp1360] ==1);
if(nctemp1357)
{
{
nctempchar1 nctemp1369;
nctempchar1 *nctemp1368;
nctemp1369=*(nctempchar1*)(El2d->sigmaxy);
int nctemp1376 = 4 * n;
nctemp1369.d[0]=nctemp1376;
nctemp1368=&nctemp1369;
tmp=nctemp1368;
int nctemp1378= El2d->fdsxy;
int nctemp1385 = 4 * n;
int nctemp1380= nctemp1385;
nctempchar1* nctemp1386= tmp;
int nctemp1389=LibeWrite(nctemp1378,nctemp1380,nctemp1386);
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
int nctemp1395= l;
struct diff* nctemp1397=DiffNew(nctemp1395);
Diff =nctemp1397;
int nctemp1404=Model->nx;
nctemp1404=nctemp1404*Model->ny;
nctempfloat2 *nctemp1403;
nctemp1403=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1403->d[0]=Model->nx;
nctemp1403->d[1]=Model->ny;
nctemp1403->a=(float *)RunMalloc(sizeof(float)*nctemp1404);
tmp1=nctemp1403;
int nctemp1415=Model->nx;
nctemp1415=nctemp1415*Model->ny;
nctempfloat2 *nctemp1414;
nctemp1414=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1414->d[0]=Model->nx;
nctemp1414->d[1]=Model->ny;
nctemp1414->a=(float *)RunMalloc(sizeof(float)*nctemp1415);
tmp2=nctemp1414;
oldperc = 0.0;
ns = El2d->ts;
ne = (ns + nt);
for(i = ns;i < ne;i = (i + 1)){
{
struct diff* nctemp1421= Diff;
nctempfloat2* nctemp1423= El2d->sigmaxx;
nctempfloat2* nctemp1426= El2d->exx;
float nctemp1429= Model->dx;
int nctemp1431=DiffDxplus(nctemp1421,nctemp1423,nctemp1426,nctemp1429);
struct diff* nctemp1433= Diff;
nctempfloat2* nctemp1435= El2d->sigmaxy;
nctempfloat2* nctemp1438= El2d->exy;
float nctemp1441= Model->dx;
int nctemp1443=DiffDyminus(nctemp1433,nctemp1435,nctemp1438,nctemp1441);
struct el2d* nctemp1445= El2d;
struct model* nctemp1447= Model;
int nctemp1449=El2dvx(nctemp1445,nctemp1447);
struct diff* nctemp1451= Diff;
nctempfloat2* nctemp1453= El2d->sigmayy;
nctempfloat2* nctemp1456= El2d->eyy;
float nctemp1459= Model->dx;
int nctemp1461=DiffDyplus(nctemp1451,nctemp1453,nctemp1456,nctemp1459);
struct diff* nctemp1463= Diff;
nctempfloat2* nctemp1465= El2d->sigmaxy;
nctempfloat2* nctemp1468= El2d->eyx;
float nctemp1471= Model->dx;
int nctemp1473=DiffDxminus(nctemp1463,nctemp1465,nctemp1468,nctemp1471);
struct el2d* nctemp1475= El2d;
struct model* nctemp1477= Model;
int nctemp1479=El2dvy(nctemp1475,nctemp1477);
struct diff* nctemp1481= Diff;
nctempfloat2* nctemp1483= El2d->vx;
nctempfloat2* nctemp1486= El2d->exx;
float nctemp1489= Model->dx;
int nctemp1491=DiffDxminus(nctemp1481,nctemp1483,nctemp1486,nctemp1489);
struct diff* nctemp1493= Diff;
nctempfloat2* nctemp1495= El2d->vy;
nctempfloat2* nctemp1498= El2d->eyy;
float nctemp1501= Model->dx;
int nctemp1503=DiffDyminus(nctemp1493,nctemp1495,nctemp1498,nctemp1501);
struct diff* nctemp1505= Diff;
nctempfloat2* nctemp1507= El2d->vy;
nctempfloat2* nctemp1510= El2d->eyx;
float nctemp1513= Model->dx;
int nctemp1515=DiffDxplus(nctemp1505,nctemp1507,nctemp1510,nctemp1513);
struct diff* nctemp1517= Diff;
nctempfloat2* nctemp1519= El2d->vx;
nctempfloat2* nctemp1522= El2d->exy;
float nctemp1525= Model->dx;
int nctemp1527=DiffDyplus(nctemp1517,nctemp1519,nctemp1522,nctemp1525);
struct el2d* nctemp1529= El2d;
struct model* nctemp1531= Model;
int nctemp1533=El2dstress(nctemp1529,nctemp1531);
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
float nctemp1545=(float)(i);
int nctemp1558 = ne - ns;
int nctemp1560 = nctemp1558 - 1;
float nctemp1549=(float)(nctemp1560);
float nctemp1561 = nctemp1545 / nctemp1549;
float nctemp1562 = 1000.0 * nctemp1561;
perc =nctemp1562;
float nctemp1570 = perc - oldperc;
int nctemp1563 = (nctemp1570 >= 10.0);
if(nctemp1563)
{
{
int nctemp1579=(int)(perc);
int nctemp1583 = nctemp1579 / 10;
iperc =nctemp1583;
int nctemp1587= iperc;
int nctemp1589= 10;
int nctemp1591=LibeMod(nctemp1587,nctemp1589);
int nctemp1584 = (nctemp1591 ==0);
if(nctemp1584)
{
{
int nctemp1594= 4;
struct nctempchar1 *nctemp1598;
static struct nctempchar1 nctemp1599 = {{ 20}, (char*)"percent completed: \0"};
nctemp1598=&nctemp1599;
nctempchar1* nctemp1596= nctemp1598;
int nctemp1600=LibePuts(nctemp1594,nctemp1596);
int nctemp1602= 4;
int nctemp1604= iperc;
int nctemp1606=LibePuti(nctemp1602,nctemp1604);
int nctemp1608= 4;
struct nctempchar1 *nctemp1612;
static struct nctempchar1 nctemp1613 = {{ 3}, (char*)"\n\0"};
nctemp1612=&nctemp1613;
nctempchar1* nctemp1610= nctemp1612;
int nctemp1614=LibePuts(nctemp1608,nctemp1610);
int nctemp1616= 4;
int nctemp1618=LibeFlush(nctemp1616);
}
}
oldperc = perc;
}
}
int nctemp1619 = (Rec !=0);
if(nctemp1619)
{
{
struct rec* nctemp1624= Rec;
int nctemp1626= i;
nctempfloat2* nctemp1628= El2d->p;
dtype =1;
int nctemp1631= dtype;
int nctemp1636=RecReceiver(nctemp1624,nctemp1626,nctemp1628,nctemp1631);
struct rec* nctemp1638= Rec;
int nctemp1640= i;
nctempfloat2* nctemp1642= El2d->vx;
dtype =2;
int nctemp1645= dtype;
int nctemp1650=RecReceiver(nctemp1638,nctemp1640,nctemp1642,nctemp1645);
struct rec* nctemp1652= Rec;
int nctemp1654= i;
nctempfloat2* nctemp1656= El2d->vy;
dtype =3;
int nctemp1659= dtype;
int nctemp1664=RecReceiver(nctemp1652,nctemp1654,nctemp1656,nctemp1659);
struct rec* nctemp1666= Rec;
int nctemp1668= i;
nctempfloat2* nctemp1670= El2d->sigmaxx;
dtype =4;
int nctemp1673= dtype;
int nctemp1678=RecReceiver(nctemp1666,nctemp1668,nctemp1670,nctemp1673);
struct rec* nctemp1680= Rec;
int nctemp1682= i;
nctempfloat2* nctemp1684= El2d->sigmayy;
dtype =5;
int nctemp1687= dtype;
int nctemp1692=RecReceiver(nctemp1680,nctemp1682,nctemp1684,nctemp1687);
struct rec* nctemp1694= Rec;
int nctemp1696= i;
nctempfloat2* nctemp1698= El2d->sigmaxy;
dtype =6;
int nctemp1701= dtype;
int nctemp1706=RecReceiver(nctemp1694,nctemp1696,nctemp1698,nctemp1701);
}
}
struct el2d* nctemp1708= El2d;
int nctemp1710= i;
int nctemp1712=El2dSnap(nctemp1708,nctemp1710);
}
}
El2d->ts = (El2d->ts + ne);
return 1;
}
}
};