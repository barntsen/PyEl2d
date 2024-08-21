
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

#line 8  "model.e"
struct model* Modelsls (nctempfloat2 *vp,nctempfloat2 *vs,nctempfloat2 *rho,nctempfloat2 *Qlx,nctempfloat2 *Qly,nctempfloat2 *Qmx,nctempfloat2 *Qmy,nctempfloat2 *Qpx,nctempfloat2 *Qpy,float Dx,float Dt,float W0,int Nb);

#line 13  "model.e"
int Modelslscoeffs (nctempfloat2 *Qx,nctempfloat2 *Qy,nctempfloat2 *modx,nctempfloat2 *mody,nctempfloat2 *coeff1x,nctempfloat2 *coeff1y,nctempfloat2 *coeff2x,nctempfloat2 *coeff2y,struct model* Model);

#line 18  "model.e"
int Modeld (nctempfloat1 *d,float dx,int nb);

#line 32  "model.e"
int Modeld (nctempfloat1 *d,float dx,int nb)
{

#line 33  "model.e"
int i;
int n;

#line 35  "model.e"
int nctemp5=d->d[0];n =nctemp5;

#line 37  "model.e"
i =0;
int nctemp13 = (i < n);
while(nctemp13){
{

#line 38  "model.e"
int nctemp20=i;
if((0>i)||(i>=d->d[0])){
nctempstring->a="d";
nctempstring->d[0]=strlen("d")+1;;
LibeArrayex(38,nctempstring,i,0,d->d[0]);
}
d->a[nctemp20] =1.0;

#line 37  "model.e"
}
int nctemp31 = i + 1;
i =nctemp31;
int nctemp32 = (i < n);
nctemp13=nctemp32;
}

#line 43  "model.e"
i =0;
int nctemp40 = (i < nb);
while(nctemp40){
{

#line 44  "model.e"
int nctemp47=i;
if((0>i)||(i>=d->d[0])){
nctempstring->a="d";
nctempstring->d[0]=strlen("d")+1;;
LibeArrayex(44,nctempstring,i,0,d->d[0]);
}
int nctemp53=i;
if((0>i)||(i>=d->d[0])){
nctempstring->a="d";
nctempstring->d[0]=strlen("d")+1;;
LibeArrayex(44,nctempstring,i,0,d->d[0]);
}
float nctemp68=(float)(i);
float nctemp72 = nctemp68 * dx;
float nctemp77=(float)(nb);
float nctemp81 = nctemp77 * dx;
float nctemp82 = nctemp72 / nctemp81;

#line 45  "model.e"
float nctemp87=(float)(i);
float nctemp91 = nctemp87 * dx;
float nctemp92 = nctemp82 * nctemp91;
float nctemp97=(float)(nb);
float nctemp101 = nctemp97 * dx;
float nctemp102 = nctemp92 / nctemp101;

#line 44  "model.e"
float nctemp103 = d->a[nctemp53] * nctemp102;
d->a[nctemp47] =nctemp103;

#line 43  "model.e"
}
int nctemp112 = i + 1;
i =nctemp112;
int nctemp113 = (i < nb);
nctemp40=nctemp113;
}

#line 48  "model.e"
int nctemp128 = n - 1;
int nctemp130 = nctemp128 - nb;
i =nctemp130;
int nctemp131 = (i < n);
while(nctemp131){
{

#line 49  "model.e"
int nctemp138=i;
if((0>i)||(i>=d->d[0])){
nctempstring->a="d";
nctempstring->d[0]=strlen("d")+1;;
LibeArrayex(49,nctempstring,i,0,d->d[0]);
}
int nctemp144=i;
if((0>i)||(i>=d->d[0])){
nctempstring->a="d";
nctempstring->d[0]=strlen("d")+1;;
LibeArrayex(49,nctempstring,i,0,d->d[0]);
}
int nctemp168 = n - 1;
int nctemp170 = nctemp168 - i;
float nctemp159=(float)(nctemp170);
float nctemp172 = nctemp159 * dx;
float nctemp177=(float)(nb);
float nctemp181 = nctemp177 * dx;
float nctemp182 = nctemp172 / nctemp181;

#line 50  "model.e"
int nctemp196 = n - 1;
int nctemp198 = nctemp196 - i;
float nctemp187=(float)(nctemp198);
float nctemp200 = nctemp187 * dx;
float nctemp201 = nctemp182 * nctemp200;
float nctemp206=(float)(nb);
float nctemp210 = nctemp206 * dx;
float nctemp211 = nctemp201 / nctemp210;

#line 49  "model.e"
float nctemp212 = d->a[nctemp144] * nctemp211;
d->a[nctemp138] =nctemp212;

#line 48  "model.e"
}
int nctemp221 = i + 1;
i =nctemp221;
int nctemp222 = (i < n);
nctemp131=nctemp222;
}

#line 52  "model.e"
return 1;

#line 32  "model.e"
}

#line 57  "model.e"
int Modelslscoeffs (nctempfloat2 *Qx,nctempfloat2 *Qy,nctempfloat2 *modx,nctempfloat2 *mody,nctempfloat2 *coeff1x,nctempfloat2 *coeff1y,nctempfloat2 *coeff2x,nctempfloat2 *coeff2y,struct model* Model)

