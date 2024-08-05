
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

#line 53  "model.i"
struct model* ModelNew (nctempfloat2 *vp,nctempfloat2 *vs,nctempfloat2 *rho,nctempfloat2 *Qlx,nctempfloat2 *Qly,nctempfloat2 *Qmx,nctempfloat2 *Qmy,nctempfloat2 *Qpx,nctempfloat2 *Qpy,nctempfloat2 *Qsx,nctempfloat2 *Qsy,float Dx,float Dt,float W0,int Nb,int Rheol);

#line 58  "model.i"
float ModelStability (struct model* Model);

#line 8  "model.e"
struct model* Modelsls (nctempfloat2 *vp,nctempfloat2 *vs,nctempfloat2 *rho,nctempfloat2 *Qlx,nctempfloat2 *Qly,nctempfloat2 *Qmx,nctempfloat2 *Qmy,nctempfloat2 *Qpx,nctempfloat2 *Qpy,nctempfloat2 *Qsx,nctempfloat2 *Qsy,float Dx,float Dt,float W0,int Nb);

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
struct model* Modelsls (nctempfloat2 *vp,nctempfloat2 *vs,nctempfloat2 *rho,nctempfloat2 *Qlx,nctempfloat2 *Qly,nctempfloat2 *Qmx,nctempfloat2 *Qmy,nctempfloat2 *Qpx,nctempfloat2 *Qpy,nctempfloat2 *Qsx,nctempfloat2 *Qsy,float Dx,float Dt,float W0,int Nb)

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
struct nctempchar1 *nctemp732;
static struct nctempchar1 nctemp733 = {{ 13}, (char*)"Mode nx,ny: \0"};
nctemp732=&nctemp733;
nctempchar1* nctemp730= nctemp732;
int nctemp734=LibePs(nctemp730);
int nctemp736= Nx;
int nctemp738=LibePi(nctemp736);
struct nctempchar1 *nctemp742;
static struct nctempchar1 nctemp743 = {{ 2}, (char*)" \0"};
nctemp742=&nctemp743;
nctempchar1* nctemp740= nctemp742;
int nctemp744=LibePs(nctemp740);
int nctemp746= Ny;
int nctemp748=LibePi(nctemp746);
struct nctempchar1 *nctemp752;
static struct nctempchar1 nctemp753 = {{ 3}, (char*)"\n\0"};
nctemp752=&nctemp753;
nctempchar1* nctemp750= nctemp752;
int nctemp754=LibePs(nctemp750);

#line 176  "model.e"
struct nctempchar1 *nctemp758;
static struct nctempchar1 nctemp759 = {{ 9}, (char*)"size Qlx\0"};
nctemp758=&nctemp759;
nctempchar1* nctemp756= nctemp758;
int nctemp760=LibePs(nctemp756);
int nctemp764=Qlx->d[0];int nctemp762= nctemp764;
int nctemp768=LibePi(nctemp762);
int nctemp772=Qlx->d[1];int nctemp770= nctemp772;
int nctemp776=LibePi(nctemp770);
struct nctempchar1 *nctemp780;
static struct nctempchar1 nctemp781 = {{ 3}, (char*)"\n\0"};
nctemp780=&nctemp781;
nctempchar1* nctemp778= nctemp780;
int nctemp782=LibePs(nctemp778);

#line 178  "model.e"
Model->Qlx=Qlx;

#line 179  "model.e"
Model->Qly=Qly;

#line 180  "model.e"
Model->Qmx=Qlx;

#line 181  "model.e"
Model->Qmy=Qly;

#line 182  "model.e"
Model->Qpx=Qpx;

#line 183  "model.e"
Model->Qpy=Qpy;

#line 184  "model.e"
Model->Qsx=Qsx;

#line 185  "model.e"
Model->Qsy=Qsy;

#line 186  "model.e"
int nctemp837=Nx;
nctemp837=nctemp837*Ny;
nctempfloat2 *nctemp836;
nctemp836=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp836->d[0]=Nx;
nctemp836->d[1]=Ny;
nctemp836->a=(float *)RunMalloc(sizeof(float)*nctemp837);
Model->Rho=nctemp836;

#line 187  "model.e"
int nctemp848=Nx;
nctemp848=nctemp848*Ny;
nctempfloat2 *nctemp847;
nctemp847=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp847->d[0]=Nx;
nctemp847->d[1]=Ny;
nctemp847->a=(float *)RunMalloc(sizeof(float)*nctemp848);
Model->Mu=nctemp847;

#line 188  "model.e"
int nctemp859=Nx;
nctemp859=nctemp859*Ny;
nctempfloat2 *nctemp858;
nctemp858=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp858->d[0]=Nx;
nctemp858->d[1]=Ny;
nctemp858->a=(float *)RunMalloc(sizeof(float)*nctemp859);
Model->Lambda=nctemp858;

#line 194  "model.e"
int nctemp870=Nx;
nctemp870=nctemp870*Ny;
nctempfloat2 *nctemp869;
nctemp869=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp869->d[0]=Nx;
nctemp869->d[1]=Ny;
nctemp869->a=(float *)RunMalloc(sizeof(float)*nctemp870);
Model->Dlambdax=nctemp869;

#line 195  "model.e"
int nctemp881=Nx;
nctemp881=nctemp881*Ny;
nctempfloat2 *nctemp880;
nctemp880=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp880->d[0]=Nx;
nctemp880->d[1]=Ny;
nctemp880->a=(float *)RunMalloc(sizeof(float)*nctemp881);
Model->Dlambday=nctemp880;

#line 196  "model.e"
int nctemp892=Nx;
nctemp892=nctemp892*Ny;
nctempfloat2 *nctemp891;
nctemp891=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp891->d[0]=Nx;
nctemp891->d[1]=Ny;
nctemp891->a=(float *)RunMalloc(sizeof(float)*nctemp892);
Model->Dmux=nctemp891;

#line 197  "model.e"
int nctemp903=Nx;
nctemp903=nctemp903*Ny;
nctempfloat2 *nctemp902;
nctemp902=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp902->d[0]=Nx;
nctemp902->d[1]=Ny;
nctemp902->a=(float *)RunMalloc(sizeof(float)*nctemp903);
Model->Dmuy=nctemp902;

#line 198  "model.e"
int nctemp914=Nx;
nctemp914=nctemp914*Ny;
nctempfloat2 *nctemp913;
nctemp913=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp913->d[0]=Nx;
nctemp913->d[1]=Ny;
nctemp913->a=(float *)RunMalloc(sizeof(float)*nctemp914);
Model->Drhopx=nctemp913;

#line 199  "model.e"
int nctemp925=Nx;
nctemp925=nctemp925*Ny;
nctempfloat2 *nctemp924;
nctemp924=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp924->d[0]=Nx;
nctemp924->d[1]=Ny;
nctemp924->a=(float *)RunMalloc(sizeof(float)*nctemp925);
Model->Drhopy=nctemp924;

