//  Translated by epsc  version: Tue Sep 29 12:51:09 2026

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
int nctemp1113=i;
if((0>i)||(i>=El2d->betaxy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->betaxy %d %d %d %d \n " ,204,i,0,El2d->betaxy->d[0]-1);
}
nctemp1113=j*El2d->betaxy->d[0]+nctemp1113;
if((0>j)||(j>=El2d->betaxy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->betaxy %d %d %d %d \n " ,204,j,1,El2d->betaxy->d[1]-1);
}
int nctemp1117=i;
if((0>i)||(i>=El2d->betayx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->betayx %d %d %d %d \n " ,204,i,0,El2d->betayx->d[0]-1);
}
nctemp1117=j*El2d->betayx->d[0]+nctemp1117;
if((0>j)||(j>=El2d->betayx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->betayx %d %d %d %d \n " ,204,j,1,El2d->betayx->d[1]-1);
}
float nctemp1120 = El2d->betaxy->a[nctemp1113] + El2d->betayx->a[nctemp1117];
float nctemp1121 = dt * nctemp1120;
float nctemp1122 = nctemp1104 + nctemp1121;
int nctemp1124=i;
if((0>i)||(i>=El2d->sigmaxy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmaxy %d %d %d %d \n " ,205,i,0,El2d->sigmaxy->d[0]-1);
}
nctemp1124=j*El2d->sigmaxy->d[0]+nctemp1124;
if((0>j)||(j>=El2d->sigmaxy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmaxy %d %d %d %d \n " ,205,j,1,El2d->sigmaxy->d[1]-1);
}
float nctemp1127 = nctemp1122 + El2d->sigmaxy->a[nctemp1124];
El2d->sigmaxy->a[nctemp1071] =nctemp1127;
int nctemp1131=i;
if((0>i)||(i>=El2d->sigmayx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmayx %d %d %d %d \n " ,207,i,0,El2d->sigmayx->d[0]-1);
}
nctemp1131=j*El2d->sigmayx->d[0]+nctemp1131;
if((0>j)||(j>=El2d->sigmayx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmayx %d %d %d %d \n " ,207,j,1,El2d->sigmayx->d[1]-1);
}
int nctemp1148=i;
if((0>i)||(i>=Model->mu->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->mu %d %d %d %d \n " ,207,i,0,Model->mu->d[0]-1);
}
nctemp1148=j*Model->mu->d[0]+nctemp1148;
if((0>j)||(j>=Model->mu->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->mu %d %d %d %d \n " ,207,j,1,Model->mu->d[1]-1);
}
float nctemp1151 = Model->dt * Model->mu->a[nctemp1148];
int nctemp1156=i;
if((0>i)||(i>=El2d->eyx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->eyx %d %d %d %d \n " ,207,i,0,El2d->eyx->d[0]-1);
}
nctemp1156=j*El2d->eyx->d[0]+nctemp1156;
if((0>j)||(j>=El2d->eyx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->eyx %d %d %d %d \n " ,207,j,1,El2d->eyx->d[1]-1);
}
int nctemp1160=i;
if((0>i)||(i>=El2d->exy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->exy %d %d %d %d \n " ,207,i,0,El2d->exy->d[0]-1);
}
nctemp1160=j*El2d->exy->d[0]+nctemp1160;
if((0>j)||(j>=El2d->exy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->exy %d %d %d %d \n " ,207,j,1,El2d->exy->d[1]-1);
}
float nctemp1163 = El2d->eyx->a[nctemp1156] + El2d->exy->a[nctemp1160];
float nctemp1164 = nctemp1151 * nctemp1163;
int nctemp1173=i;
if((0>i)||(i>=El2d->betayx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->betayx %d %d %d %d \n " ,208,i,0,El2d->betayx->d[0]-1);
}
nctemp1173=j*El2d->betayx->d[0]+nctemp1173;
if((0>j)||(j>=El2d->betayx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->betayx %d %d %d %d \n " ,208,j,1,El2d->betayx->d[1]-1);
}
int nctemp1177=i;
if((0>i)||(i>=El2d->betaxy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->betaxy %d %d %d %d \n " ,208,i,0,El2d->betaxy->d[0]-1);
}
nctemp1177=j*El2d->betaxy->d[0]+nctemp1177;
if((0>j)||(j>=El2d->betaxy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->betaxy %d %d %d %d \n " ,208,j,1,El2d->betaxy->d[1]-1);
}
float nctemp1180 = El2d->betayx->a[nctemp1173] + El2d->betaxy->a[nctemp1177];
float nctemp1181 = dt * nctemp1180;
float nctemp1182 = nctemp1164 + nctemp1181;
int nctemp1184=i;
if((0>i)||(i>=El2d->sigmayx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmayx %d %d %d %d \n " ,209,i,0,El2d->sigmayx->d[0]-1);
}
nctemp1184=j*El2d->sigmayx->d[0]+nctemp1184;
if((0>j)||(j>=El2d->sigmayx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmayx %d %d %d %d \n " ,209,j,1,El2d->sigmayx->d[1]-1);
}
float nctemp1187 = nctemp1182 + El2d->sigmayx->a[nctemp1184];
El2d->sigmayx->a[nctemp1131] =nctemp1187;
int nctemp1191=i;
if((0>i)||(i>=El2d->gammax->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->gammax %d %d %d %d \n " ,211,i,0,El2d->gammax->d[0]-1);
}
nctemp1191=j*El2d->gammax->d[0]+nctemp1191;
if((0>j)||(j>=El2d->gammax->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->gammax %d %d %d %d \n " ,211,j,1,El2d->gammax->d[1]-1);
}
int nctemp1201=i;
if((0>i)||(i>=El2d->gammax->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->gammax %d %d %d %d \n " ,211,i,0,El2d->gammax->d[0]-1);
}
nctemp1201=j*El2d->gammax->d[0]+nctemp1201;
if((0>j)||(j>=El2d->gammax->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->gammax %d %d %d %d \n " ,211,j,1,El2d->gammax->d[1]-1);
}
float nctemp1208= -dt;
int nctemp1210=i;
if((0>i)||(i>=Model->tausx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->tausx %d %d %d %d \n " ,211,i,0,Model->tausx->d[0]-1);
}
nctemp1210=j*Model->tausx->d[0]+nctemp1210;
if((0>j)||(j>=Model->tausx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->tausx %d %d %d %d \n " ,211,j,1,Model->tausx->d[1]-1);
}
float nctemp1213 = nctemp1208 / Model->tausx->a[nctemp1210];
float nctemp1205= nctemp1213;
float nctemp1214=LibeExp(nctemp1205);
float nctemp1215 = El2d->gammax->a[nctemp1201] * nctemp1214;
int nctemp1229=i;
if((0>i)||(i>=Model->lambda->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->lambda %d %d %d %d \n " ,212,i,0,Model->lambda->d[0]-1);
}
nctemp1229=j*Model->lambda->d[0]+nctemp1229;
if((0>j)||(j>=Model->lambda->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->lambda %d %d %d %d \n " ,212,j,1,Model->lambda->d[1]-1);
}
int nctemp1240=i;
if((0>i)||(i>=Model->tauex->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->tauex %d %d %d %d \n " ,212,i,0,Model->tauex->d[0]-1);
}
nctemp1240=j*Model->tauex->d[0]+nctemp1240;
if((0>j)||(j>=Model->tauex->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->tauex %d %d %d %d \n " ,212,j,1,Model->tauex->d[1]-1);
}
int nctemp1244=i;
if((0>i)||(i>=Model->tausx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->tausx %d %d %d %d \n " ,213,i,0,Model->tausx->d[0]-1);
}
nctemp1244=j*Model->tausx->d[0]+nctemp1244;
if((0>j)||(j>=Model->tausx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->tausx %d %d %d %d \n " ,213,j,1,Model->tausx->d[1]-1);
}
float nctemp1247 = Model->tauex->a[nctemp1240] / Model->tausx->a[nctemp1244];
float nctemp1248 = 1.0 - nctemp1247;
float nctemp1249 = Model->lambda->a[nctemp1229] * nctemp1248;
float nctemp1251 = nctemp1249 * dt;
int nctemp1253=i;
if((0>i)||(i>=Model->tauex->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->tauex %d %d %d %d \n " ,213,i,0,Model->tauex->d[0]-1);
}
nctemp1253=j*Model->tauex->d[0]+nctemp1253;
if((0>j)||(j>=Model->tauex->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->tauex %d %d %d %d \n " ,213,j,1,Model->tauex->d[1]-1);
}
float nctemp1256 = nctemp1251 / Model->tauex->a[nctemp1253];
int nctemp1258=i;
if((0>i)||(i>=El2d->exx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->exx %d %d %d %d \n " ,214,i,0,El2d->exx->d[0]-1);
}
nctemp1258=j*El2d->exx->d[0]+nctemp1258;
if((0>j)||(j>=El2d->exx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->exx %d %d %d %d \n " ,214,j,1,El2d->exx->d[1]-1);
}
float nctemp1261 = nctemp1256 * El2d->exx->a[nctemp1258];
float nctemp1262 = nctemp1215 + nctemp1261;
El2d->gammax->a[nctemp1191] =nctemp1262;
int nctemp1266=i;
if((0>i)||(i>=El2d->gammay->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->gammay %d %d %d %d \n " ,216,i,0,El2d->gammay->d[0]-1);
}
nctemp1266=j*El2d->gammay->d[0]+nctemp1266;
if((0>j)||(j>=El2d->gammay->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->gammay %d %d %d %d \n " ,216,j,1,El2d->gammay->d[1]-1);
}
int nctemp1276=i;
if((0>i)||(i>=El2d->gammay->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->gammay %d %d %d %d \n " ,216,i,0,El2d->gammay->d[0]-1);
}
nctemp1276=j*El2d->gammay->d[0]+nctemp1276;
if((0>j)||(j>=El2d->gammay->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->gammay %d %d %d %d \n " ,216,j,1,El2d->gammay->d[1]-1);
}
float nctemp1283= -dt;
int nctemp1285=i;
if((0>i)||(i>=Model->tausy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->tausy %d %d %d %d \n " ,216,i,0,Model->tausy->d[0]-1);
}
nctemp1285=j*Model->tausy->d[0]+nctemp1285;
if((0>j)||(j>=Model->tausy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->tausy %d %d %d %d \n " ,216,j,1,Model->tausy->d[1]-1);
}
float nctemp1288 = nctemp1283 / Model->tausy->a[nctemp1285];
float nctemp1280= nctemp1288;
float nctemp1289=LibeExp(nctemp1280);
float nctemp1290 = El2d->gammay->a[nctemp1276] * nctemp1289;
int nctemp1304=i;
if((0>i)||(i>=Model->lambda->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->lambda %d %d %d %d \n " ,217,i,0,Model->lambda->d[0]-1);
}
nctemp1304=j*Model->lambda->d[0]+nctemp1304;
if((0>j)||(j>=Model->lambda->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->lambda %d %d %d %d \n " ,217,j,1,Model->lambda->d[1]-1);
}
int nctemp1315=i;
if((0>i)||(i>=Model->tauey->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->tauey %d %d %d %d \n " ,217,i,0,Model->tauey->d[0]-1);
}
nctemp1315=j*Model->tauey->d[0]+nctemp1315;
if((0>j)||(j>=Model->tauey->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->tauey %d %d %d %d \n " ,217,j,1,Model->tauey->d[1]-1);
}
int nctemp1319=i;
if((0>i)||(i>=Model->tausy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->tausy %d %d %d %d \n " ,218,i,0,Model->tausy->d[0]-1);
}
nctemp1319=j*Model->tausy->d[0]+nctemp1319;
if((0>j)||(j>=Model->tausy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->tausy %d %d %d %d \n " ,218,j,1,Model->tausy->d[1]-1);
}
float nctemp1322 = Model->tauey->a[nctemp1315] / Model->tausy->a[nctemp1319];
float nctemp1323 = 1.0 - nctemp1322;
float nctemp1324 = Model->lambda->a[nctemp1304] * nctemp1323;
float nctemp1326 = nctemp1324 * dt;
int nctemp1328=i;
if((0>i)||(i>=Model->tauey->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->tauey %d %d %d %d \n " ,218,i,0,Model->tauey->d[0]-1);
}
nctemp1328=j*Model->tauey->d[0]+nctemp1328;
if((0>j)||(j>=Model->tauey->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->tauey %d %d %d %d \n " ,218,j,1,Model->tauey->d[1]-1);
}
float nctemp1331 = nctemp1326 / Model->tauey->a[nctemp1328];
int nctemp1333=i;
if((0>i)||(i>=El2d->eyy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->eyy %d %d %d %d \n " ,219,i,0,El2d->eyy->d[0]-1);
}
nctemp1333=j*El2d->eyy->d[0]+nctemp1333;
if((0>j)||(j>=El2d->eyy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->eyy %d %d %d %d \n " ,219,j,1,El2d->eyy->d[1]-1);
}
float nctemp1336 = nctemp1331 * El2d->eyy->a[nctemp1333];
float nctemp1337 = nctemp1290 + nctemp1336;
El2d->gammay->a[nctemp1266] =nctemp1337;
int nctemp1341=i;
if((0>i)||(i>=El2d->alphax->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->alphax %d %d %d %d \n " ,221,i,0,El2d->alphax->d[0]-1);
}
nctemp1341=j*El2d->alphax->d[0]+nctemp1341;
if((0>j)||(j>=El2d->alphax->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->alphax %d %d %d %d \n " ,221,j,1,El2d->alphax->d[1]-1);
}
int nctemp1351=i;
if((0>i)||(i>=El2d->alphax->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->alphax %d %d %d %d \n " ,221,i,0,El2d->alphax->d[0]-1);
}
nctemp1351=j*El2d->alphax->d[0]+nctemp1351;
if((0>j)||(j>=El2d->alphax->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->alphax %d %d %d %d \n " ,221,j,1,El2d->alphax->d[1]-1);
}
float nctemp1358= -dt;
int nctemp1360=i;
if((0>i)||(i>=Model->chisx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chisx %d %d %d %d \n " ,221,i,0,Model->chisx->d[0]-1);
}
nctemp1360=j*Model->chisx->d[0]+nctemp1360;
if((0>j)||(j>=Model->chisx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chisx %d %d %d %d \n " ,221,j,1,Model->chisx->d[1]-1);
}
float nctemp1363 = nctemp1358 / Model->chisx->a[nctemp1360];
float nctemp1355= nctemp1363;
float nctemp1364=LibeExp(nctemp1355);
float nctemp1365 = El2d->alphax->a[nctemp1351] * nctemp1364;
int nctemp1379=i;
if((0>i)||(i>=Model->mu->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->mu %d %d %d %d \n " ,222,i,0,Model->mu->d[0]-1);
}
nctemp1379=j*Model->mu->d[0]+nctemp1379;
if((0>j)||(j>=Model->mu->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->mu %d %d %d %d \n " ,222,j,1,Model->mu->d[1]-1);
}
int nctemp1390=i;
if((0>i)||(i>=Model->chiex->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chiex %d %d %d %d \n " ,222,i,0,Model->chiex->d[0]-1);
}
nctemp1390=j*Model->chiex->d[0]+nctemp1390;
if((0>j)||(j>=Model->chiex->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chiex %d %d %d %d \n " ,222,j,1,Model->chiex->d[1]-1);
}
int nctemp1394=i;
if((0>i)||(i>=Model->chisx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chisx %d %d %d %d \n " ,223,i,0,Model->chisx->d[0]-1);
}
nctemp1394=j*Model->chisx->d[0]+nctemp1394;
if((0>j)||(j>=Model->chisx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chisx %d %d %d %d \n " ,223,j,1,Model->chisx->d[1]-1);
}
float nctemp1397 = Model->chiex->a[nctemp1390] / Model->chisx->a[nctemp1394];
float nctemp1398 = 1.0 - nctemp1397;
float nctemp1399 = Model->mu->a[nctemp1379] * nctemp1398;
float nctemp1401 = nctemp1399 * dt;
int nctemp1403=i;
if((0>i)||(i>=Model->chiex->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chiex %d %d %d %d \n " ,223,i,0,Model->chiex->d[0]-1);
}
nctemp1403=j*Model->chiex->d[0]+nctemp1403;
if((0>j)||(j>=Model->chiex->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chiex %d %d %d %d \n " ,223,j,1,Model->chiex->d[1]-1);
}
float nctemp1406 = nctemp1401 / Model->chiex->a[nctemp1403];
int nctemp1408=i;
if((0>i)||(i>=El2d->exx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->exx %d %d %d %d \n " ,224,i,0,El2d->exx->d[0]-1);
}
nctemp1408=j*El2d->exx->d[0]+nctemp1408;
if((0>j)||(j>=El2d->exx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->exx %d %d %d %d \n " ,224,j,1,El2d->exx->d[1]-1);
}
float nctemp1411 = nctemp1406 * El2d->exx->a[nctemp1408];
float nctemp1412 = nctemp1365 + nctemp1411;
El2d->alphax->a[nctemp1341] =nctemp1412;
int nctemp1416=i;
if((0>i)||(i>=El2d->alphay->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->alphay %d %d %d %d \n " ,226,i,0,El2d->alphay->d[0]-1);
}
nctemp1416=j*El2d->alphay->d[0]+nctemp1416;
if((0>j)||(j>=El2d->alphay->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->alphay %d %d %d %d \n " ,226,j,1,El2d->alphay->d[1]-1);
}
int nctemp1426=i;
if((0>i)||(i>=El2d->alphay->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->alphay %d %d %d %d \n " ,226,i,0,El2d->alphay->d[0]-1);
}
nctemp1426=j*El2d->alphay->d[0]+nctemp1426;
if((0>j)||(j>=El2d->alphay->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->alphay %d %d %d %d \n " ,226,j,1,El2d->alphay->d[1]-1);
}
float nctemp1433= -dt;
int nctemp1435=i;
if((0>i)||(i>=Model->chisx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chisx %d %d %d %d \n " ,226,i,0,Model->chisx->d[0]-1);
}
nctemp1435=j*Model->chisx->d[0]+nctemp1435;
if((0>j)||(j>=Model->chisx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chisx %d %d %d %d \n " ,226,j,1,Model->chisx->d[1]-1);
}
float nctemp1438 = nctemp1433 / Model->chisx->a[nctemp1435];
float nctemp1430= nctemp1438;
float nctemp1439=LibeExp(nctemp1430);
float nctemp1440 = El2d->alphay->a[nctemp1426] * nctemp1439;
int nctemp1454=i;
if((0>i)||(i>=Model->mu->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->mu %d %d %d %d \n " ,227,i,0,Model->mu->d[0]-1);
}
nctemp1454=j*Model->mu->d[0]+nctemp1454;
if((0>j)||(j>=Model->mu->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->mu %d %d %d %d \n " ,227,j,1,Model->mu->d[1]-1);
}
int nctemp1465=i;
if((0>i)||(i>=Model->chiex->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chiex %d %d %d %d \n " ,227,i,0,Model->chiex->d[0]-1);
}
nctemp1465=j*Model->chiex->d[0]+nctemp1465;
if((0>j)||(j>=Model->chiex->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chiex %d %d %d %d \n " ,227,j,1,Model->chiex->d[1]-1);
}
int nctemp1469=i;
if((0>i)||(i>=Model->chisx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chisx %d %d %d %d \n " ,228,i,0,Model->chisx->d[0]-1);
}
nctemp1469=j*Model->chisx->d[0]+nctemp1469;
if((0>j)||(j>=Model->chisx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chisx %d %d %d %d \n " ,228,j,1,Model->chisx->d[1]-1);
}
float nctemp1472 = Model->chiex->a[nctemp1465] / Model->chisx->a[nctemp1469];
float nctemp1473 = 1.0 - nctemp1472;
float nctemp1474 = Model->mu->a[nctemp1454] * nctemp1473;
float nctemp1476 = nctemp1474 * dt;
int nctemp1478=i;
if((0>i)||(i>=Model->chiex->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chiex %d %d %d %d \n " ,228,i,0,Model->chiex->d[0]-1);
}
nctemp1478=j*Model->chiex->d[0]+nctemp1478;
if((0>j)||(j>=Model->chiex->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chiex %d %d %d %d \n " ,228,j,1,Model->chiex->d[1]-1);
}
float nctemp1481 = nctemp1476 / Model->chiex->a[nctemp1478];
int nctemp1483=i;
if((0>i)||(i>=El2d->eyy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->eyy %d %d %d %d \n " ,229,i,0,El2d->eyy->d[0]-1);
}
nctemp1483=j*El2d->eyy->d[0]+nctemp1483;
if((0>j)||(j>=El2d->eyy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->eyy %d %d %d %d \n " ,229,j,1,El2d->eyy->d[1]-1);
}
float nctemp1486 = nctemp1481 * El2d->eyy->a[nctemp1483];
float nctemp1487 = nctemp1440 + nctemp1486;
El2d->alphay->a[nctemp1416] =nctemp1487;
int nctemp1491=i;
if((0>i)||(i>=El2d->betaxy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->betaxy %d %d %d %d \n " ,231,i,0,El2d->betaxy->d[0]-1);
}
nctemp1491=j*El2d->betaxy->d[0]+nctemp1491;
if((0>j)||(j>=El2d->betaxy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->betaxy %d %d %d %d \n " ,231,j,1,El2d->betaxy->d[1]-1);
}
int nctemp1501=i;
if((0>i)||(i>=El2d->betaxy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->betaxy %d %d %d %d \n " ,231,i,0,El2d->betaxy->d[0]-1);
}
nctemp1501=j*El2d->betaxy->d[0]+nctemp1501;
if((0>j)||(j>=El2d->betaxy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->betaxy %d %d %d %d \n " ,231,j,1,El2d->betaxy->d[1]-1);
}
float nctemp1508= -dt;
int nctemp1510=i;
if((0>i)||(i>=Model->chisy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chisy %d %d %d %d \n " ,231,i,0,Model->chisy->d[0]-1);
}
nctemp1510=j*Model->chisy->d[0]+nctemp1510;
if((0>j)||(j>=Model->chisy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chisy %d %d %d %d \n " ,231,j,1,Model->chisy->d[1]-1);
}
float nctemp1513 = nctemp1508 / Model->chisy->a[nctemp1510];
float nctemp1505= nctemp1513;
float nctemp1514=LibeExp(nctemp1505);
float nctemp1515 = El2d->betaxy->a[nctemp1501] * nctemp1514;
int nctemp1529=i;
if((0>i)||(i>=Model->mu->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->mu %d %d %d %d \n " ,232,i,0,Model->mu->d[0]-1);
}
nctemp1529=j*Model->mu->d[0]+nctemp1529;
if((0>j)||(j>=Model->mu->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->mu %d %d %d %d \n " ,232,j,1,Model->mu->d[1]-1);
}
int nctemp1540=i;
if((0>i)||(i>=Model->chiey->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chiey %d %d %d %d \n " ,232,i,0,Model->chiey->d[0]-1);
}
nctemp1540=j*Model->chiey->d[0]+nctemp1540;
if((0>j)||(j>=Model->chiey->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chiey %d %d %d %d \n " ,232,j,1,Model->chiey->d[1]-1);
}
int nctemp1544=i;
if((0>i)||(i>=Model->chisy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chisy %d %d %d %d \n " ,233,i,0,Model->chisy->d[0]-1);
}
nctemp1544=j*Model->chisy->d[0]+nctemp1544;
if((0>j)||(j>=Model->chisy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chisy %d %d %d %d \n " ,233,j,1,Model->chisy->d[1]-1);
}
float nctemp1547 = Model->chiey->a[nctemp1540] / Model->chisy->a[nctemp1544];
float nctemp1548 = 1.0 - nctemp1547;
float nctemp1549 = Model->mu->a[nctemp1529] * nctemp1548;
float nctemp1551 = nctemp1549 * dt;
int nctemp1553=i;
if((0>i)||(i>=Model->chiey->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chiey %d %d %d %d \n " ,233,i,0,Model->chiey->d[0]-1);
}
nctemp1553=j*Model->chiey->d[0]+nctemp1553;
if((0>j)||(j>=Model->chiey->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chiey %d %d %d %d \n " ,233,j,1,Model->chiey->d[1]-1);
}
float nctemp1556 = nctemp1551 / Model->chiey->a[nctemp1553];
int nctemp1558=i;
if((0>i)||(i>=El2d->exy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->exy %d %d %d %d \n " ,234,i,0,El2d->exy->d[0]-1);
}
nctemp1558=j*El2d->exy->d[0]+nctemp1558;
if((0>j)||(j>=El2d->exy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->exy %d %d %d %d \n " ,234,j,1,El2d->exy->d[1]-1);
}
float nctemp1561 = nctemp1556 * El2d->exy->a[nctemp1558];
float nctemp1562 = nctemp1515 + nctemp1561;
El2d->betaxy->a[nctemp1491] =nctemp1562;
int nctemp1566=i;
if((0>i)||(i>=El2d->betayx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->betayx %d %d %d %d \n " ,236,i,0,El2d->betayx->d[0]-1);
}
nctemp1566=j*El2d->betayx->d[0]+nctemp1566;
if((0>j)||(j>=El2d->betayx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->betayx %d %d %d %d \n " ,236,j,1,El2d->betayx->d[1]-1);
}
int nctemp1576=i;
if((0>i)||(i>=El2d->betayx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->betayx %d %d %d %d \n " ,236,i,0,El2d->betayx->d[0]-1);
}
nctemp1576=j*El2d->betayx->d[0]+nctemp1576;
if((0>j)||(j>=El2d->betayx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->betayx %d %d %d %d \n " ,236,j,1,El2d->betayx->d[1]-1);
}
float nctemp1583= -dt;
int nctemp1585=i;
if((0>i)||(i>=Model->chisx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chisx %d %d %d %d \n " ,236,i,0,Model->chisx->d[0]-1);
}
nctemp1585=j*Model->chisx->d[0]+nctemp1585;
if((0>j)||(j>=Model->chisx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chisx %d %d %d %d \n " ,236,j,1,Model->chisx->d[1]-1);
}
float nctemp1588 = nctemp1583 / Model->chisx->a[nctemp1585];
float nctemp1580= nctemp1588;
float nctemp1589=LibeExp(nctemp1580);
float nctemp1590 = El2d->betayx->a[nctemp1576] * nctemp1589;
int nctemp1604=i;
if((0>i)||(i>=Model->mu->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->mu %d %d %d %d \n " ,237,i,0,Model->mu->d[0]-1);
}
nctemp1604=j*Model->mu->d[0]+nctemp1604;
if((0>j)||(j>=Model->mu->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->mu %d %d %d %d \n " ,237,j,1,Model->mu->d[1]-1);
}
int nctemp1615=i;
if((0>i)||(i>=Model->chiex->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chiex %d %d %d %d \n " ,237,i,0,Model->chiex->d[0]-1);
}
nctemp1615=j*Model->chiex->d[0]+nctemp1615;
if((0>j)||(j>=Model->chiex->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chiex %d %d %d %d \n " ,237,j,1,Model->chiex->d[1]-1);
}
int nctemp1619=i;
if((0>i)||(i>=Model->chisx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chisx %d %d %d %d \n " ,238,i,0,Model->chisx->d[0]-1);
}
nctemp1619=j*Model->chisx->d[0]+nctemp1619;
if((0>j)||(j>=Model->chisx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chisx %d %d %d %d \n " ,238,j,1,Model->chisx->d[1]-1);
}
float nctemp1622 = Model->chiex->a[nctemp1615] / Model->chisx->a[nctemp1619];
float nctemp1623 = 1.0 - nctemp1622;
float nctemp1624 = Model->mu->a[nctemp1604] * nctemp1623;
float nctemp1626 = nctemp1624 * dt;
int nctemp1628=i;
if((0>i)||(i>=Model->chiex->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chiex %d %d %d %d \n " ,238,i,0,Model->chiex->d[0]-1);
}
nctemp1628=j*Model->chiex->d[0]+nctemp1628;
if((0>j)||(j>=Model->chiex->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chiex %d %d %d %d \n " ,238,j,1,Model->chiex->d[1]-1);
}
float nctemp1631 = nctemp1626 / Model->chiex->a[nctemp1628];
int nctemp1633=i;
if((0>i)||(i>=El2d->eyx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->eyx %d %d %d %d \n " ,239,i,0,El2d->eyx->d[0]-1);
}
nctemp1633=j*El2d->eyx->d[0]+nctemp1633;
if((0>j)||(j>=El2d->eyx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->eyx %d %d %d %d \n " ,239,j,1,El2d->eyx->d[1]-1);
}
float nctemp1636 = nctemp1631 * El2d->eyx->a[nctemp1633];
float nctemp1637 = nctemp1590 + nctemp1636;
El2d->betayx->a[nctemp1566] =nctemp1637;
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
int nctemp1638 = (El2d->sresamp <= 0);
if(nctemp1638)
{
{
return 1;
}
}
int nctemp1647=El2d->sigmaxx->d[0];nx =nctemp1647;
int nctemp1655=El2d->sigmaxx->d[1];ny =nctemp1655;
int nctemp1667 = nx * ny;
n =nctemp1667;
int nctemp1671= it;
int nctemp1673= El2d->sresamp;
int nctemp1675=LibeMod(nctemp1671,nctemp1673);
int nctemp1668 = (nctemp1675 ==0);
if(nctemp1668)
{
{
int nctemp1680=0;
if((0>0)||(0>=El2d->snpflags->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->snpflags %d %d %d %d \n " ,261,0,0,El2d->snpflags->d[0]-1);
}
int nctemp1677 = (El2d->snpflags->a[nctemp1680] ==1);
if(nctemp1677)
{
{
nctempchar1 nctemp1689;
nctempchar1 *nctemp1688;
nctemp1689=*(nctempchar1*)(El2d->p);
int nctemp1696 = 4 * n;
nctemp1689.d[0]=nctemp1696;
nctemp1688=&nctemp1689;
tmp=nctemp1688;
int nctemp1698= El2d->fdp;
int nctemp1705 = 4 * n;
int nctemp1700= nctemp1705;
nctempchar1* nctemp1706= tmp;
int nctemp1709=LibeWrite(nctemp1698,nctemp1700,nctemp1706);
}
}
int nctemp1713=1;
if((0>1)||(1>=El2d->snpflags->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->snpflags %d %d %d %d \n " ,265,1,0,El2d->snpflags->d[0]-1);
}
int nctemp1710 = (El2d->snpflags->a[nctemp1713] ==1);
if(nctemp1710)
{
{
nctempchar1 nctemp1722;
nctempchar1 *nctemp1721;
nctemp1722=*(nctempchar1*)(El2d->vx);
int nctemp1729 = 4 * n;
nctemp1722.d[0]=nctemp1729;
nctemp1721=&nctemp1722;
tmp=nctemp1721;
int nctemp1734= El2d->fdvx;
int nctemp1741 = 4 * n;
int nctemp1736= nctemp1741;
nctempchar1* nctemp1742= tmp;
int nctemp1745=LibeWrite(nctemp1734,nctemp1736,nctemp1742);
err =nctemp1745;
}
}
int nctemp1749=2;
if((0>2)||(2>=El2d->snpflags->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->snpflags %d %d %d %d \n " ,269,2,0,El2d->snpflags->d[0]-1);
}
int nctemp1746 = (El2d->snpflags->a[nctemp1749] ==1);
if(nctemp1746)
{
{
nctempchar1 nctemp1758;
nctempchar1 *nctemp1757;
nctemp1758=*(nctempchar1*)(El2d->vy);
int nctemp1765 = 4 * n;
nctemp1758.d[0]=nctemp1765;
nctemp1757=&nctemp1758;
tmp=nctemp1757;
int nctemp1767= El2d->fdvy;
int nctemp1774 = 4 * n;
int nctemp1769= nctemp1774;
nctempchar1* nctemp1775= tmp;
int nctemp1778=LibeWrite(nctemp1767,nctemp1769,nctemp1775);
}
}
int nctemp1782=3;
if((0>3)||(3>=El2d->snpflags->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->snpflags %d %d %d %d \n " ,273,3,0,El2d->snpflags->d[0]-1);
}
int nctemp1779 = (El2d->snpflags->a[nctemp1782] ==1);
if(nctemp1779)
{
{
nctempchar1 nctemp1791;
nctempchar1 *nctemp1790;
nctemp1791=*(nctempchar1*)(El2d->sigmaxx);
int nctemp1798 = 4 * n;
nctemp1791.d[0]=nctemp1798;
nctemp1790=&nctemp1791;
tmp=nctemp1790;
int nctemp1800= El2d->fdsxx;
int nctemp1807 = 4 * n;
int nctemp1802= nctemp1807;
nctempchar1* nctemp1808= tmp;
int nctemp1811=LibeWrite(nctemp1800,nctemp1802,nctemp1808);
}
}
int nctemp1815=4;
if((0>4)||(4>=El2d->snpflags->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->snpflags %d %d %d %d \n " ,277,4,0,El2d->snpflags->d[0]-1);
}
int nctemp1812 = (El2d->snpflags->a[nctemp1815] ==1);
if(nctemp1812)
{
{
nctempchar1 nctemp1824;
nctempchar1 *nctemp1823;
nctemp1824=*(nctempchar1*)(El2d->sigmayy);
int nctemp1831 = 4 * n;
nctemp1824.d[0]=nctemp1831;
nctemp1823=&nctemp1824;
tmp=nctemp1823;
int nctemp1833= El2d->fdsyy;
int nctemp1840 = 4 * n;
int nctemp1835= nctemp1840;
nctempchar1* nctemp1841= tmp;
int nctemp1844=LibeWrite(nctemp1833,nctemp1835,nctemp1841);
}
}
int nctemp1848=5;
if((0>5)||(5>=El2d->snpflags->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->snpflags %d %d %d %d \n " ,281,5,0,El2d->snpflags->d[0]-1);
}
int nctemp1845 = (El2d->snpflags->a[nctemp1848] ==1);
if(nctemp1845)
{
{
nctempchar1 nctemp1857;
nctempchar1 *nctemp1856;
nctemp1857=*(nctempchar1*)(El2d->sigmaxy);
int nctemp1864 = 4 * n;
nctemp1857.d[0]=nctemp1864;
nctemp1856=&nctemp1857;
tmp=nctemp1856;
int nctemp1866= El2d->fdsxy;
int nctemp1873 = 4 * n;
int nctemp1868= nctemp1873;
nctempchar1* nctemp1874= tmp;
int nctemp1877=LibeWrite(nctemp1866,nctemp1868,nctemp1874);
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
int nctemp1883= l;
struct diff* nctemp1885=DiffNew(nctemp1883);
Diff =nctemp1885;
int nctemp1892=Model->nx;
nctemp1892=nctemp1892*Model->ny;
nctempfloat2 *nctemp1891;
nctemp1891=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1891->d[0]=Model->nx;
nctemp1891->d[1]=Model->ny;
nctemp1891->a=(float *)RunMalloc(sizeof(float)*nctemp1892);
tmp1=nctemp1891;
int nctemp1903=Model->nx;
nctemp1903=nctemp1903*Model->ny;
nctempfloat2 *nctemp1902;
nctemp1902=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1902->d[0]=Model->nx;
nctemp1902->d[1]=Model->ny;
nctemp1902->a=(float *)RunMalloc(sizeof(float)*nctemp1903);
tmp2=nctemp1902;
oldperc =0.0;
ns =El2d->ts;
int nctemp1924 = ns + nt;
ne =nctemp1924;
for(i = ns;i < ne;i = (i + 1)){
{
struct diff* nctemp1926= Diff;
nctempfloat2* nctemp1928= El2d->sigmaxx;
nctempfloat2* nctemp1931= El2d->exx;
float nctemp1934= Model->dx;
int nctemp1936=DiffDxplus(nctemp1926,nctemp1928,nctemp1931,nctemp1934);
struct diff* nctemp1938= Diff;
nctempfloat2* nctemp1940= El2d->sigmaxy;
nctempfloat2* nctemp1943= El2d->exy;
float nctemp1946= Model->dx;
int nctemp1948=DiffDyminus(nctemp1938,nctemp1940,nctemp1943,nctemp1946);
struct el2d* nctemp1950= El2d;
struct model* nctemp1952= Model;
int nctemp1954=El2dvx(nctemp1950,nctemp1952);
struct diff* nctemp1956= Diff;
nctempfloat2* nctemp1958= El2d->sigmayy;
nctempfloat2* nctemp1961= El2d->eyy;
float nctemp1964= Model->dx;
int nctemp1966=DiffDyplus(nctemp1956,nctemp1958,nctemp1961,nctemp1964);
struct diff* nctemp1968= Diff;
nctempfloat2* nctemp1970= El2d->sigmaxy;
nctempfloat2* nctemp1973= El2d->eyx;
float nctemp1976= Model->dx;
int nctemp1978=DiffDxminus(nctemp1968,nctemp1970,nctemp1973,nctemp1976);
struct el2d* nctemp1980= El2d;
struct model* nctemp1982= Model;
int nctemp1984=El2dvy(nctemp1980,nctemp1982);
struct diff* nctemp1986= Diff;
nctempfloat2* nctemp1988= El2d->vx;
nctempfloat2* nctemp1991= El2d->exx;
float nctemp1994= Model->dx;
int nctemp1996=DiffDxminus(nctemp1986,nctemp1988,nctemp1991,nctemp1994);
struct diff* nctemp1998= Diff;
nctempfloat2* nctemp2000= El2d->vy;
nctempfloat2* nctemp2003= El2d->eyy;
float nctemp2006= Model->dx;
int nctemp2008=DiffDyminus(nctemp1998,nctemp2000,nctemp2003,nctemp2006);
struct diff* nctemp2010= Diff;
nctempfloat2* nctemp2012= El2d->vy;
nctempfloat2* nctemp2015= El2d->eyx;
float nctemp2018= Model->dx;
int nctemp2020=DiffDxplus(nctemp2010,nctemp2012,nctemp2015,nctemp2018);
struct diff* nctemp2022= Diff;
nctempfloat2* nctemp2024= El2d->vx;
nctempfloat2* nctemp2027= El2d->exy;
float nctemp2030= Model->dx;
int nctemp2032=DiffDyplus(nctemp2022,nctemp2024,nctemp2027,nctemp2030);
struct el2d* nctemp2034= El2d;
struct model* nctemp2036= Model;
int nctemp2038=El2dstress(nctemp2034,nctemp2036);
for(k = 0;k < Src->Ns;k = (k + 1)){
{
int nctemp2043=k;
if((0>k)||(k>=Src->Sx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Src->Sx %d %d %d %d \n " ,356,k,0,Src->Sx->d[0]-1);
}
sx =Src->Sx->a[nctemp2043];
int nctemp2049=k;
if((0>k)||(k>=Src->Sy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Src->Sy %d %d %d %d \n " ,357,k,0,Src->Sy->d[0]-1);
}
sy =Src->Sy->a[nctemp2049];
int nctemp2054=sx;
if((0>sx)||(sx>=El2d->sigmaxx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmaxx %d %d %d %d \n " ,358,sx,0,El2d->sigmaxx->d[0]-1);
}
nctemp2054=sy*El2d->sigmaxx->d[0]+nctemp2054;
if((0>sy)||(sy>=El2d->sigmaxx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmaxx %d %d %d %d \n " ,358,sy,1,El2d->sigmaxx->d[1]-1);
}
int nctemp2061=sx;
if((0>sx)||(sx>=El2d->sigmaxx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmaxx %d %d %d %d \n " ,358,sx,0,El2d->sigmaxx->d[0]-1);
}
nctemp2061=sy*El2d->sigmaxx->d[0]+nctemp2061;
if((0>sy)||(sy>=El2d->sigmaxx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmaxx %d %d %d %d \n " ,358,sy,1,El2d->sigmaxx->d[1]-1);
}
int nctemp2072=i;
if((0>i)||(i>=Src->Sqxx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Src->Sqxx %d %d %d %d \n " ,359,i,0,Src->Sqxx->d[0]-1);
}
nctemp2072=k*Src->Sqxx->d[0]+nctemp2072;
if((0>k)||(k>=Src->Sqxx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Src->Sqxx %d %d %d %d \n " ,359,k,1,Src->Sqxx->d[1]-1);
}
float nctemp2080 = Model->dx * Model->dx;
float nctemp2081 = Src->Sqxx->a[nctemp2072] / nctemp2080;
float nctemp2082 = Model->dt * nctemp2081;
float nctemp2083 = El2d->sigmaxx->a[nctemp2061] + nctemp2082;
El2d->sigmaxx->a[nctemp2054] =nctemp2083;
int nctemp2087=sx;
if((0>sx)||(sx>=El2d->sigmayy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmayy %d %d %d %d \n " ,360,sx,0,El2d->sigmayy->d[0]-1);
}
nctemp2087=sy*El2d->sigmayy->d[0]+nctemp2087;
if((0>sy)||(sy>=El2d->sigmayy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmayy %d %d %d %d \n " ,360,sy,1,El2d->sigmayy->d[1]-1);
}
int nctemp2094=sx;
if((0>sx)||(sx>=El2d->sigmayy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmayy %d %d %d %d \n " ,360,sx,0,El2d->sigmayy->d[0]-1);
}
nctemp2094=sy*El2d->sigmayy->d[0]+nctemp2094;
if((0>sy)||(sy>=El2d->sigmayy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmayy %d %d %d %d \n " ,360,sy,1,El2d->sigmayy->d[1]-1);
}
int nctemp2105=i;
if((0>i)||(i>=Src->Sqyy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Src->Sqyy %d %d %d %d \n " ,361,i,0,Src->Sqyy->d[0]-1);
}
nctemp2105=k*Src->Sqyy->d[0]+nctemp2105;
if((0>k)||(k>=Src->Sqyy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Src->Sqyy %d %d %d %d \n " ,361,k,1,Src->Sqyy->d[1]-1);
}
float nctemp2113 = Model->dx * Model->dx;
float nctemp2114 = Src->Sqyy->a[nctemp2105] / nctemp2113;
float nctemp2115 = Model->dt * nctemp2114;
float nctemp2116 = El2d->sigmayy->a[nctemp2094] + nctemp2115;
El2d->sigmayy->a[nctemp2087] =nctemp2116;
int nctemp2120=sx;
if((0>sx)||(sx>=El2d->sigmayy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmayy %d %d %d %d \n " ,362,sx,0,El2d->sigmayy->d[0]-1);
}
nctemp2120=sy*El2d->sigmayy->d[0]+nctemp2120;
if((0>sy)||(sy>=El2d->sigmayy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmayy %d %d %d %d \n " ,362,sy,1,El2d->sigmayy->d[1]-1);
}
int nctemp2127=sx;
if((0>sx)||(sx>=El2d->sigmaxy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmaxy %d %d %d %d \n " ,362,sx,0,El2d->sigmaxy->d[0]-1);
}
nctemp2127=sy*El2d->sigmaxy->d[0]+nctemp2127;
if((0>sy)||(sy>=El2d->sigmaxy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmaxy %d %d %d %d \n " ,362,sy,1,El2d->sigmaxy->d[1]-1);
}
int nctemp2138=i;
if((0>i)||(i>=Src->Sqxy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Src->Sqxy %d %d %d %d \n " ,363,i,0,Src->Sqxy->d[0]-1);
}
nctemp2138=k*Src->Sqxy->d[0]+nctemp2138;
if((0>k)||(k>=Src->Sqxy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Src->Sqxy %d %d %d %d \n " ,363,k,1,Src->Sqxy->d[1]-1);
}
float nctemp2146 = Model->dx * Model->dx;
float nctemp2147 = Src->Sqxy->a[nctemp2138] / nctemp2146;
float nctemp2148 = Model->dt * nctemp2147;
float nctemp2149 = El2d->sigmaxy->a[nctemp2127] + nctemp2148;
El2d->sigmayy->a[nctemp2120] =nctemp2149;
int nctemp2153=sx;
if((0>sx)||(sx>=El2d->vx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->vx %d %d %d %d \n " ,364,sx,0,El2d->vx->d[0]-1);
}
nctemp2153=sy*El2d->vx->d[0]+nctemp2153;
if((0>sy)||(sy>=El2d->vx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->vx %d %d %d %d \n " ,364,sy,1,El2d->vx->d[1]-1);
}
int nctemp2160=sx;
if((0>sx)||(sx>=El2d->vx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->vx %d %d %d %d \n " ,364,sx,0,El2d->vx->d[0]-1);
}
nctemp2160=sy*El2d->vx->d[0]+nctemp2160;
if((0>sy)||(sy>=El2d->vx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->vx %d %d %d %d \n " ,364,sy,1,El2d->vx->d[1]-1);
}
int nctemp2171=i;
if((0>i)||(i>=Src->Sfx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Src->Sfx %d %d %d %d \n " ,365,i,0,Src->Sfx->d[0]-1);
}
nctemp2171=k*Src->Sfx->d[0]+nctemp2171;
if((0>k)||(k>=Src->Sfx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Src->Sfx %d %d %d %d \n " ,365,k,1,Src->Sfx->d[1]-1);
}
float nctemp2179 = Model->dx * Model->dx;
float nctemp2180 = Src->Sfx->a[nctemp2171] / nctemp2179;
float nctemp2181 = Model->dt * nctemp2180;
float nctemp2182 = El2d->vx->a[nctemp2160] + nctemp2181;
El2d->vx->a[nctemp2153] =nctemp2182;
int nctemp2186=sx;
if((0>sx)||(sx>=El2d->vy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->vy %d %d %d %d \n " ,366,sx,0,El2d->vy->d[0]-1);
}
nctemp2186=sy*El2d->vy->d[0]+nctemp2186;
if((0>sy)||(sy>=El2d->vy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->vy %d %d %d %d \n " ,366,sy,1,El2d->vy->d[1]-1);
}
int nctemp2193=sx;
if((0>sx)||(sx>=El2d->vy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->vy %d %d %d %d \n " ,366,sx,0,El2d->vy->d[0]-1);
}
nctemp2193=sy*El2d->vy->d[0]+nctemp2193;
if((0>sy)||(sy>=El2d->vy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->vy %d %d %d %d \n " ,366,sy,1,El2d->vy->d[1]-1);
}
int nctemp2204=i;
if((0>i)||(i>=Src->Sfy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Src->Sfy %d %d %d %d \n " ,367,i,0,Src->Sfy->d[0]-1);
}
nctemp2204=k*Src->Sfy->d[0]+nctemp2204;
if((0>k)||(k>=Src->Sfy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Src->Sfy %d %d %d %d \n " ,367,k,1,Src->Sfy->d[1]-1);
}
float nctemp2212 = Model->dx * Model->dx;
float nctemp2213 = Src->Sfy->a[nctemp2204] / nctemp2212;
float nctemp2214 = Model->dt * nctemp2213;
float nctemp2215 = El2d->vy->a[nctemp2193] + nctemp2214;
El2d->vy->a[nctemp2186] =nctemp2215;
}
}
float nctemp2227=(float)(i);
int nctemp2240 = ne - ns;
int nctemp2242 = nctemp2240 - 1;
float nctemp2231=(float)(nctemp2242);
float nctemp2243 = nctemp2227 / nctemp2231;
float nctemp2244 = 1000.0 * nctemp2243;
perc =nctemp2244;
float nctemp2252 = perc - oldperc;
int nctemp2245 = (nctemp2252 >= 10.0);
if(nctemp2245)
{
{
int nctemp2261=(int)(perc);
int nctemp2265 = nctemp2261 / 10;
iperc =nctemp2265;
int nctemp2269= iperc;
int nctemp2271= 10;
int nctemp2273=LibeMod(nctemp2269,nctemp2271);
int nctemp2266 = (nctemp2273 ==0);
if(nctemp2266)
{
{
int nctemp2276= 4;
struct nctempchar1 *nctemp2280;
static struct nctempchar1 nctemp2281 = {{ 20}, (char*)"percent completed: \0"};
nctemp2280=&nctemp2281;
nctempchar1* nctemp2278= nctemp2280;
int nctemp2282=LibePuts(nctemp2276,nctemp2278);
int nctemp2284= 4;
int nctemp2286= iperc;
int nctemp2288=LibePuti(nctemp2284,nctemp2286);
int nctemp2290= 4;
struct nctempchar1 *nctemp2294;
static struct nctempchar1 nctemp2295 = {{ 3}, (char*)"\n\0"};
nctemp2294=&nctemp2295;
nctempchar1* nctemp2292= nctemp2294;
int nctemp2296=LibePuts(nctemp2290,nctemp2292);
int nctemp2298= 4;
int nctemp2300=LibeFlush(nctemp2298);
}
}
oldperc =perc;
}
}
struct el2d* nctemp2306= El2d;
int nctemp2308= i;
int nctemp2310=El2dSnap(nctemp2306,nctemp2308);
}
}
int nctemp2319 = El2d->ts + ne;
El2d->ts =nctemp2319;
return 1;
}
}