#line 60  "model.e"
{

#line 81  "model.e"
int Nx;
int Ny;
float tau0;
float tauex;
float tauey;
float tausx;
float tausy;
nctempfloat1 *d1;
nctempfloat1 *d2;
float argx;
float argy;
int i;
int j;

#line 90  "model.e"
Nx =Model->Nx;

#line 91  "model.e"
Ny =Model->Ny;

#line 93  "model.e"
int nctemp241=Nx;
nctempfloat1 *nctemp240;
nctemp240=(nctempfloat1*)RunMalloc(sizeof(nctempfloat1));
nctemp240->d[0]=Nx;
nctemp240->a=(float *)RunMalloc(sizeof(float)*nctemp241);
d1=nctemp240;

#line 94  "model.e"
int nctemp250=Ny;
nctempfloat1 *nctemp249;
nctemp249=(nctempfloat1*)RunMalloc(sizeof(nctempfloat1));
nctemp249->d[0]=Ny;
nctemp249->a=(float *)RunMalloc(sizeof(float)*nctemp250);
d2=nctemp249;

#line 95  "model.e"
nctempfloat1* nctemp254= d1;
float nctemp257= Model->Dx;
int nctemp259= Model->Nb;
int nctemp261=Modeld(nctemp254,nctemp257,nctemp259);

#line 96  "model.e"
nctempfloat1* nctemp263= d2;
float nctemp266= Model->Dx;
int nctemp268= Model->Nb;
int nctemp270=Modeld(nctemp263,nctemp266,nctemp268);

#line 97  "model.e"
Model->dx=d1;

#line 98  "model.e"
Model->dy=d2;

#line 101  "model.e"
j =0;
int nctemp287 = (j < Ny);
while(nctemp287){
{

#line 102  "model.e"
i =0;
int nctemp295 = (i < Nx);
while(nctemp295){
{

#line 103  "model.e"
float nctemp307 = 1.0 / Model->W0;
tau0 =nctemp307;

#line 106  "model.e"
int nctemp319=i;
if((0>i)||(i>=Qx->d[0])){
nctempstring->a="Qx";
nctempstring->d[0]=strlen("Qx")+1;;
LibeArrayex(106,nctempstring,i,0,Qx->d[0]);
}
nctemp319=j*Qx->d[0]+nctemp319;
if((0>j)||(j>=Qx->d[1])){
nctempstring->a="Qx";
nctempstring->d[0]=strlen("Qx")+1;;
LibeArrayex(106,nctempstring,j,1,Qx->d[1]);
}
float nctemp322 = tau0 / Qx->a[nctemp319];
int nctemp334=i;
if((0>i)||(i>=Qx->d[0])){
nctempstring->a="Qx";
nctempstring->d[0]=strlen("Qx")+1;;
LibeArrayex(106,nctempstring,i,0,Qx->d[0]);
}
nctemp334=j*Qx->d[0]+nctemp334;
if((0>j)||(j>=Qx->d[1])){
nctempstring->a="Qx";
nctempstring->d[0]=strlen("Qx")+1;;
LibeArrayex(106,nctempstring,j,1,Qx->d[1]);
}
int nctemp338=i;
if((0>i)||(i>=Qx->d[0])){
nctempstring->a="Qx";
nctempstring->d[0]=strlen("Qx")+1;;
LibeArrayex(106,nctempstring,i,0,Qx->d[0]);
}
nctemp338=j*Qx->d[0]+nctemp338;
if((0>j)||(j>=Qx->d[1])){
nctempstring->a="Qx";
nctempstring->d[0]=strlen("Qx")+1;;
LibeArrayex(106,nctempstring,j,1,Qx->d[1]);
}
float nctemp341 = Qx->a[nctemp334] * Qx->a[nctemp338];
float nctemp343 = nctemp341 + 1.0;
float nctemp327= nctemp343;
float nctemp344=LibeSqrt(nctemp327);
float nctemp346 = nctemp344 + 1.0;
float nctemp347 = nctemp322 * nctemp346;
tauex =nctemp347;

#line 107  "model.e"
int nctemp359=i;
if((0>i)||(i>=Qx->d[0])){
nctempstring->a="Qx";
nctempstring->d[0]=strlen("Qx")+1;;
LibeArrayex(107,nctempstring,i,0,Qx->d[0]);
}
nctemp359=j*Qx->d[0]+nctemp359;
if((0>j)||(j>=Qx->d[1])){
nctempstring->a="Qx";
nctempstring->d[0]=strlen("Qx")+1;;
LibeArrayex(107,nctempstring,j,1,Qx->d[1]);
}
float nctemp362 = tau0 / Qx->a[nctemp359];
int nctemp374=i;
if((0>i)||(i>=Qx->d[0])){
nctempstring->a="Qx";
nctempstring->d[0]=strlen("Qx")+1;;
LibeArrayex(107,nctempstring,i,0,Qx->d[0]);
}
nctemp374=j*Qx->d[0]+nctemp374;
if((0>j)||(j>=Qx->d[1])){
nctempstring->a="Qx";
nctempstring->d[0]=strlen("Qx")+1;;
LibeArrayex(107,nctempstring,j,1,Qx->d[1]);
}
int nctemp378=i;
if((0>i)||(i>=Qx->d[0])){
nctempstring->a="Qx";
nctempstring->d[0]=strlen("Qx")+1;;
LibeArrayex(107,nctempstring,i,0,Qx->d[0]);
}
nctemp378=j*Qx->d[0]+nctemp378;
if((0>j)||(j>=Qx->d[1])){
nctempstring->a="Qx";
nctempstring->d[0]=strlen("Qx")+1;;
LibeArrayex(107,nctempstring,j,1,Qx->d[1]);
}
float nctemp381 = Qx->a[nctemp374] * Qx->a[nctemp378];
float nctemp383 = nctemp381 + 1.0;
float nctemp367= nctemp383;
float nctemp384=LibeSqrt(nctemp367);
float nctemp386 = nctemp384 - 1.0;
float nctemp387 = nctemp362 * nctemp386;
tausx =nctemp387;

#line 108  "model.e"
int nctemp399=i;
if((0>i)||(i>=Qy->d[0])){
nctempstring->a="Qy";
nctempstring->d[0]=strlen("Qy")+1;;
LibeArrayex(108,nctempstring,i,0,Qy->d[0]);
}
nctemp399=j*Qy->d[0]+nctemp399;
if((0>j)||(j>=Qy->d[1])){
nctempstring->a="Qy";
nctempstring->d[0]=strlen("Qy")+1;;
LibeArrayex(108,nctempstring,j,1,Qy->d[1]);
}
float nctemp402 = tau0 / Qy->a[nctemp399];
int nctemp414=i;
if((0>i)||(i>=Qy->d[0])){
nctempstring->a="Qy";
nctempstring->d[0]=strlen("Qy")+1;;
LibeArrayex(108,nctempstring,i,0,Qy->d[0]);
}
nctemp414=j*Qy->d[0]+nctemp414;
if((0>j)||(j>=Qy->d[1])){
nctempstring->a="Qy";
nctempstring->d[0]=strlen("Qy")+1;;
LibeArrayex(108,nctempstring,j,1,Qy->d[1]);
}
int nctemp418=i;
if((0>i)||(i>=Qy->d[0])){
nctempstring->a="Qy";
nctempstring->d[0]=strlen("Qy")+1;;
LibeArrayex(108,nctempstring,i,0,Qy->d[0]);
}
nctemp418=j*Qy->d[0]+nctemp418;
if((0>j)||(j>=Qy->d[1])){
nctempstring->a="Qy";
nctempstring->d[0]=strlen("Qy")+1;;
LibeArrayex(108,nctempstring,j,1,Qy->d[1]);
}
float nctemp421 = Qy->a[nctemp414] * Qy->a[nctemp418];
float nctemp423 = nctemp421 + 1.0;
float nctemp407= nctemp423;
float nctemp424=LibeSqrt(nctemp407);
float nctemp426 = nctemp424 + 1.0;
float nctemp427 = nctemp402 * nctemp426;
tauey =nctemp427;

#line 109  "model.e"
int nctemp439=i;
if((0>i)||(i>=Qy->d[0])){
nctempstring->a="Qy";
nctempstring->d[0]=strlen("Qy")+1;;
LibeArrayex(109,nctempstring,i,0,Qy->d[0]);
}
nctemp439=j*Qy->d[0]+nctemp439;
if((0>j)||(j>=Qy->d[1])){
nctempstring->a="Qy";
nctempstring->d[0]=strlen("Qy")+1;;
LibeArrayex(109,nctempstring,j,1,Qy->d[1]);
}
float nctemp442 = tau0 / Qy->a[nctemp439];
int nctemp454=i;
if((0>i)||(i>=Qy->d[0])){
nctempstring->a="Qy";
nctempstring->d[0]=strlen("Qy")+1;;
LibeArrayex(109,nctempstring,i,0,Qy->d[0]);
}
nctemp454=j*Qy->d[0]+nctemp454;
if((0>j)||(j>=Qy->d[1])){
nctempstring->a="Qy";
nctempstring->d[0]=strlen("Qy")+1;;
LibeArrayex(109,nctempstring,j,1,Qy->d[1]);
}
int nctemp458=i;
if((0>i)||(i>=Qy->d[0])){
nctempstring->a="Qy";
nctempstring->d[0]=strlen("Qy")+1;;
LibeArrayex(109,nctempstring,i,0,Qy->d[0]);
}
nctemp458=j*Qy->d[0]+nctemp458;
if((0>j)||(j>=Qy->d[1])){
nctempstring->a="Qy";
nctempstring->d[0]=strlen("Qy")+1;;
LibeArrayex(109,nctempstring,j,1,Qy->d[1]);
}
float nctemp461 = Qy->a[nctemp454] * Qy->a[nctemp458];
float nctemp463 = nctemp461 + 1.0;
float nctemp447= nctemp463;
float nctemp464=LibeSqrt(nctemp447);
float nctemp466 = nctemp464 - 1.0;
float nctemp467 = nctemp442 * nctemp466;
tausy =nctemp467;

#line 114  "model.e"
float nctemp476 = 1.0 / tauex;
tauex =nctemp476;

#line 115  "model.e"
float nctemp485 = 1.0 / tauey;
tauey =nctemp485;

#line 116  "model.e"
float nctemp494 = 1.0 / tausx;
tausx =nctemp494;

#line 117  "model.e"
float nctemp503 = 1.0 / tausy;
tausy =nctemp503;

#line 119  "model.e"
int nctemp508=i;
if((0>i)||(i>=Model->dx->d[0])){
nctempstring->a="Model->dx";
nctempstring->d[0]=strlen("Model->dx")+1;;
LibeArrayex(119,nctempstring,i,0,Model->dx->d[0]);
}
argx =Model->dx->a[nctemp508];

#line 120  "model.e"
int nctemp514=j;
if((0>j)||(j>=Model->dy->d[0])){
nctempstring->a="Model->dy";
nctempstring->d[0]=strlen("Model->dy")+1;;
LibeArrayex(120,nctempstring,j,0,Model->dy->d[0]);
}
argy =Model->dy->a[nctemp514];

#line 122  "model.e"
int nctemp519=i;
if((0>i)||(i>=coeff1x->d[0])){
nctempstring->a="coeff1x";
nctempstring->d[0]=strlen("coeff1x")+1;;
LibeArrayex(122,nctempstring,i,0,coeff1x->d[0]);
}
nctemp519=j*coeff1x->d[0]+nctemp519;
if((0>j)||(j>=coeff1x->d[1])){
nctempstring->a="coeff1x";
nctempstring->d[0]=strlen("coeff1x")+1;;
LibeArrayex(122,nctempstring,j,1,coeff1x->d[1]);
}
float nctemp527= -argx;
float nctemp526= nctemp527;
float nctemp528=LibeExp(nctemp526);
float nctemp533= -Model->Dt;
float nctemp535 = nctemp533 * tausx;
float nctemp530= nctemp535;
float nctemp536=LibeExp(nctemp530);
float nctemp537 = nctemp528 * nctemp536;
coeff1x->a[nctemp519] =nctemp537;

#line 123  "model.e"
int nctemp541=i;
if((0>i)||(i>=coeff1y->d[0])){
nctempstring->a="coeff1y";
nctempstring->d[0]=strlen("coeff1y")+1;;
LibeArrayex(123,nctempstring,i,0,coeff1y->d[0]);
}
nctemp541=j*coeff1y->d[0]+nctemp541;
if((0>j)||(j>=coeff1y->d[1])){
nctempstring->a="coeff1y";
nctempstring->d[0]=strlen("coeff1y")+1;;
LibeArrayex(123,nctempstring,j,1,coeff1y->d[1]);
}
float nctemp549= -argy;
float nctemp548= nctemp549;
float nctemp550=LibeExp(nctemp548);
float nctemp555= -Model->Dt;
float nctemp557 = nctemp555 * tausy;
float nctemp552= nctemp557;
float nctemp558=LibeExp(nctemp552);
float nctemp559 = nctemp550 * nctemp558;
coeff1y->a[nctemp541] =nctemp559;

#line 124  "model.e"
int nctemp563=i;
if((0>i)||(i>=coeff2x->d[0])){
nctempstring->a="coeff2x";
nctempstring->d[0]=strlen("coeff2x")+1;;
LibeArrayex(124,nctempstring,i,0,coeff2x->d[0]);
}
nctemp563=j*coeff2x->d[0]+nctemp563;
if((0>j)||(j>=coeff2x->d[1])){
nctempstring->a="coeff2x";
nctempstring->d[0]=strlen("coeff2x")+1;;
LibeArrayex(124,nctempstring,j,1,coeff2x->d[1]);
}
float nctemp571 = Model->Dt * tauex;
coeff2x->a[nctemp563] =nctemp571;

#line 125  "model.e"
int nctemp575=i;
if((0>i)||(i>=coeff2y->d[0])){
nctempstring->a="coeff2y";
nctempstring->d[0]=strlen("coeff2y")+1;;
LibeArrayex(125,nctempstring,i,0,coeff2y->d[0]);
}
nctemp575=j*coeff2y->d[0]+nctemp575;
if((0>j)||(j>=coeff2y->d[1])){
nctempstring->a="coeff2y";
nctempstring->d[0]=strlen("coeff2y")+1;;
LibeArrayex(125,nctempstring,j,1,coeff2y->d[1]);
}
float nctemp583 = Model->Dt * tauey;
coeff2y->a[nctemp575] =nctemp583;

#line 129  "model.e"
int nctemp587=i;
if((0>i)||(i>=modx->d[0])){
nctempstring->a="modx";
nctempstring->d[0]=strlen("modx")+1;;
LibeArrayex(129,nctempstring,i,0,modx->d[0]);
}
nctemp587=j*modx->d[0]+nctemp587;
if((0>j)||(j>=modx->d[1])){
nctempstring->a="modx";
nctempstring->d[0]=strlen("modx")+1;;
LibeArrayex(129,nctempstring,j,1,modx->d[1]);
}
float nctemp598= -argx;
float nctemp597= nctemp598;
float nctemp599=LibeExp(nctemp597);
int nctemp601=i;
if((0>i)||(i>=modx->d[0])){
nctempstring->a="modx";
nctempstring->d[0]=strlen("modx")+1;;
LibeArrayex(129,nctempstring,i,0,modx->d[0]);
}
nctemp601=j*modx->d[0]+nctemp601;
if((0>j)||(j>=modx->d[1])){
nctempstring->a="modx";
nctempstring->d[0]=strlen("modx")+1;;
LibeArrayex(129,nctempstring,j,1,modx->d[1]);
}
float nctemp604 = nctemp599 * modx->a[nctemp601];
float nctemp614 = tausx / tauex;
float nctemp615 = 1.0 - nctemp614;
float nctemp616 = nctemp604 * nctemp615;
modx->a[nctemp587] =nctemp616;

#line 130  "model.e"
int nctemp620=i;
if((0>i)||(i>=mody->d[0])){
nctempstring->a="mody";
nctempstring->d[0]=strlen("mody")+1;;
LibeArrayex(130,nctempstring,i,0,mody->d[0]);
}
nctemp620=j*mody->d[0]+nctemp620;
if((0>j)||(j>=mody->d[1])){
nctempstring->a="mody";
nctempstring->d[0]=strlen("mody")+1;;
LibeArrayex(130,nctempstring,j,1,mody->d[1]);
}
float nctemp631= -argy;
float nctemp630= nctemp631;
float nctemp632=LibeExp(nctemp630);
int nctemp634=i;
if((0>i)||(i>=mody->d[0])){
nctempstring->a="mody";
nctempstring->d[0]=strlen("mody")+1;;
LibeArrayex(130,nctempstring,i,0,mody->d[0]);
}
nctemp634=j*mody->d[0]+nctemp634;
if((0>j)||(j>=mody->d[1])){
nctempstring->a="mody";
nctempstring->d[0]=strlen("mody")+1;;
LibeArrayex(130,nctempstring,j,1,mody->d[1]);
}
float nctemp637 = nctemp632 * mody->a[nctemp634];
float nctemp647 = tausy / tauey;
float nctemp648 = 1.0 - nctemp647;
float nctemp649 = nctemp637 * nctemp648;
mody->a[nctemp620] =nctemp649;

#line 102  "model.e"
}
int nctemp658 = i + 1;
i =nctemp658;
int nctemp659 = (i < Nx);
nctemp295=nctemp659;
}

#line 101  "model.e"
}
int nctemp671 = j + 1;
j =nctemp671;
int nctemp672 = (j < Ny);
nctemp287=nctemp672;
}

#line 133  "model.e"
RunFree(d1->a);
RunFree(d1);

#line 134  "model.e"
RunFree(d2->a);
RunFree(d2);

#line 136  "model.e"
return 1;

#line 60  "model.e"
}

