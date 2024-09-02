
#line 1  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
//  Translated by epsc  version today  

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

#line 60  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeArrayex (int line,nctempchar1 *name,int ival,int index,int bound);

#line 63  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeClearerr ();

#line 65  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeGeterrno ();

#line 67  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
nctempchar1* LibeGeterrstr ();

#line 118  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
struct MainArg {nctempchar1 *arg;
};
typedef struct nctempMainArg1 {int d[1]; struct MainArg *a; } nctempMainArg1;
struct nctempMainArg2 {int d[2]; struct MainArg *a; } ;
struct nctempMainArg3 {int d[3]; struct MainArg *a; } ;
struct nctempMainArg4 {int d[4]; struct MainArg *a; } ;

#line 121  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int Main (struct nctempMainArg1 *MainArgs);

#line 126  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeInit ();

#line 128  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeDelete ();

#line 130  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeExit ();

#line 132  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
nctempchar1* LibeGetenv (nctempchar1 *name);

#line 146  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeOpen (nctempchar1 *name,nctempchar1 *mode);

#line 148  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeClose (int fp);

#line 150  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeGetc (int fp);

#line 152  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeUngetc (int fp);

#line 154  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeGetw (int fp,nctempchar1 *text);

#line 156  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibePs (nctempchar1 *s);

#line 158  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibePi (int n);

#line 160  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibePf (float r);

#line 162  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibePutf (int fp,float r,nctempchar1 *form);

#line 164  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibePutc (int fp,int c);

#line 166  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibePuts (int fp,nctempchar1 *s);

#line 168  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibePuti (int fp,int ival);

#line 170  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeRead (int fp,int n,nctempchar1 *array);

#line 172  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeWrite (int fp,int n,nctempchar1 *array);

#line 174  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeSeek (int fp,int pos,int flag);

#line 176  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeFlush (int fp);

#line 210  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeStrlen (nctempchar1 *s);

#line 212  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeStrcmp (nctempchar1 *s,nctempchar1 *t);

#line 214  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeStrev (nctempchar1 *s);

#line 216  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
nctempchar1* LibeStrsave (nctempchar1 *s);

#line 218  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeStrcpy (nctempchar1 *s,nctempchar1 *t);

#line 220  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeStrcat (nctempchar1 *s,nctempchar1 *t);

#line 222  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
nctempchar1* LibeStradd (nctempchar1 *t,nctempchar1 *s);

#line 224  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeIsalpha (int c);

#line 226  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeIsdigit (int c);

#line 228  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeIsalnum (int c);

#line 252  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeAtoi (nctempchar1 *s);

#line 254  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeItoa (int n,nctempchar1 *s);

#line 256  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeItoh (int n,nctempchar1 *s);

#line 258  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeAtof (nctempchar1 *s);

#line 260  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeFtoa (float f,nctempchar1 *fmt,nctempchar1 *s);

#line 288  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeMach (int flag);

#line 290  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeFabs (float x);

#line 292  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeFscale2 (float x,int n);

#line 294  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeGetfman2 (float x);

#line 296  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeGetfexp2 (float x);

#line 298  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeFscale (float x,int n);

#line 300  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeGetfman (float f,int maxdig);

#line 302  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeGetffman (float f);

#line 304  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeGetmaxdig (float f);

#line 306  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeGetfexp (float f);

#line 331  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeClock ();

#line 339  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeSetnb (int n);

#line 342  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeSetnt (int n);

#line 346  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeGetnb ();

#line 349  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeGetnt ();

#line 354  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeMod (int n,int r);

#line 362  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeSqrt (float x);

#line 364  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeLn (float x);

#line 366  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeExp (float x);

#line 368  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeSin (float x);

#line 370  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeCos (float x);

#line 372  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeTan (float x);

#line 374  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeArcsin (float x);

#line 376  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeArccos (float x);

#line 378  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeArctan (float x);

#line 380  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibePow (float base,float exponent);

#line 386  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
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

#line 58  "model.i"
struct model* ModelNew (nctempfloat2 *vp,nctempfloat2 *vs,nctempfloat2 *rho,nctempfloat2 *Qlx,nctempfloat2 *Qly,nctempfloat2 *Qmx,nctempfloat2 *Qmy,nctempfloat2 *Qpx,nctempfloat2 *Qpy,float Dx,float Dt,float W0,int Nb,int Rheol);

#line 63  "model.i"
float ModelStability (struct model* Model);

#line 9  "model.e"
struct model* Modelsls (nctempfloat2 *vp,nctempfloat2 *vs,nctempfloat2 *rho,nctempfloat2 *Qlx,nctempfloat2 *Qly,nctempfloat2 *Qmx,nctempfloat2 *Qmy,nctempfloat2 *Qpx,nctempfloat2 *Qpy,float Dx,float Dt,float W0,int Nb);

#line 15  "model.e"
int Modelslscoeffs (nctempfloat2 *Qx,nctempfloat2 *Qy,nctempfloat2 *modx,nctempfloat2 *mody,nctempfloat2 *coeff1x,nctempfloat2 *coeff1y,nctempfloat2 *coeff2x,nctempfloat2 *coeff2y,struct model* Model);

#line 21  "model.e"
int Modeld (nctempfloat1 *d,float dx,int nb);

#line 24  "model.e"
nctempfloat2* Modelcopy (nctempfloat2 *a);

#line 27  "model.e"
int Modelstaggerx (nctempfloat2 *a,nctempfloat2 *astagg);

#line 30  "model.e"
int Modelstaggery (nctempfloat2 *a,nctempfloat2 *astagg);

#line 34  "model.e"
int Modeld (nctempfloat1 *d,float dx,int nb)
{

#line 47  "model.e"
int i;
int n;

#line 49  "model.e"
int nctemp5=d->d[0];n =nctemp5;

#line 51  "model.e"
i =0;
int nctemp13 = (i < n);
while(nctemp13){
{

#line 52  "model.e"
int nctemp20=i;
if((0>i)||(i>=d->d[0])){
nctempstring->a="d";
nctempstring->d[0]=strlen("d")+1;;
LibeArrayex(52,nctempstring,i,0,d->d[0]);
}
d->a[nctemp20] =1.0;

#line 51  "model.e"
}
int nctemp31 = i + 1;
i =nctemp31;
int nctemp32 = (i < n);
nctemp13=nctemp32;
}

#line 57  "model.e"
i =0;
int nctemp40 = (i < nb);
while(nctemp40){
{

#line 58  "model.e"
int nctemp47=i;
if((0>i)||(i>=d->d[0])){
nctempstring->a="d";
nctempstring->d[0]=strlen("d")+1;;
LibeArrayex(58,nctempstring,i,0,d->d[0]);
}
int nctemp53=i;
if((0>i)||(i>=d->d[0])){
nctempstring->a="d";
nctempstring->d[0]=strlen("d")+1;;
LibeArrayex(58,nctempstring,i,0,d->d[0]);
}
float nctemp68=(float)(i);
float nctemp72 = nctemp68 * dx;
float nctemp77=(float)(nb);
float nctemp81 = nctemp77 * dx;
float nctemp82 = nctemp72 / nctemp81;

#line 59  "model.e"
float nctemp87=(float)(i);
float nctemp91 = nctemp87 * dx;
float nctemp92 = nctemp82 * nctemp91;
float nctemp97=(float)(nb);
float nctemp101 = nctemp97 * dx;
float nctemp102 = nctemp92 / nctemp101;

#line 58  "model.e"
float nctemp103 = d->a[nctemp53] * nctemp102;
d->a[nctemp47] =nctemp103;

#line 57  "model.e"
}
int nctemp112 = i + 1;
i =nctemp112;
int nctemp113 = (i < nb);
nctemp40=nctemp113;
}

#line 62  "model.e"
int nctemp128 = n - 1;
int nctemp130 = nctemp128 - nb;
i =nctemp130;
int nctemp131 = (i < n);
while(nctemp131){
{

#line 63  "model.e"
int nctemp138=i;
if((0>i)||(i>=d->d[0])){
nctempstring->a="d";
nctempstring->d[0]=strlen("d")+1;;
LibeArrayex(63,nctempstring,i,0,d->d[0]);
}
int nctemp144=i;
if((0>i)||(i>=d->d[0])){
nctempstring->a="d";
nctempstring->d[0]=strlen("d")+1;;
LibeArrayex(63,nctempstring,i,0,d->d[0]);
}
int nctemp168 = n - 1;
int nctemp170 = nctemp168 - i;
float nctemp159=(float)(nctemp170);
float nctemp172 = nctemp159 * dx;
float nctemp177=(float)(nb);
float nctemp181 = nctemp177 * dx;
float nctemp182 = nctemp172 / nctemp181;

#line 64  "model.e"
int nctemp196 = n - 1;
int nctemp198 = nctemp196 - i;
float nctemp187=(float)(nctemp198);
float nctemp200 = nctemp187 * dx;
float nctemp201 = nctemp182 * nctemp200;
float nctemp206=(float)(nb);
float nctemp210 = nctemp206 * dx;
float nctemp211 = nctemp201 / nctemp210;

#line 63  "model.e"
float nctemp212 = d->a[nctemp144] * nctemp211;
d->a[nctemp138] =nctemp212;

#line 62  "model.e"
}
int nctemp221 = i + 1;
i =nctemp221;
int nctemp222 = (i < n);
nctemp131=nctemp222;
}

#line 66  "model.e"
return 1;

#line 34  "model.e"
}

#line 69  "model.e"
nctempfloat2 * Modelcopy (nctempfloat2 *a)
{

#line 79  "model.e"
int nx;
int ny;
int i;
int j;
nctempfloat2 *b;

#line 83  "model.e"
int nctemp231=a->d[0];nx =nctemp231;

#line 84  "model.e"
int nctemp239=a->d[1];ny =nctemp239;

#line 85  "model.e"
int nctemp249=nx;
nctemp249=nctemp249*ny;
nctempfloat2 *nctemp248;
nctemp248=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp248->d[0]=nx;
nctemp248->d[1]=ny;
nctemp248->a=(float *)RunMalloc(sizeof(float)*nctemp249);
b=nctemp248;

#line 87  "model.e"
j =0;
int nctemp258 = (j < ny);
while(nctemp258){
{

#line 88  "model.e"
i =0;
int nctemp266 = (i < nx);
while(nctemp266){
{

#line 89  "model.e"
int nctemp273=i;
if((0>i)||(i>=b->d[0])){
nctempstring->a="b";
nctempstring->d[0]=strlen("b")+1;;
LibeArrayex(89,nctempstring,i,0,b->d[0]);
}
nctemp273=j*b->d[0]+nctemp273;
if((0>j)||(j>=b->d[1])){
nctempstring->a="b";
nctempstring->d[0]=strlen("b")+1;;
LibeArrayex(89,nctempstring,j,1,b->d[1]);
}
int nctemp277=i;
if((0>i)||(i>=a->d[0])){
nctempstring->a="a";
nctempstring->d[0]=strlen("a")+1;;
LibeArrayex(89,nctempstring,i,0,a->d[0]);
}
nctemp277=j*a->d[0]+nctemp277;
if((0>j)||(j>=a->d[1])){
nctempstring->a="a";
nctempstring->d[0]=strlen("a")+1;;
LibeArrayex(89,nctempstring,j,1,a->d[1]);
}
b->a[nctemp273] =a->a[nctemp277];

#line 88  "model.e"
}
int nctemp288 = i + 1;
i =nctemp288;
int nctemp289 = (i < nx);
nctemp266=nctemp289;
}

#line 87  "model.e"
}
int nctemp301 = j + 1;
j =nctemp301;
int nctemp302 = (j < ny);
nctemp258=nctemp302;
}

#line 93  "model.e"
return b;

#line 69  "model.e"
}

