/*  Translated by epsc  version today */
#include <stddef.h>
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
nctempfloat2 *Qsx;
nctempfloat2 *Qsy;
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
nctempfloat2 *Nu1x;
nctempfloat2 *Nu1y;
nctempfloat2 *Nu2x;
nctempfloat2 *Nu2y;
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
struct model* ModelNew (nctempfloat2 *vp,nctempfloat2 *vs,nctempfloat2 *rho,nctempfloat2 *Qlx,nctempfloat2 *Qly,nctempfloat2 *Qmx,nctempfloat2 *Qmy,nctempfloat2 *Qpx,nctempfloat2 *Qpy,nctempfloat2 *Qsx,nctempfloat2 *Qsy,float Dx,float Dt,float W0,int Nb,int Rheol);
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
int sresamp;
int pit;
};
typedef struct nctemprec1 {int d[1]; struct rec *a; } nctemprec1;
struct nctemprec2 {int d[2]; struct rec *a; } ;
struct nctemprec3 {int d[3]; struct rec *a; } ;
struct nctemprec4 {int d[4]; struct rec *a; } ;
struct rec* RecNew (nctempint1 *rx,nctempint1 *ry,int nt,int resamp,int sresamp,nctempchar1 *file);
int RecReceiver (struct rec* Rec,int it,nctempfloat2 *sxx,nctempfloat2 *syy,nctempfloat2 *vx,nctempfloat2 *vy);
int RecSave (struct rec* Rec,nctempchar1 *file);
int RecSnap (struct rec* Rec,int it,nctempfloat2 *snp);
struct rec* RecNew (nctempint1 *rx,nctempint1 *ry,int nt,int resamp,int sresamp,nctempchar1 *file)
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
Rec->sresamp =sresamp;
Rec->pit =0;
int nctemp98 = (Rec->sresamp > 0);
if(nctemp98)
{
nctempchar1* nctemp106= file;
struct nctempchar1 *nctemp111;
static struct nctempchar1 nctemp112 = {{ 2}, (char*)"w\0"};
nctemp111=&nctemp112;
nctempchar1* nctemp109= nctemp111;
int nctemp113=LibeOpen(nctemp106,nctemp109);
Rec->fd =nctemp113;
}
return Rec;
}
int RecReceiver (struct rec* Rec,int it,nctempfloat2 *sxx,nctempfloat2 *syy,nctempfloat2 *vx,nctempfloat2 *vy)
{
int pos;
int ixr;
int iyr;
int nctemp123 = Rec->nt - 1;
int nctemp115 = (Rec->pit > nctemp123);
if(nctemp115)
{
return 0;
}
int nctemp128= it;
int nctemp130= Rec->resamp;
int nctemp132=LibeMod(nctemp128,nctemp130);
int nctemp125 = (nctemp132 ==0);
if(nctemp125)
{
pos =0;
int nctemp138 = (pos < Rec->nr);
while(nctemp138){
{
int nctemp146=pos;
ixr =Rec->rx->a[nctemp146];
int nctemp152=pos;
iyr =Rec->ry->a[nctemp152];
int nctemp157=pos;
nctemp157=Rec->pit*Rec->sxx->d[0]+nctemp157;
int nctemp161=ixr;
nctemp161=iyr*sxx->d[0]+nctemp161;
Rec->sxx->a[nctemp157] =sxx->a[nctemp161];
int nctemp167=pos;
nctemp167=Rec->pit*Rec->syy->d[0]+nctemp167;
int nctemp171=ixr;
nctemp171=iyr*syy->d[0]+nctemp171;
Rec->syy->a[nctemp167] =syy->a[nctemp171];
int nctemp177=pos;
nctemp177=Rec->pit*Rec->vx->d[0]+nctemp177;
int nctemp181=ixr;
nctemp181=iyr*vx->d[0]+nctemp181;
Rec->vx->a[nctemp177] =vx->a[nctemp181];
int nctemp187=pos;
nctemp187=Rec->pit*Rec->vy->d[0]+nctemp187;
int nctemp191=ixr;
nctemp191=iyr*vy->d[0]+nctemp191;
Rec->vy->a[nctemp187] =vy->a[nctemp191];
}
int nctemp202 = pos + 1;
pos =nctemp202;
int nctemp203 = (pos < Rec->nr);
nctemp138=nctemp203;
}
int nctemp215 = Rec->pit + 1;
Rec->pit =nctemp215;
}
return 1;
}
int RecSave (struct rec* Rec,nctempchar1 *file)
{
int fd;
int n;
nctempchar1* nctemp221= file;
struct nctempchar1 *nctemp226;
static struct nctempchar1 nctemp227 = {{ 2}, (char*)"w\0"};
nctemp226=&nctemp227;
nctempchar1* nctemp224= nctemp226;
int nctemp228=LibeOpen(nctemp221,nctemp224);
fd =nctemp228;
int nctemp236=Rec->sxx->d[0];int nctemp241=Rec->sxx->d[1];int nctemp245 = nctemp236 * nctemp241;
n =nctemp245;
int nctemp247= fd;
int nctemp254 = 4 * n;
int nctemp249= nctemp254;
nctempchar1 nctemp258;
nctempchar1 *nctemp257;
nctemp258=*(nctempchar1*)(Rec->sxx);
int nctemp265 = 4 * n;
nctemp258.d[0]=nctemp265;
nctemp257=&nctemp258;
nctempchar1* nctemp255= nctemp257;
int nctemp266=LibeWrite(nctemp247,nctemp249,nctemp255);
int nctemp268= fd;
int nctemp270=LibeClose(nctemp268);
return 1;
}
int RecSnap (struct rec* Rec,int it,nctempfloat2 *snp)
{
int n;
int Nx;
int Ny;
nctempchar1 *tmp;
int nctemp272 = (Rec->sresamp <= 0);
if(nctemp272)
{
return 1;
}
int nctemp281=snp->d[0];Nx =nctemp281;
int nctemp289=snp->d[1];Ny =nctemp289;
int nctemp301 = Nx * Ny;
n =nctemp301;
int nctemp305= it;
int nctemp307= Rec->sresamp;
int nctemp309=LibeMod(nctemp305,nctemp307);
int nctemp302 = (nctemp309 ==0);
if(nctemp302)
{
nctempchar1 nctemp317;
nctempchar1 *nctemp316;
nctemp317=*(nctempchar1*)(snp);
int nctemp324 = 4 * n;
nctemp317.d[0]=nctemp324;
nctemp316=&nctemp317;
tmp=nctemp316;
int nctemp326= Rec->fd;
int nctemp333 = 4 * n;
int nctemp328= nctemp333;
nctempchar1* nctemp334= tmp;
int nctemp337=LibeWrite(nctemp326,nctemp328,nctemp334);
}
return 1;
}
