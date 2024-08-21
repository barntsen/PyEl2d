
#line 1  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
/*  Translated by epsc  version today */

#line 4  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
#include <stddef.h>
typedef struct { float r; float i;} complex; 

#line 3  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
typedef struct nctempfloat1 { int d[1]; float *a;} nctempfloat1; 

#line 5  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
typedef struct nctempint1 { int d[1]; int *a;} nctempint1; 

#line 7  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
typedef struct nctempchar1 { int d[1]; char *a;} nctempchar1; 
typedef struct nctempcomplex1 { int d[1]; complex *a;} nctempcomplex1; 

#line 8  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
static struct nctempchar1 nctempstringx = {0, NULL};
static struct nctempchar1 *nctempstring = &nctempstringx;
typedef struct nctempfloat2 { int d[2]; float *a;} nctempfloat2; 

#line 10  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
typedef struct nctempint2 { int d[2]; int *a;} nctempint2; 
typedef struct nctempchar2 { int d[2]; char *a;} nctempchar2; 

#line 12  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
typedef struct nctempcomplex2 { int d[2]; complex *a;} nctempcomplex2; 

#line 13  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
typedef struct nctempfloat3 { int d[3]; float *a;} nctempfloat3; 

#line 14  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
typedef struct nctempint3 { int d[3]; int *a;} nctempint3; 

#line 15  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
typedef struct nctempchar3 { int d[3]; char *a;} nctempchar3; 

#line 16  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
typedef struct nctempcomplex3 { int d[3]; complex *a;} nctempcomplex3; 

#line 17  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
typedef struct nctempfloat4 { int d[4]; float *a;} nctempfloat4; 

#line 18  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
typedef struct nctempint4 { int d[4]; int *a;} nctempint4; 

#line 19  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
typedef struct nctempchar4 { int d[4]; char *a;} nctempchar4; 

#line 20  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
typedef struct nctempcomplex4 { int d[4]; complex *a;} nctempcomplex4; 
#include <stdlib.h>
#include <string.h>
void *RunMalloc(int n); 
int RunFree(void *n); 

#line 87  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeArrayex (int line,nctempchar1 *name,int ival,int index,int bound);

#line 89  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeClearerr ();

#line 90  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeGeterrno ();

#line 91  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
nctempchar1* LibeGeterrstr ();

#line 143  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
struct MainArg {nctempchar1 *arg;
};
typedef struct nctempMainArg1 {int d[1]; struct MainArg *a; } nctempMainArg1;
struct nctempMainArg2 {int d[2]; struct MainArg *a; } ;
struct nctempMainArg3 {int d[3]; struct MainArg *a; } ;
struct nctempMainArg4 {int d[4]; struct MainArg *a; } ;

#line 145  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int Main (struct nctempMainArg1 *MainArgs);

#line 153  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeInit ();

#line 154  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeDelete ();

#line 155  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeExit ();

#line 156  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
nctempchar1* LibeGetenv (nctempchar1 *name);

#line 172  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeOpen (nctempchar1 *name,nctempchar1 *mode);

#line 173  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeClose (int fp);

#line 174  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeGetc (int fp);

#line 175  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeUngetc (int fp);

#line 176  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeGetw (int fp,nctempchar1 *text);

#line 177  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibePs (nctempchar1 *s);

#line 178  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibePi (int n);

#line 179  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibePf (float r);

#line 180  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibePutf (int fp,float r,nctempchar1 *form);

#line 181  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibePutc (int fp,int c);

#line 182  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibePuts (int fp,nctempchar1 *s);

#line 183  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibePuti (int fp,int ival);

#line 184  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeRead (int fp,int n,nctempchar1 *array);

#line 185  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeWrite (int fp,int n,nctempchar1 *array);

#line 186  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeSeek (int fp,int pos,int flag);

#line 187  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeFlush (int fp);

#line 222  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeStrlen (nctempchar1 *s);

#line 223  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeStrcmp (nctempchar1 *s,nctempchar1 *t);

#line 224  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeStrev (nctempchar1 *s);

#line 225  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
nctempchar1* LibeStrsave (nctempchar1 *s);

#line 226  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeStrcpy (nctempchar1 *s,nctempchar1 *t);

#line 227  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeStrcat (nctempchar1 *s,nctempchar1 *t);

#line 228  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
nctempchar1* LibeStradd (nctempchar1 *t,nctempchar1 *s);

#line 229  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeIsalpha (int c);

#line 230  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeIsdigit (int c);

#line 231  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeIsalnum (int c);

#line 258  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeAtoi (nctempchar1 *s);

#line 259  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeItoa (int n,nctempchar1 *s);

#line 260  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeItoh (int n,nctempchar1 *s);

#line 261  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeAtof (nctempchar1 *s);

#line 262  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeFtoa (float f,nctempchar1 *fmt,nctempchar1 *s);

#line 292  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeMach (int flag);

#line 293  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeFabs (float x);

#line 294  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeFscale2 (float x,int n);

#line 295  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeGetfman2 (float x);

#line 296  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeGetfexp2 (float x);

#line 297  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeFscale (float x,int n);

#line 298  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeGetfman (float f,int maxdig);

#line 299  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeGetffman (float f);

#line 300  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeGetmaxdig (float f);

#line 301  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeGetfexp (float f);

#line 328  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeClock ();

#line 333  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeSetnb (int n);

#line 335  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeSetnt (int n);

#line 338  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeGetnb ();

#line 340  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeGetnt ();

#line 349  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeMod (int n,int r);

#line 362  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeSqrt (float x);

#line 363  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeLn (float x);

#line 364  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeExp (float x);

#line 365  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeSin (float x);

#line 366  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeCos (float x);

#line 367  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeTan (float x);

#line 368  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeArcsin (float x);

#line 369  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeArccos (float x);

#line 370  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeArctan (float x);

#line 371  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibePow (float base,float exponent);

#line 376  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeSystem (nctempchar1 *cmd);

#line 4  "diff.i"
struct diff {int l;
int lmax;
nctempfloat2 *coeffs;
nctempfloat1 *w;
};
typedef struct nctempdiff1 {int d[1]; struct diff *a; } nctempdiff1;
struct nctempdiff2 {int d[2]; struct diff *a; } ;
struct nctempdiff3 {int d[3]; struct diff *a; } ;
struct nctempdiff4 {int d[4]; struct diff *a; } ;

#line 11  "diff.i"
struct diff* DiffNew (int l);

#line 12  "diff.i"
int DiffDxminus (struct diff* Diff,nctempfloat2 *A,nctempfloat2 *dA,float dx);

#line 13  "diff.i"
int DiffDyminus (struct diff* Diff,nctempfloat2 *A,nctempfloat2 *dA,float dx);

#line 14  "diff.i"
int DiffDxplus (struct diff* Diff,nctempfloat2 *A,nctempfloat2 *dA,float dx);

#line 15  "diff.i"
int DiffDyplus (struct diff* Diff,nctempfloat2 *A,nctempfloat2 *dA,float dx);

#line 5  "rec.i"
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

#line 26  "rec.i"
struct rec* RecNew (nctempint1 *rx,nctempint1 *ry,int nt,int resamp);

#line 30  "rec.i"
int RecReceiver (struct rec* Rec,int it,nctempfloat2 *sxx,nctempfloat2 *syy,nctempfloat2 *vx,nctempfloat2 *vy);

#line 35  "rec.i"
int RecSave (struct rec* Rec,nctempchar1 *file);

#line 37  "rec.i"
nctempfloat2* RecGetrec (struct rec* Rec,int dtype);

#line 2  "src.i"
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

#line 13  "src.i"
struct src* SrcNew (nctempint1 *sx,nctempint1 *sy,nctempfloat2 *sqxx,nctempfloat2 *sqyy,nctempfloat2 *sfx,nctempfloat2 *sfy);

#line 18  "src.i"
int SrcDel (struct src* Src);

#line 2  "model.i"
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
nctempfloat2 *Dlambdax;
nctempfloat2 *Dlambday;
nctempfloat2 *Dmux;
nctempfloat2 *Dmuy;
nctempfloat2 *Drhopx;
nctempfloat2 *Drhopy;
nctempfloat2 *Drhosx;
nctempfloat2 *Drhosy;
nctempfloat2 *Rho;
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
};
typedef struct nctempmodel1 {int d[1]; struct model *a; } nctempmodel1;
struct nctempmodel2 {int d[2]; struct model *a; } ;
struct nctempmodel3 {int d[3]; struct model *a; } ;
struct nctempmodel4 {int d[4]; struct model *a; } ;

#line 53  "model.i"
struct model* ModelNew (nctempfloat2 *vp,nctempfloat2 *vs,nctempfloat2 *rho,nctempfloat2 *Qlx,nctempfloat2 *Qly,nctempfloat2 *Qmx,nctempfloat2 *Qmy,nctempfloat2 *Qpx,nctempfloat2 *Qpy,float Dx,float Dt,float W0,int Nb,int Rheol);

#line 58  "model.i"
float ModelStability (struct model* Model);

#line 4  "el2d.i"
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
nctempfloat2 *gammaxx;
nctempfloat2 *gammayy;
nctempfloat2 *gammaxy;
nctempfloat2 *gammayx;
nctempfloat2 *thetaxxx;
nctempfloat2 *thetayyy;
nctempfloat2 *thetaxyx;
nctempfloat2 *thetayxy;
int ts;
int fdsxx;
int fdsyy;
int fdvx;
int fdvy;
int sresamp;
nctempint1 *snpflags;
};
typedef struct nctempel2d1 {int d[1]; struct el2d *a; } nctempel2d1;
struct nctempel2d2 {int d[2]; struct el2d *a; } ;
struct nctempel2d3 {int d[3]; struct el2d *a; } ;
struct nctempel2d4 {int d[4]; struct el2d *a; } ;

#line 35  "el2d.i"
struct el2d* El2dNew (struct model* Model,int sresamp,nctempint1 *snpflags);

#line 39  "el2d.i"
int El2dSolve (struct el2d* El2d,struct model* Model,struct src* Src,struct rec* Rec,int nt,int l);

#line 13  "el2d.e"
int El2dvx (struct el2d* El2d,struct model* Model);

#line 14  "el2d.e"
int El2dvy (struct el2d* El2d,struct model* Model);

#line 15  "el2d.e"
int El2dexy (struct el2d* El2d,struct model* Model,nctempfloat2 *vx,nctempfloat2 *vy);

#line 17  "el2d.e"
int El2deyx (struct el2d* El2d,struct model* Model,nctempfloat2 *vx,nctempfloat2 *vy);

#line 19  "el2d.e"
int El2dstress (struct el2d* El2d,struct model* Model);

#line 21  "el2d.e"
int El2dSnap (struct el2d* El2d,int it);