#line 96  "model.e"
int Modelstaggerx (nctempfloat2 *a,nctempfloat2 *astagg)
{

#line 110  "model.e"
int nx;
int ny;
int i;
int j;

#line 113  "model.e"
int nctemp312=a->d[0];nx =nctemp312;

#line 114  "model.e"
int nctemp320=a->d[1];ny =nctemp320;

#line 116  "model.e"
j =0;
int nctemp328 = (j < ny);
while(nctemp328){
{

#line 117  "model.e"
i =0;
int nctemp336 = (i < nx);
while(nctemp336){
{

#line 118  "model.e"
int nctemp343=i;
if((0>i)||(i>=astagg->d[0])){
nctempstring->a="astagg";
nctempstring->d[0]=strlen("astagg")+1;;
LibeArrayex(118,nctempstring,i,0,astagg->d[0]);
}
nctemp343=j*astagg->d[0]+nctemp343;
if((0>j)||(j>=astagg->d[1])){
nctempstring->a="astagg";
nctempstring->d[0]=strlen("astagg")+1;;
LibeArrayex(118,nctempstring,j,1,astagg->d[1]);
}
int nctemp347=i;
if((0>i)||(i>=a->d[0])){
nctempstring->a="a";
nctempstring->d[0]=strlen("a")+1;;
LibeArrayex(118,nctempstring,i,0,a->d[0]);
}
nctemp347=j*a->d[0]+nctemp347;
if((0>j)||(j>=a->d[1])){
nctempstring->a="a";
nctempstring->d[0]=strlen("a")+1;;
LibeArrayex(118,nctempstring,j,1,a->d[1]);
}
astagg->a[nctemp343] =a->a[nctemp347];

#line 117  "model.e"
}
int nctemp358 = i + 1;
i =nctemp358;
int nctemp359 = (i < nx);
nctemp336=nctemp359;
}

#line 116  "model.e"
}
int nctemp371 = j + 1;
j =nctemp371;
int nctemp372 = (j < ny);
nctemp328=nctemp372;
}

#line 122  "model.e"
j =0;
int nctemp380 = (j < ny);
while(nctemp380){
{

#line 123  "model.e"
i =0;
int nctemp396 = nx - 1;
int nctemp388 = (i < nctemp396);
while(nctemp388){
{

#line 124  "model.e"
int nctemp400=i;
if((0>i)||(i>=astagg->d[0])){
nctempstring->a="astagg";
nctempstring->d[0]=strlen("astagg")+1;;
LibeArrayex(124,nctempstring,i,0,astagg->d[0]);
}
nctemp400=j*astagg->d[0]+nctemp400;
if((0>j)||(j>=astagg->d[1])){
nctempstring->a="astagg";
nctempstring->d[0]=strlen("astagg")+1;;
LibeArrayex(124,nctempstring,j,1,astagg->d[1]);
}
int nctemp411=i;
if((0>i)||(i>=a->d[0])){
nctempstring->a="a";
nctempstring->d[0]=strlen("a")+1;;
LibeArrayex(124,nctempstring,i,0,a->d[0]);
}
nctemp411=j*a->d[0]+nctemp411;
if((0>j)||(j>=a->d[1])){
nctempstring->a="a";
nctempstring->d[0]=strlen("a")+1;;
LibeArrayex(124,nctempstring,j,1,a->d[1]);
}
int nctemp420 = i + 1;
int nctemp415=nctemp420;
if((0>nctemp420)||(nctemp420>=a->d[0])){
nctempstring->a="a";
nctempstring->d[0]=strlen("a")+1;;
LibeArrayex(124,nctempstring,nctemp420,0,a->d[0]);
}
nctemp415=j*a->d[0]+nctemp415;
if((0>j)||(j>=a->d[1])){
nctempstring->a="a";
nctempstring->d[0]=strlen("a")+1;;
LibeArrayex(124,nctempstring,j,1,a->d[1]);
}
float nctemp422 = a->a[nctemp411] + a->a[nctemp415];
float nctemp423 = 0.5 * nctemp422;
astagg->a[nctemp400] =nctemp423;

#line 123  "model.e"
}
int nctemp432 = i + 1;
i =nctemp432;
int nctemp441 = nx - 1;
int nctemp433 = (i < nctemp441);
nctemp388=nctemp433;
}

#line 122  "model.e"
}
int nctemp450 = j + 1;
j =nctemp450;
int nctemp451 = (j < ny);
nctemp380=nctemp451;
}

#line 127  "model.e"
return 1;

#line 96  "model.e"
}

#line 130  "model.e"
int Modelstaggery (nctempfloat2 *a,nctempfloat2 *astagg)
{

#line 143  "model.e"
int nx;
int ny;
int i;
int j;

#line 146  "model.e"
int nctemp460=a->d[0];nx =nctemp460;

#line 147  "model.e"
int nctemp468=a->d[1];ny =nctemp468;

#line 149  "model.e"
j =0;
int nctemp476 = (j < ny);
while(nctemp476){
{

#line 150  "model.e"
i =0;
int nctemp484 = (i < nx);
while(nctemp484){
{

#line 151  "model.e"
int nctemp491=i;
if((0>i)||(i>=astagg->d[0])){
nctempstring->a="astagg";
nctempstring->d[0]=strlen("astagg")+1;;
LibeArrayex(151,nctempstring,i,0,astagg->d[0]);
}
nctemp491=j*astagg->d[0]+nctemp491;
if((0>j)||(j>=astagg->d[1])){
nctempstring->a="astagg";
nctempstring->d[0]=strlen("astagg")+1;;
LibeArrayex(151,nctempstring,j,1,astagg->d[1]);
}
int nctemp495=i;
if((0>i)||(i>=a->d[0])){
nctempstring->a="a";
nctempstring->d[0]=strlen("a")+1;;
LibeArrayex(151,nctempstring,i,0,a->d[0]);
}
nctemp495=j*a->d[0]+nctemp495;
if((0>j)||(j>=a->d[1])){
nctempstring->a="a";
nctempstring->d[0]=strlen("a")+1;;
LibeArrayex(151,nctempstring,j,1,a->d[1]);
}
astagg->a[nctemp491] =a->a[nctemp495];

#line 150  "model.e"
}
int nctemp506 = i + 1;
i =nctemp506;
int nctemp507 = (i < nx);
nctemp484=nctemp507;
}

#line 149  "model.e"
}
int nctemp519 = j + 1;
j =nctemp519;
int nctemp520 = (j < ny);
nctemp476=nctemp520;
}

#line 155  "model.e"
j =0;
int nctemp536 = ny - 1;
int nctemp528 = (j < nctemp536);
while(nctemp528){
{

#line 156  "model.e"
i =0;
int nctemp541 = (i < nx);
while(nctemp541){
{

#line 157  "model.e"
int nctemp548=i;
if((0>i)||(i>=astagg->d[0])){
nctempstring->a="astagg";
nctempstring->d[0]=strlen("astagg")+1;;
LibeArrayex(157,nctempstring,i,0,astagg->d[0]);
}
nctemp548=j*astagg->d[0]+nctemp548;
if((0>j)||(j>=astagg->d[1])){
nctempstring->a="astagg";
nctempstring->d[0]=strlen("astagg")+1;;
LibeArrayex(157,nctempstring,j,1,astagg->d[1]);
}
int nctemp559=i;
if((0>i)||(i>=a->d[0])){
nctempstring->a="a";
nctempstring->d[0]=strlen("a")+1;;
LibeArrayex(157,nctempstring,i,0,a->d[0]);
}
nctemp559=j*a->d[0]+nctemp559;
if((0>j)||(j>=a->d[1])){
nctempstring->a="a";
nctempstring->d[0]=strlen("a")+1;;
LibeArrayex(157,nctempstring,j,1,a->d[1]);
}
int nctemp563=i;
if((0>i)||(i>=a->d[0])){
nctempstring->a="a";
nctempstring->d[0]=strlen("a")+1;;
LibeArrayex(157,nctempstring,i,0,a->d[0]);
}
int nctemp569 = j + 1;
nctemp563=nctemp569*a->d[0]+nctemp563;
if((0>nctemp569)||(nctemp569>=a->d[1])){
nctempstring->a="a";
nctempstring->d[0]=strlen("a")+1;;
LibeArrayex(157,nctempstring,nctemp569,1,a->d[1]);
}
float nctemp570 = a->a[nctemp559] + a->a[nctemp563];
float nctemp571 = 0.5 * nctemp570;
astagg->a[nctemp548] =nctemp571;

#line 156  "model.e"
}
int nctemp580 = i + 1;
i =nctemp580;
int nctemp581 = (i < nx);
nctemp541=nctemp581;
}

#line 155  "model.e"
}
int nctemp593 = j + 1;
j =nctemp593;
int nctemp602 = ny - 1;
int nctemp594 = (j < nctemp602);
nctemp528=nctemp594;
}

#line 160  "model.e"
return 1;

#line 130  "model.e"
}

#line 163  "model.e"
int Modelslscoeffs (nctempfloat2 *Qx,nctempfloat2 *Qy,nctempfloat2 *modx,nctempfloat2 *mody,nctempfloat2 *coeff1x,nctempfloat2 *coeff1y,nctempfloat2 *coeff2x,nctempfloat2 *coeff2y,struct model* Model)