#line 139  "model.e"
struct model* Modelsls (nctempfloat2 *vp,nctempfloat2 *vs,nctempfloat2 *rho,nctempfloat2 *Qlx,nctempfloat2 *Qly,nctempfloat2 *Qmx,nctempfloat2 *Qmy,nctempfloat2 *Qpx,nctempfloat2 *Qpy,float Dx,float Dt,float W0,int Nb)

#line 157  "model.e"
{

#line 158  "model.e"
struct model* Model;
int Nx;
int Ny;
int i;
int j;
int fd;
int dsize;
nctempchar1 *data;

#line 166  "model.e"
struct model *nctemp687=(struct model*)RunMalloc(sizeof(struct model));
Model =nctemp687;

#line 167  "model.e"
Model->Dx =Dx;

#line 168  "model.e"
Model->Dt =Dt;

#line 169  "model.e"
int nctemp701=vp->d[0];Model->Nx =nctemp701;

#line 170  "model.e"
int nctemp709=vp->d[1];Model->Ny =nctemp709;

#line 171  "model.e"
Model->Nb =Nb;

#line 172  "model.e"
Model->W0 =W0;

#line 173  "model.e"
Nx =Model->Nx;

#line 174  "model.e"
Ny =Model->Ny;

#line 175  "model.e"
Model->Qlx=Qlx;

#line 176  "model.e"
Model->Qly=Qly;

#line 177  "model.e"
Model->Qmx=Qmx;

#line 178  "model.e"
Model->Qmy=Qmy;

#line 179  "model.e"
Model->Qpx=Qpx;

#line 180  "model.e"
Model->Qpy=Qpy;

#line 183  "model.e"
int nctemp771=Nx;
nctemp771=nctemp771*Ny;
nctempfloat2 *nctemp770;
nctemp770=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp770->d[0]=Nx;
nctemp770->d[1]=Ny;
nctemp770->a=(float *)RunMalloc(sizeof(float)*nctemp771);
Model->Rho=nctemp770;

#line 184  "model.e"
int nctemp782=Nx;
nctemp782=nctemp782*Ny;
nctempfloat2 *nctemp781;
nctemp781=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp781->d[0]=Nx;
nctemp781->d[1]=Ny;
nctemp781->a=(float *)RunMalloc(sizeof(float)*nctemp782);
Model->Mu=nctemp781;

#line 185  "model.e"
int nctemp793=Nx;
nctemp793=nctemp793*Ny;
nctempfloat2 *nctemp792;
nctemp792=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp792->d[0]=Nx;
nctemp792->d[1]=Ny;
nctemp792->a=(float *)RunMalloc(sizeof(float)*nctemp793);
Model->Lambda=nctemp792;

#line 191  "model.e"
int nctemp804=Nx;
nctemp804=nctemp804*Ny;
nctempfloat2 *nctemp803;
nctemp803=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp803->d[0]=Nx;
nctemp803->d[1]=Ny;
nctemp803->a=(float *)RunMalloc(sizeof(float)*nctemp804);
Model->Dlambdax=nctemp803;

#line 192  "model.e"
int nctemp815=Nx;
nctemp815=nctemp815*Ny;
nctempfloat2 *nctemp814;
nctemp814=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp814->d[0]=Nx;
nctemp814->d[1]=Ny;
nctemp814->a=(float *)RunMalloc(sizeof(float)*nctemp815);
Model->Dlambday=nctemp814;

#line 193  "model.e"
int nctemp826=Nx;
nctemp826=nctemp826*Ny;
nctempfloat2 *nctemp825;
nctemp825=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp825->d[0]=Nx;
nctemp825->d[1]=Ny;
nctemp825->a=(float *)RunMalloc(sizeof(float)*nctemp826);
Model->Dmux=nctemp825;

#line 194  "model.e"
int nctemp837=Nx;
nctemp837=nctemp837*Ny;
nctempfloat2 *nctemp836;
nctemp836=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp836->d[0]=Nx;
nctemp836->d[1]=Ny;
nctemp836->a=(float *)RunMalloc(sizeof(float)*nctemp837);
Model->Dmuy=nctemp836;

#line 195  "model.e"
int nctemp848=Nx;
nctemp848=nctemp848*Ny;
nctempfloat2 *nctemp847;
nctemp847=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp847->d[0]=Nx;
nctemp847->d[1]=Ny;
nctemp847->a=(float *)RunMalloc(sizeof(float)*nctemp848);
Model->Drhopx=nctemp847;

#line 196  "model.e"
int nctemp859=Nx;
nctemp859=nctemp859*Ny;
nctempfloat2 *nctemp858;
nctemp858=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp858->d[0]=Nx;
nctemp858->d[1]=Ny;
nctemp858->a=(float *)RunMalloc(sizeof(float)*nctemp859);
Model->Drhopy=nctemp858;

#line 197  "model.e"
int nctemp870=Nx;
nctemp870=nctemp870*Ny;
nctempfloat2 *nctemp869;
nctemp869=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp869->d[0]=Nx;
nctemp869->d[1]=Ny;
nctemp869->a=(float *)RunMalloc(sizeof(float)*nctemp870);
Model->Drhosx=nctemp869;

#line 198  "model.e"
int nctemp881=Nx;
nctemp881=nctemp881*Ny;
nctempfloat2 *nctemp880;
nctemp880=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp880->d[0]=Nx;
nctemp880->d[1]=Ny;
nctemp880->a=(float *)RunMalloc(sizeof(float)*nctemp881);
Model->Drhosy=nctemp880;

#line 201  "model.e"
int nctemp892=Nx;
nctemp892=nctemp892*Ny;
nctempfloat2 *nctemp891;
nctemp891=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp891->d[0]=Nx;
nctemp891->d[1]=Ny;
nctemp891->a=(float *)RunMalloc(sizeof(float)*nctemp892);
Model->Alpha1x=nctemp891;

#line 202  "model.e"
int nctemp903=Nx;
nctemp903=nctemp903*Ny;
nctempfloat2 *nctemp902;
nctemp902=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp902->d[0]=Nx;
nctemp902->d[1]=Ny;
nctemp902->a=(float *)RunMalloc(sizeof(float)*nctemp903);
Model->Alpha1y=nctemp902;

#line 203  "model.e"
int nctemp914=Nx;
nctemp914=nctemp914*Ny;
nctempfloat2 *nctemp913;
nctemp913=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp913->d[0]=Nx;
nctemp913->d[1]=Ny;
nctemp913->a=(float *)RunMalloc(sizeof(float)*nctemp914);
Model->Alpha2x=nctemp913;

#line 204  "model.e"
int nctemp925=Nx;
nctemp925=nctemp925*Ny;
nctempfloat2 *nctemp924;
nctemp924=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp924->d[0]=Nx;
nctemp924->d[1]=Ny;
nctemp924->a=(float *)RunMalloc(sizeof(float)*nctemp925);
Model->Alpha2y=nctemp924;

#line 205  "model.e"
int nctemp936=Nx;
nctemp936=nctemp936*Ny;
nctempfloat2 *nctemp935;
nctemp935=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp935->d[0]=Nx;
nctemp935->d[1]=Ny;
nctemp935->a=(float *)RunMalloc(sizeof(float)*nctemp936);
Model->Beta1x=nctemp935;

#line 206  "model.e"
int nctemp947=Nx;
nctemp947=nctemp947*Ny;
nctempfloat2 *nctemp946;
nctemp946=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp946->d[0]=Nx;
nctemp946->d[1]=Ny;
nctemp946->a=(float *)RunMalloc(sizeof(float)*nctemp947);
Model->Beta1y=nctemp946;

#line 207  "model.e"
int nctemp958=Nx;
nctemp958=nctemp958*Ny;
nctempfloat2 *nctemp957;
nctemp957=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp957->d[0]=Nx;
nctemp957->d[1]=Ny;
nctemp957->a=(float *)RunMalloc(sizeof(float)*nctemp958);
Model->Beta2x=nctemp957;

#line 208  "model.e"
int nctemp969=Nx;
nctemp969=nctemp969*Ny;
nctempfloat2 *nctemp968;
nctemp968=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp968->d[0]=Nx;
nctemp968->d[1]=Ny;
nctemp968->a=(float *)RunMalloc(sizeof(float)*nctemp969);
Model->Beta2y=nctemp968;

#line 209  "model.e"
int nctemp980=Nx;
nctemp980=nctemp980*Ny;
nctempfloat2 *nctemp979;
nctemp979=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp979->d[0]=Nx;
nctemp979->d[1]=Ny;
nctemp979->a=(float *)RunMalloc(sizeof(float)*nctemp980);
Model->Eta1x=nctemp979;

#line 210  "model.e"
int nctemp991=Nx;
nctemp991=nctemp991*Ny;
nctempfloat2 *nctemp990;
nctemp990=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp990->d[0]=Nx;
nctemp990->d[1]=Ny;
nctemp990->a=(float *)RunMalloc(sizeof(float)*nctemp991);
Model->Eta1y=nctemp990;

#line 211  "model.e"
int nctemp1002=Nx;
nctemp1002=nctemp1002*Ny;
nctempfloat2 *nctemp1001;
nctemp1001=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1001->d[0]=Nx;
nctemp1001->d[1]=Ny;
nctemp1001->a=(float *)RunMalloc(sizeof(float)*nctemp1002);
Model->Eta2x=nctemp1001;

#line 212  "model.e"
int nctemp1013=Nx;
nctemp1013=nctemp1013*Ny;
nctempfloat2 *nctemp1012;
nctemp1012=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1012->d[0]=Nx;
nctemp1012->d[1]=Ny;
nctemp1012->a=(float *)RunMalloc(sizeof(float)*nctemp1013);
Model->Eta2y=nctemp1012;

#line 219  "model.e"
j =0;
int nctemp1022 = (j < Ny);
while(nctemp1022){
{

#line 220  "model.e"
i =0;
int nctemp1030 = (i < Nx);
while(nctemp1030){
{

#line 221  "model.e"
int nctemp1037=i;
if((0>i)||(i>=Model->Rho->d[0])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(221,nctempstring,i,0,Model->Rho->d[0]);
}
nctemp1037=j*Model->Rho->d[0]+nctemp1037;
if((0>j)||(j>=Model->Rho->d[1])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(221,nctempstring,j,1,Model->Rho->d[1]);
}
int nctemp1045=i;
if((0>i)||(i>=rho->d[0])){
nctempstring->a="rho";
nctempstring->d[0]=strlen("rho")+1;;
LibeArrayex(221,nctempstring,i,0,rho->d[0]);
}
nctemp1045=j*rho->d[0]+nctemp1045;
if((0>j)||(j>=rho->d[1])){
nctempstring->a="rho";
nctempstring->d[0]=strlen("rho")+1;;
LibeArrayex(221,nctempstring,j,1,rho->d[1]);
}
float nctemp1048 = 1.0 / rho->a[nctemp1045];
Model->Rho->a[nctemp1037] =nctemp1048;

#line 222  "model.e"
int nctemp1052=i;
if((0>i)||(i>=Model->Mu->d[0])){
nctempstring->a="Model->Mu";
nctempstring->d[0]=strlen("Model->Mu")+1;;
LibeArrayex(222,nctempstring,i,0,Model->Mu->d[0]);
}
nctemp1052=j*Model->Mu->d[0]+nctemp1052;
if((0>j)||(j>=Model->Mu->d[1])){
nctempstring->a="Model->Mu";
nctempstring->d[0]=strlen("Model->Mu")+1;;
LibeArrayex(222,nctempstring,j,1,Model->Mu->d[1]);
}
int nctemp1062=i;
if((0>i)||(i>=rho->d[0])){
nctempstring->a="rho";
nctempstring->d[0]=strlen("rho")+1;;
LibeArrayex(222,nctempstring,i,0,rho->d[0]);
}
nctemp1062=j*rho->d[0]+nctemp1062;
if((0>j)||(j>=rho->d[1])){
nctempstring->a="rho";
nctempstring->d[0]=strlen("rho")+1;;
LibeArrayex(222,nctempstring,j,1,rho->d[1]);
}
int nctemp1066=i;
if((0>i)||(i>=vs->d[0])){
nctempstring->a="vs";
nctempstring->d[0]=strlen("vs")+1;;
LibeArrayex(222,nctempstring,i,0,vs->d[0]);
}
nctemp1066=j*vs->d[0]+nctemp1066;
if((0>j)||(j>=vs->d[1])){
nctempstring->a="vs";
nctempstring->d[0]=strlen("vs")+1;;
LibeArrayex(222,nctempstring,j,1,vs->d[1]);
}
float nctemp1069 = rho->a[nctemp1062] * vs->a[nctemp1066];
int nctemp1071=i;
if((0>i)||(i>=vs->d[0])){
nctempstring->a="vs";
nctempstring->d[0]=strlen("vs")+1;;
LibeArrayex(222,nctempstring,i,0,vs->d[0]);
}
nctemp1071=j*vs->d[0]+nctemp1071;
if((0>j)||(j>=vs->d[1])){
nctempstring->a="vs";
nctempstring->d[0]=strlen("vs")+1;;
LibeArrayex(222,nctempstring,j,1,vs->d[1]);
}
float nctemp1074 = nctemp1069 * vs->a[nctemp1071];
Model->Mu->a[nctemp1052] =nctemp1074;

#line 223  "model.e"
int nctemp1078=i;
if((0>i)||(i>=Model->Lambda->d[0])){
nctempstring->a="Model->Lambda";
nctempstring->d[0]=strlen("Model->Lambda")+1;;
LibeArrayex(223,nctempstring,i,0,Model->Lambda->d[0]);
}
nctemp1078=j*Model->Lambda->d[0]+nctemp1078;
if((0>j)||(j>=Model->Lambda->d[1])){
nctempstring->a="Model->Lambda";
nctempstring->d[0]=strlen("Model->Lambda")+1;;
LibeArrayex(223,nctempstring,j,1,Model->Lambda->d[1]);
}
int nctemp1085=i;
if((0>i)||(i>=rho->d[0])){
nctempstring->a="rho";
nctempstring->d[0]=strlen("rho")+1;;
LibeArrayex(223,nctempstring,i,0,rho->d[0]);
}
nctemp1085=j*rho->d[0]+nctemp1085;
if((0>j)||(j>=rho->d[1])){
nctempstring->a="rho";
nctempstring->d[0]=strlen("rho")+1;;
LibeArrayex(223,nctempstring,j,1,rho->d[1]);
}
int nctemp1095=i;
if((0>i)||(i>=vp->d[0])){
nctempstring->a="vp";
nctempstring->d[0]=strlen("vp")+1;;
LibeArrayex(223,nctempstring,i,0,vp->d[0]);
}
nctemp1095=j*vp->d[0]+nctemp1095;
if((0>j)||(j>=vp->d[1])){
nctempstring->a="vp";
nctempstring->d[0]=strlen("vp")+1;;
LibeArrayex(223,nctempstring,j,1,vp->d[1]);
}
int nctemp1099=i;
if((0>i)||(i>=vp->d[0])){
nctempstring->a="vp";
nctempstring->d[0]=strlen("vp")+1;;
LibeArrayex(223,nctempstring,i,0,vp->d[0]);
}
nctemp1099=j*vp->d[0]+nctemp1099;
if((0>j)||(j>=vp->d[1])){
nctempstring->a="vp";
nctempstring->d[0]=strlen("vp")+1;;
LibeArrayex(223,nctempstring,j,1,vp->d[1]);
}
float nctemp1102 = vp->a[nctemp1095] * vp->a[nctemp1099];
int nctemp1111=i;
if((0>i)||(i>=vs->d[0])){
nctempstring->a="vs";
nctempstring->d[0]=strlen("vs")+1;;
LibeArrayex(223,nctempstring,i,0,vs->d[0]);
}
nctemp1111=j*vs->d[0]+nctemp1111;
if((0>j)||(j>=vs->d[1])){
nctempstring->a="vs";
nctempstring->d[0]=strlen("vs")+1;;
LibeArrayex(223,nctempstring,j,1,vs->d[1]);
}
float nctemp1114 = 2.0 * vs->a[nctemp1111];
int nctemp1116=i;
if((0>i)||(i>=vs->d[0])){
nctempstring->a="vs";
nctempstring->d[0]=strlen("vs")+1;;
LibeArrayex(223,nctempstring,i,0,vs->d[0]);
}
nctemp1116=j*vs->d[0]+nctemp1116;
if((0>j)||(j>=vs->d[1])){
nctempstring->a="vs";
nctempstring->d[0]=strlen("vs")+1;;
LibeArrayex(223,nctempstring,j,1,vs->d[1]);
}
float nctemp1119 = nctemp1114 * vs->a[nctemp1116];
float nctemp1120 = nctemp1102 - nctemp1119;
float nctemp1121 = rho->a[nctemp1085] * nctemp1120;
Model->Lambda->a[nctemp1078] =nctemp1121;

#line 224  "model.e"
int nctemp1125=i;
if((0>i)||(i>=Model->Alpha1x->d[0])){
nctempstring->a="Model->Alpha1x";
nctempstring->d[0]=strlen("Model->Alpha1x")+1;;
LibeArrayex(224,nctempstring,i,0,Model->Alpha1x->d[0]);
}
nctemp1125=j*Model->Alpha1x->d[0]+nctemp1125;
if((0>j)||(j>=Model->Alpha1x->d[1])){
nctempstring->a="Model->Alpha1x";
nctempstring->d[0]=strlen("Model->Alpha1x")+1;;
LibeArrayex(224,nctempstring,j,1,Model->Alpha1x->d[1]);
}
Model->Alpha1x->a[nctemp1125] =0.0;

#line 225  "model.e"
int nctemp1132=i;
if((0>i)||(i>=Model->Alpha1y->d[0])){
nctempstring->a="Model->Alpha1y";
nctempstring->d[0]=strlen("Model->Alpha1y")+1;;
LibeArrayex(225,nctempstring,i,0,Model->Alpha1y->d[0]);
}
nctemp1132=j*Model->Alpha1y->d[0]+nctemp1132;
if((0>j)||(j>=Model->Alpha1y->d[1])){
nctempstring->a="Model->Alpha1y";
nctempstring->d[0]=strlen("Model->Alpha1y")+1;;
LibeArrayex(225,nctempstring,j,1,Model->Alpha1y->d[1]);
}
Model->Alpha1y->a[nctemp1132] =0.0;

#line 226  "model.e"
int nctemp1139=i;
if((0>i)||(i>=Model->Alpha2x->d[0])){
nctempstring->a="Model->Alpha2x";
nctempstring->d[0]=strlen("Model->Alpha2x")+1;;
LibeArrayex(226,nctempstring,i,0,Model->Alpha2x->d[0]);
}
nctemp1139=j*Model->Alpha2x->d[0]+nctemp1139;
if((0>j)||(j>=Model->Alpha2x->d[1])){
nctempstring->a="Model->Alpha2x";
nctempstring->d[0]=strlen("Model->Alpha2x")+1;;
LibeArrayex(226,nctempstring,j,1,Model->Alpha2x->d[1]);
}
Model->Alpha2x->a[nctemp1139] =0.0;

#line 227  "model.e"
int nctemp1146=i;
if((0>i)||(i>=Model->Alpha2y->d[0])){
nctempstring->a="Model->Alpha2y";
nctempstring->d[0]=strlen("Model->Alpha2y")+1;;
LibeArrayex(227,nctempstring,i,0,Model->Alpha2y->d[0]);
}
nctemp1146=j*Model->Alpha2y->d[0]+nctemp1146;
if((0>j)||(j>=Model->Alpha2y->d[1])){
nctempstring->a="Model->Alpha2y";
nctempstring->d[0]=strlen("Model->Alpha2y")+1;;
LibeArrayex(227,nctempstring,j,1,Model->Alpha2y->d[1]);
}
Model->Alpha2y->a[nctemp1146] =0.0;

#line 228  "model.e"
int nctemp1153=i;
if((0>i)||(i>=Model->Beta1x->d[0])){
nctempstring->a="Model->Beta1x";
nctempstring->d[0]=strlen("Model->Beta1x")+1;;
LibeArrayex(228,nctempstring,i,0,Model->Beta1x->d[0]);
}
nctemp1153=j*Model->Beta1x->d[0]+nctemp1153;
if((0>j)||(j>=Model->Beta1x->d[1])){
nctempstring->a="Model->Beta1x";
nctempstring->d[0]=strlen("Model->Beta1x")+1;;
LibeArrayex(228,nctempstring,j,1,Model->Beta1x->d[1]);
}
Model->Beta1x->a[nctemp1153] =0.0;

#line 229  "model.e"
int nctemp1160=i;
if((0>i)||(i>=Model->Beta1y->d[0])){
nctempstring->a="Model->Beta1y";
nctempstring->d[0]=strlen("Model->Beta1y")+1;;
LibeArrayex(229,nctempstring,i,0,Model->Beta1y->d[0]);
}
nctemp1160=j*Model->Beta1y->d[0]+nctemp1160;
if((0>j)||(j>=Model->Beta1y->d[1])){
nctempstring->a="Model->Beta1y";
nctempstring->d[0]=strlen("Model->Beta1y")+1;;
LibeArrayex(229,nctempstring,j,1,Model->Beta1y->d[1]);
}
Model->Beta1y->a[nctemp1160] =0.0;

#line 230  "model.e"
int nctemp1167=i;
if((0>i)||(i>=Model->Beta2x->d[0])){
nctempstring->a="Model->Beta2x";
nctempstring->d[0]=strlen("Model->Beta2x")+1;;
LibeArrayex(230,nctempstring,i,0,Model->Beta2x->d[0]);
}
nctemp1167=j*Model->Beta2x->d[0]+nctemp1167;
if((0>j)||(j>=Model->Beta2x->d[1])){
nctempstring->a="Model->Beta2x";
nctempstring->d[0]=strlen("Model->Beta2x")+1;;
LibeArrayex(230,nctempstring,j,1,Model->Beta2x->d[1]);
}
Model->Beta2x->a[nctemp1167] =0.0;

#line 231  "model.e"
int nctemp1174=i;
if((0>i)||(i>=Model->Beta2y->d[0])){
nctempstring->a="Model->Beta2y";
nctempstring->d[0]=strlen("Model->Beta2y")+1;;
LibeArrayex(231,nctempstring,i,0,Model->Beta2y->d[0]);
}
nctemp1174=j*Model->Beta2y->d[0]+nctemp1174;
if((0>j)||(j>=Model->Beta2y->d[1])){
nctempstring->a="Model->Beta2y";
nctempstring->d[0]=strlen("Model->Beta2y")+1;;
LibeArrayex(231,nctempstring,j,1,Model->Beta2y->d[1]);
}
Model->Beta2y->a[nctemp1174] =0.0;

#line 232  "model.e"
int nctemp1181=i;
if((0>i)||(i>=Model->Eta1x->d[0])){
nctempstring->a="Model->Eta1x";
nctempstring->d[0]=strlen("Model->Eta1x")+1;;
LibeArrayex(232,nctempstring,i,0,Model->Eta1x->d[0]);
}
nctemp1181=j*Model->Eta1x->d[0]+nctemp1181;
if((0>j)||(j>=Model->Eta1x->d[1])){
nctempstring->a="Model->Eta1x";
nctempstring->d[0]=strlen("Model->Eta1x")+1;;
LibeArrayex(232,nctempstring,j,1,Model->Eta1x->d[1]);
}
Model->Eta1x->a[nctemp1181] =0.0;

#line 233  "model.e"
int nctemp1188=i;
if((0>i)||(i>=Model->Eta1y->d[0])){
nctempstring->a="Model->Eta1y";
nctempstring->d[0]=strlen("Model->Eta1y")+1;;
LibeArrayex(233,nctempstring,i,0,Model->Eta1y->d[0]);
}
nctemp1188=j*Model->Eta1y->d[0]+nctemp1188;
if((0>j)||(j>=Model->Eta1y->d[1])){
nctempstring->a="Model->Eta1y";
nctempstring->d[0]=strlen("Model->Eta1y")+1;;
LibeArrayex(233,nctempstring,j,1,Model->Eta1y->d[1]);
}
Model->Eta1y->a[nctemp1188] =0.0;

#line 234  "model.e"
int nctemp1195=i;
if((0>i)||(i>=Model->Eta2x->d[0])){
nctempstring->a="Model->Eta2x";
nctempstring->d[0]=strlen("Model->Eta2x")+1;;
LibeArrayex(234,nctempstring,i,0,Model->Eta2x->d[0]);
}
nctemp1195=j*Model->Eta2x->d[0]+nctemp1195;
if((0>j)||(j>=Model->Eta2x->d[1])){
nctempstring->a="Model->Eta2x";
nctempstring->d[0]=strlen("Model->Eta2x")+1;;
LibeArrayex(234,nctempstring,j,1,Model->Eta2x->d[1]);
}
Model->Eta2x->a[nctemp1195] =0.0;

#line 235  "model.e"
int nctemp1202=i;
if((0>i)||(i>=Model->Eta2y->d[0])){
nctempstring->a="Model->Eta2y";
nctempstring->d[0]=strlen("Model->Eta2y")+1;;
LibeArrayex(235,nctempstring,i,0,Model->Eta2y->d[0]);
}
nctemp1202=j*Model->Eta2y->d[0]+nctemp1202;
if((0>j)||(j>=Model->Eta2y->d[1])){
nctempstring->a="Model->Eta2y";
nctempstring->d[0]=strlen("Model->Eta2y")+1;;
LibeArrayex(235,nctempstring,j,1,Model->Eta2y->d[1]);
}
Model->Eta2y->a[nctemp1202] =0.0;

#line 236  "model.e"
int nctemp1209=i;
if((0>i)||(i>=Model->Dlambdax->d[0])){
nctempstring->a="Model->Dlambdax";
nctempstring->d[0]=strlen("Model->Dlambdax")+1;;
LibeArrayex(236,nctempstring,i,0,Model->Dlambdax->d[0]);
}
nctemp1209=j*Model->Dlambdax->d[0]+nctemp1209;
if((0>j)||(j>=Model->Dlambdax->d[1])){
nctempstring->a="Model->Dlambdax";
nctempstring->d[0]=strlen("Model->Dlambdax")+1;;
LibeArrayex(236,nctempstring,j,1,Model->Dlambdax->d[1]);
}
int nctemp1213=i;
if((0>i)||(i>=Model->Lambda->d[0])){
nctempstring->a="Model->Lambda";
nctempstring->d[0]=strlen("Model->Lambda")+1;;
LibeArrayex(236,nctempstring,i,0,Model->Lambda->d[0]);
}
nctemp1213=j*Model->Lambda->d[0]+nctemp1213;
if((0>j)||(j>=Model->Lambda->d[1])){
nctempstring->a="Model->Lambda";
nctempstring->d[0]=strlen("Model->Lambda")+1;;
LibeArrayex(236,nctempstring,j,1,Model->Lambda->d[1]);
}
Model->Dlambdax->a[nctemp1209] =Model->Lambda->a[nctemp1213];

#line 237  "model.e"
int nctemp1219=i;
if((0>i)||(i>=Model->Dlambday->d[0])){
nctempstring->a="Model->Dlambday";
nctempstring->d[0]=strlen("Model->Dlambday")+1;;
LibeArrayex(237,nctempstring,i,0,Model->Dlambday->d[0]);
}
nctemp1219=j*Model->Dlambday->d[0]+nctemp1219;
if((0>j)||(j>=Model->Dlambday->d[1])){
nctempstring->a="Model->Dlambday";
nctempstring->d[0]=strlen("Model->Dlambday")+1;;
LibeArrayex(237,nctempstring,j,1,Model->Dlambday->d[1]);
}
int nctemp1223=i;
if((0>i)||(i>=Model->Lambda->d[0])){
nctempstring->a="Model->Lambda";
nctempstring->d[0]=strlen("Model->Lambda")+1;;
LibeArrayex(237,nctempstring,i,0,Model->Lambda->d[0]);
}
nctemp1223=j*Model->Lambda->d[0]+nctemp1223;
if((0>j)||(j>=Model->Lambda->d[1])){
nctempstring->a="Model->Lambda";
nctempstring->d[0]=strlen("Model->Lambda")+1;;
LibeArrayex(237,nctempstring,j,1,Model->Lambda->d[1]);
}
Model->Dlambday->a[nctemp1219] =Model->Lambda->a[nctemp1223];

#line 238  "model.e"
int nctemp1229=i;
if((0>i)||(i>=Model->Dmux->d[0])){
nctempstring->a="Model->Dmux";
nctempstring->d[0]=strlen("Model->Dmux")+1;;
LibeArrayex(238,nctempstring,i,0,Model->Dmux->d[0]);
}
nctemp1229=j*Model->Dmux->d[0]+nctemp1229;
if((0>j)||(j>=Model->Dmux->d[1])){
nctempstring->a="Model->Dmux";
nctempstring->d[0]=strlen("Model->Dmux")+1;;
LibeArrayex(238,nctempstring,j,1,Model->Dmux->d[1]);
}
int nctemp1233=i;
if((0>i)||(i>=Model->Mu->d[0])){
nctempstring->a="Model->Mu";
nctempstring->d[0]=strlen("Model->Mu")+1;;
LibeArrayex(238,nctempstring,i,0,Model->Mu->d[0]);
}
nctemp1233=j*Model->Mu->d[0]+nctemp1233;
if((0>j)||(j>=Model->Mu->d[1])){
nctempstring->a="Model->Mu";
nctempstring->d[0]=strlen("Model->Mu")+1;;
LibeArrayex(238,nctempstring,j,1,Model->Mu->d[1]);
}
Model->Dmux->a[nctemp1229] =Model->Mu->a[nctemp1233];

#line 239  "model.e"
int nctemp1239=i;
if((0>i)||(i>=Model->Dmuy->d[0])){
nctempstring->a="Model->Dmuy";
nctempstring->d[0]=strlen("Model->Dmuy")+1;;
LibeArrayex(239,nctempstring,i,0,Model->Dmuy->d[0]);
}
nctemp1239=j*Model->Dmuy->d[0]+nctemp1239;
if((0>j)||(j>=Model->Dmuy->d[1])){
nctempstring->a="Model->Dmuy";
nctempstring->d[0]=strlen("Model->Dmuy")+1;;
LibeArrayex(239,nctempstring,j,1,Model->Dmuy->d[1]);
}
int nctemp1243=i;
if((0>i)||(i>=Model->Mu->d[0])){
nctempstring->a="Model->Mu";
nctempstring->d[0]=strlen("Model->Mu")+1;;
LibeArrayex(239,nctempstring,i,0,Model->Mu->d[0]);
}
nctemp1243=j*Model->Mu->d[0]+nctemp1243;
if((0>j)||(j>=Model->Mu->d[1])){
nctempstring->a="Model->Mu";
nctempstring->d[0]=strlen("Model->Mu")+1;;
LibeArrayex(239,nctempstring,j,1,Model->Mu->d[1]);
}
Model->Dmuy->a[nctemp1239] =Model->Mu->a[nctemp1243];

#line 240  "model.e"
int nctemp1249=i;
if((0>i)||(i>=Model->Drhopx->d[0])){
nctempstring->a="Model->Drhopx";
nctempstring->d[0]=strlen("Model->Drhopx")+1;;
LibeArrayex(240,nctempstring,i,0,Model->Drhopx->d[0]);
}
nctemp1249=j*Model->Drhopx->d[0]+nctemp1249;
if((0>j)||(j>=Model->Drhopx->d[1])){
nctempstring->a="Model->Drhopx";
nctempstring->d[0]=strlen("Model->Drhopx")+1;;
LibeArrayex(240,nctempstring,j,1,Model->Drhopx->d[1]);
}
int nctemp1253=i;
if((0>i)||(i>=Model->Rho->d[0])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(240,nctempstring,i,0,Model->Rho->d[0]);
}
nctemp1253=j*Model->Rho->d[0]+nctemp1253;
if((0>j)||(j>=Model->Rho->d[1])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(240,nctempstring,j,1,Model->Rho->d[1]);
}
Model->Drhopx->a[nctemp1249] =Model->Rho->a[nctemp1253];

#line 241  "model.e"
int nctemp1259=i;
if((0>i)||(i>=Model->Drhopy->d[0])){
nctempstring->a="Model->Drhopy";
nctempstring->d[0]=strlen("Model->Drhopy")+1;;
LibeArrayex(241,nctempstring,i,0,Model->Drhopy->d[0]);
}
nctemp1259=j*Model->Drhopy->d[0]+nctemp1259;
if((0>j)||(j>=Model->Drhopy->d[1])){
nctempstring->a="Model->Drhopy";
nctempstring->d[0]=strlen("Model->Drhopy")+1;;
LibeArrayex(241,nctempstring,j,1,Model->Drhopy->d[1]);
}
int nctemp1263=i;
if((0>i)||(i>=Model->Rho->d[0])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(241,nctempstring,i,0,Model->Rho->d[0]);
}
nctemp1263=j*Model->Rho->d[0]+nctemp1263;
if((0>j)||(j>=Model->Rho->d[1])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(241,nctempstring,j,1,Model->Rho->d[1]);
}
Model->Drhopy->a[nctemp1259] =Model->Rho->a[nctemp1263];

#line 242  "model.e"
int nctemp1269=i;
if((0>i)||(i>=Model->Drhosx->d[0])){
nctempstring->a="Model->Drhosx";
nctempstring->d[0]=strlen("Model->Drhosx")+1;;
LibeArrayex(242,nctempstring,i,0,Model->Drhosx->d[0]);
}
nctemp1269=j*Model->Drhosx->d[0]+nctemp1269;
if((0>j)||(j>=Model->Drhosx->d[1])){
nctempstring->a="Model->Drhosx";
nctempstring->d[0]=strlen("Model->Drhosx")+1;;
LibeArrayex(242,nctempstring,j,1,Model->Drhosx->d[1]);
}
int nctemp1273=i;
if((0>i)||(i>=Model->Rho->d[0])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(242,nctempstring,i,0,Model->Rho->d[0]);
}
nctemp1273=j*Model->Rho->d[0]+nctemp1273;
if((0>j)||(j>=Model->Rho->d[1])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(242,nctempstring,j,1,Model->Rho->d[1]);
}
Model->Drhosx->a[nctemp1269] =Model->Rho->a[nctemp1273];

#line 243  "model.e"
int nctemp1279=i;
if((0>i)||(i>=Model->Drhosy->d[0])){
nctempstring->a="Model->Drhosy";
nctempstring->d[0]=strlen("Model->Drhosy")+1;;
LibeArrayex(243,nctempstring,i,0,Model->Drhosy->d[0]);
}
nctemp1279=j*Model->Drhosy->d[0]+nctemp1279;
if((0>j)||(j>=Model->Drhosy->d[1])){
nctempstring->a="Model->Drhosy";
nctempstring->d[0]=strlen("Model->Drhosy")+1;;
LibeArrayex(243,nctempstring,j,1,Model->Drhosy->d[1]);
}
int nctemp1283=i;
if((0>i)||(i>=Model->Rho->d[0])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(243,nctempstring,i,0,Model->Rho->d[0]);
}
nctemp1283=j*Model->Rho->d[0]+nctemp1283;
if((0>j)||(j>=Model->Rho->d[1])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(243,nctempstring,j,1,Model->Rho->d[1]);
}
Model->Drhosy->a[nctemp1279] =Model->Rho->a[nctemp1283];

#line 220  "model.e"
}
int nctemp1294 = i + 1;
i =nctemp1294;
int nctemp1295 = (i < Nx);
nctemp1030=nctemp1295;
}

#line 219  "model.e"
}
int nctemp1307 = j + 1;
j =nctemp1307;
int nctemp1308 = (j < Ny);
nctemp1022=nctemp1308;
}

#line 248  "model.e"
nctempfloat2* nctemp1313= Model->Qlx;
nctempfloat2* nctemp1316= Model->Qly;
nctempfloat2* nctemp1319= Model->Dlambdax;
nctempfloat2* nctemp1322= Model->Dlambday;

#line 249  "model.e"
nctempfloat2* nctemp1325= Model->Alpha1x;
nctempfloat2* nctemp1328= Model->Alpha1y;

#line 250  "model.e"
nctempfloat2* nctemp1331= Model->Alpha2x;
nctempfloat2* nctemp1334= Model->Alpha2y;
struct model* nctemp1337= Model;

#line 248  "model.e"
int nctemp1339=Modelslscoeffs(nctemp1313,nctemp1316,nctemp1319,nctemp1322,nctemp1325,nctemp1328,nctemp1331,nctemp1334,nctemp1337);

#line 251  "model.e"
nctempfloat2* nctemp1341= Model->Qmx;
nctempfloat2* nctemp1344= Model->Qmy;
nctempfloat2* nctemp1347= Model->Dmux;
nctempfloat2* nctemp1350= Model->Dmuy;
nctempfloat2* nctemp1353= Model->Beta1x;
nctempfloat2* nctemp1356= Model->Beta1y;

#line 252  "model.e"
nctempfloat2* nctemp1359= Model->Beta2x;
nctempfloat2* nctemp1362= Model->Beta2y;
struct model* nctemp1365= Model;

#line 251  "model.e"
int nctemp1367=Modelslscoeffs(nctemp1341,nctemp1344,nctemp1347,nctemp1350,nctemp1353,nctemp1356,nctemp1359,nctemp1362,nctemp1365);

#line 253  "model.e"
nctempfloat2* nctemp1369= Model->Qpx;
nctempfloat2* nctemp1372= Model->Qpy;
nctempfloat2* nctemp1375= Model->Drhopx;
nctempfloat2* nctemp1378= Model->Drhopy;
nctempfloat2* nctemp1381= Model->Eta1x;

#line 254  "model.e"
nctempfloat2* nctemp1384= Model->Eta1y;
nctempfloat2* nctemp1387= Model->Eta2x;
nctempfloat2* nctemp1390= Model->Eta2y;
struct model* nctemp1393= Model;

#line 253  "model.e"
int nctemp1395=Modelslscoeffs(nctemp1369,nctemp1372,nctemp1375,nctemp1378,nctemp1381,nctemp1384,nctemp1387,nctemp1390,nctemp1393);

#line 257  "model.e"
return Model;

#line 157  "model.e"
}