#line 31  "el2d.e"
struct el2d* El2dNew (struct model* Model,int sresamp,nctempint1 *snpflags)
{

#line 32  "el2d.e"
struct el2d* El2d;
int i;
int j;

#line 35  "el2d.e"
struct el2d *nctemp5=(struct el2d*)RunMalloc(sizeof(struct el2d));
El2d =nctemp5;

#line 36  "el2d.e"
El2d->sresamp =sresamp;

#line 37  "el2d.e"
El2d->snpflags=snpflags;

#line 38  "el2d.e"
int nctemp23=Model->Nx;
nctemp23=nctemp23*Model->Ny;
nctempfloat2 *nctemp22;
nctemp22=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp22->d[0]=Model->Nx;
nctemp22->d[1]=Model->Ny;
nctemp22->a=(float *)RunMalloc(sizeof(float)*nctemp23);
El2d->p=nctemp22;

#line 39  "el2d.e"
int nctemp34=Model->Nx;
nctemp34=nctemp34*Model->Ny;
nctempfloat2 *nctemp33;
nctemp33=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp33->d[0]=Model->Nx;
nctemp33->d[1]=Model->Ny;
nctemp33->a=(float *)RunMalloc(sizeof(float)*nctemp34);
El2d->sigmaxx=nctemp33;

#line 40  "el2d.e"
int nctemp45=Model->Nx;
nctemp45=nctemp45*Model->Ny;
nctempfloat2 *nctemp44;
nctemp44=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp44->d[0]=Model->Nx;
nctemp44->d[1]=Model->Ny;
nctemp44->a=(float *)RunMalloc(sizeof(float)*nctemp45);
El2d->sigmayy=nctemp44;

#line 41  "el2d.e"
int nctemp56=Model->Nx;
nctemp56=nctemp56*Model->Ny;
nctempfloat2 *nctemp55;
nctemp55=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp55->d[0]=Model->Nx;
nctemp55->d[1]=Model->Ny;
nctemp55->a=(float *)RunMalloc(sizeof(float)*nctemp56);
El2d->sigmaxy=nctemp55;

#line 42  "el2d.e"
int nctemp67=Model->Nx;
nctemp67=nctemp67*Model->Ny;
nctempfloat2 *nctemp66;
nctemp66=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp66->d[0]=Model->Nx;
nctemp66->d[1]=Model->Ny;
nctemp66->a=(float *)RunMalloc(sizeof(float)*nctemp67);
El2d->sigmayx=nctemp66;

#line 43  "el2d.e"
int nctemp78=Model->Nx;
nctemp78=nctemp78*Model->Ny;
nctempfloat2 *nctemp77;
nctemp77=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp77->d[0]=Model->Nx;
nctemp77->d[1]=Model->Ny;
nctemp77->a=(float *)RunMalloc(sizeof(float)*nctemp78);
El2d->vx=nctemp77;

#line 44  "el2d.e"
int nctemp89=Model->Nx;
nctemp89=nctemp89*Model->Ny;
nctempfloat2 *nctemp88;
nctemp88=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp88->d[0]=Model->Nx;
nctemp88->d[1]=Model->Ny;
nctemp88->a=(float *)RunMalloc(sizeof(float)*nctemp89);
El2d->vy=nctemp88;

#line 45  "el2d.e"
int nctemp100=Model->Nx;
nctemp100=nctemp100*Model->Ny;
nctempfloat2 *nctemp99;
nctemp99=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp99->d[0]=Model->Nx;
nctemp99->d[1]=Model->Ny;
nctemp99->a=(float *)RunMalloc(sizeof(float)*nctemp100);
El2d->exx=nctemp99;

#line 46  "el2d.e"
int nctemp111=Model->Nx;
nctemp111=nctemp111*Model->Ny;
nctempfloat2 *nctemp110;
nctemp110=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp110->d[0]=Model->Nx;
nctemp110->d[1]=Model->Ny;
nctemp110->a=(float *)RunMalloc(sizeof(float)*nctemp111);
El2d->eyy=nctemp110;

#line 47  "el2d.e"
int nctemp122=Model->Nx;
nctemp122=nctemp122*Model->Ny;
nctempfloat2 *nctemp121;
nctemp121=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp121->d[0]=Model->Nx;
nctemp121->d[1]=Model->Ny;
nctemp121->a=(float *)RunMalloc(sizeof(float)*nctemp122);
El2d->exy=nctemp121;

#line 48  "el2d.e"
int nctemp133=Model->Nx;
nctemp133=nctemp133*Model->Ny;
nctempfloat2 *nctemp132;
nctemp132=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp132->d[0]=Model->Nx;
nctemp132->d[1]=Model->Ny;
nctemp132->a=(float *)RunMalloc(sizeof(float)*nctemp133);
El2d->eyx=nctemp132;

#line 49  "el2d.e"
int nctemp144=Model->Nx;
nctemp144=nctemp144*Model->Ny;
nctempfloat2 *nctemp143;
nctemp143=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp143->d[0]=Model->Nx;
nctemp143->d[1]=Model->Ny;
nctemp143->a=(float *)RunMalloc(sizeof(float)*nctemp144);
El2d->gammaxx=nctemp143;

#line 50  "el2d.e"
int nctemp155=Model->Nx;
nctemp155=nctemp155*Model->Ny;
nctempfloat2 *nctemp154;
nctemp154=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp154->d[0]=Model->Nx;
nctemp154->d[1]=Model->Ny;
nctemp154->a=(float *)RunMalloc(sizeof(float)*nctemp155);
El2d->gammayy=nctemp154;

#line 51  "el2d.e"
int nctemp166=Model->Nx;
nctemp166=nctemp166*Model->Ny;
nctempfloat2 *nctemp165;
nctemp165=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp165->d[0]=Model->Nx;
nctemp165->d[1]=Model->Ny;
nctemp165->a=(float *)RunMalloc(sizeof(float)*nctemp166);
El2d->gammaxy=nctemp165;

#line 52  "el2d.e"
int nctemp177=Model->Nx;
nctemp177=nctemp177*Model->Ny;
nctempfloat2 *nctemp176;
nctemp176=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp176->d[0]=Model->Nx;
nctemp176->d[1]=Model->Ny;
nctemp176->a=(float *)RunMalloc(sizeof(float)*nctemp177);
El2d->gammayx=nctemp176;

#line 53  "el2d.e"
int nctemp188=Model->Nx;
nctemp188=nctemp188*Model->Ny;
nctempfloat2 *nctemp187;
nctemp187=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp187->d[0]=Model->Nx;
nctemp187->d[1]=Model->Ny;
nctemp187->a=(float *)RunMalloc(sizeof(float)*nctemp188);
El2d->thetaxxx=nctemp187;

#line 54  "el2d.e"
int nctemp199=Model->Nx;
nctemp199=nctemp199*Model->Ny;
nctempfloat2 *nctemp198;
nctemp198=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp198->d[0]=Model->Nx;
nctemp198->d[1]=Model->Ny;
nctemp198->a=(float *)RunMalloc(sizeof(float)*nctemp199);
El2d->thetayyy=nctemp198;

#line 55  "el2d.e"
int nctemp210=Model->Nx;
nctemp210=nctemp210*Model->Ny;
nctempfloat2 *nctemp209;
nctemp209=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp209->d[0]=Model->Nx;
nctemp209->d[1]=Model->Ny;
nctemp209->a=(float *)RunMalloc(sizeof(float)*nctemp210);
El2d->thetayxy=nctemp209;

#line 56  "el2d.e"
int nctemp221=Model->Nx;
nctemp221=nctemp221*Model->Ny;
nctempfloat2 *nctemp220;
nctemp220=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp220->d[0]=Model->Nx;
nctemp220->d[1]=Model->Ny;
nctemp220->a=(float *)RunMalloc(sizeof(float)*nctemp221);
El2d->thetaxyx=nctemp220;

#line 58  "el2d.e"
i =0;
int nctemp230 = (i < Model->Nx);
while(nctemp230){
{

#line 59  "el2d.e"
j =0;
int nctemp238 = (j < Model->Ny);
while(nctemp238){
{

#line 60  "el2d.e"
int nctemp245=i;
if((0>i)||(i>=El2d->p->d[0])){
nctempstring->a="El2d->p";
nctempstring->d[0]=strlen("El2d->p")+1;;
LibeArrayex(60,nctempstring,i,0,El2d->p->d[0]);
}
nctemp245=j*El2d->p->d[0]+nctemp245;
if((0>j)||(j>=El2d->p->d[1])){
nctempstring->a="El2d->p";
nctempstring->d[0]=strlen("El2d->p")+1;;
LibeArrayex(60,nctempstring,j,1,El2d->p->d[1]);
}
El2d->p->a[nctemp245] =0.0;

#line 61  "el2d.e"
int nctemp252=i;
if((0>i)||(i>=El2d->sigmaxx->d[0])){
nctempstring->a="El2d->sigmaxx";
nctempstring->d[0]=strlen("El2d->sigmaxx")+1;;
LibeArrayex(61,nctempstring,i,0,El2d->sigmaxx->d[0]);
}
nctemp252=j*El2d->sigmaxx->d[0]+nctemp252;
if((0>j)||(j>=El2d->sigmaxx->d[1])){
nctempstring->a="El2d->sigmaxx";
nctempstring->d[0]=strlen("El2d->sigmaxx")+1;;
LibeArrayex(61,nctempstring,j,1,El2d->sigmaxx->d[1]);
}
El2d->sigmaxx->a[nctemp252] =0.0;

#line 62  "el2d.e"
int nctemp259=i;
if((0>i)||(i>=El2d->sigmayy->d[0])){
nctempstring->a="El2d->sigmayy";
nctempstring->d[0]=strlen("El2d->sigmayy")+1;;
LibeArrayex(62,nctempstring,i,0,El2d->sigmayy->d[0]);
}
nctemp259=j*El2d->sigmayy->d[0]+nctemp259;
if((0>j)||(j>=El2d->sigmayy->d[1])){
nctempstring->a="El2d->sigmayy";
nctempstring->d[0]=strlen("El2d->sigmayy")+1;;
LibeArrayex(62,nctempstring,j,1,El2d->sigmayy->d[1]);
}
El2d->sigmayy->a[nctemp259] =0.0;

#line 63  "el2d.e"
int nctemp266=i;
if((0>i)||(i>=El2d->sigmaxy->d[0])){
nctempstring->a="El2d->sigmaxy";
nctempstring->d[0]=strlen("El2d->sigmaxy")+1;;
LibeArrayex(63,nctempstring,i,0,El2d->sigmaxy->d[0]);
}
nctemp266=j*El2d->sigmaxy->d[0]+nctemp266;
if((0>j)||(j>=El2d->sigmaxy->d[1])){
nctempstring->a="El2d->sigmaxy";
nctempstring->d[0]=strlen("El2d->sigmaxy")+1;;
LibeArrayex(63,nctempstring,j,1,El2d->sigmaxy->d[1]);
}
El2d->sigmaxy->a[nctemp266] =0.0;

#line 64  "el2d.e"
int nctemp273=i;
if((0>i)||(i>=El2d->sigmayx->d[0])){
nctempstring->a="El2d->sigmayx";
nctempstring->d[0]=strlen("El2d->sigmayx")+1;;
LibeArrayex(64,nctempstring,i,0,El2d->sigmayx->d[0]);
}
nctemp273=j*El2d->sigmayx->d[0]+nctemp273;
if((0>j)||(j>=El2d->sigmayx->d[1])){
nctempstring->a="El2d->sigmayx";
nctempstring->d[0]=strlen("El2d->sigmayx")+1;;
LibeArrayex(64,nctempstring,j,1,El2d->sigmayx->d[1]);
}
El2d->sigmayx->a[nctemp273] =0.0;

#line 65  "el2d.e"
int nctemp280=i;
if((0>i)||(i>=El2d->vx->d[0])){
nctempstring->a="El2d->vx";
nctempstring->d[0]=strlen("El2d->vx")+1;;
LibeArrayex(65,nctempstring,i,0,El2d->vx->d[0]);
}
nctemp280=j*El2d->vx->d[0]+nctemp280;
if((0>j)||(j>=El2d->vx->d[1])){
nctempstring->a="El2d->vx";
nctempstring->d[0]=strlen("El2d->vx")+1;;
LibeArrayex(65,nctempstring,j,1,El2d->vx->d[1]);
}
El2d->vx->a[nctemp280] =0.0;

#line 66  "el2d.e"
int nctemp287=i;
if((0>i)||(i>=El2d->vy->d[0])){
nctempstring->a="El2d->vy";
nctempstring->d[0]=strlen("El2d->vy")+1;;
LibeArrayex(66,nctempstring,i,0,El2d->vy->d[0]);
}
nctemp287=j*El2d->vy->d[0]+nctemp287;
if((0>j)||(j>=El2d->vy->d[1])){
nctempstring->a="El2d->vy";
nctempstring->d[0]=strlen("El2d->vy")+1;;
LibeArrayex(66,nctempstring,j,1,El2d->vy->d[1]);
}
El2d->vy->a[nctemp287] =0.0;

#line 67  "el2d.e"
int nctemp294=i;
if((0>i)||(i>=El2d->exx->d[0])){
nctempstring->a="El2d->exx";
nctempstring->d[0]=strlen("El2d->exx")+1;;
LibeArrayex(67,nctempstring,i,0,El2d->exx->d[0]);
}
nctemp294=j*El2d->exx->d[0]+nctemp294;
if((0>j)||(j>=El2d->exx->d[1])){
nctempstring->a="El2d->exx";
nctempstring->d[0]=strlen("El2d->exx")+1;;
LibeArrayex(67,nctempstring,j,1,El2d->exx->d[1]);
}
El2d->exx->a[nctemp294] =0.0;

#line 68  "el2d.e"
int nctemp301=i;
if((0>i)||(i>=El2d->eyy->d[0])){
nctempstring->a="El2d->eyy";
nctempstring->d[0]=strlen("El2d->eyy")+1;;
LibeArrayex(68,nctempstring,i,0,El2d->eyy->d[0]);
}
nctemp301=j*El2d->eyy->d[0]+nctemp301;
if((0>j)||(j>=El2d->eyy->d[1])){
nctempstring->a="El2d->eyy";
nctempstring->d[0]=strlen("El2d->eyy")+1;;
LibeArrayex(68,nctempstring,j,1,El2d->eyy->d[1]);
}
El2d->eyy->a[nctemp301] =0.0;

#line 69  "el2d.e"
int nctemp308=i;
if((0>i)||(i>=El2d->exy->d[0])){
nctempstring->a="El2d->exy";
nctempstring->d[0]=strlen("El2d->exy")+1;;
LibeArrayex(69,nctempstring,i,0,El2d->exy->d[0]);
}
nctemp308=j*El2d->exy->d[0]+nctemp308;
if((0>j)||(j>=El2d->exy->d[1])){
nctempstring->a="El2d->exy";
nctempstring->d[0]=strlen("El2d->exy")+1;;
LibeArrayex(69,nctempstring,j,1,El2d->exy->d[1]);
}
El2d->exy->a[nctemp308] =0.0;

#line 70  "el2d.e"
int nctemp315=i;
if((0>i)||(i>=El2d->eyx->d[0])){
nctempstring->a="El2d->eyx";
nctempstring->d[0]=strlen("El2d->eyx")+1;;
LibeArrayex(70,nctempstring,i,0,El2d->eyx->d[0]);
}
nctemp315=j*El2d->eyx->d[0]+nctemp315;
if((0>j)||(j>=El2d->eyx->d[1])){
nctempstring->a="El2d->eyx";
nctempstring->d[0]=strlen("El2d->eyx")+1;;
LibeArrayex(70,nctempstring,j,1,El2d->eyx->d[1]);
}
El2d->eyx->a[nctemp315] =0.0;

#line 71  "el2d.e"
int nctemp322=i;
if((0>i)||(i>=El2d->gammaxx->d[0])){
nctempstring->a="El2d->gammaxx";
nctempstring->d[0]=strlen("El2d->gammaxx")+1;;
LibeArrayex(71,nctempstring,i,0,El2d->gammaxx->d[0]);
}
nctemp322=j*El2d->gammaxx->d[0]+nctemp322;
if((0>j)||(j>=El2d->gammaxx->d[1])){
nctempstring->a="El2d->gammaxx";
nctempstring->d[0]=strlen("El2d->gammaxx")+1;;
LibeArrayex(71,nctempstring,j,1,El2d->gammaxx->d[1]);
}
El2d->gammaxx->a[nctemp322] =0.0;

#line 72  "el2d.e"
int nctemp329=i;
if((0>i)||(i>=El2d->gammayy->d[0])){
nctempstring->a="El2d->gammayy";
nctempstring->d[0]=strlen("El2d->gammayy")+1;;
LibeArrayex(72,nctempstring,i,0,El2d->gammayy->d[0]);
}
nctemp329=j*El2d->gammayy->d[0]+nctemp329;
if((0>j)||(j>=El2d->gammayy->d[1])){
nctempstring->a="El2d->gammayy";
nctempstring->d[0]=strlen("El2d->gammayy")+1;;
LibeArrayex(72,nctempstring,j,1,El2d->gammayy->d[1]);
}
El2d->gammayy->a[nctemp329] =0.0;

#line 73  "el2d.e"
int nctemp336=i;
if((0>i)||(i>=El2d->gammaxy->d[0])){
nctempstring->a="El2d->gammaxy";
nctempstring->d[0]=strlen("El2d->gammaxy")+1;;
LibeArrayex(73,nctempstring,i,0,El2d->gammaxy->d[0]);
}
nctemp336=j*El2d->gammaxy->d[0]+nctemp336;
if((0>j)||(j>=El2d->gammaxy->d[1])){
nctempstring->a="El2d->gammaxy";
nctempstring->d[0]=strlen("El2d->gammaxy")+1;;
LibeArrayex(73,nctempstring,j,1,El2d->gammaxy->d[1]);
}
El2d->gammaxy->a[nctemp336] =0.0;

#line 74  "el2d.e"
int nctemp343=i;
if((0>i)||(i>=El2d->gammayx->d[0])){
nctempstring->a="El2d->gammayx";
nctempstring->d[0]=strlen("El2d->gammayx")+1;;
LibeArrayex(74,nctempstring,i,0,El2d->gammayx->d[0]);
}
nctemp343=j*El2d->gammayx->d[0]+nctemp343;
if((0>j)||(j>=El2d->gammayx->d[1])){
nctempstring->a="El2d->gammayx";
nctempstring->d[0]=strlen("El2d->gammayx")+1;;
LibeArrayex(74,nctempstring,j,1,El2d->gammayx->d[1]);
}
El2d->gammayx->a[nctemp343] =0.0;

#line 75  "el2d.e"
int nctemp350=i;
if((0>i)||(i>=El2d->thetaxxx->d[0])){
nctempstring->a="El2d->thetaxxx";
nctempstring->d[0]=strlen("El2d->thetaxxx")+1;;
LibeArrayex(75,nctempstring,i,0,El2d->thetaxxx->d[0]);
}
nctemp350=j*El2d->thetaxxx->d[0]+nctemp350;
if((0>j)||(j>=El2d->thetaxxx->d[1])){
nctempstring->a="El2d->thetaxxx";
nctempstring->d[0]=strlen("El2d->thetaxxx")+1;;
LibeArrayex(75,nctempstring,j,1,El2d->thetaxxx->d[1]);
}
El2d->thetaxxx->a[nctemp350] =0.0;

#line 76  "el2d.e"
int nctemp357=i;
if((0>i)||(i>=El2d->thetayyy->d[0])){
nctempstring->a="El2d->thetayyy";
nctempstring->d[0]=strlen("El2d->thetayyy")+1;;
LibeArrayex(76,nctempstring,i,0,El2d->thetayyy->d[0]);
}
nctemp357=j*El2d->thetayyy->d[0]+nctemp357;
if((0>j)||(j>=El2d->thetayyy->d[1])){
nctempstring->a="El2d->thetayyy";
nctempstring->d[0]=strlen("El2d->thetayyy")+1;;
LibeArrayex(76,nctempstring,j,1,El2d->thetayyy->d[1]);
}
El2d->thetayyy->a[nctemp357] =0.0;

#line 77  "el2d.e"
int nctemp364=i;
if((0>i)||(i>=El2d->thetayxy->d[0])){
nctempstring->a="El2d->thetayxy";
nctempstring->d[0]=strlen("El2d->thetayxy")+1;;
LibeArrayex(77,nctempstring,i,0,El2d->thetayxy->d[0]);
}
nctemp364=j*El2d->thetayxy->d[0]+nctemp364;
if((0>j)||(j>=El2d->thetayxy->d[1])){
nctempstring->a="El2d->thetayxy";
nctempstring->d[0]=strlen("El2d->thetayxy")+1;;
LibeArrayex(77,nctempstring,j,1,El2d->thetayxy->d[1]);
}
El2d->thetayxy->a[nctemp364] =0.0;

#line 78  "el2d.e"
int nctemp371=i;
if((0>i)||(i>=El2d->thetaxyx->d[0])){
nctempstring->a="El2d->thetaxyx";
nctempstring->d[0]=strlen("El2d->thetaxyx")+1;;
LibeArrayex(78,nctempstring,i,0,El2d->thetaxyx->d[0]);
}
nctemp371=j*El2d->thetaxyx->d[0]+nctemp371;
if((0>j)||(j>=El2d->thetaxyx->d[1])){
nctempstring->a="El2d->thetaxyx";
nctempstring->d[0]=strlen("El2d->thetaxyx")+1;;
LibeArrayex(78,nctempstring,j,1,El2d->thetaxyx->d[1]);
}
El2d->thetaxyx->a[nctemp371] =0.0;

#line 79  "el2d.e"
El2d->ts =0;

#line 59  "el2d.e"
}
int nctemp387 = j + 1;
j =nctemp387;
int nctemp388 = (j < Model->Ny);
nctemp238=nctemp388;
}

#line 58  "el2d.e"
}
int nctemp400 = i + 1;
i =nctemp400;
int nctemp401 = (i < Model->Nx);
nctemp230=nctemp401;
}

#line 83  "el2d.e"
int nctemp408=0;
if((0>0)||(0>=El2d->snpflags->d[0])){
nctempstring->a="El2d->snpflags";
nctempstring->d[0]=strlen("El2d->snpflags")+1;;
LibeArrayex(83,nctempstring,0,0,El2d->snpflags->d[0]);
}
int nctemp405 = (El2d->snpflags->a[nctemp408] ==1);
if(nctemp405)
{

#line 84  "el2d.e"
struct nctempchar1 *nctemp417;
static struct nctempchar1 nctemp418 = {{ 12}, (char*)"snp-sxx.bin\0"};
nctemp417=&nctemp418;
nctempchar1* nctemp415= nctemp417;
struct nctempchar1 *nctemp421;
static struct nctempchar1 nctemp422 = {{ 2}, (char*)"w\0"};
nctemp421=&nctemp422;
nctempchar1* nctemp419= nctemp421;
int nctemp423=LibeOpen(nctemp415,nctemp419);
El2d->fdsxx =nctemp423;

#line 83  "el2d.e"
}

#line 86  "el2d.e"
int nctemp427=1;
if((0>1)||(1>=El2d->snpflags->d[0])){
nctempstring->a="El2d->snpflags";
nctempstring->d[0]=strlen("El2d->snpflags")+1;;
LibeArrayex(86,nctempstring,1,0,El2d->snpflags->d[0]);
}
int nctemp424 = (El2d->snpflags->a[nctemp427] ==1);
if(nctemp424)
{

#line 87  "el2d.e"
struct nctempchar1 *nctemp436;
static struct nctempchar1 nctemp437 = {{ 12}, (char*)"snp-syy.bin\0"};
nctemp436=&nctemp437;
nctempchar1* nctemp434= nctemp436;
struct nctempchar1 *nctemp440;
static struct nctempchar1 nctemp441 = {{ 2}, (char*)"w\0"};
nctemp440=&nctemp441;
nctempchar1* nctemp438= nctemp440;
int nctemp442=LibeOpen(nctemp434,nctemp438);
El2d->fdsyy =nctemp442;

#line 86  "el2d.e"
}

#line 89  "el2d.e"
int nctemp446=2;
if((0>2)||(2>=El2d->snpflags->d[0])){
nctempstring->a="El2d->snpflags";
nctempstring->d[0]=strlen("El2d->snpflags")+1;;
LibeArrayex(89,nctempstring,2,0,El2d->snpflags->d[0]);
}
int nctemp443 = (El2d->snpflags->a[nctemp446] ==1);
if(nctemp443)
{

#line 90  "el2d.e"
struct nctempchar1 *nctemp455;
static struct nctempchar1 nctemp456 = {{ 11}, (char*)"snp-vx.bin\0"};
nctemp455=&nctemp456;
nctempchar1* nctemp453= nctemp455;
struct nctempchar1 *nctemp459;
static struct nctempchar1 nctemp460 = {{ 2}, (char*)"w\0"};
nctemp459=&nctemp460;
nctempchar1* nctemp457= nctemp459;
int nctemp461=LibeOpen(nctemp453,nctemp457);
El2d->fdvx =nctemp461;

#line 89  "el2d.e"
}

#line 92  "el2d.e"
int nctemp465=3;
if((0>3)||(3>=El2d->snpflags->d[0])){
nctempstring->a="El2d->snpflags";
nctempstring->d[0]=strlen("El2d->snpflags")+1;;
LibeArrayex(92,nctempstring,3,0,El2d->snpflags->d[0]);
}
int nctemp462 = (El2d->snpflags->a[nctemp465] ==1);
if(nctemp462)
{

#line 93  "el2d.e"
struct nctempchar1 *nctemp474;
static struct nctempchar1 nctemp475 = {{ 11}, (char*)"snp-vy.bin\0"};
nctemp474=&nctemp475;
nctempchar1* nctemp472= nctemp474;
struct nctempchar1 *nctemp478;
static struct nctempchar1 nctemp479 = {{ 2}, (char*)"w\0"};
nctemp478=&nctemp479;
nctempchar1* nctemp476= nctemp478;
int nctemp480=LibeOpen(nctemp472,nctemp476);
El2d->fdvy =nctemp480;

#line 92  "el2d.e"
}

#line 96  "el2d.e"
return El2d;

#line 31  "el2d.e"
}