#line 166  "model.e"
{

#line 188  "model.e"
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

#line 197  "model.e"
Nx =Model->Nx;

#line 198  "model.e"
Ny =Model->Ny;

#line 200  "model.e"
int nctemp618=Nx;
nctempfloat1 *nctemp617;
nctemp617=(nctempfloat1*)RunMalloc(sizeof(nctempfloat1));
nctemp617->d[0]=Nx;
nctemp617->a=(float *)RunMalloc(sizeof(float)*nctemp618);
d1=nctemp617;

#line 201  "model.e"
int nctemp627=Ny;
nctempfloat1 *nctemp626;
nctemp626=(nctempfloat1*)RunMalloc(sizeof(nctempfloat1));
nctemp626->d[0]=Ny;
nctemp626->a=(float *)RunMalloc(sizeof(float)*nctemp627);
d2=nctemp626;

#line 202  "model.e"
nctempfloat1* nctemp631= d1;
float nctemp634= Model->Dx;
int nctemp636= Model->Nb;
int nctemp638=Modeld(nctemp631,nctemp634,nctemp636);

#line 203  "model.e"
nctempfloat1* nctemp640= d2;
float nctemp643= Model->Dx;
int nctemp645= Model->Nb;
int nctemp647=Modeld(nctemp640,nctemp643,nctemp645);

#line 204  "model.e"
Model->dx=d1;

#line 205  "model.e"
Model->dy=d2;

#line 208  "model.e"
j =0;
int nctemp664 = (j < Ny);
while(nctemp664){
{

#line 209  "model.e"
i =0;
int nctemp672 = (i < Nx);
while(nctemp672){
{

#line 210  "model.e"
float nctemp684 = 1.0 / Model->W0;
tau0 =nctemp684;

#line 213  "model.e"
int nctemp696=i;
if((0>i)||(i>=Qx->d[0])){
nctempstring->a="Qx";
nctempstring->d[0]=strlen("Qx")+1;;
LibeArrayex(213,nctempstring,i,0,Qx->d[0]);
}
nctemp696=j*Qx->d[0]+nctemp696;
if((0>j)||(j>=Qx->d[1])){
nctempstring->a="Qx";
nctempstring->d[0]=strlen("Qx")+1;;
LibeArrayex(213,nctempstring,j,1,Qx->d[1]);
}
float nctemp699 = tau0 / Qx->a[nctemp696];
int nctemp711=i;
if((0>i)||(i>=Qx->d[0])){
nctempstring->a="Qx";
nctempstring->d[0]=strlen("Qx")+1;;
LibeArrayex(213,nctempstring,i,0,Qx->d[0]);
}
nctemp711=j*Qx->d[0]+nctemp711;
if((0>j)||(j>=Qx->d[1])){
nctempstring->a="Qx";
nctempstring->d[0]=strlen("Qx")+1;;
LibeArrayex(213,nctempstring,j,1,Qx->d[1]);
}
int nctemp715=i;
if((0>i)||(i>=Qx->d[0])){
nctempstring->a="Qx";
nctempstring->d[0]=strlen("Qx")+1;;
LibeArrayex(213,nctempstring,i,0,Qx->d[0]);
}
nctemp715=j*Qx->d[0]+nctemp715;
if((0>j)||(j>=Qx->d[1])){
nctempstring->a="Qx";
nctempstring->d[0]=strlen("Qx")+1;;
LibeArrayex(213,nctempstring,j,1,Qx->d[1]);
}
float nctemp718 = Qx->a[nctemp711] * Qx->a[nctemp715];
float nctemp720 = nctemp718 + 1.0;
float nctemp704= nctemp720;
float nctemp721=LibeSqrt(nctemp704);
float nctemp723 = nctemp721 + 1.0;
float nctemp724 = nctemp699 * nctemp723;
tauex =nctemp724;

#line 214  "model.e"
int nctemp736=i;
if((0>i)||(i>=Qx->d[0])){
nctempstring->a="Qx";
nctempstring->d[0]=strlen("Qx")+1;;
LibeArrayex(214,nctempstring,i,0,Qx->d[0]);
}
nctemp736=j*Qx->d[0]+nctemp736;
if((0>j)||(j>=Qx->d[1])){
nctempstring->a="Qx";
nctempstring->d[0]=strlen("Qx")+1;;
LibeArrayex(214,nctempstring,j,1,Qx->d[1]);
}
float nctemp739 = tau0 / Qx->a[nctemp736];
int nctemp751=i;
if((0>i)||(i>=Qx->d[0])){
nctempstring->a="Qx";
nctempstring->d[0]=strlen("Qx")+1;;
LibeArrayex(214,nctempstring,i,0,Qx->d[0]);
}
nctemp751=j*Qx->d[0]+nctemp751;
if((0>j)||(j>=Qx->d[1])){
nctempstring->a="Qx";
nctempstring->d[0]=strlen("Qx")+1;;
LibeArrayex(214,nctempstring,j,1,Qx->d[1]);
}
int nctemp755=i;
if((0>i)||(i>=Qx->d[0])){
nctempstring->a="Qx";
nctempstring->d[0]=strlen("Qx")+1;;
LibeArrayex(214,nctempstring,i,0,Qx->d[0]);
}
nctemp755=j*Qx->d[0]+nctemp755;
if((0>j)||(j>=Qx->d[1])){
nctempstring->a="Qx";
nctempstring->d[0]=strlen("Qx")+1;;
LibeArrayex(214,nctempstring,j,1,Qx->d[1]);
}
float nctemp758 = Qx->a[nctemp751] * Qx->a[nctemp755];
float nctemp760 = nctemp758 + 1.0;
float nctemp744= nctemp760;
float nctemp761=LibeSqrt(nctemp744);
float nctemp763 = nctemp761 - 1.0;
float nctemp764 = nctemp739 * nctemp763;
tausx =nctemp764;

#line 215  "model.e"
int nctemp776=i;
if((0>i)||(i>=Qy->d[0])){
nctempstring->a="Qy";
nctempstring->d[0]=strlen("Qy")+1;;
LibeArrayex(215,nctempstring,i,0,Qy->d[0]);
}
nctemp776=j*Qy->d[0]+nctemp776;
if((0>j)||(j>=Qy->d[1])){
nctempstring->a="Qy";
nctempstring->d[0]=strlen("Qy")+1;;
LibeArrayex(215,nctempstring,j,1,Qy->d[1]);
}
float nctemp779 = tau0 / Qy->a[nctemp776];
int nctemp791=i;
if((0>i)||(i>=Qy->d[0])){
nctempstring->a="Qy";
nctempstring->d[0]=strlen("Qy")+1;;
LibeArrayex(215,nctempstring,i,0,Qy->d[0]);
}
nctemp791=j*Qy->d[0]+nctemp791;
if((0>j)||(j>=Qy->d[1])){
nctempstring->a="Qy";
nctempstring->d[0]=strlen("Qy")+1;;
LibeArrayex(215,nctempstring,j,1,Qy->d[1]);
}
int nctemp795=i;
if((0>i)||(i>=Qy->d[0])){
nctempstring->a="Qy";
nctempstring->d[0]=strlen("Qy")+1;;
LibeArrayex(215,nctempstring,i,0,Qy->d[0]);
}
nctemp795=j*Qy->d[0]+nctemp795;
if((0>j)||(j>=Qy->d[1])){
nctempstring->a="Qy";
nctempstring->d[0]=strlen("Qy")+1;;
LibeArrayex(215,nctempstring,j,1,Qy->d[1]);
}
float nctemp798 = Qy->a[nctemp791] * Qy->a[nctemp795];
float nctemp800 = nctemp798 + 1.0;
float nctemp784= nctemp800;
float nctemp801=LibeSqrt(nctemp784);
float nctemp803 = nctemp801 + 1.0;
float nctemp804 = nctemp779 * nctemp803;
tauey =nctemp804;

#line 216  "model.e"
int nctemp816=i;
if((0>i)||(i>=Qy->d[0])){
nctempstring->a="Qy";
nctempstring->d[0]=strlen("Qy")+1;;
LibeArrayex(216,nctempstring,i,0,Qy->d[0]);
}
nctemp816=j*Qy->d[0]+nctemp816;
if((0>j)||(j>=Qy->d[1])){
nctempstring->a="Qy";
nctempstring->d[0]=strlen("Qy")+1;;
LibeArrayex(216,nctempstring,j,1,Qy->d[1]);
}
float nctemp819 = tau0 / Qy->a[nctemp816];
int nctemp831=i;
if((0>i)||(i>=Qy->d[0])){
nctempstring->a="Qy";
nctempstring->d[0]=strlen("Qy")+1;;
LibeArrayex(216,nctempstring,i,0,Qy->d[0]);
}
nctemp831=j*Qy->d[0]+nctemp831;
if((0>j)||(j>=Qy->d[1])){
nctempstring->a="Qy";
nctempstring->d[0]=strlen("Qy")+1;;
LibeArrayex(216,nctempstring,j,1,Qy->d[1]);
}
int nctemp835=i;
if((0>i)||(i>=Qy->d[0])){
nctempstring->a="Qy";
nctempstring->d[0]=strlen("Qy")+1;;
LibeArrayex(216,nctempstring,i,0,Qy->d[0]);
}
nctemp835=j*Qy->d[0]+nctemp835;
if((0>j)||(j>=Qy->d[1])){
nctempstring->a="Qy";
nctempstring->d[0]=strlen("Qy")+1;;
LibeArrayex(216,nctempstring,j,1,Qy->d[1]);
}
float nctemp838 = Qy->a[nctemp831] * Qy->a[nctemp835];
float nctemp840 = nctemp838 + 1.0;
float nctemp824= nctemp840;
float nctemp841=LibeSqrt(nctemp824);
float nctemp843 = nctemp841 - 1.0;
float nctemp844 = nctemp819 * nctemp843;
tausy =nctemp844;

#line 221  "model.e"
float nctemp853 = 1.0 / tauex;
tauex =nctemp853;

#line 222  "model.e"
float nctemp862 = 1.0 / tauey;
tauey =nctemp862;

#line 223  "model.e"
float nctemp871 = 1.0 / tausx;
tausx =nctemp871;

#line 224  "model.e"
float nctemp880 = 1.0 / tausy;
tausy =nctemp880;

#line 226  "model.e"
int nctemp885=i;
if((0>i)||(i>=Model->dx->d[0])){
nctempstring->a="Model->dx";
nctempstring->d[0]=strlen("Model->dx")+1;;
LibeArrayex(226,nctempstring,i,0,Model->dx->d[0]);
}
argx =Model->dx->a[nctemp885];

#line 227  "model.e"
int nctemp891=j;
if((0>j)||(j>=Model->dy->d[0])){
nctempstring->a="Model->dy";
nctempstring->d[0]=strlen("Model->dy")+1;;
LibeArrayex(227,nctempstring,j,0,Model->dy->d[0]);
}
argy =Model->dy->a[nctemp891];

#line 229  "model.e"
int nctemp896=i;
if((0>i)||(i>=coeff1x->d[0])){
nctempstring->a="coeff1x";
nctempstring->d[0]=strlen("coeff1x")+1;;
LibeArrayex(229,nctempstring,i,0,coeff1x->d[0]);
}
nctemp896=j*coeff1x->d[0]+nctemp896;
if((0>j)||(j>=coeff1x->d[1])){
nctempstring->a="coeff1x";
nctempstring->d[0]=strlen("coeff1x")+1;;
LibeArrayex(229,nctempstring,j,1,coeff1x->d[1]);
}
float nctemp904= -argx;
float nctemp903= nctemp904;
float nctemp905=LibeExp(nctemp903);
float nctemp910= -Model->Dt;
float nctemp912 = nctemp910 * tausx;
float nctemp907= nctemp912;
float nctemp913=LibeExp(nctemp907);
float nctemp914 = nctemp905 * nctemp913;
coeff1x->a[nctemp896] =nctemp914;

#line 230  "model.e"
int nctemp918=i;
if((0>i)||(i>=coeff1y->d[0])){
nctempstring->a="coeff1y";
nctempstring->d[0]=strlen("coeff1y")+1;;
LibeArrayex(230,nctempstring,i,0,coeff1y->d[0]);
}
nctemp918=j*coeff1y->d[0]+nctemp918;
if((0>j)||(j>=coeff1y->d[1])){
nctempstring->a="coeff1y";
nctempstring->d[0]=strlen("coeff1y")+1;;
LibeArrayex(230,nctempstring,j,1,coeff1y->d[1]);
}
float nctemp926= -argy;
float nctemp925= nctemp926;
float nctemp927=LibeExp(nctemp925);
float nctemp932= -Model->Dt;
float nctemp934 = nctemp932 * tausy;
float nctemp929= nctemp934;
float nctemp935=LibeExp(nctemp929);
float nctemp936 = nctemp927 * nctemp935;
coeff1y->a[nctemp918] =nctemp936;

#line 231  "model.e"
int nctemp940=i;
if((0>i)||(i>=coeff2x->d[0])){
nctempstring->a="coeff2x";
nctempstring->d[0]=strlen("coeff2x")+1;;
LibeArrayex(231,nctempstring,i,0,coeff2x->d[0]);
}
nctemp940=j*coeff2x->d[0]+nctemp940;
if((0>j)||(j>=coeff2x->d[1])){
nctempstring->a="coeff2x";
nctempstring->d[0]=strlen("coeff2x")+1;;
LibeArrayex(231,nctempstring,j,1,coeff2x->d[1]);
}
float nctemp948 = Model->Dt * tauex;
coeff2x->a[nctemp940] =nctemp948;

#line 232  "model.e"
int nctemp952=i;
if((0>i)||(i>=coeff2y->d[0])){
nctempstring->a="coeff2y";
nctempstring->d[0]=strlen("coeff2y")+1;;
LibeArrayex(232,nctempstring,i,0,coeff2y->d[0]);
}
nctemp952=j*coeff2y->d[0]+nctemp952;
if((0>j)||(j>=coeff2y->d[1])){
nctempstring->a="coeff2y";
nctempstring->d[0]=strlen("coeff2y")+1;;
LibeArrayex(232,nctempstring,j,1,coeff2y->d[1]);
}
float nctemp960 = Model->Dt * tauey;
coeff2y->a[nctemp952] =nctemp960;

#line 236  "model.e"
int nctemp964=i;
if((0>i)||(i>=modx->d[0])){
nctempstring->a="modx";
nctempstring->d[0]=strlen("modx")+1;;
LibeArrayex(236,nctempstring,i,0,modx->d[0]);
}
nctemp964=j*modx->d[0]+nctemp964;
if((0>j)||(j>=modx->d[1])){
nctempstring->a="modx";
nctempstring->d[0]=strlen("modx")+1;;
LibeArrayex(236,nctempstring,j,1,modx->d[1]);
}
float nctemp975= -argx;
float nctemp974= nctemp975;
float nctemp976=LibeExp(nctemp974);
int nctemp978=i;
if((0>i)||(i>=modx->d[0])){
nctempstring->a="modx";
nctempstring->d[0]=strlen("modx")+1;;
LibeArrayex(236,nctempstring,i,0,modx->d[0]);
}
nctemp978=j*modx->d[0]+nctemp978;
if((0>j)||(j>=modx->d[1])){
nctempstring->a="modx";
nctempstring->d[0]=strlen("modx")+1;;
LibeArrayex(236,nctempstring,j,1,modx->d[1]);
}
float nctemp981 = nctemp976 * modx->a[nctemp978];
float nctemp991 = tausx / tauex;
float nctemp992 = 1.0 - nctemp991;
float nctemp993 = nctemp981 * nctemp992;
modx->a[nctemp964] =nctemp993;

#line 237  "model.e"
int nctemp997=i;
if((0>i)||(i>=mody->d[0])){
nctempstring->a="mody";
nctempstring->d[0]=strlen("mody")+1;;
LibeArrayex(237,nctempstring,i,0,mody->d[0]);
}
nctemp997=j*mody->d[0]+nctemp997;
if((0>j)||(j>=mody->d[1])){
nctempstring->a="mody";
nctempstring->d[0]=strlen("mody")+1;;
LibeArrayex(237,nctempstring,j,1,mody->d[1]);
}
float nctemp1008= -argy;
float nctemp1007= nctemp1008;
float nctemp1009=LibeExp(nctemp1007);
int nctemp1011=i;
if((0>i)||(i>=mody->d[0])){
nctempstring->a="mody";
nctempstring->d[0]=strlen("mody")+1;;
LibeArrayex(237,nctempstring,i,0,mody->d[0]);
}
nctemp1011=j*mody->d[0]+nctemp1011;
if((0>j)||(j>=mody->d[1])){
nctempstring->a="mody";
nctempstring->d[0]=strlen("mody")+1;;
LibeArrayex(237,nctempstring,j,1,mody->d[1]);
}
float nctemp1014 = nctemp1009 * mody->a[nctemp1011];
float nctemp1024 = tausy / tauey;
float nctemp1025 = 1.0 - nctemp1024;
float nctemp1026 = nctemp1014 * nctemp1025;
mody->a[nctemp997] =nctemp1026;

#line 209  "model.e"
}
int nctemp1035 = i + 1;
i =nctemp1035;
int nctemp1036 = (i < Nx);
nctemp672=nctemp1036;
}

#line 208  "model.e"
}
int nctemp1048 = j + 1;
j =nctemp1048;
int nctemp1049 = (j < Ny);
nctemp664=nctemp1049;
}

#line 240  "model.e"
RunFree(d1->a);
RunFree(d1);

#line 241  "model.e"
RunFree(d2->a);
RunFree(d2);

#line 243  "model.e"
return 1;

#line 166  "model.e"
}