#line 260  "model.e"
struct model* ModelNew (nctempfloat2 *vp,nctempfloat2 *vs,nctempfloat2 *rho,nctempfloat2 *Qlx,nctempfloat2 *Qly,nctempfloat2 *Qmx,nctempfloat2 *Qmy,nctempfloat2 *Qpx,nctempfloat2 *Qpy,float Dx,float Dt,float W0,int Nb,int Rheol)

#line 284  "model.e"
{

#line 285  "model.e"
struct model* m;

#line 287  "model.e"
int nctemp1397 = (Rheol ==2);
if(nctemp1397)
{

#line 288  "model.e"
nctempfloat2* nctemp1405= vp;
nctempfloat2* nctemp1408= vs;
nctempfloat2* nctemp1411= rho;
nctempfloat2* nctemp1414= Qlx;
nctempfloat2* nctemp1417= Qly;
nctempfloat2* nctemp1420= Qmx;
nctempfloat2* nctemp1423= Qmy;
nctempfloat2* nctemp1426= Qpx;
nctempfloat2* nctemp1429= Qpy;

#line 289  "model.e"
float nctemp1432= Dx;
float nctemp1434= Dt;
float nctemp1436= W0;
int nctemp1438= Nb;

#line 288  "model.e"
struct model* nctemp1440=Modelsls(nctemp1405,nctemp1408,nctemp1411,nctemp1414,nctemp1417,nctemp1420,nctemp1423,nctemp1426,nctemp1429,nctemp1432,nctemp1434,nctemp1436,nctemp1438);
m =nctemp1440;

#line 287  "model.e"
}

#line 291  "model.e"
else{

#line 292  "model.e"
int nctemp1442= 4;
struct nctempchar1 *nctemp1446;
static struct nctempchar1 nctemp1447 = {{ 18}, (char*)"Unknown Q-model\n\0"};
nctemp1446=&nctemp1447;
nctempchar1* nctemp1444= nctemp1446;
int nctemp1448=LibePuts(nctemp1442,nctemp1444);

#line 293  "model.e"
int nctemp1450= 4;
int nctemp1452=LibeFlush(nctemp1450);

#line 295  "model.e"
int nctemp1454=LibeExit();

#line 291  "model.e"
}

#line 297  "model.e"
return m;

#line 284  "model.e"
}

