//  Translated by epsc  version December 2021  
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

void *GpuNew(int n);
void *GpuDelete(void *f);
void *GpuError();
void *RunMalloc(int n);
int RunFree(void * );
int RunSync();
int RunGetnt();
int RunGetnb();
int LibeArrayex (int line,nctempchar1 *name,int ival,int index,int bound);
int LibeClearerr ();
int LibeGeterrno ();
nctempchar1* LibeGeterrstr ();
struct MainArg {nctempchar1 *arg;
};
typedef struct nctempMainArg1 {int d[1]; struct MainArg *a; } nctempMainArg1;
struct nctempMainArg2 {int d[2]; struct MainArg *a; } ;
struct nctempMainArg3 {int d[3]; struct MainArg *a; } ;
struct nctempMainArg4 {int d[4]; struct MainArg *a; } ;
int Main (struct nctempMainArg1 *MainArgs);
int LibeInit ();
int LibeDelete ();
int LibeExit ();
nctempchar1* LibeGetenv (nctempchar1 *name);
int LibeOpen (nctempchar1 *name,nctempchar1 *mode);
int LibeClose (int fp);
int LibeGetc (int fp);
int LibeUngetc (int fp);
int LibeGetw (int fp,nctempchar1 *text);
int LibePs (nctempchar1 *s);
int LibePi (int n);
int LibePf (float r);
int LibePutf (int fp,float r,nctempchar1 *form);
int LibePutc (int fp,int c);
int LibePuts (int fp,nctempchar1 *s);
int LibePuti (int fp,int ival);
int LibeRead (int fp,int n,nctempchar1 *array);
int LibeWrite (int fp,int n,nctempchar1 *array);
int LibeSeek (int fp,int pos,int flag);
int LibeFlush (int fp);
int LibeStrlen (nctempchar1 *s);
int LibeStrcmp (nctempchar1 *s,nctempchar1 *t);
int LibeStrev (nctempchar1 *s);
nctempchar1* LibeStrsave (nctempchar1 *s);
int LibeStrcpy (nctempchar1 *s,nctempchar1 *t);
int LibeStrcat (nctempchar1 *s,nctempchar1 *t);
nctempchar1* LibeStradd (nctempchar1 *t,nctempchar1 *s);
int LibeIsalpha (int c);
int LibeIsdigit (int c);
int LibeIsalnum (int c);
int LibeAtoi (nctempchar1 *s);
int LibeItoa (int n,nctempchar1 *s);
int LibeItoh (int n,nctempchar1 *s);
float LibeAtof (nctempchar1 *s);
int LibeFtoa (float f,nctempchar1 *fmt,nctempchar1 *s);
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
int LibeSetnb (int n);
int LibeSetnt (int n);
int LibeGetnb ();
int LibeGetnt ();
int LibeMod (int n,int r);
float LibeSqrt (float x);
float LibeLn (float x);
float LibeExp (float x);
float LibeSin (float x);
float LibeCos (float x);
float LibeTan (float x);
float LibeArcsin (float x);
float LibeArccos (float x);
float LibeArctan (float x);
float LibePow (float base,float exponent);
int LibeSystem (nctempchar1 *cmd);
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
};
typedef struct nctempmodel1 {int d[1]; struct model *a; } nctempmodel1;
struct nctempmodel2 {int d[2]; struct model *a; } ;
struct nctempmodel3 {int d[3]; struct model *a; } ;
struct nctempmodel4 {int d[4]; struct model *a; } ;
struct model* ModelNew (nctempfloat2 *vp,nctempfloat2 *vs,nctempfloat2 *rho,nctempfloat2 *Qlx,nctempfloat2 *Qly,nctempfloat2 *Qmx,nctempfloat2 *Qmy,nctempfloat2 *Qpx,nctempfloat2 *Qpy,float Dx,float Dt,float W0,int Nb,int Rheol);
float ModelStability (struct model* Model);
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
struct rec* RecNew (nctempint1 *rx,nctempint1 *ry,int nt,int resamp);
int RecReceiver (struct rec* Rec,int it,nctempfloat2 *sxx,nctempfloat2 *syy,nctempfloat2 *vx,nctempfloat2 *vy);
int RecSave (struct rec* Rec,nctempchar1 *file);
nctempfloat2* RecGetrec (struct rec* Rec,int dtype);
struct rec* RecNew (nctempint1 *rx,nctempint1 *ry,int nt,int resamp)
{
struct rec* Rec;
struct rec *nctemp5=(struct rec*)RunMalloc(sizeof(struct rec));
Rec =nctemp5;
int nctemp11=rx->d[0];Rec->nr =nctemp11;
Rec->rx=rx;
Rec->ry=ry;
Rec->nt =nt;
int nctemp37=Rec->nr;
nctemp37=nctemp37*Rec->nt;
nctempfloat2 *nctemp36;
nctemp36=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp36->d[0]=Rec->nr;
nctemp36->d[1]=Rec->nt;
nctemp36->a=(float *)RunMalloc(sizeof(float)*nctemp37);
Rec->p=nctemp36;
int nctemp48=Rec->nr;
nctemp48=nctemp48*Rec->nt;
nctempfloat2 *nctemp47;
nctemp47=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp47->d[0]=Rec->nr;
nctemp47->d[1]=Rec->nt;
nctemp47->a=(float *)RunMalloc(sizeof(float)*nctemp48);
Rec->sxx=nctemp47;
int nctemp59=Rec->nr;
nctemp59=nctemp59*Rec->nt;
nctempfloat2 *nctemp58;
nctemp58=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp58->d[0]=Rec->nr;
nctemp58->d[1]=Rec->nt;
nctemp58->a=(float *)RunMalloc(sizeof(float)*nctemp59);
Rec->syy=nctemp58;
int nctemp70=Rec->nr;
nctemp70=nctemp70*Rec->nt;
nctempfloat2 *nctemp69;
nctemp69=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp69->d[0]=Rec->nr;
nctemp69->d[1]=Rec->nt;
nctemp69->a=(float *)RunMalloc(sizeof(float)*nctemp70);
Rec->vx=nctemp69;
int nctemp81=Rec->nr;
nctemp81=nctemp81*Rec->nt;
nctempfloat2 *nctemp80;
nctemp80=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp80->d[0]=Rec->nr;
nctemp80->d[1]=Rec->nt;
nctemp80->a=(float *)RunMalloc(sizeof(float)*nctemp81);
Rec->vy=nctemp80;
Rec->resamp =resamp;
Rec->pit =0;
return Rec;
}
int RecReceiver (struct rec* Rec,int it,nctempfloat2 *sxx,nctempfloat2 *syy,nctempfloat2 *vx,nctempfloat2 *vy)
{
int pos;
int ixr;
int iyr;
int nctemp103 = Rec->nt - 1;
int nctemp95 = (Rec->pit > nctemp103);
if(nctemp95)
{
return 0;
}
int nctemp108= it;
int nctemp110= Rec->resamp;
int nctemp112=LibeMod(nctemp108,nctemp110);
int nctemp105 = (nctemp112 ==0);
if(nctemp105)
{
pos =0;
int nctemp118 = (pos < Rec->nr);
while(nctemp118){
{
int nctemp126=pos;
ixr =Rec->rx->a[nctemp126];
int nctemp132=pos;
iyr =Rec->ry->a[nctemp132];
int nctemp137=pos;
nctemp137=Rec->pit*Rec->sxx->d[0]+nctemp137;
int nctemp141=ixr;
nctemp141=iyr*sxx->d[0]+nctemp141;
Rec->sxx->a[nctemp137] =sxx->a[nctemp141];
int nctemp147=pos;
nctemp147=Rec->pit*Rec->syy->d[0]+nctemp147;
int nctemp151=ixr;
nctemp151=iyr*syy->d[0]+nctemp151;
Rec->syy->a[nctemp147] =syy->a[nctemp151];
int nctemp157=pos;
nctemp157=Rec->pit*Rec->vx->d[0]+nctemp157;
int nctemp161=ixr;
nctemp161=iyr*vx->d[0]+nctemp161;
Rec->vx->a[nctemp157] =vx->a[nctemp161];
int nctemp167=pos;
nctemp167=Rec->pit*Rec->vy->d[0]+nctemp167;
int nctemp171=ixr;
nctemp171=iyr*vy->d[0]+nctemp171;
Rec->vy->a[nctemp167] =vy->a[nctemp171];
}
int nctemp182 = pos + 1;
pos =nctemp182;
int nctemp183 = (pos < Rec->nr);
nctemp118=nctemp183;
}
int nctemp195 = Rec->pit + 1;
Rec->pit =nctemp195;
}
return 1;
}
nctempfloat2 * RecGetrec (struct rec* Rec,int data)
{
int nctemp197 = (data ==0);
if(nctemp197)
{
return Rec->sxx;
}
else{
int nctemp203 = (data ==1);
if(nctemp203)
{
return Rec->syy;
}
else{
int nctemp209 = (data ==2);
if(nctemp209)
{
return Rec->vx;
}
else{
int nctemp215 = (data ==3);
if(nctemp215)
{
return Rec->vy;
}
}
}
}
}
}
