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
nctempchar1 * LibeDate ();
struct rec {int nr;
nctempint1 *rx;
nctempint1 *ry;
int fd;
int nt;
nctempfloat2 *p;
nctempfloat2 *sxx;
nctempfloat2 *syy;
nctempfloat2 *sxy;
nctempfloat2 *exx;
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
struct rec* RecNew (nctempint1 *rx,nctempint1 *ry,int nt,int resamp)
{
struct rec* Rec;
{
struct rec *nctemp5=(struct rec*)RunMalloc(sizeof(struct rec));
Rec =nctemp5;
int nctemp11=rx->d[0];Rec->nr =nctemp11;
Rec->rx = rx;
Rec->ry = ry;
Rec->nt = nt;
int nctemp21=Rec->nt;
nctemp21=nctemp21*Rec->nr;
nctempfloat2 *nctemp20;
nctemp20=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp20->d[0]=Rec->nt;
nctemp20->d[1]=Rec->nr;
nctemp20->a=(float *)RunMalloc(sizeof(float)*nctemp21);
Rec->p=nctemp20;
int nctemp32=Rec->nt;
nctemp32=nctemp32*Rec->nr;
nctempfloat2 *nctemp31;
nctemp31=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp31->d[0]=Rec->nt;
nctemp31->d[1]=Rec->nr;
nctemp31->a=(float *)RunMalloc(sizeof(float)*nctemp32);
Rec->vx=nctemp31;
int nctemp43=Rec->nt;
nctemp43=nctemp43*Rec->nr;
nctempfloat2 *nctemp42;
nctemp42=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp42->d[0]=Rec->nt;
nctemp42->d[1]=Rec->nr;
nctemp42->a=(float *)RunMalloc(sizeof(float)*nctemp43);
Rec->vy=nctemp42;
int nctemp54=Rec->nt;
nctemp54=nctemp54*Rec->nr;
nctempfloat2 *nctemp53;
nctemp53=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp53->d[0]=Rec->nt;
nctemp53->d[1]=Rec->nr;
nctemp53->a=(float *)RunMalloc(sizeof(float)*nctemp54);
Rec->exx=nctemp53;
int nctemp65=Rec->nt;
nctemp65=nctemp65*Rec->nr;
nctempfloat2 *nctemp64;
nctemp64=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp64->d[0]=Rec->nt;
nctemp64->d[1]=Rec->nr;
nctemp64->a=(float *)RunMalloc(sizeof(float)*nctemp65);
Rec->sxx=nctemp64;
int nctemp76=Rec->nt;
nctemp76=nctemp76*Rec->nr;
nctempfloat2 *nctemp75;
nctemp75=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp75->d[0]=Rec->nt;
nctemp75->d[1]=Rec->nr;
nctemp75->a=(float *)RunMalloc(sizeof(float)*nctemp76);
Rec->syy=nctemp75;
int nctemp87=Rec->nt;
nctemp87=nctemp87*Rec->nr;
nctempfloat2 *nctemp86;
nctemp86=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp86->d[0]=Rec->nt;
nctemp86->d[1]=Rec->nr;
nctemp86->a=(float *)RunMalloc(sizeof(float)*nctemp87);
Rec->sxy=nctemp86;
Rec->resamp = resamp;
Rec->pit = 0;
return Rec;
}
}
int RecReceiver (struct rec* Rec,int it,nctempfloat2 *field,int dtype)
{
int pos;
int ixr;
int iyr;
{
int nctemp101 = Rec->nt - 1;
int nctemp93 = (Rec->pit > nctemp101);
if(nctemp93)
{
{
return 0;
}
}
int nctemp106= it;
int nctemp108= Rec->resamp;
int nctemp110=LibeMod(nctemp106,nctemp108);
int nctemp103 = (nctemp110 ==0);
if(nctemp103)
{
{
int nctemp115= -1;
int nctemp112 = (dtype ==nctemp115);
if(nctemp112)
{
{
Rec->pit = (Rec->pit + 1);
return 1;
}
}
pos = 0;
for(pos = 0;pos < Rec->nr;pos = (pos + 1)){
{
ixr = Rec->rx->a[pos];
iyr = Rec->ry->a[pos];
int nctemp117 = (dtype ==1);
if(nctemp117)
{
{
Rec->p->a[Rec->pit+Rec->p->d[0]*(pos)] = field->a[ixr+field->d[0]*(iyr)];
}
}
else{
{
int nctemp121 = (dtype ==2);
if(nctemp121)
{
{
Rec->vx->a[Rec->pit+Rec->vx->d[0]*(pos)] = field->a[ixr+field->d[0]*(iyr)];
}
}
else{
{
int nctemp125 = (dtype ==3);
if(nctemp125)
{
{
Rec->vy->a[Rec->pit+Rec->vy->d[0]*(pos)] = field->a[ixr+field->d[0]*(iyr)];
}
}
else{
{
int nctemp129 = (dtype ==4);
if(nctemp129)
{
{
Rec->sxx->a[Rec->pit+Rec->sxx->d[0]*(pos)] = field->a[ixr+field->d[0]*(iyr)];
}
}
else{
{
int nctemp133 = (dtype ==5);
if(nctemp133)
{
{
Rec->syy->a[Rec->pit+Rec->syy->d[0]*(pos)] = field->a[ixr+field->d[0]*(iyr)];
}
}
else{
{
int nctemp137 = (dtype ==6);
if(nctemp137)
{
{
Rec->sxy->a[Rec->pit+Rec->sxy->d[0]*(pos)] = field->a[ixr+field->d[0]*(iyr)];
}
}
else{
{
int nctemp141 = (dtype ==7);
if(nctemp141)
{
{
Rec->exx->a[Rec->pit+Rec->exx->d[0]*(pos)] = field->a[ixr+field->d[0]*(iyr)];
}
}
else{
{
return 0;
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
return 1;
}
}
nctempfloat2 * RecGetrec (struct rec* Rec,int data)
{
{
int nctemp147 = (data ==1);
if(nctemp147)
{
{
return Rec->p;
}
}
else{
{
int nctemp153 = (data ==2);
if(nctemp153)
{
{
return Rec->vx;
}
}
else{
{
int nctemp159 = (data ==3);
if(nctemp159)
{
{
return Rec->vy;
}
}
else{
{
int nctemp165 = (data ==4);
if(nctemp165)
{
{
return Rec->sxx;
}
}
else{
{
int nctemp171 = (data ==5);
if(nctemp171)
{
{
return Rec->syy;
}
}
else{
{
int nctemp177 = (data ==6);
if(nctemp177)
{
{
return Rec->sxy;
}
}
else{
{
int nctemp183 = (data ==7);
if(nctemp183)
{
{
return Rec->exx;
}
}
else{
{
return Rec->p;
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
};