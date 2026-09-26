//  Translated by epsc  version: Fri Sep 25 17:44:05 2026

#include <stddef.h>
#include <stdio.h>
#include <assert.h>
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
El2d->sresamp =sresamp;
El2d->snpflags=snpflags;
int nctemp23=Model->nx;
nctemp23=nctemp23*Model->ny;
nctempfloat2 *nctemp22;
nctemp22=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp22->d[0]=Model->nx;
nctemp22->d[1]=Model->ny;
nctemp22->a=(float *)RunMalloc(sizeof(float)*nctemp23);
El2d->p=nctemp22;
int nctemp34=Model->nx;
nctemp34=nctemp34*Model->ny;
nctempfloat2 *nctemp33;
nctemp33=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp33->d[0]=Model->nx;
nctemp33->d[1]=Model->ny;
nctemp33->a=(float *)RunMalloc(sizeof(float)*nctemp34);
El2d->sigmaxx=nctemp33;
int nctemp45=Model->nx;
nctemp45=nctemp45*Model->ny;
nctempfloat2 *nctemp44;
nctemp44=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp44->d[0]=Model->nx;
nctemp44->d[1]=Model->ny;
nctemp44->a=(float *)RunMalloc(sizeof(float)*nctemp45);
El2d->sigmayy=nctemp44;
int nctemp56=Model->nx;
nctemp56=nctemp56*Model->ny;
nctempfloat2 *nctemp55;
nctemp55=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp55->d[0]=Model->nx;
nctemp55->d[1]=Model->ny;
nctemp55->a=(float *)RunMalloc(sizeof(float)*nctemp56);
El2d->p=nctemp55;
int nctemp67=Model->nx;
nctemp67=nctemp67*Model->ny;
nctempfloat2 *nctemp66;
nctemp66=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp66->d[0]=Model->nx;
nctemp66->d[1]=Model->ny;
nctemp66->a=(float *)RunMalloc(sizeof(float)*nctemp67);
El2d->sigmaxy=nctemp66;
int nctemp78=Model->nx;
nctemp78=nctemp78*Model->ny;
nctempfloat2 *nctemp77;
nctemp77=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp77->d[0]=Model->nx;
nctemp77->d[1]=Model->ny;
nctemp77->a=(float *)RunMalloc(sizeof(float)*nctemp78);
El2d->sigmayx=nctemp77;
int nctemp89=Model->nx;
nctemp89=nctemp89*Model->ny;
nctempfloat2 *nctemp88;
nctemp88=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp88->d[0]=Model->nx;
nctemp88->d[1]=Model->ny;
nctemp88->a=(float *)RunMalloc(sizeof(float)*nctemp89);
El2d->vx=nctemp88;
int nctemp100=Model->nx;
nctemp100=nctemp100*Model->ny;
nctempfloat2 *nctemp99;
nctemp99=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp99->d[0]=Model->nx;
nctemp99->d[1]=Model->ny;
nctemp99->a=(float *)RunMalloc(sizeof(float)*nctemp100);
El2d->vy=nctemp99;
int nctemp111=Model->nx;
nctemp111=nctemp111*Model->ny;
nctempfloat2 *nctemp110;
nctemp110=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp110->d[0]=Model->nx;
nctemp110->d[1]=Model->ny;
nctemp110->a=(float *)RunMalloc(sizeof(float)*nctemp111);
El2d->exx=nctemp110;
int nctemp122=Model->nx;
nctemp122=nctemp122*Model->ny;
nctempfloat2 *nctemp121;
nctemp121=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp121->d[0]=Model->nx;
nctemp121->d[1]=Model->ny;
nctemp121->a=(float *)RunMalloc(sizeof(float)*nctemp122);
El2d->eyy=nctemp121;
int nctemp133=Model->nx;
nctemp133=nctemp133*Model->ny;
nctempfloat2 *nctemp132;
nctemp132=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp132->d[0]=Model->nx;
nctemp132->d[1]=Model->ny;
nctemp132->a=(float *)RunMalloc(sizeof(float)*nctemp133);
El2d->exy=nctemp132;
int nctemp144=Model->nx;
nctemp144=nctemp144*Model->ny;
nctempfloat2 *nctemp143;
nctemp143=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp143->d[0]=Model->nx;
nctemp143->d[1]=Model->ny;
nctemp143->a=(float *)RunMalloc(sizeof(float)*nctemp144);
El2d->eyx=nctemp143;
int nctemp155=Model->nx;
nctemp155=nctemp155*Model->ny;
nctempfloat2 *nctemp154;
nctemp154=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp154->d[0]=Model->nx;
nctemp154->d[1]=Model->ny;
nctemp154->a=(float *)RunMalloc(sizeof(float)*nctemp155);
El2d->e=nctemp154;
int nctemp166=Model->nx;
nctemp166=nctemp166*Model->ny;
nctempfloat2 *nctemp165;
nctemp165=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp165->d[0]=Model->nx;
nctemp165->d[1]=Model->ny;
nctemp165->a=(float *)RunMalloc(sizeof(float)*nctemp166);
El2d->gammax=nctemp165;
int nctemp177=Model->nx;
nctemp177=nctemp177*Model->ny;
nctempfloat2 *nctemp176;
nctemp176=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp176->d[0]=Model->nx;
nctemp176->d[1]=Model->ny;
nctemp176->a=(float *)RunMalloc(sizeof(float)*nctemp177);
El2d->gammay=nctemp176;
int nctemp188=Model->nx;
nctemp188=nctemp188*Model->ny;
nctempfloat2 *nctemp187;
nctemp187=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp187->d[0]=Model->nx;
nctemp187->d[1]=Model->ny;
nctemp187->a=(float *)RunMalloc(sizeof(float)*nctemp188);
El2d->alphax=nctemp187;
int nctemp199=Model->nx;
nctemp199=nctemp199*Model->ny;
nctempfloat2 *nctemp198;
nctemp198=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp198->d[0]=Model->nx;
nctemp198->d[1]=Model->ny;
nctemp198->a=(float *)RunMalloc(sizeof(float)*nctemp199);
El2d->alphay=nctemp198;
int nctemp210=Model->nx;
nctemp210=nctemp210*Model->ny;
nctempfloat2 *nctemp209;
nctemp209=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp209->d[0]=Model->nx;
nctemp209->d[1]=Model->ny;
nctemp209->a=(float *)RunMalloc(sizeof(float)*nctemp210);
El2d->betaxy=nctemp209;
int nctemp221=Model->nx;
nctemp221=nctemp221*Model->ny;
nctempfloat2 *nctemp220;
nctemp220=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp220->d[0]=Model->nx;
nctemp220->d[1]=Model->ny;
nctemp220->a=(float *)RunMalloc(sizeof(float)*nctemp221);
El2d->betayx=nctemp220;
int nctemp232=Model->nx;
nctemp232=nctemp232*Model->ny;
nctempfloat2 *nctemp231;
nctemp231=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp231->d[0]=Model->nx;
nctemp231->d[1]=Model->ny;
nctemp231->a=(float *)RunMalloc(sizeof(float)*nctemp232);
El2d->thetaxx=nctemp231;
int nctemp243=Model->nx;
nctemp243=nctemp243*Model->ny;
nctempfloat2 *nctemp242;
nctemp242=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp242->d[0]=Model->nx;
nctemp242->d[1]=Model->ny;
nctemp242->a=(float *)RunMalloc(sizeof(float)*nctemp243);
El2d->thetayy=nctemp242;
int nctemp254=Model->nx;
nctemp254=nctemp254*Model->ny;
nctempfloat2 *nctemp253;
nctemp253=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp253->d[0]=Model->nx;
nctemp253->d[1]=Model->ny;
nctemp253->a=(float *)RunMalloc(sizeof(float)*nctemp254);
El2d->thetayx=nctemp253;
int nctemp265=Model->nx;
nctemp265=nctemp265*Model->ny;
nctempfloat2 *nctemp264;
nctemp264=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp264->d[0]=Model->nx;
nctemp264->d[1]=Model->ny;
nctemp264->a=(float *)RunMalloc(sizeof(float)*nctemp265);
El2d->thetaxy=nctemp264;
El2d->ts =0;
int nctemp277=0;
if((0>0)||(0>=El2d->snpflags->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->snpflags %d %d %d %d \n " ,91,0,0,El2d->snpflags->d[0]-1);
}
int nctemp274 = (El2d->snpflags->a[nctemp277] ==1);
if(nctemp274)
{
{
struct nctempchar1 *nctemp286;
static struct nctempchar1 nctemp287 = {{ 10}, (char*)"snp-p.bin\0"};
nctemp286=&nctemp287;
nctempchar1* nctemp284= nctemp286;
struct nctempchar1 *nctemp290;
static struct nctempchar1 nctemp291 = {{ 2}, (char*)"w\0"};
nctemp290=&nctemp291;
nctempchar1* nctemp288= nctemp290;
int nctemp292=LibeOpen(nctemp284,nctemp288);
El2d->fdp =nctemp292;
}
}
int nctemp296=1;
if((0>1)||(1>=El2d->snpflags->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->snpflags %d %d %d %d \n " ,93,1,0,El2d->snpflags->d[0]-1);
}
int nctemp293 = (El2d->snpflags->a[nctemp296] ==1);
if(nctemp293)
{
{
struct nctempchar1 *nctemp305;
static struct nctempchar1 nctemp306 = {{ 11}, (char*)"snp-vx.bin\0"};
nctemp305=&nctemp306;
nctempchar1* nctemp303= nctemp305;
struct nctempchar1 *nctemp309;
static struct nctempchar1 nctemp310 = {{ 2}, (char*)"w\0"};
nctemp309=&nctemp310;
nctempchar1* nctemp307= nctemp309;
int nctemp311=LibeOpen(nctemp303,nctemp307);
El2d->fdvx =nctemp311;
}
}
int nctemp315=2;
if((0>2)||(2>=El2d->snpflags->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->snpflags %d %d %d %d \n " ,95,2,0,El2d->snpflags->d[0]-1);
}
int nctemp312 = (El2d->snpflags->a[nctemp315] ==1);
if(nctemp312)
{
{
struct nctempchar1 *nctemp324;
static struct nctempchar1 nctemp325 = {{ 11}, (char*)"snp-vy.bin\0"};
nctemp324=&nctemp325;
nctempchar1* nctemp322= nctemp324;
struct nctempchar1 *nctemp328;
static struct nctempchar1 nctemp329 = {{ 2}, (char*)"w\0"};
nctemp328=&nctemp329;
nctempchar1* nctemp326= nctemp328;
int nctemp330=LibeOpen(nctemp322,nctemp326);
El2d->fdvy =nctemp330;
}
}
int nctemp334=3;
if((0>3)||(3>=El2d->snpflags->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->snpflags %d %d %d %d \n " ,98,3,0,El2d->snpflags->d[0]-1);
}
int nctemp331 = (El2d->snpflags->a[nctemp334] ==1);
if(nctemp331)
{
{
struct nctempchar1 *nctemp343;
static struct nctempchar1 nctemp344 = {{ 12}, (char*)"snp-sxx.bin\0"};
nctemp343=&nctemp344;
nctempchar1* nctemp341= nctemp343;
struct nctempchar1 *nctemp347;
static struct nctempchar1 nctemp348 = {{ 2}, (char*)"w\0"};
nctemp347=&nctemp348;
nctempchar1* nctemp345= nctemp347;
int nctemp349=LibeOpen(nctemp341,nctemp345);
El2d->fdsxx =nctemp349;
}
}
int nctemp353=4;
if((0>4)||(4>=El2d->snpflags->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->snpflags %d %d %d %d \n " ,101,4,0,El2d->snpflags->d[0]-1);
}
int nctemp350 = (El2d->snpflags->a[nctemp353] ==1);
if(nctemp350)
{
{
struct nctempchar1 *nctemp362;
static struct nctempchar1 nctemp363 = {{ 12}, (char*)"snp-syy.bin\0"};
nctemp362=&nctemp363;
nctempchar1* nctemp360= nctemp362;
struct nctempchar1 *nctemp366;
static struct nctempchar1 nctemp367 = {{ 2}, (char*)"w\0"};
nctemp366=&nctemp367;
nctempchar1* nctemp364= nctemp366;
int nctemp368=LibeOpen(nctemp360,nctemp364);
El2d->fdsyy =nctemp368;
}
}
int nctemp372=5;
if((0>5)||(5>=El2d->snpflags->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->snpflags %d %d %d %d \n " ,104,5,0,El2d->snpflags->d[0]-1);
}
int nctemp369 = (El2d->snpflags->a[nctemp372] ==1);
if(nctemp369)
{
{
struct nctempchar1 *nctemp381;
static struct nctempchar1 nctemp382 = {{ 12}, (char*)"snp-sxy.bin\0"};
nctemp381=&nctemp382;
nctempchar1* nctemp379= nctemp381;
struct nctempchar1 *nctemp385;
static struct nctempchar1 nctemp386 = {{ 2}, (char*)"w\0"};
nctemp385=&nctemp386;
nctempchar1* nctemp383= nctemp385;
int nctemp387=LibeOpen(nctemp379,nctemp383);
El2d->fdsxy =nctemp387;
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
nx =Model->nx;
ny =Model->ny;
dt =Model->dt;

 #pragma omp parallel for
for(j=0;j<ny;j++){for(i=0;i<nx;i++){{
{
int nctemp408=i;
if((0>i)||(i>=El2d->vx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->vx %d %d %d %d \n " ,129,i,0,El2d->vx->d[0]-1);
}
nctemp408=j*El2d->vx->d[0]+nctemp408;
if((0>j)||(j>=El2d->vx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->vx %d %d %d %d \n " ,129,j,1,El2d->vx->d[1]-1);
}
int nctemp425=i;
if((0>i)||(i>=Model->nu->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->nu %d %d %d %d \n " ,129,i,0,Model->nu->d[0]-1);
}
nctemp425=j*Model->nu->d[0]+nctemp425;
if((0>j)||(j>=Model->nu->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->nu %d %d %d %d \n " ,129,j,1,Model->nu->d[1]-1);
}
float nctemp428 = dt * Model->nu->a[nctemp425];
int nctemp433=i;
if((0>i)||(i>=El2d->exx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->exx %d %d %d %d \n " ,129,i,0,El2d->exx->d[0]-1);
}
nctemp433=j*El2d->exx->d[0]+nctemp433;
if((0>j)||(j>=El2d->exx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->exx %d %d %d %d \n " ,129,j,1,El2d->exx->d[1]-1);
}
int nctemp437=i;
if((0>i)||(i>=El2d->exy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->exy %d %d %d %d \n " ,129,i,0,El2d->exy->d[0]-1);
}
nctemp437=j*El2d->exy->d[0]+nctemp437;
if((0>j)||(j>=El2d->exy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->exy %d %d %d %d \n " ,129,j,1,El2d->exy->d[1]-1);
}
float nctemp440 = El2d->exx->a[nctemp433] + El2d->exy->a[nctemp437];
float nctemp441 = nctemp428 * nctemp440;
int nctemp450=i;
if((0>i)||(i>=El2d->thetaxx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->thetaxx %d %d %d %d \n " ,130,i,0,El2d->thetaxx->d[0]-1);
}
nctemp450=j*El2d->thetaxx->d[0]+nctemp450;
if((0>j)||(j>=El2d->thetaxx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->thetaxx %d %d %d %d \n " ,130,j,1,El2d->thetaxx->d[1]-1);
}
int nctemp454=i;
if((0>i)||(i>=El2d->thetaxy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->thetaxy %d %d %d %d \n " ,130,i,0,El2d->thetaxy->d[0]-1);
}
nctemp454=j*El2d->thetaxy->d[0]+nctemp454;
if((0>j)||(j>=El2d->thetaxy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->thetaxy %d %d %d %d \n " ,130,j,1,El2d->thetaxy->d[1]-1);
}
float nctemp457 = El2d->thetaxx->a[nctemp450] + El2d->thetaxy->a[nctemp454];
float nctemp458 = dt * nctemp457;
float nctemp459 = nctemp441 + nctemp458;
int nctemp461=i;
if((0>i)||(i>=El2d->vx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->vx %d %d %d %d \n " ,131,i,0,El2d->vx->d[0]-1);
}
nctemp461=j*El2d->vx->d[0]+nctemp461;
if((0>j)||(j>=El2d->vx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->vx %d %d %d %d \n " ,131,j,1,El2d->vx->d[1]-1);
}
float nctemp464 = nctemp459 + El2d->vx->a[nctemp461];
El2d->vx->a[nctemp408] =nctemp464;
int nctemp468=i;
if((0>i)||(i>=El2d->thetaxx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->thetaxx %d %d %d %d \n " ,133,i,0,El2d->thetaxx->d[0]-1);
}
nctemp468=j*El2d->thetaxx->d[0]+nctemp468;
if((0>j)||(j>=El2d->thetaxx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->thetaxx %d %d %d %d \n " ,133,j,1,El2d->thetaxx->d[1]-1);
}
int nctemp478=i;
if((0>i)||(i>=El2d->thetaxx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->thetaxx %d %d %d %d \n " ,133,i,0,El2d->thetaxx->d[0]-1);
}
nctemp478=j*El2d->thetaxx->d[0]+nctemp478;
if((0>j)||(j>=El2d->thetaxx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->thetaxx %d %d %d %d \n " ,133,j,1,El2d->thetaxx->d[1]-1);
}
float nctemp485= -dt;
int nctemp487=i;
if((0>i)||(i>=Model->etasx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etasx %d %d %d %d \n " ,133,i,0,Model->etasx->d[0]-1);
}
nctemp487=j*Model->etasx->d[0]+nctemp487;
if((0>j)||(j>=Model->etasx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etasx %d %d %d %d \n " ,133,j,1,Model->etasx->d[1]-1);
}
float nctemp490 = nctemp485 / Model->etasx->a[nctemp487];
float nctemp482= nctemp490;
float nctemp491=LibeExp(nctemp482);
float nctemp492 = El2d->thetaxx->a[nctemp478] * nctemp491;
int nctemp506=i;
if((0>i)||(i>=Model->nu->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->nu %d %d %d %d \n " ,134,i,0,Model->nu->d[0]-1);
}
nctemp506=j*Model->nu->d[0]+nctemp506;
if((0>j)||(j>=Model->nu->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->nu %d %d %d %d \n " ,134,j,1,Model->nu->d[1]-1);
}
int nctemp517=i;
if((0>i)||(i>=Model->etaex->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etaex %d %d %d %d \n " ,134,i,0,Model->etaex->d[0]-1);
}
nctemp517=j*Model->etaex->d[0]+nctemp517;
if((0>j)||(j>=Model->etaex->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etaex %d %d %d %d \n " ,134,j,1,Model->etaex->d[1]-1);
}
int nctemp521=i;
if((0>i)||(i>=Model->etasx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etasx %d %d %d %d \n " ,135,i,0,Model->etasx->d[0]-1);
}
nctemp521=j*Model->etasx->d[0]+nctemp521;
if((0>j)||(j>=Model->etasx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etasx %d %d %d %d \n " ,135,j,1,Model->etasx->d[1]-1);
}
float nctemp524 = Model->etaex->a[nctemp517] / Model->etasx->a[nctemp521];
float nctemp525 = 1.0 - nctemp524;
float nctemp526 = Model->nu->a[nctemp506] * nctemp525;
float nctemp528 = nctemp526 * dt;
int nctemp530=i;
if((0>i)||(i>=Model->etaex->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etaex %d %d %d %d \n " ,135,i,0,Model->etaex->d[0]-1);
}
nctemp530=j*Model->etaex->d[0]+nctemp530;
if((0>j)||(j>=Model->etaex->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etaex %d %d %d %d \n " ,135,j,1,Model->etaex->d[1]-1);
}
float nctemp533 = nctemp528 / Model->etaex->a[nctemp530];
int nctemp535=i;
if((0>i)||(i>=El2d->exx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->exx %d %d %d %d \n " ,136,i,0,El2d->exx->d[0]-1);
}
nctemp535=j*El2d->exx->d[0]+nctemp535;
if((0>j)||(j>=El2d->exx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->exx %d %d %d %d \n " ,136,j,1,El2d->exx->d[1]-1);
}
float nctemp538 = nctemp533 * El2d->exx->a[nctemp535];
float nctemp539 = nctemp492 + nctemp538;
El2d->thetaxx->a[nctemp468] =nctemp539;
int nctemp543=i;
if((0>i)||(i>=El2d->thetaxy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->thetaxy %d %d %d %d \n " ,137,i,0,El2d->thetaxy->d[0]-1);
}
nctemp543=j*El2d->thetaxy->d[0]+nctemp543;
if((0>j)||(j>=El2d->thetaxy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->thetaxy %d %d %d %d \n " ,137,j,1,El2d->thetaxy->d[1]-1);
}
int nctemp553=i;
if((0>i)||(i>=El2d->thetaxy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->thetaxy %d %d %d %d \n " ,137,i,0,El2d->thetaxy->d[0]-1);
}
nctemp553=j*El2d->thetaxy->d[0]+nctemp553;
if((0>j)||(j>=El2d->thetaxy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->thetaxy %d %d %d %d \n " ,137,j,1,El2d->thetaxy->d[1]-1);
}
float nctemp560= -dt;
int nctemp562=i;
if((0>i)||(i>=Model->etasy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etasy %d %d %d %d \n " ,137,i,0,Model->etasy->d[0]-1);
}
nctemp562=j*Model->etasy->d[0]+nctemp562;
if((0>j)||(j>=Model->etasy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etasy %d %d %d %d \n " ,137,j,1,Model->etasy->d[1]-1);
}
float nctemp565 = nctemp560 / Model->etasy->a[nctemp562];
float nctemp557= nctemp565;
float nctemp566=LibeExp(nctemp557);
float nctemp567 = El2d->thetaxy->a[nctemp553] * nctemp566;
int nctemp581=i;
if((0>i)||(i>=Model->nu->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->nu %d %d %d %d \n " ,138,i,0,Model->nu->d[0]-1);
}
nctemp581=j*Model->nu->d[0]+nctemp581;
if((0>j)||(j>=Model->nu->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->nu %d %d %d %d \n " ,138,j,1,Model->nu->d[1]-1);
}
int nctemp592=i;
if((0>i)||(i>=Model->etaey->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etaey %d %d %d %d \n " ,138,i,0,Model->etaey->d[0]-1);
}
nctemp592=j*Model->etaey->d[0]+nctemp592;
if((0>j)||(j>=Model->etaey->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etaey %d %d %d %d \n " ,138,j,1,Model->etaey->d[1]-1);
}
int nctemp596=i;
if((0>i)||(i>=Model->etasy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etasy %d %d %d %d \n " ,139,i,0,Model->etasy->d[0]-1);
}
nctemp596=j*Model->etasy->d[0]+nctemp596;
if((0>j)||(j>=Model->etasy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etasy %d %d %d %d \n " ,139,j,1,Model->etasy->d[1]-1);
}
float nctemp599 = Model->etaey->a[nctemp592] / Model->etasy->a[nctemp596];
float nctemp600 = 1.0 - nctemp599;
float nctemp601 = Model->nu->a[nctemp581] * nctemp600;
float nctemp603 = nctemp601 * dt;
int nctemp605=i;
if((0>i)||(i>=Model->etaey->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etaey %d %d %d %d \n " ,139,i,0,Model->etaey->d[0]-1);
}
nctemp605=j*Model->etaey->d[0]+nctemp605;
if((0>j)||(j>=Model->etaey->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etaey %d %d %d %d \n " ,139,j,1,Model->etaey->d[1]-1);
}
float nctemp608 = nctemp603 / Model->etaey->a[nctemp605];
int nctemp610=i;
if((0>i)||(i>=El2d->exy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->exy %d %d %d %d \n " ,140,i,0,El2d->exy->d[0]-1);
}
nctemp610=j*El2d->exy->d[0]+nctemp610;
if((0>j)||(j>=El2d->exy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->exy %d %d %d %d \n " ,140,j,1,El2d->exy->d[1]-1);
}
float nctemp613 = nctemp608 * El2d->exy->a[nctemp610];
float nctemp614 = nctemp567 + nctemp613;
El2d->thetaxy->a[nctemp543] =nctemp614;
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
nx =Model->nx;
ny =Model->ny;
dt =Model->dt;

 #pragma omp parallel for
for(j=0;j<ny;j++){for(i=0;i<nx;i++){{
{
int nctemp634=i;
if((0>i)||(i>=El2d->vy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->vy %d %d %d %d \n " ,161,i,0,El2d->vy->d[0]-1);
}
nctemp634=j*El2d->vy->d[0]+nctemp634;
if((0>j)||(j>=El2d->vy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->vy %d %d %d %d \n " ,161,j,1,El2d->vy->d[1]-1);
}
int nctemp651=i;
if((0>i)||(i>=Model->nu->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->nu %d %d %d %d \n " ,161,i,0,Model->nu->d[0]-1);
}
nctemp651=j*Model->nu->d[0]+nctemp651;
if((0>j)||(j>=Model->nu->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->nu %d %d %d %d \n " ,161,j,1,Model->nu->d[1]-1);
}
float nctemp654 = dt * Model->nu->a[nctemp651];
int nctemp659=i;
if((0>i)||(i>=El2d->eyy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->eyy %d %d %d %d \n " ,161,i,0,El2d->eyy->d[0]-1);
}
nctemp659=j*El2d->eyy->d[0]+nctemp659;
if((0>j)||(j>=El2d->eyy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->eyy %d %d %d %d \n " ,161,j,1,El2d->eyy->d[1]-1);
}
int nctemp663=i;
if((0>i)||(i>=El2d->eyx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->eyx %d %d %d %d \n " ,161,i,0,El2d->eyx->d[0]-1);
}
nctemp663=j*El2d->eyx->d[0]+nctemp663;
if((0>j)||(j>=El2d->eyx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->eyx %d %d %d %d \n " ,161,j,1,El2d->eyx->d[1]-1);
}
float nctemp666 = El2d->eyy->a[nctemp659] + El2d->eyx->a[nctemp663];
float nctemp667 = nctemp654 * nctemp666;
int nctemp676=i;
if((0>i)||(i>=El2d->thetayy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->thetayy %d %d %d %d \n " ,162,i,0,El2d->thetayy->d[0]-1);
}
nctemp676=j*El2d->thetayy->d[0]+nctemp676;
if((0>j)||(j>=El2d->thetayy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->thetayy %d %d %d %d \n " ,162,j,1,El2d->thetayy->d[1]-1);
}
int nctemp680=i;
if((0>i)||(i>=El2d->thetayx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->thetayx %d %d %d %d \n " ,162,i,0,El2d->thetayx->d[0]-1);
}
nctemp680=j*El2d->thetayx->d[0]+nctemp680;
if((0>j)||(j>=El2d->thetayx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->thetayx %d %d %d %d \n " ,162,j,1,El2d->thetayx->d[1]-1);
}
float nctemp683 = El2d->thetayy->a[nctemp676] + El2d->thetayx->a[nctemp680];
float nctemp684 = dt * nctemp683;
float nctemp685 = nctemp667 + nctemp684;
int nctemp687=i;
if((0>i)||(i>=El2d->vy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->vy %d %d %d %d \n " ,163,i,0,El2d->vy->d[0]-1);
}
nctemp687=j*El2d->vy->d[0]+nctemp687;
if((0>j)||(j>=El2d->vy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->vy %d %d %d %d \n " ,163,j,1,El2d->vy->d[1]-1);
}
float nctemp690 = nctemp685 + El2d->vy->a[nctemp687];
El2d->vy->a[nctemp634] =nctemp690;
int nctemp694=i;
if((0>i)||(i>=El2d->thetayy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->thetayy %d %d %d %d \n " ,165,i,0,El2d->thetayy->d[0]-1);
}
nctemp694=j*El2d->thetayy->d[0]+nctemp694;
if((0>j)||(j>=El2d->thetayy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->thetayy %d %d %d %d \n " ,165,j,1,El2d->thetayy->d[1]-1);
}
int nctemp704=i;
if((0>i)||(i>=El2d->thetayy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->thetayy %d %d %d %d \n " ,165,i,0,El2d->thetayy->d[0]-1);
}
nctemp704=j*El2d->thetayy->d[0]+nctemp704;
if((0>j)||(j>=El2d->thetayy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->thetayy %d %d %d %d \n " ,165,j,1,El2d->thetayy->d[1]-1);
}
float nctemp711= -dt;
int nctemp713=i;
if((0>i)||(i>=Model->etasy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etasy %d %d %d %d \n " ,165,i,0,Model->etasy->d[0]-1);
}
nctemp713=j*Model->etasy->d[0]+nctemp713;
if((0>j)||(j>=Model->etasy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etasy %d %d %d %d \n " ,165,j,1,Model->etasy->d[1]-1);
}
float nctemp716 = nctemp711 / Model->etasy->a[nctemp713];
float nctemp708= nctemp716;
float nctemp717=LibeExp(nctemp708);
float nctemp718 = El2d->thetayy->a[nctemp704] * nctemp717;
int nctemp732=i;
if((0>i)||(i>=Model->nu->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->nu %d %d %d %d \n " ,166,i,0,Model->nu->d[0]-1);
}
nctemp732=j*Model->nu->d[0]+nctemp732;
if((0>j)||(j>=Model->nu->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->nu %d %d %d %d \n " ,166,j,1,Model->nu->d[1]-1);
}
int nctemp743=i;
if((0>i)||(i>=Model->etaey->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etaey %d %d %d %d \n " ,166,i,0,Model->etaey->d[0]-1);
}
nctemp743=j*Model->etaey->d[0]+nctemp743;
if((0>j)||(j>=Model->etaey->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etaey %d %d %d %d \n " ,166,j,1,Model->etaey->d[1]-1);
}
int nctemp747=i;
if((0>i)||(i>=Model->etasy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etasy %d %d %d %d \n " ,167,i,0,Model->etasy->d[0]-1);
}
nctemp747=j*Model->etasy->d[0]+nctemp747;
if((0>j)||(j>=Model->etasy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etasy %d %d %d %d \n " ,167,j,1,Model->etasy->d[1]-1);
}
float nctemp750 = Model->etaey->a[nctemp743] / Model->etasy->a[nctemp747];
float nctemp751 = 1.0 - nctemp750;
float nctemp752 = Model->nu->a[nctemp732] * nctemp751;
float nctemp754 = nctemp752 * dt;
int nctemp756=i;
if((0>i)||(i>=Model->etaey->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etaey %d %d %d %d \n " ,167,i,0,Model->etaey->d[0]-1);
}
nctemp756=j*Model->etaey->d[0]+nctemp756;
if((0>j)||(j>=Model->etaey->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etaey %d %d %d %d \n " ,167,j,1,Model->etaey->d[1]-1);
}
float nctemp759 = nctemp754 / Model->etaey->a[nctemp756];
int nctemp761=i;
if((0>i)||(i>=El2d->eyy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->eyy %d %d %d %d \n " ,168,i,0,El2d->eyy->d[0]-1);
}
nctemp761=j*El2d->eyy->d[0]+nctemp761;
if((0>j)||(j>=El2d->eyy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->eyy %d %d %d %d \n " ,168,j,1,El2d->eyy->d[1]-1);
}
float nctemp764 = nctemp759 * El2d->eyy->a[nctemp761];
float nctemp765 = nctemp718 + nctemp764;
El2d->thetayy->a[nctemp694] =nctemp765;
int nctemp769=i;
if((0>i)||(i>=El2d->thetayx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->thetayx %d %d %d %d \n " ,169,i,0,El2d->thetayx->d[0]-1);
}
nctemp769=j*El2d->thetayx->d[0]+nctemp769;
if((0>j)||(j>=El2d->thetayx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->thetayx %d %d %d %d \n " ,169,j,1,El2d->thetayx->d[1]-1);
}
int nctemp779=i;
if((0>i)||(i>=El2d->thetayx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->thetayx %d %d %d %d \n " ,169,i,0,El2d->thetayx->d[0]-1);
}
nctemp779=j*El2d->thetayx->d[0]+nctemp779;
if((0>j)||(j>=El2d->thetayx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->thetayx %d %d %d %d \n " ,169,j,1,El2d->thetayx->d[1]-1);
}
float nctemp786= -dt;
int nctemp788=i;
if((0>i)||(i>=Model->etasx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etasx %d %d %d %d \n " ,169,i,0,Model->etasx->d[0]-1);
}
nctemp788=j*Model->etasx->d[0]+nctemp788;
if((0>j)||(j>=Model->etasx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etasx %d %d %d %d \n " ,169,j,1,Model->etasx->d[1]-1);
}
float nctemp791 = nctemp786 / Model->etasx->a[nctemp788];
float nctemp783= nctemp791;
float nctemp792=LibeExp(nctemp783);
float nctemp793 = El2d->thetayx->a[nctemp779] * nctemp792;
int nctemp807=i;
if((0>i)||(i>=Model->nu->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->nu %d %d %d %d \n " ,170,i,0,Model->nu->d[0]-1);
}
nctemp807=j*Model->nu->d[0]+nctemp807;
if((0>j)||(j>=Model->nu->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->nu %d %d %d %d \n " ,170,j,1,Model->nu->d[1]-1);
}
int nctemp818=i;
if((0>i)||(i>=Model->etaex->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etaex %d %d %d %d \n " ,170,i,0,Model->etaex->d[0]-1);
}
nctemp818=j*Model->etaex->d[0]+nctemp818;
if((0>j)||(j>=Model->etaex->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etaex %d %d %d %d \n " ,170,j,1,Model->etaex->d[1]-1);
}
int nctemp822=i;
if((0>i)||(i>=Model->etasx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etasx %d %d %d %d \n " ,171,i,0,Model->etasx->d[0]-1);
}
nctemp822=j*Model->etasx->d[0]+nctemp822;
if((0>j)||(j>=Model->etasx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etasx %d %d %d %d \n " ,171,j,1,Model->etasx->d[1]-1);
}
float nctemp825 = Model->etaex->a[nctemp818] / Model->etasx->a[nctemp822];
float nctemp826 = 1.0 - nctemp825;
float nctemp827 = Model->nu->a[nctemp807] * nctemp826;
float nctemp829 = nctemp827 * dt;
int nctemp831=i;
if((0>i)||(i>=Model->etaex->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etaex %d %d %d %d \n " ,171,i,0,Model->etaex->d[0]-1);
}
nctemp831=j*Model->etaex->d[0]+nctemp831;
if((0>j)||(j>=Model->etaex->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etaex %d %d %d %d \n " ,171,j,1,Model->etaex->d[1]-1);
}
float nctemp834 = nctemp829 / Model->etaex->a[nctemp831];
int nctemp836=i;
if((0>i)||(i>=El2d->eyx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->eyx %d %d %d %d \n " ,172,i,0,El2d->eyx->d[0]-1);
}
nctemp836=j*El2d->eyx->d[0]+nctemp836;
if((0>j)||(j>=El2d->eyx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->eyx %d %d %d %d \n " ,172,j,1,El2d->eyx->d[1]-1);
}
float nctemp839 = nctemp834 * El2d->eyx->a[nctemp836];
float nctemp840 = nctemp793 + nctemp839;
El2d->thetayx->a[nctemp769] =nctemp840;
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
nx =Model->nx;
ny =Model->ny;
dt =Model->dt;

 #pragma omp parallel for
for(j=0;j<ny;j++){for(i=0;i<nx;i++){{
{
int nctemp860=i;
if((0>i)||(i>=El2d->sigmaxx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmaxx %d %d %d %d \n " ,187,i,0,El2d->sigmaxx->d[0]-1);
}
nctemp860=j*El2d->sigmaxx->d[0]+nctemp860;
if((0>j)||(j>=El2d->sigmaxx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmaxx %d %d %d %d \n " ,187,j,1,El2d->sigmaxx->d[1]-1);
}
int nctemp880=i;
if((0>i)||(i>=Model->lambda->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->lambda %d %d %d %d \n " ,187,i,0,Model->lambda->d[0]-1);
}
nctemp880=j*Model->lambda->d[0]+nctemp880;
if((0>j)||(j>=Model->lambda->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->lambda %d %d %d %d \n " ,187,j,1,Model->lambda->d[1]-1);
}
float nctemp883 = Model->dt * Model->lambda->a[nctemp880];
int nctemp888=i;
if((0>i)||(i>=El2d->exx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->exx %d %d %d %d \n " ,188,i,0,El2d->exx->d[0]-1);
}
nctemp888=j*El2d->exx->d[0]+nctemp888;
if((0>j)||(j>=El2d->exx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->exx %d %d %d %d \n " ,188,j,1,El2d->exx->d[1]-1);
}
int nctemp892=i;
if((0>i)||(i>=El2d->eyy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->eyy %d %d %d %d \n " ,188,i,0,El2d->eyy->d[0]-1);
}
nctemp892=j*El2d->eyy->d[0]+nctemp892;
if((0>j)||(j>=El2d->eyy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->eyy %d %d %d %d \n " ,188,j,1,El2d->eyy->d[1]-1);
}
float nctemp895 = El2d->exx->a[nctemp888] + El2d->eyy->a[nctemp892];
float nctemp896 = nctemp883 * nctemp895;
float nctemp908 = Model->dt * 2.0;
int nctemp910=i;
if((0>i)||(i>=Model->mu->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->mu %d %d %d %d \n " ,189,i,0,Model->mu->d[0]-1);
}
nctemp910=j*Model->mu->d[0]+nctemp910;
if((0>j)||(j>=Model->mu->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->mu %d %d %d %d \n " ,189,j,1,Model->mu->d[1]-1);
}
float nctemp913 = nctemp908 * Model->mu->a[nctemp910];
int nctemp915=i;
if((0>i)||(i>=El2d->exx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->exx %d %d %d %d \n " ,189,i,0,El2d->exx->d[0]-1);
}
nctemp915=j*El2d->exx->d[0]+nctemp915;
if((0>j)||(j>=El2d->exx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->exx %d %d %d %d \n " ,189,j,1,El2d->exx->d[1]-1);
}
float nctemp918 = nctemp913 * El2d->exx->a[nctemp915];
float nctemp919 = nctemp896 + nctemp918;
int nctemp931=i;
if((0>i)||(i>=El2d->gammax->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->gammax %d %d %d %d \n " ,190,i,0,El2d->gammax->d[0]-1);
}
nctemp931=j*El2d->gammax->d[0]+nctemp931;
if((0>j)||(j>=El2d->gammax->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->gammax %d %d %d %d \n " ,190,j,1,El2d->gammax->d[1]-1);
}
int nctemp935=i;
if((0>i)||(i>=El2d->gammay->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->gammay %d %d %d %d \n " ,190,i,0,El2d->gammay->d[0]-1);
}
nctemp935=j*El2d->gammay->d[0]+nctemp935;
if((0>j)||(j>=El2d->gammay->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->gammay %d %d %d %d \n " ,190,j,1,El2d->gammay->d[1]-1);
}
float nctemp938 = El2d->gammax->a[nctemp931] + El2d->gammay->a[nctemp935];
int nctemp940=i;
if((0>i)||(i>=El2d->alphax->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->alphax %d %d %d %d \n " ,191,i,0,El2d->alphax->d[0]-1);
}
nctemp940=j*El2d->alphax->d[0]+nctemp940;
if((0>j)||(j>=El2d->alphax->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->alphax %d %d %d %d \n " ,191,j,1,El2d->alphax->d[1]-1);
}
float nctemp943 = nctemp938 + El2d->alphax->a[nctemp940];
float nctemp944 = dt * nctemp943;
float nctemp945 = nctemp919 + nctemp944;
int nctemp947=i;
if((0>i)||(i>=El2d->sigmaxx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmaxx %d %d %d %d \n " ,192,i,0,El2d->sigmaxx->d[0]-1);
}
nctemp947=j*El2d->sigmaxx->d[0]+nctemp947;
if((0>j)||(j>=El2d->sigmaxx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmaxx %d %d %d %d \n " ,192,j,1,El2d->sigmaxx->d[1]-1);
}
float nctemp950 = nctemp945 + El2d->sigmaxx->a[nctemp947];
El2d->sigmaxx->a[nctemp860] =nctemp950;
int nctemp954=i;
if((0>i)||(i>=El2d->sigmayy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmayy %d %d %d %d \n " ,194,i,0,El2d->sigmayy->d[0]-1);
}
nctemp954=j*El2d->sigmayy->d[0]+nctemp954;
if((0>j)||(j>=El2d->sigmayy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmayy %d %d %d %d \n " ,194,j,1,El2d->sigmayy->d[1]-1);
}
int nctemp974=i;
if((0>i)||(i>=Model->lambda->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->lambda %d %d %d %d \n " ,194,i,0,Model->lambda->d[0]-1);
}
nctemp974=j*Model->lambda->d[0]+nctemp974;
if((0>j)||(j>=Model->lambda->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->lambda %d %d %d %d \n " ,194,j,1,Model->lambda->d[1]-1);
}
float nctemp977 = Model->dt * Model->lambda->a[nctemp974];
int nctemp982=i;
if((0>i)||(i>=El2d->exx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->exx %d %d %d %d \n " ,195,i,0,El2d->exx->d[0]-1);
}
nctemp982=j*El2d->exx->d[0]+nctemp982;
if((0>j)||(j>=El2d->exx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->exx %d %d %d %d \n " ,195,j,1,El2d->exx->d[1]-1);
}
int nctemp986=i;
if((0>i)||(i>=El2d->eyy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->eyy %d %d %d %d \n " ,195,i,0,El2d->eyy->d[0]-1);
}
nctemp986=j*El2d->eyy->d[0]+nctemp986;
if((0>j)||(j>=El2d->eyy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->eyy %d %d %d %d \n " ,195,j,1,El2d->eyy->d[1]-1);
}
float nctemp989 = El2d->exx->a[nctemp982] + El2d->eyy->a[nctemp986];
float nctemp990 = nctemp977 * nctemp989;
float nctemp1002 = Model->dt * 2.0;
int nctemp1004=i;
if((0>i)||(i>=Model->mu->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->mu %d %d %d %d \n " ,196,i,0,Model->mu->d[0]-1);
}
nctemp1004=j*Model->mu->d[0]+nctemp1004;
if((0>j)||(j>=Model->mu->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->mu %d %d %d %d \n " ,196,j,1,Model->mu->d[1]-1);
}
float nctemp1007 = nctemp1002 * Model->mu->a[nctemp1004];
int nctemp1009=i;
if((0>i)||(i>=El2d->eyy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->eyy %d %d %d %d \n " ,196,i,0,El2d->eyy->d[0]-1);
}
nctemp1009=j*El2d->eyy->d[0]+nctemp1009;
if((0>j)||(j>=El2d->eyy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->eyy %d %d %d %d \n " ,196,j,1,El2d->eyy->d[1]-1);
}
float nctemp1012 = nctemp1007 * El2d->eyy->a[nctemp1009];
float nctemp1013 = nctemp990 + nctemp1012;
int nctemp1025=i;
if((0>i)||(i>=El2d->gammax->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->gammax %d %d %d %d \n " ,197,i,0,El2d->gammax->d[0]-1);
}
nctemp1025=j*El2d->gammax->d[0]+nctemp1025;
if((0>j)||(j>=El2d->gammax->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->gammax %d %d %d %d \n " ,197,j,1,El2d->gammax->d[1]-1);
}
int nctemp1029=i;
if((0>i)||(i>=El2d->gammay->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->gammay %d %d %d %d \n " ,197,i,0,El2d->gammay->d[0]-1);
}
nctemp1029=j*El2d->gammay->d[0]+nctemp1029;
if((0>j)||(j>=El2d->gammay->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->gammay %d %d %d %d \n " ,197,j,1,El2d->gammay->d[1]-1);
}
float nctemp1032 = El2d->gammax->a[nctemp1025] + El2d->gammay->a[nctemp1029];
int nctemp1034=i;
if((0>i)||(i>=El2d->alphay->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->alphay %d %d %d %d \n " ,198,i,0,El2d->alphay->d[0]-1);
}
nctemp1034=j*El2d->alphay->d[0]+nctemp1034;
if((0>j)||(j>=El2d->alphay->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->alphay %d %d %d %d \n " ,198,j,1,El2d->alphay->d[1]-1);
}
float nctemp1037 = nctemp1032 + El2d->alphay->a[nctemp1034];
float nctemp1038 = dt * nctemp1037;
float nctemp1039 = nctemp1013 + nctemp1038;
int nctemp1041=i;
if((0>i)||(i>=El2d->sigmayy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmayy %d %d %d %d \n " ,199,i,0,El2d->sigmayy->d[0]-1);
}
nctemp1041=j*El2d->sigmayy->d[0]+nctemp1041;
if((0>j)||(j>=El2d->sigmayy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmayy %d %d %d %d \n " ,199,j,1,El2d->sigmayy->d[1]-1);
}
float nctemp1044 = nctemp1039 + El2d->sigmayy->a[nctemp1041];
El2d->sigmayy->a[nctemp954] =nctemp1044;
int nctemp1048=i;
if((0>i)||(i>=El2d->p->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->p %d %d %d %d \n " ,201,i,0,El2d->p->d[0]-1);
}
nctemp1048=j*El2d->p->d[0]+nctemp1048;
if((0>j)||(j>=El2d->p->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->p %d %d %d %d \n " ,201,j,1,El2d->p->d[1]-1);
}
int nctemp1059=i;
if((0>i)||(i>=El2d->sigmaxx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmaxx %d %d %d %d \n " ,201,i,0,El2d->sigmaxx->d[0]-1);
}
nctemp1059=j*El2d->sigmaxx->d[0]+nctemp1059;
if((0>j)||(j>=El2d->sigmaxx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmaxx %d %d %d %d \n " ,201,j,1,El2d->sigmaxx->d[1]-1);
}
int nctemp1063=i;
if((0>i)||(i>=El2d->sigmayy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmayy %d %d %d %d \n " ,201,i,0,El2d->sigmayy->d[0]-1);
}
nctemp1063=j*El2d->sigmayy->d[0]+nctemp1063;
if((0>j)||(j>=El2d->sigmayy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmayy %d %d %d %d \n " ,201,j,1,El2d->sigmayy->d[1]-1);
}
float nctemp1066 = El2d->sigmaxx->a[nctemp1059] + El2d->sigmayy->a[nctemp1063];
float nctemp1067 = 0.5 * nctemp1066;
El2d->p->a[nctemp1048] =nctemp1067;
int nctemp1071=i;
if((0>i)||(i>=El2d->sigmaxy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmaxy %d %d %d %d \n " ,203,i,0,El2d->sigmaxy->d[0]-1);
}
nctemp1071=j*El2d->sigmaxy->d[0]+nctemp1071;
if((0>j)||(j>=El2d->sigmaxy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmaxy %d %d %d %d \n " ,203,j,1,El2d->sigmaxy->d[1]-1);
}
int nctemp1088=i;
if((0>i)||(i>=Model->mu->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->mu %d %d %d %d \n " ,203,i,0,Model->mu->d[0]-1);
}
nctemp1088=j*Model->mu->d[0]+nctemp1088;
if((0>j)||(j>=Model->mu->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->mu %d %d %d %d \n " ,203,j,1,Model->mu->d[1]-1);
}
float nctemp1091 = Model->dt * Model->mu->a[nctemp1088];
int nctemp1096=i;
if((0>i)||(i>=El2d->exy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->exy %d %d %d %d \n " ,203,i,0,El2d->exy->d[0]-1);
}
nctemp1096=j*El2d->exy->d[0]+nctemp1096;
if((0>j)||(j>=El2d->exy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->exy %d %d %d %d \n " ,203,j,1,El2d->exy->d[1]-1);
}
int nctemp1100=i;
if((0>i)||(i>=El2d->eyx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->eyx %d %d %d %d \n " ,203,i,0,El2d->eyx->d[0]-1);
}
nctemp1100=j*El2d->eyx->d[0]+nctemp1100;
if((0>j)||(j>=El2d->eyx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->eyx %d %d %d %d \n " ,203,j,1,El2d->eyx->d[1]-1);
}
float nctemp1103 = El2d->exy->a[nctemp1096] + El2d->eyx->a[nctemp1100];
float nctemp1104 = nctemp1091 * nctemp1103;
int nctemp1110=i;
if((0>i)||(i>=El2d->betaxy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->betaxy %d %d %d %d \n " ,204,i,0,El2d->betaxy->d[0]-1);
}
nctemp1110=j*El2d->betaxy->d[0]+nctemp1110;
if((0>j)||(j>=El2d->betaxy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->betaxy %d %d %d %d \n " ,204,j,1,El2d->betaxy->d[1]-1);
}
float nctemp1113 = dt * El2d->betaxy->a[nctemp1110];
float nctemp1114 = nctemp1104 + nctemp1113;
int nctemp1116=i;
if((0>i)||(i>=El2d->sigmaxy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmaxy %d %d %d %d \n " ,205,i,0,El2d->sigmaxy->d[0]-1);
}
nctemp1116=j*El2d->sigmaxy->d[0]+nctemp1116;
if((0>j)||(j>=El2d->sigmaxy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmaxy %d %d %d %d \n " ,205,j,1,El2d->sigmaxy->d[1]-1);
}
float nctemp1119 = nctemp1114 + El2d->sigmaxy->a[nctemp1116];
El2d->sigmaxy->a[nctemp1071] =nctemp1119;
int nctemp1123=i;
if((0>i)||(i>=El2d->sigmayx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmayx %d %d %d %d \n " ,207,i,0,El2d->sigmayx->d[0]-1);
}
nctemp1123=j*El2d->sigmayx->d[0]+nctemp1123;
if((0>j)||(j>=El2d->sigmayx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmayx %d %d %d %d \n " ,207,j,1,El2d->sigmayx->d[1]-1);
}
int nctemp1140=i;
if((0>i)||(i>=Model->mu->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->mu %d %d %d %d \n " ,207,i,0,Model->mu->d[0]-1);
}
nctemp1140=j*Model->mu->d[0]+nctemp1140;
if((0>j)||(j>=Model->mu->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->mu %d %d %d %d \n " ,207,j,1,Model->mu->d[1]-1);
}
float nctemp1143 = Model->dt * Model->mu->a[nctemp1140];
int nctemp1145=i;
if((0>i)||(i>=El2d->eyx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->eyx %d %d %d %d \n " ,207,i,0,El2d->eyx->d[0]-1);
}
nctemp1145=j*El2d->eyx->d[0]+nctemp1145;
if((0>j)||(j>=El2d->eyx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->eyx %d %d %d %d \n " ,207,j,1,El2d->eyx->d[1]-1);
}
float nctemp1148 = nctemp1143 * El2d->eyx->a[nctemp1145];
int nctemp1154=i;
if((0>i)||(i>=El2d->betayx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->betayx %d %d %d %d \n " ,208,i,0,El2d->betayx->d[0]-1);
}
nctemp1154=j*El2d->betayx->d[0]+nctemp1154;
if((0>j)||(j>=El2d->betayx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->betayx %d %d %d %d \n " ,208,j,1,El2d->betayx->d[1]-1);
}
float nctemp1157 = dt * El2d->betayx->a[nctemp1154];
float nctemp1158 = nctemp1148 + nctemp1157;
int nctemp1160=i;
if((0>i)||(i>=El2d->sigmayx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmayx %d %d %d %d \n " ,209,i,0,El2d->sigmayx->d[0]-1);
}
nctemp1160=j*El2d->sigmayx->d[0]+nctemp1160;
if((0>j)||(j>=El2d->sigmayx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmayx %d %d %d %d \n " ,209,j,1,El2d->sigmayx->d[1]-1);
}
float nctemp1163 = nctemp1158 + El2d->sigmayx->a[nctemp1160];
El2d->sigmayx->a[nctemp1123] =nctemp1163;
int nctemp1167=i;
if((0>i)||(i>=El2d->gammax->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->gammax %d %d %d %d \n " ,211,i,0,El2d->gammax->d[0]-1);
}
nctemp1167=j*El2d->gammax->d[0]+nctemp1167;
if((0>j)||(j>=El2d->gammax->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->gammax %d %d %d %d \n " ,211,j,1,El2d->gammax->d[1]-1);
}
int nctemp1177=i;
if((0>i)||(i>=El2d->gammax->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->gammax %d %d %d %d \n " ,211,i,0,El2d->gammax->d[0]-1);
}
nctemp1177=j*El2d->gammax->d[0]+nctemp1177;
if((0>j)||(j>=El2d->gammax->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->gammax %d %d %d %d \n " ,211,j,1,El2d->gammax->d[1]-1);
}
float nctemp1184= -dt;
int nctemp1186=i;
if((0>i)||(i>=Model->tausx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->tausx %d %d %d %d \n " ,211,i,0,Model->tausx->d[0]-1);
}
nctemp1186=j*Model->tausx->d[0]+nctemp1186;
if((0>j)||(j>=Model->tausx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->tausx %d %d %d %d \n " ,211,j,1,Model->tausx->d[1]-1);
}
float nctemp1189 = nctemp1184 / Model->tausx->a[nctemp1186];
float nctemp1181= nctemp1189;
float nctemp1190=LibeExp(nctemp1181);
float nctemp1191 = El2d->gammax->a[nctemp1177] * nctemp1190;
int nctemp1205=i;
if((0>i)||(i>=Model->lambda->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->lambda %d %d %d %d \n " ,212,i,0,Model->lambda->d[0]-1);
}
nctemp1205=j*Model->lambda->d[0]+nctemp1205;
if((0>j)||(j>=Model->lambda->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->lambda %d %d %d %d \n " ,212,j,1,Model->lambda->d[1]-1);
}
int nctemp1216=i;
if((0>i)||(i>=Model->tauex->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->tauex %d %d %d %d \n " ,212,i,0,Model->tauex->d[0]-1);
}
nctemp1216=j*Model->tauex->d[0]+nctemp1216;
if((0>j)||(j>=Model->tauex->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->tauex %d %d %d %d \n " ,212,j,1,Model->tauex->d[1]-1);
}
int nctemp1220=i;
if((0>i)||(i>=Model->tausx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->tausx %d %d %d %d \n " ,213,i,0,Model->tausx->d[0]-1);
}
nctemp1220=j*Model->tausx->d[0]+nctemp1220;
if((0>j)||(j>=Model->tausx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->tausx %d %d %d %d \n " ,213,j,1,Model->tausx->d[1]-1);
}
float nctemp1223 = Model->tauex->a[nctemp1216] / Model->tausx->a[nctemp1220];
float nctemp1224 = 1.0 - nctemp1223;
float nctemp1225 = Model->lambda->a[nctemp1205] * nctemp1224;
float nctemp1227 = nctemp1225 * dt;
int nctemp1229=i;
if((0>i)||(i>=Model->tauex->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->tauex %d %d %d %d \n " ,213,i,0,Model->tauex->d[0]-1);
}
nctemp1229=j*Model->tauex->d[0]+nctemp1229;
if((0>j)||(j>=Model->tauex->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->tauex %d %d %d %d \n " ,213,j,1,Model->tauex->d[1]-1);
}
float nctemp1232 = nctemp1227 / Model->tauex->a[nctemp1229];
int nctemp1234=i;
if((0>i)||(i>=El2d->exx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->exx %d %d %d %d \n " ,214,i,0,El2d->exx->d[0]-1);
}
nctemp1234=j*El2d->exx->d[0]+nctemp1234;
if((0>j)||(j>=El2d->exx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->exx %d %d %d %d \n " ,214,j,1,El2d->exx->d[1]-1);
}
float nctemp1237 = nctemp1232 * El2d->exx->a[nctemp1234];
float nctemp1238 = nctemp1191 + nctemp1237;
El2d->gammax->a[nctemp1167] =nctemp1238;
int nctemp1242=i;
if((0>i)||(i>=El2d->gammay->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->gammay %d %d %d %d \n " ,216,i,0,El2d->gammay->d[0]-1);
}
nctemp1242=j*El2d->gammay->d[0]+nctemp1242;
if((0>j)||(j>=El2d->gammay->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->gammay %d %d %d %d \n " ,216,j,1,El2d->gammay->d[1]-1);
}
int nctemp1252=i;
if((0>i)||(i>=El2d->gammay->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->gammay %d %d %d %d \n " ,216,i,0,El2d->gammay->d[0]-1);
}
nctemp1252=j*El2d->gammay->d[0]+nctemp1252;
if((0>j)||(j>=El2d->gammay->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->gammay %d %d %d %d \n " ,216,j,1,El2d->gammay->d[1]-1);
}
float nctemp1259= -dt;
int nctemp1261=i;
if((0>i)||(i>=Model->tausy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->tausy %d %d %d %d \n " ,216,i,0,Model->tausy->d[0]-1);
}
nctemp1261=j*Model->tausy->d[0]+nctemp1261;
if((0>j)||(j>=Model->tausy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->tausy %d %d %d %d \n " ,216,j,1,Model->tausy->d[1]-1);
}
float nctemp1264 = nctemp1259 / Model->tausy->a[nctemp1261];
float nctemp1256= nctemp1264;
float nctemp1265=LibeExp(nctemp1256);
float nctemp1266 = El2d->gammay->a[nctemp1252] * nctemp1265;
int nctemp1280=i;
if((0>i)||(i>=Model->lambda->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->lambda %d %d %d %d \n " ,217,i,0,Model->lambda->d[0]-1);
}
nctemp1280=j*Model->lambda->d[0]+nctemp1280;
if((0>j)||(j>=Model->lambda->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->lambda %d %d %d %d \n " ,217,j,1,Model->lambda->d[1]-1);
}
int nctemp1291=i;
if((0>i)||(i>=Model->tauey->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->tauey %d %d %d %d \n " ,217,i,0,Model->tauey->d[0]-1);
}
nctemp1291=j*Model->tauey->d[0]+nctemp1291;
if((0>j)||(j>=Model->tauey->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->tauey %d %d %d %d \n " ,217,j,1,Model->tauey->d[1]-1);
}
int nctemp1295=i;
if((0>i)||(i>=Model->tausy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->tausy %d %d %d %d \n " ,218,i,0,Model->tausy->d[0]-1);
}
nctemp1295=j*Model->tausy->d[0]+nctemp1295;
if((0>j)||(j>=Model->tausy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->tausy %d %d %d %d \n " ,218,j,1,Model->tausy->d[1]-1);
}
float nctemp1298 = Model->tauey->a[nctemp1291] / Model->tausy->a[nctemp1295];
float nctemp1299 = 1.0 - nctemp1298;
float nctemp1300 = Model->lambda->a[nctemp1280] * nctemp1299;
float nctemp1302 = nctemp1300 * dt;
int nctemp1304=i;
if((0>i)||(i>=Model->tauey->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->tauey %d %d %d %d \n " ,218,i,0,Model->tauey->d[0]-1);
}
nctemp1304=j*Model->tauey->d[0]+nctemp1304;
if((0>j)||(j>=Model->tauey->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->tauey %d %d %d %d \n " ,218,j,1,Model->tauey->d[1]-1);
}
float nctemp1307 = nctemp1302 / Model->tauey->a[nctemp1304];
int nctemp1309=i;
if((0>i)||(i>=El2d->eyy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->eyy %d %d %d %d \n " ,219,i,0,El2d->eyy->d[0]-1);
}
nctemp1309=j*El2d->eyy->d[0]+nctemp1309;
if((0>j)||(j>=El2d->eyy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->eyy %d %d %d %d \n " ,219,j,1,El2d->eyy->d[1]-1);
}
float nctemp1312 = nctemp1307 * El2d->eyy->a[nctemp1309];
float nctemp1313 = nctemp1266 + nctemp1312;
El2d->gammay->a[nctemp1242] =nctemp1313;
int nctemp1317=i;
if((0>i)||(i>=El2d->alphax->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->alphax %d %d %d %d \n " ,221,i,0,El2d->alphax->d[0]-1);
}
nctemp1317=j*El2d->alphax->d[0]+nctemp1317;
if((0>j)||(j>=El2d->alphax->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->alphax %d %d %d %d \n " ,221,j,1,El2d->alphax->d[1]-1);
}
int nctemp1327=i;
if((0>i)||(i>=El2d->alphax->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->alphax %d %d %d %d \n " ,221,i,0,El2d->alphax->d[0]-1);
}
nctemp1327=j*El2d->alphax->d[0]+nctemp1327;
if((0>j)||(j>=El2d->alphax->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->alphax %d %d %d %d \n " ,221,j,1,El2d->alphax->d[1]-1);
}
float nctemp1334= -dt;
int nctemp1336=i;
if((0>i)||(i>=Model->chisx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chisx %d %d %d %d \n " ,221,i,0,Model->chisx->d[0]-1);
}
nctemp1336=j*Model->chisx->d[0]+nctemp1336;
if((0>j)||(j>=Model->chisx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chisx %d %d %d %d \n " ,221,j,1,Model->chisx->d[1]-1);
}
float nctemp1339 = nctemp1334 / Model->chisx->a[nctemp1336];
float nctemp1331= nctemp1339;
float nctemp1340=LibeExp(nctemp1331);
float nctemp1341 = El2d->alphax->a[nctemp1327] * nctemp1340;
int nctemp1355=i;
if((0>i)||(i>=Model->mu->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->mu %d %d %d %d \n " ,222,i,0,Model->mu->d[0]-1);
}
nctemp1355=j*Model->mu->d[0]+nctemp1355;
if((0>j)||(j>=Model->mu->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->mu %d %d %d %d \n " ,222,j,1,Model->mu->d[1]-1);
}
int nctemp1366=i;
if((0>i)||(i>=Model->chiex->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chiex %d %d %d %d \n " ,222,i,0,Model->chiex->d[0]-1);
}
nctemp1366=j*Model->chiex->d[0]+nctemp1366;
if((0>j)||(j>=Model->chiex->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chiex %d %d %d %d \n " ,222,j,1,Model->chiex->d[1]-1);
}
int nctemp1370=i;
if((0>i)||(i>=Model->chisx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chisx %d %d %d %d \n " ,223,i,0,Model->chisx->d[0]-1);
}
nctemp1370=j*Model->chisx->d[0]+nctemp1370;
if((0>j)||(j>=Model->chisx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chisx %d %d %d %d \n " ,223,j,1,Model->chisx->d[1]-1);
}
float nctemp1373 = Model->chiex->a[nctemp1366] / Model->chisx->a[nctemp1370];
float nctemp1374 = 1.0 - nctemp1373;
float nctemp1375 = Model->mu->a[nctemp1355] * nctemp1374;
float nctemp1377 = nctemp1375 * dt;
int nctemp1379=i;
if((0>i)||(i>=Model->chiex->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chiex %d %d %d %d \n " ,223,i,0,Model->chiex->d[0]-1);
}
nctemp1379=j*Model->chiex->d[0]+nctemp1379;
if((0>j)||(j>=Model->chiex->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chiex %d %d %d %d \n " ,223,j,1,Model->chiex->d[1]-1);
}
float nctemp1382 = nctemp1377 / Model->chiex->a[nctemp1379];
int nctemp1384=i;
if((0>i)||(i>=El2d->exx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->exx %d %d %d %d \n " ,224,i,0,El2d->exx->d[0]-1);
}
nctemp1384=j*El2d->exx->d[0]+nctemp1384;
if((0>j)||(j>=El2d->exx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->exx %d %d %d %d \n " ,224,j,1,El2d->exx->d[1]-1);
}
float nctemp1387 = nctemp1382 * El2d->exx->a[nctemp1384];
float nctemp1388 = nctemp1341 + nctemp1387;
El2d->alphax->a[nctemp1317] =nctemp1388;
int nctemp1392=i;
if((0>i)||(i>=El2d->alphay->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->alphay %d %d %d %d \n " ,226,i,0,El2d->alphay->d[0]-1);
}
nctemp1392=j*El2d->alphay->d[0]+nctemp1392;
if((0>j)||(j>=El2d->alphay->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->alphay %d %d %d %d \n " ,226,j,1,El2d->alphay->d[1]-1);
}
int nctemp1402=i;
if((0>i)||(i>=El2d->alphay->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->alphay %d %d %d %d \n " ,226,i,0,El2d->alphay->d[0]-1);
}
nctemp1402=j*El2d->alphay->d[0]+nctemp1402;
if((0>j)||(j>=El2d->alphay->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->alphay %d %d %d %d \n " ,226,j,1,El2d->alphay->d[1]-1);
}
float nctemp1409= -dt;
int nctemp1411=i;
if((0>i)||(i>=Model->chisx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chisx %d %d %d %d \n " ,226,i,0,Model->chisx->d[0]-1);
}
nctemp1411=j*Model->chisx->d[0]+nctemp1411;
if((0>j)||(j>=Model->chisx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chisx %d %d %d %d \n " ,226,j,1,Model->chisx->d[1]-1);
}
float nctemp1414 = nctemp1409 / Model->chisx->a[nctemp1411];
float nctemp1406= nctemp1414;
float nctemp1415=LibeExp(nctemp1406);
float nctemp1416 = El2d->alphay->a[nctemp1402] * nctemp1415;
int nctemp1430=i;
if((0>i)||(i>=Model->mu->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->mu %d %d %d %d \n " ,227,i,0,Model->mu->d[0]-1);
}
nctemp1430=j*Model->mu->d[0]+nctemp1430;
if((0>j)||(j>=Model->mu->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->mu %d %d %d %d \n " ,227,j,1,Model->mu->d[1]-1);
}
int nctemp1441=i;
if((0>i)||(i>=Model->chiex->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chiex %d %d %d %d \n " ,227,i,0,Model->chiex->d[0]-1);
}
nctemp1441=j*Model->chiex->d[0]+nctemp1441;
if((0>j)||(j>=Model->chiex->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chiex %d %d %d %d \n " ,227,j,1,Model->chiex->d[1]-1);
}
int nctemp1445=i;
if((0>i)||(i>=Model->chisx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chisx %d %d %d %d \n " ,228,i,0,Model->chisx->d[0]-1);
}
nctemp1445=j*Model->chisx->d[0]+nctemp1445;
if((0>j)||(j>=Model->chisx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chisx %d %d %d %d \n " ,228,j,1,Model->chisx->d[1]-1);
}
float nctemp1448 = Model->chiex->a[nctemp1441] / Model->chisx->a[nctemp1445];
float nctemp1449 = 1.0 - nctemp1448;
float nctemp1450 = Model->mu->a[nctemp1430] * nctemp1449;
float nctemp1452 = nctemp1450 * dt;
int nctemp1454=i;
if((0>i)||(i>=Model->chiex->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chiex %d %d %d %d \n " ,228,i,0,Model->chiex->d[0]-1);
}
nctemp1454=j*Model->chiex->d[0]+nctemp1454;
if((0>j)||(j>=Model->chiex->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chiex %d %d %d %d \n " ,228,j,1,Model->chiex->d[1]-1);
}
float nctemp1457 = nctemp1452 / Model->chiex->a[nctemp1454];
int nctemp1459=i;
if((0>i)||(i>=El2d->eyy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->eyy %d %d %d %d \n " ,229,i,0,El2d->eyy->d[0]-1);
}
nctemp1459=j*El2d->eyy->d[0]+nctemp1459;
if((0>j)||(j>=El2d->eyy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->eyy %d %d %d %d \n " ,229,j,1,El2d->eyy->d[1]-1);
}
float nctemp1462 = nctemp1457 * El2d->eyy->a[nctemp1459];
float nctemp1463 = nctemp1416 + nctemp1462;
El2d->alphay->a[nctemp1392] =nctemp1463;
int nctemp1467=i;
if((0>i)||(i>=El2d->betaxy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->betaxy %d %d %d %d \n " ,231,i,0,El2d->betaxy->d[0]-1);
}
nctemp1467=j*El2d->betaxy->d[0]+nctemp1467;
if((0>j)||(j>=El2d->betaxy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->betaxy %d %d %d %d \n " ,231,j,1,El2d->betaxy->d[1]-1);
}
int nctemp1477=i;
if((0>i)||(i>=El2d->betaxy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->betaxy %d %d %d %d \n " ,231,i,0,El2d->betaxy->d[0]-1);
}
nctemp1477=j*El2d->betaxy->d[0]+nctemp1477;
if((0>j)||(j>=El2d->betaxy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->betaxy %d %d %d %d \n " ,231,j,1,El2d->betaxy->d[1]-1);
}
float nctemp1484= -dt;
int nctemp1486=i;
if((0>i)||(i>=Model->chisy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chisy %d %d %d %d \n " ,231,i,0,Model->chisy->d[0]-1);
}
nctemp1486=j*Model->chisy->d[0]+nctemp1486;
if((0>j)||(j>=Model->chisy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chisy %d %d %d %d \n " ,231,j,1,Model->chisy->d[1]-1);
}
float nctemp1489 = nctemp1484 / Model->chisy->a[nctemp1486];
float nctemp1481= nctemp1489;
float nctemp1490=LibeExp(nctemp1481);
float nctemp1491 = El2d->betaxy->a[nctemp1477] * nctemp1490;
int nctemp1505=i;
if((0>i)||(i>=Model->mu->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->mu %d %d %d %d \n " ,232,i,0,Model->mu->d[0]-1);
}
nctemp1505=j*Model->mu->d[0]+nctemp1505;
if((0>j)||(j>=Model->mu->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->mu %d %d %d %d \n " ,232,j,1,Model->mu->d[1]-1);
}
int nctemp1516=i;
if((0>i)||(i>=Model->chiey->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chiey %d %d %d %d \n " ,232,i,0,Model->chiey->d[0]-1);
}
nctemp1516=j*Model->chiey->d[0]+nctemp1516;
if((0>j)||(j>=Model->chiey->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chiey %d %d %d %d \n " ,232,j,1,Model->chiey->d[1]-1);
}
int nctemp1520=i;
if((0>i)||(i>=Model->chisy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chisy %d %d %d %d \n " ,233,i,0,Model->chisy->d[0]-1);
}
nctemp1520=j*Model->chisy->d[0]+nctemp1520;
if((0>j)||(j>=Model->chisy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chisy %d %d %d %d \n " ,233,j,1,Model->chisy->d[1]-1);
}
float nctemp1523 = Model->chiey->a[nctemp1516] / Model->chisy->a[nctemp1520];
float nctemp1524 = 1.0 - nctemp1523;
float nctemp1525 = Model->mu->a[nctemp1505] * nctemp1524;
float nctemp1527 = nctemp1525 * dt;
int nctemp1529=i;
if((0>i)||(i>=Model->chiey->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chiey %d %d %d %d \n " ,233,i,0,Model->chiey->d[0]-1);
}
nctemp1529=j*Model->chiey->d[0]+nctemp1529;
if((0>j)||(j>=Model->chiey->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chiey %d %d %d %d \n " ,233,j,1,Model->chiey->d[1]-1);
}
float nctemp1532 = nctemp1527 / Model->chiey->a[nctemp1529];
int nctemp1534=i;
if((0>i)||(i>=El2d->exy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->exy %d %d %d %d \n " ,234,i,0,El2d->exy->d[0]-1);
}
nctemp1534=j*El2d->exy->d[0]+nctemp1534;
if((0>j)||(j>=El2d->exy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->exy %d %d %d %d \n " ,234,j,1,El2d->exy->d[1]-1);
}
float nctemp1537 = nctemp1532 * El2d->exy->a[nctemp1534];
float nctemp1538 = nctemp1491 + nctemp1537;
El2d->betaxy->a[nctemp1467] =nctemp1538;
int nctemp1542=i;
if((0>i)||(i>=El2d->betayx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->betayx %d %d %d %d \n " ,236,i,0,El2d->betayx->d[0]-1);
}
nctemp1542=j*El2d->betayx->d[0]+nctemp1542;
if((0>j)||(j>=El2d->betayx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->betayx %d %d %d %d \n " ,236,j,1,El2d->betayx->d[1]-1);
}
int nctemp1552=i;
if((0>i)||(i>=El2d->betayx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->betayx %d %d %d %d \n " ,236,i,0,El2d->betayx->d[0]-1);
}
nctemp1552=j*El2d->betayx->d[0]+nctemp1552;
if((0>j)||(j>=El2d->betayx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->betayx %d %d %d %d \n " ,236,j,1,El2d->betayx->d[1]-1);
}
float nctemp1559= -dt;
int nctemp1561=i;
if((0>i)||(i>=Model->chisx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chisx %d %d %d %d \n " ,236,i,0,Model->chisx->d[0]-1);
}
nctemp1561=j*Model->chisx->d[0]+nctemp1561;
if((0>j)||(j>=Model->chisx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chisx %d %d %d %d \n " ,236,j,1,Model->chisx->d[1]-1);
}
float nctemp1564 = nctemp1559 / Model->chisx->a[nctemp1561];
float nctemp1556= nctemp1564;
float nctemp1565=LibeExp(nctemp1556);
float nctemp1566 = El2d->betayx->a[nctemp1552] * nctemp1565;
int nctemp1580=i;
if((0>i)||(i>=Model->mu->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->mu %d %d %d %d \n " ,237,i,0,Model->mu->d[0]-1);
}
nctemp1580=j*Model->mu->d[0]+nctemp1580;
if((0>j)||(j>=Model->mu->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->mu %d %d %d %d \n " ,237,j,1,Model->mu->d[1]-1);
}
int nctemp1591=i;
if((0>i)||(i>=Model->chiex->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chiex %d %d %d %d \n " ,237,i,0,Model->chiex->d[0]-1);
}
nctemp1591=j*Model->chiex->d[0]+nctemp1591;
if((0>j)||(j>=Model->chiex->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chiex %d %d %d %d \n " ,237,j,1,Model->chiex->d[1]-1);
}
int nctemp1595=i;
if((0>i)||(i>=Model->chisx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chisx %d %d %d %d \n " ,238,i,0,Model->chisx->d[0]-1);
}
nctemp1595=j*Model->chisx->d[0]+nctemp1595;
if((0>j)||(j>=Model->chisx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chisx %d %d %d %d \n " ,238,j,1,Model->chisx->d[1]-1);
}
float nctemp1598 = Model->chiex->a[nctemp1591] / Model->chisx->a[nctemp1595];
float nctemp1599 = 1.0 - nctemp1598;
float nctemp1600 = Model->mu->a[nctemp1580] * nctemp1599;
float nctemp1602 = nctemp1600 * dt;
int nctemp1604=i;
if((0>i)||(i>=Model->chiex->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chiex %d %d %d %d \n " ,238,i,0,Model->chiex->d[0]-1);
}
nctemp1604=j*Model->chiex->d[0]+nctemp1604;
if((0>j)||(j>=Model->chiex->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chiex %d %d %d %d \n " ,238,j,1,Model->chiex->d[1]-1);
}
float nctemp1607 = nctemp1602 / Model->chiex->a[nctemp1604];
int nctemp1609=i;
if((0>i)||(i>=El2d->eyx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->eyx %d %d %d %d \n " ,239,i,0,El2d->eyx->d[0]-1);
}
nctemp1609=j*El2d->eyx->d[0]+nctemp1609;
if((0>j)||(j>=El2d->eyx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->eyx %d %d %d %d \n " ,239,j,1,El2d->eyx->d[1]-1);
}
float nctemp1612 = nctemp1607 * El2d->eyx->a[nctemp1609];
float nctemp1613 = nctemp1566 + nctemp1612;
El2d->betayx->a[nctemp1542] =nctemp1613;
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
int err;
{
int nctemp1614 = (El2d->sresamp <= 0);
if(nctemp1614)
{
{
return 1;
}
}
int nctemp1623=El2d->sigmaxx->d[0];nx =nctemp1623;
int nctemp1631=El2d->sigmaxx->d[1];ny =nctemp1631;
int nctemp1643 = nx * ny;
n =nctemp1643;
int nctemp1647= it;
int nctemp1649= El2d->sresamp;
int nctemp1651=LibeMod(nctemp1647,nctemp1649);
int nctemp1644 = (nctemp1651 ==0);
if(nctemp1644)
{
{
int nctemp1656=0;
if((0>0)||(0>=El2d->snpflags->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->snpflags %d %d %d %d \n " ,261,0,0,El2d->snpflags->d[0]-1);
}
int nctemp1653 = (El2d->snpflags->a[nctemp1656] ==1);
if(nctemp1653)
{
{
nctempchar1 nctemp1665;
nctempchar1 *nctemp1664;
nctemp1665=*(nctempchar1*)(El2d->p);
int nctemp1672 = 4 * n;
nctemp1665.d[0]=nctemp1672;
nctemp1664=&nctemp1665;
tmp=nctemp1664;
int nctemp1674= El2d->fdp;
int nctemp1681 = 4 * n;
int nctemp1676= nctemp1681;
nctempchar1* nctemp1682= tmp;
int nctemp1685=LibeWrite(nctemp1674,nctemp1676,nctemp1682);
}
}
int nctemp1689=1;
if((0>1)||(1>=El2d->snpflags->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->snpflags %d %d %d %d \n " ,265,1,0,El2d->snpflags->d[0]-1);
}
int nctemp1686 = (El2d->snpflags->a[nctemp1689] ==1);
if(nctemp1686)
{
{
nctempchar1 nctemp1698;
nctempchar1 *nctemp1697;
nctemp1698=*(nctempchar1*)(El2d->vx);
int nctemp1705 = 4 * n;
nctemp1698.d[0]=nctemp1705;
nctemp1697=&nctemp1698;
tmp=nctemp1697;
int nctemp1710= El2d->fdvx;
int nctemp1717 = 4 * n;
int nctemp1712= nctemp1717;
nctempchar1* nctemp1718= tmp;
int nctemp1721=LibeWrite(nctemp1710,nctemp1712,nctemp1718);
err =nctemp1721;
}
}
int nctemp1725=2;
if((0>2)||(2>=El2d->snpflags->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->snpflags %d %d %d %d \n " ,269,2,0,El2d->snpflags->d[0]-1);
}
int nctemp1722 = (El2d->snpflags->a[nctemp1725] ==1);
if(nctemp1722)
{
{
nctempchar1 nctemp1734;
nctempchar1 *nctemp1733;
nctemp1734=*(nctempchar1*)(El2d->vy);
int nctemp1741 = 4 * n;
nctemp1734.d[0]=nctemp1741;
nctemp1733=&nctemp1734;
tmp=nctemp1733;
int nctemp1743= El2d->fdvy;
int nctemp1750 = 4 * n;
int nctemp1745= nctemp1750;
nctempchar1* nctemp1751= tmp;
int nctemp1754=LibeWrite(nctemp1743,nctemp1745,nctemp1751);
}
}
int nctemp1758=3;
if((0>3)||(3>=El2d->snpflags->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->snpflags %d %d %d %d \n " ,273,3,0,El2d->snpflags->d[0]-1);
}
int nctemp1755 = (El2d->snpflags->a[nctemp1758] ==1);
if(nctemp1755)
{
{
nctempchar1 nctemp1767;
nctempchar1 *nctemp1766;
nctemp1767=*(nctempchar1*)(El2d->sigmaxx);
int nctemp1774 = 4 * n;
nctemp1767.d[0]=nctemp1774;
nctemp1766=&nctemp1767;
tmp=nctemp1766;
int nctemp1776= El2d->fdsxx;
int nctemp1783 = 4 * n;
int nctemp1778= nctemp1783;
nctempchar1* nctemp1784= tmp;
int nctemp1787=LibeWrite(nctemp1776,nctemp1778,nctemp1784);
}
}
int nctemp1791=4;
if((0>4)||(4>=El2d->snpflags->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->snpflags %d %d %d %d \n " ,277,4,0,El2d->snpflags->d[0]-1);
}
int nctemp1788 = (El2d->snpflags->a[nctemp1791] ==1);
if(nctemp1788)
{
{
nctempchar1 nctemp1800;
nctempchar1 *nctemp1799;
nctemp1800=*(nctempchar1*)(El2d->sigmayy);
int nctemp1807 = 4 * n;
nctemp1800.d[0]=nctemp1807;
nctemp1799=&nctemp1800;
tmp=nctemp1799;
int nctemp1809= El2d->fdsyy;
int nctemp1816 = 4 * n;
int nctemp1811= nctemp1816;
nctempchar1* nctemp1817= tmp;
int nctemp1820=LibeWrite(nctemp1809,nctemp1811,nctemp1817);
}
}
int nctemp1824=5;
if((0>5)||(5>=El2d->snpflags->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->snpflags %d %d %d %d \n " ,281,5,0,El2d->snpflags->d[0]-1);
}
int nctemp1821 = (El2d->snpflags->a[nctemp1824] ==1);
if(nctemp1821)
{
{
nctempchar1 nctemp1833;
nctempchar1 *nctemp1832;
nctemp1833=*(nctempchar1*)(El2d->sigmaxy);
int nctemp1840 = 4 * n;
nctemp1833.d[0]=nctemp1840;
nctemp1832=&nctemp1833;
tmp=nctemp1832;
int nctemp1842= El2d->fdsxy;
int nctemp1849 = 4 * n;
int nctemp1844= nctemp1849;
nctempchar1* nctemp1850= tmp;
int nctemp1853=LibeWrite(nctemp1842,nctemp1844,nctemp1850);
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
int nctemp1859= l;
struct diff* nctemp1861=DiffNew(nctemp1859);
Diff =nctemp1861;
int nctemp1868=Model->nx;
nctemp1868=nctemp1868*Model->ny;
nctempfloat2 *nctemp1867;
nctemp1867=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1867->d[0]=Model->nx;
nctemp1867->d[1]=Model->ny;
nctemp1867->a=(float *)RunMalloc(sizeof(float)*nctemp1868);
tmp1=nctemp1867;
int nctemp1879=Model->nx;
nctemp1879=nctemp1879*Model->ny;
nctempfloat2 *nctemp1878;
nctemp1878=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1878->d[0]=Model->nx;
nctemp1878->d[1]=Model->ny;
nctemp1878->a=(float *)RunMalloc(sizeof(float)*nctemp1879);
tmp2=nctemp1878;
oldperc =0.0;
ns =El2d->ts;
int nctemp1900 = ns + nt;
ne =nctemp1900;
for(i = ns;i < ne;i = (i + 1)){
{
struct diff* nctemp1902= Diff;
nctempfloat2* nctemp1904= El2d->sigmaxx;
nctempfloat2* nctemp1907= El2d->exx;
float nctemp1910= Model->dx;
int nctemp1912=DiffDxplus(nctemp1902,nctemp1904,nctemp1907,nctemp1910);
struct diff* nctemp1914= Diff;
nctempfloat2* nctemp1916= El2d->sigmaxy;
nctempfloat2* nctemp1919= El2d->exy;
float nctemp1922= Model->dx;
int nctemp1924=DiffDyminus(nctemp1914,nctemp1916,nctemp1919,nctemp1922);
struct el2d* nctemp1926= El2d;
struct model* nctemp1928= Model;
int nctemp1930=El2dvx(nctemp1926,nctemp1928);
struct diff* nctemp1932= Diff;
nctempfloat2* nctemp1934= El2d->sigmayy;
nctempfloat2* nctemp1937= El2d->eyy;
float nctemp1940= Model->dx;
int nctemp1942=DiffDyplus(nctemp1932,nctemp1934,nctemp1937,nctemp1940);
struct diff* nctemp1944= Diff;
nctempfloat2* nctemp1946= El2d->sigmaxy;
nctempfloat2* nctemp1949= El2d->eyx;
float nctemp1952= Model->dx;
int nctemp1954=DiffDxminus(nctemp1944,nctemp1946,nctemp1949,nctemp1952);
struct el2d* nctemp1956= El2d;
struct model* nctemp1958= Model;
int nctemp1960=El2dvy(nctemp1956,nctemp1958);
struct diff* nctemp1962= Diff;
nctempfloat2* nctemp1964= El2d->vx;
nctempfloat2* nctemp1967= El2d->exx;
float nctemp1970= Model->dx;
int nctemp1972=DiffDxminus(nctemp1962,nctemp1964,nctemp1967,nctemp1970);
struct diff* nctemp1974= Diff;
nctempfloat2* nctemp1976= El2d->vy;
nctempfloat2* nctemp1979= El2d->eyy;
float nctemp1982= Model->dx;
int nctemp1984=DiffDyminus(nctemp1974,nctemp1976,nctemp1979,nctemp1982);
struct diff* nctemp1986= Diff;
nctempfloat2* nctemp1988= El2d->vy;
nctempfloat2* nctemp1991= El2d->eyx;
float nctemp1994= Model->dx;
int nctemp1996=DiffDxplus(nctemp1986,nctemp1988,nctemp1991,nctemp1994);
struct diff* nctemp1998= Diff;
nctempfloat2* nctemp2000= El2d->vx;
nctempfloat2* nctemp2003= El2d->exy;
float nctemp2006= Model->dx;
int nctemp2008=DiffDyplus(nctemp1998,nctemp2000,nctemp2003,nctemp2006);
struct el2d* nctemp2010= El2d;
struct model* nctemp2012= Model;
int nctemp2014=El2dstress(nctemp2010,nctemp2012);
for(k = 0;k < Src->Ns;k = (k + 1)){
{
int nctemp2019=k;
if((0>k)||(k>=Src->Sx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Src->Sx %d %d %d %d \n " ,356,k,0,Src->Sx->d[0]-1);
}
sx =Src->Sx->a[nctemp2019];
int nctemp2025=k;
if((0>k)||(k>=Src->Sy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Src->Sy %d %d %d %d \n " ,357,k,0,Src->Sy->d[0]-1);
}
sy =Src->Sy->a[nctemp2025];
int nctemp2030=sx;
if((0>sx)||(sx>=El2d->sigmaxx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmaxx %d %d %d %d \n " ,358,sx,0,El2d->sigmaxx->d[0]-1);
}
nctemp2030=sy*El2d->sigmaxx->d[0]+nctemp2030;
if((0>sy)||(sy>=El2d->sigmaxx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmaxx %d %d %d %d \n " ,358,sy,1,El2d->sigmaxx->d[1]-1);
}
int nctemp2037=sx;
if((0>sx)||(sx>=El2d->sigmaxx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmaxx %d %d %d %d \n " ,358,sx,0,El2d->sigmaxx->d[0]-1);
}
nctemp2037=sy*El2d->sigmaxx->d[0]+nctemp2037;
if((0>sy)||(sy>=El2d->sigmaxx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmaxx %d %d %d %d \n " ,358,sy,1,El2d->sigmaxx->d[1]-1);
}
int nctemp2048=i;
if((0>i)||(i>=Src->Sqxx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Src->Sqxx %d %d %d %d \n " ,359,i,0,Src->Sqxx->d[0]-1);
}
nctemp2048=k*Src->Sqxx->d[0]+nctemp2048;
if((0>k)||(k>=Src->Sqxx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Src->Sqxx %d %d %d %d \n " ,359,k,1,Src->Sqxx->d[1]-1);
}
float nctemp2056 = Model->dx * Model->dx;
float nctemp2057 = Src->Sqxx->a[nctemp2048] / nctemp2056;
float nctemp2058 = Model->dt * nctemp2057;
float nctemp2059 = El2d->sigmaxx->a[nctemp2037] + nctemp2058;
El2d->sigmaxx->a[nctemp2030] =nctemp2059;
int nctemp2063=sx;
if((0>sx)||(sx>=El2d->sigmayy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmayy %d %d %d %d \n " ,360,sx,0,El2d->sigmayy->d[0]-1);
}
nctemp2063=sy*El2d->sigmayy->d[0]+nctemp2063;
if((0>sy)||(sy>=El2d->sigmayy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmayy %d %d %d %d \n " ,360,sy,1,El2d->sigmayy->d[1]-1);
}
int nctemp2070=sx;
if((0>sx)||(sx>=El2d->sigmayy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmayy %d %d %d %d \n " ,360,sx,0,El2d->sigmayy->d[0]-1);
}
nctemp2070=sy*El2d->sigmayy->d[0]+nctemp2070;
if((0>sy)||(sy>=El2d->sigmayy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmayy %d %d %d %d \n " ,360,sy,1,El2d->sigmayy->d[1]-1);
}
int nctemp2081=i;
if((0>i)||(i>=Src->Sqyy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Src->Sqyy %d %d %d %d \n " ,361,i,0,Src->Sqyy->d[0]-1);
}
nctemp2081=k*Src->Sqyy->d[0]+nctemp2081;
if((0>k)||(k>=Src->Sqyy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Src->Sqyy %d %d %d %d \n " ,361,k,1,Src->Sqyy->d[1]-1);
}
float nctemp2089 = Model->dx * Model->dx;
float nctemp2090 = Src->Sqyy->a[nctemp2081] / nctemp2089;
float nctemp2091 = Model->dt * nctemp2090;
float nctemp2092 = El2d->sigmayy->a[nctemp2070] + nctemp2091;
El2d->sigmayy->a[nctemp2063] =nctemp2092;
int nctemp2096=sx;
if((0>sx)||(sx>=El2d->sigmayy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmayy %d %d %d %d \n " ,362,sx,0,El2d->sigmayy->d[0]-1);
}
nctemp2096=sy*El2d->sigmayy->d[0]+nctemp2096;
if((0>sy)||(sy>=El2d->sigmayy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmayy %d %d %d %d \n " ,362,sy,1,El2d->sigmayy->d[1]-1);
}
int nctemp2103=sx;
if((0>sx)||(sx>=El2d->sigmaxy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmaxy %d %d %d %d \n " ,362,sx,0,El2d->sigmaxy->d[0]-1);
}
nctemp2103=sy*El2d->sigmaxy->d[0]+nctemp2103;
if((0>sy)||(sy>=El2d->sigmaxy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmaxy %d %d %d %d \n " ,362,sy,1,El2d->sigmaxy->d[1]-1);
}
int nctemp2114=i;
if((0>i)||(i>=Src->Sqxy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Src->Sqxy %d %d %d %d \n " ,363,i,0,Src->Sqxy->d[0]-1);
}
nctemp2114=k*Src->Sqxy->d[0]+nctemp2114;
if((0>k)||(k>=Src->Sqxy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Src->Sqxy %d %d %d %d \n " ,363,k,1,Src->Sqxy->d[1]-1);
}
float nctemp2122 = Model->dx * Model->dx;
float nctemp2123 = Src->Sqxy->a[nctemp2114] / nctemp2122;
float nctemp2124 = Model->dt * nctemp2123;
float nctemp2125 = El2d->sigmaxy->a[nctemp2103] + nctemp2124;
El2d->sigmayy->a[nctemp2096] =nctemp2125;
int nctemp2129=sx;
if((0>sx)||(sx>=El2d->vx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->vx %d %d %d %d \n " ,364,sx,0,El2d->vx->d[0]-1);
}
nctemp2129=sy*El2d->vx->d[0]+nctemp2129;
if((0>sy)||(sy>=El2d->vx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->vx %d %d %d %d \n " ,364,sy,1,El2d->vx->d[1]-1);
}
int nctemp2136=sx;
if((0>sx)||(sx>=El2d->vx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->vx %d %d %d %d \n " ,364,sx,0,El2d->vx->d[0]-1);
}
nctemp2136=sy*El2d->vx->d[0]+nctemp2136;
if((0>sy)||(sy>=El2d->vx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->vx %d %d %d %d \n " ,364,sy,1,El2d->vx->d[1]-1);
}
int nctemp2147=i;
if((0>i)||(i>=Src->Sfx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Src->Sfx %d %d %d %d \n " ,365,i,0,Src->Sfx->d[0]-1);
}
nctemp2147=k*Src->Sfx->d[0]+nctemp2147;
if((0>k)||(k>=Src->Sfx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Src->Sfx %d %d %d %d \n " ,365,k,1,Src->Sfx->d[1]-1);
}
float nctemp2155 = Model->dx * Model->dx;
float nctemp2156 = Src->Sfx->a[nctemp2147] / nctemp2155;
float nctemp2157 = Model->dt * nctemp2156;
float nctemp2158 = El2d->vx->a[nctemp2136] + nctemp2157;
El2d->vx->a[nctemp2129] =nctemp2158;
int nctemp2162=sx;
if((0>sx)||(sx>=El2d->vy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->vy %d %d %d %d \n " ,366,sx,0,El2d->vy->d[0]-1);
}
nctemp2162=sy*El2d->vy->d[0]+nctemp2162;
if((0>sy)||(sy>=El2d->vy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->vy %d %d %d %d \n " ,366,sy,1,El2d->vy->d[1]-1);
}
int nctemp2169=sx;
if((0>sx)||(sx>=El2d->vy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->vy %d %d %d %d \n " ,366,sx,0,El2d->vy->d[0]-1);
}
nctemp2169=sy*El2d->vy->d[0]+nctemp2169;
if((0>sy)||(sy>=El2d->vy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->vy %d %d %d %d \n " ,366,sy,1,El2d->vy->d[1]-1);
}
int nctemp2180=i;
if((0>i)||(i>=Src->Sfy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Src->Sfy %d %d %d %d \n " ,367,i,0,Src->Sfy->d[0]-1);
}
nctemp2180=k*Src->Sfy->d[0]+nctemp2180;
if((0>k)||(k>=Src->Sfy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Src->Sfy %d %d %d %d \n " ,367,k,1,Src->Sfy->d[1]-1);
}
float nctemp2188 = Model->dx * Model->dx;
float nctemp2189 = Src->Sfy->a[nctemp2180] / nctemp2188;
float nctemp2190 = Model->dt * nctemp2189;
float nctemp2191 = El2d->vy->a[nctemp2169] + nctemp2190;
El2d->vy->a[nctemp2162] =nctemp2191;
}
}
float nctemp2203=(float)(i);
int nctemp2216 = ne - ns;
int nctemp2218 = nctemp2216 - 1;
float nctemp2207=(float)(nctemp2218);
float nctemp2219 = nctemp2203 / nctemp2207;
float nctemp2220 = 1000.0 * nctemp2219;
perc =nctemp2220;
float nctemp2228 = perc - oldperc;
int nctemp2221 = (nctemp2228 >= 10.0);
if(nctemp2221)
{
{
int nctemp2237=(int)(perc);
int nctemp2241 = nctemp2237 / 10;
iperc =nctemp2241;
int nctemp2245= iperc;
int nctemp2247= 10;
int nctemp2249=LibeMod(nctemp2245,nctemp2247);
int nctemp2242 = (nctemp2249 ==0);
if(nctemp2242)
{
{
int nctemp2252= 4;
struct nctempchar1 *nctemp2256;
static struct nctempchar1 nctemp2257 = {{ 20}, (char*)"percent completed: \0"};
nctemp2256=&nctemp2257;
nctempchar1* nctemp2254= nctemp2256;
int nctemp2258=LibePuts(nctemp2252,nctemp2254);
int nctemp2260= 4;
int nctemp2262= iperc;
int nctemp2264=LibePuti(nctemp2260,nctemp2262);
int nctemp2266= 4;
struct nctempchar1 *nctemp2270;
static struct nctempchar1 nctemp2271 = {{ 3}, (char*)"\n\0"};
nctemp2270=&nctemp2271;
nctempchar1* nctemp2268= nctemp2270;
int nctemp2272=LibePuts(nctemp2266,nctemp2268);
int nctemp2274= 4;
int nctemp2276=LibeFlush(nctemp2274);
}
}
oldperc =perc;
}
}
struct el2d* nctemp2282= El2d;
int nctemp2284= i;
int nctemp2286=El2dSnap(nctemp2282,nctemp2284);
}
}
int nctemp2295 = El2d->ts + ne;
El2d->ts =nctemp2295;
return 1;
}
}