#line 246  "model.e"
struct model* Modelsls (nctempfloat2 *vp,nctempfloat2 *vs,nctempfloat2 *rho,nctempfloat2 *Qlx,nctempfloat2 *Qly,nctempfloat2 *Qmx,nctempfloat2 *Qmy,nctempfloat2 *Qpx,nctempfloat2 *Qpy,float Dx,float Dt,float W0,int Nb)

#line 249  "model.e"
{

#line 267  "model.e"
struct model* Model;
int Nx;
int Ny;
int i;
int j;
int fd;
int dsize;
nctempchar1 *data;
nctempfloat2 *wrk;
nctempfloat2 *wrk2;

#line 276  "model.e"
struct model *nctemp1064=(struct model*)RunMalloc(sizeof(struct model));
Model =nctemp1064;

#line 277  "model.e"
Model->Dx =Dx;

#line 278  "model.e"
Model->Dt =Dt;

#line 279  "model.e"
int nctemp1078=vp->d[0];Model->Nx =nctemp1078;

#line 280  "model.e"
int nctemp1086=vp->d[1];Model->Ny =nctemp1086;

#line 281  "model.e"
Model->Nb =Nb;

#line 282  "model.e"
Model->W0 =W0;

#line 283  "model.e"
Nx =Model->Nx;

#line 284  "model.e"
Ny =Model->Ny;

#line 285  "model.e"
Model->Qlx=Qlx;

#line 286  "model.e"
Model->Qly=Qly;

#line 287  "model.e"
Model->Qmx=Qmx;

#line 288  "model.e"
Model->Qmy=Qmy;

#line 289  "model.e"
Model->Qpx=Qpx;

#line 290  "model.e"
Model->Qpy=Qpy;

#line 293  "model.e"
int nctemp1148=Nx;
nctemp1148=nctemp1148*Ny;
nctempfloat2 *nctemp1147;
nctemp1147=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1147->d[0]=Nx;
nctemp1147->d[1]=Ny;
nctemp1147->a=(float *)RunMalloc(sizeof(float)*nctemp1148);
Model->Rho=nctemp1147;

#line 294  "model.e"
int nctemp1159=Nx;
nctemp1159=nctemp1159*Ny;
nctempfloat2 *nctemp1158;
nctemp1158=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1158->d[0]=Nx;
nctemp1158->d[1]=Ny;
nctemp1158->a=(float *)RunMalloc(sizeof(float)*nctemp1159);
Model->Rhox=nctemp1158;

#line 295  "model.e"
int nctemp1170=Nx;
nctemp1170=nctemp1170*Ny;
nctempfloat2 *nctemp1169;
nctemp1169=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1169->d[0]=Nx;
nctemp1169->d[1]=Ny;
nctemp1169->a=(float *)RunMalloc(sizeof(float)*nctemp1170);
Model->Rhoy=nctemp1169;

#line 296  "model.e"
int nctemp1181=Nx;
nctemp1181=nctemp1181*Ny;
nctempfloat2 *nctemp1180;
nctemp1180=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1180->d[0]=Nx;
nctemp1180->d[1]=Ny;
nctemp1180->a=(float *)RunMalloc(sizeof(float)*nctemp1181);
Model->Mu=nctemp1180;

#line 297  "model.e"
int nctemp1192=Nx;
nctemp1192=nctemp1192*Ny;
nctempfloat2 *nctemp1191;
nctemp1191=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1191->d[0]=Nx;
nctemp1191->d[1]=Ny;
nctemp1191->a=(float *)RunMalloc(sizeof(float)*nctemp1192);
Model->Muxy=nctemp1191;

#line 298  "model.e"
int nctemp1203=Nx;
nctemp1203=nctemp1203*Ny;
nctempfloat2 *nctemp1202;
nctemp1202=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1202->d[0]=Nx;
nctemp1202->d[1]=Ny;
nctemp1202->a=(float *)RunMalloc(sizeof(float)*nctemp1203);
Model->Lambda=nctemp1202;

#line 304  "model.e"
int nctemp1214=Nx;
nctemp1214=nctemp1214*Ny;
nctempfloat2 *nctemp1213;
nctemp1213=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1213->d[0]=Nx;
nctemp1213->d[1]=Ny;
nctemp1213->a=(float *)RunMalloc(sizeof(float)*nctemp1214);
Model->Dlambdax=nctemp1213;

#line 305  "model.e"
int nctemp1225=Nx;
nctemp1225=nctemp1225*Ny;
nctempfloat2 *nctemp1224;
nctemp1224=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1224->d[0]=Nx;
nctemp1224->d[1]=Ny;
nctemp1224->a=(float *)RunMalloc(sizeof(float)*nctemp1225);
Model->Dlambday=nctemp1224;

#line 306  "model.e"
int nctemp1236=Nx;
nctemp1236=nctemp1236*Ny;
nctempfloat2 *nctemp1235;
nctemp1235=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1235->d[0]=Nx;
nctemp1235->d[1]=Ny;
nctemp1235->a=(float *)RunMalloc(sizeof(float)*nctemp1236);
Model->Dmux=nctemp1235;

#line 307  "model.e"
int nctemp1247=Nx;
nctemp1247=nctemp1247*Ny;
nctempfloat2 *nctemp1246;
nctemp1246=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1246->d[0]=Nx;
nctemp1246->d[1]=Ny;
nctemp1246->a=(float *)RunMalloc(sizeof(float)*nctemp1247);
Model->Dmuy=nctemp1246;

#line 308  "model.e"
int nctemp1258=Nx;
nctemp1258=nctemp1258*Ny;
nctempfloat2 *nctemp1257;
nctemp1257=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1257->d[0]=Nx;
nctemp1257->d[1]=Ny;
nctemp1257->a=(float *)RunMalloc(sizeof(float)*nctemp1258);
Model->Dmuxyx=nctemp1257;

#line 309  "model.e"
int nctemp1269=Nx;
nctemp1269=nctemp1269*Ny;
nctempfloat2 *nctemp1268;
nctemp1268=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1268->d[0]=Nx;
nctemp1268->d[1]=Ny;
nctemp1268->a=(float *)RunMalloc(sizeof(float)*nctemp1269);
Model->Dmuxyy=nctemp1268;

#line 310  "model.e"
int nctemp1280=Nx;
nctemp1280=nctemp1280*Ny;
nctempfloat2 *nctemp1279;
nctemp1279=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1279->d[0]=Nx;
nctemp1279->d[1]=Ny;
nctemp1279->a=(float *)RunMalloc(sizeof(float)*nctemp1280);
Model->Drhopx=nctemp1279;

#line 311  "model.e"
int nctemp1291=Nx;
nctemp1291=nctemp1291*Ny;
nctempfloat2 *nctemp1290;
nctemp1290=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1290->d[0]=Nx;
nctemp1290->d[1]=Ny;
nctemp1290->a=(float *)RunMalloc(sizeof(float)*nctemp1291);
Model->Drhopy=nctemp1290;

#line 316  "model.e"
int nctemp1302=Nx;
nctemp1302=nctemp1302*Ny;
nctempfloat2 *nctemp1301;
nctemp1301=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1301->d[0]=Nx;
nctemp1301->d[1]=Ny;
nctemp1301->a=(float *)RunMalloc(sizeof(float)*nctemp1302);
Model->Alpha1x=nctemp1301;

#line 317  "model.e"
int nctemp1313=Nx;
nctemp1313=nctemp1313*Ny;
nctempfloat2 *nctemp1312;
nctemp1312=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1312->d[0]=Nx;
nctemp1312->d[1]=Ny;
nctemp1312->a=(float *)RunMalloc(sizeof(float)*nctemp1313);
Model->Alpha1y=nctemp1312;

#line 318  "model.e"
int nctemp1324=Nx;
nctemp1324=nctemp1324*Ny;
nctempfloat2 *nctemp1323;
nctemp1323=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1323->d[0]=Nx;
nctemp1323->d[1]=Ny;
nctemp1323->a=(float *)RunMalloc(sizeof(float)*nctemp1324);
Model->Alpha2x=nctemp1323;

#line 319  "model.e"
int nctemp1335=Nx;
nctemp1335=nctemp1335*Ny;
nctempfloat2 *nctemp1334;
nctemp1334=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1334->d[0]=Nx;
nctemp1334->d[1]=Ny;
nctemp1334->a=(float *)RunMalloc(sizeof(float)*nctemp1335);
Model->Alpha2y=nctemp1334;

#line 320  "model.e"
int nctemp1346=Nx;
nctemp1346=nctemp1346*Ny;
nctempfloat2 *nctemp1345;
nctemp1345=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1345->d[0]=Nx;
nctemp1345->d[1]=Ny;
nctemp1345->a=(float *)RunMalloc(sizeof(float)*nctemp1346);
Model->Beta1x=nctemp1345;

#line 321  "model.e"
int nctemp1357=Nx;
nctemp1357=nctemp1357*Ny;
nctempfloat2 *nctemp1356;
nctemp1356=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1356->d[0]=Nx;
nctemp1356->d[1]=Ny;
nctemp1356->a=(float *)RunMalloc(sizeof(float)*nctemp1357);
Model->Beta1y=nctemp1356;

#line 322  "model.e"
int nctemp1368=Nx;
nctemp1368=nctemp1368*Ny;
nctempfloat2 *nctemp1367;
nctemp1367=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1367->d[0]=Nx;
nctemp1367->d[1]=Ny;
nctemp1367->a=(float *)RunMalloc(sizeof(float)*nctemp1368);
Model->Beta2x=nctemp1367;

#line 323  "model.e"
int nctemp1379=Nx;
nctemp1379=nctemp1379*Ny;
nctempfloat2 *nctemp1378;
nctemp1378=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1378->d[0]=Nx;
nctemp1378->d[1]=Ny;
nctemp1378->a=(float *)RunMalloc(sizeof(float)*nctemp1379);
Model->Beta2y=nctemp1378;

#line 324  "model.e"
int nctemp1390=Nx;
nctemp1390=nctemp1390*Ny;
nctempfloat2 *nctemp1389;
nctemp1389=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1389->d[0]=Nx;
nctemp1389->d[1]=Ny;
nctemp1389->a=(float *)RunMalloc(sizeof(float)*nctemp1390);
Model->Eta1x=nctemp1389;

#line 325  "model.e"
int nctemp1401=Nx;
nctemp1401=nctemp1401*Ny;
nctempfloat2 *nctemp1400;
nctemp1400=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1400->d[0]=Nx;
nctemp1400->d[1]=Ny;
nctemp1400->a=(float *)RunMalloc(sizeof(float)*nctemp1401);
Model->Eta1y=nctemp1400;

#line 326  "model.e"
int nctemp1412=Nx;
nctemp1412=nctemp1412*Ny;
nctempfloat2 *nctemp1411;
nctemp1411=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1411->d[0]=Nx;
nctemp1411->d[1]=Ny;
nctemp1411->a=(float *)RunMalloc(sizeof(float)*nctemp1412);
Model->Eta2x=nctemp1411;

#line 327  "model.e"
int nctemp1423=Nx;
nctemp1423=nctemp1423*Ny;
nctempfloat2 *nctemp1422;
nctemp1422=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1422->d[0]=Nx;
nctemp1422->d[1]=Ny;
nctemp1422->a=(float *)RunMalloc(sizeof(float)*nctemp1423);
Model->Eta2y=nctemp1422;

#line 334  "model.e"
j =0;
int nctemp1432 = (j < Ny);
while(nctemp1432){
{

#line 335  "model.e"
i =0;
int nctemp1440 = (i < Nx);
while(nctemp1440){
{

#line 336  "model.e"
int nctemp1447=i;
if((0>i)||(i>=Model->Rho->d[0])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(336,nctempstring,i,0,Model->Rho->d[0]);
}
nctemp1447=j*Model->Rho->d[0]+nctemp1447;
if((0>j)||(j>=Model->Rho->d[1])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(336,nctempstring,j,1,Model->Rho->d[1]);
}
int nctemp1455=i;
if((0>i)||(i>=rho->d[0])){
nctempstring->a="rho";
nctempstring->d[0]=strlen("rho")+1;;
LibeArrayex(336,nctempstring,i,0,rho->d[0]);
}
nctemp1455=j*rho->d[0]+nctemp1455;
if((0>j)||(j>=rho->d[1])){
nctempstring->a="rho";
nctempstring->d[0]=strlen("rho")+1;;
LibeArrayex(336,nctempstring,j,1,rho->d[1]);
}
float nctemp1458 = 1.0 / rho->a[nctemp1455];
Model->Rho->a[nctemp1447] =nctemp1458;

#line 337  "model.e"
int nctemp1462=i;
if((0>i)||(i>=Model->Mu->d[0])){
nctempstring->a="Model->Mu";
nctempstring->d[0]=strlen("Model->Mu")+1;;
LibeArrayex(337,nctempstring,i,0,Model->Mu->d[0]);
}
nctemp1462=j*Model->Mu->d[0]+nctemp1462;
if((0>j)||(j>=Model->Mu->d[1])){
nctempstring->a="Model->Mu";
nctempstring->d[0]=strlen("Model->Mu")+1;;
LibeArrayex(337,nctempstring,j,1,Model->Mu->d[1]);
}
int nctemp1472=i;
if((0>i)||(i>=rho->d[0])){
nctempstring->a="rho";
nctempstring->d[0]=strlen("rho")+1;;
LibeArrayex(337,nctempstring,i,0,rho->d[0]);
}
nctemp1472=j*rho->d[0]+nctemp1472;
if((0>j)||(j>=rho->d[1])){
nctempstring->a="rho";
nctempstring->d[0]=strlen("rho")+1;;
LibeArrayex(337,nctempstring,j,1,rho->d[1]);
}
int nctemp1476=i;
if((0>i)||(i>=vs->d[0])){
nctempstring->a="vs";
nctempstring->d[0]=strlen("vs")+1;;
LibeArrayex(337,nctempstring,i,0,vs->d[0]);
}
nctemp1476=j*vs->d[0]+nctemp1476;
if((0>j)||(j>=vs->d[1])){
nctempstring->a="vs";
nctempstring->d[0]=strlen("vs")+1;;
LibeArrayex(337,nctempstring,j,1,vs->d[1]);
}
float nctemp1479 = rho->a[nctemp1472] * vs->a[nctemp1476];
int nctemp1481=i;
if((0>i)||(i>=vs->d[0])){
nctempstring->a="vs";
nctempstring->d[0]=strlen("vs")+1;;
LibeArrayex(337,nctempstring,i,0,vs->d[0]);
}
nctemp1481=j*vs->d[0]+nctemp1481;
if((0>j)||(j>=vs->d[1])){
nctempstring->a="vs";
nctempstring->d[0]=strlen("vs")+1;;
LibeArrayex(337,nctempstring,j,1,vs->d[1]);
}
float nctemp1484 = nctemp1479 * vs->a[nctemp1481];
Model->Mu->a[nctemp1462] =nctemp1484;

#line 338  "model.e"
int nctemp1488=i;
if((0>i)||(i>=Model->Lambda->d[0])){
nctempstring->a="Model->Lambda";
nctempstring->d[0]=strlen("Model->Lambda")+1;;
LibeArrayex(338,nctempstring,i,0,Model->Lambda->d[0]);
}
nctemp1488=j*Model->Lambda->d[0]+nctemp1488;
if((0>j)||(j>=Model->Lambda->d[1])){
nctempstring->a="Model->Lambda";
nctempstring->d[0]=strlen("Model->Lambda")+1;;
LibeArrayex(338,nctempstring,j,1,Model->Lambda->d[1]);
}
int nctemp1495=i;
if((0>i)||(i>=rho->d[0])){
nctempstring->a="rho";
nctempstring->d[0]=strlen("rho")+1;;
LibeArrayex(338,nctempstring,i,0,rho->d[0]);
}
nctemp1495=j*rho->d[0]+nctemp1495;
if((0>j)||(j>=rho->d[1])){
nctempstring->a="rho";
nctempstring->d[0]=strlen("rho")+1;;
LibeArrayex(338,nctempstring,j,1,rho->d[1]);
}
int nctemp1505=i;
if((0>i)||(i>=vp->d[0])){
nctempstring->a="vp";
nctempstring->d[0]=strlen("vp")+1;;
LibeArrayex(338,nctempstring,i,0,vp->d[0]);
}
nctemp1505=j*vp->d[0]+nctemp1505;
if((0>j)||(j>=vp->d[1])){
nctempstring->a="vp";
nctempstring->d[0]=strlen("vp")+1;;
LibeArrayex(338,nctempstring,j,1,vp->d[1]);
}
int nctemp1509=i;
if((0>i)||(i>=vp->d[0])){
nctempstring->a="vp";
nctempstring->d[0]=strlen("vp")+1;;
LibeArrayex(338,nctempstring,i,0,vp->d[0]);
}
nctemp1509=j*vp->d[0]+nctemp1509;
if((0>j)||(j>=vp->d[1])){
nctempstring->a="vp";
nctempstring->d[0]=strlen("vp")+1;;
LibeArrayex(338,nctempstring,j,1,vp->d[1]);
}
float nctemp1512 = vp->a[nctemp1505] * vp->a[nctemp1509];
int nctemp1521=i;
if((0>i)||(i>=vs->d[0])){
nctempstring->a="vs";
nctempstring->d[0]=strlen("vs")+1;;
LibeArrayex(338,nctempstring,i,0,vs->d[0]);
}
nctemp1521=j*vs->d[0]+nctemp1521;
if((0>j)||(j>=vs->d[1])){
nctempstring->a="vs";
nctempstring->d[0]=strlen("vs")+1;;
LibeArrayex(338,nctempstring,j,1,vs->d[1]);
}
float nctemp1524 = 2.0 * vs->a[nctemp1521];
int nctemp1526=i;
if((0>i)||(i>=vs->d[0])){
nctempstring->a="vs";
nctempstring->d[0]=strlen("vs")+1;;
LibeArrayex(338,nctempstring,i,0,vs->d[0]);
}
nctemp1526=j*vs->d[0]+nctemp1526;
if((0>j)||(j>=vs->d[1])){
nctempstring->a="vs";
nctempstring->d[0]=strlen("vs")+1;;
LibeArrayex(338,nctempstring,j,1,vs->d[1]);
}
float nctemp1529 = nctemp1524 * vs->a[nctemp1526];
float nctemp1530 = nctemp1512 - nctemp1529;
float nctemp1531 = rho->a[nctemp1495] * nctemp1530;
Model->Lambda->a[nctemp1488] =nctemp1531;

#line 339  "model.e"
int nctemp1535=i;
if((0>i)||(i>=Model->Alpha1x->d[0])){
nctempstring->a="Model->Alpha1x";
nctempstring->d[0]=strlen("Model->Alpha1x")+1;;
LibeArrayex(339,nctempstring,i,0,Model->Alpha1x->d[0]);
}
nctemp1535=j*Model->Alpha1x->d[0]+nctemp1535;
if((0>j)||(j>=Model->Alpha1x->d[1])){
nctempstring->a="Model->Alpha1x";
nctempstring->d[0]=strlen("Model->Alpha1x")+1;;
LibeArrayex(339,nctempstring,j,1,Model->Alpha1x->d[1]);
}
Model->Alpha1x->a[nctemp1535] =0.0;

#line 340  "model.e"
int nctemp1542=i;
if((0>i)||(i>=Model->Alpha1y->d[0])){
nctempstring->a="Model->Alpha1y";
nctempstring->d[0]=strlen("Model->Alpha1y")+1;;
LibeArrayex(340,nctempstring,i,0,Model->Alpha1y->d[0]);
}
nctemp1542=j*Model->Alpha1y->d[0]+nctemp1542;
if((0>j)||(j>=Model->Alpha1y->d[1])){
nctempstring->a="Model->Alpha1y";
nctempstring->d[0]=strlen("Model->Alpha1y")+1;;
LibeArrayex(340,nctempstring,j,1,Model->Alpha1y->d[1]);
}
Model->Alpha1y->a[nctemp1542] =0.0;

#line 341  "model.e"
int nctemp1549=i;
if((0>i)||(i>=Model->Alpha2x->d[0])){
nctempstring->a="Model->Alpha2x";
nctempstring->d[0]=strlen("Model->Alpha2x")+1;;
LibeArrayex(341,nctempstring,i,0,Model->Alpha2x->d[0]);
}
nctemp1549=j*Model->Alpha2x->d[0]+nctemp1549;
if((0>j)||(j>=Model->Alpha2x->d[1])){
nctempstring->a="Model->Alpha2x";
nctempstring->d[0]=strlen("Model->Alpha2x")+1;;
LibeArrayex(341,nctempstring,j,1,Model->Alpha2x->d[1]);
}
Model->Alpha2x->a[nctemp1549] =0.0;

#line 342  "model.e"
int nctemp1556=i;
if((0>i)||(i>=Model->Alpha2y->d[0])){
nctempstring->a="Model->Alpha2y";
nctempstring->d[0]=strlen("Model->Alpha2y")+1;;
LibeArrayex(342,nctempstring,i,0,Model->Alpha2y->d[0]);
}
nctemp1556=j*Model->Alpha2y->d[0]+nctemp1556;
if((0>j)||(j>=Model->Alpha2y->d[1])){
nctempstring->a="Model->Alpha2y";
nctempstring->d[0]=strlen("Model->Alpha2y")+1;;
LibeArrayex(342,nctempstring,j,1,Model->Alpha2y->d[1]);
}
Model->Alpha2y->a[nctemp1556] =0.0;

#line 343  "model.e"
int nctemp1563=i;
if((0>i)||(i>=Model->Beta1x->d[0])){
nctempstring->a="Model->Beta1x";
nctempstring->d[0]=strlen("Model->Beta1x")+1;;
LibeArrayex(343,nctempstring,i,0,Model->Beta1x->d[0]);
}
nctemp1563=j*Model->Beta1x->d[0]+nctemp1563;
if((0>j)||(j>=Model->Beta1x->d[1])){
nctempstring->a="Model->Beta1x";
nctempstring->d[0]=strlen("Model->Beta1x")+1;;
LibeArrayex(343,nctempstring,j,1,Model->Beta1x->d[1]);
}
Model->Beta1x->a[nctemp1563] =0.0;

#line 344  "model.e"
int nctemp1570=i;
if((0>i)||(i>=Model->Beta1y->d[0])){
nctempstring->a="Model->Beta1y";
nctempstring->d[0]=strlen("Model->Beta1y")+1;;
LibeArrayex(344,nctempstring,i,0,Model->Beta1y->d[0]);
}
nctemp1570=j*Model->Beta1y->d[0]+nctemp1570;
if((0>j)||(j>=Model->Beta1y->d[1])){
nctempstring->a="Model->Beta1y";
nctempstring->d[0]=strlen("Model->Beta1y")+1;;
LibeArrayex(344,nctempstring,j,1,Model->Beta1y->d[1]);
}
Model->Beta1y->a[nctemp1570] =0.0;

#line 345  "model.e"
int nctemp1577=i;
if((0>i)||(i>=Model->Beta2x->d[0])){
nctempstring->a="Model->Beta2x";
nctempstring->d[0]=strlen("Model->Beta2x")+1;;
LibeArrayex(345,nctempstring,i,0,Model->Beta2x->d[0]);
}
nctemp1577=j*Model->Beta2x->d[0]+nctemp1577;
if((0>j)||(j>=Model->Beta2x->d[1])){
nctempstring->a="Model->Beta2x";
nctempstring->d[0]=strlen("Model->Beta2x")+1;;
LibeArrayex(345,nctempstring,j,1,Model->Beta2x->d[1]);
}
Model->Beta2x->a[nctemp1577] =0.0;

#line 346  "model.e"
int nctemp1584=i;
if((0>i)||(i>=Model->Beta2y->d[0])){
nctempstring->a="Model->Beta2y";
nctempstring->d[0]=strlen("Model->Beta2y")+1;;
LibeArrayex(346,nctempstring,i,0,Model->Beta2y->d[0]);
}
nctemp1584=j*Model->Beta2y->d[0]+nctemp1584;
if((0>j)||(j>=Model->Beta2y->d[1])){
nctempstring->a="Model->Beta2y";
nctempstring->d[0]=strlen("Model->Beta2y")+1;;
LibeArrayex(346,nctempstring,j,1,Model->Beta2y->d[1]);
}
Model->Beta2y->a[nctemp1584] =0.0;

#line 347  "model.e"
int nctemp1591=i;
if((0>i)||(i>=Model->Eta1x->d[0])){
nctempstring->a="Model->Eta1x";
nctempstring->d[0]=strlen("Model->Eta1x")+1;;
LibeArrayex(347,nctempstring,i,0,Model->Eta1x->d[0]);
}
nctemp1591=j*Model->Eta1x->d[0]+nctemp1591;
if((0>j)||(j>=Model->Eta1x->d[1])){
nctempstring->a="Model->Eta1x";
nctempstring->d[0]=strlen("Model->Eta1x")+1;;
LibeArrayex(347,nctempstring,j,1,Model->Eta1x->d[1]);
}
Model->Eta1x->a[nctemp1591] =0.0;

#line 348  "model.e"
int nctemp1598=i;
if((0>i)||(i>=Model->Eta1y->d[0])){
nctempstring->a="Model->Eta1y";
nctempstring->d[0]=strlen("Model->Eta1y")+1;;
LibeArrayex(348,nctempstring,i,0,Model->Eta1y->d[0]);
}
nctemp1598=j*Model->Eta1y->d[0]+nctemp1598;
if((0>j)||(j>=Model->Eta1y->d[1])){
nctempstring->a="Model->Eta1y";
nctempstring->d[0]=strlen("Model->Eta1y")+1;;
LibeArrayex(348,nctempstring,j,1,Model->Eta1y->d[1]);
}
Model->Eta1y->a[nctemp1598] =0.0;

#line 349  "model.e"
int nctemp1605=i;
if((0>i)||(i>=Model->Eta2x->d[0])){
nctempstring->a="Model->Eta2x";
nctempstring->d[0]=strlen("Model->Eta2x")+1;;
LibeArrayex(349,nctempstring,i,0,Model->Eta2x->d[0]);
}
nctemp1605=j*Model->Eta2x->d[0]+nctemp1605;
if((0>j)||(j>=Model->Eta2x->d[1])){
nctempstring->a="Model->Eta2x";
nctempstring->d[0]=strlen("Model->Eta2x")+1;;
LibeArrayex(349,nctempstring,j,1,Model->Eta2x->d[1]);
}
Model->Eta2x->a[nctemp1605] =0.0;

#line 350  "model.e"
int nctemp1612=i;
if((0>i)||(i>=Model->Eta2y->d[0])){
nctempstring->a="Model->Eta2y";
nctempstring->d[0]=strlen("Model->Eta2y")+1;;
LibeArrayex(350,nctempstring,i,0,Model->Eta2y->d[0]);
}
nctemp1612=j*Model->Eta2y->d[0]+nctemp1612;
if((0>j)||(j>=Model->Eta2y->d[1])){
nctempstring->a="Model->Eta2y";
nctempstring->d[0]=strlen("Model->Eta2y")+1;;
LibeArrayex(350,nctempstring,j,1,Model->Eta2y->d[1]);
}
Model->Eta2y->a[nctemp1612] =0.0;

#line 351  "model.e"
int nctemp1619=i;
if((0>i)||(i>=Model->Dlambdax->d[0])){
nctempstring->a="Model->Dlambdax";
nctempstring->d[0]=strlen("Model->Dlambdax")+1;;
LibeArrayex(351,nctempstring,i,0,Model->Dlambdax->d[0]);
}
nctemp1619=j*Model->Dlambdax->d[0]+nctemp1619;
if((0>j)||(j>=Model->Dlambdax->d[1])){
nctempstring->a="Model->Dlambdax";
nctempstring->d[0]=strlen("Model->Dlambdax")+1;;
LibeArrayex(351,nctempstring,j,1,Model->Dlambdax->d[1]);
}
int nctemp1623=i;
if((0>i)||(i>=Model->Lambda->d[0])){
nctempstring->a="Model->Lambda";
nctempstring->d[0]=strlen("Model->Lambda")+1;;
LibeArrayex(351,nctempstring,i,0,Model->Lambda->d[0]);
}
nctemp1623=j*Model->Lambda->d[0]+nctemp1623;
if((0>j)||(j>=Model->Lambda->d[1])){
nctempstring->a="Model->Lambda";
nctempstring->d[0]=strlen("Model->Lambda")+1;;
LibeArrayex(351,nctempstring,j,1,Model->Lambda->d[1]);
}
Model->Dlambdax->a[nctemp1619] =Model->Lambda->a[nctemp1623];

#line 352  "model.e"
int nctemp1629=i;
if((0>i)||(i>=Model->Dlambday->d[0])){
nctempstring->a="Model->Dlambday";
nctempstring->d[0]=strlen("Model->Dlambday")+1;;
LibeArrayex(352,nctempstring,i,0,Model->Dlambday->d[0]);
}
nctemp1629=j*Model->Dlambday->d[0]+nctemp1629;
if((0>j)||(j>=Model->Dlambday->d[1])){
nctempstring->a="Model->Dlambday";
nctempstring->d[0]=strlen("Model->Dlambday")+1;;
LibeArrayex(352,nctempstring,j,1,Model->Dlambday->d[1]);
}
int nctemp1633=i;
if((0>i)||(i>=Model->Lambda->d[0])){
nctempstring->a="Model->Lambda";
nctempstring->d[0]=strlen("Model->Lambda")+1;;
LibeArrayex(352,nctempstring,i,0,Model->Lambda->d[0]);
}
nctemp1633=j*Model->Lambda->d[0]+nctemp1633;
if((0>j)||(j>=Model->Lambda->d[1])){
nctempstring->a="Model->Lambda";
nctempstring->d[0]=strlen("Model->Lambda")+1;;
LibeArrayex(352,nctempstring,j,1,Model->Lambda->d[1]);
}
Model->Dlambday->a[nctemp1629] =Model->Lambda->a[nctemp1633];

#line 353  "model.e"
int nctemp1639=i;
if((0>i)||(i>=Model->Dmux->d[0])){
nctempstring->a="Model->Dmux";
nctempstring->d[0]=strlen("Model->Dmux")+1;;
LibeArrayex(353,nctempstring,i,0,Model->Dmux->d[0]);
}
nctemp1639=j*Model->Dmux->d[0]+nctemp1639;
if((0>j)||(j>=Model->Dmux->d[1])){
nctempstring->a="Model->Dmux";
nctempstring->d[0]=strlen("Model->Dmux")+1;;
LibeArrayex(353,nctempstring,j,1,Model->Dmux->d[1]);
}
int nctemp1643=i;
if((0>i)||(i>=Model->Mu->d[0])){
nctempstring->a="Model->Mu";
nctempstring->d[0]=strlen("Model->Mu")+1;;
LibeArrayex(353,nctempstring,i,0,Model->Mu->d[0]);
}
nctemp1643=j*Model->Mu->d[0]+nctemp1643;
if((0>j)||(j>=Model->Mu->d[1])){
nctempstring->a="Model->Mu";
nctempstring->d[0]=strlen("Model->Mu")+1;;
LibeArrayex(353,nctempstring,j,1,Model->Mu->d[1]);
}
Model->Dmux->a[nctemp1639] =Model->Mu->a[nctemp1643];

#line 354  "model.e"
int nctemp1649=i;
if((0>i)||(i>=Model->Dmuy->d[0])){
nctempstring->a="Model->Dmuy";
nctempstring->d[0]=strlen("Model->Dmuy")+1;;
LibeArrayex(354,nctempstring,i,0,Model->Dmuy->d[0]);
}
nctemp1649=j*Model->Dmuy->d[0]+nctemp1649;
if((0>j)||(j>=Model->Dmuy->d[1])){
nctempstring->a="Model->Dmuy";
nctempstring->d[0]=strlen("Model->Dmuy")+1;;
LibeArrayex(354,nctempstring,j,1,Model->Dmuy->d[1]);
}
int nctemp1653=i;
if((0>i)||(i>=Model->Mu->d[0])){
nctempstring->a="Model->Mu";
nctempstring->d[0]=strlen("Model->Mu")+1;;
LibeArrayex(354,nctempstring,i,0,Model->Mu->d[0]);
}
nctemp1653=j*Model->Mu->d[0]+nctemp1653;
if((0>j)||(j>=Model->Mu->d[1])){
nctempstring->a="Model->Mu";
nctempstring->d[0]=strlen("Model->Mu")+1;;
LibeArrayex(354,nctempstring,j,1,Model->Mu->d[1]);
}
Model->Dmuy->a[nctemp1649] =Model->Mu->a[nctemp1653];

#line 355  "model.e"
int nctemp1659=i;
if((0>i)||(i>=Model->Drhopx->d[0])){
nctempstring->a="Model->Drhopx";
nctempstring->d[0]=strlen("Model->Drhopx")+1;;
LibeArrayex(355,nctempstring,i,0,Model->Drhopx->d[0]);
}
nctemp1659=j*Model->Drhopx->d[0]+nctemp1659;
if((0>j)||(j>=Model->Drhopx->d[1])){
nctempstring->a="Model->Drhopx";
nctempstring->d[0]=strlen("Model->Drhopx")+1;;
LibeArrayex(355,nctempstring,j,1,Model->Drhopx->d[1]);
}
int nctemp1663=i;
if((0>i)||(i>=Model->Rho->d[0])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(355,nctempstring,i,0,Model->Rho->d[0]);
}
nctemp1663=j*Model->Rho->d[0]+nctemp1663;
if((0>j)||(j>=Model->Rho->d[1])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(355,nctempstring,j,1,Model->Rho->d[1]);
}
Model->Drhopx->a[nctemp1659] =Model->Rho->a[nctemp1663];

#line 356  "model.e"
int nctemp1669=i;
if((0>i)||(i>=Model->Drhopy->d[0])){
nctempstring->a="Model->Drhopy";
nctempstring->d[0]=strlen("Model->Drhopy")+1;;
LibeArrayex(356,nctempstring,i,0,Model->Drhopy->d[0]);
}
nctemp1669=j*Model->Drhopy->d[0]+nctemp1669;
if((0>j)||(j>=Model->Drhopy->d[1])){
nctempstring->a="Model->Drhopy";
nctempstring->d[0]=strlen("Model->Drhopy")+1;;
LibeArrayex(356,nctempstring,j,1,Model->Drhopy->d[1]);
}
int nctemp1673=i;
if((0>i)||(i>=Model->Rho->d[0])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(356,nctempstring,i,0,Model->Rho->d[0]);
}
nctemp1673=j*Model->Rho->d[0]+nctemp1673;
if((0>j)||(j>=Model->Rho->d[1])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(356,nctempstring,j,1,Model->Rho->d[1]);
}
Model->Drhopy->a[nctemp1669] =Model->Rho->a[nctemp1673];

#line 335  "model.e"
}
int nctemp1684 = i + 1;
i =nctemp1684;
int nctemp1685 = (i < Nx);
nctemp1440=nctemp1685;
}

#line 334  "model.e"
}
int nctemp1697 = j + 1;
j =nctemp1697;
int nctemp1698 = (j < Ny);
nctemp1432=nctemp1698;
}

#line 364  "model.e"
nctempfloat2* nctemp1703= Model->Qlx;
nctempfloat2* nctemp1706= Model->Qly;
nctempfloat2* nctemp1709= Model->Dlambdax;
nctempfloat2* nctemp1712= Model->Dlambday;

#line 365  "model.e"
nctempfloat2* nctemp1715= Model->Alpha1x;
nctempfloat2* nctemp1718= Model->Alpha1y;

#line 366  "model.e"
nctempfloat2* nctemp1721= Model->Alpha2x;
nctempfloat2* nctemp1724= Model->Alpha2y;
struct model* nctemp1727= Model;

#line 364  "model.e"
int nctemp1729=Modelslscoeffs(nctemp1703,nctemp1706,nctemp1709,nctemp1712,nctemp1715,nctemp1718,nctemp1721,nctemp1724,nctemp1727);

#line 367  "model.e"
nctempfloat2* nctemp1731= Model->Qmx;
nctempfloat2* nctemp1734= Model->Qmy;
nctempfloat2* nctemp1737= Model->Dmux;
nctempfloat2* nctemp1740= Model->Dmuy;

#line 368  "model.e"
nctempfloat2* nctemp1743= Model->Beta1x;
nctempfloat2* nctemp1746= Model->Beta1y;

#line 369  "model.e"
nctempfloat2* nctemp1749= Model->Beta2x;
nctempfloat2* nctemp1752= Model->Beta2y;
struct model* nctemp1755= Model;

#line 367  "model.e"
int nctemp1757=Modelslscoeffs(nctemp1731,nctemp1734,nctemp1737,nctemp1740,nctemp1743,nctemp1746,nctemp1749,nctemp1752,nctemp1755);

#line 370  "model.e"
nctempfloat2* nctemp1759= Model->Qpx;
nctempfloat2* nctemp1762= Model->Qpy;
nctempfloat2* nctemp1765= Model->Drhopx;
nctempfloat2* nctemp1768= Model->Drhopy;

#line 371  "model.e"
nctempfloat2* nctemp1771= Model->Eta1x;
nctempfloat2* nctemp1774= Model->Eta1y;
nctempfloat2* nctemp1777= Model->Eta2x;
nctempfloat2* nctemp1780= Model->Eta2y;
struct model* nctemp1783= Model;

#line 370  "model.e"
int nctemp1785=Modelslscoeffs(nctemp1759,nctemp1762,nctemp1765,nctemp1768,nctemp1771,nctemp1774,nctemp1777,nctemp1780,nctemp1783);

#line 377  "model.e"
nctempfloat2* nctemp1787= Model->Rho;
nctempfloat2* nctemp1790= Model->Rhox;
int nctemp1793=Modelstaggerx(nctemp1787,nctemp1790);

#line 378  "model.e"
nctempfloat2* nctemp1795= Model->Rho;
nctempfloat2* nctemp1798= Model->Rhoy;
int nctemp1801=Modelstaggery(nctemp1795,nctemp1798);

#line 381  "model.e"
nctempfloat2* nctemp1807= Model->Drhopx;
nctempfloat2* nctemp1810=Modelcopy(nctemp1807);
wrk=nctemp1810;

#line 382  "model.e"
nctempfloat2* nctemp1812= wrk;
nctempfloat2* nctemp1815= Model->Drhopx;
int nctemp1818=Modelstaggerx(nctemp1812,nctemp1815);

#line 383  "model.e"
RunFree(wrk->a);
RunFree(wrk);

#line 384  "model.e"
nctempfloat2* nctemp1827= Model->Drhopy;
nctempfloat2* nctemp1830=Modelcopy(nctemp1827);
wrk=nctemp1830;

#line 385  "model.e"
nctempfloat2* nctemp1832= wrk;
nctempfloat2* nctemp1835= Model->Drhopy;
int nctemp1838=Modelstaggery(nctemp1832,nctemp1835);

#line 388  "model.e"
nctempfloat2* nctemp1840= Model->Mu;
nctempfloat2* nctemp1843= wrk;
int nctemp1846=Modelstaggerx(nctemp1840,nctemp1843);

#line 389  "model.e"
nctempfloat2* nctemp1848= wrk;
nctempfloat2* nctemp1851= Model->Muxy;
int nctemp1854=Modelstaggery(nctemp1848,nctemp1851);

#line 392  "model.e"
nctempfloat2* nctemp1856= Model->Dmux;
nctempfloat2* nctemp1859= wrk;
int nctemp1862=Modelstaggerx(nctemp1856,nctemp1859);

#line 393  "model.e"
nctempfloat2* nctemp1864= wrk;
nctempfloat2* nctemp1867= Model->Dmuxyx;
int nctemp1870=Modelstaggery(nctemp1864,nctemp1867);

#line 394  "model.e"
nctempfloat2* nctemp1872= Model->Dmuy;
nctempfloat2* nctemp1875= wrk;
int nctemp1878=Modelstaggerx(nctemp1872,nctemp1875);

#line 395  "model.e"
nctempfloat2* nctemp1880= wrk;
nctempfloat2* nctemp1883= Model->Dmuxyy;
int nctemp1886=Modelstaggery(nctemp1880,nctemp1883);

#line 396  "model.e"
RunFree(wrk->a);
RunFree(wrk);

#line 399  "model.e"
nctempfloat2* nctemp1895= Model->Beta1x;
nctempfloat2* nctemp1898=Modelcopy(nctemp1895);
wrk=nctemp1898;

#line 400  "model.e"
int nctemp1905=Model->Nx;
nctemp1905=nctemp1905*Model->Ny;
nctempfloat2 *nctemp1904;
nctemp1904=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1904->d[0]=Model->Nx;
nctemp1904->d[1]=Model->Ny;
nctemp1904->a=(float *)RunMalloc(sizeof(float)*nctemp1905);
wrk2=nctemp1904;

#line 401  "model.e"
nctempfloat2* nctemp1911= wrk;
nctempfloat2* nctemp1914= wrk2;
int nctemp1917=Modelstaggery(nctemp1911,nctemp1914);

#line 402  "model.e"
nctempfloat2* nctemp1919= wrk2;
nctempfloat2* nctemp1922= Model->Beta1x;
int nctemp1925=Modelstaggerx(nctemp1919,nctemp1922);

#line 403  "model.e"
RunFree(wrk->a);
RunFree(wrk);

#line 404  "model.e"
nctempfloat2* nctemp1934= Model->Beta2x;
nctempfloat2* nctemp1937=Modelcopy(nctemp1934);
wrk=nctemp1937;

#line 405  "model.e"
int nctemp1944=Model->Nx;
nctemp1944=nctemp1944*Model->Ny;
nctempfloat2 *nctemp1943;
nctemp1943=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1943->d[0]=Model->Nx;
nctemp1943->d[1]=Model->Ny;
nctemp1943->a=(float *)RunMalloc(sizeof(float)*nctemp1944);
wrk2=nctemp1943;

#line 406  "model.e"
nctempfloat2* nctemp1950= wrk;
nctempfloat2* nctemp1953= wrk2;
int nctemp1956=Modelstaggery(nctemp1950,nctemp1953);

#line 407  "model.e"
nctempfloat2* nctemp1958= wrk2;
nctempfloat2* nctemp1961= Model->Beta2x;
int nctemp1964=Modelstaggerx(nctemp1958,nctemp1961);

#line 408  "model.e"
RunFree(wrk->a);
RunFree(wrk);

#line 409  "model.e"
RunFree(wrk2->a);
RunFree(wrk2);

#line 410  "model.e"
nctempfloat2* nctemp1976= Model->Beta1y;
nctempfloat2* nctemp1979=Modelcopy(nctemp1976);
wrk=nctemp1979;

#line 411  "model.e"
int nctemp1986=Model->Nx;
nctemp1986=nctemp1986*Model->Ny;
nctempfloat2 *nctemp1985;
nctemp1985=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp1985->d[0]=Model->Nx;
nctemp1985->d[1]=Model->Ny;
nctemp1985->a=(float *)RunMalloc(sizeof(float)*nctemp1986);
wrk2=nctemp1985;

#line 412  "model.e"
nctempfloat2* nctemp1992= wrk;
nctempfloat2* nctemp1995= wrk2;
int nctemp1998=Modelstaggery(nctemp1992,nctemp1995);

#line 413  "model.e"
nctempfloat2* nctemp2000= wrk2;
nctempfloat2* nctemp2003= Model->Beta1y;
int nctemp2006=Modelstaggerx(nctemp2000,nctemp2003);

#line 414  "model.e"
RunFree(wrk->a);
RunFree(wrk);

#line 415  "model.e"
nctempfloat2* nctemp2015= Model->Beta2y;
nctempfloat2* nctemp2018=Modelcopy(nctemp2015);
wrk=nctemp2018;

#line 416  "model.e"
int nctemp2025=Model->Nx;
nctemp2025=nctemp2025*Model->Ny;
nctempfloat2 *nctemp2024;
nctemp2024=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp2024->d[0]=Model->Nx;
nctemp2024->d[1]=Model->Ny;
nctemp2024->a=(float *)RunMalloc(sizeof(float)*nctemp2025);
wrk2=nctemp2024;

#line 417  "model.e"
nctempfloat2* nctemp2031= wrk;
nctempfloat2* nctemp2034= wrk2;
int nctemp2037=Modelstaggery(nctemp2031,nctemp2034);

#line 418  "model.e"
nctempfloat2* nctemp2039= wrk2;
nctempfloat2* nctemp2042= Model->Beta2y;
int nctemp2045=Modelstaggerx(nctemp2039,nctemp2042);

#line 419  "model.e"
RunFree(wrk->a);
RunFree(wrk);

#line 420  "model.e"
RunFree(wrk2->a);
RunFree(wrk2);

#line 423  "model.e"
nctempfloat2* nctemp2057= Model->Eta1x;
nctempfloat2* nctemp2060=Modelcopy(nctemp2057);
wrk=nctemp2060;

#line 424  "model.e"
nctempfloat2* nctemp2062= wrk;
nctempfloat2* nctemp2065= Model->Eta1x;
int nctemp2068=Modelstaggerx(nctemp2062,nctemp2065);

#line 425  "model.e"
RunFree(wrk->a);
RunFree(wrk);

#line 426  "model.e"
nctempfloat2* nctemp2077= Model->Eta2x;
nctempfloat2* nctemp2080=Modelcopy(nctemp2077);
wrk=nctemp2080;

#line 427  "model.e"
nctempfloat2* nctemp2082= wrk;
nctempfloat2* nctemp2085= Model->Eta2x;
int nctemp2088=Modelstaggerx(nctemp2082,nctemp2085);

#line 428  "model.e"
RunFree(wrk->a);
RunFree(wrk);

#line 430  "model.e"
nctempfloat2* nctemp2097= Model->Eta1y;
nctempfloat2* nctemp2100=Modelcopy(nctemp2097);
wrk=nctemp2100;

#line 431  "model.e"
nctempfloat2* nctemp2102= wrk;
nctempfloat2* nctemp2105= Model->Eta1y;
int nctemp2108=Modelstaggery(nctemp2102,nctemp2105);

#line 432  "model.e"
RunFree(wrk->a);
RunFree(wrk);

#line 433  "model.e"
nctempfloat2* nctemp2117= Model->Eta2y;
nctempfloat2* nctemp2120=Modelcopy(nctemp2117);
wrk=nctemp2120;

#line 434  "model.e"
nctempfloat2* nctemp2122= wrk;
nctempfloat2* nctemp2125= Model->Eta2y;
int nctemp2128=Modelstaggery(nctemp2122,nctemp2125);

#line 435  "model.e"
RunFree(wrk->a);
RunFree(wrk);

#line 436  "model.e"
return Model;

#line 249  "model.e"
}