#line 200  "model.e"
int nctemp936=Nx;
nctemp936=nctemp936*Ny;
nctempfloat2 *nctemp935;
nctemp935=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp935->d[0]=Nx;
nctemp935->d[1]=Ny;
nctemp935->a=(float *)RunMalloc(sizeof(float)*nctemp936);
Model->Drhosx=nctemp935;

#line 201  "model.e"
int nctemp947=Nx;
nctemp947=nctemp947*Ny;
nctempfloat2 *nctemp946;
nctemp946=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp946->d[0]=Nx;
nctemp946->d[1]=Ny;
nctemp946->a=(float *)RunMalloc(sizeof(float)*nctemp947);
Model->Drhosy=nctemp946;

#line 204  "model.e"
int nctemp958=Nx;
nctemp958=nctemp958*Ny;
nctempfloat2 *nctemp957;
nctemp957=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp957->d[0]=Nx;
nctemp957->d[1]=Ny;
nctemp957->a=(float *)RunMalloc(sizeof(float)*nctemp958);
Model->Alpha1x=nctemp957;

#line 205  "model.e"
int nctemp969=Nx;
nctemp969=nctemp969*Ny;
nctempfloat2 *nctemp968;
nctemp968=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp968->d[0]=Nx;
nctemp968->d[1]=Ny;
nctemp968->a=(float *)RunMalloc(sizeof(float)*nctemp969);
Model->Alpha1y=nctemp968;

#line 206  "model.e"
int nctemp980=Nx;
nctemp980=nctemp980*Ny;
nctempfloat2 *nctemp979;
nctemp979=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp979->d[0]=Nx;
nctemp979->d[1]=Ny;
nctemp979->a=(float *)RunMalloc(sizeof(float)*nctemp980);
Model->Alpha2x=nctemp979;

#line 207  "model.e"
int nctemp991=Nx;
nctemp991=nctemp991*Ny;
nctempfloat2 *nctemp990;
nctemp990=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp990->d[0]=Nx;
nctemp990->d[1]=Ny;
nctemp990->a=(float *)RunMalloc(sizeof(float)*nctemp991);
Model->Alpha2y=nctemp990;

#line 208  "model.e"
int nctemp1002=Nx;
nctemp1002=nctemp1002*Ny;
nctempfloat2 *nctemp1001;
nctemp1001=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1001->d[0]=Nx;
nctemp1001->d[1]=Ny;
nctemp1001->a=(float *)RunMalloc(sizeof(float)*nctemp1002);
Model->Beta1x=nctemp1001;

#line 209  "model.e"
int nctemp1013=Nx;
nctemp1013=nctemp1013*Ny;
nctempfloat2 *nctemp1012;
nctemp1012=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1012->d[0]=Nx;
nctemp1012->d[1]=Ny;
nctemp1012->a=(float *)RunMalloc(sizeof(float)*nctemp1013);
Model->Beta1y=nctemp1012;

#line 210  "model.e"
int nctemp1024=Nx;
nctemp1024=nctemp1024*Ny;
nctempfloat2 *nctemp1023;
nctemp1023=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1023->d[0]=Nx;
nctemp1023->d[1]=Ny;
nctemp1023->a=(float *)RunMalloc(sizeof(float)*nctemp1024);
Model->Beta2x=nctemp1023;

#line 211  "model.e"
int nctemp1035=Nx;
nctemp1035=nctemp1035*Ny;
nctempfloat2 *nctemp1034;
nctemp1034=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1034->d[0]=Nx;
nctemp1034->d[1]=Ny;
nctemp1034->a=(float *)RunMalloc(sizeof(float)*nctemp1035);
Model->Beta2y=nctemp1034;

#line 212  "model.e"
int nctemp1046=Nx;
nctemp1046=nctemp1046*Ny;
nctempfloat2 *nctemp1045;
nctemp1045=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1045->d[0]=Nx;
nctemp1045->d[1]=Ny;
nctemp1045->a=(float *)RunMalloc(sizeof(float)*nctemp1046);
Model->Eta1x=nctemp1045;

#line 213  "model.e"
int nctemp1057=Nx;
nctemp1057=nctemp1057*Ny;
nctempfloat2 *nctemp1056;
nctemp1056=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1056->d[0]=Nx;
nctemp1056->d[1]=Ny;
nctemp1056->a=(float *)RunMalloc(sizeof(float)*nctemp1057);
Model->Eta1y=nctemp1056;

#line 214  "model.e"
int nctemp1068=Nx;
nctemp1068=nctemp1068*Ny;
nctempfloat2 *nctemp1067;
nctemp1067=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1067->d[0]=Nx;
nctemp1067->d[1]=Ny;
nctemp1067->a=(float *)RunMalloc(sizeof(float)*nctemp1068);
Model->Eta2x=nctemp1067;

#line 215  "model.e"
int nctemp1079=Nx;
nctemp1079=nctemp1079*Ny;
nctempfloat2 *nctemp1078;
nctemp1078=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1078->d[0]=Nx;
nctemp1078->d[1]=Ny;
nctemp1078->a=(float *)RunMalloc(sizeof(float)*nctemp1079);
Model->Eta2y=nctemp1078;

#line 216  "model.e"
int nctemp1090=Nx;
nctemp1090=nctemp1090*Ny;
nctempfloat2 *nctemp1089;
nctemp1089=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1089->d[0]=Nx;
nctemp1089->d[1]=Ny;
nctemp1089->a=(float *)RunMalloc(sizeof(float)*nctemp1090);
Model->Nu1x=nctemp1089;

#line 217  "model.e"
int nctemp1101=Nx;
nctemp1101=nctemp1101*Ny;
nctempfloat2 *nctemp1100;
nctemp1100=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1100->d[0]=Nx;
nctemp1100->d[1]=Ny;
nctemp1100->a=(float *)RunMalloc(sizeof(float)*nctemp1101);
Model->Nu1y=nctemp1100;

#line 218  "model.e"
int nctemp1112=Nx;
nctemp1112=nctemp1112*Ny;
nctempfloat2 *nctemp1111;
nctemp1111=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1111->d[0]=Nx;
nctemp1111->d[1]=Ny;
nctemp1111->a=(float *)RunMalloc(sizeof(float)*nctemp1112);
Model->Nu2x=nctemp1111;

#line 219  "model.e"
int nctemp1123=Nx;
nctemp1123=nctemp1123*Ny;
nctempfloat2 *nctemp1122;
nctemp1122=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1122->d[0]=Nx;
nctemp1122->d[1]=Ny;
nctemp1122->a=(float *)RunMalloc(sizeof(float)*nctemp1123);
Model->Nu2y=nctemp1122;

