
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

#line 19  "rec.e"
struct rec* RecNew (nctempint1 *rx,nctempint1 *ry,int nt,int resamp)

#line 21  "rec.e"
{

#line 22  "rec.e"
struct rec* Rec;

#line 24  "rec.e"
struct rec *nctemp5=(struct rec*)RunMalloc(sizeof(struct rec));
Rec =nctemp5;

#line 25  "rec.e"
int nctemp11=rx->d[0];Rec->nr =nctemp11;

#line 26  "rec.e"
Rec->rx=rx;

#line 27  "rec.e"
Rec->ry=ry;

#line 28  "rec.e"
Rec->nt =nt;

#line 29  "rec.e"
int nctemp37=Rec->nr;
nctemp37=nctemp37*Rec->nt;
nctempfloat2 *nctemp36;
nctemp36=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp36->d[0]=Rec->nr;
nctemp36->d[1]=Rec->nt;
nctemp36->a=(float *)RunMalloc(sizeof(float)*nctemp37);
Rec->p=nctemp36;

#line 30  "rec.e"
int nctemp48=Rec->nr;
nctemp48=nctemp48*Rec->nt;
nctempfloat2 *nctemp47;
nctemp47=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp47->d[0]=Rec->nr;
nctemp47->d[1]=Rec->nt;
nctemp47->a=(float *)RunMalloc(sizeof(float)*nctemp48);
Rec->sxx=nctemp47;

#line 31  "rec.e"
int nctemp59=Rec->nr;
nctemp59=nctemp59*Rec->nt;
nctempfloat2 *nctemp58;
nctemp58=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp58->d[0]=Rec->nr;
nctemp58->d[1]=Rec->nt;
nctemp58->a=(float *)RunMalloc(sizeof(float)*nctemp59);
Rec->syy=nctemp58;

#line 32  "rec.e"
int nctemp70=Rec->nr;
nctemp70=nctemp70*Rec->nt;
nctempfloat2 *nctemp69;
nctemp69=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp69->d[0]=Rec->nr;
nctemp69->d[1]=Rec->nt;
nctemp69->a=(float *)RunMalloc(sizeof(float)*nctemp70);
Rec->vx=nctemp69;

#line 33  "rec.e"
int nctemp81=Rec->nr;
nctemp81=nctemp81*Rec->nt;
nctempfloat2 *nctemp80;
nctemp80=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp80->d[0]=Rec->nr;
nctemp80->d[1]=Rec->nt;
nctemp80->a=(float *)RunMalloc(sizeof(float)*nctemp81);
Rec->vy=nctemp80;

#line 34  "rec.e"
Rec->resamp =resamp;

#line 35  "rec.e"
Rec->pit =0;

#line 37  "rec.e"
return Rec;

#line 21  "rec.e"
}

#line 51  "rec.e"
int RecReceiver (struct rec* Rec,int it,nctempfloat2 *sxx,nctempfloat2 *syy,nctempfloat2 *vx,nctempfloat2 *vy)