#line 130  "el2d.e"
int El2dSolve (struct el2d* El2d,struct model* Model,struct src* Src,struct rec* Rec,int nt,int l)

#line 132  "el2d.e"
{

#line 133  "el2d.e"
int sx;
int sy;
struct diff* Diff;
int ns;
int ne;
nctempfloat2 *tmp1;
nctempfloat2 *tmp2;
int i;
int k;
nctempfloat2 *p;
float perc;
float oldperc;
int iperc;

#line 143  "el2d.e"
int nctemp486= l;
struct diff* nctemp488=DiffNew(nctemp486);
Diff =nctemp488;

#line 144  "el2d.e"
int nctemp495=Model->Nx;
nctemp495=nctemp495*Model->Ny;
nctempfloat2 *nctemp494;
nctemp494=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp494->d[0]=Model->Nx;
nctemp494->d[1]=Model->Ny;
nctemp494->a=(float *)RunMalloc(sizeof(float)*nctemp495);
tmp1=nctemp494;

#line 145  "el2d.e"
int nctemp506=Model->Nx;
nctemp506=nctemp506*Model->Ny;
nctempfloat2 *nctemp505;
nctemp505=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp505->d[0]=Model->Nx;
nctemp505->d[1]=Model->Ny;
nctemp505->a=(float *)RunMalloc(sizeof(float)*nctemp506);
tmp2=nctemp505;

#line 147  "el2d.e"
oldperc =0.0;

#line 148  "el2d.e"
ns =El2d->ts;

#line 149  "el2d.e"
int nctemp527 = ns + nt;
ne =nctemp527;

#line 150  "el2d.e"
i =ns;
int nctemp532 = (i < ne);
while(nctemp532){
{

#line 154  "el2d.e"
struct diff* nctemp537= Diff;
nctempfloat2* nctemp539= El2d->sigmaxx;
nctempfloat2* nctemp542= El2d->exx;
float nctemp545= Model->Dx;
int nctemp547=DiffDxplus(nctemp537,nctemp539,nctemp542,nctemp545);

#line 155  "el2d.e"
struct diff* nctemp549= Diff;
nctempfloat2* nctemp551= El2d->sigmaxy;
nctempfloat2* nctemp554= El2d->exy;
float nctemp557= Model->Dx;
int nctemp559=DiffDyminus(nctemp549,nctemp551,nctemp554,nctemp557);

#line 157  "el2d.e"
struct el2d* nctemp561= El2d;
struct model* nctemp563= Model;
int nctemp565=El2dvx(nctemp561,nctemp563);

#line 158  "el2d.e"
struct diff* nctemp567= Diff;
nctempfloat2* nctemp569= El2d->sigmayy;
nctempfloat2* nctemp572= El2d->eyy;
float nctemp575= Model->Dx;
int nctemp577=DiffDyplus(nctemp567,nctemp569,nctemp572,nctemp575);

#line 159  "el2d.e"
struct diff* nctemp579= Diff;
nctempfloat2* nctemp581= El2d->sigmaxy;
nctempfloat2* nctemp584= El2d->eyx;
float nctemp587= Model->Dx;
int nctemp589=DiffDxminus(nctemp579,nctemp581,nctemp584,nctemp587);

#line 161  "el2d.e"
struct el2d* nctemp591= El2d;
struct model* nctemp593= Model;
int nctemp595=El2dvy(nctemp591,nctemp593);

#line 164  "el2d.e"
struct diff* nctemp597= Diff;
nctempfloat2* nctemp599= El2d->vx;
nctempfloat2* nctemp602= El2d->exx;
float nctemp605= Model->Dx;
int nctemp607=DiffDxminus(nctemp597,nctemp599,nctemp602,nctemp605);

#line 165  "el2d.e"
struct diff* nctemp609= Diff;
nctempfloat2* nctemp611= El2d->vy;
nctempfloat2* nctemp614= El2d->eyy;
float nctemp617= Model->Dx;
int nctemp619=DiffDyminus(nctemp609,nctemp611,nctemp614,nctemp617);

#line 166  "el2d.e"
struct diff* nctemp621= Diff;
nctempfloat2* nctemp623= El2d->vy;
nctempfloat2* nctemp626= tmp1;
float nctemp629= Model->Dx;
int nctemp631=DiffDxplus(nctemp621,nctemp623,nctemp626,nctemp629);

#line 167  "el2d.e"
struct diff* nctemp633= Diff;
nctempfloat2* nctemp635= El2d->vx;
nctempfloat2* nctemp638= tmp2;
float nctemp641= Model->Dx;
int nctemp643=DiffDyplus(nctemp633,nctemp635,nctemp638,nctemp641);

#line 168  "el2d.e"
struct el2d* nctemp645= El2d;
struct model* nctemp647= Model;
nctempfloat2* nctemp649= tmp1;
nctempfloat2* nctemp652= tmp2;
int nctemp655=El2dexy(nctemp645,nctemp647,nctemp649,nctemp652);

#line 169  "el2d.e"
struct el2d* nctemp657= El2d;
struct model* nctemp659= Model;
nctempfloat2* nctemp661= tmp1;
nctempfloat2* nctemp664= tmp2;
int nctemp667=El2deyx(nctemp657,nctemp659,nctemp661,nctemp664);

#line 172  "el2d.e"
struct el2d* nctemp669= El2d;
struct model* nctemp671= Model;
int nctemp673=El2dstress(nctemp669,nctemp671);

#line 175  "el2d.e"
k =0;
int nctemp678 = (k < Src->Ns);
while(nctemp678){
{

#line 176  "el2d.e"
int nctemp686=k;
if((0>k)||(k>=Src->Sx->d[0])){
nctempstring->a="Src->Sx";
nctempstring->d[0]=strlen("Src->Sx")+1;;
LibeArrayex(176,nctempstring,k,0,Src->Sx->d[0]);
}
sx =Src->Sx->a[nctemp686];

#line 177  "el2d.e"
int nctemp692=k;
if((0>k)||(k>=Src->Sy->d[0])){
nctempstring->a="Src->Sy";
nctempstring->d[0]=strlen("Src->Sy")+1;;
LibeArrayex(177,nctempstring,k,0,Src->Sy->d[0]);
}
sy =Src->Sy->a[nctemp692];

#line 178  "el2d.e"
int nctemp697=sx;
if((0>sx)||(sx>=El2d->sigmaxx->d[0])){
nctempstring->a="El2d->sigmaxx";
nctempstring->d[0]=strlen("El2d->sigmaxx")+1;;
LibeArrayex(178,nctempstring,sx,0,El2d->sigmaxx->d[0]);
}
nctemp697=sy*El2d->sigmaxx->d[0]+nctemp697;
if((0>sy)||(sy>=El2d->sigmaxx->d[1])){
nctempstring->a="El2d->sigmaxx";
nctempstring->d[0]=strlen("El2d->sigmaxx")+1;;
LibeArrayex(178,nctempstring,sy,1,El2d->sigmaxx->d[1]);
}
int nctemp704=sx;
if((0>sx)||(sx>=El2d->sigmaxx->d[0])){
nctempstring->a="El2d->sigmaxx";
nctempstring->d[0]=strlen("El2d->sigmaxx")+1;;
LibeArrayex(178,nctempstring,sx,0,El2d->sigmaxx->d[0]);
}
nctemp704=sy*El2d->sigmaxx->d[0]+nctemp704;
if((0>sy)||(sy>=El2d->sigmaxx->d[1])){
nctempstring->a="El2d->sigmaxx";
nctempstring->d[0]=strlen("El2d->sigmaxx")+1;;
LibeArrayex(178,nctempstring,sy,1,El2d->sigmaxx->d[1]);
}

#line 179  "el2d.e"
int nctemp715=i;
if((0>i)||(i>=Src->Sqxx->d[0])){
nctempstring->a="Src->Sqxx";
nctempstring->d[0]=strlen("Src->Sqxx")+1;;
LibeArrayex(179,nctempstring,i,0,Src->Sqxx->d[0]);
}
nctemp715=k*Src->Sqxx->d[0]+nctemp715;
if((0>k)||(k>=Src->Sqxx->d[1])){
nctempstring->a="Src->Sqxx";
nctempstring->d[0]=strlen("Src->Sqxx")+1;;
LibeArrayex(179,nctempstring,k,1,Src->Sqxx->d[1]);
}
float nctemp723 = Model->Dx * Model->Dx;
float nctemp724 = Src->Sqxx->a[nctemp715] / nctemp723;
float nctemp725 = Model->Dt * nctemp724;
float nctemp726 = El2d->sigmaxx->a[nctemp704] + nctemp725;

#line 178  "el2d.e"
El2d->sigmaxx->a[nctemp697] =nctemp726;

#line 180  "el2d.e"
int nctemp730=sx;
if((0>sx)||(sx>=El2d->sigmayy->d[0])){
nctempstring->a="El2d->sigmayy";
nctempstring->d[0]=strlen("El2d->sigmayy")+1;;
LibeArrayex(180,nctempstring,sx,0,El2d->sigmayy->d[0]);
}
nctemp730=sy*El2d->sigmayy->d[0]+nctemp730;
if((0>sy)||(sy>=El2d->sigmayy->d[1])){
nctempstring->a="El2d->sigmayy";
nctempstring->d[0]=strlen("El2d->sigmayy")+1;;
LibeArrayex(180,nctempstring,sy,1,El2d->sigmayy->d[1]);
}
int nctemp737=sx;
if((0>sx)||(sx>=El2d->sigmayy->d[0])){
nctempstring->a="El2d->sigmayy";
nctempstring->d[0]=strlen("El2d->sigmayy")+1;;
LibeArrayex(180,nctempstring,sx,0,El2d->sigmayy->d[0]);
}
nctemp737=sy*El2d->sigmayy->d[0]+nctemp737;
if((0>sy)||(sy>=El2d->sigmayy->d[1])){
nctempstring->a="El2d->sigmayy";
nctempstring->d[0]=strlen("El2d->sigmayy")+1;;
LibeArrayex(180,nctempstring,sy,1,El2d->sigmayy->d[1]);
}

#line 181  "el2d.e"
int nctemp748=i;
if((0>i)||(i>=Src->Sqyy->d[0])){
nctempstring->a="Src->Sqyy";
nctempstring->d[0]=strlen("Src->Sqyy")+1;;
LibeArrayex(181,nctempstring,i,0,Src->Sqyy->d[0]);
}
nctemp748=k*Src->Sqyy->d[0]+nctemp748;
if((0>k)||(k>=Src->Sqyy->d[1])){
nctempstring->a="Src->Sqyy";
nctempstring->d[0]=strlen("Src->Sqyy")+1;;
LibeArrayex(181,nctempstring,k,1,Src->Sqyy->d[1]);
}
float nctemp756 = Model->Dx * Model->Dx;
float nctemp757 = Src->Sqyy->a[nctemp748] / nctemp756;
float nctemp758 = Model->Dt * nctemp757;
float nctemp759 = El2d->sigmayy->a[nctemp737] + nctemp758;

#line 180  "el2d.e"
El2d->sigmayy->a[nctemp730] =nctemp759;

#line 182  "el2d.e"
int nctemp763=sx;
if((0>sx)||(sx>=El2d->vx->d[0])){
nctempstring->a="El2d->vx";
nctempstring->d[0]=strlen("El2d->vx")+1;;
LibeArrayex(182,nctempstring,sx,0,El2d->vx->d[0]);
}
nctemp763=sy*El2d->vx->d[0]+nctemp763;
if((0>sy)||(sy>=El2d->vx->d[1])){
nctempstring->a="El2d->vx";
nctempstring->d[0]=strlen("El2d->vx")+1;;
LibeArrayex(182,nctempstring,sy,1,El2d->vx->d[1]);
}
int nctemp770=sx;
if((0>sx)||(sx>=El2d->vx->d[0])){
nctempstring->a="El2d->vx";
nctempstring->d[0]=strlen("El2d->vx")+1;;
LibeArrayex(182,nctempstring,sx,0,El2d->vx->d[0]);
}
nctemp770=sy*El2d->vx->d[0]+nctemp770;
if((0>sy)||(sy>=El2d->vx->d[1])){
nctempstring->a="El2d->vx";
nctempstring->d[0]=strlen("El2d->vx")+1;;
LibeArrayex(182,nctempstring,sy,1,El2d->vx->d[1]);
}

#line 183  "el2d.e"
int nctemp781=i;
if((0>i)||(i>=Src->Sfx->d[0])){
nctempstring->a="Src->Sfx";
nctempstring->d[0]=strlen("Src->Sfx")+1;;
LibeArrayex(183,nctempstring,i,0,Src->Sfx->d[0]);
}
nctemp781=k*Src->Sfx->d[0]+nctemp781;
if((0>k)||(k>=Src->Sfx->d[1])){
nctempstring->a="Src->Sfx";
nctempstring->d[0]=strlen("Src->Sfx")+1;;
LibeArrayex(183,nctempstring,k,1,Src->Sfx->d[1]);
}
float nctemp789 = Model->Dx * Model->Dx;
float nctemp790 = Src->Sfx->a[nctemp781] / nctemp789;
float nctemp791 = Model->Dt * nctemp790;
float nctemp792 = El2d->vx->a[nctemp770] + nctemp791;

#line 182  "el2d.e"
El2d->vx->a[nctemp763] =nctemp792;

#line 184  "el2d.e"
int nctemp796=sx;
if((0>sx)||(sx>=El2d->vy->d[0])){
nctempstring->a="El2d->vy";
nctempstring->d[0]=strlen("El2d->vy")+1;;
LibeArrayex(184,nctempstring,sx,0,El2d->vy->d[0]);
}
nctemp796=sy*El2d->vy->d[0]+nctemp796;
if((0>sy)||(sy>=El2d->vy->d[1])){
nctempstring->a="El2d->vy";
nctempstring->d[0]=strlen("El2d->vy")+1;;
LibeArrayex(184,nctempstring,sy,1,El2d->vy->d[1]);
}
int nctemp803=sx;
if((0>sx)||(sx>=El2d->vy->d[0])){
nctempstring->a="El2d->vy";
nctempstring->d[0]=strlen("El2d->vy")+1;;
LibeArrayex(184,nctempstring,sx,0,El2d->vy->d[0]);
}
nctemp803=sy*El2d->vy->d[0]+nctemp803;
if((0>sy)||(sy>=El2d->vy->d[1])){
nctempstring->a="El2d->vy";
nctempstring->d[0]=strlen("El2d->vy")+1;;
LibeArrayex(184,nctempstring,sy,1,El2d->vy->d[1]);
}

#line 185  "el2d.e"
int nctemp814=i;
if((0>i)||(i>=Src->Sfy->d[0])){
nctempstring->a="Src->Sfy";
nctempstring->d[0]=strlen("Src->Sfy")+1;;
LibeArrayex(185,nctempstring,i,0,Src->Sfy->d[0]);
}
nctemp814=k*Src->Sfy->d[0]+nctemp814;
if((0>k)||(k>=Src->Sfy->d[1])){
nctempstring->a="Src->Sfy";
nctempstring->d[0]=strlen("Src->Sfy")+1;;
LibeArrayex(185,nctempstring,k,1,Src->Sfy->d[1]);
}
float nctemp822 = Model->Dx * Model->Dx;
float nctemp823 = Src->Sfy->a[nctemp814] / nctemp822;
float nctemp824 = Model->Dt * nctemp823;
float nctemp825 = El2d->vy->a[nctemp803] + nctemp824;

#line 184  "el2d.e"
El2d->vy->a[nctemp796] =nctemp825;

#line 175  "el2d.e"
}
int nctemp834 = k + 1;
k =nctemp834;
int nctemp835 = (k < Src->Ns);
nctemp678=nctemp835;
}

#line 189  "el2d.e"
float nctemp850=(float)(i);
int nctemp863 = ne - ns;
int nctemp865 = nctemp863 - 1;
float nctemp854=(float)(nctemp865);
float nctemp866 = nctemp850 / nctemp854;
float nctemp867 = 1000.0 * nctemp866;
perc =nctemp867;

#line 190  "el2d.e"
float nctemp875 = perc - oldperc;
int nctemp868 = (nctemp875 >= 10.0);
if(nctemp868)
{

#line 191  "el2d.e"
int nctemp884=(int)(perc);
int nctemp888 = nctemp884 / 10;
iperc =nctemp888;

#line 192  "el2d.e"
int nctemp892= iperc;
int nctemp894= 10;
int nctemp896=LibeMod(nctemp892,nctemp894);
int nctemp889 = (nctemp896 ==0);
if(nctemp889)
{

#line 193  "el2d.e"
int nctemp899= 4;
int nctemp901= iperc;
int nctemp903=LibePuti(nctemp899,nctemp901);

#line 194  "el2d.e"
int nctemp905= 4;
struct nctempchar1 *nctemp909;
static struct nctempchar1 nctemp910 = {{ 3}, (char*)"\n\0"};
nctemp909=&nctemp910;
nctempchar1* nctemp907= nctemp909;
int nctemp911=LibePuts(nctemp905,nctemp907);

#line 195  "el2d.e"
int nctemp913= 4;
int nctemp915=LibeFlush(nctemp913);

#line 192  "el2d.e"
}

#line 197  "el2d.e"
oldperc =perc;

#line 190  "el2d.e"
}

#line 201  "el2d.e"
struct rec* nctemp921= Rec;
int nctemp923= i;
nctempfloat2* nctemp925= El2d->sigmaxx;
nctempfloat2* nctemp928= El2d->sigmayy;
nctempfloat2* nctemp931= El2d->vx;
nctempfloat2* nctemp934= El2d->vy;
int nctemp937=RecReceiver(nctemp921,nctemp923,nctemp925,nctemp928,nctemp931,nctemp934);

#line 204  "el2d.e"
struct el2d* nctemp939= El2d;
int nctemp941= i;
int nctemp943=El2dSnap(nctemp939,nctemp941);

#line 150  "el2d.e"
}
int nctemp952 = i + 1;
i =nctemp952;
int nctemp953 = (i < ne);
nctemp532=nctemp953;
}

#line 206  "el2d.e"
return 1;

#line 132  "el2d.e"
}