#line 222  "model.e"
j =0;
int nctemp1132 = (j < Ny);
while(nctemp1132){
{

#line 223  "model.e"
i =0;
int nctemp1140 = (i < Nx);
while(nctemp1140){
{

#line 224  "model.e"
int nctemp1147=i;
if((0>i)||(i>=Model->Rho->d[0])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(224,nctempstring,i,0,Model->Rho->d[0]);
}
nctemp1147=j*Model->Rho->d[0]+nctemp1147;
if((0>j)||(j>=Model->Rho->d[1])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(224,nctempstring,j,1,Model->Rho->d[1]);
}
int nctemp1155=i;
if((0>i)||(i>=rho->d[0])){
nctempstring->a="rho";
nctempstring->d[0]=strlen("rho")+1;;
LibeArrayex(224,nctempstring,i,0,rho->d[0]);
}
nctemp1155=j*rho->d[0]+nctemp1155;
if((0>j)||(j>=rho->d[1])){
nctempstring->a="rho";
nctempstring->d[0]=strlen("rho")+1;;
LibeArrayex(224,nctempstring,j,1,rho->d[1]);
}
float nctemp1158 = 1.0 / rho->a[nctemp1155];
Model->Rho->a[nctemp1147] =nctemp1158;

#line 225  "model.e"
int nctemp1162=i;
if((0>i)||(i>=Model->Mu->d[0])){
nctempstring->a="Model->Mu";
nctempstring->d[0]=strlen("Model->Mu")+1;;
LibeArrayex(225,nctempstring,i,0,Model->Mu->d[0]);
}
nctemp1162=j*Model->Mu->d[0]+nctemp1162;
if((0>j)||(j>=Model->Mu->d[1])){
nctempstring->a="Model->Mu";
nctempstring->d[0]=strlen("Model->Mu")+1;;
LibeArrayex(225,nctempstring,j,1,Model->Mu->d[1]);
}
int nctemp1172=i;
if((0>i)||(i>=rho->d[0])){
nctempstring->a="rho";
nctempstring->d[0]=strlen("rho")+1;;
LibeArrayex(225,nctempstring,i,0,rho->d[0]);
}
nctemp1172=j*rho->d[0]+nctemp1172;
if((0>j)||(j>=rho->d[1])){
nctempstring->a="rho";
nctempstring->d[0]=strlen("rho")+1;;
LibeArrayex(225,nctempstring,j,1,rho->d[1]);
}
int nctemp1176=i;
if((0>i)||(i>=vs->d[0])){
nctempstring->a="vs";
nctempstring->d[0]=strlen("vs")+1;;
LibeArrayex(225,nctempstring,i,0,vs->d[0]);
}
nctemp1176=j*vs->d[0]+nctemp1176;
if((0>j)||(j>=vs->d[1])){
nctempstring->a="vs";
nctempstring->d[0]=strlen("vs")+1;;
LibeArrayex(225,nctempstring,j,1,vs->d[1]);
}
float nctemp1179 = rho->a[nctemp1172] * vs->a[nctemp1176];
int nctemp1181=i;
if((0>i)||(i>=vs->d[0])){
nctempstring->a="vs";
nctempstring->d[0]=strlen("vs")+1;;
LibeArrayex(225,nctempstring,i,0,vs->d[0]);
}
nctemp1181=j*vs->d[0]+nctemp1181;
if((0>j)||(j>=vs->d[1])){
nctempstring->a="vs";
nctempstring->d[0]=strlen("vs")+1;;
LibeArrayex(225,nctempstring,j,1,vs->d[1]);
}
float nctemp1184 = nctemp1179 * vs->a[nctemp1181];
Model->Mu->a[nctemp1162] =nctemp1184;

#line 226  "model.e"
int nctemp1188=i;
if((0>i)||(i>=Model->Lambda->d[0])){
nctempstring->a="Model->Lambda";
nctempstring->d[0]=strlen("Model->Lambda")+1;;
LibeArrayex(226,nctempstring,i,0,Model->Lambda->d[0]);
}
nctemp1188=j*Model->Lambda->d[0]+nctemp1188;
if((0>j)||(j>=Model->Lambda->d[1])){
nctempstring->a="Model->Lambda";
nctempstring->d[0]=strlen("Model->Lambda")+1;;
LibeArrayex(226,nctempstring,j,1,Model->Lambda->d[1]);
}
int nctemp1195=i;
if((0>i)||(i>=rho->d[0])){
nctempstring->a="rho";
nctempstring->d[0]=strlen("rho")+1;;
LibeArrayex(226,nctempstring,i,0,rho->d[0]);
}
nctemp1195=j*rho->d[0]+nctemp1195;
if((0>j)||(j>=rho->d[1])){
nctempstring->a="rho";
nctempstring->d[0]=strlen("rho")+1;;
LibeArrayex(226,nctempstring,j,1,rho->d[1]);
}
int nctemp1205=i;
if((0>i)||(i>=vp->d[0])){
nctempstring->a="vp";
nctempstring->d[0]=strlen("vp")+1;;
LibeArrayex(226,nctempstring,i,0,vp->d[0]);
}
nctemp1205=j*vp->d[0]+nctemp1205;
if((0>j)||(j>=vp->d[1])){
nctempstring->a="vp";
nctempstring->d[0]=strlen("vp")+1;;
LibeArrayex(226,nctempstring,j,1,vp->d[1]);
}
int nctemp1209=i;
if((0>i)||(i>=vp->d[0])){
nctempstring->a="vp";
nctempstring->d[0]=strlen("vp")+1;;
LibeArrayex(226,nctempstring,i,0,vp->d[0]);
}
nctemp1209=j*vp->d[0]+nctemp1209;
if((0>j)||(j>=vp->d[1])){
nctempstring->a="vp";
nctempstring->d[0]=strlen("vp")+1;;
LibeArrayex(226,nctempstring,j,1,vp->d[1]);
}
float nctemp1212 = vp->a[nctemp1205] * vp->a[nctemp1209];
int nctemp1221=i;
if((0>i)||(i>=vs->d[0])){
nctempstring->a="vs";
nctempstring->d[0]=strlen("vs")+1;;
LibeArrayex(226,nctempstring,i,0,vs->d[0]);
}
nctemp1221=j*vs->d[0]+nctemp1221;
if((0>j)||(j>=vs->d[1])){
nctempstring->a="vs";
nctempstring->d[0]=strlen("vs")+1;;
LibeArrayex(226,nctempstring,j,1,vs->d[1]);
}
float nctemp1224 = 2.0 * vs->a[nctemp1221];
int nctemp1226=i;
if((0>i)||(i>=vs->d[0])){
nctempstring->a="vs";
nctempstring->d[0]=strlen("vs")+1;;
LibeArrayex(226,nctempstring,i,0,vs->d[0]);
}
nctemp1226=j*vs->d[0]+nctemp1226;
if((0>j)||(j>=vs->d[1])){
nctempstring->a="vs";
nctempstring->d[0]=strlen("vs")+1;;
LibeArrayex(226,nctempstring,j,1,vs->d[1]);
}
float nctemp1229 = nctemp1224 * vs->a[nctemp1226];
float nctemp1230 = nctemp1212 - nctemp1229;
float nctemp1231 = rho->a[nctemp1195] * nctemp1230;
Model->Lambda->a[nctemp1188] =nctemp1231;

#line 227  "model.e"
int nctemp1235=i;
if((0>i)||(i>=Model->Alpha1x->d[0])){
nctempstring->a="Model->Alpha1x";
nctempstring->d[0]=strlen("Model->Alpha1x")+1;;
LibeArrayex(227,nctempstring,i,0,Model->Alpha1x->d[0]);
}
nctemp1235=j*Model->Alpha1x->d[0]+nctemp1235;
if((0>j)||(j>=Model->Alpha1x->d[1])){
nctempstring->a="Model->Alpha1x";
nctempstring->d[0]=strlen("Model->Alpha1x")+1;;
LibeArrayex(227,nctempstring,j,1,Model->Alpha1x->d[1]);
}
Model->Alpha1x->a[nctemp1235] =0.0;

#line 228  "model.e"
int nctemp1242=i;
if((0>i)||(i>=Model->Alpha1y->d[0])){
nctempstring->a="Model->Alpha1y";
nctempstring->d[0]=strlen("Model->Alpha1y")+1;;
LibeArrayex(228,nctempstring,i,0,Model->Alpha1y->d[0]);
}
nctemp1242=j*Model->Alpha1y->d[0]+nctemp1242;
if((0>j)||(j>=Model->Alpha1y->d[1])){
nctempstring->a="Model->Alpha1y";
nctempstring->d[0]=strlen("Model->Alpha1y")+1;;
LibeArrayex(228,nctempstring,j,1,Model->Alpha1y->d[1]);
}
Model->Alpha1y->a[nctemp1242] =0.0;

#line 229  "model.e"
int nctemp1249=i;
if((0>i)||(i>=Model->Alpha2x->d[0])){
nctempstring->a="Model->Alpha2x";
nctempstring->d[0]=strlen("Model->Alpha2x")+1;;
LibeArrayex(229,nctempstring,i,0,Model->Alpha2x->d[0]);
}
nctemp1249=j*Model->Alpha2x->d[0]+nctemp1249;
if((0>j)||(j>=Model->Alpha2x->d[1])){
nctempstring->a="Model->Alpha2x";
nctempstring->d[0]=strlen("Model->Alpha2x")+1;;
LibeArrayex(229,nctempstring,j,1,Model->Alpha2x->d[1]);
}
Model->Alpha2x->a[nctemp1249] =0.0;

#line 230  "model.e"
int nctemp1256=i;
if((0>i)||(i>=Model->Alpha2y->d[0])){
nctempstring->a="Model->Alpha2y";
nctempstring->d[0]=strlen("Model->Alpha2y")+1;;
LibeArrayex(230,nctempstring,i,0,Model->Alpha2y->d[0]);
}
nctemp1256=j*Model->Alpha2y->d[0]+nctemp1256;
if((0>j)||(j>=Model->Alpha2y->d[1])){
nctempstring->a="Model->Alpha2y";
nctempstring->d[0]=strlen("Model->Alpha2y")+1;;
LibeArrayex(230,nctempstring,j,1,Model->Alpha2y->d[1]);
}
Model->Alpha2y->a[nctemp1256] =0.0;

#line 231  "model.e"
int nctemp1263=i;
if((0>i)||(i>=Model->Beta1x->d[0])){
nctempstring->a="Model->Beta1x";
nctempstring->d[0]=strlen("Model->Beta1x")+1;;
LibeArrayex(231,nctempstring,i,0,Model->Beta1x->d[0]);
}
nctemp1263=j*Model->Beta1x->d[0]+nctemp1263;
if((0>j)||(j>=Model->Beta1x->d[1])){
nctempstring->a="Model->Beta1x";
nctempstring->d[0]=strlen("Model->Beta1x")+1;;
LibeArrayex(231,nctempstring,j,1,Model->Beta1x->d[1]);
}
Model->Beta1x->a[nctemp1263] =0.0;

#line 232  "model.e"
int nctemp1270=i;
if((0>i)||(i>=Model->Beta1y->d[0])){
nctempstring->a="Model->Beta1y";
nctempstring->d[0]=strlen("Model->Beta1y")+1;;
LibeArrayex(232,nctempstring,i,0,Model->Beta1y->d[0]);
}
nctemp1270=j*Model->Beta1y->d[0]+nctemp1270;
if((0>j)||(j>=Model->Beta1y->d[1])){
nctempstring->a="Model->Beta1y";
nctempstring->d[0]=strlen("Model->Beta1y")+1;;
LibeArrayex(232,nctempstring,j,1,Model->Beta1y->d[1]);
}
Model->Beta1y->a[nctemp1270] =0.0;

#line 233  "model.e"
int nctemp1277=i;
if((0>i)||(i>=Model->Beta2x->d[0])){
nctempstring->a="Model->Beta2x";
nctempstring->d[0]=strlen("Model->Beta2x")+1;;
LibeArrayex(233,nctempstring,i,0,Model->Beta2x->d[0]);
}
nctemp1277=j*Model->Beta2x->d[0]+nctemp1277;
if((0>j)||(j>=Model->Beta2x->d[1])){
nctempstring->a="Model->Beta2x";
nctempstring->d[0]=strlen("Model->Beta2x")+1;;
LibeArrayex(233,nctempstring,j,1,Model->Beta2x->d[1]);
}
Model->Beta2x->a[nctemp1277] =0.0;

#line 234  "model.e"
int nctemp1284=i;
if((0>i)||(i>=Model->Beta2y->d[0])){
nctempstring->a="Model->Beta2y";
nctempstring->d[0]=strlen("Model->Beta2y")+1;;
LibeArrayex(234,nctempstring,i,0,Model->Beta2y->d[0]);
}
nctemp1284=j*Model->Beta2y->d[0]+nctemp1284;
if((0>j)||(j>=Model->Beta2y->d[1])){
nctempstring->a="Model->Beta2y";
nctempstring->d[0]=strlen("Model->Beta2y")+1;;
LibeArrayex(234,nctempstring,j,1,Model->Beta2y->d[1]);
}
Model->Beta2y->a[nctemp1284] =0.0;

#line 235  "model.e"
int nctemp1291=i;
if((0>i)||(i>=Model->Eta1x->d[0])){
nctempstring->a="Model->Eta1x";
nctempstring->d[0]=strlen("Model->Eta1x")+1;;
LibeArrayex(235,nctempstring,i,0,Model->Eta1x->d[0]);
}
nctemp1291=j*Model->Eta1x->d[0]+nctemp1291;
if((0>j)||(j>=Model->Eta1x->d[1])){
nctempstring->a="Model->Eta1x";
nctempstring->d[0]=strlen("Model->Eta1x")+1;;
LibeArrayex(235,nctempstring,j,1,Model->Eta1x->d[1]);
}
Model->Eta1x->a[nctemp1291] =0.0;

#line 236  "model.e"
int nctemp1298=i;
if((0>i)||(i>=Model->Eta1y->d[0])){
nctempstring->a="Model->Eta1y";
nctempstring->d[0]=strlen("Model->Eta1y")+1;;
LibeArrayex(236,nctempstring,i,0,Model->Eta1y->d[0]);
}
nctemp1298=j*Model->Eta1y->d[0]+nctemp1298;
if((0>j)||(j>=Model->Eta1y->d[1])){
nctempstring->a="Model->Eta1y";
nctempstring->d[0]=strlen("Model->Eta1y")+1;;
LibeArrayex(236,nctempstring,j,1,Model->Eta1y->d[1]);
}
Model->Eta1y->a[nctemp1298] =0.0;

#line 237  "model.e"
int nctemp1305=i;
if((0>i)||(i>=Model->Eta2x->d[0])){
nctempstring->a="Model->Eta2x";
nctempstring->d[0]=strlen("Model->Eta2x")+1;;
LibeArrayex(237,nctempstring,i,0,Model->Eta2x->d[0]);
}
nctemp1305=j*Model->Eta2x->d[0]+nctemp1305;
if((0>j)||(j>=Model->Eta2x->d[1])){
nctempstring->a="Model->Eta2x";
nctempstring->d[0]=strlen("Model->Eta2x")+1;;
LibeArrayex(237,nctempstring,j,1,Model->Eta2x->d[1]);
}
Model->Eta2x->a[nctemp1305] =0.0;

#line 238  "model.e"
int nctemp1312=i;
if((0>i)||(i>=Model->Eta2y->d[0])){
nctempstring->a="Model->Eta2y";
nctempstring->d[0]=strlen("Model->Eta2y")+1;;
LibeArrayex(238,nctempstring,i,0,Model->Eta2y->d[0]);
}
nctemp1312=j*Model->Eta2y->d[0]+nctemp1312;
if((0>j)||(j>=Model->Eta2y->d[1])){
nctempstring->a="Model->Eta2y";
nctempstring->d[0]=strlen("Model->Eta2y")+1;;
LibeArrayex(238,nctempstring,j,1,Model->Eta2y->d[1]);
}
Model->Eta2y->a[nctemp1312] =0.0;

#line 239  "model.e"
int nctemp1319=i;
if((0>i)||(i>=Model->Dlambdax->d[0])){
nctempstring->a="Model->Dlambdax";
nctempstring->d[0]=strlen("Model->Dlambdax")+1;;
LibeArrayex(239,nctempstring,i,0,Model->Dlambdax->d[0]);
}
nctemp1319=j*Model->Dlambdax->d[0]+nctemp1319;
if((0>j)||(j>=Model->Dlambdax->d[1])){
nctempstring->a="Model->Dlambdax";
nctempstring->d[0]=strlen("Model->Dlambdax")+1;;
LibeArrayex(239,nctempstring,j,1,Model->Dlambdax->d[1]);
}
int nctemp1323=i;
if((0>i)||(i>=Model->Lambda->d[0])){
nctempstring->a="Model->Lambda";
nctempstring->d[0]=strlen("Model->Lambda")+1;;
LibeArrayex(239,nctempstring,i,0,Model->Lambda->d[0]);
}
nctemp1323=j*Model->Lambda->d[0]+nctemp1323;
if((0>j)||(j>=Model->Lambda->d[1])){
nctempstring->a="Model->Lambda";
nctempstring->d[0]=strlen("Model->Lambda")+1;;
LibeArrayex(239,nctempstring,j,1,Model->Lambda->d[1]);
}
Model->Dlambdax->a[nctemp1319] =Model->Lambda->a[nctemp1323];

#line 240  "model.e"
int nctemp1329=i;
if((0>i)||(i>=Model->Dlambday->d[0])){
nctempstring->a="Model->Dlambday";
nctempstring->d[0]=strlen("Model->Dlambday")+1;;
LibeArrayex(240,nctempstring,i,0,Model->Dlambday->d[0]);
}
nctemp1329=j*Model->Dlambday->d[0]+nctemp1329;
if((0>j)||(j>=Model->Dlambday->d[1])){
nctempstring->a="Model->Dlambday";
nctempstring->d[0]=strlen("Model->Dlambday")+1;;
LibeArrayex(240,nctempstring,j,1,Model->Dlambday->d[1]);
}
int nctemp1333=i;
if((0>i)||(i>=Model->Lambda->d[0])){
nctempstring->a="Model->Lambda";
nctempstring->d[0]=strlen("Model->Lambda")+1;;
LibeArrayex(240,nctempstring,i,0,Model->Lambda->d[0]);
}
nctemp1333=j*Model->Lambda->d[0]+nctemp1333;
if((0>j)||(j>=Model->Lambda->d[1])){
nctempstring->a="Model->Lambda";
nctempstring->d[0]=strlen("Model->Lambda")+1;;
LibeArrayex(240,nctempstring,j,1,Model->Lambda->d[1]);
}
Model->Dlambday->a[nctemp1329] =Model->Lambda->a[nctemp1333];

#line 241  "model.e"
int nctemp1339=i;
if((0>i)||(i>=Model->Dmux->d[0])){
nctempstring->a="Model->Dmux";
nctempstring->d[0]=strlen("Model->Dmux")+1;;
LibeArrayex(241,nctempstring,i,0,Model->Dmux->d[0]);
}
nctemp1339=j*Model->Dmux->d[0]+nctemp1339;
if((0>j)||(j>=Model->Dmux->d[1])){
nctempstring->a="Model->Dmux";
nctempstring->d[0]=strlen("Model->Dmux")+1;;
LibeArrayex(241,nctempstring,j,1,Model->Dmux->d[1]);
}
int nctemp1343=i;
if((0>i)||(i>=Model->Mu->d[0])){
nctempstring->a="Model->Mu";
nctempstring->d[0]=strlen("Model->Mu")+1;;
LibeArrayex(241,nctempstring,i,0,Model->Mu->d[0]);
}
nctemp1343=j*Model->Mu->d[0]+nctemp1343;
if((0>j)||(j>=Model->Mu->d[1])){
nctempstring->a="Model->Mu";
nctempstring->d[0]=strlen("Model->Mu")+1;;
LibeArrayex(241,nctempstring,j,1,Model->Mu->d[1]);
}
Model->Dmux->a[nctemp1339] =Model->Mu->a[nctemp1343];

#line 242  "model.e"
int nctemp1349=i;
if((0>i)||(i>=Model->Dmuy->d[0])){
nctempstring->a="Model->Dmuy";
nctempstring->d[0]=strlen("Model->Dmuy")+1;;
LibeArrayex(242,nctempstring,i,0,Model->Dmuy->d[0]);
}
nctemp1349=j*Model->Dmuy->d[0]+nctemp1349;
if((0>j)||(j>=Model->Dmuy->d[1])){
nctempstring->a="Model->Dmuy";
nctempstring->d[0]=strlen("Model->Dmuy")+1;;
LibeArrayex(242,nctempstring,j,1,Model->Dmuy->d[1]);
}
int nctemp1353=i;
if((0>i)||(i>=Model->Mu->d[0])){
nctempstring->a="Model->Mu";
nctempstring->d[0]=strlen("Model->Mu")+1;;
LibeArrayex(242,nctempstring,i,0,Model->Mu->d[0]);
}
nctemp1353=j*Model->Mu->d[0]+nctemp1353;
if((0>j)||(j>=Model->Mu->d[1])){
nctempstring->a="Model->Mu";
nctempstring->d[0]=strlen("Model->Mu")+1;;
LibeArrayex(242,nctempstring,j,1,Model->Mu->d[1]);
}
Model->Dmuy->a[nctemp1349] =Model->Mu->a[nctemp1353];

#line 243  "model.e"
int nctemp1359=i;
if((0>i)||(i>=Model->Drhopx->d[0])){
nctempstring->a="Model->Drhopx";
nctempstring->d[0]=strlen("Model->Drhopx")+1;;
LibeArrayex(243,nctempstring,i,0,Model->Drhopx->d[0]);
}
nctemp1359=j*Model->Drhopx->d[0]+nctemp1359;
if((0>j)||(j>=Model->Drhopx->d[1])){
nctempstring->a="Model->Drhopx";
nctempstring->d[0]=strlen("Model->Drhopx")+1;;
LibeArrayex(243,nctempstring,j,1,Model->Drhopx->d[1]);
}
int nctemp1363=i;
if((0>i)||(i>=Model->Rho->d[0])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(243,nctempstring,i,0,Model->Rho->d[0]);
}
nctemp1363=j*Model->Rho->d[0]+nctemp1363;
if((0>j)||(j>=Model->Rho->d[1])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(243,nctempstring,j,1,Model->Rho->d[1]);
}
Model->Drhopx->a[nctemp1359] =Model->Rho->a[nctemp1363];

#line 244  "model.e"
int nctemp1369=i;
if((0>i)||(i>=Model->Drhopy->d[0])){
nctempstring->a="Model->Drhopy";
nctempstring->d[0]=strlen("Model->Drhopy")+1;;
LibeArrayex(244,nctempstring,i,0,Model->Drhopy->d[0]);
}
nctemp1369=j*Model->Drhopy->d[0]+nctemp1369;
if((0>j)||(j>=Model->Drhopy->d[1])){
nctempstring->a="Model->Drhopy";
nctempstring->d[0]=strlen("Model->Drhopy")+1;;
LibeArrayex(244,nctempstring,j,1,Model->Drhopy->d[1]);
}
int nctemp1373=i;
if((0>i)||(i>=Model->Rho->d[0])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(244,nctempstring,i,0,Model->Rho->d[0]);
}
nctemp1373=j*Model->Rho->d[0]+nctemp1373;
if((0>j)||(j>=Model->Rho->d[1])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(244,nctempstring,j,1,Model->Rho->d[1]);
}
Model->Drhopy->a[nctemp1369] =Model->Rho->a[nctemp1373];

#line 245  "model.e"
int nctemp1379=i;
if((0>i)||(i>=Model->Drhosx->d[0])){
nctempstring->a="Model->Drhosx";
nctempstring->d[0]=strlen("Model->Drhosx")+1;;
LibeArrayex(245,nctempstring,i,0,Model->Drhosx->d[0]);
}
nctemp1379=j*Model->Drhosx->d[0]+nctemp1379;
if((0>j)||(j>=Model->Drhosx->d[1])){
nctempstring->a="Model->Drhosx";
nctempstring->d[0]=strlen("Model->Drhosx")+1;;
LibeArrayex(245,nctempstring,j,1,Model->Drhosx->d[1]);
}
int nctemp1383=i;
if((0>i)||(i>=Model->Rho->d[0])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(245,nctempstring,i,0,Model->Rho->d[0]);
}
nctemp1383=j*Model->Rho->d[0]+nctemp1383;
if((0>j)||(j>=Model->Rho->d[1])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(245,nctempstring,j,1,Model->Rho->d[1]);
}
Model->Drhosx->a[nctemp1379] =Model->Rho->a[nctemp1383];

#line 246  "model.e"
int nctemp1389=i;
if((0>i)||(i>=Model->Drhosy->d[0])){
nctempstring->a="Model->Drhosy";
nctempstring->d[0]=strlen("Model->Drhosy")+1;;
LibeArrayex(246,nctempstring,i,0,Model->Drhosy->d[0]);
}
nctemp1389=j*Model->Drhosy->d[0]+nctemp1389;
if((0>j)||(j>=Model->Drhosy->d[1])){
nctempstring->a="Model->Drhosy";
nctempstring->d[0]=strlen("Model->Drhosy")+1;;
LibeArrayex(246,nctempstring,j,1,Model->Drhosy->d[1]);
}
int nctemp1393=i;
if((0>i)||(i>=Model->Rho->d[0])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(246,nctempstring,i,0,Model->Rho->d[0]);
}
nctemp1393=j*Model->Rho->d[0]+nctemp1393;
if((0>j)||(j>=Model->Rho->d[1])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(246,nctempstring,j,1,Model->Rho->d[1]);
}
Model->Drhosy->a[nctemp1389] =Model->Rho->a[nctemp1393];

#line 223  "model.e"
}
int nctemp1404 = i + 1;
i =nctemp1404;
int nctemp1405 = (i < Nx);
nctemp1140=nctemp1405;
}

#line 222  "model.e"
}
int nctemp1417 = j + 1;
j =nctemp1417;
int nctemp1418 = (j < Ny);
nctemp1132=nctemp1418;
}

