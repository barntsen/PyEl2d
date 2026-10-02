//  Translated by eps
extern "C" {
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
El2d->gammax=nctemp154;
int nctemp166=Model->nx;
nctemp166=nctemp166*Model->ny;
nctempfloat2 *nctemp165;
nctemp165=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp165->d[0]=Model->nx;
nctemp165->d[1]=Model->ny;
nctemp165->a=(float *)RunMalloc(sizeof(float)*nctemp166);
El2d->gammay=nctemp165;
int nctemp177=Model->nx;
nctemp177=nctemp177*Model->ny;
nctempfloat2 *nctemp176;
nctemp176=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp176->d[0]=Model->nx;
nctemp176->d[1]=Model->ny;
nctemp176->a=(float *)RunMalloc(sizeof(float)*nctemp177);
El2d->alphax=nctemp176;
int nctemp188=Model->nx;
nctemp188=nctemp188*Model->ny;
nctempfloat2 *nctemp187;
nctemp187=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp187->d[0]=Model->nx;
nctemp187->d[1]=Model->ny;
nctemp187->a=(float *)RunMalloc(sizeof(float)*nctemp188);
El2d->alphay=nctemp187;
int nctemp199=Model->nx;
nctemp199=nctemp199*Model->ny;
nctempfloat2 *nctemp198;
nctemp198=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp198->d[0]=Model->nx;
nctemp198->d[1]=Model->ny;
nctemp198->a=(float *)RunMalloc(sizeof(float)*nctemp199);
El2d->betaxy=nctemp198;
int nctemp210=Model->nx;
nctemp210=nctemp210*Model->ny;
nctempfloat2 *nctemp209;
nctemp209=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp209->d[0]=Model->nx;
nctemp209->d[1]=Model->ny;
nctemp209->a=(float *)RunMalloc(sizeof(float)*nctemp210);
El2d->betayx=nctemp209;
int nctemp221=Model->nx;
nctemp221=nctemp221*Model->ny;
nctempfloat2 *nctemp220;
nctemp220=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp220->d[0]=Model->nx;
nctemp220->d[1]=Model->ny;
nctemp220->a=(float *)RunMalloc(sizeof(float)*nctemp221);
El2d->thetaxx=nctemp220;
int nctemp232=Model->nx;
nctemp232=nctemp232*Model->ny;
nctempfloat2 *nctemp231;
nctemp231=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp231->d[0]=Model->nx;
nctemp231->d[1]=Model->ny;
nctemp231->a=(float *)RunMalloc(sizeof(float)*nctemp232);
El2d->thetayy=nctemp231;
int nctemp243=Model->nx;
nctemp243=nctemp243*Model->ny;
nctempfloat2 *nctemp242;
nctemp242=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp242->d[0]=Model->nx;
nctemp242->d[1]=Model->ny;
nctemp242->a=(float *)RunMalloc(sizeof(float)*nctemp243);
El2d->thetayx=nctemp242;
int nctemp254=Model->nx;
nctemp254=nctemp254*Model->ny;
nctempfloat2 *nctemp253;
nctemp253=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp253->d[0]=Model->nx;
nctemp253->d[1]=Model->ny;
nctemp253->a=(float *)RunMalloc(sizeof(float)*nctemp254);
El2d->thetaxy=nctemp253;
El2d->ts =0;
int nctemp266=0;
if((0>0)||(0>=El2d->snpflags->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->snpflags %d %d %d %d \n " ,89,0,0,El2d->snpflags->d[0]-1);
}
int nctemp263 = (El2d->snpflags->a[nctemp266] ==1);
if(nctemp263)
{
{
struct nctempchar1 *nctemp275;
static struct nctempchar1 nctemp276 = {{ 10}, (char*)"snp-p.bin\0"};
nctemp275=&nctemp276;
nctempchar1* nctemp273= nctemp275;
struct nctempchar1 *nctemp279;
static struct nctempchar1 nctemp280 = {{ 2}, (char*)"w\0"};
nctemp279=&nctemp280;
nctempchar1* nctemp277= nctemp279;
int nctemp281=LibeOpen(nctemp273,nctemp277);
El2d->fdp =nctemp281;
}
}
int nctemp285=1;
if((0>1)||(1>=El2d->snpflags->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->snpflags %d %d %d %d \n " ,91,1,0,El2d->snpflags->d[0]-1);
}
int nctemp282 = (El2d->snpflags->a[nctemp285] ==1);
if(nctemp282)
{
{
struct nctempchar1 *nctemp294;
static struct nctempchar1 nctemp295 = {{ 11}, (char*)"snp-vx.bin\0"};
nctemp294=&nctemp295;
nctempchar1* nctemp292= nctemp294;
struct nctempchar1 *nctemp298;
static struct nctempchar1 nctemp299 = {{ 2}, (char*)"w\0"};
nctemp298=&nctemp299;
nctempchar1* nctemp296= nctemp298;
int nctemp300=LibeOpen(nctemp292,nctemp296);
El2d->fdvx =nctemp300;
}
}
int nctemp304=2;
if((0>2)||(2>=El2d->snpflags->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->snpflags %d %d %d %d \n " ,93,2,0,El2d->snpflags->d[0]-1);
}
int nctemp301 = (El2d->snpflags->a[nctemp304] ==1);
if(nctemp301)
{
{
struct nctempchar1 *nctemp313;
static struct nctempchar1 nctemp314 = {{ 11}, (char*)"snp-vy.bin\0"};
nctemp313=&nctemp314;
nctempchar1* nctemp311= nctemp313;
struct nctempchar1 *nctemp317;
static struct nctempchar1 nctemp318 = {{ 2}, (char*)"w\0"};
nctemp317=&nctemp318;
nctempchar1* nctemp315= nctemp317;
int nctemp319=LibeOpen(nctemp311,nctemp315);
El2d->fdvy =nctemp319;
}
}
int nctemp323=3;
if((0>3)||(3>=El2d->snpflags->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->snpflags %d %d %d %d \n " ,96,3,0,El2d->snpflags->d[0]-1);
}
int nctemp320 = (El2d->snpflags->a[nctemp323] ==1);
if(nctemp320)
{
{
struct nctempchar1 *nctemp332;
static struct nctempchar1 nctemp333 = {{ 12}, (char*)"snp-sxx.bin\0"};
nctemp332=&nctemp333;
nctempchar1* nctemp330= nctemp332;
struct nctempchar1 *nctemp336;
static struct nctempchar1 nctemp337 = {{ 2}, (char*)"w\0"};
nctemp336=&nctemp337;
nctempchar1* nctemp334= nctemp336;
int nctemp338=LibeOpen(nctemp330,nctemp334);
El2d->fdsxx =nctemp338;
}
}
int nctemp342=4;
if((0>4)||(4>=El2d->snpflags->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->snpflags %d %d %d %d \n " ,99,4,0,El2d->snpflags->d[0]-1);
}
int nctemp339 = (El2d->snpflags->a[nctemp342] ==1);
if(nctemp339)
{
{
struct nctempchar1 *nctemp351;
static struct nctempchar1 nctemp352 = {{ 12}, (char*)"snp-syy.bin\0"};
nctemp351=&nctemp352;
nctempchar1* nctemp349= nctemp351;
struct nctempchar1 *nctemp355;
static struct nctempchar1 nctemp356 = {{ 2}, (char*)"w\0"};
nctemp355=&nctemp356;
nctempchar1* nctemp353= nctemp355;
int nctemp357=LibeOpen(nctemp349,nctemp353);
El2d->fdsyy =nctemp357;
}
}
int nctemp361=5;
if((0>5)||(5>=El2d->snpflags->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->snpflags %d %d %d %d \n " ,102,5,0,El2d->snpflags->d[0]-1);
}
int nctemp358 = (El2d->snpflags->a[nctemp361] ==1);
if(nctemp358)
{
{
struct nctempchar1 *nctemp370;
static struct nctempchar1 nctemp371 = {{ 12}, (char*)"snp-sxy.bin\0"};
nctemp370=&nctemp371;
nctempchar1* nctemp368= nctemp370;
struct nctempchar1 *nctemp374;
static struct nctempchar1 nctemp375 = {{ 2}, (char*)"w\0"};
nctemp374=&nctemp375;
nctempchar1* nctemp372= nctemp374;
int nctemp376=LibeOpen(nctemp368,nctemp372);
El2d->fdsxy =nctemp376;
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
nx =Model->nx;
ny =Model->ny;
dt =Model->dt;
{
int nctempno=blockIdx.x*blockDim.x + threadIdx.x; i =0;
int nctemp396=i;
int nctemp390=nx-nctemp396;
j =0;
int nctemp403=j;
int nctemp397=ny-nctemp403;
int nctemp404=nctemp390*nctemp397;
for(nctempno=blockIdx.x*blockDim.x + threadIdx.x; nctempno<nctemp404;nctempno+=blockDim.x*gridDim.x){
i=(nctempno/(1))%nctemp390+nctemp396;
j=(nctempno/(1*nctemp390))+nctemp403;
{
{
int nctemp408=i;
if((0>i)||(i>=El2d->vx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->vx %d %d %d %d \n " ,127,i,0,El2d->vx->d[0]-1);
}
nctemp408=j*El2d->vx->d[0]+nctemp408;
if((0>j)||(j>=El2d->vx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->vx %d %d %d %d \n " ,127,j,1,El2d->vx->d[1]-1);
}
int nctemp425=i;
if((0>i)||(i>=Model->nu->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->nu %d %d %d %d \n " ,127,i,0,Model->nu->d[0]-1);
}
nctemp425=j*Model->nu->d[0]+nctemp425;
if((0>j)||(j>=Model->nu->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->nu %d %d %d %d \n " ,127,j,1,Model->nu->d[1]-1);
}
float nctemp428 = dt * Model->nu->a[nctemp425];
int nctemp433=i;
if((0>i)||(i>=El2d->exx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->exx %d %d %d %d \n " ,127,i,0,El2d->exx->d[0]-1);
}
nctemp433=j*El2d->exx->d[0]+nctemp433;
if((0>j)||(j>=El2d->exx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->exx %d %d %d %d \n " ,127,j,1,El2d->exx->d[1]-1);
}
int nctemp437=i;
if((0>i)||(i>=El2d->exy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->exy %d %d %d %d \n " ,127,i,0,El2d->exy->d[0]-1);
}
nctemp437=j*El2d->exy->d[0]+nctemp437;
if((0>j)||(j>=El2d->exy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->exy %d %d %d %d \n " ,127,j,1,El2d->exy->d[1]-1);
}
float nctemp440 = El2d->exx->a[nctemp433] + El2d->exy->a[nctemp437];
float nctemp441 = nctemp428 * nctemp440;
int nctemp450=i;
if((0>i)||(i>=El2d->thetaxx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->thetaxx %d %d %d %d \n " ,128,i,0,El2d->thetaxx->d[0]-1);
}
nctemp450=j*El2d->thetaxx->d[0]+nctemp450;
if((0>j)||(j>=El2d->thetaxx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->thetaxx %d %d %d %d \n " ,128,j,1,El2d->thetaxx->d[1]-1);
}
int nctemp454=i;
if((0>i)||(i>=El2d->thetaxy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->thetaxy %d %d %d %d \n " ,128,i,0,El2d->thetaxy->d[0]-1);
}
nctemp454=j*El2d->thetaxy->d[0]+nctemp454;
if((0>j)||(j>=El2d->thetaxy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->thetaxy %d %d %d %d \n " ,128,j,1,El2d->thetaxy->d[1]-1);
}
float nctemp457 = El2d->thetaxx->a[nctemp450] + El2d->thetaxy->a[nctemp454];
float nctemp458 = dt * nctemp457;
float nctemp459 = nctemp441 + nctemp458;
int nctemp461=i;
if((0>i)||(i>=El2d->vx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->vx %d %d %d %d \n " ,129,i,0,El2d->vx->d[0]-1);
}
nctemp461=j*El2d->vx->d[0]+nctemp461;
if((0>j)||(j>=El2d->vx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->vx %d %d %d %d \n " ,129,j,1,El2d->vx->d[1]-1);
}
float nctemp464 = nctemp459 + El2d->vx->a[nctemp461];
El2d->vx->a[nctemp408] =nctemp464;
int nctemp468=i;
if((0>i)||(i>=El2d->thetaxx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->thetaxx %d %d %d %d \n " ,131,i,0,El2d->thetaxx->d[0]-1);
}
nctemp468=j*El2d->thetaxx->d[0]+nctemp468;
if((0>j)||(j>=El2d->thetaxx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->thetaxx %d %d %d %d \n " ,131,j,1,El2d->thetaxx->d[1]-1);
}
int nctemp478=i;
if((0>i)||(i>=El2d->thetaxx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->thetaxx %d %d %d %d \n " ,131,i,0,El2d->thetaxx->d[0]-1);
}
nctemp478=j*El2d->thetaxx->d[0]+nctemp478;
if((0>j)||(j>=El2d->thetaxx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->thetaxx %d %d %d %d \n " ,131,j,1,El2d->thetaxx->d[1]-1);
}
float nctemp485= -dt;
int nctemp487=i;
if((0>i)||(i>=Model->etasx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etasx %d %d %d %d \n " ,131,i,0,Model->etasx->d[0]-1);
}
nctemp487=j*Model->etasx->d[0]+nctemp487;
if((0>j)||(j>=Model->etasx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etasx %d %d %d %d \n " ,131,j,1,Model->etasx->d[1]-1);
}
float nctemp490 = nctemp485 / Model->etasx->a[nctemp487];
float nctemp482= nctemp490;
float nctemp491=exp(nctemp482);
float nctemp492 = El2d->thetaxx->a[nctemp478] * nctemp491;
int nctemp506=i;
if((0>i)||(i>=Model->nu->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->nu %d %d %d %d \n " ,132,i,0,Model->nu->d[0]-1);
}
nctemp506=j*Model->nu->d[0]+nctemp506;
if((0>j)||(j>=Model->nu->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->nu %d %d %d %d \n " ,132,j,1,Model->nu->d[1]-1);
}
int nctemp517=i;
if((0>i)||(i>=Model->etaex->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etaex %d %d %d %d \n " ,132,i,0,Model->etaex->d[0]-1);
}
nctemp517=j*Model->etaex->d[0]+nctemp517;
if((0>j)||(j>=Model->etaex->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etaex %d %d %d %d \n " ,132,j,1,Model->etaex->d[1]-1);
}
int nctemp521=i;
if((0>i)||(i>=Model->etasx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etasx %d %d %d %d \n " ,133,i,0,Model->etasx->d[0]-1);
}
nctemp521=j*Model->etasx->d[0]+nctemp521;
if((0>j)||(j>=Model->etasx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etasx %d %d %d %d \n " ,133,j,1,Model->etasx->d[1]-1);
}
float nctemp524 = Model->etaex->a[nctemp517] / Model->etasx->a[nctemp521];
float nctemp525 = 1.0 - nctemp524;
float nctemp526 = Model->nu->a[nctemp506] * nctemp525;
float nctemp528 = nctemp526 * dt;
int nctemp530=i;
if((0>i)||(i>=Model->etaex->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etaex %d %d %d %d \n " ,133,i,0,Model->etaex->d[0]-1);
}
nctemp530=j*Model->etaex->d[0]+nctemp530;
if((0>j)||(j>=Model->etaex->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etaex %d %d %d %d \n " ,133,j,1,Model->etaex->d[1]-1);
}
float nctemp533 = nctemp528 / Model->etaex->a[nctemp530];
int nctemp535=i;
if((0>i)||(i>=El2d->exx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->exx %d %d %d %d \n " ,134,i,0,El2d->exx->d[0]-1);
}
nctemp535=j*El2d->exx->d[0]+nctemp535;
if((0>j)||(j>=El2d->exx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->exx %d %d %d %d \n " ,134,j,1,El2d->exx->d[1]-1);
}
float nctemp538 = nctemp533 * El2d->exx->a[nctemp535];
float nctemp539 = nctemp492 + nctemp538;
El2d->thetaxx->a[nctemp468] =nctemp539;
int nctemp543=i;
if((0>i)||(i>=El2d->thetaxy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->thetaxy %d %d %d %d \n " ,135,i,0,El2d->thetaxy->d[0]-1);
}
nctemp543=j*El2d->thetaxy->d[0]+nctemp543;
if((0>j)||(j>=El2d->thetaxy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->thetaxy %d %d %d %d \n " ,135,j,1,El2d->thetaxy->d[1]-1);
}
int nctemp553=i;
if((0>i)||(i>=El2d->thetaxy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->thetaxy %d %d %d %d \n " ,135,i,0,El2d->thetaxy->d[0]-1);
}
nctemp553=j*El2d->thetaxy->d[0]+nctemp553;
if((0>j)||(j>=El2d->thetaxy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->thetaxy %d %d %d %d \n " ,135,j,1,El2d->thetaxy->d[1]-1);
}
float nctemp560= -dt;
int nctemp562=i;
if((0>i)||(i>=Model->etasy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etasy %d %d %d %d \n " ,135,i,0,Model->etasy->d[0]-1);
}
nctemp562=j*Model->etasy->d[0]+nctemp562;
if((0>j)||(j>=Model->etasy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etasy %d %d %d %d \n " ,135,j,1,Model->etasy->d[1]-1);
}
float nctemp565 = nctemp560 / Model->etasy->a[nctemp562];
float nctemp557= nctemp565;
float nctemp566=exp(nctemp557);
float nctemp567 = El2d->thetaxy->a[nctemp553] * nctemp566;
int nctemp581=i;
if((0>i)||(i>=Model->nu->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->nu %d %d %d %d \n " ,136,i,0,Model->nu->d[0]-1);
}
nctemp581=j*Model->nu->d[0]+nctemp581;
if((0>j)||(j>=Model->nu->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->nu %d %d %d %d \n " ,136,j,1,Model->nu->d[1]-1);
}
int nctemp592=i;
if((0>i)||(i>=Model->etaey->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etaey %d %d %d %d \n " ,136,i,0,Model->etaey->d[0]-1);
}
nctemp592=j*Model->etaey->d[0]+nctemp592;
if((0>j)||(j>=Model->etaey->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etaey %d %d %d %d \n " ,136,j,1,Model->etaey->d[1]-1);
}
int nctemp596=i;
if((0>i)||(i>=Model->etasy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etasy %d %d %d %d \n " ,137,i,0,Model->etasy->d[0]-1);
}
nctemp596=j*Model->etasy->d[0]+nctemp596;
if((0>j)||(j>=Model->etasy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etasy %d %d %d %d \n " ,137,j,1,Model->etasy->d[1]-1);
}
float nctemp599 = Model->etaey->a[nctemp592] / Model->etasy->a[nctemp596];
float nctemp600 = 1.0 - nctemp599;
float nctemp601 = Model->nu->a[nctemp581] * nctemp600;
float nctemp603 = nctemp601 * dt;
int nctemp605=i;
if((0>i)||(i>=Model->etaey->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etaey %d %d %d %d \n " ,137,i,0,Model->etaey->d[0]-1);
}
nctemp605=j*Model->etaey->d[0]+nctemp605;
if((0>j)||(j>=Model->etaey->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etaey %d %d %d %d \n " ,137,j,1,Model->etaey->d[1]-1);
}
float nctemp608 = nctemp603 / Model->etaey->a[nctemp605];
int nctemp610=i;
if((0>i)||(i>=El2d->exy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->exy %d %d %d %d \n " ,138,i,0,El2d->exy->d[0]-1);
}
nctemp610=j*El2d->exy->d[0]+nctemp610;
if((0>j)||(j>=El2d->exy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->exy %d %d %d %d \n " ,138,j,1,El2d->exy->d[1]-1);
}
float nctemp613 = nctemp608 * El2d->exy->a[nctemp610];
float nctemp614 = nctemp567 + nctemp613;
El2d->thetaxy->a[nctemp543] =nctemp614;
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
nx =Model->nx;
ny =Model->ny;
dt =Model->dt;
{
int nctempno=blockIdx.x*blockDim.x + threadIdx.x; i =0;
int nctemp633=i;
int nctemp627=nx-nctemp633;
j =0;
int nctemp640=j;
int nctemp634=ny-nctemp640;
int nctemp641=nctemp627*nctemp634;
for(nctempno=blockIdx.x*blockDim.x + threadIdx.x; nctempno<nctemp641;nctempno+=blockDim.x*gridDim.x){
i=(nctempno/(1))%nctemp627+nctemp633;
j=(nctempno/(1*nctemp627))+nctemp640;
{
{
int nctemp645=i;
if((0>i)||(i>=El2d->vy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->vy %d %d %d %d \n " ,159,i,0,El2d->vy->d[0]-1);
}
nctemp645=j*El2d->vy->d[0]+nctemp645;
if((0>j)||(j>=El2d->vy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->vy %d %d %d %d \n " ,159,j,1,El2d->vy->d[1]-1);
}
int nctemp662=i;
if((0>i)||(i>=Model->nu->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->nu %d %d %d %d \n " ,159,i,0,Model->nu->d[0]-1);
}
nctemp662=j*Model->nu->d[0]+nctemp662;
if((0>j)||(j>=Model->nu->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->nu %d %d %d %d \n " ,159,j,1,Model->nu->d[1]-1);
}
float nctemp665 = dt * Model->nu->a[nctemp662];
int nctemp670=i;
if((0>i)||(i>=El2d->eyy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->eyy %d %d %d %d \n " ,159,i,0,El2d->eyy->d[0]-1);
}
nctemp670=j*El2d->eyy->d[0]+nctemp670;
if((0>j)||(j>=El2d->eyy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->eyy %d %d %d %d \n " ,159,j,1,El2d->eyy->d[1]-1);
}
int nctemp674=i;
if((0>i)||(i>=El2d->eyx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->eyx %d %d %d %d \n " ,159,i,0,El2d->eyx->d[0]-1);
}
nctemp674=j*El2d->eyx->d[0]+nctemp674;
if((0>j)||(j>=El2d->eyx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->eyx %d %d %d %d \n " ,159,j,1,El2d->eyx->d[1]-1);
}
float nctemp677 = El2d->eyy->a[nctemp670] + El2d->eyx->a[nctemp674];
float nctemp678 = nctemp665 * nctemp677;
int nctemp687=i;
if((0>i)||(i>=El2d->thetayy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->thetayy %d %d %d %d \n " ,160,i,0,El2d->thetayy->d[0]-1);
}
nctemp687=j*El2d->thetayy->d[0]+nctemp687;
if((0>j)||(j>=El2d->thetayy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->thetayy %d %d %d %d \n " ,160,j,1,El2d->thetayy->d[1]-1);
}
int nctemp691=i;
if((0>i)||(i>=El2d->thetayx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->thetayx %d %d %d %d \n " ,160,i,0,El2d->thetayx->d[0]-1);
}
nctemp691=j*El2d->thetayx->d[0]+nctemp691;
if((0>j)||(j>=El2d->thetayx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->thetayx %d %d %d %d \n " ,160,j,1,El2d->thetayx->d[1]-1);
}
float nctemp694 = El2d->thetayy->a[nctemp687] + El2d->thetayx->a[nctemp691];
float nctemp695 = dt * nctemp694;
float nctemp696 = nctemp678 + nctemp695;
int nctemp698=i;
if((0>i)||(i>=El2d->vy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->vy %d %d %d %d \n " ,161,i,0,El2d->vy->d[0]-1);
}
nctemp698=j*El2d->vy->d[0]+nctemp698;
if((0>j)||(j>=El2d->vy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->vy %d %d %d %d \n " ,161,j,1,El2d->vy->d[1]-1);
}
float nctemp701 = nctemp696 + El2d->vy->a[nctemp698];
El2d->vy->a[nctemp645] =nctemp701;
int nctemp705=i;
if((0>i)||(i>=El2d->thetayy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->thetayy %d %d %d %d \n " ,163,i,0,El2d->thetayy->d[0]-1);
}
nctemp705=j*El2d->thetayy->d[0]+nctemp705;
if((0>j)||(j>=El2d->thetayy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->thetayy %d %d %d %d \n " ,163,j,1,El2d->thetayy->d[1]-1);
}
int nctemp715=i;
if((0>i)||(i>=El2d->thetayy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->thetayy %d %d %d %d \n " ,163,i,0,El2d->thetayy->d[0]-1);
}
nctemp715=j*El2d->thetayy->d[0]+nctemp715;
if((0>j)||(j>=El2d->thetayy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->thetayy %d %d %d %d \n " ,163,j,1,El2d->thetayy->d[1]-1);
}
float nctemp722= -dt;
int nctemp724=i;
if((0>i)||(i>=Model->etasy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etasy %d %d %d %d \n " ,163,i,0,Model->etasy->d[0]-1);
}
nctemp724=j*Model->etasy->d[0]+nctemp724;
if((0>j)||(j>=Model->etasy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etasy %d %d %d %d \n " ,163,j,1,Model->etasy->d[1]-1);
}
float nctemp727 = nctemp722 / Model->etasy->a[nctemp724];
float nctemp719= nctemp727;
float nctemp728=exp(nctemp719);
float nctemp729 = El2d->thetayy->a[nctemp715] * nctemp728;
int nctemp743=i;
if((0>i)||(i>=Model->nu->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->nu %d %d %d %d \n " ,164,i,0,Model->nu->d[0]-1);
}
nctemp743=j*Model->nu->d[0]+nctemp743;
if((0>j)||(j>=Model->nu->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->nu %d %d %d %d \n " ,164,j,1,Model->nu->d[1]-1);
}
int nctemp754=i;
if((0>i)||(i>=Model->etaey->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etaey %d %d %d %d \n " ,164,i,0,Model->etaey->d[0]-1);
}
nctemp754=j*Model->etaey->d[0]+nctemp754;
if((0>j)||(j>=Model->etaey->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etaey %d %d %d %d \n " ,164,j,1,Model->etaey->d[1]-1);
}
int nctemp758=i;
if((0>i)||(i>=Model->etasy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etasy %d %d %d %d \n " ,165,i,0,Model->etasy->d[0]-1);
}
nctemp758=j*Model->etasy->d[0]+nctemp758;
if((0>j)||(j>=Model->etasy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etasy %d %d %d %d \n " ,165,j,1,Model->etasy->d[1]-1);
}
float nctemp761 = Model->etaey->a[nctemp754] / Model->etasy->a[nctemp758];
float nctemp762 = 1.0 - nctemp761;
float nctemp763 = Model->nu->a[nctemp743] * nctemp762;
float nctemp765 = nctemp763 * dt;
int nctemp767=i;
if((0>i)||(i>=Model->etaey->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etaey %d %d %d %d \n " ,165,i,0,Model->etaey->d[0]-1);
}
nctemp767=j*Model->etaey->d[0]+nctemp767;
if((0>j)||(j>=Model->etaey->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etaey %d %d %d %d \n " ,165,j,1,Model->etaey->d[1]-1);
}
float nctemp770 = nctemp765 / Model->etaey->a[nctemp767];
int nctemp772=i;
if((0>i)||(i>=El2d->eyy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->eyy %d %d %d %d \n " ,166,i,0,El2d->eyy->d[0]-1);
}
nctemp772=j*El2d->eyy->d[0]+nctemp772;
if((0>j)||(j>=El2d->eyy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->eyy %d %d %d %d \n " ,166,j,1,El2d->eyy->d[1]-1);
}
float nctemp775 = nctemp770 * El2d->eyy->a[nctemp772];
float nctemp776 = nctemp729 + nctemp775;
El2d->thetayy->a[nctemp705] =nctemp776;
int nctemp780=i;
if((0>i)||(i>=El2d->thetayx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->thetayx %d %d %d %d \n " ,167,i,0,El2d->thetayx->d[0]-1);
}
nctemp780=j*El2d->thetayx->d[0]+nctemp780;
if((0>j)||(j>=El2d->thetayx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->thetayx %d %d %d %d \n " ,167,j,1,El2d->thetayx->d[1]-1);
}
int nctemp790=i;
if((0>i)||(i>=El2d->thetayx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->thetayx %d %d %d %d \n " ,167,i,0,El2d->thetayx->d[0]-1);
}
nctemp790=j*El2d->thetayx->d[0]+nctemp790;
if((0>j)||(j>=El2d->thetayx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->thetayx %d %d %d %d \n " ,167,j,1,El2d->thetayx->d[1]-1);
}
float nctemp797= -dt;
int nctemp799=i;
if((0>i)||(i>=Model->etasx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etasx %d %d %d %d \n " ,167,i,0,Model->etasx->d[0]-1);
}
nctemp799=j*Model->etasx->d[0]+nctemp799;
if((0>j)||(j>=Model->etasx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etasx %d %d %d %d \n " ,167,j,1,Model->etasx->d[1]-1);
}
float nctemp802 = nctemp797 / Model->etasx->a[nctemp799];
float nctemp794= nctemp802;
float nctemp803=exp(nctemp794);
float nctemp804 = El2d->thetayx->a[nctemp790] * nctemp803;
int nctemp818=i;
if((0>i)||(i>=Model->nu->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->nu %d %d %d %d \n " ,168,i,0,Model->nu->d[0]-1);
}
nctemp818=j*Model->nu->d[0]+nctemp818;
if((0>j)||(j>=Model->nu->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->nu %d %d %d %d \n " ,168,j,1,Model->nu->d[1]-1);
}
int nctemp829=i;
if((0>i)||(i>=Model->etaex->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etaex %d %d %d %d \n " ,168,i,0,Model->etaex->d[0]-1);
}
nctemp829=j*Model->etaex->d[0]+nctemp829;
if((0>j)||(j>=Model->etaex->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etaex %d %d %d %d \n " ,168,j,1,Model->etaex->d[1]-1);
}
int nctemp833=i;
if((0>i)||(i>=Model->etasx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etasx %d %d %d %d \n " ,169,i,0,Model->etasx->d[0]-1);
}
nctemp833=j*Model->etasx->d[0]+nctemp833;
if((0>j)||(j>=Model->etasx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etasx %d %d %d %d \n " ,169,j,1,Model->etasx->d[1]-1);
}
float nctemp836 = Model->etaex->a[nctemp829] / Model->etasx->a[nctemp833];
float nctemp837 = 1.0 - nctemp836;
float nctemp838 = Model->nu->a[nctemp818] * nctemp837;
float nctemp840 = nctemp838 * dt;
int nctemp842=i;
if((0>i)||(i>=Model->etaex->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etaex %d %d %d %d \n " ,169,i,0,Model->etaex->d[0]-1);
}
nctemp842=j*Model->etaex->d[0]+nctemp842;
if((0>j)||(j>=Model->etaex->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->etaex %d %d %d %d \n " ,169,j,1,Model->etaex->d[1]-1);
}
float nctemp845 = nctemp840 / Model->etaex->a[nctemp842];
int nctemp847=i;
if((0>i)||(i>=El2d->eyx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->eyx %d %d %d %d \n " ,170,i,0,El2d->eyx->d[0]-1);
}
nctemp847=j*El2d->eyx->d[0]+nctemp847;
if((0>j)||(j>=El2d->eyx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->eyx %d %d %d %d \n " ,170,j,1,El2d->eyx->d[1]-1);
}
float nctemp850 = nctemp845 * El2d->eyx->a[nctemp847];
float nctemp851 = nctemp804 + nctemp850;
El2d->thetayx->a[nctemp780] =nctemp851;
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
nx =Model->nx;
ny =Model->ny;
dt =Model->dt;
{
int nctempno=blockIdx.x*blockDim.x + threadIdx.x; i =0;
int nctemp870=i;
int nctemp864=nx-nctemp870;
j =0;
int nctemp877=j;
int nctemp871=ny-nctemp877;
int nctemp878=nctemp864*nctemp871;
for(nctempno=blockIdx.x*blockDim.x + threadIdx.x; nctempno<nctemp878;nctempno+=blockDim.x*gridDim.x){
i=(nctempno/(1))%nctemp864+nctemp870;
j=(nctempno/(1*nctemp864))+nctemp877;
{
{
int nctemp882=i;
if((0>i)||(i>=El2d->sigmaxx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmaxx %d %d %d %d \n " ,185,i,0,El2d->sigmaxx->d[0]-1);
}
nctemp882=j*El2d->sigmaxx->d[0]+nctemp882;
if((0>j)||(j>=El2d->sigmaxx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmaxx %d %d %d %d \n " ,185,j,1,El2d->sigmaxx->d[1]-1);
}
int nctemp902=i;
if((0>i)||(i>=Model->lambda->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->lambda %d %d %d %d \n " ,185,i,0,Model->lambda->d[0]-1);
}
nctemp902=j*Model->lambda->d[0]+nctemp902;
if((0>j)||(j>=Model->lambda->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->lambda %d %d %d %d \n " ,185,j,1,Model->lambda->d[1]-1);
}
float nctemp905 = Model->dt * Model->lambda->a[nctemp902];
int nctemp910=i;
if((0>i)||(i>=El2d->exx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->exx %d %d %d %d \n " ,186,i,0,El2d->exx->d[0]-1);
}
nctemp910=j*El2d->exx->d[0]+nctemp910;
if((0>j)||(j>=El2d->exx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->exx %d %d %d %d \n " ,186,j,1,El2d->exx->d[1]-1);
}
int nctemp914=i;
if((0>i)||(i>=El2d->eyy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->eyy %d %d %d %d \n " ,186,i,0,El2d->eyy->d[0]-1);
}
nctemp914=j*El2d->eyy->d[0]+nctemp914;
if((0>j)||(j>=El2d->eyy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->eyy %d %d %d %d \n " ,186,j,1,El2d->eyy->d[1]-1);
}
float nctemp917 = El2d->exx->a[nctemp910] + El2d->eyy->a[nctemp914];
float nctemp918 = nctemp905 * nctemp917;
float nctemp930 = Model->dt * 2.0;
int nctemp932=i;
if((0>i)||(i>=Model->mu->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->mu %d %d %d %d \n " ,187,i,0,Model->mu->d[0]-1);
}
nctemp932=j*Model->mu->d[0]+nctemp932;
if((0>j)||(j>=Model->mu->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->mu %d %d %d %d \n " ,187,j,1,Model->mu->d[1]-1);
}
float nctemp935 = nctemp930 * Model->mu->a[nctemp932];
int nctemp937=i;
if((0>i)||(i>=El2d->exx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->exx %d %d %d %d \n " ,187,i,0,El2d->exx->d[0]-1);
}
nctemp937=j*El2d->exx->d[0]+nctemp937;
if((0>j)||(j>=El2d->exx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->exx %d %d %d %d \n " ,187,j,1,El2d->exx->d[1]-1);
}
float nctemp940 = nctemp935 * El2d->exx->a[nctemp937];
float nctemp941 = nctemp918 + nctemp940;
int nctemp953=i;
if((0>i)||(i>=El2d->gammax->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->gammax %d %d %d %d \n " ,188,i,0,El2d->gammax->d[0]-1);
}
nctemp953=j*El2d->gammax->d[0]+nctemp953;
if((0>j)||(j>=El2d->gammax->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->gammax %d %d %d %d \n " ,188,j,1,El2d->gammax->d[1]-1);
}
int nctemp957=i;
if((0>i)||(i>=El2d->gammay->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->gammay %d %d %d %d \n " ,188,i,0,El2d->gammay->d[0]-1);
}
nctemp957=j*El2d->gammay->d[0]+nctemp957;
if((0>j)||(j>=El2d->gammay->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->gammay %d %d %d %d \n " ,188,j,1,El2d->gammay->d[1]-1);
}
float nctemp960 = El2d->gammax->a[nctemp953] + El2d->gammay->a[nctemp957];
int nctemp962=i;
if((0>i)||(i>=El2d->alphax->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->alphax %d %d %d %d \n " ,189,i,0,El2d->alphax->d[0]-1);
}
nctemp962=j*El2d->alphax->d[0]+nctemp962;
if((0>j)||(j>=El2d->alphax->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->alphax %d %d %d %d \n " ,189,j,1,El2d->alphax->d[1]-1);
}
float nctemp965 = nctemp960 + El2d->alphax->a[nctemp962];
float nctemp966 = dt * nctemp965;
float nctemp967 = nctemp941 + nctemp966;
int nctemp969=i;
if((0>i)||(i>=El2d->sigmaxx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmaxx %d %d %d %d \n " ,190,i,0,El2d->sigmaxx->d[0]-1);
}
nctemp969=j*El2d->sigmaxx->d[0]+nctemp969;
if((0>j)||(j>=El2d->sigmaxx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmaxx %d %d %d %d \n " ,190,j,1,El2d->sigmaxx->d[1]-1);
}
float nctemp972 = nctemp967 + El2d->sigmaxx->a[nctemp969];
El2d->sigmaxx->a[nctemp882] =nctemp972;
int nctemp976=i;
if((0>i)||(i>=El2d->sigmayy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmayy %d %d %d %d \n " ,192,i,0,El2d->sigmayy->d[0]-1);
}
nctemp976=j*El2d->sigmayy->d[0]+nctemp976;
if((0>j)||(j>=El2d->sigmayy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmayy %d %d %d %d \n " ,192,j,1,El2d->sigmayy->d[1]-1);
}
int nctemp996=i;
if((0>i)||(i>=Model->lambda->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->lambda %d %d %d %d \n " ,192,i,0,Model->lambda->d[0]-1);
}
nctemp996=j*Model->lambda->d[0]+nctemp996;
if((0>j)||(j>=Model->lambda->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->lambda %d %d %d %d \n " ,192,j,1,Model->lambda->d[1]-1);
}
float nctemp999 = Model->dt * Model->lambda->a[nctemp996];
int nctemp1004=i;
if((0>i)||(i>=El2d->exx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->exx %d %d %d %d \n " ,193,i,0,El2d->exx->d[0]-1);
}
nctemp1004=j*El2d->exx->d[0]+nctemp1004;
if((0>j)||(j>=El2d->exx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->exx %d %d %d %d \n " ,193,j,1,El2d->exx->d[1]-1);
}
int nctemp1008=i;
if((0>i)||(i>=El2d->eyy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->eyy %d %d %d %d \n " ,193,i,0,El2d->eyy->d[0]-1);
}
nctemp1008=j*El2d->eyy->d[0]+nctemp1008;
if((0>j)||(j>=El2d->eyy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->eyy %d %d %d %d \n " ,193,j,1,El2d->eyy->d[1]-1);
}
float nctemp1011 = El2d->exx->a[nctemp1004] + El2d->eyy->a[nctemp1008];
float nctemp1012 = nctemp999 * nctemp1011;
float nctemp1024 = Model->dt * 2.0;
int nctemp1026=i;
if((0>i)||(i>=Model->mu->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->mu %d %d %d %d \n " ,194,i,0,Model->mu->d[0]-1);
}
nctemp1026=j*Model->mu->d[0]+nctemp1026;
if((0>j)||(j>=Model->mu->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->mu %d %d %d %d \n " ,194,j,1,Model->mu->d[1]-1);
}
float nctemp1029 = nctemp1024 * Model->mu->a[nctemp1026];
int nctemp1031=i;
if((0>i)||(i>=El2d->eyy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->eyy %d %d %d %d \n " ,194,i,0,El2d->eyy->d[0]-1);
}
nctemp1031=j*El2d->eyy->d[0]+nctemp1031;
if((0>j)||(j>=El2d->eyy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->eyy %d %d %d %d \n " ,194,j,1,El2d->eyy->d[1]-1);
}
float nctemp1034 = nctemp1029 * El2d->eyy->a[nctemp1031];
float nctemp1035 = nctemp1012 + nctemp1034;
int nctemp1047=i;
if((0>i)||(i>=El2d->gammax->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->gammax %d %d %d %d \n " ,195,i,0,El2d->gammax->d[0]-1);
}
nctemp1047=j*El2d->gammax->d[0]+nctemp1047;
if((0>j)||(j>=El2d->gammax->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->gammax %d %d %d %d \n " ,195,j,1,El2d->gammax->d[1]-1);
}
int nctemp1051=i;
if((0>i)||(i>=El2d->gammay->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->gammay %d %d %d %d \n " ,195,i,0,El2d->gammay->d[0]-1);
}
nctemp1051=j*El2d->gammay->d[0]+nctemp1051;
if((0>j)||(j>=El2d->gammay->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->gammay %d %d %d %d \n " ,195,j,1,El2d->gammay->d[1]-1);
}
float nctemp1054 = El2d->gammax->a[nctemp1047] + El2d->gammay->a[nctemp1051];
int nctemp1056=i;
if((0>i)||(i>=El2d->alphay->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->alphay %d %d %d %d \n " ,196,i,0,El2d->alphay->d[0]-1);
}
nctemp1056=j*El2d->alphay->d[0]+nctemp1056;
if((0>j)||(j>=El2d->alphay->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->alphay %d %d %d %d \n " ,196,j,1,El2d->alphay->d[1]-1);
}
float nctemp1059 = nctemp1054 + El2d->alphay->a[nctemp1056];
float nctemp1060 = dt * nctemp1059;
float nctemp1061 = nctemp1035 + nctemp1060;
int nctemp1063=i;
if((0>i)||(i>=El2d->sigmayy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmayy %d %d %d %d \n " ,197,i,0,El2d->sigmayy->d[0]-1);
}
nctemp1063=j*El2d->sigmayy->d[0]+nctemp1063;
if((0>j)||(j>=El2d->sigmayy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmayy %d %d %d %d \n " ,197,j,1,El2d->sigmayy->d[1]-1);
}
float nctemp1066 = nctemp1061 + El2d->sigmayy->a[nctemp1063];
El2d->sigmayy->a[nctemp976] =nctemp1066;
int nctemp1070=i;
if((0>i)||(i>=El2d->p->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->p %d %d %d %d \n " ,199,i,0,El2d->p->d[0]-1);
}
nctemp1070=j*El2d->p->d[0]+nctemp1070;
if((0>j)||(j>=El2d->p->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->p %d %d %d %d \n " ,199,j,1,El2d->p->d[1]-1);
}
int nctemp1081=i;
if((0>i)||(i>=El2d->sigmaxx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmaxx %d %d %d %d \n " ,199,i,0,El2d->sigmaxx->d[0]-1);
}
nctemp1081=j*El2d->sigmaxx->d[0]+nctemp1081;
if((0>j)||(j>=El2d->sigmaxx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmaxx %d %d %d %d \n " ,199,j,1,El2d->sigmaxx->d[1]-1);
}
int nctemp1085=i;
if((0>i)||(i>=El2d->sigmayy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmayy %d %d %d %d \n " ,199,i,0,El2d->sigmayy->d[0]-1);
}
nctemp1085=j*El2d->sigmayy->d[0]+nctemp1085;
if((0>j)||(j>=El2d->sigmayy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmayy %d %d %d %d \n " ,199,j,1,El2d->sigmayy->d[1]-1);
}
float nctemp1088 = El2d->sigmaxx->a[nctemp1081] + El2d->sigmayy->a[nctemp1085];
float nctemp1089 = 0.5 * nctemp1088;
El2d->p->a[nctemp1070] =nctemp1089;
int nctemp1093=i;
if((0>i)||(i>=El2d->sigmaxy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmaxy %d %d %d %d \n " ,201,i,0,El2d->sigmaxy->d[0]-1);
}
nctemp1093=j*El2d->sigmaxy->d[0]+nctemp1093;
if((0>j)||(j>=El2d->sigmaxy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmaxy %d %d %d %d \n " ,201,j,1,El2d->sigmaxy->d[1]-1);
}
int nctemp1110=i;
if((0>i)||(i>=Model->mu->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->mu %d %d %d %d \n " ,201,i,0,Model->mu->d[0]-1);
}
nctemp1110=j*Model->mu->d[0]+nctemp1110;
if((0>j)||(j>=Model->mu->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->mu %d %d %d %d \n " ,201,j,1,Model->mu->d[1]-1);
}
float nctemp1113 = Model->dt * Model->mu->a[nctemp1110];
int nctemp1118=i;
if((0>i)||(i>=El2d->exy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->exy %d %d %d %d \n " ,201,i,0,El2d->exy->d[0]-1);
}
nctemp1118=j*El2d->exy->d[0]+nctemp1118;
if((0>j)||(j>=El2d->exy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->exy %d %d %d %d \n " ,201,j,1,El2d->exy->d[1]-1);
}
int nctemp1122=i;
if((0>i)||(i>=El2d->eyx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->eyx %d %d %d %d \n " ,201,i,0,El2d->eyx->d[0]-1);
}
nctemp1122=j*El2d->eyx->d[0]+nctemp1122;
if((0>j)||(j>=El2d->eyx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->eyx %d %d %d %d \n " ,201,j,1,El2d->eyx->d[1]-1);
}
float nctemp1125 = El2d->exy->a[nctemp1118] + El2d->eyx->a[nctemp1122];
float nctemp1126 = nctemp1113 * nctemp1125;
int nctemp1135=i;
if((0>i)||(i>=El2d->betaxy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->betaxy %d %d %d %d \n " ,202,i,0,El2d->betaxy->d[0]-1);
}
nctemp1135=j*El2d->betaxy->d[0]+nctemp1135;
if((0>j)||(j>=El2d->betaxy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->betaxy %d %d %d %d \n " ,202,j,1,El2d->betaxy->d[1]-1);
}
int nctemp1139=i;
if((0>i)||(i>=El2d->betayx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->betayx %d %d %d %d \n " ,202,i,0,El2d->betayx->d[0]-1);
}
nctemp1139=j*El2d->betayx->d[0]+nctemp1139;
if((0>j)||(j>=El2d->betayx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->betayx %d %d %d %d \n " ,202,j,1,El2d->betayx->d[1]-1);
}
float nctemp1142 = El2d->betaxy->a[nctemp1135] + El2d->betayx->a[nctemp1139];
float nctemp1143 = dt * nctemp1142;
float nctemp1144 = nctemp1126 + nctemp1143;
int nctemp1146=i;
if((0>i)||(i>=El2d->sigmaxy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmaxy %d %d %d %d \n " ,203,i,0,El2d->sigmaxy->d[0]-1);
}
nctemp1146=j*El2d->sigmaxy->d[0]+nctemp1146;
if((0>j)||(j>=El2d->sigmaxy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmaxy %d %d %d %d \n " ,203,j,1,El2d->sigmaxy->d[1]-1);
}
float nctemp1149 = nctemp1144 + El2d->sigmaxy->a[nctemp1146];
El2d->sigmaxy->a[nctemp1093] =nctemp1149;
int nctemp1153=i;
if((0>i)||(i>=El2d->sigmayx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmayx %d %d %d %d \n " ,205,i,0,El2d->sigmayx->d[0]-1);
}
nctemp1153=j*El2d->sigmayx->d[0]+nctemp1153;
if((0>j)||(j>=El2d->sigmayx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmayx %d %d %d %d \n " ,205,j,1,El2d->sigmayx->d[1]-1);
}
int nctemp1170=i;
if((0>i)||(i>=Model->mu->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->mu %d %d %d %d \n " ,205,i,0,Model->mu->d[0]-1);
}
nctemp1170=j*Model->mu->d[0]+nctemp1170;
if((0>j)||(j>=Model->mu->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->mu %d %d %d %d \n " ,205,j,1,Model->mu->d[1]-1);
}
float nctemp1173 = Model->dt * Model->mu->a[nctemp1170];
int nctemp1178=i;
if((0>i)||(i>=El2d->eyx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->eyx %d %d %d %d \n " ,205,i,0,El2d->eyx->d[0]-1);
}
nctemp1178=j*El2d->eyx->d[0]+nctemp1178;
if((0>j)||(j>=El2d->eyx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->eyx %d %d %d %d \n " ,205,j,1,El2d->eyx->d[1]-1);
}
int nctemp1182=i;
if((0>i)||(i>=El2d->exy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->exy %d %d %d %d \n " ,205,i,0,El2d->exy->d[0]-1);
}
nctemp1182=j*El2d->exy->d[0]+nctemp1182;
if((0>j)||(j>=El2d->exy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->exy %d %d %d %d \n " ,205,j,1,El2d->exy->d[1]-1);
}
float nctemp1185 = El2d->eyx->a[nctemp1178] + El2d->exy->a[nctemp1182];
float nctemp1186 = nctemp1173 * nctemp1185;
int nctemp1195=i;
if((0>i)||(i>=El2d->betayx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->betayx %d %d %d %d \n " ,206,i,0,El2d->betayx->d[0]-1);
}
nctemp1195=j*El2d->betayx->d[0]+nctemp1195;
if((0>j)||(j>=El2d->betayx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->betayx %d %d %d %d \n " ,206,j,1,El2d->betayx->d[1]-1);
}
int nctemp1199=i;
if((0>i)||(i>=El2d->betaxy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->betaxy %d %d %d %d \n " ,206,i,0,El2d->betaxy->d[0]-1);
}
nctemp1199=j*El2d->betaxy->d[0]+nctemp1199;
if((0>j)||(j>=El2d->betaxy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->betaxy %d %d %d %d \n " ,206,j,1,El2d->betaxy->d[1]-1);
}
float nctemp1202 = El2d->betayx->a[nctemp1195] + El2d->betaxy->a[nctemp1199];
float nctemp1203 = dt * nctemp1202;
float nctemp1204 = nctemp1186 + nctemp1203;
int nctemp1206=i;
if((0>i)||(i>=El2d->sigmayx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmayx %d %d %d %d \n " ,207,i,0,El2d->sigmayx->d[0]-1);
}
nctemp1206=j*El2d->sigmayx->d[0]+nctemp1206;
if((0>j)||(j>=El2d->sigmayx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmayx %d %d %d %d \n " ,207,j,1,El2d->sigmayx->d[1]-1);
}
float nctemp1209 = nctemp1204 + El2d->sigmayx->a[nctemp1206];
El2d->sigmayx->a[nctemp1153] =nctemp1209;
int nctemp1213=i;
if((0>i)||(i>=El2d->gammax->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->gammax %d %d %d %d \n " ,209,i,0,El2d->gammax->d[0]-1);
}
nctemp1213=j*El2d->gammax->d[0]+nctemp1213;
if((0>j)||(j>=El2d->gammax->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->gammax %d %d %d %d \n " ,209,j,1,El2d->gammax->d[1]-1);
}
int nctemp1223=i;
if((0>i)||(i>=El2d->gammax->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->gammax %d %d %d %d \n " ,209,i,0,El2d->gammax->d[0]-1);
}
nctemp1223=j*El2d->gammax->d[0]+nctemp1223;
if((0>j)||(j>=El2d->gammax->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->gammax %d %d %d %d \n " ,209,j,1,El2d->gammax->d[1]-1);
}
float nctemp1230= -dt;
int nctemp1232=i;
if((0>i)||(i>=Model->tausx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->tausx %d %d %d %d \n " ,209,i,0,Model->tausx->d[0]-1);
}
nctemp1232=j*Model->tausx->d[0]+nctemp1232;
if((0>j)||(j>=Model->tausx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->tausx %d %d %d %d \n " ,209,j,1,Model->tausx->d[1]-1);
}
float nctemp1235 = nctemp1230 / Model->tausx->a[nctemp1232];
float nctemp1227= nctemp1235;
float nctemp1236=exp(nctemp1227);
float nctemp1237 = El2d->gammax->a[nctemp1223] * nctemp1236;
int nctemp1251=i;
if((0>i)||(i>=Model->lambda->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->lambda %d %d %d %d \n " ,210,i,0,Model->lambda->d[0]-1);
}
nctemp1251=j*Model->lambda->d[0]+nctemp1251;
if((0>j)||(j>=Model->lambda->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->lambda %d %d %d %d \n " ,210,j,1,Model->lambda->d[1]-1);
}
int nctemp1262=i;
if((0>i)||(i>=Model->tauex->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->tauex %d %d %d %d \n " ,210,i,0,Model->tauex->d[0]-1);
}
nctemp1262=j*Model->tauex->d[0]+nctemp1262;
if((0>j)||(j>=Model->tauex->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->tauex %d %d %d %d \n " ,210,j,1,Model->tauex->d[1]-1);
}
int nctemp1266=i;
if((0>i)||(i>=Model->tausx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->tausx %d %d %d %d \n " ,211,i,0,Model->tausx->d[0]-1);
}
nctemp1266=j*Model->tausx->d[0]+nctemp1266;
if((0>j)||(j>=Model->tausx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->tausx %d %d %d %d \n " ,211,j,1,Model->tausx->d[1]-1);
}
float nctemp1269 = Model->tauex->a[nctemp1262] / Model->tausx->a[nctemp1266];
float nctemp1270 = 1.0 - nctemp1269;
float nctemp1271 = Model->lambda->a[nctemp1251] * nctemp1270;
float nctemp1273 = nctemp1271 * dt;
int nctemp1275=i;
if((0>i)||(i>=Model->tauex->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->tauex %d %d %d %d \n " ,211,i,0,Model->tauex->d[0]-1);
}
nctemp1275=j*Model->tauex->d[0]+nctemp1275;
if((0>j)||(j>=Model->tauex->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->tauex %d %d %d %d \n " ,211,j,1,Model->tauex->d[1]-1);
}
float nctemp1278 = nctemp1273 / Model->tauex->a[nctemp1275];
int nctemp1280=i;
if((0>i)||(i>=El2d->exx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->exx %d %d %d %d \n " ,212,i,0,El2d->exx->d[0]-1);
}
nctemp1280=j*El2d->exx->d[0]+nctemp1280;
if((0>j)||(j>=El2d->exx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->exx %d %d %d %d \n " ,212,j,1,El2d->exx->d[1]-1);
}
float nctemp1283 = nctemp1278 * El2d->exx->a[nctemp1280];
float nctemp1284 = nctemp1237 + nctemp1283;
El2d->gammax->a[nctemp1213] =nctemp1284;
int nctemp1288=i;
if((0>i)||(i>=El2d->gammay->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->gammay %d %d %d %d \n " ,214,i,0,El2d->gammay->d[0]-1);
}
nctemp1288=j*El2d->gammay->d[0]+nctemp1288;
if((0>j)||(j>=El2d->gammay->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->gammay %d %d %d %d \n " ,214,j,1,El2d->gammay->d[1]-1);
}
int nctemp1298=i;
if((0>i)||(i>=El2d->gammay->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->gammay %d %d %d %d \n " ,214,i,0,El2d->gammay->d[0]-1);
}
nctemp1298=j*El2d->gammay->d[0]+nctemp1298;
if((0>j)||(j>=El2d->gammay->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->gammay %d %d %d %d \n " ,214,j,1,El2d->gammay->d[1]-1);
}
float nctemp1305= -dt;
int nctemp1307=i;
if((0>i)||(i>=Model->tausy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->tausy %d %d %d %d \n " ,214,i,0,Model->tausy->d[0]-1);
}
nctemp1307=j*Model->tausy->d[0]+nctemp1307;
if((0>j)||(j>=Model->tausy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->tausy %d %d %d %d \n " ,214,j,1,Model->tausy->d[1]-1);
}
float nctemp1310 = nctemp1305 / Model->tausy->a[nctemp1307];
float nctemp1302= nctemp1310;
float nctemp1311=exp(nctemp1302);
float nctemp1312 = El2d->gammay->a[nctemp1298] * nctemp1311;
int nctemp1326=i;
if((0>i)||(i>=Model->lambda->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->lambda %d %d %d %d \n " ,215,i,0,Model->lambda->d[0]-1);
}
nctemp1326=j*Model->lambda->d[0]+nctemp1326;
if((0>j)||(j>=Model->lambda->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->lambda %d %d %d %d \n " ,215,j,1,Model->lambda->d[1]-1);
}
int nctemp1337=i;
if((0>i)||(i>=Model->tauey->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->tauey %d %d %d %d \n " ,215,i,0,Model->tauey->d[0]-1);
}
nctemp1337=j*Model->tauey->d[0]+nctemp1337;
if((0>j)||(j>=Model->tauey->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->tauey %d %d %d %d \n " ,215,j,1,Model->tauey->d[1]-1);
}
int nctemp1341=i;
if((0>i)||(i>=Model->tausy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->tausy %d %d %d %d \n " ,216,i,0,Model->tausy->d[0]-1);
}
nctemp1341=j*Model->tausy->d[0]+nctemp1341;
if((0>j)||(j>=Model->tausy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->tausy %d %d %d %d \n " ,216,j,1,Model->tausy->d[1]-1);
}
float nctemp1344 = Model->tauey->a[nctemp1337] / Model->tausy->a[nctemp1341];
float nctemp1345 = 1.0 - nctemp1344;
float nctemp1346 = Model->lambda->a[nctemp1326] * nctemp1345;
float nctemp1348 = nctemp1346 * dt;
int nctemp1350=i;
if((0>i)||(i>=Model->tauey->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->tauey %d %d %d %d \n " ,216,i,0,Model->tauey->d[0]-1);
}
nctemp1350=j*Model->tauey->d[0]+nctemp1350;
if((0>j)||(j>=Model->tauey->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->tauey %d %d %d %d \n " ,216,j,1,Model->tauey->d[1]-1);
}
float nctemp1353 = nctemp1348 / Model->tauey->a[nctemp1350];
int nctemp1355=i;
if((0>i)||(i>=El2d->eyy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->eyy %d %d %d %d \n " ,217,i,0,El2d->eyy->d[0]-1);
}
nctemp1355=j*El2d->eyy->d[0]+nctemp1355;
if((0>j)||(j>=El2d->eyy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->eyy %d %d %d %d \n " ,217,j,1,El2d->eyy->d[1]-1);
}
float nctemp1358 = nctemp1353 * El2d->eyy->a[nctemp1355];
float nctemp1359 = nctemp1312 + nctemp1358;
El2d->gammay->a[nctemp1288] =nctemp1359;
int nctemp1363=i;
if((0>i)||(i>=El2d->alphax->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->alphax %d %d %d %d \n " ,219,i,0,El2d->alphax->d[0]-1);
}
nctemp1363=j*El2d->alphax->d[0]+nctemp1363;
if((0>j)||(j>=El2d->alphax->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->alphax %d %d %d %d \n " ,219,j,1,El2d->alphax->d[1]-1);
}
int nctemp1373=i;
if((0>i)||(i>=El2d->alphax->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->alphax %d %d %d %d \n " ,219,i,0,El2d->alphax->d[0]-1);
}
nctemp1373=j*El2d->alphax->d[0]+nctemp1373;
if((0>j)||(j>=El2d->alphax->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->alphax %d %d %d %d \n " ,219,j,1,El2d->alphax->d[1]-1);
}
float nctemp1380= -dt;
int nctemp1382=i;
if((0>i)||(i>=Model->chisx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chisx %d %d %d %d \n " ,219,i,0,Model->chisx->d[0]-1);
}
nctemp1382=j*Model->chisx->d[0]+nctemp1382;
if((0>j)||(j>=Model->chisx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chisx %d %d %d %d \n " ,219,j,1,Model->chisx->d[1]-1);
}
float nctemp1385 = nctemp1380 / Model->chisx->a[nctemp1382];
float nctemp1377= nctemp1385;
float nctemp1386=exp(nctemp1377);
float nctemp1387 = El2d->alphax->a[nctemp1373] * nctemp1386;
int nctemp1401=i;
if((0>i)||(i>=Model->mu->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->mu %d %d %d %d \n " ,220,i,0,Model->mu->d[0]-1);
}
nctemp1401=j*Model->mu->d[0]+nctemp1401;
if((0>j)||(j>=Model->mu->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->mu %d %d %d %d \n " ,220,j,1,Model->mu->d[1]-1);
}
int nctemp1412=i;
if((0>i)||(i>=Model->chiex->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chiex %d %d %d %d \n " ,220,i,0,Model->chiex->d[0]-1);
}
nctemp1412=j*Model->chiex->d[0]+nctemp1412;
if((0>j)||(j>=Model->chiex->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chiex %d %d %d %d \n " ,220,j,1,Model->chiex->d[1]-1);
}
int nctemp1416=i;
if((0>i)||(i>=Model->chisx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chisx %d %d %d %d \n " ,221,i,0,Model->chisx->d[0]-1);
}
nctemp1416=j*Model->chisx->d[0]+nctemp1416;
if((0>j)||(j>=Model->chisx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chisx %d %d %d %d \n " ,221,j,1,Model->chisx->d[1]-1);
}
float nctemp1419 = Model->chiex->a[nctemp1412] / Model->chisx->a[nctemp1416];
float nctemp1420 = 1.0 - nctemp1419;
float nctemp1421 = Model->mu->a[nctemp1401] * nctemp1420;
float nctemp1423 = nctemp1421 * dt;
int nctemp1425=i;
if((0>i)||(i>=Model->chiex->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chiex %d %d %d %d \n " ,221,i,0,Model->chiex->d[0]-1);
}
nctemp1425=j*Model->chiex->d[0]+nctemp1425;
if((0>j)||(j>=Model->chiex->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chiex %d %d %d %d \n " ,221,j,1,Model->chiex->d[1]-1);
}
float nctemp1428 = nctemp1423 / Model->chiex->a[nctemp1425];
int nctemp1430=i;
if((0>i)||(i>=El2d->exx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->exx %d %d %d %d \n " ,222,i,0,El2d->exx->d[0]-1);
}
nctemp1430=j*El2d->exx->d[0]+nctemp1430;
if((0>j)||(j>=El2d->exx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->exx %d %d %d %d \n " ,222,j,1,El2d->exx->d[1]-1);
}
float nctemp1433 = nctemp1428 * El2d->exx->a[nctemp1430];
float nctemp1434 = nctemp1387 + nctemp1433;
El2d->alphax->a[nctemp1363] =nctemp1434;
int nctemp1438=i;
if((0>i)||(i>=El2d->alphay->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->alphay %d %d %d %d \n " ,224,i,0,El2d->alphay->d[0]-1);
}
nctemp1438=j*El2d->alphay->d[0]+nctemp1438;
if((0>j)||(j>=El2d->alphay->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->alphay %d %d %d %d \n " ,224,j,1,El2d->alphay->d[1]-1);
}
int nctemp1448=i;
if((0>i)||(i>=El2d->alphay->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->alphay %d %d %d %d \n " ,224,i,0,El2d->alphay->d[0]-1);
}
nctemp1448=j*El2d->alphay->d[0]+nctemp1448;
if((0>j)||(j>=El2d->alphay->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->alphay %d %d %d %d \n " ,224,j,1,El2d->alphay->d[1]-1);
}
float nctemp1455= -dt;
int nctemp1457=i;
if((0>i)||(i>=Model->chisx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chisx %d %d %d %d \n " ,224,i,0,Model->chisx->d[0]-1);
}
nctemp1457=j*Model->chisx->d[0]+nctemp1457;
if((0>j)||(j>=Model->chisx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chisx %d %d %d %d \n " ,224,j,1,Model->chisx->d[1]-1);
}
float nctemp1460 = nctemp1455 / Model->chisx->a[nctemp1457];
float nctemp1452= nctemp1460;
float nctemp1461=exp(nctemp1452);
float nctemp1462 = El2d->alphay->a[nctemp1448] * nctemp1461;
int nctemp1476=i;
if((0>i)||(i>=Model->mu->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->mu %d %d %d %d \n " ,225,i,0,Model->mu->d[0]-1);
}
nctemp1476=j*Model->mu->d[0]+nctemp1476;
if((0>j)||(j>=Model->mu->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->mu %d %d %d %d \n " ,225,j,1,Model->mu->d[1]-1);
}
int nctemp1487=i;
if((0>i)||(i>=Model->chiex->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chiex %d %d %d %d \n " ,225,i,0,Model->chiex->d[0]-1);
}
nctemp1487=j*Model->chiex->d[0]+nctemp1487;
if((0>j)||(j>=Model->chiex->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chiex %d %d %d %d \n " ,225,j,1,Model->chiex->d[1]-1);
}
int nctemp1491=i;
if((0>i)||(i>=Model->chisx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chisx %d %d %d %d \n " ,226,i,0,Model->chisx->d[0]-1);
}
nctemp1491=j*Model->chisx->d[0]+nctemp1491;
if((0>j)||(j>=Model->chisx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chisx %d %d %d %d \n " ,226,j,1,Model->chisx->d[1]-1);
}
float nctemp1494 = Model->chiex->a[nctemp1487] / Model->chisx->a[nctemp1491];
float nctemp1495 = 1.0 - nctemp1494;
float nctemp1496 = Model->mu->a[nctemp1476] * nctemp1495;
float nctemp1498 = nctemp1496 * dt;
int nctemp1500=i;
if((0>i)||(i>=Model->chiex->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chiex %d %d %d %d \n " ,226,i,0,Model->chiex->d[0]-1);
}
nctemp1500=j*Model->chiex->d[0]+nctemp1500;
if((0>j)||(j>=Model->chiex->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chiex %d %d %d %d \n " ,226,j,1,Model->chiex->d[1]-1);
}
float nctemp1503 = nctemp1498 / Model->chiex->a[nctemp1500];
int nctemp1505=i;
if((0>i)||(i>=El2d->eyy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->eyy %d %d %d %d \n " ,227,i,0,El2d->eyy->d[0]-1);
}
nctemp1505=j*El2d->eyy->d[0]+nctemp1505;
if((0>j)||(j>=El2d->eyy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->eyy %d %d %d %d \n " ,227,j,1,El2d->eyy->d[1]-1);
}
float nctemp1508 = nctemp1503 * El2d->eyy->a[nctemp1505];
float nctemp1509 = nctemp1462 + nctemp1508;
El2d->alphay->a[nctemp1438] =nctemp1509;
int nctemp1513=i;
if((0>i)||(i>=El2d->betaxy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->betaxy %d %d %d %d \n " ,229,i,0,El2d->betaxy->d[0]-1);
}
nctemp1513=j*El2d->betaxy->d[0]+nctemp1513;
if((0>j)||(j>=El2d->betaxy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->betaxy %d %d %d %d \n " ,229,j,1,El2d->betaxy->d[1]-1);
}
int nctemp1523=i;
if((0>i)||(i>=El2d->betaxy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->betaxy %d %d %d %d \n " ,229,i,0,El2d->betaxy->d[0]-1);
}
nctemp1523=j*El2d->betaxy->d[0]+nctemp1523;
if((0>j)||(j>=El2d->betaxy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->betaxy %d %d %d %d \n " ,229,j,1,El2d->betaxy->d[1]-1);
}
float nctemp1530= -dt;
int nctemp1532=i;
if((0>i)||(i>=Model->chisy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chisy %d %d %d %d \n " ,229,i,0,Model->chisy->d[0]-1);
}
nctemp1532=j*Model->chisy->d[0]+nctemp1532;
if((0>j)||(j>=Model->chisy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chisy %d %d %d %d \n " ,229,j,1,Model->chisy->d[1]-1);
}
float nctemp1535 = nctemp1530 / Model->chisy->a[nctemp1532];
float nctemp1527= nctemp1535;
float nctemp1536=exp(nctemp1527);
float nctemp1537 = El2d->betaxy->a[nctemp1523] * nctemp1536;
int nctemp1551=i;
if((0>i)||(i>=Model->mu->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->mu %d %d %d %d \n " ,230,i,0,Model->mu->d[0]-1);
}
nctemp1551=j*Model->mu->d[0]+nctemp1551;
if((0>j)||(j>=Model->mu->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->mu %d %d %d %d \n " ,230,j,1,Model->mu->d[1]-1);
}
int nctemp1562=i;
if((0>i)||(i>=Model->chiey->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chiey %d %d %d %d \n " ,230,i,0,Model->chiey->d[0]-1);
}
nctemp1562=j*Model->chiey->d[0]+nctemp1562;
if((0>j)||(j>=Model->chiey->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chiey %d %d %d %d \n " ,230,j,1,Model->chiey->d[1]-1);
}
int nctemp1566=i;
if((0>i)||(i>=Model->chisy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chisy %d %d %d %d \n " ,231,i,0,Model->chisy->d[0]-1);
}
nctemp1566=j*Model->chisy->d[0]+nctemp1566;
if((0>j)||(j>=Model->chisy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chisy %d %d %d %d \n " ,231,j,1,Model->chisy->d[1]-1);
}
float nctemp1569 = Model->chiey->a[nctemp1562] / Model->chisy->a[nctemp1566];
float nctemp1570 = 1.0 - nctemp1569;
float nctemp1571 = Model->mu->a[nctemp1551] * nctemp1570;
float nctemp1573 = nctemp1571 * dt;
int nctemp1575=i;
if((0>i)||(i>=Model->chiey->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chiey %d %d %d %d \n " ,231,i,0,Model->chiey->d[0]-1);
}
nctemp1575=j*Model->chiey->d[0]+nctemp1575;
if((0>j)||(j>=Model->chiey->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chiey %d %d %d %d \n " ,231,j,1,Model->chiey->d[1]-1);
}
float nctemp1578 = nctemp1573 / Model->chiey->a[nctemp1575];
int nctemp1580=i;
if((0>i)||(i>=El2d->exy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->exy %d %d %d %d \n " ,232,i,0,El2d->exy->d[0]-1);
}
nctemp1580=j*El2d->exy->d[0]+nctemp1580;
if((0>j)||(j>=El2d->exy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->exy %d %d %d %d \n " ,232,j,1,El2d->exy->d[1]-1);
}
float nctemp1583 = nctemp1578 * El2d->exy->a[nctemp1580];
float nctemp1584 = nctemp1537 + nctemp1583;
El2d->betaxy->a[nctemp1513] =nctemp1584;
int nctemp1588=i;
if((0>i)||(i>=El2d->betayx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->betayx %d %d %d %d \n " ,234,i,0,El2d->betayx->d[0]-1);
}
nctemp1588=j*El2d->betayx->d[0]+nctemp1588;
if((0>j)||(j>=El2d->betayx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->betayx %d %d %d %d \n " ,234,j,1,El2d->betayx->d[1]-1);
}
int nctemp1598=i;
if((0>i)||(i>=El2d->betayx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->betayx %d %d %d %d \n " ,234,i,0,El2d->betayx->d[0]-1);
}
nctemp1598=j*El2d->betayx->d[0]+nctemp1598;
if((0>j)||(j>=El2d->betayx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->betayx %d %d %d %d \n " ,234,j,1,El2d->betayx->d[1]-1);
}
float nctemp1605= -dt;
int nctemp1607=i;
if((0>i)||(i>=Model->chisx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chisx %d %d %d %d \n " ,234,i,0,Model->chisx->d[0]-1);
}
nctemp1607=j*Model->chisx->d[0]+nctemp1607;
if((0>j)||(j>=Model->chisx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chisx %d %d %d %d \n " ,234,j,1,Model->chisx->d[1]-1);
}
float nctemp1610 = nctemp1605 / Model->chisx->a[nctemp1607];
float nctemp1602= nctemp1610;
float nctemp1611=exp(nctemp1602);
float nctemp1612 = El2d->betayx->a[nctemp1598] * nctemp1611;
int nctemp1626=i;
if((0>i)||(i>=Model->mu->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->mu %d %d %d %d \n " ,235,i,0,Model->mu->d[0]-1);
}
nctemp1626=j*Model->mu->d[0]+nctemp1626;
if((0>j)||(j>=Model->mu->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->mu %d %d %d %d \n " ,235,j,1,Model->mu->d[1]-1);
}
int nctemp1637=i;
if((0>i)||(i>=Model->chiex->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chiex %d %d %d %d \n " ,235,i,0,Model->chiex->d[0]-1);
}
nctemp1637=j*Model->chiex->d[0]+nctemp1637;
if((0>j)||(j>=Model->chiex->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chiex %d %d %d %d \n " ,235,j,1,Model->chiex->d[1]-1);
}
int nctemp1641=i;
if((0>i)||(i>=Model->chisx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chisx %d %d %d %d \n " ,236,i,0,Model->chisx->d[0]-1);
}
nctemp1641=j*Model->chisx->d[0]+nctemp1641;
if((0>j)||(j>=Model->chisx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chisx %d %d %d %d \n " ,236,j,1,Model->chisx->d[1]-1);
}
float nctemp1644 = Model->chiex->a[nctemp1637] / Model->chisx->a[nctemp1641];
float nctemp1645 = 1.0 - nctemp1644;
float nctemp1646 = Model->mu->a[nctemp1626] * nctemp1645;
float nctemp1648 = nctemp1646 * dt;
int nctemp1650=i;
if((0>i)||(i>=Model->chiex->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chiex %d %d %d %d \n " ,236,i,0,Model->chiex->d[0]-1);
}
nctemp1650=j*Model->chiex->d[0]+nctemp1650;
if((0>j)||(j>=Model->chiex->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Model->chiex %d %d %d %d \n " ,236,j,1,Model->chiex->d[1]-1);
}
float nctemp1653 = nctemp1648 / Model->chiex->a[nctemp1650];
int nctemp1655=i;
if((0>i)||(i>=El2d->eyx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->eyx %d %d %d %d \n " ,237,i,0,El2d->eyx->d[0]-1);
}
nctemp1655=j*El2d->eyx->d[0]+nctemp1655;
if((0>j)||(j>=El2d->eyx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->eyx %d %d %d %d \n " ,237,j,1,El2d->eyx->d[1]-1);
}
float nctemp1658 = nctemp1653 * El2d->eyx->a[nctemp1655];
float nctemp1659 = nctemp1612 + nctemp1658;
El2d->betayx->a[nctemp1588] =nctemp1659;
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
{
int nctemp1660 = (El2d->sresamp <= 0);
if(nctemp1660)
{
{
return 1;
}
}
int nctemp1669=El2d->sigmaxx->d[0];nx =nctemp1669;
int nctemp1677=El2d->sigmaxx->d[1];ny =nctemp1677;
int nctemp1689 = nx * ny;
n =nctemp1689;
int nctemp1693= it;
int nctemp1695= El2d->sresamp;
int nctemp1697=LibeMod(nctemp1693,nctemp1695);
int nctemp1690 = (nctemp1697 ==0);
if(nctemp1690)
{
{
int nctemp1702=0;
if((0>0)||(0>=El2d->snpflags->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->snpflags %d %d %d %d \n " ,259,0,0,El2d->snpflags->d[0]-1);
}
int nctemp1699 = (El2d->snpflags->a[nctemp1702] ==1);
if(nctemp1699)
{
{
nctempchar1 nctemp1711;
nctempchar1 *nctemp1710;
nctemp1711=*(nctempchar1*)(El2d->p);
int nctemp1718 = 4 * n;
nctemp1711.d[0]=nctemp1718;
nctemp1710=&nctemp1711;
tmp=nctemp1710;
int nctemp1720= El2d->fdp;
int nctemp1727 = 4 * n;
int nctemp1722= nctemp1727;
nctempchar1* nctemp1728= tmp;
int nctemp1731=LibeWrite(nctemp1720,nctemp1722,nctemp1728);
}
}
int nctemp1735=1;
if((0>1)||(1>=El2d->snpflags->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->snpflags %d %d %d %d \n " ,263,1,0,El2d->snpflags->d[0]-1);
}
int nctemp1732 = (El2d->snpflags->a[nctemp1735] ==1);
if(nctemp1732)
{
{
nctempchar1 nctemp1744;
nctempchar1 *nctemp1743;
nctemp1744=*(nctempchar1*)(El2d->vx);
int nctemp1751 = 4 * n;
nctemp1744.d[0]=nctemp1751;
nctemp1743=&nctemp1744;
tmp=nctemp1743;
int nctemp1753= El2d->fdvx;
int nctemp1760 = 4 * n;
int nctemp1755= nctemp1760;
nctempchar1* nctemp1761= tmp;
int nctemp1764=LibeWrite(nctemp1753,nctemp1755,nctemp1761);
}
}
int nctemp1768=2;
if((0>2)||(2>=El2d->snpflags->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->snpflags %d %d %d %d \n " ,267,2,0,El2d->snpflags->d[0]-1);
}
int nctemp1765 = (El2d->snpflags->a[nctemp1768] ==1);
if(nctemp1765)
{
{
nctempchar1 nctemp1777;
nctempchar1 *nctemp1776;
nctemp1777=*(nctempchar1*)(El2d->vy);
int nctemp1784 = 4 * n;
nctemp1777.d[0]=nctemp1784;
nctemp1776=&nctemp1777;
tmp=nctemp1776;
int nctemp1786= El2d->fdvy;
int nctemp1793 = 4 * n;
int nctemp1788= nctemp1793;
nctempchar1* nctemp1794= tmp;
int nctemp1797=LibeWrite(nctemp1786,nctemp1788,nctemp1794);
}
}
int nctemp1801=3;
if((0>3)||(3>=El2d->snpflags->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->snpflags %d %d %d %d \n " ,271,3,0,El2d->snpflags->d[0]-1);
}
int nctemp1798 = (El2d->snpflags->a[nctemp1801] ==1);
if(nctemp1798)
{
{
nctempchar1 nctemp1810;
nctempchar1 *nctemp1809;
nctemp1810=*(nctempchar1*)(El2d->sigmaxx);
int nctemp1817 = 4 * n;
nctemp1810.d[0]=nctemp1817;
nctemp1809=&nctemp1810;
tmp=nctemp1809;
int nctemp1819= El2d->fdsxx;
int nctemp1826 = 4 * n;
int nctemp1821= nctemp1826;
nctempchar1* nctemp1827= tmp;
int nctemp1830=LibeWrite(nctemp1819,nctemp1821,nctemp1827);
}
}
int nctemp1834=4;
if((0>4)||(4>=El2d->snpflags->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->snpflags %d %d %d %d \n " ,275,4,0,El2d->snpflags->d[0]-1);
}
int nctemp1831 = (El2d->snpflags->a[nctemp1834] ==1);
if(nctemp1831)
{
{
nctempchar1 nctemp1843;
nctempchar1 *nctemp1842;
nctemp1843=*(nctempchar1*)(El2d->sigmayy);
int nctemp1850 = 4 * n;
nctemp1843.d[0]=nctemp1850;
nctemp1842=&nctemp1843;
tmp=nctemp1842;
int nctemp1852= El2d->fdsyy;
int nctemp1859 = 4 * n;
int nctemp1854= nctemp1859;
nctempchar1* nctemp1860= tmp;
int nctemp1863=LibeWrite(nctemp1852,nctemp1854,nctemp1860);
}
}
int nctemp1867=5;
if((0>5)||(5>=El2d->snpflags->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->snpflags %d %d %d %d \n " ,279,5,0,El2d->snpflags->d[0]-1);
}
int nctemp1864 = (El2d->snpflags->a[nctemp1867] ==1);
if(nctemp1864)
{
{
nctempchar1 nctemp1876;
nctempchar1 *nctemp1875;
nctemp1876=*(nctempchar1*)(El2d->sigmaxy);
int nctemp1883 = 4 * n;
nctemp1876.d[0]=nctemp1883;
nctemp1875=&nctemp1876;
tmp=nctemp1875;
int nctemp1885= El2d->fdsxy;
int nctemp1892 = 4 * n;
int nctemp1887= nctemp1892;
nctempchar1* nctemp1893= tmp;
int nctemp1896=LibeWrite(nctemp1885,nctemp1887,nctemp1893);
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
int nctemp1902= l;
struct diff* nctemp1904=DiffNew(nctemp1902);
Diff =nctemp1904;
oldperc =0.0;
ns =El2d->ts;
int nctemp1921 = ns + nt;
ne =nctemp1921;
for(i = ns;i < ne;i = (i + 1)){
{
struct diff* nctemp1923= Diff;
nctempfloat2* nctemp1925= El2d->sigmaxx;
nctempfloat2* nctemp1928= El2d->exx;
float nctemp1931= Model->dx;
int nctemp1933=DiffDxplus(nctemp1923,nctemp1925,nctemp1928,nctemp1931);
struct diff* nctemp1935= Diff;
nctempfloat2* nctemp1937= El2d->sigmaxy;
nctempfloat2* nctemp1940= El2d->exy;
float nctemp1943= Model->dx;
int nctemp1945=DiffDyminus(nctemp1935,nctemp1937,nctemp1940,nctemp1943);
struct el2d* nctemp1947= El2d;
struct model* nctemp1949= Model;
int nctemp1951=El2dvx(nctemp1947,nctemp1949);
struct diff* nctemp1953= Diff;
nctempfloat2* nctemp1955= El2d->sigmayy;
nctempfloat2* nctemp1958= El2d->eyy;
float nctemp1961= Model->dx;
int nctemp1963=DiffDyplus(nctemp1953,nctemp1955,nctemp1958,nctemp1961);
struct diff* nctemp1965= Diff;
nctempfloat2* nctemp1967= El2d->sigmaxy;
nctempfloat2* nctemp1970= El2d->eyx;
float nctemp1973= Model->dx;
int nctemp1975=DiffDxminus(nctemp1965,nctemp1967,nctemp1970,nctemp1973);
struct el2d* nctemp1977= El2d;
struct model* nctemp1979= Model;
int nctemp1981=El2dvy(nctemp1977,nctemp1979);
struct diff* nctemp1983= Diff;
nctempfloat2* nctemp1985= El2d->vx;
nctempfloat2* nctemp1988= El2d->exx;
float nctemp1991= Model->dx;
int nctemp1993=DiffDxminus(nctemp1983,nctemp1985,nctemp1988,nctemp1991);
struct diff* nctemp1995= Diff;
nctempfloat2* nctemp1997= El2d->vy;
nctempfloat2* nctemp2000= El2d->eyy;
float nctemp2003= Model->dx;
int nctemp2005=DiffDyminus(nctemp1995,nctemp1997,nctemp2000,nctemp2003);
struct diff* nctemp2007= Diff;
nctempfloat2* nctemp2009= El2d->vy;
nctempfloat2* nctemp2012= El2d->eyx;
float nctemp2015= Model->dx;
int nctemp2017=DiffDxplus(nctemp2007,nctemp2009,nctemp2012,nctemp2015);
struct diff* nctemp2019= Diff;
nctempfloat2* nctemp2021= El2d->vx;
nctempfloat2* nctemp2024= El2d->exy;
float nctemp2027= Model->dx;
int nctemp2029=DiffDyplus(nctemp2019,nctemp2021,nctemp2024,nctemp2027);
struct el2d* nctemp2031= El2d;
struct model* nctemp2033= Model;
int nctemp2035=El2dstress(nctemp2031,nctemp2033);
for(k = 0;k < Src->Ns;k = (k + 1)){
{
int nctemp2040=k;
if((0>k)||(k>=Src->Sx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Src->Sx %d %d %d %d \n " ,352,k,0,Src->Sx->d[0]-1);
}
sx =Src->Sx->a[nctemp2040];
int nctemp2046=k;
if((0>k)||(k>=Src->Sy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Src->Sy %d %d %d %d \n " ,353,k,0,Src->Sy->d[0]-1);
}
sy =Src->Sy->a[nctemp2046];
int nctemp2051=sx;
if((0>sx)||(sx>=El2d->sigmaxx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmaxx %d %d %d %d \n " ,354,sx,0,El2d->sigmaxx->d[0]-1);
}
nctemp2051=sy*El2d->sigmaxx->d[0]+nctemp2051;
if((0>sy)||(sy>=El2d->sigmaxx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmaxx %d %d %d %d \n " ,354,sy,1,El2d->sigmaxx->d[1]-1);
}
int nctemp2058=sx;
if((0>sx)||(sx>=El2d->sigmaxx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmaxx %d %d %d %d \n " ,354,sx,0,El2d->sigmaxx->d[0]-1);
}
nctemp2058=sy*El2d->sigmaxx->d[0]+nctemp2058;
if((0>sy)||(sy>=El2d->sigmaxx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmaxx %d %d %d %d \n " ,354,sy,1,El2d->sigmaxx->d[1]-1);
}
int nctemp2069=i;
if((0>i)||(i>=Src->Sqxx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Src->Sqxx %d %d %d %d \n " ,355,i,0,Src->Sqxx->d[0]-1);
}
nctemp2069=k*Src->Sqxx->d[0]+nctemp2069;
if((0>k)||(k>=Src->Sqxx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Src->Sqxx %d %d %d %d \n " ,355,k,1,Src->Sqxx->d[1]-1);
}
float nctemp2077 = Model->dx * Model->dx;
float nctemp2078 = Src->Sqxx->a[nctemp2069] / nctemp2077;
float nctemp2079 = Model->dt * nctemp2078;
float nctemp2080 = El2d->sigmaxx->a[nctemp2058] + nctemp2079;
El2d->sigmaxx->a[nctemp2051] =nctemp2080;
int nctemp2084=sx;
if((0>sx)||(sx>=El2d->sigmayy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmayy %d %d %d %d \n " ,356,sx,0,El2d->sigmayy->d[0]-1);
}
nctemp2084=sy*El2d->sigmayy->d[0]+nctemp2084;
if((0>sy)||(sy>=El2d->sigmayy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmayy %d %d %d %d \n " ,356,sy,1,El2d->sigmayy->d[1]-1);
}
int nctemp2091=sx;
if((0>sx)||(sx>=El2d->sigmayy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmayy %d %d %d %d \n " ,356,sx,0,El2d->sigmayy->d[0]-1);
}
nctemp2091=sy*El2d->sigmayy->d[0]+nctemp2091;
if((0>sy)||(sy>=El2d->sigmayy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmayy %d %d %d %d \n " ,356,sy,1,El2d->sigmayy->d[1]-1);
}
int nctemp2102=i;
if((0>i)||(i>=Src->Sqyy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Src->Sqyy %d %d %d %d \n " ,357,i,0,Src->Sqyy->d[0]-1);
}
nctemp2102=k*Src->Sqyy->d[0]+nctemp2102;
if((0>k)||(k>=Src->Sqyy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Src->Sqyy %d %d %d %d \n " ,357,k,1,Src->Sqyy->d[1]-1);
}
float nctemp2110 = Model->dx * Model->dx;
float nctemp2111 = Src->Sqyy->a[nctemp2102] / nctemp2110;
float nctemp2112 = Model->dt * nctemp2111;
float nctemp2113 = El2d->sigmayy->a[nctemp2091] + nctemp2112;
El2d->sigmayy->a[nctemp2084] =nctemp2113;
int nctemp2117=sx;
if((0>sx)||(sx>=El2d->sigmayy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmayy %d %d %d %d \n " ,358,sx,0,El2d->sigmayy->d[0]-1);
}
nctemp2117=sy*El2d->sigmayy->d[0]+nctemp2117;
if((0>sy)||(sy>=El2d->sigmayy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmayy %d %d %d %d \n " ,358,sy,1,El2d->sigmayy->d[1]-1);
}
int nctemp2124=sx;
if((0>sx)||(sx>=El2d->sigmaxy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmaxy %d %d %d %d \n " ,358,sx,0,El2d->sigmaxy->d[0]-1);
}
nctemp2124=sy*El2d->sigmaxy->d[0]+nctemp2124;
if((0>sy)||(sy>=El2d->sigmaxy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->sigmaxy %d %d %d %d \n " ,358,sy,1,El2d->sigmaxy->d[1]-1);
}
int nctemp2135=i;
if((0>i)||(i>=Src->Sqxy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Src->Sqxy %d %d %d %d \n " ,359,i,0,Src->Sqxy->d[0]-1);
}
nctemp2135=k*Src->Sqxy->d[0]+nctemp2135;
if((0>k)||(k>=Src->Sqxy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Src->Sqxy %d %d %d %d \n " ,359,k,1,Src->Sqxy->d[1]-1);
}
float nctemp2143 = Model->dx * Model->dx;
float nctemp2144 = Src->Sqxy->a[nctemp2135] / nctemp2143;
float nctemp2145 = Model->dt * nctemp2144;
float nctemp2146 = El2d->sigmaxy->a[nctemp2124] + nctemp2145;
El2d->sigmayy->a[nctemp2117] =nctemp2146;
int nctemp2150=sx;
if((0>sx)||(sx>=El2d->vx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->vx %d %d %d %d \n " ,360,sx,0,El2d->vx->d[0]-1);
}
nctemp2150=sy*El2d->vx->d[0]+nctemp2150;
if((0>sy)||(sy>=El2d->vx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->vx %d %d %d %d \n " ,360,sy,1,El2d->vx->d[1]-1);
}
int nctemp2157=sx;
if((0>sx)||(sx>=El2d->vx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->vx %d %d %d %d \n " ,360,sx,0,El2d->vx->d[0]-1);
}
nctemp2157=sy*El2d->vx->d[0]+nctemp2157;
if((0>sy)||(sy>=El2d->vx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->vx %d %d %d %d \n " ,360,sy,1,El2d->vx->d[1]-1);
}
int nctemp2168=i;
if((0>i)||(i>=Src->Sfx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Src->Sfx %d %d %d %d \n " ,361,i,0,Src->Sfx->d[0]-1);
}
nctemp2168=k*Src->Sfx->d[0]+nctemp2168;
if((0>k)||(k>=Src->Sfx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Src->Sfx %d %d %d %d \n " ,361,k,1,Src->Sfx->d[1]-1);
}
float nctemp2176 = Model->dx * Model->dx;
float nctemp2177 = Src->Sfx->a[nctemp2168] / nctemp2176;
float nctemp2178 = Model->dt * nctemp2177;
float nctemp2179 = El2d->vx->a[nctemp2157] + nctemp2178;
El2d->vx->a[nctemp2150] =nctemp2179;
int nctemp2183=sx;
if((0>sx)||(sx>=El2d->vy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->vy %d %d %d %d \n " ,362,sx,0,El2d->vy->d[0]-1);
}
nctemp2183=sy*El2d->vy->d[0]+nctemp2183;
if((0>sy)||(sy>=El2d->vy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->vy %d %d %d %d \n " ,362,sy,1,El2d->vy->d[1]-1);
}
int nctemp2190=sx;
if((0>sx)||(sx>=El2d->vy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->vy %d %d %d %d \n " ,362,sx,0,El2d->vy->d[0]-1);
}
nctemp2190=sy*El2d->vy->d[0]+nctemp2190;
if((0>sy)||(sy>=El2d->vy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e El2d->vy %d %d %d %d \n " ,362,sy,1,El2d->vy->d[1]-1);
}
int nctemp2201=i;
if((0>i)||(i>=Src->Sfy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Src->Sfy %d %d %d %d \n " ,363,i,0,Src->Sfy->d[0]-1);
}
nctemp2201=k*Src->Sfy->d[0]+nctemp2201;
if((0>k)||(k>=Src->Sfy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:el2d.e Src->Sfy %d %d %d %d \n " ,363,k,1,Src->Sfy->d[1]-1);
}
float nctemp2209 = Model->dx * Model->dx;
float nctemp2210 = Src->Sfy->a[nctemp2201] / nctemp2209;
float nctemp2211 = Model->dt * nctemp2210;
float nctemp2212 = El2d->vy->a[nctemp2190] + nctemp2211;
El2d->vy->a[nctemp2183] =nctemp2212;
}
}
float nctemp2224=(float)(i);
int nctemp2237 = ne - ns;
int nctemp2239 = nctemp2237 - 1;
float nctemp2228=(float)(nctemp2239);
float nctemp2240 = nctemp2224 / nctemp2228;
float nctemp2241 = 1000.0 * nctemp2240;
perc =nctemp2241;
float nctemp2249 = perc - oldperc;
int nctemp2242 = (nctemp2249 >= 10.0);
if(nctemp2242)
{
{
int nctemp2258=(int)(perc);
int nctemp2262 = nctemp2258 / 10;
iperc =nctemp2262;
int nctemp2266= iperc;
int nctemp2268= 10;
int nctemp2270=LibeMod(nctemp2266,nctemp2268);
int nctemp2263 = (nctemp2270 ==0);
if(nctemp2263)
{
{
int nctemp2273= 4;
struct nctempchar1 *nctemp2277;
static struct nctempchar1 nctemp2278 = {{ 20}, (char*)"percent completed: \0"};
nctemp2277=&nctemp2278;
nctempchar1* nctemp2275= nctemp2277;
int nctemp2279=LibePuts(nctemp2273,nctemp2275);
int nctemp2281= 4;
int nctemp2283= iperc;
int nctemp2285=LibePuti(nctemp2281,nctemp2283);
int nctemp2287= 4;
struct nctempchar1 *nctemp2291;
static struct nctempchar1 nctemp2292 = {{ 3}, (char*)"\n\0"};
nctemp2291=&nctemp2292;
nctempchar1* nctemp2289= nctemp2291;
int nctemp2293=LibePuts(nctemp2287,nctemp2289);
int nctemp2295= 4;
int nctemp2297=LibeFlush(nctemp2295);
}
}
oldperc =perc;
}
}
int nctemp2302 = (Rec !=0);
if(nctemp2302)
{
{
struct rec* nctemp2307= Rec;
int nctemp2309= i;
nctempfloat2* nctemp2311= El2d->p;
dtype =1;
int nctemp2314= dtype;
int nctemp2319=RecReceiver(nctemp2307,nctemp2309,nctemp2311,nctemp2314);
struct rec* nctemp2321= Rec;
int nctemp2323= i;
nctempfloat2* nctemp2325= El2d->vx;
dtype =2;
int nctemp2328= dtype;
int nctemp2333=RecReceiver(nctemp2321,nctemp2323,nctemp2325,nctemp2328);
struct rec* nctemp2335= Rec;
int nctemp2337= i;
nctempfloat2* nctemp2339= El2d->vy;
dtype =3;
int nctemp2342= dtype;
int nctemp2347=RecReceiver(nctemp2335,nctemp2337,nctemp2339,nctemp2342);
struct rec* nctemp2349= Rec;
int nctemp2351= i;
nctempfloat2* nctemp2353= El2d->sigmaxx;
dtype =4;
int nctemp2356= dtype;
int nctemp2361=RecReceiver(nctemp2349,nctemp2351,nctemp2353,nctemp2356);
struct rec* nctemp2363= Rec;
int nctemp2365= i;
nctempfloat2* nctemp2367= El2d->sigmayy;
dtype =5;
int nctemp2370= dtype;
int nctemp2375=RecReceiver(nctemp2363,nctemp2365,nctemp2367,nctemp2370);
struct rec* nctemp2377= Rec;
int nctemp2379= i;
nctempfloat2* nctemp2381= El2d->sigmaxy;
dtype =6;
int nctemp2384= dtype;
int nctemp2389=RecReceiver(nctemp2377,nctemp2379,nctemp2381,nctemp2384);
}
}
struct el2d* nctemp2391= El2d;
int nctemp2393= i;
int nctemp2395=El2dSnap(nctemp2391,nctemp2393);
}
}
int nctemp2404 = El2d->ts + ne;
El2d->ts =nctemp2404;
return 1;
}
}
};