#line 213  "el2d.e"
int El2dvx (struct el2d* El2d,struct model* Model)

#line 214  "el2d.e"
{

#line 215  "el2d.e"
int nx;
int ny;
int i;
int j;

#line 218  "el2d.e"
nx =Model->Nx;

#line 219  "el2d.e"
ny =Model->Ny;

 #pragma omp parallel for

#line 224  "el2d.e"
for(j=0;j<ny;j=j+1){for(i=0;i<nx;i=i+1){{

#line 225  "el2d.e"
int nctemp973=i;
if((0>i)||(i>=El2d->vx->d[0])){
nctempstring->a="El2d->vx";
nctempstring->d[0]=strlen("El2d->vx")+1;;
LibeArrayex(225,nctempstring,i,0,El2d->vx->d[0]);
}
nctemp973=j*El2d->vx->d[0]+nctemp973;
if((0>j)||(j>=El2d->vx->d[1])){
nctempstring->a="El2d->vx";
nctempstring->d[0]=strlen("El2d->vx")+1;;
LibeArrayex(225,nctempstring,j,1,El2d->vx->d[1]);
}
int nctemp993=i;
if((0>i)||(i>=Model->Rho->d[0])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(225,nctempstring,i,0,Model->Rho->d[0]);
}
nctemp993=j*Model->Rho->d[0]+nctemp993;
if((0>j)||(j>=Model->Rho->d[1])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(225,nctempstring,j,1,Model->Rho->d[1]);
}
float nctemp996 = Model->Dt * Model->Rho->a[nctemp993];
int nctemp1001=i;
if((0>i)||(i>=El2d->exx->d[0])){
nctempstring->a="El2d->exx";
nctempstring->d[0]=strlen("El2d->exx")+1;;
LibeArrayex(225,nctempstring,i,0,El2d->exx->d[0]);
}
nctemp1001=j*El2d->exx->d[0]+nctemp1001;
if((0>j)||(j>=El2d->exx->d[1])){
nctempstring->a="El2d->exx";
nctempstring->d[0]=strlen("El2d->exx")+1;;
LibeArrayex(225,nctempstring,j,1,El2d->exx->d[1]);
}
int nctemp1005=i;
if((0>i)||(i>=El2d->exy->d[0])){
nctempstring->a="El2d->exy";
nctempstring->d[0]=strlen("El2d->exy")+1;;
LibeArrayex(225,nctempstring,i,0,El2d->exy->d[0]);
}
nctemp1005=j*El2d->exy->d[0]+nctemp1005;
if((0>j)||(j>=El2d->exy->d[1])){
nctempstring->a="El2d->exy";
nctempstring->d[0]=strlen("El2d->exy")+1;;
LibeArrayex(225,nctempstring,j,1,El2d->exy->d[1]);
}
float nctemp1008 = El2d->exx->a[nctemp1001] + El2d->exy->a[nctemp1005];
float nctemp1009 = nctemp996 * nctemp1008;

#line 226  "el2d.e"
int nctemp1018=i;
if((0>i)||(i>=El2d->thetaxxx->d[0])){
nctempstring->a="El2d->thetaxxx";
nctempstring->d[0]=strlen("El2d->thetaxxx")+1;;
LibeArrayex(226,nctempstring,i,0,El2d->thetaxxx->d[0]);
}
nctemp1018=j*El2d->thetaxxx->d[0]+nctemp1018;
if((0>j)||(j>=El2d->thetaxxx->d[1])){
nctempstring->a="El2d->thetaxxx";
nctempstring->d[0]=strlen("El2d->thetaxxx")+1;;
LibeArrayex(226,nctempstring,j,1,El2d->thetaxxx->d[1]);
}
float nctemp1021 = Model->Dt * El2d->thetaxxx->a[nctemp1018];
int nctemp1023=i;
if((0>i)||(i>=Model->Drhopx->d[0])){
nctempstring->a="Model->Drhopx";
nctempstring->d[0]=strlen("Model->Drhopx")+1;;
LibeArrayex(226,nctempstring,i,0,Model->Drhopx->d[0]);
}
nctemp1023=j*Model->Drhopx->d[0]+nctemp1023;
if((0>j)||(j>=Model->Drhopx->d[1])){
nctempstring->a="Model->Drhopx";
nctempstring->d[0]=strlen("Model->Drhopx")+1;;
LibeArrayex(226,nctempstring,j,1,Model->Drhopx->d[1]);
}
float nctemp1026 = nctemp1021 * Model->Drhopx->a[nctemp1023];
float nctemp1027 = nctemp1009 + nctemp1026;

#line 227  "el2d.e"
int nctemp1036=i;
if((0>i)||(i>=El2d->thetayxy->d[0])){
nctempstring->a="El2d->thetayxy";
nctempstring->d[0]=strlen("El2d->thetayxy")+1;;
LibeArrayex(227,nctempstring,i,0,El2d->thetayxy->d[0]);
}
nctemp1036=j*El2d->thetayxy->d[0]+nctemp1036;
if((0>j)||(j>=El2d->thetayxy->d[1])){
nctempstring->a="El2d->thetayxy";
nctempstring->d[0]=strlen("El2d->thetayxy")+1;;
LibeArrayex(227,nctempstring,j,1,El2d->thetayxy->d[1]);
}
float nctemp1039 = Model->Dt * El2d->thetayxy->a[nctemp1036];
int nctemp1041=i;
if((0>i)||(i>=Model->Drhopy->d[0])){
nctempstring->a="Model->Drhopy";
nctempstring->d[0]=strlen("Model->Drhopy")+1;;
LibeArrayex(227,nctempstring,i,0,Model->Drhopy->d[0]);
}
nctemp1041=j*Model->Drhopy->d[0]+nctemp1041;
if((0>j)||(j>=Model->Drhopy->d[1])){
nctempstring->a="Model->Drhopy";
nctempstring->d[0]=strlen("Model->Drhopy")+1;;
LibeArrayex(227,nctempstring,j,1,Model->Drhopy->d[1]);
}
float nctemp1044 = nctemp1039 * Model->Drhopy->a[nctemp1041];
float nctemp1045 = nctemp1027 + nctemp1044;

#line 228  "el2d.e"
int nctemp1047=i;
if((0>i)||(i>=El2d->vx->d[0])){
nctempstring->a="El2d->vx";
nctempstring->d[0]=strlen("El2d->vx")+1;;
LibeArrayex(228,nctempstring,i,0,El2d->vx->d[0]);
}
nctemp1047=j*El2d->vx->d[0]+nctemp1047;
if((0>j)||(j>=El2d->vx->d[1])){
nctempstring->a="El2d->vx";
nctempstring->d[0]=strlen("El2d->vx")+1;;
LibeArrayex(228,nctempstring,j,1,El2d->vx->d[1]);
}
float nctemp1050 = nctemp1045 + El2d->vx->a[nctemp1047];

#line 225  "el2d.e"
El2d->vx->a[nctemp973] =nctemp1050;

#line 230  "el2d.e"
int nctemp1054=i;
if((0>i)||(i>=El2d->thetaxxx->d[0])){
nctempstring->a="El2d->thetaxxx";
nctempstring->d[0]=strlen("El2d->thetaxxx")+1;;
LibeArrayex(230,nctempstring,i,0,El2d->thetaxxx->d[0]);
}
nctemp1054=j*El2d->thetaxxx->d[0]+nctemp1054;
if((0>j)||(j>=El2d->thetaxxx->d[1])){
nctempstring->a="El2d->thetaxxx";
nctempstring->d[0]=strlen("El2d->thetaxxx")+1;;
LibeArrayex(230,nctempstring,j,1,El2d->thetaxxx->d[1]);
}
int nctemp1064=i;
if((0>i)||(i>=Model->Eta1x->d[0])){
nctempstring->a="Model->Eta1x";
nctempstring->d[0]=strlen("Model->Eta1x")+1;;
LibeArrayex(230,nctempstring,i,0,Model->Eta1x->d[0]);
}
nctemp1064=j*Model->Eta1x->d[0]+nctemp1064;
if((0>j)||(j>=Model->Eta1x->d[1])){
nctempstring->a="Model->Eta1x";
nctempstring->d[0]=strlen("Model->Eta1x")+1;;
LibeArrayex(230,nctempstring,j,1,Model->Eta1x->d[1]);
}
int nctemp1068=i;
if((0>i)||(i>=El2d->thetaxxx->d[0])){
nctempstring->a="El2d->thetaxxx";
nctempstring->d[0]=strlen("El2d->thetaxxx")+1;;
LibeArrayex(230,nctempstring,i,0,El2d->thetaxxx->d[0]);
}
nctemp1068=j*El2d->thetaxxx->d[0]+nctemp1068;
if((0>j)||(j>=El2d->thetaxxx->d[1])){
nctempstring->a="El2d->thetaxxx";
nctempstring->d[0]=strlen("El2d->thetaxxx")+1;;
LibeArrayex(230,nctempstring,j,1,El2d->thetaxxx->d[1]);
}
float nctemp1071 = Model->Eta1x->a[nctemp1064] * El2d->thetaxxx->a[nctemp1068];

#line 231  "el2d.e"
int nctemp1076=i;
if((0>i)||(i>=Model->Eta2x->d[0])){
nctempstring->a="Model->Eta2x";
nctempstring->d[0]=strlen("Model->Eta2x")+1;;
LibeArrayex(231,nctempstring,i,0,Model->Eta2x->d[0]);
}
nctemp1076=j*Model->Eta2x->d[0]+nctemp1076;
if((0>j)||(j>=Model->Eta2x->d[1])){
nctempstring->a="Model->Eta2x";
nctempstring->d[0]=strlen("Model->Eta2x")+1;;
LibeArrayex(231,nctempstring,j,1,Model->Eta2x->d[1]);
}
int nctemp1080=i;
if((0>i)||(i>=El2d->exx->d[0])){
nctempstring->a="El2d->exx";
nctempstring->d[0]=strlen("El2d->exx")+1;;
LibeArrayex(231,nctempstring,i,0,El2d->exx->d[0]);
}
nctemp1080=j*El2d->exx->d[0]+nctemp1080;
if((0>j)||(j>=El2d->exx->d[1])){
nctempstring->a="El2d->exx";
nctempstring->d[0]=strlen("El2d->exx")+1;;
LibeArrayex(231,nctempstring,j,1,El2d->exx->d[1]);
}
float nctemp1083 = Model->Eta2x->a[nctemp1076] * El2d->exx->a[nctemp1080];
float nctemp1084 = nctemp1071 + nctemp1083;

#line 230  "el2d.e"
El2d->thetaxxx->a[nctemp1054] =nctemp1084;

#line 232  "el2d.e"
int nctemp1088=i;
if((0>i)||(i>=El2d->thetayxy->d[0])){
nctempstring->a="El2d->thetayxy";
nctempstring->d[0]=strlen("El2d->thetayxy")+1;;
LibeArrayex(232,nctempstring,i,0,El2d->thetayxy->d[0]);
}
nctemp1088=j*El2d->thetayxy->d[0]+nctemp1088;
if((0>j)||(j>=El2d->thetayxy->d[1])){
nctempstring->a="El2d->thetayxy";
nctempstring->d[0]=strlen("El2d->thetayxy")+1;;
LibeArrayex(232,nctempstring,j,1,El2d->thetayxy->d[1]);
}
int nctemp1098=i;
if((0>i)||(i>=Model->Eta1y->d[0])){
nctempstring->a="Model->Eta1y";
nctempstring->d[0]=strlen("Model->Eta1y")+1;;
LibeArrayex(232,nctempstring,i,0,Model->Eta1y->d[0]);
}
nctemp1098=j*Model->Eta1y->d[0]+nctemp1098;
if((0>j)||(j>=Model->Eta1y->d[1])){
nctempstring->a="Model->Eta1y";
nctempstring->d[0]=strlen("Model->Eta1y")+1;;
LibeArrayex(232,nctempstring,j,1,Model->Eta1y->d[1]);
}
int nctemp1102=i;
if((0>i)||(i>=El2d->thetayxy->d[0])){
nctempstring->a="El2d->thetayxy";
nctempstring->d[0]=strlen("El2d->thetayxy")+1;;
LibeArrayex(232,nctempstring,i,0,El2d->thetayxy->d[0]);
}
nctemp1102=j*El2d->thetayxy->d[0]+nctemp1102;
if((0>j)||(j>=El2d->thetayxy->d[1])){
nctempstring->a="El2d->thetayxy";
nctempstring->d[0]=strlen("El2d->thetayxy")+1;;
LibeArrayex(232,nctempstring,j,1,El2d->thetayxy->d[1]);
}
float nctemp1105 = Model->Eta1y->a[nctemp1098] * El2d->thetayxy->a[nctemp1102];

#line 233  "el2d.e"
int nctemp1110=i;
if((0>i)||(i>=Model->Eta2y->d[0])){
nctempstring->a="Model->Eta2y";
nctempstring->d[0]=strlen("Model->Eta2y")+1;;
LibeArrayex(233,nctempstring,i,0,Model->Eta2y->d[0]);
}
nctemp1110=j*Model->Eta2y->d[0]+nctemp1110;
if((0>j)||(j>=Model->Eta2y->d[1])){
nctempstring->a="Model->Eta2y";
nctempstring->d[0]=strlen("Model->Eta2y")+1;;
LibeArrayex(233,nctempstring,j,1,Model->Eta2y->d[1]);
}
int nctemp1114=i;
if((0>i)||(i>=El2d->exy->d[0])){
nctempstring->a="El2d->exy";
nctempstring->d[0]=strlen("El2d->exy")+1;;
LibeArrayex(233,nctempstring,i,0,El2d->exy->d[0]);
}
nctemp1114=j*El2d->exy->d[0]+nctemp1114;
if((0>j)||(j>=El2d->exy->d[1])){
nctempstring->a="El2d->exy";
nctempstring->d[0]=strlen("El2d->exy")+1;;
LibeArrayex(233,nctempstring,j,1,El2d->exy->d[1]);
}
float nctemp1117 = Model->Eta2y->a[nctemp1110] * El2d->exy->a[nctemp1114];
float nctemp1118 = nctemp1105 + nctemp1117;

#line 232  "el2d.e"
El2d->thetayxy->a[nctemp1088] =nctemp1118;

#line 224  "el2d.e"
}
}}
#line 214  "el2d.e"
}

#line 241  "el2d.e"
int El2dvy (struct el2d* El2d,struct model* Model)