#line 251  "model.e"
nctempfloat2* nctemp1423= Model->Qlx;
nctempfloat2* nctemp1426= Model->Qly;
nctempfloat2* nctemp1429= Model->Dlambdax;
nctempfloat2* nctemp1432= Model->Dlambday;

#line 252  "model.e"
nctempfloat2* nctemp1435= Model->Alpha1x;
nctempfloat2* nctemp1438= Model->Alpha1y;

#line 253  "model.e"
nctempfloat2* nctemp1441= Model->Alpha2x;
nctempfloat2* nctemp1444= Model->Alpha2y;
struct model* nctemp1447= Model;

#line 251  "model.e"
int nctemp1449=Modelslscoeffs(nctemp1423,nctemp1426,nctemp1429,nctemp1432,nctemp1435,nctemp1438,nctemp1441,nctemp1444,nctemp1447);

#line 254  "model.e"
nctempfloat2* nctemp1451= Model->Qmx;
nctempfloat2* nctemp1454= Model->Qmy;
nctempfloat2* nctemp1457= Model->Dmux;
nctempfloat2* nctemp1460= Model->Dmuy;
nctempfloat2* nctemp1463= Model->Beta1x;
nctempfloat2* nctemp1466= Model->Beta1y;

#line 255  "model.e"
nctempfloat2* nctemp1469= Model->Beta2x;
nctempfloat2* nctemp1472= Model->Beta2y;
struct model* nctemp1475= Model;