#line 439  "model.e"
struct model* ModelNew (nctempfloat2 *vp,nctempfloat2 *vs,nctempfloat2 *rho,nctempfloat2 *Qlx,nctempfloat2 *Qly,nctempfloat2 *Qmx,nctempfloat2 *Qmy,nctempfloat2 *Qpx,nctempfloat2 *Qpy,float Dx,float Dt,float W0,int Nb,int Rheol)

#line 442  "model.e"
{

#line 466  "model.e"
struct model* m;

#line 468  "model.e"
int nctemp2133 = (Rheol ==2);
if(nctemp2133)
{

#line 469  "model.e"
nctempfloat2* nctemp2141= vp;
nctempfloat2* nctemp2144= vs;
nctempfloat2* nctemp2147= rho;
nctempfloat2* nctemp2150= Qlx;
nctempfloat2* nctemp2153= Qly;
nctempfloat2* nctemp2156= Qmx;
nctempfloat2* nctemp2159= Qmy;
nctempfloat2* nctemp2162= Qpx;
nctempfloat2* nctemp2165= Qpy;

#line 470  "model.e"
float nctemp2168= Dx;
float nctemp2170= Dt;
float nctemp2172= W0;
int nctemp2174= Nb;

#line 469  "model.e"
struct model* nctemp2176=Modelsls(nctemp2141,nctemp2144,nctemp2147,nctemp2150,nctemp2153,nctemp2156,nctemp2159,nctemp2162,nctemp2165,nctemp2168,nctemp2170,nctemp2172,nctemp2174);
m =nctemp2176;

#line 468  "model.e"
}

#line 472  "model.e"
else{

#line 473  "model.e"
int nctemp2178= 4;
struct nctempchar1 *nctemp2182;
static struct nctempchar1 nctemp2183 = {{ 18}, (char*)"Unknown Q-model\n\0"};
nctemp2182=&nctemp2183;
nctempchar1* nctemp2180= nctemp2182;
int nctemp2184=LibePuts(nctemp2178,nctemp2180);

#line 474  "model.e"
int nctemp2186= 4;
int nctemp2188=LibeFlush(nctemp2186);

#line 476  "model.e"
int nctemp2190=LibeExit();

#line 472  "model.e"
}

#line 478  "model.e"
return m;

#line 442  "model.e"
}