#line 242  "el2d.e"
{

#line 243  "el2d.e"
int nx;
int ny;
int i;
int j;

#line 246  "el2d.e"
nx =Model->Nx;

#line 247  "el2d.e"
ny =Model->Ny;

 #pragma omp parallel for

#line 252  "el2d.e"
for(j=0;j<ny;j=j+1){for(i=0;i<nx;i=i+1){{

#line 253  "el2d.e"
int nctemp1134=i;
if((0>i)||(i>=El2d->vy->d[0])){
nctempstring->a="El2d->vy";
nctempstring->d[0]=strlen("El2d->vy")+1;;
LibeArrayex(253,nctempstring,i,0,El2d->vy->d[0]);
}
nctemp1134=j*El2d->vy->d[0]+nctemp1134;
if((0>j)||(j>=El2d->vy->d[1])){
nctempstring->a="El2d->vy";
nctempstring->d[0]=strlen("El2d->vy")+1;;
LibeArrayex(253,nctempstring,j,1,El2d->vy->d[1]);
}
int nctemp1154=i;
if((0>i)||(i>=Model->Rho->d[0])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(253,nctempstring,i,0,Model->Rho->d[0]);
}
nctemp1154=j*Model->Rho->d[0]+nctemp1154;
if((0>j)||(j>=Model->Rho->d[1])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(253,nctempstring,j,1,Model->Rho->d[1]);
}
float nctemp1157 = Model->Dt * Model->Rho->a[nctemp1154];
int nctemp1162=i;
if((0>i)||(i>=El2d->eyy->d[0])){
nctempstring->a="El2d->eyy";
nctempstring->d[0]=strlen("El2d->eyy")+1;;
LibeArrayex(253,nctempstring,i,0,El2d->eyy->d[0]);
}
nctemp1162=j*El2d->eyy->d[0]+nctemp1162;
if((0>j)||(j>=El2d->eyy->d[1])){
nctempstring->a="El2d->eyy";
nctempstring->d[0]=strlen("El2d->eyy")+1;;
LibeArrayex(253,nctempstring,j,1,El2d->eyy->d[1]);
}
int nctemp1166=i;
if((0>i)||(i>=El2d->eyx->d[0])){
nctempstring->a="El2d->eyx";
nctempstring->d[0]=strlen("El2d->eyx")+1;;
LibeArrayex(253,nctempstring,i,0,El2d->eyx->d[0]);
}
nctemp1166=j*El2d->eyx->d[0]+nctemp1166;
if((0>j)||(j>=El2d->eyx->d[1])){
nctempstring->a="El2d->eyx";
nctempstring->d[0]=strlen("El2d->eyx")+1;;
LibeArrayex(253,nctempstring,j,1,El2d->eyx->d[1]);
}
float nctemp1169 = El2d->eyy->a[nctemp1162] + El2d->eyx->a[nctemp1166];
float nctemp1170 = nctemp1157 * nctemp1169;

#line 254  "el2d.e"
int nctemp1179=i;
if((0>i)||(i>=El2d->thetayyy->d[0])){
nctempstring->a="El2d->thetayyy";
nctempstring->d[0]=strlen("El2d->thetayyy")+1;;
LibeArrayex(254,nctempstring,i,0,El2d->thetayyy->d[0]);
}
nctemp1179=j*El2d->thetayyy->d[0]+nctemp1179;
if((0>j)||(j>=El2d->thetayyy->d[1])){
nctempstring->a="El2d->thetayyy";
nctempstring->d[0]=strlen("El2d->thetayyy")+1;;
LibeArrayex(254,nctempstring,j,1,El2d->thetayyy->d[1]);
}
float nctemp1182 = Model->Dt * El2d->thetayyy->a[nctemp1179];
int nctemp1184=i;
if((0>i)||(i>=Model->Drhopy->d[0])){
nctempstring->a="Model->Drhopy";
nctempstring->d[0]=strlen("Model->Drhopy")+1;;
LibeArrayex(254,nctempstring,i,0,Model->Drhopy->d[0]);
}
nctemp1184=j*Model->Drhopy->d[0]+nctemp1184;
if((0>j)||(j>=Model->Drhopy->d[1])){
nctempstring->a="Model->Drhopy";
nctempstring->d[0]=strlen("Model->Drhopy")+1;;
LibeArrayex(254,nctempstring,j,1,Model->Drhopy->d[1]);
}
float nctemp1187 = nctemp1182 * Model->Drhopy->a[nctemp1184];
float nctemp1188 = nctemp1170 + nctemp1187;

#line 255  "el2d.e"
int nctemp1197=i;
if((0>i)||(i>=El2d->thetaxyx->d[0])){
nctempstring->a="El2d->thetaxyx";
nctempstring->d[0]=strlen("El2d->thetaxyx")+1;;
LibeArrayex(255,nctempstring,i,0,El2d->thetaxyx->d[0]);
}
nctemp1197=j*El2d->thetaxyx->d[0]+nctemp1197;
if((0>j)||(j>=El2d->thetaxyx->d[1])){
nctempstring->a="El2d->thetaxyx";
nctempstring->d[0]=strlen("El2d->thetaxyx")+1;;
LibeArrayex(255,nctempstring,j,1,El2d->thetaxyx->d[1]);
}
float nctemp1200 = Model->Dt * El2d->thetaxyx->a[nctemp1197];
int nctemp1202=i;
if((0>i)||(i>=Model->Drhopx->d[0])){
nctempstring->a="Model->Drhopx";
nctempstring->d[0]=strlen("Model->Drhopx")+1;;
LibeArrayex(255,nctempstring,i,0,Model->Drhopx->d[0]);
}
nctemp1202=j*Model->Drhopx->d[0]+nctemp1202;
if((0>j)||(j>=Model->Drhopx->d[1])){
nctempstring->a="Model->Drhopx";
nctempstring->d[0]=strlen("Model->Drhopx")+1;;
LibeArrayex(255,nctempstring,j,1,Model->Drhopx->d[1]);
}
float nctemp1205 = nctemp1200 * Model->Drhopx->a[nctemp1202];
float nctemp1206 = nctemp1188 + nctemp1205;

#line 256  "el2d.e"
int nctemp1208=i;
if((0>i)||(i>=El2d->vy->d[0])){
nctempstring->a="El2d->vy";
nctempstring->d[0]=strlen("El2d->vy")+1;;
LibeArrayex(256,nctempstring,i,0,El2d->vy->d[0]);
}
nctemp1208=j*El2d->vy->d[0]+nctemp1208;
if((0>j)||(j>=El2d->vy->d[1])){
nctempstring->a="El2d->vy";
nctempstring->d[0]=strlen("El2d->vy")+1;;
LibeArrayex(256,nctempstring,j,1,El2d->vy->d[1]);
}
float nctemp1211 = nctemp1206 + El2d->vy->a[nctemp1208];

#line 253  "el2d.e"
El2d->vy->a[nctemp1134] =nctemp1211;

#line 258  "el2d.e"
int nctemp1215=i;
if((0>i)||(i>=El2d->thetayyy->d[0])){
nctempstring->a="El2d->thetayyy";
nctempstring->d[0]=strlen("El2d->thetayyy")+1;;
LibeArrayex(258,nctempstring,i,0,El2d->thetayyy->d[0]);
}
nctemp1215=j*El2d->thetayyy->d[0]+nctemp1215;
if((0>j)||(j>=El2d->thetayyy->d[1])){
nctempstring->a="El2d->thetayyy";
nctempstring->d[0]=strlen("El2d->thetayyy")+1;;
LibeArrayex(258,nctempstring,j,1,El2d->thetayyy->d[1]);
}
int nctemp1225=i;
if((0>i)||(i>=Model->Eta1y->d[0])){
nctempstring->a="Model->Eta1y";
nctempstring->d[0]=strlen("Model->Eta1y")+1;;
LibeArrayex(258,nctempstring,i,0,Model->Eta1y->d[0]);
}
nctemp1225=j*Model->Eta1y->d[0]+nctemp1225;
if((0>j)||(j>=Model->Eta1y->d[1])){
nctempstring->a="Model->Eta1y";
nctempstring->d[0]=strlen("Model->Eta1y")+1;;
LibeArrayex(258,nctempstring,j,1,Model->Eta1y->d[1]);
}
int nctemp1229=i;
if((0>i)||(i>=El2d->thetayyy->d[0])){
nctempstring->a="El2d->thetayyy";
nctempstring->d[0]=strlen("El2d->thetayyy")+1;;
LibeArrayex(258,nctempstring,i,0,El2d->thetayyy->d[0]);
}
nctemp1229=j*El2d->thetayyy->d[0]+nctemp1229;
if((0>j)||(j>=El2d->thetayyy->d[1])){
nctempstring->a="El2d->thetayyy";
nctempstring->d[0]=strlen("El2d->thetayyy")+1;;
LibeArrayex(258,nctempstring,j,1,El2d->thetayyy->d[1]);
}
float nctemp1232 = Model->Eta1y->a[nctemp1225] * El2d->thetayyy->a[nctemp1229];

#line 259  "el2d.e"
int nctemp1237=i;
if((0>i)||(i>=Model->Eta2y->d[0])){
nctempstring->a="Model->Eta2y";
nctempstring->d[0]=strlen("Model->Eta2y")+1;;
LibeArrayex(259,nctempstring,i,0,Model->Eta2y->d[0]);
}
nctemp1237=j*Model->Eta2y->d[0]+nctemp1237;
if((0>j)||(j>=Model->Eta2y->d[1])){
nctempstring->a="Model->Eta2y";
nctempstring->d[0]=strlen("Model->Eta2y")+1;;
LibeArrayex(259,nctempstring,j,1,Model->Eta2y->d[1]);
}
int nctemp1241=i;
if((0>i)||(i>=El2d->eyy->d[0])){
nctempstring->a="El2d->eyy";
nctempstring->d[0]=strlen("El2d->eyy")+1;;
LibeArrayex(259,nctempstring,i,0,El2d->eyy->d[0]);
}
nctemp1241=j*El2d->eyy->d[0]+nctemp1241;
if((0>j)||(j>=El2d->eyy->d[1])){
nctempstring->a="El2d->eyy";
nctempstring->d[0]=strlen("El2d->eyy")+1;;
LibeArrayex(259,nctempstring,j,1,El2d->eyy->d[1]);
}
float nctemp1244 = Model->Eta2y->a[nctemp1237] * El2d->eyy->a[nctemp1241];
float nctemp1245 = nctemp1232 + nctemp1244;

#line 258  "el2d.e"
El2d->thetayyy->a[nctemp1215] =nctemp1245;

#line 260  "el2d.e"
int nctemp1249=i;
if((0>i)||(i>=El2d->thetaxyx->d[0])){
nctempstring->a="El2d->thetaxyx";
nctempstring->d[0]=strlen("El2d->thetaxyx")+1;;
LibeArrayex(260,nctempstring,i,0,El2d->thetaxyx->d[0]);
}
nctemp1249=j*El2d->thetaxyx->d[0]+nctemp1249;
if((0>j)||(j>=El2d->thetaxyx->d[1])){
nctempstring->a="El2d->thetaxyx";
nctempstring->d[0]=strlen("El2d->thetaxyx")+1;;
LibeArrayex(260,nctempstring,j,1,El2d->thetaxyx->d[1]);
}
int nctemp1259=i;
if((0>i)||(i>=Model->Eta1x->d[0])){
nctempstring->a="Model->Eta1x";
nctempstring->d[0]=strlen("Model->Eta1x")+1;;
LibeArrayex(260,nctempstring,i,0,Model->Eta1x->d[0]);
}
nctemp1259=j*Model->Eta1x->d[0]+nctemp1259;
if((0>j)||(j>=Model->Eta1x->d[1])){
nctempstring->a="Model->Eta1x";
nctempstring->d[0]=strlen("Model->Eta1x")+1;;
LibeArrayex(260,nctempstring,j,1,Model->Eta1x->d[1]);
}
int nctemp1263=i;
if((0>i)||(i>=El2d->thetaxyx->d[0])){
nctempstring->a="El2d->thetaxyx";
nctempstring->d[0]=strlen("El2d->thetaxyx")+1;;
LibeArrayex(260,nctempstring,i,0,El2d->thetaxyx->d[0]);
}
nctemp1263=j*El2d->thetaxyx->d[0]+nctemp1263;
if((0>j)||(j>=El2d->thetaxyx->d[1])){
nctempstring->a="El2d->thetaxyx";
nctempstring->d[0]=strlen("El2d->thetaxyx")+1;;
LibeArrayex(260,nctempstring,j,1,El2d->thetaxyx->d[1]);
}
float nctemp1266 = Model->Eta1x->a[nctemp1259] * El2d->thetaxyx->a[nctemp1263];

#line 261  "el2d.e"
int nctemp1271=i;
if((0>i)||(i>=Model->Eta2x->d[0])){
nctempstring->a="Model->Eta2x";
nctempstring->d[0]=strlen("Model->Eta2x")+1;;
LibeArrayex(261,nctempstring,i,0,Model->Eta2x->d[0]);
}
nctemp1271=j*Model->Eta2x->d[0]+nctemp1271;
if((0>j)||(j>=Model->Eta2x->d[1])){
nctempstring->a="Model->Eta2x";
nctempstring->d[0]=strlen("Model->Eta2x")+1;;
LibeArrayex(261,nctempstring,j,1,Model->Eta2x->d[1]);
}
int nctemp1275=i;
if((0>i)||(i>=El2d->eyx->d[0])){
nctempstring->a="El2d->eyx";
nctempstring->d[0]=strlen("El2d->eyx")+1;;
LibeArrayex(261,nctempstring,i,0,El2d->eyx->d[0]);
}
nctemp1275=j*El2d->eyx->d[0]+nctemp1275;
if((0>j)||(j>=El2d->eyx->d[1])){
nctempstring->a="El2d->eyx";
nctempstring->d[0]=strlen("El2d->eyx")+1;;
LibeArrayex(261,nctempstring,j,1,El2d->eyx->d[1]);
}
float nctemp1278 = Model->Eta2x->a[nctemp1271] * El2d->eyx->a[nctemp1275];
float nctemp1279 = nctemp1266 + nctemp1278;

#line 260  "el2d.e"
El2d->thetaxyx->a[nctemp1249] =nctemp1279;

#line 252  "el2d.e"
}
}}
#line 242  "el2d.e"
}

#line 269  "el2d.e"
int El2dexy (struct el2d* El2d,struct model* Model,nctempfloat2 *tmp1,nctempfloat2 *tmp2)

#line 271  "el2d.e"
{

#line 272  "el2d.e"
int nx;
int ny;
int i;
int j;

#line 275  "el2d.e"
nx =Model->Nx;

#line 276  "el2d.e"
ny =Model->Ny;

 #pragma omp parallel for

#line 278  "el2d.e"
for(j=0;j<ny;j=j+1){for(i=0;i<nx;i=i+1){{

#line 279  "el2d.e"
int nctemp1295=i;
if((0>i)||(i>=El2d->exy->d[0])){
nctempstring->a="El2d->exy";
nctempstring->d[0]=strlen("El2d->exy")+1;;
LibeArrayex(279,nctempstring,i,0,El2d->exy->d[0]);
}
nctemp1295=j*El2d->exy->d[0]+nctemp1295;
if((0>j)||(j>=El2d->exy->d[1])){
nctempstring->a="El2d->exy";
nctempstring->d[0]=strlen("El2d->exy")+1;;
LibeArrayex(279,nctempstring,j,1,El2d->exy->d[1]);
}
int nctemp1306=i;
if((0>i)||(i>=tmp1->d[0])){
nctempstring->a="tmp1";
nctempstring->d[0]=strlen("tmp1")+1;;
LibeArrayex(279,nctempstring,i,0,tmp1->d[0]);
}
nctemp1306=j*tmp1->d[0]+nctemp1306;
if((0>j)||(j>=tmp1->d[1])){
nctempstring->a="tmp1";
nctempstring->d[0]=strlen("tmp1")+1;;
LibeArrayex(279,nctempstring,j,1,tmp1->d[1]);
}
int nctemp1310=i;
if((0>i)||(i>=tmp2->d[0])){
nctempstring->a="tmp2";
nctempstring->d[0]=strlen("tmp2")+1;;
LibeArrayex(279,nctempstring,i,0,tmp2->d[0]);
}
nctemp1310=j*tmp2->d[0]+nctemp1310;
if((0>j)||(j>=tmp2->d[1])){
nctempstring->a="tmp2";
nctempstring->d[0]=strlen("tmp2")+1;;
LibeArrayex(279,nctempstring,j,1,tmp2->d[1]);
}
float nctemp1313 = tmp1->a[nctemp1306] + tmp2->a[nctemp1310];
float nctemp1314 = 0.5 * nctemp1313;
El2d->exy->a[nctemp1295] =nctemp1314;

#line 278  "el2d.e"
}
}}
#line 271  "el2d.e"
}

#line 287  "el2d.e"
int El2deyx (struct el2d* El2d,struct model* Model,nctempfloat2 *tmp1,nctempfloat2 *tmp2)