#line 300  "model.e"
float ModelStability (struct model* Model)

#line 309  "model.e"
{

#line 310  "model.e"
int nx;
int ny;
int i;
int j;
float vp;
float stab;

#line 314  "model.e"
nx =Model->Nx;

#line 315  "model.e"
ny =Model->Ny;

#line 316  "model.e"
j =0;
int nctemp1468 = (j < ny);
while(nctemp1468){
{

#line 317  "model.e"
i =0;
int nctemp1476 = (i < nx);
while(nctemp1476){
{

#line 318  "model.e"
int nctemp1491=i;
if((0>i)||(i>=Model->Lambda->d[0])){
nctempstring->a="Model->Lambda";
nctempstring->d[0]=strlen("Model->Lambda")+1;;
LibeArrayex(318,nctempstring,i,0,Model->Lambda->d[0]);
}
nctemp1491=j*Model->Lambda->d[0]+nctemp1491;
if((0>j)||(j>=Model->Lambda->d[1])){
nctempstring->a="Model->Lambda";
nctempstring->d[0]=strlen("Model->Lambda")+1;;
LibeArrayex(318,nctempstring,j,1,Model->Lambda->d[1]);
}
int nctemp1499=i;
if((0>i)||(i>=Model->Mu->d[0])){
nctempstring->a="Model->Mu";
nctempstring->d[0]=strlen("Model->Mu")+1;;
LibeArrayex(318,nctempstring,i,0,Model->Mu->d[0]);
}
nctemp1499=j*Model->Mu->d[0]+nctemp1499;
if((0>j)||(j>=Model->Mu->d[1])){
nctempstring->a="Model->Mu";
nctempstring->d[0]=strlen("Model->Mu")+1;;
LibeArrayex(318,nctempstring,j,1,Model->Mu->d[1]);
}
float nctemp1502 = 2.0 * Model->Mu->a[nctemp1499];
float nctemp1503 = Model->Lambda->a[nctemp1491] + nctemp1502;
int nctemp1505=i;
if((0>i)||(i>=Model->Rho->d[0])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(318,nctempstring,i,0,Model->Rho->d[0]);
}
nctemp1505=j*Model->Rho->d[0]+nctemp1505;
if((0>j)||(j>=Model->Rho->d[1])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(318,nctempstring,j,1,Model->Rho->d[1]);
}
float nctemp1508 = nctemp1503 / Model->Rho->a[nctemp1505];
float nctemp1484= nctemp1508;
float nctemp1509=LibeSqrt(nctemp1484);
vp =nctemp1509;

#line 319  "model.e"
float nctemp1521 = vp * Model->Dt;
float nctemp1523 = nctemp1521 / Model->Dx;
stab =nctemp1523;

#line 320  "model.e"
float nctemp1532= 2.0;
float nctemp1534=LibeSqrt(nctemp1532);
float nctemp1535 = 1.0 / nctemp1534;
int nctemp1524 = (stab > nctemp1535);
if(nctemp1524)
{

#line 321  "model.e"
int nctemp1537= 4;
struct nctempchar1 *nctemp1541;
static struct nctempchar1 nctemp1542 = {{ 28}, (char*)"Stability index too large! \0"};
nctemp1541=&nctemp1542;
nctempchar1* nctemp1539= nctemp1541;
int nctemp1543=LibePuts(nctemp1537,nctemp1539);

#line 322  "model.e"
int nctemp1545= 4;
float nctemp1547= stab;
struct nctempchar1 *nctemp1551;
static struct nctempchar1 nctemp1552 = {{ 2}, (char*)"g\0"};
nctemp1551=&nctemp1552;
nctempchar1* nctemp1549= nctemp1551;
int nctemp1553=LibePutf(nctemp1545,nctemp1547,nctemp1549);

#line 323  "model.e"
int nctemp1555= 4;
struct nctempchar1 *nctemp1559;
static struct nctempchar1 nctemp1560 = {{ 3}, (char*)"\n\0"};
nctemp1559=&nctemp1560;
nctempchar1* nctemp1557= nctemp1559;
int nctemp1561=LibePuts(nctemp1555,nctemp1557);

#line 324  "model.e"
int nctemp1563= 4;
struct nctempchar1 *nctemp1567;
static struct nctempchar1 nctemp1568 = {{ 7}, (char*)"vp: \n\0"};
nctemp1567=&nctemp1568;
nctempchar1* nctemp1565= nctemp1567;
int nctemp1569=LibePuts(nctemp1563,nctemp1565);

#line 325  "model.e"
int nctemp1571= 4;
float nctemp1573= vp;
struct nctempchar1 *nctemp1577;
static struct nctempchar1 nctemp1578 = {{ 2}, (char*)"g\0"};
nctemp1577=&nctemp1578;
nctempchar1* nctemp1575= nctemp1577;
int nctemp1579=LibePutf(nctemp1571,nctemp1573,nctemp1575);

#line 326  "model.e"
int nctemp1581= 4;
struct nctempchar1 *nctemp1585;
static struct nctempchar1 nctemp1586 = {{ 3}, (char*)"\n\0"};
nctemp1585=&nctemp1586;
nctempchar1* nctemp1583= nctemp1585;
int nctemp1587=LibePuts(nctemp1581,nctemp1583);

#line 327  "model.e"
int nctemp1589= 4;
struct nctempchar1 *nctemp1593;
static struct nctempchar1 nctemp1594 = {{ 7}, (char*)"dt: \n\0"};
nctemp1593=&nctemp1594;
nctempchar1* nctemp1591= nctemp1593;
int nctemp1595=LibePuts(nctemp1589,nctemp1591);

#line 328  "model.e"
int nctemp1597= 4;
float nctemp1599= Model->Dt;
struct nctempchar1 *nctemp1603;
static struct nctempchar1 nctemp1604 = {{ 2}, (char*)"g\0"};
nctemp1603=&nctemp1604;
nctempchar1* nctemp1601= nctemp1603;
int nctemp1605=LibePutf(nctemp1597,nctemp1599,nctemp1601);

#line 329  "model.e"
int nctemp1607= 4;
struct nctempchar1 *nctemp1611;
static struct nctempchar1 nctemp1612 = {{ 3}, (char*)"\n\0"};
nctemp1611=&nctemp1612;
nctempchar1* nctemp1609= nctemp1611;
int nctemp1613=LibePuts(nctemp1607,nctemp1609);

#line 330  "model.e"
int nctemp1615= 4;
struct nctempchar1 *nctemp1619;
static struct nctempchar1 nctemp1620 = {{ 7}, (char*)"dx: \n\0"};
nctemp1619=&nctemp1620;
nctempchar1* nctemp1617= nctemp1619;
int nctemp1621=LibePuts(nctemp1615,nctemp1617);

#line 331  "model.e"
int nctemp1623= 4;
float nctemp1625= Model->Dx;
struct nctempchar1 *nctemp1629;
static struct nctempchar1 nctemp1630 = {{ 2}, (char*)"g\0"};
nctemp1629=&nctemp1630;
nctempchar1* nctemp1627= nctemp1629;
int nctemp1631=LibePutf(nctemp1623,nctemp1625,nctemp1627);

#line 332  "model.e"
int nctemp1633= 4;
struct nctempchar1 *nctemp1637;
static struct nctempchar1 nctemp1638 = {{ 3}, (char*)"\n\0"};
nctemp1637=&nctemp1638;
nctempchar1* nctemp1635= nctemp1637;
int nctemp1639=LibePuts(nctemp1633,nctemp1635);

#line 333  "model.e"
int nctemp1641= 4;
int nctemp1643=LibeFlush(nctemp1641);

#line 320  "model.e"
}

#line 317  "model.e"
}
int nctemp1652 = i + 1;
i =nctemp1652;
int nctemp1653 = (i < nx);
nctemp1476=nctemp1653;
}

#line 316  "model.e"
}
int nctemp1665 = j + 1;
j =nctemp1665;
int nctemp1666 = (j < ny);
nctemp1468=nctemp1666;
}

#line 338  "model.e"
return stab;

#line 309  "model.e"
}