#line 254  "model.e"
int nctemp1477=Modelslscoeffs(nctemp1451,nctemp1454,nctemp1457,nctemp1460,nctemp1463,nctemp1466,nctemp1469,nctemp1472,nctemp1475);

#line 256  "model.e"
nctempfloat2* nctemp1479= Model->Qpx;
nctempfloat2* nctemp1482= Model->Qpy;
nctempfloat2* nctemp1485= Model->Drhopx;
nctempfloat2* nctemp1488= Model->Drhopy;
nctempfloat2* nctemp1491= Model->Eta1x;

#line 257  "model.e"
nctempfloat2* nctemp1494= Model->Eta1y;
nctempfloat2* nctemp1497= Model->Eta2x;
nctempfloat2* nctemp1500= Model->Eta2y;
struct model* nctemp1503= Model;

#line 256  "model.e"
int nctemp1505=Modelslscoeffs(nctemp1479,nctemp1482,nctemp1485,nctemp1488,nctemp1491,nctemp1494,nctemp1497,nctemp1500,nctemp1503);

#line 258  "model.e"
nctempfloat2* nctemp1507= Model->Qsx;
nctempfloat2* nctemp1510= Model->Qsy;
nctempfloat2* nctemp1513= Model->Drhosx;
nctempfloat2* nctemp1516= Model->Drhosy;
nctempfloat2* nctemp1519= Model->Nu1x;
nctempfloat2* nctemp1522= Model->Nu1y;