#line 289  "el2d.e"
{

#line 290  "el2d.e"
int nx;
int ny;
int i;
int j;

#line 293  "el2d.e"
nx =Model->Nx;

#line 294  "el2d.e"
ny =Model->Ny;

 #pragma omp parallel for

#line 296  "el2d.e"
for(j=0;j<ny;j=j+1){for(i=0;i<nx;i=i+1){{

#line 297  "el2d.e"
int nctemp1330=i;
if((0>i)||(i>=El2d->eyx->d[0])){
nctempstring->a="El2d->eyx";
nctempstring->d[0]=strlen("El2d->eyx")+1;;
LibeArrayex(297,nctempstring,i,0,El2d->eyx->d[0]);
}
nctemp1330=j*El2d->eyx->d[0]+nctemp1330;
if((0>j)||(j>=El2d->eyx->d[1])){
nctempstring->a="El2d->eyx";
nctempstring->d[0]=strlen("El2d->eyx")+1;;
LibeArrayex(297,nctempstring,j,1,El2d->eyx->d[1]);
}
int nctemp1341=i;
if((0>i)||(i>=tmp1->d[0])){
nctempstring->a="tmp1";
nctempstring->d[0]=strlen("tmp1")+1;;
LibeArrayex(297,nctempstring,i,0,tmp1->d[0]);
}
nctemp1341=j*tmp1->d[0]+nctemp1341;
if((0>j)||(j>=tmp1->d[1])){
nctempstring->a="tmp1";
nctempstring->d[0]=strlen("tmp1")+1;;
LibeArrayex(297,nctempstring,j,1,tmp1->d[1]);
}
int nctemp1345=i;
if((0>i)||(i>=tmp2->d[0])){
nctempstring->a="tmp2";
nctempstring->d[0]=strlen("tmp2")+1;;
LibeArrayex(297,nctempstring,i,0,tmp2->d[0]);
}
nctemp1345=j*tmp2->d[0]+nctemp1345;
if((0>j)||(j>=tmp2->d[1])){
nctempstring->a="tmp2";
nctempstring->d[0]=strlen("tmp2")+1;;
LibeArrayex(297,nctempstring,j,1,tmp2->d[1]);
}
float nctemp1348 = tmp1->a[nctemp1341] + tmp2->a[nctemp1345];
float nctemp1349 = 0.5 * nctemp1348;
El2d->eyx->a[nctemp1330] =nctemp1349;

#line 296  "el2d.e"
}
}}
#line 289  "el2d.e"
}