#line 53  "rec.e"
{

#line 54  "rec.e"
int pos;
int ixr;
int iyr;

#line 57  "rec.e"
int nctemp103 = Rec->nt - 1;
int nctemp95 = (Rec->pit > nctemp103);
if(nctemp95)
{
return 0;
}

#line 59  "rec.e"
int nctemp108= it;
int nctemp110= Rec->resamp;
int nctemp112=LibeMod(nctemp108,nctemp110);
int nctemp105 = (nctemp112 ==0);
if(nctemp105)
{

#line 60  "rec.e"
pos =0;
int nctemp118 = (pos < Rec->nr);
while(nctemp118){
{

#line 61  "rec.e"
int nctemp126=pos;
if((0>pos)||(pos>=Rec->rx->d[0])){
nctempstring->a="Rec->rx";
nctempstring->d[0]=strlen("Rec->rx")+1;;
LibeArrayex(61,nctempstring,pos,0,Rec->rx->d[0]);
}
ixr =Rec->rx->a[nctemp126];

#line 62  "rec.e"
int nctemp132=pos;
if((0>pos)||(pos>=Rec->ry->d[0])){
nctempstring->a="Rec->ry";
nctempstring->d[0]=strlen("Rec->ry")+1;;
LibeArrayex(62,nctempstring,pos,0,Rec->ry->d[0]);
}
iyr =Rec->ry->a[nctemp132];

#line 63  "rec.e"
int nctemp137=pos;
if((0>pos)||(pos>=Rec->sxx->d[0])){
nctempstring->a="Rec->sxx";
nctempstring->d[0]=strlen("Rec->sxx")+1;;
LibeArrayex(63,nctempstring,pos,0,Rec->sxx->d[0]);
}
nctemp137=Rec->pit*Rec->sxx->d[0]+nctemp137;
if((0>Rec->pit)||(Rec->pit>=Rec->sxx->d[1])){
nctempstring->a="Rec->sxx";
nctempstring->d[0]=strlen("Rec->sxx")+1;;
LibeArrayex(63,nctempstring,Rec->pit,1,Rec->sxx->d[1]);
}
int nctemp141=ixr;
if((0>ixr)||(ixr>=sxx->d[0])){
nctempstring->a="sxx";
nctempstring->d[0]=strlen("sxx")+1;;
LibeArrayex(63,nctempstring,ixr,0,sxx->d[0]);
}
nctemp141=iyr*sxx->d[0]+nctemp141;
if((0>iyr)||(iyr>=sxx->d[1])){
nctempstring->a="sxx";
nctempstring->d[0]=strlen("sxx")+1;;
LibeArrayex(63,nctempstring,iyr,1,sxx->d[1]);
}
Rec->sxx->a[nctemp137] =sxx->a[nctemp141];

#line 64  "rec.e"
int nctemp147=pos;
if((0>pos)||(pos>=Rec->syy->d[0])){
nctempstring->a="Rec->syy";
nctempstring->d[0]=strlen("Rec->syy")+1;;
LibeArrayex(64,nctempstring,pos,0,Rec->syy->d[0]);
}
nctemp147=Rec->pit*Rec->syy->d[0]+nctemp147;
if((0>Rec->pit)||(Rec->pit>=Rec->syy->d[1])){
nctempstring->a="Rec->syy";
nctempstring->d[0]=strlen("Rec->syy")+1;;
LibeArrayex(64,nctempstring,Rec->pit,1,Rec->syy->d[1]);
}
int nctemp151=ixr;
if((0>ixr)||(ixr>=syy->d[0])){
nctempstring->a="syy";
nctempstring->d[0]=strlen("syy")+1;;
LibeArrayex(64,nctempstring,ixr,0,syy->d[0]);
}
nctemp151=iyr*syy->d[0]+nctemp151;
if((0>iyr)||(iyr>=syy->d[1])){
nctempstring->a="syy";
nctempstring->d[0]=strlen("syy")+1;;
LibeArrayex(64,nctempstring,iyr,1,syy->d[1]);
}
Rec->syy->a[nctemp147] =syy->a[nctemp151];

#line 65  "rec.e"
int nctemp157=pos;
if((0>pos)||(pos>=Rec->vx->d[0])){
nctempstring->a="Rec->vx";
nctempstring->d[0]=strlen("Rec->vx")+1;;
LibeArrayex(65,nctempstring,pos,0,Rec->vx->d[0]);
}
nctemp157=Rec->pit*Rec->vx->d[0]+nctemp157;
if((0>Rec->pit)||(Rec->pit>=Rec->vx->d[1])){
nctempstring->a="Rec->vx";
nctempstring->d[0]=strlen("Rec->vx")+1;;
LibeArrayex(65,nctempstring,Rec->pit,1,Rec->vx->d[1]);
}
int nctemp161=ixr;
if((0>ixr)||(ixr>=vx->d[0])){
nctempstring->a="vx";
nctempstring->d[0]=strlen("vx")+1;;
LibeArrayex(65,nctempstring,ixr,0,vx->d[0]);
}
nctemp161=iyr*vx->d[0]+nctemp161;
if((0>iyr)||(iyr>=vx->d[1])){
nctempstring->a="vx";
nctempstring->d[0]=strlen("vx")+1;;
LibeArrayex(65,nctempstring,iyr,1,vx->d[1]);
}
Rec->vx->a[nctemp157] =vx->a[nctemp161];

#line 66  "rec.e"
int nctemp167=pos;
if((0>pos)||(pos>=Rec->vy->d[0])){
nctempstring->a="Rec->vy";
nctempstring->d[0]=strlen("Rec->vy")+1;;
LibeArrayex(66,nctempstring,pos,0,Rec->vy->d[0]);
}
nctemp167=Rec->pit*Rec->vy->d[0]+nctemp167;
if((0>Rec->pit)||(Rec->pit>=Rec->vy->d[1])){
nctempstring->a="Rec->vy";
nctempstring->d[0]=strlen("Rec->vy")+1;;
LibeArrayex(66,nctempstring,Rec->pit,1,Rec->vy->d[1]);
}
int nctemp171=ixr;
if((0>ixr)||(ixr>=vy->d[0])){
nctempstring->a="vy";
nctempstring->d[0]=strlen("vy")+1;;
LibeArrayex(66,nctempstring,ixr,0,vy->d[0]);
}
nctemp171=iyr*vy->d[0]+nctemp171;
if((0>iyr)||(iyr>=vy->d[1])){
nctempstring->a="vy";
nctempstring->d[0]=strlen("vy")+1;;
LibeArrayex(66,nctempstring,iyr,1,vy->d[1]);
}
Rec->vy->a[nctemp167] =vy->a[nctemp171];

#line 60  "rec.e"
}
int nctemp182 = pos + 1;
pos =nctemp182;
int nctemp183 = (pos < Rec->nr);
nctemp118=nctemp183;
}

#line 68  "rec.e"
int nctemp195 = Rec->pit + 1;
Rec->pit =nctemp195;

#line 59  "rec.e"
}

#line 70  "rec.e"
return 1;

#line 53  "rec.e"
}

#line 72  "rec.e"
nctempfloat2 * RecGetrec (struct rec* Rec,int data)

#line 84  "rec.e"
{

#line 85  "rec.e"
int nctemp197 = (data ==0);
if(nctemp197)
{

#line 86  "rec.e"
return Rec->sxx;

#line 85  "rec.e"
}

#line 87  "rec.e"
else{
int nctemp203 = (data ==1);
if(nctemp203)
{

#line 88  "rec.e"
return Rec->syy;

#line 87  "rec.e"
}

#line 89  "rec.e"
else{
int nctemp209 = (data ==2);
if(nctemp209)
{

#line 90  "rec.e"
return Rec->vx;

#line 89  "rec.e"
}

#line 91  "rec.e"
else{
int nctemp215 = (data ==3);
if(nctemp215)
{

#line 92  "rec.e"
return Rec->vy;

#line 91  "rec.e"
}
}

#line 89  "rec.e"
}

#line 87  "rec.e"
}

#line 84  "rec.e"
}