#line 259  "model.e"
nctempfloat2* nctemp1525= Model->Nu2x;
nctempfloat2* nctemp1528= Model->Nu2y;
struct model* nctemp1531= Model;

#line 258  "model.e"
int nctemp1533=Modelslscoeffs(nctemp1507,nctemp1510,nctemp1513,nctemp1516,nctemp1519,nctemp1522,nctemp1525,nctemp1528,nctemp1531);

#line 260  "model.e"
return Model;

#line 157  "model.e"
}

#line 263  "model.e"
struct model* ModelNew (nctempfloat2 *vp,nctempfloat2 *vs,nctempfloat2 *rho,nctempfloat2 *Qlx,nctempfloat2 *Qly,nctempfloat2 *Qmx,nctempfloat2 *Qmy,nctempfloat2 *Qpx,nctempfloat2 *Qpy,nctempfloat2 *Qsx,nctempfloat2 *Qsy,float Dx,float Dt,float W0,int Nb,int Rheol)

#line 287  "model.e"
{

#line 288  "model.e"
struct model* m;

#line 290  "model.e"
int nctemp1535 = (Rheol ==2);
if(nctemp1535)
{

#line 291  "model.e"
nctempfloat2* nctemp1543= vp;
nctempfloat2* nctemp1546= vs;
nctempfloat2* nctemp1549= rho;
nctempfloat2* nctemp1552= Qlx;
nctempfloat2* nctemp1555= Qly;
nctempfloat2* nctemp1558= Qmx;
nctempfloat2* nctemp1561= Qmy;
nctempfloat2* nctemp1564= Qpx;
nctempfloat2* nctemp1567= Qpy;
nctempfloat2* nctemp1570= Qsx;
nctempfloat2* nctemp1573= Qsy;

#line 292  "model.e"
float nctemp1576= Dx;
float nctemp1578= Dt;
float nctemp1580= W0;
int nctemp1582= Nb;

#line 291  "model.e"
struct model* nctemp1584=Modelsls(nctemp1543,nctemp1546,nctemp1549,nctemp1552,nctemp1555,nctemp1558,nctemp1561,nctemp1564,nctemp1567,nctemp1570,nctemp1573,nctemp1576,nctemp1578,nctemp1580,nctemp1582);
m =nctemp1584;

#line 290  "model.e"
}

#line 294  "model.e"
else{

#line 295  "model.e"
int nctemp1586= 4;
struct nctempchar1 *nctemp1590;
static struct nctempchar1 nctemp1591 = {{ 18}, (char*)"Unknown Q-model\n\0"};
nctemp1590=&nctemp1591;
nctempchar1* nctemp1588= nctemp1590;
int nctemp1592=LibePuts(nctemp1586,nctemp1588);

#line 296  "model.e"
int nctemp1594= 4;
int nctemp1596=LibeFlush(nctemp1594);

#line 298  "model.e"
int nctemp1598=LibeExit();

#line 294  "model.e"
}

#line 300  "model.e"
return m;

#line 287  "model.e"
}