#line 305  "el2d.e"
int El2dstress (struct el2d* El2d,struct model* Model)
{

#line 306  "el2d.e"
int nx;
int ny;
int i;
int j;
int l;

#line 309  "el2d.e"
nx =Model->Nx;

#line 310  "el2d.e"
ny =Model->Ny;

 #pragma omp parallel for

#line 312  "el2d.e"
for(j=0;j<ny;j=j+1){for(i=0;i<nx;i=i+1){{

#line 313  "el2d.e"
int nctemp1365=i;
if((0>i)||(i>=El2d->sigmaxx->d[0])){
nctempstring->a="El2d->sigmaxx";
nctempstring->d[0]=strlen("El2d->sigmaxx")+1;;
LibeArrayex(313,nctempstring,i,0,El2d->sigmaxx->d[0]);
}
nctemp1365=j*El2d->sigmaxx->d[0]+nctemp1365;
if((0>j)||(j>=El2d->sigmaxx->d[1])){
nctempstring->a="El2d->sigmaxx";
nctempstring->d[0]=strlen("El2d->sigmaxx")+1;;
LibeArrayex(313,nctempstring,j,1,El2d->sigmaxx->d[1]);
}
int nctemp1388=i;
if((0>i)||(i>=Model->Lambda->d[0])){
nctempstring->a="Model->Lambda";
nctempstring->d[0]=strlen("Model->Lambda")+1;;
LibeArrayex(313,nctempstring,i,0,Model->Lambda->d[0]);
}
nctemp1388=j*Model->Lambda->d[0]+nctemp1388;
if((0>j)||(j>=Model->Lambda->d[1])){
nctempstring->a="Model->Lambda";
nctempstring->d[0]=strlen("Model->Lambda")+1;;
LibeArrayex(313,nctempstring,j,1,Model->Lambda->d[1]);
}
float nctemp1391 = Model->Dt * Model->Lambda->a[nctemp1388];
int nctemp1396=i;
if((0>i)||(i>=El2d->exx->d[0])){
nctempstring->a="El2d->exx";
nctempstring->d[0]=strlen("El2d->exx")+1;;
LibeArrayex(313,nctempstring,i,0,El2d->exx->d[0]);
}
nctemp1396=j*El2d->exx->d[0]+nctemp1396;
if((0>j)||(j>=El2d->exx->d[1])){
nctempstring->a="El2d->exx";
nctempstring->d[0]=strlen("El2d->exx")+1;;
LibeArrayex(313,nctempstring,j,1,El2d->exx->d[1]);
}

#line 314  "el2d.e"
int nctemp1400=i;
if((0>i)||(i>=El2d->eyy->d[0])){
nctempstring->a="El2d->eyy";
nctempstring->d[0]=strlen("El2d->eyy")+1;;
LibeArrayex(314,nctempstring,i,0,El2d->eyy->d[0]);
}
nctemp1400=j*El2d->eyy->d[0]+nctemp1400;
if((0>j)||(j>=El2d->eyy->d[1])){
nctempstring->a="El2d->eyy";
nctempstring->d[0]=strlen("El2d->eyy")+1;;
LibeArrayex(314,nctempstring,j,1,El2d->eyy->d[1]);
}
float nctemp1403 = El2d->exx->a[nctemp1396] + El2d->eyy->a[nctemp1400];

#line 313  "el2d.e"
float nctemp1404 = nctemp1391 * nctemp1403;

#line 315  "el2d.e"
float nctemp1416 = 2.0 * Model->Dt;
int nctemp1418=i;
if((0>i)||(i>=Model->Mu->d[0])){
nctempstring->a="Model->Mu";
nctempstring->d[0]=strlen("Model->Mu")+1;;
LibeArrayex(315,nctempstring,i,0,Model->Mu->d[0]);
}
nctemp1418=j*Model->Mu->d[0]+nctemp1418;
if((0>j)||(j>=Model->Mu->d[1])){
nctempstring->a="Model->Mu";
nctempstring->d[0]=strlen("Model->Mu")+1;;
LibeArrayex(315,nctempstring,j,1,Model->Mu->d[1]);
}
float nctemp1421 = nctemp1416 * Model->Mu->a[nctemp1418];
int nctemp1423=i;
if((0>i)||(i>=El2d->exx->d[0])){
nctempstring->a="El2d->exx";
nctempstring->d[0]=strlen("El2d->exx")+1;;
LibeArrayex(315,nctempstring,i,0,El2d->exx->d[0]);
}
nctemp1423=j*El2d->exx->d[0]+nctemp1423;
if((0>j)||(j>=El2d->exx->d[1])){
nctempstring->a="El2d->exx";
nctempstring->d[0]=strlen("El2d->exx")+1;;
LibeArrayex(315,nctempstring,j,1,El2d->exx->d[1]);
}
float nctemp1426 = nctemp1421 * El2d->exx->a[nctemp1423];
float nctemp1427 = nctemp1404 + nctemp1426;

#line 316  "el2d.e"
int nctemp1439=i;
if((0>i)||(i>=El2d->gammaxx->d[0])){
nctempstring->a="El2d->gammaxx";
nctempstring->d[0]=strlen("El2d->gammaxx")+1;;
LibeArrayex(316,nctempstring,i,0,El2d->gammaxx->d[0]);
}
nctemp1439=j*El2d->gammaxx->d[0]+nctemp1439;
if((0>j)||(j>=El2d->gammaxx->d[1])){
nctempstring->a="El2d->gammaxx";
nctempstring->d[0]=strlen("El2d->gammaxx")+1;;
LibeArrayex(316,nctempstring,j,1,El2d->gammaxx->d[1]);
}
int nctemp1443=i;
if((0>i)||(i>=Model->Dlambdax->d[0])){
nctempstring->a="Model->Dlambdax";
nctempstring->d[0]=strlen("Model->Dlambdax")+1;;
LibeArrayex(316,nctempstring,i,0,Model->Dlambdax->d[0]);
}
nctemp1443=j*Model->Dlambdax->d[0]+nctemp1443;
if((0>j)||(j>=Model->Dlambdax->d[1])){
nctempstring->a="Model->Dlambdax";
nctempstring->d[0]=strlen("Model->Dlambdax")+1;;
LibeArrayex(316,nctempstring,j,1,Model->Dlambdax->d[1]);
}
float nctemp1446 = El2d->gammaxx->a[nctemp1439] * Model->Dlambdax->a[nctemp1443];

#line 317  "el2d.e"
int nctemp1451=i;
if((0>i)||(i>=El2d->gammayy->d[0])){
nctempstring->a="El2d->gammayy";
nctempstring->d[0]=strlen("El2d->gammayy")+1;;
LibeArrayex(317,nctempstring,i,0,El2d->gammayy->d[0]);
}
nctemp1451=j*El2d->gammayy->d[0]+nctemp1451;
if((0>j)||(j>=El2d->gammayy->d[1])){
nctempstring->a="El2d->gammayy";
nctempstring->d[0]=strlen("El2d->gammayy")+1;;
LibeArrayex(317,nctempstring,j,1,El2d->gammayy->d[1]);
}
int nctemp1455=i;
if((0>i)||(i>=Model->Dlambday->d[0])){
nctempstring->a="Model->Dlambday";
nctempstring->d[0]=strlen("Model->Dlambday")+1;;
LibeArrayex(317,nctempstring,i,0,Model->Dlambday->d[0]);
}
nctemp1455=j*Model->Dlambday->d[0]+nctemp1455;
if((0>j)||(j>=Model->Dlambday->d[1])){
nctempstring->a="Model->Dlambday";
nctempstring->d[0]=strlen("Model->Dlambday")+1;;
LibeArrayex(317,nctempstring,j,1,Model->Dlambday->d[1]);
}
float nctemp1458 = El2d->gammayy->a[nctemp1451] * Model->Dlambday->a[nctemp1455];
float nctemp1459 = nctemp1446 + nctemp1458;

#line 316  "el2d.e"
float nctemp1460 = Model->Dt * nctemp1459;
float nctemp1461 = nctemp1427 + nctemp1460;

#line 318  "el2d.e"
float nctemp1473 = 2.0 * Model->Dt;
int nctemp1475=i;
if((0>i)||(i>=El2d->gammaxx->d[0])){
nctempstring->a="El2d->gammaxx";
nctempstring->d[0]=strlen("El2d->gammaxx")+1;;
LibeArrayex(318,nctempstring,i,0,El2d->gammaxx->d[0]);
}
nctemp1475=j*El2d->gammaxx->d[0]+nctemp1475;
if((0>j)||(j>=El2d->gammaxx->d[1])){
nctempstring->a="El2d->gammaxx";
nctempstring->d[0]=strlen("El2d->gammaxx")+1;;
LibeArrayex(318,nctempstring,j,1,El2d->gammaxx->d[1]);
}
float nctemp1478 = nctemp1473 * El2d->gammaxx->a[nctemp1475];
int nctemp1480=i;
if((0>i)||(i>=Model->Dmux->d[0])){
nctempstring->a="Model->Dmux";
nctempstring->d[0]=strlen("Model->Dmux")+1;;
LibeArrayex(318,nctempstring,i,0,Model->Dmux->d[0]);
}
nctemp1480=j*Model->Dmux->d[0]+nctemp1480;
if((0>j)||(j>=Model->Dmux->d[1])){
nctempstring->a="Model->Dmux";
nctempstring->d[0]=strlen("Model->Dmux")+1;;
LibeArrayex(318,nctempstring,j,1,Model->Dmux->d[1]);
}
float nctemp1483 = nctemp1478 * Model->Dmux->a[nctemp1480];
float nctemp1484 = nctemp1461 + nctemp1483;

#line 319  "el2d.e"
int nctemp1486=i;
if((0>i)||(i>=El2d->sigmaxx->d[0])){
nctempstring->a="El2d->sigmaxx";
nctempstring->d[0]=strlen("El2d->sigmaxx")+1;;
LibeArrayex(319,nctempstring,i,0,El2d->sigmaxx->d[0]);
}
nctemp1486=j*El2d->sigmaxx->d[0]+nctemp1486;
if((0>j)||(j>=El2d->sigmaxx->d[1])){
nctempstring->a="El2d->sigmaxx";
nctempstring->d[0]=strlen("El2d->sigmaxx")+1;;
LibeArrayex(319,nctempstring,j,1,El2d->sigmaxx->d[1]);
}
float nctemp1489 = nctemp1484 + El2d->sigmaxx->a[nctemp1486];

#line 313  "el2d.e"
El2d->sigmaxx->a[nctemp1365] =nctemp1489;

#line 322  "el2d.e"
int nctemp1493=i;
if((0>i)||(i>=El2d->sigmayy->d[0])){
nctempstring->a="El2d->sigmayy";
nctempstring->d[0]=strlen("El2d->sigmayy")+1;;
LibeArrayex(322,nctempstring,i,0,El2d->sigmayy->d[0]);
}
nctemp1493=j*El2d->sigmayy->d[0]+nctemp1493;
if((0>j)||(j>=El2d->sigmayy->d[1])){
nctempstring->a="El2d->sigmayy";
nctempstring->d[0]=strlen("El2d->sigmayy")+1;;
LibeArrayex(322,nctempstring,j,1,El2d->sigmayy->d[1]);
}
int nctemp1516=i;
if((0>i)||(i>=Model->Lambda->d[0])){
nctempstring->a="Model->Lambda";
nctempstring->d[0]=strlen("Model->Lambda")+1;;
LibeArrayex(322,nctempstring,i,0,Model->Lambda->d[0]);
}
nctemp1516=j*Model->Lambda->d[0]+nctemp1516;
if((0>j)||(j>=Model->Lambda->d[1])){
nctempstring->a="Model->Lambda";
nctempstring->d[0]=strlen("Model->Lambda")+1;;
LibeArrayex(322,nctempstring,j,1,Model->Lambda->d[1]);
}
float nctemp1519 = Model->Dt * Model->Lambda->a[nctemp1516];
int nctemp1524=i;
if((0>i)||(i>=El2d->exx->d[0])){
nctempstring->a="El2d->exx";
nctempstring->d[0]=strlen("El2d->exx")+1;;
LibeArrayex(322,nctempstring,i,0,El2d->exx->d[0]);
}
nctemp1524=j*El2d->exx->d[0]+nctemp1524;
if((0>j)||(j>=El2d->exx->d[1])){
nctempstring->a="El2d->exx";
nctempstring->d[0]=strlen("El2d->exx")+1;;
LibeArrayex(322,nctempstring,j,1,El2d->exx->d[1]);
}

#line 323  "el2d.e"
int nctemp1528=i;
if((0>i)||(i>=El2d->eyy->d[0])){
nctempstring->a="El2d->eyy";
nctempstring->d[0]=strlen("El2d->eyy")+1;;
LibeArrayex(323,nctempstring,i,0,El2d->eyy->d[0]);
}
nctemp1528=j*El2d->eyy->d[0]+nctemp1528;
if((0>j)||(j>=El2d->eyy->d[1])){
nctempstring->a="El2d->eyy";
nctempstring->d[0]=strlen("El2d->eyy")+1;;
LibeArrayex(323,nctempstring,j,1,El2d->eyy->d[1]);
}
float nctemp1531 = El2d->exx->a[nctemp1524] + El2d->eyy->a[nctemp1528];

#line 322  "el2d.e"
float nctemp1532 = nctemp1519 * nctemp1531;

#line 324  "el2d.e"
float nctemp1544 = 2.0 * Model->Dt;
int nctemp1546=i;
if((0>i)||(i>=Model->Mu->d[0])){
nctempstring->a="Model->Mu";
nctempstring->d[0]=strlen("Model->Mu")+1;;
LibeArrayex(324,nctempstring,i,0,Model->Mu->d[0]);
}
nctemp1546=j*Model->Mu->d[0]+nctemp1546;
if((0>j)||(j>=Model->Mu->d[1])){
nctempstring->a="Model->Mu";
nctempstring->d[0]=strlen("Model->Mu")+1;;
LibeArrayex(324,nctempstring,j,1,Model->Mu->d[1]);
}
float nctemp1549 = nctemp1544 * Model->Mu->a[nctemp1546];
int nctemp1551=i;
if((0>i)||(i>=El2d->eyy->d[0])){
nctempstring->a="El2d->eyy";
nctempstring->d[0]=strlen("El2d->eyy")+1;;
LibeArrayex(324,nctempstring,i,0,El2d->eyy->d[0]);
}
nctemp1551=j*El2d->eyy->d[0]+nctemp1551;
if((0>j)||(j>=El2d->eyy->d[1])){
nctempstring->a="El2d->eyy";
nctempstring->d[0]=strlen("El2d->eyy")+1;;
LibeArrayex(324,nctempstring,j,1,El2d->eyy->d[1]);
}
float nctemp1554 = nctemp1549 * El2d->eyy->a[nctemp1551];
float nctemp1555 = nctemp1532 + nctemp1554;

#line 325  "el2d.e"
int nctemp1567=i;
if((0>i)||(i>=El2d->gammaxx->d[0])){
nctempstring->a="El2d->gammaxx";
nctempstring->d[0]=strlen("El2d->gammaxx")+1;;
LibeArrayex(325,nctempstring,i,0,El2d->gammaxx->d[0]);
}
nctemp1567=j*El2d->gammaxx->d[0]+nctemp1567;
if((0>j)||(j>=El2d->gammaxx->d[1])){
nctempstring->a="El2d->gammaxx";
nctempstring->d[0]=strlen("El2d->gammaxx")+1;;
LibeArrayex(325,nctempstring,j,1,El2d->gammaxx->d[1]);
}
int nctemp1571=i;
if((0>i)||(i>=Model->Dlambdax->d[0])){
nctempstring->a="Model->Dlambdax";
nctempstring->d[0]=strlen("Model->Dlambdax")+1;;
LibeArrayex(325,nctempstring,i,0,Model->Dlambdax->d[0]);
}
nctemp1571=j*Model->Dlambdax->d[0]+nctemp1571;
if((0>j)||(j>=Model->Dlambdax->d[1])){
nctempstring->a="Model->Dlambdax";
nctempstring->d[0]=strlen("Model->Dlambdax")+1;;
LibeArrayex(325,nctempstring,j,1,Model->Dlambdax->d[1]);
}
float nctemp1574 = El2d->gammaxx->a[nctemp1567] * Model->Dlambdax->a[nctemp1571];

#line 326  "el2d.e"
int nctemp1579=i;
if((0>i)||(i>=El2d->gammayy->d[0])){
nctempstring->a="El2d->gammayy";
nctempstring->d[0]=strlen("El2d->gammayy")+1;;
LibeArrayex(326,nctempstring,i,0,El2d->gammayy->d[0]);
}
nctemp1579=j*El2d->gammayy->d[0]+nctemp1579;
if((0>j)||(j>=El2d->gammayy->d[1])){
nctempstring->a="El2d->gammayy";
nctempstring->d[0]=strlen("El2d->gammayy")+1;;
LibeArrayex(326,nctempstring,j,1,El2d->gammayy->d[1]);
}
int nctemp1583=i;
if((0>i)||(i>=Model->Dlambday->d[0])){
nctempstring->a="Model->Dlambday";
nctempstring->d[0]=strlen("Model->Dlambday")+1;;
LibeArrayex(326,nctempstring,i,0,Model->Dlambday->d[0]);
}
nctemp1583=j*Model->Dlambday->d[0]+nctemp1583;
if((0>j)||(j>=Model->Dlambday->d[1])){
nctempstring->a="Model->Dlambday";
nctempstring->d[0]=strlen("Model->Dlambday")+1;;
LibeArrayex(326,nctempstring,j,1,Model->Dlambday->d[1]);
}
float nctemp1586 = El2d->gammayy->a[nctemp1579] * Model->Dlambday->a[nctemp1583];
float nctemp1587 = nctemp1574 + nctemp1586;

#line 325  "el2d.e"
float nctemp1588 = Model->Dt * nctemp1587;
float nctemp1589 = nctemp1555 + nctemp1588;

#line 327  "el2d.e"
float nctemp1601 = 2.0 * Model->Dt;
int nctemp1603=i;
if((0>i)||(i>=El2d->gammayy->d[0])){
nctempstring->a="El2d->gammayy";
nctempstring->d[0]=strlen("El2d->gammayy")+1;;
LibeArrayex(327,nctempstring,i,0,El2d->gammayy->d[0]);
}
nctemp1603=j*El2d->gammayy->d[0]+nctemp1603;
if((0>j)||(j>=El2d->gammayy->d[1])){
nctempstring->a="El2d->gammayy";
nctempstring->d[0]=strlen("El2d->gammayy")+1;;
LibeArrayex(327,nctempstring,j,1,El2d->gammayy->d[1]);
}
float nctemp1606 = nctemp1601 * El2d->gammayy->a[nctemp1603];
int nctemp1608=i;
if((0>i)||(i>=Model->Dmuy->d[0])){
nctempstring->a="Model->Dmuy";
nctempstring->d[0]=strlen("Model->Dmuy")+1;;
LibeArrayex(327,nctempstring,i,0,Model->Dmuy->d[0]);
}
nctemp1608=j*Model->Dmuy->d[0]+nctemp1608;
if((0>j)||(j>=Model->Dmuy->d[1])){
nctempstring->a="Model->Dmuy";
nctempstring->d[0]=strlen("Model->Dmuy")+1;;
LibeArrayex(327,nctempstring,j,1,Model->Dmuy->d[1]);
}
float nctemp1611 = nctemp1606 * Model->Dmuy->a[nctemp1608];
float nctemp1612 = nctemp1589 + nctemp1611;

#line 328  "el2d.e"
int nctemp1614=i;
if((0>i)||(i>=El2d->sigmayy->d[0])){
nctempstring->a="El2d->sigmayy";
nctempstring->d[0]=strlen("El2d->sigmayy")+1;;
LibeArrayex(328,nctempstring,i,0,El2d->sigmayy->d[0]);
}
nctemp1614=j*El2d->sigmayy->d[0]+nctemp1614;
if((0>j)||(j>=El2d->sigmayy->d[1])){
nctempstring->a="El2d->sigmayy";
nctempstring->d[0]=strlen("El2d->sigmayy")+1;;
LibeArrayex(328,nctempstring,j,1,El2d->sigmayy->d[1]);
}
float nctemp1617 = nctemp1612 + El2d->sigmayy->a[nctemp1614];

#line 322  "el2d.e"
El2d->sigmayy->a[nctemp1493] =nctemp1617;

#line 330  "el2d.e"
int nctemp1621=i;
if((0>i)||(i>=El2d->sigmaxy->d[0])){
nctempstring->a="El2d->sigmaxy";
nctempstring->d[0]=strlen("El2d->sigmaxy")+1;;
LibeArrayex(330,nctempstring,i,0,El2d->sigmaxy->d[0]);
}
nctemp1621=j*El2d->sigmaxy->d[0]+nctemp1621;
if((0>j)||(j>=El2d->sigmaxy->d[1])){
nctempstring->a="El2d->sigmaxy";
nctempstring->d[0]=strlen("El2d->sigmaxy")+1;;
LibeArrayex(330,nctempstring,j,1,El2d->sigmaxy->d[1]);
}
float nctemp1641 = 2.0 * Model->Dt;
int nctemp1643=i;
if((0>i)||(i>=Model->Mu->d[0])){
nctempstring->a="Model->Mu";
nctempstring->d[0]=strlen("Model->Mu")+1;;
LibeArrayex(330,nctempstring,i,0,Model->Mu->d[0]);
}
nctemp1643=j*Model->Mu->d[0]+nctemp1643;
if((0>j)||(j>=Model->Mu->d[1])){
nctempstring->a="Model->Mu";
nctempstring->d[0]=strlen("Model->Mu")+1;;
LibeArrayex(330,nctempstring,j,1,Model->Mu->d[1]);
}
float nctemp1646 = nctemp1641 * Model->Mu->a[nctemp1643];
int nctemp1648=i;
if((0>i)||(i>=El2d->exy->d[0])){
nctempstring->a="El2d->exy";
nctempstring->d[0]=strlen("El2d->exy")+1;;
LibeArrayex(330,nctempstring,i,0,El2d->exy->d[0]);
}
nctemp1648=j*El2d->exy->d[0]+nctemp1648;
if((0>j)||(j>=El2d->exy->d[1])){
nctempstring->a="El2d->exy";
nctempstring->d[0]=strlen("El2d->exy")+1;;
LibeArrayex(330,nctempstring,j,1,El2d->exy->d[1]);
}
float nctemp1651 = nctemp1646 * El2d->exy->a[nctemp1648];

#line 331  "el2d.e"
float nctemp1663 = 2.0 * Model->Dt;
int nctemp1665=i;
if((0>i)||(i>=El2d->gammaxy->d[0])){
nctempstring->a="El2d->gammaxy";
nctempstring->d[0]=strlen("El2d->gammaxy")+1;;
LibeArrayex(331,nctempstring,i,0,El2d->gammaxy->d[0]);
}
nctemp1665=j*El2d->gammaxy->d[0]+nctemp1665;
if((0>j)||(j>=El2d->gammaxy->d[1])){
nctempstring->a="El2d->gammaxy";
nctempstring->d[0]=strlen("El2d->gammaxy")+1;;
LibeArrayex(331,nctempstring,j,1,El2d->gammaxy->d[1]);
}
float nctemp1668 = nctemp1663 * El2d->gammaxy->a[nctemp1665];
int nctemp1670=i;
if((0>i)||(i>=Model->Dmuy->d[0])){
nctempstring->a="Model->Dmuy";
nctempstring->d[0]=strlen("Model->Dmuy")+1;;
LibeArrayex(331,nctempstring,i,0,Model->Dmuy->d[0]);
}
nctemp1670=j*Model->Dmuy->d[0]+nctemp1670;
if((0>j)||(j>=Model->Dmuy->d[1])){
nctempstring->a="Model->Dmuy";
nctempstring->d[0]=strlen("Model->Dmuy")+1;;
LibeArrayex(331,nctempstring,j,1,Model->Dmuy->d[1]);
}
float nctemp1673 = nctemp1668 * Model->Dmuy->a[nctemp1670];
float nctemp1674 = nctemp1651 + nctemp1673;

#line 332  "el2d.e"
int nctemp1676=i;
if((0>i)||(i>=El2d->sigmaxy->d[0])){
nctempstring->a="El2d->sigmaxy";
nctempstring->d[0]=strlen("El2d->sigmaxy")+1;;
LibeArrayex(332,nctempstring,i,0,El2d->sigmaxy->d[0]);
}
nctemp1676=j*El2d->sigmaxy->d[0]+nctemp1676;
if((0>j)||(j>=El2d->sigmaxy->d[1])){
nctempstring->a="El2d->sigmaxy";
nctempstring->d[0]=strlen("El2d->sigmaxy")+1;;
LibeArrayex(332,nctempstring,j,1,El2d->sigmaxy->d[1]);
}
float nctemp1679 = nctemp1674 + El2d->sigmaxy->a[nctemp1676];

#line 330  "el2d.e"
El2d->sigmaxy->a[nctemp1621] =nctemp1679;

#line 333  "el2d.e"
int nctemp1683=i;
if((0>i)||(i>=El2d->sigmayx->d[0])){
nctempstring->a="El2d->sigmayx";
nctempstring->d[0]=strlen("El2d->sigmayx")+1;;
LibeArrayex(333,nctempstring,i,0,El2d->sigmayx->d[0]);
}
nctemp1683=j*El2d->sigmayx->d[0]+nctemp1683;
if((0>j)||(j>=El2d->sigmayx->d[1])){
nctempstring->a="El2d->sigmayx";
nctempstring->d[0]=strlen("El2d->sigmayx")+1;;
LibeArrayex(333,nctempstring,j,1,El2d->sigmayx->d[1]);
}
float nctemp1703 = 2.0 * Model->Dt;
int nctemp1705=i;
if((0>i)||(i>=Model->Mu->d[0])){
nctempstring->a="Model->Mu";
nctempstring->d[0]=strlen("Model->Mu")+1;;
LibeArrayex(333,nctempstring,i,0,Model->Mu->d[0]);
}
nctemp1705=j*Model->Mu->d[0]+nctemp1705;
if((0>j)||(j>=Model->Mu->d[1])){
nctempstring->a="Model->Mu";
nctempstring->d[0]=strlen("Model->Mu")+1;;
LibeArrayex(333,nctempstring,j,1,Model->Mu->d[1]);
}
float nctemp1708 = nctemp1703 * Model->Mu->a[nctemp1705];
int nctemp1710=i;
if((0>i)||(i>=El2d->exy->d[0])){
nctempstring->a="El2d->exy";
nctempstring->d[0]=strlen("El2d->exy")+1;;
LibeArrayex(333,nctempstring,i,0,El2d->exy->d[0]);
}
nctemp1710=j*El2d->exy->d[0]+nctemp1710;
if((0>j)||(j>=El2d->exy->d[1])){
nctempstring->a="El2d->exy";
nctempstring->d[0]=strlen("El2d->exy")+1;;
LibeArrayex(333,nctempstring,j,1,El2d->exy->d[1]);
}
float nctemp1713 = nctemp1708 * El2d->exy->a[nctemp1710];

#line 334  "el2d.e"
float nctemp1725 = 2.0 * Model->Dt;
int nctemp1727=i;
if((0>i)||(i>=El2d->gammayx->d[0])){
nctempstring->a="El2d->gammayx";
nctempstring->d[0]=strlen("El2d->gammayx")+1;;
LibeArrayex(334,nctempstring,i,0,El2d->gammayx->d[0]);
}
nctemp1727=j*El2d->gammayx->d[0]+nctemp1727;
if((0>j)||(j>=El2d->gammayx->d[1])){
nctempstring->a="El2d->gammayx";
nctempstring->d[0]=strlen("El2d->gammayx")+1;;
LibeArrayex(334,nctempstring,j,1,El2d->gammayx->d[1]);
}
float nctemp1730 = nctemp1725 * El2d->gammayx->a[nctemp1727];
int nctemp1732=i;
if((0>i)||(i>=Model->Dmux->d[0])){
nctempstring->a="Model->Dmux";
nctempstring->d[0]=strlen("Model->Dmux")+1;;
LibeArrayex(334,nctempstring,i,0,Model->Dmux->d[0]);
}
nctemp1732=j*Model->Dmux->d[0]+nctemp1732;
if((0>j)||(j>=Model->Dmux->d[1])){
nctempstring->a="Model->Dmux";
nctempstring->d[0]=strlen("Model->Dmux")+1;;
LibeArrayex(334,nctempstring,j,1,Model->Dmux->d[1]);
}
float nctemp1735 = nctemp1730 * Model->Dmux->a[nctemp1732];
float nctemp1736 = nctemp1713 + nctemp1735;

#line 335  "el2d.e"
int nctemp1738=i;
if((0>i)||(i>=El2d->sigmayx->d[0])){
nctempstring->a="El2d->sigmayx";
nctempstring->d[0]=strlen("El2d->sigmayx")+1;;
LibeArrayex(335,nctempstring,i,0,El2d->sigmayx->d[0]);
}
nctemp1738=j*El2d->sigmayx->d[0]+nctemp1738;
if((0>j)||(j>=El2d->sigmayx->d[1])){
nctempstring->a="El2d->sigmayx";
nctempstring->d[0]=strlen("El2d->sigmayx")+1;;
LibeArrayex(335,nctempstring,j,1,El2d->sigmayx->d[1]);
}
float nctemp1741 = nctemp1736 + El2d->sigmayx->a[nctemp1738];

#line 333  "el2d.e"
El2d->sigmayx->a[nctemp1683] =nctemp1741;

#line 337  "el2d.e"
int nctemp1745=i;
if((0>i)||(i>=El2d->gammaxx->d[0])){
nctempstring->a="El2d->gammaxx";
nctempstring->d[0]=strlen("El2d->gammaxx")+1;;
LibeArrayex(337,nctempstring,i,0,El2d->gammaxx->d[0]);
}
nctemp1745=j*El2d->gammaxx->d[0]+nctemp1745;
if((0>j)||(j>=El2d->gammaxx->d[1])){
nctempstring->a="El2d->gammaxx";
nctempstring->d[0]=strlen("El2d->gammaxx")+1;;
LibeArrayex(337,nctempstring,j,1,El2d->gammaxx->d[1]);
}
int nctemp1755=i;
if((0>i)||(i>=Model->Alpha1x->d[0])){
nctempstring->a="Model->Alpha1x";
nctempstring->d[0]=strlen("Model->Alpha1x")+1;;
LibeArrayex(337,nctempstring,i,0,Model->Alpha1x->d[0]);
}
nctemp1755=j*Model->Alpha1x->d[0]+nctemp1755;
if((0>j)||(j>=Model->Alpha1x->d[1])){
nctempstring->a="Model->Alpha1x";
nctempstring->d[0]=strlen("Model->Alpha1x")+1;;
LibeArrayex(337,nctempstring,j,1,Model->Alpha1x->d[1]);
}
int nctemp1759=i;
if((0>i)||(i>=El2d->gammaxx->d[0])){
nctempstring->a="El2d->gammaxx";
nctempstring->d[0]=strlen("El2d->gammaxx")+1;;
LibeArrayex(337,nctempstring,i,0,El2d->gammaxx->d[0]);
}
nctemp1759=j*El2d->gammaxx->d[0]+nctemp1759;
if((0>j)||(j>=El2d->gammaxx->d[1])){
nctempstring->a="El2d->gammaxx";
nctempstring->d[0]=strlen("El2d->gammaxx")+1;;
LibeArrayex(337,nctempstring,j,1,El2d->gammaxx->d[1]);
}
float nctemp1762 = Model->Alpha1x->a[nctemp1755] * El2d->gammaxx->a[nctemp1759];

#line 338  "el2d.e"
int nctemp1767=i;
if((0>i)||(i>=Model->Alpha2x->d[0])){
nctempstring->a="Model->Alpha2x";
nctempstring->d[0]=strlen("Model->Alpha2x")+1;;
LibeArrayex(338,nctempstring,i,0,Model->Alpha2x->d[0]);
}
nctemp1767=j*Model->Alpha2x->d[0]+nctemp1767;
if((0>j)||(j>=Model->Alpha2x->d[1])){
nctempstring->a="Model->Alpha2x";
nctempstring->d[0]=strlen("Model->Alpha2x")+1;;
LibeArrayex(338,nctempstring,j,1,Model->Alpha2x->d[1]);
}
int nctemp1771=i;
if((0>i)||(i>=El2d->exx->d[0])){
nctempstring->a="El2d->exx";
nctempstring->d[0]=strlen("El2d->exx")+1;;
LibeArrayex(338,nctempstring,i,0,El2d->exx->d[0]);
}
nctemp1771=j*El2d->exx->d[0]+nctemp1771;
if((0>j)||(j>=El2d->exx->d[1])){
nctempstring->a="El2d->exx";
nctempstring->d[0]=strlen("El2d->exx")+1;;
LibeArrayex(338,nctempstring,j,1,El2d->exx->d[1]);
}
float nctemp1774 = Model->Alpha2x->a[nctemp1767] * El2d->exx->a[nctemp1771];
float nctemp1775 = nctemp1762 + nctemp1774;

#line 337  "el2d.e"
El2d->gammaxx->a[nctemp1745] =nctemp1775;

#line 339  "el2d.e"
int nctemp1779=i;
if((0>i)||(i>=El2d->gammayy->d[0])){
nctempstring->a="El2d->gammayy";
nctempstring->d[0]=strlen("El2d->gammayy")+1;;
LibeArrayex(339,nctempstring,i,0,El2d->gammayy->d[0]);
}
nctemp1779=j*El2d->gammayy->d[0]+nctemp1779;
if((0>j)||(j>=El2d->gammayy->d[1])){
nctempstring->a="El2d->gammayy";
nctempstring->d[0]=strlen("El2d->gammayy")+1;;
LibeArrayex(339,nctempstring,j,1,El2d->gammayy->d[1]);
}
int nctemp1789=i;
if((0>i)||(i>=Model->Alpha1y->d[0])){
nctempstring->a="Model->Alpha1y";
nctempstring->d[0]=strlen("Model->Alpha1y")+1;;
LibeArrayex(339,nctempstring,i,0,Model->Alpha1y->d[0]);
}
nctemp1789=j*Model->Alpha1y->d[0]+nctemp1789;
if((0>j)||(j>=Model->Alpha1y->d[1])){
nctempstring->a="Model->Alpha1y";
nctempstring->d[0]=strlen("Model->Alpha1y")+1;;
LibeArrayex(339,nctempstring,j,1,Model->Alpha1y->d[1]);
}
int nctemp1793=i;
if((0>i)||(i>=El2d->gammayy->d[0])){
nctempstring->a="El2d->gammayy";
nctempstring->d[0]=strlen("El2d->gammayy")+1;;
LibeArrayex(339,nctempstring,i,0,El2d->gammayy->d[0]);
}
nctemp1793=j*El2d->gammayy->d[0]+nctemp1793;
if((0>j)||(j>=El2d->gammayy->d[1])){
nctempstring->a="El2d->gammayy";
nctempstring->d[0]=strlen("El2d->gammayy")+1;;
LibeArrayex(339,nctempstring,j,1,El2d->gammayy->d[1]);
}
float nctemp1796 = Model->Alpha1y->a[nctemp1789] * El2d->gammayy->a[nctemp1793];

#line 340  "el2d.e"
int nctemp1801=i;
if((0>i)||(i>=Model->Alpha2y->d[0])){
nctempstring->a="Model->Alpha2y";
nctempstring->d[0]=strlen("Model->Alpha2y")+1;;
LibeArrayex(340,nctempstring,i,0,Model->Alpha2y->d[0]);
}
nctemp1801=j*Model->Alpha2y->d[0]+nctemp1801;
if((0>j)||(j>=Model->Alpha2y->d[1])){
nctempstring->a="Model->Alpha2y";
nctempstring->d[0]=strlen("Model->Alpha2y")+1;;
LibeArrayex(340,nctempstring,j,1,Model->Alpha2y->d[1]);
}
int nctemp1805=i;
if((0>i)||(i>=El2d->eyy->d[0])){
nctempstring->a="El2d->eyy";
nctempstring->d[0]=strlen("El2d->eyy")+1;;
LibeArrayex(340,nctempstring,i,0,El2d->eyy->d[0]);
}
nctemp1805=j*El2d->eyy->d[0]+nctemp1805;
if((0>j)||(j>=El2d->eyy->d[1])){
nctempstring->a="El2d->eyy";
nctempstring->d[0]=strlen("El2d->eyy")+1;;
LibeArrayex(340,nctempstring,j,1,El2d->eyy->d[1]);
}
float nctemp1808 = Model->Alpha2y->a[nctemp1801] * El2d->eyy->a[nctemp1805];
float nctemp1809 = nctemp1796 + nctemp1808;

#line 339  "el2d.e"
El2d->gammayy->a[nctemp1779] =nctemp1809;

#line 341  "el2d.e"
int nctemp1813=i;
if((0>i)||(i>=El2d->gammaxy->d[0])){
nctempstring->a="El2d->gammaxy";
nctempstring->d[0]=strlen("El2d->gammaxy")+1;;
LibeArrayex(341,nctempstring,i,0,El2d->gammaxy->d[0]);
}
nctemp1813=j*El2d->gammaxy->d[0]+nctemp1813;
if((0>j)||(j>=El2d->gammaxy->d[1])){
nctempstring->a="El2d->gammaxy";
nctempstring->d[0]=strlen("El2d->gammaxy")+1;;
LibeArrayex(341,nctempstring,j,1,El2d->gammaxy->d[1]);
}
int nctemp1823=i;
if((0>i)||(i>=Model->Beta1y->d[0])){
nctempstring->a="Model->Beta1y";
nctempstring->d[0]=strlen("Model->Beta1y")+1;;
LibeArrayex(341,nctempstring,i,0,Model->Beta1y->d[0]);
}
nctemp1823=j*Model->Beta1y->d[0]+nctemp1823;
if((0>j)||(j>=Model->Beta1y->d[1])){
nctempstring->a="Model->Beta1y";
nctempstring->d[0]=strlen("Model->Beta1y")+1;;
LibeArrayex(341,nctempstring,j,1,Model->Beta1y->d[1]);
}
int nctemp1827=i;
if((0>i)||(i>=El2d->gammaxy->d[0])){
nctempstring->a="El2d->gammaxy";
nctempstring->d[0]=strlen("El2d->gammaxy")+1;;
LibeArrayex(341,nctempstring,i,0,El2d->gammaxy->d[0]);
}
nctemp1827=j*El2d->gammaxy->d[0]+nctemp1827;
if((0>j)||(j>=El2d->gammaxy->d[1])){
nctempstring->a="El2d->gammaxy";
nctempstring->d[0]=strlen("El2d->gammaxy")+1;;
LibeArrayex(341,nctempstring,j,1,El2d->gammaxy->d[1]);
}
float nctemp1830 = Model->Beta1y->a[nctemp1823] * El2d->gammaxy->a[nctemp1827];

#line 342  "el2d.e"
int nctemp1835=i;
if((0>i)||(i>=Model->Beta2y->d[0])){
nctempstring->a="Model->Beta2y";
nctempstring->d[0]=strlen("Model->Beta2y")+1;;
LibeArrayex(342,nctempstring,i,0,Model->Beta2y->d[0]);
}
nctemp1835=j*Model->Beta2y->d[0]+nctemp1835;
if((0>j)||(j>=Model->Beta2y->d[1])){
nctempstring->a="Model->Beta2y";
nctempstring->d[0]=strlen("Model->Beta2y")+1;;
LibeArrayex(342,nctempstring,j,1,Model->Beta2y->d[1]);
}
int nctemp1839=i;
if((0>i)||(i>=El2d->exy->d[0])){
nctempstring->a="El2d->exy";
nctempstring->d[0]=strlen("El2d->exy")+1;;
LibeArrayex(342,nctempstring,i,0,El2d->exy->d[0]);
}
nctemp1839=j*El2d->exy->d[0]+nctemp1839;
if((0>j)||(j>=El2d->exy->d[1])){
nctempstring->a="El2d->exy";
nctempstring->d[0]=strlen("El2d->exy")+1;;
LibeArrayex(342,nctempstring,j,1,El2d->exy->d[1]);
}
float nctemp1842 = Model->Beta2y->a[nctemp1835] * El2d->exy->a[nctemp1839];
float nctemp1843 = nctemp1830 + nctemp1842;

#line 341  "el2d.e"
El2d->gammaxy->a[nctemp1813] =nctemp1843;

#line 343  "el2d.e"
int nctemp1847=i;
if((0>i)||(i>=El2d->gammayx->d[0])){
nctempstring->a="El2d->gammayx";
nctempstring->d[0]=strlen("El2d->gammayx")+1;;
LibeArrayex(343,nctempstring,i,0,El2d->gammayx->d[0]);
}
nctemp1847=j*El2d->gammayx->d[0]+nctemp1847;
if((0>j)||(j>=El2d->gammayx->d[1])){
nctempstring->a="El2d->gammayx";
nctempstring->d[0]=strlen("El2d->gammayx")+1;;
LibeArrayex(343,nctempstring,j,1,El2d->gammayx->d[1]);
}
int nctemp1857=i;
if((0>i)||(i>=Model->Beta1x->d[0])){
nctempstring->a="Model->Beta1x";
nctempstring->d[0]=strlen("Model->Beta1x")+1;;
LibeArrayex(343,nctempstring,i,0,Model->Beta1x->d[0]);
}
nctemp1857=j*Model->Beta1x->d[0]+nctemp1857;
if((0>j)||(j>=Model->Beta1x->d[1])){
nctempstring->a="Model->Beta1x";
nctempstring->d[0]=strlen("Model->Beta1x")+1;;
LibeArrayex(343,nctempstring,j,1,Model->Beta1x->d[1]);
}
int nctemp1861=i;
if((0>i)||(i>=El2d->gammayx->d[0])){
nctempstring->a="El2d->gammayx";
nctempstring->d[0]=strlen("El2d->gammayx")+1;;
LibeArrayex(343,nctempstring,i,0,El2d->gammayx->d[0]);
}
nctemp1861=j*El2d->gammayx->d[0]+nctemp1861;
if((0>j)||(j>=El2d->gammayx->d[1])){
nctempstring->a="El2d->gammayx";
nctempstring->d[0]=strlen("El2d->gammayx")+1;;
LibeArrayex(343,nctempstring,j,1,El2d->gammayx->d[1]);
}
float nctemp1864 = Model->Beta1x->a[nctemp1857] * El2d->gammayx->a[nctemp1861];

#line 344  "el2d.e"
int nctemp1869=i;
if((0>i)||(i>=Model->Beta2x->d[0])){
nctempstring->a="Model->Beta2x";
nctempstring->d[0]=strlen("Model->Beta2x")+1;;
LibeArrayex(344,nctempstring,i,0,Model->Beta2x->d[0]);
}
nctemp1869=j*Model->Beta2x->d[0]+nctemp1869;
if((0>j)||(j>=Model->Beta2x->d[1])){
nctempstring->a="Model->Beta2x";
nctempstring->d[0]=strlen("Model->Beta2x")+1;;
LibeArrayex(344,nctempstring,j,1,Model->Beta2x->d[1]);
}
int nctemp1873=i;
if((0>i)||(i>=El2d->eyx->d[0])){
nctempstring->a="El2d->eyx";
nctempstring->d[0]=strlen("El2d->eyx")+1;;
LibeArrayex(344,nctempstring,i,0,El2d->eyx->d[0]);
}
nctemp1873=j*El2d->eyx->d[0]+nctemp1873;
if((0>j)||(j>=El2d->eyx->d[1])){
nctempstring->a="El2d->eyx";
nctempstring->d[0]=strlen("El2d->eyx")+1;;
LibeArrayex(344,nctempstring,j,1,El2d->eyx->d[1]);
}
float nctemp1876 = Model->Beta2x->a[nctemp1869] * El2d->eyx->a[nctemp1873];
float nctemp1877 = nctemp1864 + nctemp1876;

#line 343  "el2d.e"
El2d->gammayx->a[nctemp1847] =nctemp1877;

#line 312  "el2d.e"
}
}}
#line 305  "el2d.e"
}

