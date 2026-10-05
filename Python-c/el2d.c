//  Translated by epsc  version: Sun Oct  4 18:44:46 2026

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
struct model {nctempfloat2 *tausx;
nctempfloat2 *tauex;
nctempfloat2 *tausy;
nctempfloat2 *tauey;
nctempfloat2 *chisx;
nctempfloat2 *chiex;
nctempfloat2 *chisy;
nctempfloat2 *chiey;
nctempfloat2 *chisxxy;
nctempfloat2 *chiexxy;
nctempfloat2 *chisyxy;
nctempfloat2 *chieyxy;
nctempfloat2 *etasx;
nctempfloat2 *etaex;
nctempfloat2 *etasy;
nctempfloat2 *etaey;
nctempfloat2 *lambda;
nctempfloat2 *nux;
nctempfloat2 *nuy;
nctempfloat2 *mu;
nctempfloat2 *muxy;
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
struct model* ModelNew (nctempfloat2 *Lambda,nctempfloat2 *mu,nctempfloat2 *muxy,nctempfloat2 *nux,nctempfloat2 *nuy,float dx,float dt,float w0,int nb,int freesurface,nctempfloat2 *tausx,nctempfloat2 *tausy,nctempfloat2 *tauex,nctempfloat2 *tauey,nctempfloat2 *chisx,nctempfloat2 *chisy,nctempfloat2 *chiex,nctempfloat2 *chiey,nctempfloat2 *chisxxy,nctempfloat2 *chisyxy,nctempfloat2 *chiexxy,nctempfloat2 *chieyxy,nctempfloat2 *etasx,nctempfloat2 *etasy,nctempfloat2 *etaex,nctempfloat2 *etaey);
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
El2d->vx->a[i+El2d->vx->d[0]*(j)] = ((((dt * Model->nux->a[i+Model->nux->d[0]*(j)]) * (El2d->exx->a[i+El2d->exx->d[0]*(j)] + El2d->exy->a[i+El2d->exy->d[0]*(j)])) + (dt * (El2d->thetaxx->a[i+El2d->thetaxx->d[0]*(j)] + El2d->thetaxy->a[i+El2d->thetaxy->d[0]*(j)]))) + El2d->vx->a[i+El2d->vx->d[0]*(j)]);
int nctemp371=i;
nctemp371=j*El2d->thetaxx->d[0]+nctemp371;
int nctemp381=i;
nctemp381=j*El2d->thetaxx->d[0]+nctemp381;
float nctemp388= -dt;
int nctemp390=i;
nctemp390=j*Model->etasx->d[0]+nctemp390;
float nctemp393 = nctemp388 / Model->etasx->a[nctemp390];
float nctemp385= nctemp393;
float nctemp394=LibeExp(nctemp385);
float nctemp395 = El2d->thetaxx->a[nctemp381] * nctemp394;
int nctemp409=i;
nctemp409=j*Model->nux->d[0]+nctemp409;
int nctemp420=i;
nctemp420=j*Model->etaex->d[0]+nctemp420;
int nctemp424=i;
nctemp424=j*Model->etasx->d[0]+nctemp424;
float nctemp427 = Model->etaex->a[nctemp420] / Model->etasx->a[nctemp424];
float nctemp428 = 1.0 - nctemp427;
float nctemp429 = Model->nux->a[nctemp409] * nctemp428;
float nctemp431 = nctemp429 * dt;
int nctemp433=i;
nctemp433=j*Model->etaex->d[0]+nctemp433;
float nctemp436 = nctemp431 / Model->etaex->a[nctemp433];
int nctemp438=i;
nctemp438=j*El2d->exx->d[0]+nctemp438;
float nctemp441 = nctemp436 * El2d->exx->a[nctemp438];
float nctemp442 = nctemp395 + nctemp441;
El2d->thetaxx->a[nctemp371] =nctemp442;
int nctemp446=i;
nctemp446=j*El2d->thetaxy->d[0]+nctemp446;
int nctemp456=i;
nctemp456=j*El2d->thetaxy->d[0]+nctemp456;
float nctemp463= -dt;
int nctemp465=i;
nctemp465=j*Model->etasy->d[0]+nctemp465;
float nctemp468 = nctemp463 / Model->etasy->a[nctemp465];
float nctemp460= nctemp468;
float nctemp469=LibeExp(nctemp460);
float nctemp470 = El2d->thetaxy->a[nctemp456] * nctemp469;
int nctemp484=i;
nctemp484=j*Model->nux->d[0]+nctemp484;
int nctemp495=i;
nctemp495=j*Model->etaey->d[0]+nctemp495;
int nctemp499=i;
nctemp499=j*Model->etasy->d[0]+nctemp499;
float nctemp502 = Model->etaey->a[nctemp495] / Model->etasy->a[nctemp499];
float nctemp503 = 1.0 - nctemp502;
float nctemp504 = Model->nux->a[nctemp484] * nctemp503;
float nctemp506 = nctemp504 * dt;
int nctemp508=i;
nctemp508=j*Model->etaey->d[0]+nctemp508;
float nctemp511 = nctemp506 / Model->etaey->a[nctemp508];
int nctemp513=i;
nctemp513=j*El2d->exy->d[0]+nctemp513;
float nctemp516 = nctemp511 * El2d->exy->a[nctemp513];
float nctemp517 = nctemp470 + nctemp516;
El2d->thetaxy->a[nctemp446] =nctemp517;
}
}
}}}
}
int El2dvy (struct el2d* El2d,struct model* Model)
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
El2d->vy->a[i+El2d->vy->d[0]*(j)] = ((((dt * Model->nuy->a[i+Model->nuy->d[0]*(j)]) * (El2d->eyy->a[i+El2d->eyy->d[0]*(j)] + El2d->eyx->a[i+El2d->eyx->d[0]*(j)])) + (dt * (El2d->thetayy->a[i+El2d->thetayy->d[0]*(j)] + El2d->thetayx->a[i+El2d->thetayx->d[0]*(j)]))) + El2d->vy->a[i+El2d->vy->d[0]*(j)]);
int nctemp525=i;
nctemp525=j*El2d->thetayy->d[0]+nctemp525;
int nctemp535=i;
nctemp535=j*El2d->thetayy->d[0]+nctemp535;
float nctemp542= -dt;
int nctemp544=i;
nctemp544=j*Model->etasy->d[0]+nctemp544;
float nctemp547 = nctemp542 / Model->etasy->a[nctemp544];
float nctemp539= nctemp547;
float nctemp548=LibeExp(nctemp539);
float nctemp549 = El2d->thetayy->a[nctemp535] * nctemp548;
int nctemp563=i;
nctemp563=j*Model->nuy->d[0]+nctemp563;
int nctemp574=i;
nctemp574=j*Model->etaey->d[0]+nctemp574;
int nctemp578=i;
nctemp578=j*Model->etasy->d[0]+nctemp578;
float nctemp581 = Model->etaey->a[nctemp574] / Model->etasy->a[nctemp578];
float nctemp582 = 1.0 - nctemp581;
float nctemp583 = Model->nuy->a[nctemp563] * nctemp582;
float nctemp585 = nctemp583 * dt;
int nctemp587=i;
nctemp587=j*Model->etaey->d[0]+nctemp587;
float nctemp590 = nctemp585 / Model->etaey->a[nctemp587];
int nctemp592=i;
nctemp592=j*El2d->eyy->d[0]+nctemp592;
float nctemp595 = nctemp590 * El2d->eyy->a[nctemp592];
float nctemp596 = nctemp549 + nctemp595;
El2d->thetayy->a[nctemp525] =nctemp596;
int nctemp600=i;
nctemp600=j*El2d->thetayx->d[0]+nctemp600;
int nctemp610=i;
nctemp610=j*El2d->thetayx->d[0]+nctemp610;
float nctemp617= -dt;
int nctemp619=i;
nctemp619=j*Model->etasx->d[0]+nctemp619;
float nctemp622 = nctemp617 / Model->etasx->a[nctemp619];
float nctemp614= nctemp622;
float nctemp623=LibeExp(nctemp614);
float nctemp624 = El2d->thetayx->a[nctemp610] * nctemp623;
int nctemp638=i;
nctemp638=j*Model->nuy->d[0]+nctemp638;
int nctemp649=i;
nctemp649=j*Model->etaex->d[0]+nctemp649;
int nctemp653=i;
nctemp653=j*Model->etasx->d[0]+nctemp653;
float nctemp656 = Model->etaex->a[nctemp649] / Model->etasx->a[nctemp653];
float nctemp657 = 1.0 - nctemp656;
float nctemp658 = Model->nuy->a[nctemp638] * nctemp657;
float nctemp660 = nctemp658 * dt;
int nctemp662=i;
nctemp662=j*Model->etaex->d[0]+nctemp662;
float nctemp665 = nctemp660 / Model->etaex->a[nctemp662];
int nctemp667=i;
nctemp667=j*El2d->eyx->d[0]+nctemp667;
float nctemp670 = nctemp665 * El2d->eyx->a[nctemp667];
float nctemp671 = nctemp624 + nctemp670;
El2d->thetayx->a[nctemp600] =nctemp671;
}
}
}}}
}
int El2dstress (struct el2d* El2d,struct model* Model)
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
El2d->sigmaxx->a[i+El2d->sigmaxx->d[0]*(j)] = (((((Model->dt * Model->lambda->a[i+Model->lambda->d[0]*(j)]) * (El2d->exx->a[i+El2d->exx->d[0]*(j)] + El2d->eyy->a[i+El2d->eyy->d[0]*(j)])) + (((Model->dt * 2.0) * Model->mu->a[i+Model->mu->d[0]*(j)]) * El2d->exx->a[i+El2d->exx->d[0]*(j)])) + (dt * ((El2d->gammax->a[i+El2d->gammax->d[0]*(j)] + El2d->gammay->a[i+El2d->gammay->d[0]*(j)]) + El2d->alphax->a[i+El2d->alphax->d[0]*(j)]))) + El2d->sigmaxx->a[i+El2d->sigmaxx->d[0]*(j)]);
El2d->sigmayy->a[i+El2d->sigmayy->d[0]*(j)] = (((((Model->dt * Model->lambda->a[i+Model->lambda->d[0]*(j)]) * (El2d->exx->a[i+El2d->exx->d[0]*(j)] + El2d->eyy->a[i+El2d->eyy->d[0]*(j)])) + (((Model->dt * 2.0) * Model->mu->a[i+Model->mu->d[0]*(j)]) * El2d->eyy->a[i+El2d->eyy->d[0]*(j)])) + (dt * ((El2d->gammax->a[i+El2d->gammax->d[0]*(j)] + El2d->gammay->a[i+El2d->gammay->d[0]*(j)]) + El2d->alphay->a[i+El2d->alphay->d[0]*(j)]))) + El2d->sigmayy->a[i+El2d->sigmayy->d[0]*(j)]);
El2d->p->a[i+El2d->p->d[0]*(j)] = (0.5 * (El2d->sigmaxx->a[i+El2d->sigmaxx->d[0]*(j)] + El2d->sigmayy->a[i+El2d->sigmayy->d[0]*(j)]));
El2d->sigmaxy->a[i+El2d->sigmaxy->d[0]*(j)] = ((((Model->dt * Model->muxy->a[i+Model->muxy->d[0]*(j)]) * (El2d->exy->a[i+El2d->exy->d[0]*(j)] + El2d->eyx->a[i+El2d->eyx->d[0]*(j)])) + (dt * (El2d->betaxy->a[i+El2d->betaxy->d[0]*(j)] + El2d->betayx->a[i+El2d->betayx->d[0]*(j)]))) + El2d->sigmaxy->a[i+El2d->sigmaxy->d[0]*(j)]);
El2d->sigmayx->a[i+El2d->sigmayx->d[0]*(j)] = ((((Model->dt * Model->muxy->a[i+Model->muxy->d[0]*(j)]) * (El2d->eyx->a[i+El2d->eyx->d[0]*(j)] + El2d->exy->a[i+El2d->exy->d[0]*(j)])) + (dt * (El2d->betayx->a[i+El2d->betayx->d[0]*(j)] + El2d->betaxy->a[i+El2d->betaxy->d[0]*(j)]))) + El2d->sigmayx->a[i+El2d->sigmayx->d[0]*(j)]);
int nctemp679=i;
nctemp679=j*El2d->gammax->d[0]+nctemp679;
int nctemp689=i;
nctemp689=j*El2d->gammax->d[0]+nctemp689;
float nctemp696= -dt;
int nctemp698=i;
nctemp698=j*Model->tausx->d[0]+nctemp698;
float nctemp701 = nctemp696 / Model->tausx->a[nctemp698];
float nctemp693= nctemp701;
float nctemp702=LibeExp(nctemp693);
float nctemp703 = El2d->gammax->a[nctemp689] * nctemp702;
int nctemp717=i;
nctemp717=j*Model->lambda->d[0]+nctemp717;
int nctemp728=i;
nctemp728=j*Model->tauex->d[0]+nctemp728;
int nctemp732=i;
nctemp732=j*Model->tausx->d[0]+nctemp732;
float nctemp735 = Model->tauex->a[nctemp728] / Model->tausx->a[nctemp732];
float nctemp736 = 1.0 - nctemp735;
float nctemp737 = Model->lambda->a[nctemp717] * nctemp736;
float nctemp739 = nctemp737 * dt;
int nctemp741=i;
nctemp741=j*Model->tauex->d[0]+nctemp741;
float nctemp744 = nctemp739 / Model->tauex->a[nctemp741];
int nctemp746=i;
nctemp746=j*El2d->exx->d[0]+nctemp746;
float nctemp749 = nctemp744 * El2d->exx->a[nctemp746];
float nctemp750 = nctemp703 + nctemp749;
El2d->gammax->a[nctemp679] =nctemp750;
int nctemp754=i;
nctemp754=j*El2d->gammay->d[0]+nctemp754;
int nctemp764=i;
nctemp764=j*El2d->gammay->d[0]+nctemp764;
float nctemp771= -dt;
int nctemp773=i;
nctemp773=j*Model->tausy->d[0]+nctemp773;
float nctemp776 = nctemp771 / Model->tausy->a[nctemp773];
float nctemp768= nctemp776;
float nctemp777=LibeExp(nctemp768);
float nctemp778 = El2d->gammay->a[nctemp764] * nctemp777;
int nctemp792=i;
nctemp792=j*Model->lambda->d[0]+nctemp792;
int nctemp803=i;
nctemp803=j*Model->tauey->d[0]+nctemp803;
int nctemp807=i;
nctemp807=j*Model->tausy->d[0]+nctemp807;
float nctemp810 = Model->tauey->a[nctemp803] / Model->tausy->a[nctemp807];
float nctemp811 = 1.0 - nctemp810;
float nctemp812 = Model->lambda->a[nctemp792] * nctemp811;
float nctemp814 = nctemp812 * dt;
int nctemp816=i;
nctemp816=j*Model->tauey->d[0]+nctemp816;
float nctemp819 = nctemp814 / Model->tauey->a[nctemp816];
int nctemp821=i;
nctemp821=j*El2d->eyy->d[0]+nctemp821;
float nctemp824 = nctemp819 * El2d->eyy->a[nctemp821];
float nctemp825 = nctemp778 + nctemp824;
El2d->gammay->a[nctemp754] =nctemp825;
int nctemp829=i;
nctemp829=j*El2d->alphax->d[0]+nctemp829;
int nctemp839=i;
nctemp839=j*El2d->alphax->d[0]+nctemp839;
float nctemp846= -dt;
int nctemp848=i;
nctemp848=j*Model->chisx->d[0]+nctemp848;
float nctemp851 = nctemp846 / Model->chisx->a[nctemp848];
float nctemp843= nctemp851;
float nctemp852=LibeExp(nctemp843);
float nctemp853 = El2d->alphax->a[nctemp839] * nctemp852;
int nctemp867=i;
nctemp867=j*Model->mu->d[0]+nctemp867;
int nctemp878=i;
nctemp878=j*Model->chiex->d[0]+nctemp878;
int nctemp882=i;
nctemp882=j*Model->chisx->d[0]+nctemp882;
float nctemp885 = Model->chiex->a[nctemp878] / Model->chisx->a[nctemp882];
float nctemp886 = 1.0 - nctemp885;
float nctemp887 = Model->mu->a[nctemp867] * nctemp886;
float nctemp889 = nctemp887 * dt;
int nctemp891=i;
nctemp891=j*Model->chiex->d[0]+nctemp891;
float nctemp894 = nctemp889 / Model->chiex->a[nctemp891];
int nctemp896=i;
nctemp896=j*El2d->exx->d[0]+nctemp896;
float nctemp899 = nctemp894 * El2d->exx->a[nctemp896];
float nctemp900 = nctemp853 + nctemp899;
El2d->alphax->a[nctemp829] =nctemp900;
int nctemp904=i;
nctemp904=j*El2d->alphay->d[0]+nctemp904;
int nctemp914=i;
nctemp914=j*El2d->alphay->d[0]+nctemp914;
float nctemp921= -dt;
int nctemp923=i;
nctemp923=j*Model->chisx->d[0]+nctemp923;
float nctemp926 = nctemp921 / Model->chisx->a[nctemp923];
float nctemp918= nctemp926;
float nctemp927=LibeExp(nctemp918);
float nctemp928 = El2d->alphay->a[nctemp914] * nctemp927;
int nctemp942=i;
nctemp942=j*Model->mu->d[0]+nctemp942;
int nctemp953=i;
nctemp953=j*Model->chiex->d[0]+nctemp953;
int nctemp957=i;
nctemp957=j*Model->chisx->d[0]+nctemp957;
float nctemp960 = Model->chiex->a[nctemp953] / Model->chisx->a[nctemp957];
float nctemp961 = 1.0 - nctemp960;
float nctemp962 = Model->mu->a[nctemp942] * nctemp961;
float nctemp964 = nctemp962 * dt;
int nctemp966=i;
nctemp966=j*Model->chiex->d[0]+nctemp966;
float nctemp969 = nctemp964 / Model->chiex->a[nctemp966];
int nctemp971=i;
nctemp971=j*El2d->eyy->d[0]+nctemp971;
float nctemp974 = nctemp969 * El2d->eyy->a[nctemp971];
float nctemp975 = nctemp928 + nctemp974;
El2d->alphay->a[nctemp904] =nctemp975;
int nctemp979=i;
nctemp979=j*El2d->betaxy->d[0]+nctemp979;
int nctemp989=i;
nctemp989=j*El2d->betaxy->d[0]+nctemp989;
float nctemp996= -dt;
int nctemp998=i;
nctemp998=j*Model->chisy->d[0]+nctemp998;
float nctemp1001 = nctemp996 / Model->chisy->a[nctemp998];
float nctemp993= nctemp1001;
float nctemp1002=LibeExp(nctemp993);
float nctemp1003 = El2d->betaxy->a[nctemp989] * nctemp1002;
int nctemp1017=i;
nctemp1017=j*Model->muxy->d[0]+nctemp1017;
int nctemp1028=i;
nctemp1028=j*Model->chiey->d[0]+nctemp1028;
int nctemp1032=i;
nctemp1032=j*Model->chisy->d[0]+nctemp1032;
float nctemp1035 = Model->chiey->a[nctemp1028] / Model->chisy->a[nctemp1032];
float nctemp1036 = 1.0 - nctemp1035;
float nctemp1037 = Model->muxy->a[nctemp1017] * nctemp1036;
float nctemp1039 = nctemp1037 * dt;
int nctemp1041=i;
nctemp1041=j*Model->chiey->d[0]+nctemp1041;
float nctemp1044 = nctemp1039 / Model->chiey->a[nctemp1041];
int nctemp1046=i;
nctemp1046=j*El2d->exy->d[0]+nctemp1046;
float nctemp1049 = nctemp1044 * El2d->exy->a[nctemp1046];
float nctemp1050 = nctemp1003 + nctemp1049;
El2d->betaxy->a[nctemp979] =nctemp1050;
int nctemp1054=i;
nctemp1054=j*El2d->betayx->d[0]+nctemp1054;
int nctemp1064=i;
nctemp1064=j*El2d->betayx->d[0]+nctemp1064;
float nctemp1071= -dt;
int nctemp1073=i;
nctemp1073=j*Model->chisx->d[0]+nctemp1073;
float nctemp1076 = nctemp1071 / Model->chisx->a[nctemp1073];
float nctemp1068= nctemp1076;
float nctemp1077=LibeExp(nctemp1068);
float nctemp1078 = El2d->betayx->a[nctemp1064] * nctemp1077;
int nctemp1092=i;
nctemp1092=j*Model->muxy->d[0]+nctemp1092;
int nctemp1103=i;
nctemp1103=j*Model->chiex->d[0]+nctemp1103;
int nctemp1107=i;
nctemp1107=j*Model->chisx->d[0]+nctemp1107;
float nctemp1110 = Model->chiex->a[nctemp1103] / Model->chisx->a[nctemp1107];
float nctemp1111 = 1.0 - nctemp1110;
float nctemp1112 = Model->muxy->a[nctemp1092] * nctemp1111;
float nctemp1114 = nctemp1112 * dt;
int nctemp1116=i;
nctemp1116=j*Model->chiex->d[0]+nctemp1116;
float nctemp1119 = nctemp1114 / Model->chiex->a[nctemp1116];
int nctemp1121=i;
nctemp1121=j*El2d->eyx->d[0]+nctemp1121;
float nctemp1124 = nctemp1119 * El2d->eyx->a[nctemp1121];
float nctemp1125 = nctemp1078 + nctemp1124;
El2d->betayx->a[nctemp1054] =nctemp1125;
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
int nctemp1126 = (El2d->sresamp <= 0);
if(nctemp1126)
{
{
return 1;
}
}
int nctemp1135=El2d->sigmaxx->d[0];nx =nctemp1135;
int nctemp1143=El2d->sigmaxx->d[1];ny =nctemp1143;
n = (nx * ny);
int nctemp1150= it;
int nctemp1152= El2d->sresamp;
int nctemp1154=LibeMod(nctemp1150,nctemp1152);
int nctemp1147 = (nctemp1154 ==0);
if(nctemp1147)
{
{
int nctemp1159=0;
int nctemp1156 = (El2d->snpflags->a[nctemp1159] ==1);
if(nctemp1156)
{
{
nctempchar1 nctemp1168;
nctempchar1 *nctemp1167;
nctemp1168=*(nctempchar1*)(El2d->p);
int nctemp1175 = 4 * n;
nctemp1168.d[0]=nctemp1175;
nctemp1167=&nctemp1168;
tmp=nctemp1167;
int nctemp1177= El2d->fdp;
int nctemp1184 = 4 * n;
int nctemp1179= nctemp1184;
nctempchar1* nctemp1185= tmp;
int nctemp1188=LibeWrite(nctemp1177,nctemp1179,nctemp1185);
}
}
int nctemp1192=1;
int nctemp1189 = (El2d->snpflags->a[nctemp1192] ==1);
if(nctemp1189)
{
{
nctempchar1 nctemp1201;
nctempchar1 *nctemp1200;
nctemp1201=*(nctempchar1*)(El2d->vx);
int nctemp1208 = 4 * n;
nctemp1201.d[0]=nctemp1208;
nctemp1200=&nctemp1201;
tmp=nctemp1200;
int nctemp1210= El2d->fdvx;
int nctemp1217 = 4 * n;
int nctemp1212= nctemp1217;
nctempchar1* nctemp1218= tmp;
int nctemp1221=LibeWrite(nctemp1210,nctemp1212,nctemp1218);
}
}
int nctemp1225=2;
int nctemp1222 = (El2d->snpflags->a[nctemp1225] ==1);
if(nctemp1222)
{
{
nctempchar1 nctemp1234;
nctempchar1 *nctemp1233;
nctemp1234=*(nctempchar1*)(El2d->vy);
int nctemp1241 = 4 * n;
nctemp1234.d[0]=nctemp1241;
nctemp1233=&nctemp1234;
tmp=nctemp1233;
int nctemp1243= El2d->fdvy;
int nctemp1250 = 4 * n;
int nctemp1245= nctemp1250;
nctempchar1* nctemp1251= tmp;
int nctemp1254=LibeWrite(nctemp1243,nctemp1245,nctemp1251);
}
}
int nctemp1258=3;
int nctemp1255 = (El2d->snpflags->a[nctemp1258] ==1);
if(nctemp1255)
{
{
nctempchar1 nctemp1267;
nctempchar1 *nctemp1266;
nctemp1267=*(nctempchar1*)(El2d->sigmaxx);
int nctemp1274 = 4 * n;
nctemp1267.d[0]=nctemp1274;
nctemp1266=&nctemp1267;
tmp=nctemp1266;
int nctemp1276= El2d->fdsxx;
int nctemp1283 = 4 * n;
int nctemp1278= nctemp1283;
nctempchar1* nctemp1284= tmp;
int nctemp1287=LibeWrite(nctemp1276,nctemp1278,nctemp1284);
}
}
int nctemp1291=4;
int nctemp1288 = (El2d->snpflags->a[nctemp1291] ==1);
if(nctemp1288)
{
{
nctempchar1 nctemp1300;
nctempchar1 *nctemp1299;
nctemp1300=*(nctempchar1*)(El2d->sigmayy);
int nctemp1307 = 4 * n;
nctemp1300.d[0]=nctemp1307;
nctemp1299=&nctemp1300;
tmp=nctemp1299;
int nctemp1309= El2d->fdsyy;
int nctemp1316 = 4 * n;
int nctemp1311= nctemp1316;
nctempchar1* nctemp1317= tmp;
int nctemp1320=LibeWrite(nctemp1309,nctemp1311,nctemp1317);
}
}
int nctemp1324=5;
int nctemp1321 = (El2d->snpflags->a[nctemp1324] ==1);
if(nctemp1321)
{
{
nctempchar1 nctemp1333;
nctempchar1 *nctemp1332;
nctemp1333=*(nctempchar1*)(El2d->sigmaxy);
int nctemp1340 = 4 * n;
nctemp1333.d[0]=nctemp1340;
nctemp1332=&nctemp1333;
tmp=nctemp1332;
int nctemp1342= El2d->fdsxy;
int nctemp1349 = 4 * n;
int nctemp1344= nctemp1349;
nctempchar1* nctemp1350= tmp;
int nctemp1353=LibeWrite(nctemp1342,nctemp1344,nctemp1350);
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
int nctemp1359= l;
struct diff* nctemp1361=DiffNew(nctemp1359);
Diff =nctemp1361;
oldperc = 0.0;
ns = El2d->ts;
ne = (ns + nt);
for(i = ns;i < ne;i = (i + 1)){
{
struct diff* nctemp1363= Diff;
nctempfloat2* nctemp1365= El2d->sigmaxx;
nctempfloat2* nctemp1368= El2d->exx;
float nctemp1371= Model->dx;
int nctemp1373=DiffDxplus(nctemp1363,nctemp1365,nctemp1368,nctemp1371);
struct diff* nctemp1375= Diff;
nctempfloat2* nctemp1377= El2d->sigmaxy;
nctempfloat2* nctemp1380= El2d->exy;
float nctemp1383= Model->dx;
int nctemp1385=DiffDyminus(nctemp1375,nctemp1377,nctemp1380,nctemp1383);
struct el2d* nctemp1387= El2d;
struct model* nctemp1389= Model;
int nctemp1391=El2dvx(nctemp1387,nctemp1389);
struct diff* nctemp1393= Diff;
nctempfloat2* nctemp1395= El2d->sigmayy;
nctempfloat2* nctemp1398= El2d->eyy;
float nctemp1401= Model->dx;
int nctemp1403=DiffDyplus(nctemp1393,nctemp1395,nctemp1398,nctemp1401);
struct diff* nctemp1405= Diff;
nctempfloat2* nctemp1407= El2d->sigmaxy;
nctempfloat2* nctemp1410= El2d->eyx;
float nctemp1413= Model->dx;
int nctemp1415=DiffDxminus(nctemp1405,nctemp1407,nctemp1410,nctemp1413);
struct el2d* nctemp1417= El2d;
struct model* nctemp1419= Model;
int nctemp1421=El2dvy(nctemp1417,nctemp1419);
struct diff* nctemp1423= Diff;
nctempfloat2* nctemp1425= El2d->vx;
nctempfloat2* nctemp1428= El2d->exx;
float nctemp1431= Model->dx;
int nctemp1433=DiffDxminus(nctemp1423,nctemp1425,nctemp1428,nctemp1431);
struct diff* nctemp1435= Diff;
nctempfloat2* nctemp1437= El2d->vy;
nctempfloat2* nctemp1440= El2d->eyy;
float nctemp1443= Model->dx;
int nctemp1445=DiffDyminus(nctemp1435,nctemp1437,nctemp1440,nctemp1443);
struct diff* nctemp1447= Diff;
nctempfloat2* nctemp1449= El2d->vy;
nctempfloat2* nctemp1452= El2d->eyx;
float nctemp1455= Model->dx;
int nctemp1457=DiffDxplus(nctemp1447,nctemp1449,nctemp1452,nctemp1455);
struct diff* nctemp1459= Diff;
nctempfloat2* nctemp1461= El2d->vx;
nctempfloat2* nctemp1464= El2d->exy;
float nctemp1467= Model->dx;
int nctemp1469=DiffDyplus(nctemp1459,nctemp1461,nctemp1464,nctemp1467);
struct el2d* nctemp1471= El2d;
struct model* nctemp1473= Model;
int nctemp1475=El2dstress(nctemp1471,nctemp1473);
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
float nctemp1487=(float)(i);
int nctemp1500 = ne - ns;
int nctemp1502 = nctemp1500 - 1;
float nctemp1491=(float)(nctemp1502);
float nctemp1503 = nctemp1487 / nctemp1491;
float nctemp1504 = 1000.0 * nctemp1503;
perc =nctemp1504;
float nctemp1512 = perc - oldperc;
int nctemp1505 = (nctemp1512 >= 10.0);
if(nctemp1505)
{
{
int nctemp1521=(int)(perc);
int nctemp1525 = nctemp1521 / 10;
iperc =nctemp1525;
int nctemp1529= iperc;
int nctemp1531= 10;
int nctemp1533=LibeMod(nctemp1529,nctemp1531);
int nctemp1526 = (nctemp1533 ==0);
if(nctemp1526)
{
{
int nctemp1536= 4;
struct nctempchar1 *nctemp1540;
static struct nctempchar1 nctemp1541 = {{ 20}, (char*)"percent completed: \0"};
nctemp1540=&nctemp1541;
nctempchar1* nctemp1538= nctemp1540;
int nctemp1542=LibePuts(nctemp1536,nctemp1538);
int nctemp1544= 4;
int nctemp1546= iperc;
int nctemp1548=LibePuti(nctemp1544,nctemp1546);
int nctemp1550= 4;
struct nctempchar1 *nctemp1554;
static struct nctempchar1 nctemp1555 = {{ 3}, (char*)"\n\0"};
nctemp1554=&nctemp1555;
nctempchar1* nctemp1552= nctemp1554;
int nctemp1556=LibePuts(nctemp1550,nctemp1552);
int nctemp1558= 4;
int nctemp1560=LibeFlush(nctemp1558);
}
}
oldperc = perc;
}
}
int nctemp1561 = (Rec !=0);
if(nctemp1561)
{
{
struct rec* nctemp1566= Rec;
int nctemp1568= i;
nctempfloat2* nctemp1570= El2d->p;
dtype =1;
int nctemp1573= dtype;
int nctemp1578=RecReceiver(nctemp1566,nctemp1568,nctemp1570,nctemp1573);
struct rec* nctemp1580= Rec;
int nctemp1582= i;
nctempfloat2* nctemp1584= El2d->vx;
dtype =2;
int nctemp1587= dtype;
int nctemp1592=RecReceiver(nctemp1580,nctemp1582,nctemp1584,nctemp1587);
struct rec* nctemp1594= Rec;
int nctemp1596= i;
nctempfloat2* nctemp1598= El2d->vy;
dtype =3;
int nctemp1601= dtype;
int nctemp1606=RecReceiver(nctemp1594,nctemp1596,nctemp1598,nctemp1601);
struct rec* nctemp1608= Rec;
int nctemp1610= i;
nctempfloat2* nctemp1612= El2d->sigmaxx;
dtype =4;
int nctemp1615= dtype;
int nctemp1620=RecReceiver(nctemp1608,nctemp1610,nctemp1612,nctemp1615);
struct rec* nctemp1622= Rec;
int nctemp1624= i;
nctempfloat2* nctemp1626= El2d->sigmayy;
dtype =5;
int nctemp1629= dtype;
int nctemp1634=RecReceiver(nctemp1622,nctemp1624,nctemp1626,nctemp1629);
struct rec* nctemp1636= Rec;
int nctemp1638= i;
nctempfloat2* nctemp1640= El2d->sigmaxy;
dtype =6;
int nctemp1643= dtype;
int nctemp1648=RecReceiver(nctemp1636,nctemp1638,nctemp1640,nctemp1643);
}
}
struct el2d* nctemp1650= El2d;
int nctemp1652= i;
int nctemp1654=El2dSnap(nctemp1650,nctemp1652);
}
}
El2d->ts = (El2d->ts + ne);
return 1;
}
}