#line 481  "model.e"
float ModelStability (struct model* Model)
{

#line 492  "model.e"
int nx;
int ny;
int i;
int j;
float vp;
float stab;

#line 496  "model.e"
nx =Model->Nx;

#line 497  "model.e"
ny =Model->Ny;

#line 498  "model.e"
j =0;
int nctemp2204 = (j < ny);
while(nctemp2204){
{

#line 499  "model.e"
i =0;
int nctemp2212 = (i < nx);
while(nctemp2212){
{

#line 500  "model.e"
int nctemp2227=i;
if((0>i)||(i>=Model->Lambda->d[0])){
nctempstring->a="Model->Lambda";
nctempstring->d[0]=strlen("Model->Lambda")+1;;
LibeArrayex(500,nctempstring,i,0,Model->Lambda->d[0]);
}
nctemp2227=j*Model->Lambda->d[0]+nctemp2227;
if((0>j)||(j>=Model->Lambda->d[1])){
nctempstring->a="Model->Lambda";
nctempstring->d[0]=strlen("Model->Lambda")+1;;
LibeArrayex(500,nctempstring,j,1,Model->Lambda->d[1]);
}
int nctemp2235=i;
if((0>i)||(i>=Model->Mu->d[0])){
nctempstring->a="Model->Mu";
nctempstring->d[0]=strlen("Model->Mu")+1;;
LibeArrayex(500,nctempstring,i,0,Model->Mu->d[0]);
}
nctemp2235=j*Model->Mu->d[0]+nctemp2235;
if((0>j)||(j>=Model->Mu->d[1])){
nctempstring->a="Model->Mu";
nctempstring->d[0]=strlen("Model->Mu")+1;;
LibeArrayex(500,nctempstring,j,1,Model->Mu->d[1]);
}
float nctemp2238 = 2.0 * Model->Mu->a[nctemp2235];
float nctemp2239 = Model->Lambda->a[nctemp2227] + nctemp2238;
int nctemp2241=i;
if((0>i)||(i>=Model->Rho->d[0])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(500,nctempstring,i,0,Model->Rho->d[0]);
}
nctemp2241=j*Model->Rho->d[0]+nctemp2241;
if((0>j)||(j>=Model->Rho->d[1])){
nctempstring->a="Model->Rho";
nctempstring->d[0]=strlen("Model->Rho")+1;;
LibeArrayex(500,nctempstring,j,1,Model->Rho->d[1]);
}
float nctemp2244 = nctemp2239 / Model->Rho->a[nctemp2241];
float nctemp2220= nctemp2244;
float nctemp2245=LibeSqrt(nctemp2220);
vp =nctemp2245;

#line 501  "model.e"
float nctemp2257 = vp * Model->Dt;
float nctemp2259 = nctemp2257 / Model->Dx;
stab =nctemp2259;

#line 502  "model.e"
float nctemp2268= 2.0;
float nctemp2270=LibeSqrt(nctemp2268);
float nctemp2271 = 1.0 / nctemp2270;
int nctemp2260 = (stab > nctemp2271);
if(nctemp2260)
{

#line 503  "model.e"
int nctemp2273= 4;
struct nctempchar1 *nctemp2277;
static struct nctempchar1 nctemp2278 = {{ 28}, (char*)"Stability index too large! \0"};
nctemp2277=&nctemp2278;
nctempchar1* nctemp2275= nctemp2277;
int nctemp2279=LibePuts(nctemp2273,nctemp2275);

#line 504  "model.e"
int nctemp2281= 4;
float nctemp2283= stab;
struct nctempchar1 *nctemp2287;
static struct nctempchar1 nctemp2288 = {{ 2}, (char*)"g\0"};
nctemp2287=&nctemp2288;
nctempchar1* nctemp2285= nctemp2287;
int nctemp2289=LibePutf(nctemp2281,nctemp2283,nctemp2285);

#line 505  "model.e"
int nctemp2291= 4;
struct nctempchar1 *nctemp2295;
static struct nctempchar1 nctemp2296 = {{ 3}, (char*)"\n\0"};
nctemp2295=&nctemp2296;
nctempchar1* nctemp2293= nctemp2295;
int nctemp2297=LibePuts(nctemp2291,nctemp2293);

#line 506  "model.e"
int nctemp2299= 4;
struct nctempchar1 *nctemp2303;
static struct nctempchar1 nctemp2304 = {{ 7}, (char*)"vp: \n\0"};
nctemp2303=&nctemp2304;
nctempchar1* nctemp2301= nctemp2303;
int nctemp2305=LibePuts(nctemp2299,nctemp2301);

#line 507  "model.e"
int nctemp2307= 4;
float nctemp2309= vp;
struct nctempchar1 *nctemp2313;
static struct nctempchar1 nctemp2314 = {{ 2}, (char*)"g\0"};
nctemp2313=&nctemp2314;
nctempchar1* nctemp2311= nctemp2313;
int nctemp2315=LibePutf(nctemp2307,nctemp2309,nctemp2311);

#line 508  "model.e"
int nctemp2317= 4;
struct nctempchar1 *nctemp2321;
static struct nctempchar1 nctemp2322 = {{ 3}, (char*)"\n\0"};
nctemp2321=&nctemp2322;
nctempchar1* nctemp2319= nctemp2321;
int nctemp2323=LibePuts(nctemp2317,nctemp2319);

#line 509  "model.e"
int nctemp2325= 4;
struct nctempchar1 *nctemp2329;
static struct nctempchar1 nctemp2330 = {{ 7}, (char*)"dt: \n\0"};
nctemp2329=&nctemp2330;
nctempchar1* nctemp2327= nctemp2329;
int nctemp2331=LibePuts(nctemp2325,nctemp2327);

#line 510  "model.e"
int nctemp2333= 4;
float nctemp2335= Model->Dt;
struct nctempchar1 *nctemp2339;
static struct nctempchar1 nctemp2340 = {{ 2}, (char*)"g\0"};
nctemp2339=&nctemp2340;
nctempchar1* nctemp2337= nctemp2339;
int nctemp2341=LibePutf(nctemp2333,nctemp2335,nctemp2337);

#line 511  "model.e"
int nctemp2343= 4;
struct nctempchar1 *nctemp2347;
static struct nctempchar1 nctemp2348 = {{ 3}, (char*)"\n\0"};
nctemp2347=&nctemp2348;
nctempchar1* nctemp2345= nctemp2347;
int nctemp2349=LibePuts(nctemp2343,nctemp2345);

#line 512  "model.e"
int nctemp2351= 4;
struct nctempchar1 *nctemp2355;
static struct nctempchar1 nctemp2356 = {{ 7}, (char*)"dx: \n\0"};
nctemp2355=&nctemp2356;
nctempchar1* nctemp2353= nctemp2355;
int nctemp2357=LibePuts(nctemp2351,nctemp2353);

#line 513  "model.e"
int nctemp2359= 4;
float nctemp2361= Model->Dx;
struct nctempchar1 *nctemp2365;
static struct nctempchar1 nctemp2366 = {{ 2}, (char*)"g\0"};
nctemp2365=&nctemp2366;
nctempchar1* nctemp2363= nctemp2365;
int nctemp2367=LibePutf(nctemp2359,nctemp2361,nctemp2363);

#line 514  "model.e"
int nctemp2369= 4;
struct nctempchar1 *nctemp2373;
static struct nctempchar1 nctemp2374 = {{ 3}, (char*)"\n\0"};
nctemp2373=&nctemp2374;
nctempchar1* nctemp2371= nctemp2373;
int nctemp2375=LibePuts(nctemp2369,nctemp2371);

#line 515  "model.e"
int nctemp2377= 4;
int nctemp2379=LibeFlush(nctemp2377);

#line 502  "model.e"
}

#line 499  "model.e"
}
int nctemp2388 = i + 1;
i =nctemp2388;
int nctemp2389 = (i < nx);
nctemp2212=nctemp2389;
}

#line 498  "model.e"
}
int nctemp2401 = j + 1;
j =nctemp2401;
int nctemp2402 = (j < ny);
nctemp2204=nctemp2402;
}

#line 520  "model.e"
return stab;

#line 481  "model.e"
}