#line 353  "el2d.e"
int El2dSnap (struct el2d* El2d,int it)

#line 354  "el2d.e"
{

#line 355  "el2d.e"
int n;
int Nx;
int Ny;
nctempchar1 *tmp;

#line 359  "el2d.e"
int nctemp1878 = (El2d->sresamp <= 0);
if(nctemp1878)
{

#line 360  "el2d.e"
return 1;

#line 359  "el2d.e"
}

#line 362  "el2d.e"
int nctemp1887=El2d->sigmaxx->d[0];Nx =nctemp1887;

#line 363  "el2d.e"
int nctemp1895=El2d->sigmaxx->d[1];Ny =nctemp1895;

#line 364  "el2d.e"
int nctemp1907 = Nx * Ny;
n =nctemp1907;

#line 365  "el2d.e"
int nctemp1911= it;
int nctemp1913= El2d->sresamp;
int nctemp1915=LibeMod(nctemp1911,nctemp1913);
int nctemp1908 = (nctemp1915 ==0);
if(nctemp1908)
{

#line 366  "el2d.e"
int nctemp1920=0;
if((0>0)||(0>=El2d->snpflags->d[0])){
nctempstring->a="El2d->snpflags";
nctempstring->d[0]=strlen("El2d->snpflags")+1;;
LibeArrayex(366,nctempstring,0,0,El2d->snpflags->d[0]);
}
int nctemp1917 = (El2d->snpflags->a[nctemp1920] ==1);
if(nctemp1917)
{

#line 367  "el2d.e"
nctempchar1 nctemp1929;
nctempchar1 *nctemp1928;
nctemp1929=*(nctempchar1*)(El2d->sigmaxx);
int nctemp1936 = 4 * n;
nctemp1929.d[0]=nctemp1936;
nctemp1928=&nctemp1929;
tmp=nctemp1928;

#line 368  "el2d.e"
int nctemp1938= El2d->fdsxx;
int nctemp1945 = 4 * n;
int nctemp1940= nctemp1945;
nctempchar1* nctemp1946= tmp;
int nctemp1949=LibeWrite(nctemp1938,nctemp1940,nctemp1946);

#line 366  "el2d.e"
}

#line 370  "el2d.e"
int nctemp1953=1;
if((0>1)||(1>=El2d->snpflags->d[0])){
nctempstring->a="El2d->snpflags";
nctempstring->d[0]=strlen("El2d->snpflags")+1;;
LibeArrayex(370,nctempstring,1,0,El2d->snpflags->d[0]);
}
int nctemp1950 = (El2d->snpflags->a[nctemp1953] ==1);
if(nctemp1950)
{

#line 371  "el2d.e"
nctempchar1 nctemp1962;
nctempchar1 *nctemp1961;
nctemp1962=*(nctempchar1*)(El2d->sigmayy);
int nctemp1969 = 4 * n;
nctemp1962.d[0]=nctemp1969;
nctemp1961=&nctemp1962;
tmp=nctemp1961;

#line 372  "el2d.e"
int nctemp1971= El2d->fdsyy;
int nctemp1978 = 4 * n;
int nctemp1973= nctemp1978;
nctempchar1* nctemp1979= tmp;
int nctemp1982=LibeWrite(nctemp1971,nctemp1973,nctemp1979);

#line 370  "el2d.e"
}

#line 374  "el2d.e"
int nctemp1986=2;
if((0>2)||(2>=El2d->snpflags->d[0])){
nctempstring->a="El2d->snpflags";
nctempstring->d[0]=strlen("El2d->snpflags")+1;;
LibeArrayex(374,nctempstring,2,0,El2d->snpflags->d[0]);
}
int nctemp1983 = (El2d->snpflags->a[nctemp1986] ==1);
if(nctemp1983)
{

#line 375  "el2d.e"
nctempchar1 nctemp1995;
nctempchar1 *nctemp1994;
nctemp1995=*(nctempchar1*)(El2d->vx);
int nctemp2002 = 4 * n;
nctemp1995.d[0]=nctemp2002;
nctemp1994=&nctemp1995;
tmp=nctemp1994;

#line 376  "el2d.e"
int nctemp2004= El2d->fdvx;
int nctemp2011 = 4 * n;
int nctemp2006= nctemp2011;
nctempchar1* nctemp2012= tmp;
int nctemp2015=LibeWrite(nctemp2004,nctemp2006,nctemp2012);

#line 374  "el2d.e"
}

#line 378  "el2d.e"
int nctemp2019=3;
if((0>3)||(3>=El2d->snpflags->d[0])){
nctempstring->a="El2d->snpflags";
nctempstring->d[0]=strlen("El2d->snpflags")+1;;
LibeArrayex(378,nctempstring,3,0,El2d->snpflags->d[0]);
}
int nctemp2016 = (El2d->snpflags->a[nctemp2019] ==1);
if(nctemp2016)
{

#line 379  "el2d.e"
nctempchar1 nctemp2028;
nctempchar1 *nctemp2027;
nctemp2028=*(nctempchar1*)(El2d->vy);
int nctemp2035 = 4 * n;
nctemp2028.d[0]=nctemp2035;
nctemp2027=&nctemp2028;
tmp=nctemp2027;

#line 380  "el2d.e"
int nctemp2037= El2d->fdvy;
int nctemp2044 = 4 * n;
int nctemp2039= nctemp2044;
nctempchar1* nctemp2045= tmp;
int nctemp2048=LibeWrite(nctemp2037,nctemp2039,nctemp2045);

#line 378  "el2d.e"
}

#line 365  "el2d.e"
}

#line 383  "el2d.e"
return 1;

#line 354  "el2d.e"
}
