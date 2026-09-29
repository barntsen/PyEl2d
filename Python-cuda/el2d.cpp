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
nctempfloat2 *e;
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
El2d->gammax=nctemp155;
int nctemp167=Model->nx;
nctemp167=nctemp167*Model->ny;
nctempfloat2 *nctemp166;
nctemp166=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp166->d[0]=Model->nx;
nctemp166->d[1]=Model->ny;
nctemp166->a=(float *)RunMalloc(sizeof(float)*nctemp167);
El2d->gammay=nctemp166;
int nctemp178=Model->nx;
nctemp178=nctemp178*Model->ny;
nctempfloat2 *nctemp177;
nctemp177=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp177->d[0]=Model->nx;
nctemp177->d[1]=Model->ny;
nctemp177->a=(float *)RunMalloc(sizeof(float)*nctemp178);
El2d->alphax=nctemp177;
int nctemp189=Model->nx;
nctemp189=nctemp189*Model->ny;
nctempfloat2 *nctemp188;
nctemp188=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp188->d[0]=Model->nx;
nctemp188->d[1]=Model->ny;
nctemp188->a=(float *)RunMalloc(sizeof(float)*nctemp189);
El2d->alphay=nctemp188;
int nctemp200=Model->nx;
nctemp200=nctemp200*Model->ny;
nctempfloat2 *nctemp199;
nctemp199=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp199->d[0]=Model->nx;
nctemp199->d[1]=Model->ny;
nctemp199->a=(float *)RunMalloc(sizeof(float)*nctemp200);
El2d->betaxy=nctemp199;
int nctemp211=Model->nx;
nctemp211=nctemp211*Model->ny;
nctempfloat2 *nctemp210;
nctemp210=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp210->d[0]=Model->nx;
nctemp210->d[1]=Model->ny;
nctemp210->a=(float *)RunMalloc(sizeof(float)*nctemp211);
El2d->betayx=nctemp210;
int nctemp222=Model->nx;
nctemp222=nctemp222*Model->ny;
nctempfloat2 *nctemp221;
nctemp221=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp221->d[0]=Model->nx;
nctemp221->d[1]=Model->ny;
nctemp221->a=(float *)RunMalloc(sizeof(float)*nctemp222);
El2d->thetaxx=nctemp221;
int nctemp233=Model->nx;
nctemp233=nctemp233*Model->ny;
nctempfloat2 *nctemp232;
nctemp232=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp232->d[0]=Model->nx;
nctemp232->d[1]=Model->ny;
nctemp232->a=(float *)RunMalloc(sizeof(float)*nctemp233);
El2d->thetayy=nctemp232;
int nctemp244=Model->nx;
nctemp244=nctemp244*Model->ny;
nctempfloat2 *nctemp243;
nctemp243=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp243->d[0]=Model->nx;
nctemp243->d[1]=Model->ny;
nctemp243->a=(float *)RunMalloc(sizeof(float)*nctemp244);
El2d->thetayx=nctemp243;
int nctemp255=Model->nx;
nctemp255=nctemp255*Model->ny;
nctempfloat2 *nctemp254;
nctemp254=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp254->d[0]=Model->nx;
nctemp254->d[1]=Model->ny;
nctemp254->a=(float *)RunMalloc(sizeof(float)*nctemp255);
El2d->thetaxy=nctemp254;
El2d->ts = 0;
int nctemp263=0;
int nctemp260 = (El2d->snpflags->a[nctemp263] ==1);
if(nctemp260)
{
{
struct nctempchar1 *nctemp272;
static struct nctempchar1 nctemp273 = {{ 10}, (char*)"snp-p.bin\0"};
nctemp272=&nctemp273;
nctempchar1* nctemp270= nctemp272;
struct nctempchar1 *nctemp276;
static struct nctempchar1 nctemp277 = {{ 2}, (char*)"w\0"};
nctemp276=&nctemp277;
nctempchar1* nctemp274= nctemp276;
int nctemp278=LibeOpen(nctemp270,nctemp274);
El2d->fdp =nctemp278;
}
}
int nctemp282=1;
int nctemp279 = (El2d->snpflags->a[nctemp282] ==1);
if(nctemp279)
{
{
struct nctempchar1 *nctemp291;
static struct nctempchar1 nctemp292 = {{ 11}, (char*)"snp-vx.bin\0"};
nctemp291=&nctemp292;
nctempchar1* nctemp289= nctemp291;
struct nctempchar1 *nctemp295;
static struct nctempchar1 nctemp296 = {{ 2}, (char*)"w\0"};
nctemp295=&nctemp296;
nctempchar1* nctemp293= nctemp295;
int nctemp297=LibeOpen(nctemp289,nctemp293);
El2d->fdvx =nctemp297;
}
}
int nctemp301=2;
int nctemp298 = (El2d->snpflags->a[nctemp301] ==1);
if(nctemp298)
{
{
struct nctempchar1 *nctemp310;
static struct nctempchar1 nctemp311 = {{ 11}, (char*)"snp-vy.bin\0"};
nctemp310=&nctemp311;
nctempchar1* nctemp308= nctemp310;
struct nctempchar1 *nctemp314;
static struct nctempchar1 nctemp315 = {{ 2}, (char*)"w\0"};
nctemp314=&nctemp315;
nctempchar1* nctemp312= nctemp314;
int nctemp316=LibeOpen(nctemp308,nctemp312);
El2d->fdvy =nctemp316;
}
}
int nctemp320=3;
int nctemp317 = (El2d->snpflags->a[nctemp320] ==1);
if(nctemp317)
{
{
struct nctempchar1 *nctemp329;
static struct nctempchar1 nctemp330 = {{ 12}, (char*)"snp-sxx.bin\0"};
nctemp329=&nctemp330;
nctempchar1* nctemp327= nctemp329;
struct nctempchar1 *nctemp333;
static struct nctempchar1 nctemp334 = {{ 2}, (char*)"w\0"};
nctemp333=&nctemp334;
nctempchar1* nctemp331= nctemp333;
int nctemp335=LibeOpen(nctemp327,nctemp331);
El2d->fdsxx =nctemp335;
}
}
int nctemp339=4;
int nctemp336 = (El2d->snpflags->a[nctemp339] ==1);
if(nctemp336)
{
{
struct nctempchar1 *nctemp348;
static struct nctempchar1 nctemp349 = {{ 12}, (char*)"snp-syy.bin\0"};
nctemp348=&nctemp349;
nctempchar1* nctemp346= nctemp348;
struct nctempchar1 *nctemp352;
static struct nctempchar1 nctemp353 = {{ 2}, (char*)"w\0"};
nctemp352=&nctemp353;
nctempchar1* nctemp350= nctemp352;
int nctemp354=LibeOpen(nctemp346,nctemp350);
El2d->fdsyy =nctemp354;
}
}
int nctemp358=5;
int nctemp355 = (El2d->snpflags->a[nctemp358] ==1);
if(nctemp355)
{
{
struct nctempchar1 *nctemp367;
static struct nctempchar1 nctemp368 = {{ 12}, (char*)"snp-sxy.bin\0"};
nctemp367=&nctemp368;
nctempchar1* nctemp365= nctemp367;
struct nctempchar1 *nctemp371;
static struct nctempchar1 nctemp372 = {{ 2}, (char*)"w\0"};
nctemp371=&nctemp372;
nctempchar1* nctemp369= nctemp371;
int nctemp373=LibeOpen(nctemp365,nctemp369);
El2d->fdsxy =nctemp373;
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
int nctemp381=i;
int nctemp375=nx-nctemp381;
j =0;
int nctemp388=j;
int nctemp382=ny-nctemp388;
int nctemp389=nctemp375*nctemp382;
for(nctempno=blockIdx.x*blockDim.x + threadIdx.x; nctempno<nctemp389;nctempno+=blockDim.x*gridDim.x){
i=(nctempno/(1))%nctemp375+nctemp381;
j=(nctempno/(1*nctemp375))+nctemp388;
{
{
El2d->vx->a[i+El2d->vx->d[0]*(j)] = ((((dt * Model->nu->a[i+Model->nu->d[0]*(j)]) * (El2d->exx->a[i+El2d->exx->d[0]*(j)] + El2d->exy->a[i+El2d->exy->d[0]*(j)])) + (dt * (El2d->thetaxx->a[i+El2d->thetaxx->d[0]*(j)] + El2d->thetaxy->a[i+El2d->thetaxy->d[0]*(j)]))) + El2d->vx->a[i+El2d->vx->d[0]*(j)]);
int nctemp393=i;
nctemp393=j*El2d->thetaxx->d[0]+nctemp393;
int nctemp403=i;
nctemp403=j*El2d->thetaxx->d[0]+nctemp403;
float nctemp410= -dt;
int nctemp412=i;
nctemp412=j*Model->etasx->d[0]+nctemp412;
float nctemp415 = nctemp410 / Model->etasx->a[nctemp412];
float nctemp407= nctemp415;
float nctemp416=exp(nctemp407);
float nctemp417 = El2d->thetaxx->a[nctemp403] * nctemp416;
int nctemp431=i;
nctemp431=j*Model->nu->d[0]+nctemp431;
int nctemp442=i;
nctemp442=j*Model->etaex->d[0]+nctemp442;
int nctemp446=i;
nctemp446=j*Model->etasx->d[0]+nctemp446;
float nctemp449 = Model->etaex->a[nctemp442] / Model->etasx->a[nctemp446];
float nctemp450 = 1.0 - nctemp449;
float nctemp451 = Model->nu->a[nctemp431] * nctemp450;
float nctemp453 = nctemp451 * dt;
int nctemp455=i;
nctemp455=j*Model->etaex->d[0]+nctemp455;
float nctemp458 = nctemp453 / Model->etaex->a[nctemp455];
int nctemp460=i;
nctemp460=j*El2d->exx->d[0]+nctemp460;
float nctemp463 = nctemp458 * El2d->exx->a[nctemp460];
float nctemp464 = nctemp417 + nctemp463;
El2d->thetaxx->a[nctemp393] =nctemp464;
int nctemp468=i;
nctemp468=j*El2d->thetaxy->d[0]+nctemp468;
int nctemp478=i;
nctemp478=j*El2d->thetaxy->d[0]+nctemp478;
float nctemp485= -dt;
int nctemp487=i;
nctemp487=j*Model->etasy->d[0]+nctemp487;
float nctemp490 = nctemp485 / Model->etasy->a[nctemp487];
float nctemp482= nctemp490;
float nctemp491=exp(nctemp482);
float nctemp492 = El2d->thetaxy->a[nctemp478] * nctemp491;
int nctemp506=i;
nctemp506=j*Model->nu->d[0]+nctemp506;
int nctemp517=i;
nctemp517=j*Model->etaey->d[0]+nctemp517;
int nctemp521=i;
nctemp521=j*Model->etasy->d[0]+nctemp521;
float nctemp524 = Model->etaey->a[nctemp517] / Model->etasy->a[nctemp521];
float nctemp525 = 1.0 - nctemp524;
float nctemp526 = Model->nu->a[nctemp506] * nctemp525;
float nctemp528 = nctemp526 * dt;
int nctemp530=i;
nctemp530=j*Model->etaey->d[0]+nctemp530;
float nctemp533 = nctemp528 / Model->etaey->a[nctemp530];
int nctemp535=i;
nctemp535=j*El2d->exy->d[0]+nctemp535;
float nctemp538 = nctemp533 * El2d->exy->a[nctemp535];
float nctemp539 = nctemp492 + nctemp538;
El2d->thetaxy->a[nctemp468] =nctemp539;
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
int nctemp546=i;
int nctemp540=nx-nctemp546;
j =0;
int nctemp553=j;
int nctemp547=ny-nctemp553;
int nctemp554=nctemp540*nctemp547;
for(nctempno=blockIdx.x*blockDim.x + threadIdx.x; nctempno<nctemp554;nctempno+=blockDim.x*gridDim.x){
i=(nctempno/(1))%nctemp540+nctemp546;
j=(nctempno/(1*nctemp540))+nctemp553;
{
{
El2d->vy->a[i+El2d->vy->d[0]*(j)] = ((((dt * Model->nu->a[i+Model->nu->d[0]*(j)]) * (El2d->eyy->a[i+El2d->eyy->d[0]*(j)] + El2d->eyx->a[i+El2d->eyx->d[0]*(j)])) + (dt * (El2d->thetayy->a[i+El2d->thetayy->d[0]*(j)] + El2d->thetayx->a[i+El2d->thetayx->d[0]*(j)]))) + El2d->vy->a[i+El2d->vy->d[0]*(j)]);
int nctemp558=i;
nctemp558=j*El2d->thetayy->d[0]+nctemp558;
int nctemp568=i;
nctemp568=j*El2d->thetayy->d[0]+nctemp568;
float nctemp575= -dt;
int nctemp577=i;
nctemp577=j*Model->etasy->d[0]+nctemp577;
float nctemp580 = nctemp575 / Model->etasy->a[nctemp577];
float nctemp572= nctemp580;
float nctemp581=exp(nctemp572);
float nctemp582 = El2d->thetayy->a[nctemp568] * nctemp581;
int nctemp596=i;
nctemp596=j*Model->nu->d[0]+nctemp596;
int nctemp607=i;
nctemp607=j*Model->etaey->d[0]+nctemp607;
int nctemp611=i;
nctemp611=j*Model->etasy->d[0]+nctemp611;
float nctemp614 = Model->etaey->a[nctemp607] / Model->etasy->a[nctemp611];
float nctemp615 = 1.0 - nctemp614;
float nctemp616 = Model->nu->a[nctemp596] * nctemp615;
float nctemp618 = nctemp616 * dt;
int nctemp620=i;
nctemp620=j*Model->etaey->d[0]+nctemp620;
float nctemp623 = nctemp618 / Model->etaey->a[nctemp620];
int nctemp625=i;
nctemp625=j*El2d->eyy->d[0]+nctemp625;
float nctemp628 = nctemp623 * El2d->eyy->a[nctemp625];
float nctemp629 = nctemp582 + nctemp628;
El2d->thetayy->a[nctemp558] =nctemp629;
int nctemp633=i;
nctemp633=j*El2d->thetayx->d[0]+nctemp633;
int nctemp643=i;
nctemp643=j*El2d->thetayx->d[0]+nctemp643;
float nctemp650= -dt;
int nctemp652=i;
nctemp652=j*Model->etasx->d[0]+nctemp652;
float nctemp655 = nctemp650 / Model->etasx->a[nctemp652];
float nctemp647= nctemp655;
float nctemp656=exp(nctemp647);
float nctemp657 = El2d->thetayx->a[nctemp643] * nctemp656;
int nctemp671=i;
nctemp671=j*Model->nu->d[0]+nctemp671;
int nctemp682=i;
nctemp682=j*Model->etaex->d[0]+nctemp682;
int nctemp686=i;
nctemp686=j*Model->etasx->d[0]+nctemp686;
float nctemp689 = Model->etaex->a[nctemp682] / Model->etasx->a[nctemp686];
float nctemp690 = 1.0 - nctemp689;
float nctemp691 = Model->nu->a[nctemp671] * nctemp690;
float nctemp693 = nctemp691 * dt;
int nctemp695=i;
nctemp695=j*Model->etaex->d[0]+nctemp695;
float nctemp698 = nctemp693 / Model->etaex->a[nctemp695];
int nctemp700=i;
nctemp700=j*El2d->eyx->d[0]+nctemp700;
float nctemp703 = nctemp698 * El2d->eyx->a[nctemp700];
float nctemp704 = nctemp657 + nctemp703;
El2d->thetayx->a[nctemp633] =nctemp704;
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
int nctemp711=i;
int nctemp705=nx-nctemp711;
j =0;
int nctemp718=j;
int nctemp712=ny-nctemp718;
int nctemp719=nctemp705*nctemp712;
for(nctempno=blockIdx.x*blockDim.x + threadIdx.x; nctempno<nctemp719;nctempno+=blockDim.x*gridDim.x){
i=(nctempno/(1))%nctemp705+nctemp711;
j=(nctempno/(1*nctemp705))+nctemp718;
{
{
El2d->sigmaxx->a[i+El2d->sigmaxx->d[0]*(j)] = (((((Model->dt * Model->lambda->a[i+Model->lambda->d[0]*(j)]) * (El2d->exx->a[i+El2d->exx->d[0]*(j)] + El2d->eyy->a[i+El2d->eyy->d[0]*(j)])) + (((Model->dt * 2.0) * Model->mu->a[i+Model->mu->d[0]*(j)]) * El2d->exx->a[i+El2d->exx->d[0]*(j)])) + (dt * ((El2d->gammax->a[i+El2d->gammax->d[0]*(j)] + El2d->gammay->a[i+El2d->gammay->d[0]*(j)]) + El2d->alphax->a[i+El2d->alphax->d[0]*(j)]))) + El2d->sigmaxx->a[i+El2d->sigmaxx->d[0]*(j)]);
El2d->sigmayy->a[i+El2d->sigmayy->d[0]*(j)] = (((((Model->dt * Model->lambda->a[i+Model->lambda->d[0]*(j)]) * (El2d->exx->a[i+El2d->exx->d[0]*(j)] + El2d->eyy->a[i+El2d->eyy->d[0]*(j)])) + (((Model->dt * 2.0) * Model->mu->a[i+Model->mu->d[0]*(j)]) * El2d->eyy->a[i+El2d->eyy->d[0]*(j)])) + (dt * ((El2d->gammax->a[i+El2d->gammax->d[0]*(j)] + El2d->gammay->a[i+El2d->gammay->d[0]*(j)]) + El2d->alphay->a[i+El2d->alphay->d[0]*(j)]))) + El2d->sigmayy->a[i+El2d->sigmayy->d[0]*(j)]);
El2d->p->a[i+El2d->p->d[0]*(j)] = (0.5 * (El2d->sigmaxx->a[i+El2d->sigmaxx->d[0]*(j)] + El2d->sigmayy->a[i+El2d->sigmayy->d[0]*(j)]));
El2d->sigmaxy->a[i+El2d->sigmaxy->d[0]*(j)] = ((((Model->dt * Model->mu->a[i+Model->mu->d[0]*(j)]) * (El2d->exy->a[i+El2d->exy->d[0]*(j)] + El2d->eyx->a[i+El2d->eyx->d[0]*(j)])) + (dt * (El2d->betaxy->a[i+El2d->betaxy->d[0]*(j)] + El2d->betayx->a[i+El2d->betayx->d[0]*(j)]))) + El2d->sigmaxy->a[i+El2d->sigmaxy->d[0]*(j)]);
El2d->sigmayx->a[i+El2d->sigmayx->d[0]*(j)] = ((((Model->dt * Model->mu->a[i+Model->mu->d[0]*(j)]) * (El2d->eyx->a[i+El2d->eyx->d[0]*(j)] + El2d->exy->a[i+El2d->exy->d[0]*(j)])) + (dt * (El2d->betayx->a[i+El2d->betayx->d[0]*(j)] + El2d->betaxy->a[i+El2d->betaxy->d[0]*(j)]))) + El2d->sigmayx->a[i+El2d->sigmayx->d[0]*(j)]);
int nctemp723=i;
nctemp723=j*El2d->gammax->d[0]+nctemp723;
int nctemp733=i;
nctemp733=j*El2d->gammax->d[0]+nctemp733;
float nctemp740= -dt;
int nctemp742=i;
nctemp742=j*Model->tausx->d[0]+nctemp742;
float nctemp745 = nctemp740 / Model->tausx->a[nctemp742];
float nctemp737= nctemp745;
float nctemp746=exp(nctemp737);
float nctemp747 = El2d->gammax->a[nctemp733] * nctemp746;
int nctemp761=i;
nctemp761=j*Model->lambda->d[0]+nctemp761;
int nctemp772=i;
nctemp772=j*Model->tauex->d[0]+nctemp772;
int nctemp776=i;
nctemp776=j*Model->tausx->d[0]+nctemp776;
float nctemp779 = Model->tauex->a[nctemp772] / Model->tausx->a[nctemp776];
float nctemp780 = 1.0 - nctemp779;
float nctemp781 = Model->lambda->a[nctemp761] * nctemp780;
float nctemp783 = nctemp781 * dt;
int nctemp785=i;
nctemp785=j*Model->tauex->d[0]+nctemp785;
float nctemp788 = nctemp783 / Model->tauex->a[nctemp785];
int nctemp790=i;
nctemp790=j*El2d->exx->d[0]+nctemp790;
float nctemp793 = nctemp788 * El2d->exx->a[nctemp790];
float nctemp794 = nctemp747 + nctemp793;
El2d->gammax->a[nctemp723] =nctemp794;
int nctemp798=i;
nctemp798=j*El2d->gammay->d[0]+nctemp798;
int nctemp808=i;
nctemp808=j*El2d->gammay->d[0]+nctemp808;
float nctemp815= -dt;
int nctemp817=i;
nctemp817=j*Model->tausy->d[0]+nctemp817;
float nctemp820 = nctemp815 / Model->tausy->a[nctemp817];
float nctemp812= nctemp820;
float nctemp821=exp(nctemp812);
float nctemp822 = El2d->gammay->a[nctemp808] * nctemp821;
int nctemp836=i;
nctemp836=j*Model->lambda->d[0]+nctemp836;
int nctemp847=i;
nctemp847=j*Model->tauey->d[0]+nctemp847;
int nctemp851=i;
nctemp851=j*Model->tausy->d[0]+nctemp851;
float nctemp854 = Model->tauey->a[nctemp847] / Model->tausy->a[nctemp851];
float nctemp855 = 1.0 - nctemp854;
float nctemp856 = Model->lambda->a[nctemp836] * nctemp855;
float nctemp858 = nctemp856 * dt;
int nctemp860=i;
nctemp860=j*Model->tauey->d[0]+nctemp860;
float nctemp863 = nctemp858 / Model->tauey->a[nctemp860];
int nctemp865=i;
nctemp865=j*El2d->eyy->d[0]+nctemp865;
float nctemp868 = nctemp863 * El2d->eyy->a[nctemp865];
float nctemp869 = nctemp822 + nctemp868;
El2d->gammay->a[nctemp798] =nctemp869;
int nctemp873=i;
nctemp873=j*El2d->alphax->d[0]+nctemp873;
int nctemp883=i;
nctemp883=j*El2d->alphax->d[0]+nctemp883;
float nctemp890= -dt;
int nctemp892=i;
nctemp892=j*Model->chisx->d[0]+nctemp892;
float nctemp895 = nctemp890 / Model->chisx->a[nctemp892];
float nctemp887= nctemp895;
float nctemp896=exp(nctemp887);
float nctemp897 = El2d->alphax->a[nctemp883] * nctemp896;
int nctemp911=i;
nctemp911=j*Model->mu->d[0]+nctemp911;
int nctemp922=i;
nctemp922=j*Model->chiex->d[0]+nctemp922;
int nctemp926=i;
nctemp926=j*Model->chisx->d[0]+nctemp926;
float nctemp929 = Model->chiex->a[nctemp922] / Model->chisx->a[nctemp926];
float nctemp930 = 1.0 - nctemp929;
float nctemp931 = Model->mu->a[nctemp911] * nctemp930;
float nctemp933 = nctemp931 * dt;
int nctemp935=i;
nctemp935=j*Model->chiex->d[0]+nctemp935;
float nctemp938 = nctemp933 / Model->chiex->a[nctemp935];
int nctemp940=i;
nctemp940=j*El2d->exx->d[0]+nctemp940;
float nctemp943 = nctemp938 * El2d->exx->a[nctemp940];
float nctemp944 = nctemp897 + nctemp943;
El2d->alphax->a[nctemp873] =nctemp944;
int nctemp948=i;
nctemp948=j*El2d->alphay->d[0]+nctemp948;
int nctemp958=i;
nctemp958=j*El2d->alphay->d[0]+nctemp958;
float nctemp965= -dt;
int nctemp967=i;
nctemp967=j*Model->chisx->d[0]+nctemp967;
float nctemp970 = nctemp965 / Model->chisx->a[nctemp967];
float nctemp962= nctemp970;
float nctemp971=exp(nctemp962);
float nctemp972 = El2d->alphay->a[nctemp958] * nctemp971;
int nctemp986=i;
nctemp986=j*Model->mu->d[0]+nctemp986;
int nctemp997=i;
nctemp997=j*Model->chiex->d[0]+nctemp997;
int nctemp1001=i;
nctemp1001=j*Model->chisx->d[0]+nctemp1001;
float nctemp1004 = Model->chiex->a[nctemp997] / Model->chisx->a[nctemp1001];
float nctemp1005 = 1.0 - nctemp1004;
float nctemp1006 = Model->mu->a[nctemp986] * nctemp1005;
float nctemp1008 = nctemp1006 * dt;
int nctemp1010=i;
nctemp1010=j*Model->chiex->d[0]+nctemp1010;
float nctemp1013 = nctemp1008 / Model->chiex->a[nctemp1010];
int nctemp1015=i;
nctemp1015=j*El2d->eyy->d[0]+nctemp1015;
float nctemp1018 = nctemp1013 * El2d->eyy->a[nctemp1015];
float nctemp1019 = nctemp972 + nctemp1018;
El2d->alphay->a[nctemp948] =nctemp1019;
int nctemp1023=i;
nctemp1023=j*El2d->betaxy->d[0]+nctemp1023;
int nctemp1033=i;
nctemp1033=j*El2d->betaxy->d[0]+nctemp1033;
float nctemp1040= -dt;
int nctemp1042=i;
nctemp1042=j*Model->chisy->d[0]+nctemp1042;
float nctemp1045 = nctemp1040 / Model->chisy->a[nctemp1042];
float nctemp1037= nctemp1045;
float nctemp1046=exp(nctemp1037);
float nctemp1047 = El2d->betaxy->a[nctemp1033] * nctemp1046;
int nctemp1061=i;
nctemp1061=j*Model->mu->d[0]+nctemp1061;
int nctemp1072=i;
nctemp1072=j*Model->chiey->d[0]+nctemp1072;
int nctemp1076=i;
nctemp1076=j*Model->chisy->d[0]+nctemp1076;
float nctemp1079 = Model->chiey->a[nctemp1072] / Model->chisy->a[nctemp1076];
float nctemp1080 = 1.0 - nctemp1079;
float nctemp1081 = Model->mu->a[nctemp1061] * nctemp1080;
float nctemp1083 = nctemp1081 * dt;
int nctemp1085=i;
nctemp1085=j*Model->chiey->d[0]+nctemp1085;
float nctemp1088 = nctemp1083 / Model->chiey->a[nctemp1085];
int nctemp1090=i;
nctemp1090=j*El2d->exy->d[0]+nctemp1090;
float nctemp1093 = nctemp1088 * El2d->exy->a[nctemp1090];
float nctemp1094 = nctemp1047 + nctemp1093;
El2d->betaxy->a[nctemp1023] =nctemp1094;
int nctemp1098=i;
nctemp1098=j*El2d->betayx->d[0]+nctemp1098;
int nctemp1108=i;
nctemp1108=j*El2d->betayx->d[0]+nctemp1108;
float nctemp1115= -dt;
int nctemp1117=i;
nctemp1117=j*Model->chisx->d[0]+nctemp1117;
float nctemp1120 = nctemp1115 / Model->chisx->a[nctemp1117];
float nctemp1112= nctemp1120;
float nctemp1121=exp(nctemp1112);
float nctemp1122 = El2d->betayx->a[nctemp1108] * nctemp1121;
int nctemp1136=i;
nctemp1136=j*Model->mu->d[0]+nctemp1136;
int nctemp1147=i;
nctemp1147=j*Model->chiex->d[0]+nctemp1147;
int nctemp1151=i;
nctemp1151=j*Model->chisx->d[0]+nctemp1151;
float nctemp1154 = Model->chiex->a[nctemp1147] / Model->chisx->a[nctemp1151];
float nctemp1155 = 1.0 - nctemp1154;
float nctemp1156 = Model->mu->a[nctemp1136] * nctemp1155;
float nctemp1158 = nctemp1156 * dt;
int nctemp1160=i;
nctemp1160=j*Model->chiex->d[0]+nctemp1160;
float nctemp1163 = nctemp1158 / Model->chiex->a[nctemp1160];
int nctemp1165=i;
nctemp1165=j*El2d->eyx->d[0]+nctemp1165;
float nctemp1168 = nctemp1163 * El2d->eyx->a[nctemp1165];
float nctemp1169 = nctemp1122 + nctemp1168;
El2d->betayx->a[nctemp1098] =nctemp1169;
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
int nctemp1170 = (El2d->sresamp <= 0);
if(nctemp1170)
{
{
return 1;
}
}
int nctemp1179=El2d->sigmaxx->d[0];nx =nctemp1179;
int nctemp1187=El2d->sigmaxx->d[1];ny =nctemp1187;
n = (nx * ny);
int nctemp1194= it;
int nctemp1196= El2d->sresamp;
int nctemp1198=LibeMod(nctemp1194,nctemp1196);
int nctemp1191 = (nctemp1198 ==0);
if(nctemp1191)
{
{
int nctemp1203=0;
int nctemp1200 = (El2d->snpflags->a[nctemp1203] ==1);
if(nctemp1200)
{
{
nctempchar1 nctemp1212;
nctempchar1 *nctemp1211;
nctemp1212=*(nctempchar1*)(El2d->p);
int nctemp1219 = 4 * n;
nctemp1212.d[0]=nctemp1219;
nctemp1211=&nctemp1212;
tmp=nctemp1211;
int nctemp1221= El2d->fdp;
int nctemp1228 = 4 * n;
int nctemp1223= nctemp1228;
nctempchar1* nctemp1229= tmp;
int nctemp1232=LibeWrite(nctemp1221,nctemp1223,nctemp1229);
}
}
int nctemp1236=1;
int nctemp1233 = (El2d->snpflags->a[nctemp1236] ==1);
if(nctemp1233)
{
{
nctempchar1 nctemp1245;
nctempchar1 *nctemp1244;
nctemp1245=*(nctempchar1*)(El2d->vx);
int nctemp1252 = 4 * n;
nctemp1245.d[0]=nctemp1252;
nctemp1244=&nctemp1245;
tmp=nctemp1244;
int nctemp1257= El2d->fdvx;
int nctemp1264 = 4 * n;
int nctemp1259= nctemp1264;
nctempchar1* nctemp1265= tmp;
int nctemp1268=LibeWrite(nctemp1257,nctemp1259,nctemp1265);
err =nctemp1268;
}
}
int nctemp1272=2;
int nctemp1269 = (El2d->snpflags->a[nctemp1272] ==1);
if(nctemp1269)
{
{
nctempchar1 nctemp1281;
nctempchar1 *nctemp1280;
nctemp1281=*(nctempchar1*)(El2d->vy);
int nctemp1288 = 4 * n;
nctemp1281.d[0]=nctemp1288;
nctemp1280=&nctemp1281;
tmp=nctemp1280;
int nctemp1290= El2d->fdvy;
int nctemp1297 = 4 * n;
int nctemp1292= nctemp1297;
nctempchar1* nctemp1298= tmp;
int nctemp1301=LibeWrite(nctemp1290,nctemp1292,nctemp1298);
}
}
int nctemp1305=3;
int nctemp1302 = (El2d->snpflags->a[nctemp1305] ==1);
if(nctemp1302)
{
{
nctempchar1 nctemp1314;
nctempchar1 *nctemp1313;
nctemp1314=*(nctempchar1*)(El2d->sigmaxx);
int nctemp1321 = 4 * n;
nctemp1314.d[0]=nctemp1321;
nctemp1313=&nctemp1314;
tmp=nctemp1313;
int nctemp1323= El2d->fdsxx;
int nctemp1330 = 4 * n;
int nctemp1325= nctemp1330;
nctempchar1* nctemp1331= tmp;
int nctemp1334=LibeWrite(nctemp1323,nctemp1325,nctemp1331);
}
}
int nctemp1338=4;
int nctemp1335 = (El2d->snpflags->a[nctemp1338] ==1);
if(nctemp1335)
{
{
nctempchar1 nctemp1347;
nctempchar1 *nctemp1346;
nctemp1347=*(nctempchar1*)(El2d->sigmayy);
int nctemp1354 = 4 * n;
nctemp1347.d[0]=nctemp1354;
nctemp1346=&nctemp1347;
tmp=nctemp1346;
int nctemp1356= El2d->fdsyy;
int nctemp1363 = 4 * n;
int nctemp1358= nctemp1363;
nctempchar1* nctemp1364= tmp;
int nctemp1367=LibeWrite(nctemp1356,nctemp1358,nctemp1364);
}
}
int nctemp1371=5;
int nctemp1368 = (El2d->snpflags->a[nctemp1371] ==1);
if(nctemp1368)
{
{
nctempchar1 nctemp1380;
nctempchar1 *nctemp1379;
nctemp1380=*(nctempchar1*)(El2d->sigmaxy);
int nctemp1387 = 4 * n;
nctemp1380.d[0]=nctemp1387;
nctemp1379=&nctemp1380;
tmp=nctemp1379;
int nctemp1389= El2d->fdsxy;
int nctemp1396 = 4 * n;
int nctemp1391= nctemp1396;
nctempchar1* nctemp1397= tmp;
int nctemp1400=LibeWrite(nctemp1389,nctemp1391,nctemp1397);
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
int nctemp1406= l;
struct diff* nctemp1408=DiffNew(nctemp1406);
Diff =nctemp1408;
int nctemp1415=Model->nx;
nctemp1415=nctemp1415*Model->ny;
nctempfloat2 *nctemp1414;
nctemp1414=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1414->d[0]=Model->nx;
nctemp1414->d[1]=Model->ny;
nctemp1414->a=(float *)RunMalloc(sizeof(float)*nctemp1415);
tmp1=nctemp1414;
int nctemp1426=Model->nx;
nctemp1426=nctemp1426*Model->ny;
nctempfloat2 *nctemp1425;
nctemp1425=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1425->d[0]=Model->nx;
nctemp1425->d[1]=Model->ny;
nctemp1425->a=(float *)RunMalloc(sizeof(float)*nctemp1426);
tmp2=nctemp1425;
oldperc = 0.0;
ns = El2d->ts;
ne = (ns + nt);
for(i = ns;i < ne;i = (i + 1)){
{
struct diff* nctemp1432= Diff;
nctempfloat2* nctemp1434= El2d->sigmaxx;
nctempfloat2* nctemp1437= El2d->exx;
float nctemp1440= Model->dx;
int nctemp1442=DiffDxplus(nctemp1432,nctemp1434,nctemp1437,nctemp1440);
struct diff* nctemp1444= Diff;
nctempfloat2* nctemp1446= El2d->sigmaxy;
nctempfloat2* nctemp1449= El2d->exy;
float nctemp1452= Model->dx;
int nctemp1454=DiffDyminus(nctemp1444,nctemp1446,nctemp1449,nctemp1452);
struct el2d* nctemp1456= El2d;
struct model* nctemp1458= Model;
int nctemp1460=El2dvx(nctemp1456,nctemp1458);
struct diff* nctemp1462= Diff;
nctempfloat2* nctemp1464= El2d->sigmayy;
nctempfloat2* nctemp1467= El2d->eyy;
float nctemp1470= Model->dx;
int nctemp1472=DiffDyplus(nctemp1462,nctemp1464,nctemp1467,nctemp1470);
struct diff* nctemp1474= Diff;
nctempfloat2* nctemp1476= El2d->sigmaxy;
nctempfloat2* nctemp1479= El2d->eyx;
float nctemp1482= Model->dx;
int nctemp1484=DiffDxminus(nctemp1474,nctemp1476,nctemp1479,nctemp1482);
struct el2d* nctemp1486= El2d;
struct model* nctemp1488= Model;
int nctemp1490=El2dvy(nctemp1486,nctemp1488);
struct diff* nctemp1492= Diff;
nctempfloat2* nctemp1494= El2d->vx;
nctempfloat2* nctemp1497= El2d->exx;
float nctemp1500= Model->dx;
int nctemp1502=DiffDxminus(nctemp1492,nctemp1494,nctemp1497,nctemp1500);
struct diff* nctemp1504= Diff;
nctempfloat2* nctemp1506= El2d->vy;
nctempfloat2* nctemp1509= El2d->eyy;
float nctemp1512= Model->dx;
int nctemp1514=DiffDyminus(nctemp1504,nctemp1506,nctemp1509,nctemp1512);
struct diff* nctemp1516= Diff;
nctempfloat2* nctemp1518= El2d->vy;
nctempfloat2* nctemp1521= El2d->eyx;
float nctemp1524= Model->dx;
int nctemp1526=DiffDxplus(nctemp1516,nctemp1518,nctemp1521,nctemp1524);
struct diff* nctemp1528= Diff;
nctempfloat2* nctemp1530= El2d->vx;
nctempfloat2* nctemp1533= El2d->exy;
float nctemp1536= Model->dx;
int nctemp1538=DiffDyplus(nctemp1528,nctemp1530,nctemp1533,nctemp1536);
struct el2d* nctemp1540= El2d;
struct model* nctemp1542= Model;
int nctemp1544=El2dstress(nctemp1540,nctemp1542);
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
float nctemp1556=(float)(i);
int nctemp1569 = ne - ns;
int nctemp1571 = nctemp1569 - 1;
float nctemp1560=(float)(nctemp1571);
float nctemp1572 = nctemp1556 / nctemp1560;
float nctemp1573 = 1000.0 * nctemp1572;
perc =nctemp1573;
float nctemp1581 = perc - oldperc;
int nctemp1574 = (nctemp1581 >= 10.0);
if(nctemp1574)
{
{
int nctemp1590=(int)(perc);
int nctemp1594 = nctemp1590 / 10;
iperc =nctemp1594;
int nctemp1598= iperc;
int nctemp1600= 10;
int nctemp1602=LibeMod(nctemp1598,nctemp1600);
int nctemp1595 = (nctemp1602 ==0);
if(nctemp1595)
{
{
int nctemp1605= 4;
struct nctempchar1 *nctemp1609;
static struct nctempchar1 nctemp1610 = {{ 20}, (char*)"percent completed: \0"};
nctemp1609=&nctemp1610;
nctempchar1* nctemp1607= nctemp1609;
int nctemp1611=LibePuts(nctemp1605,nctemp1607);
int nctemp1613= 4;
int nctemp1615= iperc;
int nctemp1617=LibePuti(nctemp1613,nctemp1615);
int nctemp1619= 4;
struct nctempchar1 *nctemp1623;
static struct nctempchar1 nctemp1624 = {{ 3}, (char*)"\n\0"};
nctemp1623=&nctemp1624;
nctempchar1* nctemp1621= nctemp1623;
int nctemp1625=LibePuts(nctemp1619,nctemp1621);
int nctemp1627= 4;
int nctemp1629=LibeFlush(nctemp1627);
}
}
oldperc = perc;
}
}
struct el2d* nctemp1631= El2d;
int nctemp1633= i;
int nctemp1635=El2dSnap(nctemp1631,nctemp1633);
}
}
El2d->ts = (El2d->ts + ne);
return 1;
}
}
};