#line 303  "model.e"
float ModelStability (struct model* Model)

#line 312  "model.e"
{

#line 313  "model.e"
int nx;
int ny;
int i;
int j;
float vp;
float stab;

#line 317  "model.e"
nx =Model->Nx;

#line 318  "model.e"
ny =Model->Ny;

#line 319  "model.e"
j =0;
int nctemp1612 = (j < ny);
while(nctemp1612){
{

#line 320  "model.e"
i =0;
int nctemp1620 = (i < nx);
while(nctemp1620){
{

#line 321  "model.e"
int nctemp1635=i;
if((0>i)||(i>=Model->Lambda->d[0])){
nctempstring->a="Model->Lambda";
nctempstring->d[0]=strlen("Model->Lambda")+1;;
LibeArrayex(321,nctempstring,i,0,Model->Lambda->d[0]);
}
nctemp1635=j*Model->Lambda->d[0]+nctemp1635;
if((0>j)||(j>=Model->Lambda->d[1])){
nctempstring->a="Model->Lambda";
nctempstring->d[0]=strlen("Model->Lambda")+1;;
LibeArrayex(321,nctempstring,j,1,Model->Lambda->d[1]);
}
int nctemp1643=i;
if((0>i)||(i>=Model->Mu->d[0])){
nctempstring->a="Model->Mu";
nctempstring->d[0]=strlen("Model->Mu")+1;;
LibeArrayex(321,nctempstring,i,0,Model->Mu->d[0]);
}
nctemp1643=j*Model->Mu->d[0]+nctemp1643;
if((0>j)||(j>=Model->Mu->d[1])){
nctempstring->a="Model->Mu";
nctempstring->d[0]=strlen("Model->Mu")+1;;
LibeArrayex(321,nctempstring,j,1,Model->Mu->d[1]);
}
float nctemp1646 = 2.0 * Model->Mu->a[nctemp1643];
float nctemp1647 = Model->Lambda->a[nctemp1635] + nctemp1646;
int nctemp1649=i;
if((0>i)||(i>=Model->Rho->d[0])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(321,nctempstring,i,0,Model->Rho->d[0]);
}
nctemp1649=j*Model->Rho->d[0]+nctemp1649;
if((0>j)||(j>=Model->Rho->d[1])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(321,nctempstring,j,1,Model->Rho->d[1]);
}
float nctemp1652 = nctemp1647 / Model->Rho->a[nctemp1649];
float nctemp1628= nctemp1652;
float nctemp1653=LibeSqrt(nctemp1628);
vp =nctemp1653;

#line 322  "model.e"
float nctemp1665 = vp * Model->Dt;
float nctemp1667 = nctemp1665 / Model->Dx;
stab =nctemp1667;

#line 323  "model.e"
float nctemp1676= 2.0;
float nctemp1678=LibeSqrt(nctemp1676);
float nctemp1679 = 1.0 / nctemp1678;
int nctemp1668 = (stab > nctemp1679);
if(nctemp1668)
{

#line 324  "model.e"
int nctemp1681= 4;
struct nctempchar1 *nctemp1685;
static struct nctempchar1 nctemp1686 = {{ 28}, (char*)"Stability index too large! \0"};
nctemp1685=&nctemp1686;
nctempchar1* nctemp1683= nctemp1685;
int nctemp1687=LibePuts(nctemp1681,nctemp1683);

#line 325  "model.e"
int nctemp1689= 4;
float nctemp1691= stab;
struct nctempchar1 *nctemp1695;
static struct nctempchar1 nctemp1696 = {{ 2}, (char*)"g\0"};
nctemp1695=&nctemp1696;
nctempchar1* nctemp1693= nctemp1695;
int nctemp1697=LibePutf(nctemp1689,nctemp1691,nctemp1693);

#line 326  "model.e"
int nctemp1699= 4;
struct nctempchar1 *nctemp1703;
static struct nctempchar1 nctemp1704 = {{ 3}, (char*)"\n\0"};
nctemp1703=&nctemp1704;
nctempchar1* nctemp1701= nctemp1703;
int nctemp1705=LibePuts(nctemp1699,nctemp1701);

#line 327  "model.e"
int nctemp1707= 4;
struct nctempchar1 *nctemp1711;
static struct nctempchar1 nctemp1712 = {{ 7}, (char*)"vp: \n\0"};
nctemp1711=&nctemp1712;
nctempchar1* nctemp1709= nctemp1711;
int nctemp1713=LibePuts(nctemp1707,nctemp1709);

#line 328  "model.e"
int nctemp1715= 4;
float nctemp1717= vp;
struct nctempchar1 *nctemp1721;
static struct nctempchar1 nctemp1722 = {{ 2}, (char*)"g\0"};
nctemp1721=&nctemp1722;
nctempchar1* nctemp1719= nctemp1721;
int nctemp1723=LibePutf(nctemp1715,nctemp1717,nctemp1719);

#line 329  "model.e"
int nctemp1725= 4;
struct nctempchar1 *nctemp1729;
static struct nctempchar1 nctemp1730 = {{ 3}, (char*)"\n\0"};
nctemp1729=&nctemp1730;
nctempchar1* nctemp1727= nctemp1729;
int nctemp1731=LibePuts(nctemp1725,nctemp1727);

#line 330  "model.e"
int nctemp1733= 4;
struct nctempchar1 *nctemp1737;
static struct nctempchar1 nctemp1738 = {{ 7}, (char*)"dt: \n\0"};
nctemp1737=&nctemp1738;
nctempchar1* nctemp1735= nctemp1737;
int nctemp1739=LibePuts(nctemp1733,nctemp1735);

#line 331  "model.e"
int nctemp1741= 4;
float nctemp1743= Model->Dt;
struct nctempchar1 *nctemp1747;
static struct nctempchar1 nctemp1748 = {{ 2}, (char*)"g\0"};
nctemp1747=&nctemp1748;
nctempchar1* nctemp1745= nctemp1747;
int nctemp1749=LibePutf(nctemp1741,nctemp1743,nctemp1745);

#line 332  "model.e"
int nctemp1751= 4;
struct nctempchar1 *nctemp1755;
static struct nctempchar1 nctemp1756 = {{ 3}, (char*)"\n\0"};
nctemp1755=&nctemp1756;
nctempchar1* nctemp1753= nctemp1755;
int nctemp1757=LibePuts(nctemp1751,nctemp1753);

#line 333  "model.e"
int nctemp1759= 4;
struct nctempchar1 *nctemp1763;
static struct nctempchar1 nctemp1764 = {{ 7}, (char*)"dx: \n\0"};
nctemp1763=&nctemp1764;
nctempchar1* nctemp1761= nctemp1763;
int nctemp1765=LibePuts(nctemp1759,nctemp1761);

#line 334  "model.e"
int nctemp1767= 4;
float nctemp1769= Model->Dx;
struct nctempchar1 *nctemp1773;
static struct nctempchar1 nctemp1774 = {{ 2}, (char*)"g\0"};
nctemp1773=&nctemp1774;
nctempchar1* nctemp1771= nctemp1773;
int nctemp1775=LibePutf(nctemp1767,nctemp1769,nctemp1771);

#line 335  "model.e"
int nctemp1777= 4;
struct nctempchar1 *nctemp1781;
static struct nctempchar1 nctemp1782 = {{ 3}, (char*)"\n\0"};
nctemp1781=&nctemp1782;
nctempchar1* nctemp1779= nctemp1781;
int nctemp1783=LibePuts(nctemp1777,nctemp1779);

#line 336  "model.e"
int nctemp1785= 4;
int nctemp1787=LibeFlush(nctemp1785);

#line 323  "model.e"
}

#line 320  "model.e"
}
int nctemp1796 = i + 1;
i =nctemp1796;
int nctemp1797 = (i < nx);
nctemp1620=nctemp1797;
}

#line 319  "model.e"
}
int nctemp1809 = j + 1;
j =nctemp1809;
int nctemp1810 = (j < ny);
nctemp1612=nctemp1810;
}

#line 341  "model.e"
return stab;

#line 312  "model.e"
}
