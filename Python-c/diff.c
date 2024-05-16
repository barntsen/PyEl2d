/*  Translated by epsc  version today */
#include <stddef.h>
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
int DiffDyminus (struct diff* Diff,nctempfloat2 *A,nctempfloat2 *dA,float dx);
int DiffDxplus (struct diff* Diff,nctempfloat2 *A,nctempfloat2 *dA,float dx);
int DiffDyplus (struct diff* Diff,nctempfloat2 *A,nctempfloat2 *dA,float dx);
struct diff* DiffNew (int l)
{
struct diff* Diff;
int i;
int j;
int k;
struct diff *nctemp5=(struct diff*)RunMalloc(sizeof(struct diff));
Diff =nctemp5;
Diff->lmax =8;
int nctemp11 = (l < 1);
if(nctemp11)
{
l =1;
}
int nctemp19 = (l > Diff->lmax);
if(nctemp19)
{
l =Diff->lmax;
}
Diff->l =l;
int nctemp37=Diff->lmax;
nctemp37=nctemp37*Diff->lmax;
nctempfloat2 *nctemp36;
nctemp36=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp36->d[0]=Diff->lmax;
nctemp36->d[1]=Diff->lmax;
nctemp36->a=(float *)RunMalloc(sizeof(float)*nctemp37);
Diff->coeffs=nctemp36;
int nctemp48=l;
nctempfloat1 *nctemp47;
nctemp47=(nctempfloat1*)RunMalloc(sizeof(nctempfloat1));
nctemp47->d[0]=l;
nctemp47->a=(float *)RunMalloc(sizeof(float)*nctemp48);
Diff->w=nctemp47;
i =0;
int nctemp55 = (i < Diff->lmax);
while(nctemp55){
{
j =0;
int nctemp63 = (j < Diff->lmax);
while(nctemp63){
{
int nctemp70=i;
if((0>i)||(i>=Diff->coeffs->d[0])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(24,nctempstring,i,0,Diff->coeffs->d[0]);
}
nctemp70=j*Diff->coeffs->d[0]+nctemp70;
if((0>j)||(j>=Diff->coeffs->d[1])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(24,nctempstring,j,1,Diff->coeffs->d[1]);
}
Diff->coeffs->a[nctemp70] =0.0;
}
int nctemp82 = j + 1;
j =nctemp82;
int nctemp83 = (j < Diff->lmax);
nctemp63=nctemp83;
}
}
int nctemp95 = i + 1;
i =nctemp95;
int nctemp96 = (i < Diff->lmax);
nctemp55=nctemp96;
}
int nctemp103=0;
if((0>0)||(0>=Diff->coeffs->d[0])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(28,nctempstring,0,0,Diff->coeffs->d[0]);
}
nctemp103=0*Diff->coeffs->d[0]+nctemp103;
if((0>0)||(0>=Diff->coeffs->d[1])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(28,nctempstring,0,1,Diff->coeffs->d[1]);
}
Diff->coeffs->a[nctemp103] =1.0021;
int nctemp110=1;
if((0>1)||(1>=Diff->coeffs->d[0])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(31,nctempstring,1,0,Diff->coeffs->d[0]);
}
nctemp110=0*Diff->coeffs->d[0]+nctemp110;
if((0>0)||(0>=Diff->coeffs->d[1])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(31,nctempstring,0,1,Diff->coeffs->d[1]);
}
Diff->coeffs->a[nctemp110] =1.1452;
int nctemp117=1;
if((0>1)||(1>=Diff->coeffs->d[0])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(32,nctempstring,1,0,Diff->coeffs->d[0]);
}
nctemp117=1*Diff->coeffs->d[0]+nctemp117;
if((0>1)||(1>=Diff->coeffs->d[1])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(32,nctempstring,1,1,Diff->coeffs->d[1]);
}
float nctemp120= -0.0492;
Diff->coeffs->a[nctemp117] =nctemp120;
int nctemp124=2;
if((0>2)||(2>=Diff->coeffs->d[0])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(35,nctempstring,2,0,Diff->coeffs->d[0]);
}
nctemp124=0*Diff->coeffs->d[0]+nctemp124;
if((0>0)||(0>=Diff->coeffs->d[1])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(35,nctempstring,0,1,Diff->coeffs->d[1]);
}
Diff->coeffs->a[nctemp124] =1.2036;
int nctemp131=2;
if((0>2)||(2>=Diff->coeffs->d[0])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(36,nctempstring,2,0,Diff->coeffs->d[0]);
}
nctemp131=1*Diff->coeffs->d[0]+nctemp131;
if((0>1)||(1>=Diff->coeffs->d[1])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(36,nctempstring,1,1,Diff->coeffs->d[1]);
}
float nctemp134= -0.0833;
Diff->coeffs->a[nctemp131] =nctemp134;
int nctemp138=2;
if((0>2)||(2>=Diff->coeffs->d[0])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(37,nctempstring,2,0,Diff->coeffs->d[0]);
}
nctemp138=2*Diff->coeffs->d[0]+nctemp138;
if((0>2)||(2>=Diff->coeffs->d[1])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(37,nctempstring,2,1,Diff->coeffs->d[1]);
}
Diff->coeffs->a[nctemp138] =0.0097;
int nctemp145=3;
if((0>3)||(3>=Diff->coeffs->d[0])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(40,nctempstring,3,0,Diff->coeffs->d[0]);
}
nctemp145=0*Diff->coeffs->d[0]+nctemp145;
if((0>0)||(0>=Diff->coeffs->d[1])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(40,nctempstring,0,1,Diff->coeffs->d[1]);
}
Diff->coeffs->a[nctemp145] =1.2316;
int nctemp152=3;
if((0>3)||(3>=Diff->coeffs->d[0])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(41,nctempstring,3,0,Diff->coeffs->d[0]);
}
nctemp152=1*Diff->coeffs->d[0]+nctemp152;
if((0>1)||(1>=Diff->coeffs->d[1])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(41,nctempstring,1,1,Diff->coeffs->d[1]);
}
float nctemp155= -0.1041;
Diff->coeffs->a[nctemp152] =nctemp155;
int nctemp159=3;
if((0>3)||(3>=Diff->coeffs->d[0])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(42,nctempstring,3,0,Diff->coeffs->d[0]);
}
nctemp159=2*Diff->coeffs->d[0]+nctemp159;
if((0>2)||(2>=Diff->coeffs->d[1])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(42,nctempstring,2,1,Diff->coeffs->d[1]);
}
Diff->coeffs->a[nctemp159] =0.0206;
int nctemp166=3;
if((0>3)||(3>=Diff->coeffs->d[0])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(43,nctempstring,3,0,Diff->coeffs->d[0]);
}
nctemp166=3*Diff->coeffs->d[0]+nctemp166;
if((0>3)||(3>=Diff->coeffs->d[1])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(43,nctempstring,3,1,Diff->coeffs->d[1]);
}
float nctemp169= -0.0035;
Diff->coeffs->a[nctemp166] =nctemp169;
int nctemp173=4;
if((0>4)||(4>=Diff->coeffs->d[0])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(46,nctempstring,4,0,Diff->coeffs->d[0]);
}
nctemp173=0*Diff->coeffs->d[0]+nctemp173;
if((0>0)||(0>=Diff->coeffs->d[1])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(46,nctempstring,0,1,Diff->coeffs->d[1]);
}
Diff->coeffs->a[nctemp173] =1.2463;
int nctemp180=4;
if((0>4)||(4>=Diff->coeffs->d[0])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(47,nctempstring,4,0,Diff->coeffs->d[0]);
}
nctemp180=1*Diff->coeffs->d[0]+nctemp180;
if((0>1)||(1>=Diff->coeffs->d[1])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(47,nctempstring,1,1,Diff->coeffs->d[1]);
}
float nctemp183= -0.1163;
Diff->coeffs->a[nctemp180] =nctemp183;
int nctemp187=4;
if((0>4)||(4>=Diff->coeffs->d[0])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(48,nctempstring,4,0,Diff->coeffs->d[0]);
}
nctemp187=2*Diff->coeffs->d[0]+nctemp187;
if((0>2)||(2>=Diff->coeffs->d[1])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(48,nctempstring,2,1,Diff->coeffs->d[1]);
}
Diff->coeffs->a[nctemp187] =0.0290;
int nctemp194=4;
if((0>4)||(4>=Diff->coeffs->d[0])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(49,nctempstring,4,0,Diff->coeffs->d[0]);
}
nctemp194=3*Diff->coeffs->d[0]+nctemp194;
if((0>3)||(3>=Diff->coeffs->d[1])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(49,nctempstring,3,1,Diff->coeffs->d[1]);
}
float nctemp197= -0.0080;
Diff->coeffs->a[nctemp194] =nctemp197;
int nctemp201=4;
if((0>4)||(4>=Diff->coeffs->d[0])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(50,nctempstring,4,0,Diff->coeffs->d[0]);
}
nctemp201=4*Diff->coeffs->d[0]+nctemp201;
if((0>4)||(4>=Diff->coeffs->d[1])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(50,nctempstring,4,1,Diff->coeffs->d[1]);
}
Diff->coeffs->a[nctemp201] =0.0018;
int nctemp208=5;
if((0>5)||(5>=Diff->coeffs->d[0])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(53,nctempstring,5,0,Diff->coeffs->d[0]);
}
nctemp208=0*Diff->coeffs->d[0]+nctemp208;
if((0>0)||(0>=Diff->coeffs->d[1])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(53,nctempstring,0,1,Diff->coeffs->d[1]);
}
Diff->coeffs->a[nctemp208] =1.2542;
int nctemp215=5;
if((0>5)||(5>=Diff->coeffs->d[0])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(54,nctempstring,5,0,Diff->coeffs->d[0]);
}
nctemp215=1*Diff->coeffs->d[0]+nctemp215;
if((0>1)||(1>=Diff->coeffs->d[1])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(54,nctempstring,1,1,Diff->coeffs->d[1]);
}
float nctemp218= -0.1213;
Diff->coeffs->a[nctemp215] =nctemp218;
int nctemp222=5;
if((0>5)||(5>=Diff->coeffs->d[0])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(55,nctempstring,5,0,Diff->coeffs->d[0]);
}
nctemp222=2*Diff->coeffs->d[0]+nctemp222;
if((0>2)||(2>=Diff->coeffs->d[1])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(55,nctempstring,2,1,Diff->coeffs->d[1]);
}
Diff->coeffs->a[nctemp222] =0.0344;
int nctemp229=5;
if((0>5)||(5>=Diff->coeffs->d[0])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(56,nctempstring,5,0,Diff->coeffs->d[0]);
}
nctemp229=3*Diff->coeffs->d[0]+nctemp229;
if((0>3)||(3>=Diff->coeffs->d[1])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(56,nctempstring,3,1,Diff->coeffs->d[1]);
}
float nctemp232= -0.017;
Diff->coeffs->a[nctemp229] =nctemp232;
int nctemp236=5;
if((0>5)||(5>=Diff->coeffs->d[0])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(57,nctempstring,5,0,Diff->coeffs->d[0]);
}
nctemp236=4*Diff->coeffs->d[0]+nctemp236;
if((0>4)||(4>=Diff->coeffs->d[1])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(57,nctempstring,4,1,Diff->coeffs->d[1]);
}
Diff->coeffs->a[nctemp236] =0.0038;
int nctemp243=5;
if((0>5)||(5>=Diff->coeffs->d[0])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(58,nctempstring,5,0,Diff->coeffs->d[0]);
}
nctemp243=5*Diff->coeffs->d[0]+nctemp243;
if((0>5)||(5>=Diff->coeffs->d[1])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(58,nctempstring,5,1,Diff->coeffs->d[1]);
}
float nctemp246= -0.0011;
Diff->coeffs->a[nctemp243] =nctemp246;
int nctemp250=6;
if((0>6)||(6>=Diff->coeffs->d[0])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(61,nctempstring,6,0,Diff->coeffs->d[0]);
}
nctemp250=0*Diff->coeffs->d[0]+nctemp250;
if((0>0)||(0>=Diff->coeffs->d[1])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(61,nctempstring,0,1,Diff->coeffs->d[1]);
}
Diff->coeffs->a[nctemp250] =1.2593;
int nctemp257=6;
if((0>6)||(6>=Diff->coeffs->d[0])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(62,nctempstring,6,0,Diff->coeffs->d[0]);
}
nctemp257=1*Diff->coeffs->d[0]+nctemp257;
if((0>1)||(1>=Diff->coeffs->d[1])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(62,nctempstring,1,1,Diff->coeffs->d[1]);
}
float nctemp260= -0.1280;
Diff->coeffs->a[nctemp257] =nctemp260;
int nctemp264=6;
if((0>6)||(6>=Diff->coeffs->d[0])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(63,nctempstring,6,0,Diff->coeffs->d[0]);
}
nctemp264=2*Diff->coeffs->d[0]+nctemp264;
if((0>2)||(2>=Diff->coeffs->d[1])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(63,nctempstring,2,1,Diff->coeffs->d[1]);
}
Diff->coeffs->a[nctemp264] =0.0384;
int nctemp271=6;
if((0>6)||(6>=Diff->coeffs->d[0])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(64,nctempstring,6,0,Diff->coeffs->d[0]);
}
nctemp271=3*Diff->coeffs->d[0]+nctemp271;
if((0>3)||(3>=Diff->coeffs->d[1])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(64,nctempstring,3,1,Diff->coeffs->d[1]);
}
float nctemp274= -0.0147;
Diff->coeffs->a[nctemp271] =nctemp274;
int nctemp278=6;
if((0>6)||(6>=Diff->coeffs->d[0])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(65,nctempstring,6,0,Diff->coeffs->d[0]);
}
nctemp278=4*Diff->coeffs->d[0]+nctemp278;
if((0>4)||(4>=Diff->coeffs->d[1])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(65,nctempstring,4,1,Diff->coeffs->d[1]);
}
Diff->coeffs->a[nctemp278] =0.0059;
int nctemp285=6;
if((0>6)||(6>=Diff->coeffs->d[0])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(66,nctempstring,6,0,Diff->coeffs->d[0]);
}
nctemp285=5*Diff->coeffs->d[0]+nctemp285;
if((0>5)||(5>=Diff->coeffs->d[1])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(66,nctempstring,5,1,Diff->coeffs->d[1]);
}
float nctemp288= -0.0022;
Diff->coeffs->a[nctemp285] =nctemp288;
int nctemp292=6;
if((0>6)||(6>=Diff->coeffs->d[0])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(67,nctempstring,6,0,Diff->coeffs->d[0]);
}
nctemp292=6*Diff->coeffs->d[0]+nctemp292;
if((0>6)||(6>=Diff->coeffs->d[1])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(67,nctempstring,6,1,Diff->coeffs->d[1]);
}
Diff->coeffs->a[nctemp292] =0.0007;
int nctemp299=7;
if((0>7)||(7>=Diff->coeffs->d[0])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(70,nctempstring,7,0,Diff->coeffs->d[0]);
}
nctemp299=0*Diff->coeffs->d[0]+nctemp299;
if((0>0)||(0>=Diff->coeffs->d[1])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(70,nctempstring,0,1,Diff->coeffs->d[1]);
}
Diff->coeffs->a[nctemp299] =1.2626;
int nctemp306=7;
if((0>7)||(7>=Diff->coeffs->d[0])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(71,nctempstring,7,0,Diff->coeffs->d[0]);
}
nctemp306=1*Diff->coeffs->d[0]+nctemp306;
if((0>1)||(1>=Diff->coeffs->d[1])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(71,nctempstring,1,1,Diff->coeffs->d[1]);
}
float nctemp309= -0.1312;
Diff->coeffs->a[nctemp306] =nctemp309;
int nctemp313=7;
if((0>7)||(7>=Diff->coeffs->d[0])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(72,nctempstring,7,0,Diff->coeffs->d[0]);
}
nctemp313=2*Diff->coeffs->d[0]+nctemp313;
if((0>2)||(2>=Diff->coeffs->d[1])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(72,nctempstring,2,1,Diff->coeffs->d[1]);
}
Diff->coeffs->a[nctemp313] =0.0412;
int nctemp320=7;
if((0>7)||(7>=Diff->coeffs->d[0])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(73,nctempstring,7,0,Diff->coeffs->d[0]);
}
nctemp320=3*Diff->coeffs->d[0]+nctemp320;
if((0>3)||(3>=Diff->coeffs->d[1])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(73,nctempstring,3,1,Diff->coeffs->d[1]);
}
float nctemp323= -0.0170;
Diff->coeffs->a[nctemp320] =nctemp323;
int nctemp327=7;
if((0>7)||(7>=Diff->coeffs->d[0])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(74,nctempstring,7,0,Diff->coeffs->d[0]);
}
nctemp327=4*Diff->coeffs->d[0]+nctemp327;
if((0>4)||(4>=Diff->coeffs->d[1])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(74,nctempstring,4,1,Diff->coeffs->d[1]);
}
Diff->coeffs->a[nctemp327] =0.0076;
int nctemp334=7;
if((0>7)||(7>=Diff->coeffs->d[0])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(75,nctempstring,7,0,Diff->coeffs->d[0]);
}
nctemp334=5*Diff->coeffs->d[0]+nctemp334;
if((0>5)||(5>=Diff->coeffs->d[1])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(75,nctempstring,5,1,Diff->coeffs->d[1]);
}
float nctemp337= -0.0034;
Diff->coeffs->a[nctemp334] =nctemp337;
int nctemp341=7;
if((0>7)||(7>=Diff->coeffs->d[0])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(76,nctempstring,7,0,Diff->coeffs->d[0]);
}
nctemp341=6*Diff->coeffs->d[0]+nctemp341;
if((0>6)||(6>=Diff->coeffs->d[1])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(76,nctempstring,6,1,Diff->coeffs->d[1]);
}
Diff->coeffs->a[nctemp341] =0.0014;
int nctemp348=7;
if((0>7)||(7>=Diff->coeffs->d[0])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(77,nctempstring,7,0,Diff->coeffs->d[0]);
}
nctemp348=7*Diff->coeffs->d[0]+nctemp348;
if((0>7)||(7>=Diff->coeffs->d[1])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(77,nctempstring,7,1,Diff->coeffs->d[1]);
}
float nctemp351= -0.0005;
Diff->coeffs->a[nctemp348] =nctemp351;
k =0;
int nctemp356 = (k < l);
while(nctemp356){
{
int nctemp363=k;
if((0>k)||(k>=Diff->w->d[0])){
nctempstring->a="Diff->w";
nctempstring->d[0]=strlen("Diff->w")+1;;
LibeArrayex(81,nctempstring,k,0,Diff->w->d[0]);
}
int nctemp371 = l - 1;
int nctemp366=nctemp371;
if((0>nctemp371)||(nctemp371>=Diff->coeffs->d[0])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(81,nctempstring,nctemp371,0,Diff->coeffs->d[0]);
}
nctemp366=k*Diff->coeffs->d[0]+nctemp366;
if((0>k)||(k>=Diff->coeffs->d[1])){
nctempstring->a="Diff->coeffs";
nctempstring->d[0]=strlen("Diff->coeffs")+1;;
LibeArrayex(81,nctempstring,k,1,Diff->coeffs->d[1]);
}
Diff->w->a[nctemp363] =Diff->coeffs->a[nctemp366];
}
int nctemp381 = k + 1;
k =nctemp381;
int nctemp382 = (k < l);
nctemp356=nctemp382;
}
return Diff;
}
int DiffDxminus (struct diff* Diff,nctempfloat2 *A,nctempfloat2 *dA,float dx)
{
int nx;
int ny;
int i;
int j;
int k;
float sum;
int l;
nctempfloat1 *w;
int nctemp391=A->d[0];nx =nctemp391;
int nctemp399=A->d[1];ny =nctemp399;
l =Diff->l;
w=Diff->w;

 #pragma omp parallel for
for(j=0;j<ny;j=j+1){for(i=0;i<l;i=i+1){{
sum =0.0;
k =1;
int nctemp433 = i + 1;
int nctemp425 = (k < nctemp433);
while(nctemp425){
{
int nctemp449 = k - 1;
int nctemp444=nctemp449;
if((0>nctemp449)||(nctemp449>=w->d[0])){
nctempstring->a="w";
nctempstring->d[0]=strlen("w")+1;;
LibeArrayex(122,nctempstring,nctemp449,0,w->d[0]);
}
float nctemp443= -w->a[nctemp444];
int nctemp456 = i - k;
int nctemp451=nctemp456;
if((0>nctemp456)||(nctemp456>=A->d[0])){
nctempstring->a="A";
nctempstring->d[0]=strlen("A")+1;;
LibeArrayex(122,nctempstring,nctemp456,0,A->d[0]);
}
nctemp451=j*A->d[0]+nctemp451;
if((0>j)||(j>=A->d[1])){
nctempstring->a="A";
nctempstring->d[0]=strlen("A")+1;;
LibeArrayex(122,nctempstring,j,1,A->d[1]);
}
float nctemp458 = nctemp443 * A->a[nctemp451];
float nctemp460 = nctemp458 + sum;
sum =nctemp460;
}
int nctemp469 = k + 1;
k =nctemp469;
int nctemp478 = i + 1;
int nctemp470 = (k < nctemp478);
nctemp425=nctemp470;
}
k =1;
int nctemp491 = l + 1;
int nctemp483 = (k < nctemp491);
while(nctemp483){
{
int nctemp507 = k - 1;
int nctemp502=nctemp507;
if((0>nctemp507)||(nctemp507>=w->d[0])){
nctempstring->a="w";
nctempstring->d[0]=strlen("w")+1;;
LibeArrayex(125,nctempstring,nctemp507,0,w->d[0]);
}
int nctemp518 = k - 1;
int nctemp519 = i + nctemp518;
int nctemp509=nctemp519;
if((0>nctemp519)||(nctemp519>=A->d[0])){
nctempstring->a="A";
nctempstring->d[0]=strlen("A")+1;;
LibeArrayex(125,nctempstring,nctemp519,0,A->d[0]);
}
nctemp509=j*A->d[0]+nctemp509;
if((0>j)||(j>=A->d[1])){
nctempstring->a="A";
nctempstring->d[0]=strlen("A")+1;;
LibeArrayex(125,nctempstring,j,1,A->d[1]);
}
float nctemp521 = w->a[nctemp502] * A->a[nctemp509];
float nctemp523 = nctemp521 + sum;
sum =nctemp523;
}
int nctemp532 = k + 1;
k =nctemp532;
int nctemp541 = l + 1;
int nctemp533 = (k < nctemp541);
nctemp483=nctemp533;
}
int nctemp545=i;
if((0>i)||(i>=dA->d[0])){
nctempstring->a="dA";
nctempstring->d[0]=strlen("dA")+1;;
LibeArrayex(127,nctempstring,i,0,dA->d[0]);
}
nctemp545=j*dA->d[0]+nctemp545;
if((0>j)||(j>=dA->d[1])){
nctempstring->a="dA";
nctempstring->d[0]=strlen("dA")+1;;
LibeArrayex(127,nctempstring,j,1,dA->d[1]);
}
float nctemp553 = sum / dx;
dA->a[nctemp545] =nctemp553;
}
}}
 #pragma omp parallel for
for(j=0;j<ny;j=j+1){int nctemp561 = nx - l;
for(i=l;i<nctemp561;i=i+1){{
sum =0.0;
k =1;
int nctemp578 = l + 1;
int nctemp570 = (k < nctemp578);
while(nctemp570){
{
int nctemp594 = k - 1;
int nctemp589=nctemp594;
if((0>nctemp594)||(nctemp594>=w->d[0])){
nctempstring->a="w";
nctempstring->d[0]=strlen("w")+1;;
LibeArrayex(137,nctempstring,nctemp594,0,w->d[0]);
}
int nctemp604 = i - k;
int nctemp599=nctemp604;
if((0>nctemp604)||(nctemp604>=A->d[0])){
nctempstring->a="A";
nctempstring->d[0]=strlen("A")+1;;
LibeArrayex(137,nctempstring,nctemp604,0,A->d[0]);
}
nctemp599=j*A->d[0]+nctemp599;
if((0>j)||(j>=A->d[1])){
nctempstring->a="A";
nctempstring->d[0]=strlen("A")+1;;
LibeArrayex(137,nctempstring,j,1,A->d[1]);
}
float nctemp598= -A->a[nctemp599];
int nctemp616 = k - 1;
int nctemp617 = i + nctemp616;
int nctemp607=nctemp617;
if((0>nctemp617)||(nctemp617>=A->d[0])){
nctempstring->a="A";
nctempstring->d[0]=strlen("A")+1;;
LibeArrayex(137,nctempstring,nctemp617,0,A->d[0]);
}
nctemp607=j*A->d[0]+nctemp607;
if((0>j)||(j>=A->d[1])){
nctempstring->a="A";
nctempstring->d[0]=strlen("A")+1;;
LibeArrayex(137,nctempstring,j,1,A->d[1]);
}
float nctemp619 = nctemp598 + A->a[nctemp607];
float nctemp620 = w->a[nctemp589] * nctemp619;
float nctemp622 = nctemp620 + sum;
sum =nctemp622;
}
int nctemp631 = k + 1;
k =nctemp631;
int nctemp640 = l + 1;
int nctemp632 = (k < nctemp640);
nctemp570=nctemp632;
}
int nctemp644=i;
if((0>i)||(i>=dA->d[0])){
nctempstring->a="dA";
nctempstring->d[0]=strlen("dA")+1;;
LibeArrayex(139,nctempstring,i,0,dA->d[0]);
}
nctemp644=j*dA->d[0]+nctemp644;
if((0>j)||(j>=dA->d[1])){
nctempstring->a="dA";
nctempstring->d[0]=strlen("dA")+1;;
LibeArrayex(139,nctempstring,j,1,dA->d[1]);
}
float nctemp652 = sum / dx;
dA->a[nctemp644] =nctemp652;
}
}}
 #pragma omp parallel for
for(j=0;j<ny;j=j+1){int nctemp659 = nx - l;
for(i=nctemp659;i<nx;i=i+1){{
sum =0.0;
k =1;
int nctemp677 = l + 1;
int nctemp669 = (k < nctemp677);
while(nctemp669){
{
int nctemp693 = k - 1;
int nctemp688=nctemp693;
if((0>nctemp693)||(nctemp693>=w->d[0])){
nctempstring->a="w";
nctempstring->d[0]=strlen("w")+1;;
LibeArrayex(149,nctempstring,nctemp693,0,w->d[0]);
}
float nctemp687= -w->a[nctemp688];
int nctemp700 = i - k;
int nctemp695=nctemp700;
if((0>nctemp700)||(nctemp700>=A->d[0])){
nctempstring->a="A";
nctempstring->d[0]=strlen("A")+1;;
LibeArrayex(149,nctempstring,nctemp700,0,A->d[0]);
}
nctemp695=j*A->d[0]+nctemp695;
if((0>j)||(j>=A->d[1])){
nctempstring->a="A";
nctempstring->d[0]=strlen("A")+1;;
LibeArrayex(149,nctempstring,j,1,A->d[1]);
}
float nctemp702 = nctemp687 * A->a[nctemp695];
float nctemp704 = nctemp702 + sum;
sum =nctemp704;
}
int nctemp713 = k + 1;
k =nctemp713;
int nctemp722 = l + 1;
int nctemp714 = (k < nctemp722);
nctemp669=nctemp714;
}
k =1;
int nctemp738 = nx - i;
int nctemp740 = nctemp738 + 1;
int nctemp727 = (k < nctemp740);
while(nctemp727){
{
int nctemp756 = k - 1;
int nctemp751=nctemp756;
if((0>nctemp756)||(nctemp756>=w->d[0])){
nctempstring->a="w";
nctempstring->d[0]=strlen("w")+1;;
LibeArrayex(153,nctempstring,nctemp756,0,w->d[0]);
}
int nctemp767 = k - 1;
int nctemp768 = i + nctemp767;
int nctemp758=nctemp768;
if((0>nctemp768)||(nctemp768>=A->d[0])){
nctempstring->a="A";
nctempstring->d[0]=strlen("A")+1;;
LibeArrayex(153,nctempstring,nctemp768,0,A->d[0]);
}
nctemp758=j*A->d[0]+nctemp758;
if((0>j)||(j>=A->d[1])){
nctempstring->a="A";
nctempstring->d[0]=strlen("A")+1;;
LibeArrayex(153,nctempstring,j,1,A->d[1]);
}
float nctemp770 = w->a[nctemp751] * A->a[nctemp758];
float nctemp772 = nctemp770 + sum;
sum =nctemp772;
}
int nctemp781 = k + 1;
k =nctemp781;
int nctemp793 = nx - i;
int nctemp795 = nctemp793 + 1;
int nctemp782 = (k < nctemp795);
nctemp727=nctemp782;
}
int nctemp799=i;
if((0>i)||(i>=dA->d[0])){
nctempstring->a="dA";
nctempstring->d[0]=strlen("dA")+1;;
LibeArrayex(155,nctempstring,i,0,dA->d[0]);
}
nctemp799=j*dA->d[0]+nctemp799;
if((0>j)||(j>=dA->d[1])){
nctempstring->a="dA";
nctempstring->d[0]=strlen("dA")+1;;
LibeArrayex(155,nctempstring,j,1,dA->d[1]);
}
float nctemp807 = sum / dx;
dA->a[nctemp799] =nctemp807;
}
}}}
int DiffDxplus (struct diff* Diff,nctempfloat2 *A,nctempfloat2 *dA,float dx)
{
int nx;
int ny;
int i;
int j;
int k;
float sum;
int l;
nctempfloat1 *w;
int nctemp812=A->d[0];nx =nctemp812;
int nctemp820=A->d[1];ny =nctemp820;
l =Diff->l;
w=Diff->w;

 #pragma omp parallel for
for(j=0;j<ny;j=j+1){for(i=0;i<l;i=i+1){{
sum =0.0;
k =1;
int nctemp854 = i + 2;
int nctemp846 = (k < nctemp854);
while(nctemp846){
{
int nctemp870 = k - 1;
int nctemp865=nctemp870;
if((0>nctemp870)||(nctemp870>=w->d[0])){
nctempstring->a="w";
nctempstring->d[0]=strlen("w")+1;;
LibeArrayex(196,nctempstring,nctemp870,0,w->d[0]);
}
float nctemp864= -w->a[nctemp865];
int nctemp881 = k - 1;
int nctemp882 = i - nctemp881;
int nctemp872=nctemp882;
if((0>nctemp882)||(nctemp882>=A->d[0])){
nctempstring->a="A";
nctempstring->d[0]=strlen("A")+1;;
LibeArrayex(196,nctempstring,nctemp882,0,A->d[0]);
}
nctemp872=j*A->d[0]+nctemp872;
if((0>j)||(j>=A->d[1])){
nctempstring->a="A";
nctempstring->d[0]=strlen("A")+1;;
LibeArrayex(196,nctempstring,j,1,A->d[1]);
}
float nctemp884 = nctemp864 * A->a[nctemp872];
float nctemp886 = nctemp884 + sum;
sum =nctemp886;
}
int nctemp895 = k + 1;
k =nctemp895;
int nctemp904 = i + 2;
int nctemp896 = (k < nctemp904);
nctemp846=nctemp896;
}
k =1;
int nctemp917 = l + 1;
int nctemp909 = (k < nctemp917);
while(nctemp909){
{
int nctemp933 = k - 1;
int nctemp928=nctemp933;
if((0>nctemp933)||(nctemp933>=w->d[0])){
nctempstring->a="w";
nctempstring->d[0]=strlen("w")+1;;
LibeArrayex(199,nctempstring,nctemp933,0,w->d[0]);
}
int nctemp940 = i + k;
int nctemp935=nctemp940;
if((0>nctemp940)||(nctemp940>=A->d[0])){
nctempstring->a="A";
nctempstring->d[0]=strlen("A")+1;;
LibeArrayex(199,nctempstring,nctemp940,0,A->d[0]);
}
nctemp935=j*A->d[0]+nctemp935;
if((0>j)||(j>=A->d[1])){
nctempstring->a="A";
nctempstring->d[0]=strlen("A")+1;;
LibeArrayex(199,nctempstring,j,1,A->d[1]);
}
float nctemp942 = w->a[nctemp928] * A->a[nctemp935];
float nctemp944 = nctemp942 + sum;
sum =nctemp944;
}
int nctemp953 = k + 1;
k =nctemp953;
int nctemp962 = l + 1;
int nctemp954 = (k < nctemp962);
nctemp909=nctemp954;
}
int nctemp966=i;
if((0>i)||(i>=dA->d[0])){
nctempstring->a="dA";
nctempstring->d[0]=strlen("dA")+1;;
LibeArrayex(201,nctempstring,i,0,dA->d[0]);
}
nctemp966=j*dA->d[0]+nctemp966;
if((0>j)||(j>=dA->d[1])){
nctempstring->a="dA";
nctempstring->d[0]=strlen("dA")+1;;
LibeArrayex(201,nctempstring,j,1,dA->d[1]);
}
float nctemp974 = sum / dx;
dA->a[nctemp966] =nctemp974;
}
}}
 #pragma omp parallel for
for(j=0;j<ny;j=j+1){int nctemp982 = nx - l;
for(i=l;i<nctemp982;i=i+1){{
sum =0.0;
k =1;
int nctemp999 = l + 1;
int nctemp991 = (k < nctemp999);
while(nctemp991){
{
int nctemp1015 = k - 1;
int nctemp1010=nctemp1015;
if((0>nctemp1015)||(nctemp1015>=w->d[0])){
nctempstring->a="w";
nctempstring->d[0]=strlen("w")+1;;
LibeArrayex(210,nctempstring,nctemp1015,0,w->d[0]);
}
int nctemp1029 = k - 1;
int nctemp1030 = i - nctemp1029;
int nctemp1020=nctemp1030;
if((0>nctemp1030)||(nctemp1030>=A->d[0])){
nctempstring->a="A";
nctempstring->d[0]=strlen("A")+1;;
LibeArrayex(210,nctempstring,nctemp1030,0,A->d[0]);
}
nctemp1020=j*A->d[0]+nctemp1020;
if((0>j)||(j>=A->d[1])){
nctempstring->a="A";
nctempstring->d[0]=strlen("A")+1;;
LibeArrayex(210,nctempstring,j,1,A->d[1]);
}
float nctemp1019= -A->a[nctemp1020];
int nctemp1038 = i + k;
int nctemp1033=nctemp1038;
if((0>nctemp1038)||(nctemp1038>=A->d[0])){
nctempstring->a="A";
nctempstring->d[0]=strlen("A")+1;;
LibeArrayex(210,nctempstring,nctemp1038,0,A->d[0]);
}
nctemp1033=j*A->d[0]+nctemp1033;
if((0>j)||(j>=A->d[1])){
nctempstring->a="A";
nctempstring->d[0]=strlen("A")+1;;
LibeArrayex(210,nctempstring,j,1,A->d[1]);
}
float nctemp1040 = nctemp1019 + A->a[nctemp1033];
float nctemp1041 = w->a[nctemp1010] * nctemp1040;
float nctemp1043 = nctemp1041 + sum;
sum =nctemp1043;
}
int nctemp1052 = k + 1;
k =nctemp1052;
int nctemp1061 = l + 1;
int nctemp1053 = (k < nctemp1061);
nctemp991=nctemp1053;
}
int nctemp1065=i;
if((0>i)||(i>=dA->d[0])){
nctempstring->a="dA";
nctempstring->d[0]=strlen("dA")+1;;
LibeArrayex(212,nctempstring,i,0,dA->d[0]);
}
nctemp1065=j*dA->d[0]+nctemp1065;
if((0>j)||(j>=dA->d[1])){
nctempstring->a="dA";
nctempstring->d[0]=strlen("dA")+1;;
LibeArrayex(212,nctempstring,j,1,dA->d[1]);
}
float nctemp1073 = sum / dx;
dA->a[nctemp1065] =nctemp1073;
}
}}
 #pragma omp parallel for
for(j=0;j<ny;j=j+1){int nctemp1080 = nx - l;
for(i=nctemp1080;i<nx;i=i+1){{
sum =0.0;
k =1;
int nctemp1098 = l + 1;
int nctemp1090 = (k < nctemp1098);
while(nctemp1090){
{
int nctemp1114 = k - 1;
int nctemp1109=nctemp1114;
if((0>nctemp1114)||(nctemp1114>=w->d[0])){
nctempstring->a="w";
nctempstring->d[0]=strlen("w")+1;;
LibeArrayex(222,nctempstring,nctemp1114,0,w->d[0]);
}
float nctemp1108= -w->a[nctemp1109];
int nctemp1125 = k - 1;
int nctemp1126 = i - nctemp1125;
int nctemp1116=nctemp1126;
if((0>nctemp1126)||(nctemp1126>=A->d[0])){
nctempstring->a="A";
nctempstring->d[0]=strlen("A")+1;;
LibeArrayex(222,nctempstring,nctemp1126,0,A->d[0]);
}
nctemp1116=j*A->d[0]+nctemp1116;
if((0>j)||(j>=A->d[1])){
nctempstring->a="A";
nctempstring->d[0]=strlen("A")+1;;
LibeArrayex(222,nctempstring,j,1,A->d[1]);
}
float nctemp1128 = nctemp1108 * A->a[nctemp1116];
float nctemp1130 = nctemp1128 + sum;
sum =nctemp1130;
}
int nctemp1139 = k + 1;
k =nctemp1139;
int nctemp1148 = l + 1;
int nctemp1140 = (k < nctemp1148);
nctemp1090=nctemp1140;
}
k =1;
int nctemp1161 = nx - i;
int nctemp1153 = (k < nctemp1161);
while(nctemp1153){
{
int nctemp1177 = k - 1;
int nctemp1172=nctemp1177;
if((0>nctemp1177)||(nctemp1177>=w->d[0])){
nctempstring->a="w";
nctempstring->d[0]=strlen("w")+1;;
LibeArrayex(226,nctempstring,nctemp1177,0,w->d[0]);
}
int nctemp1184 = i + k;
int nctemp1179=nctemp1184;
if((0>nctemp1184)||(nctemp1184>=A->d[0])){
nctempstring->a="A";
nctempstring->d[0]=strlen("A")+1;;
LibeArrayex(226,nctempstring,nctemp1184,0,A->d[0]);
}
nctemp1179=j*A->d[0]+nctemp1179;
if((0>j)||(j>=A->d[1])){
nctempstring->a="A";
nctempstring->d[0]=strlen("A")+1;;
LibeArrayex(226,nctempstring,j,1,A->d[1]);
}
float nctemp1186 = w->a[nctemp1172] * A->a[nctemp1179];
float nctemp1188 = nctemp1186 + sum;
sum =nctemp1188;
}
int nctemp1197 = k + 1;
k =nctemp1197;
int nctemp1206 = nx - i;
int nctemp1198 = (k < nctemp1206);
nctemp1153=nctemp1198;
}
int nctemp1210=i;
if((0>i)||(i>=dA->d[0])){
nctempstring->a="dA";
nctempstring->d[0]=strlen("dA")+1;;
LibeArrayex(228,nctempstring,i,0,dA->d[0]);
}
nctemp1210=j*dA->d[0]+nctemp1210;
if((0>j)||(j>=dA->d[1])){
nctempstring->a="dA";
nctempstring->d[0]=strlen("dA")+1;;
LibeArrayex(228,nctempstring,j,1,dA->d[1]);
}
float nctemp1218 = sum / dx;
dA->a[nctemp1210] =nctemp1218;
}
}}}
int DiffDyminus (struct diff* Diff,nctempfloat2 *A,nctempfloat2 *dA,float dx)
{
int nx;
int ny;
int i;
int j;
int k;
float sum;
int l;
nctempfloat1 *w;
int nctemp1223=A->d[0];nx =nctemp1223;
int nctemp1231=A->d[1];ny =nctemp1231;
l =Diff->l;
w=Diff->w;

 #pragma omp parallel for
for(j=0;j<l;j=j+1){for(i=0;i<nx;i=i+1){{
sum =0.0;
k =1;
int nctemp1265 = j + 1;
int nctemp1257 = (k < nctemp1265);
while(nctemp1257){
{
int nctemp1281 = k - 1;
int nctemp1276=nctemp1281;
if((0>nctemp1281)||(nctemp1281>=w->d[0])){
nctempstring->a="w";
nctempstring->d[0]=strlen("w")+1;;
LibeArrayex(270,nctempstring,nctemp1281,0,w->d[0]);
}
float nctemp1275= -w->a[nctemp1276];
int nctemp1283=i;
if((0>i)||(i>=A->d[0])){
nctempstring->a="A";
nctempstring->d[0]=strlen("A")+1;;
LibeArrayex(270,nctempstring,i,0,A->d[0]);
}
int nctemp1289 = j - k;
nctemp1283=nctemp1289*A->d[0]+nctemp1283;
if((0>nctemp1289)||(nctemp1289>=A->d[1])){
nctempstring->a="A";
nctempstring->d[0]=strlen("A")+1;;
LibeArrayex(270,nctempstring,nctemp1289,1,A->d[1]);
}
float nctemp1290 = nctemp1275 * A->a[nctemp1283];
float nctemp1292 = nctemp1290 + sum;
sum =nctemp1292;
}
int nctemp1301 = k + 1;
k =nctemp1301;
int nctemp1310 = j + 1;
int nctemp1302 = (k < nctemp1310);
nctemp1257=nctemp1302;
}
k =1;
int nctemp1323 = l + 1;
int nctemp1315 = (k < nctemp1323);
while(nctemp1315){
{
int nctemp1339 = k - 1;
int nctemp1334=nctemp1339;
if((0>nctemp1339)||(nctemp1339>=w->d[0])){
nctempstring->a="w";
nctempstring->d[0]=strlen("w")+1;;
LibeArrayex(273,nctempstring,nctemp1339,0,w->d[0]);
}
int nctemp1341=i;
if((0>i)||(i>=A->d[0])){
nctempstring->a="A";
nctempstring->d[0]=strlen("A")+1;;
LibeArrayex(273,nctempstring,i,0,A->d[0]);
}
int nctemp1351 = k - 1;
int nctemp1352 = j + nctemp1351;
nctemp1341=nctemp1352*A->d[0]+nctemp1341;
if((0>nctemp1352)||(nctemp1352>=A->d[1])){
nctempstring->a="A";
nctempstring->d[0]=strlen("A")+1;;
LibeArrayex(273,nctempstring,nctemp1352,1,A->d[1]);
}
float nctemp1353 = w->a[nctemp1334] * A->a[nctemp1341];
float nctemp1355 = nctemp1353 + sum;
sum =nctemp1355;
}
int nctemp1364 = k + 1;
k =nctemp1364;
int nctemp1373 = l + 1;
int nctemp1365 = (k < nctemp1373);
nctemp1315=nctemp1365;
}
int nctemp1377=i;
if((0>i)||(i>=dA->d[0])){
nctempstring->a="dA";
nctempstring->d[0]=strlen("dA")+1;;
LibeArrayex(275,nctempstring,i,0,dA->d[0]);
}
nctemp1377=j*dA->d[0]+nctemp1377;
if((0>j)||(j>=dA->d[1])){
nctempstring->a="dA";
nctempstring->d[0]=strlen("dA")+1;;
LibeArrayex(275,nctempstring,j,1,dA->d[1]);
}
float nctemp1385 = sum / dx;
dA->a[nctemp1377] =nctemp1385;
}
}}int nctemp1391 = ny - l;

 #pragma omp parallel for
for(j=l;j<nctemp1391;j=j+1){for(i=0;i<nx;i=i+1){{
sum =0.0;
k =1;
int nctemp1410 = l + 1;
int nctemp1402 = (k < nctemp1410);
while(nctemp1402){
{
int nctemp1426 = k - 1;
int nctemp1421=nctemp1426;
if((0>nctemp1426)||(nctemp1426>=w->d[0])){
nctempstring->a="w";
nctempstring->d[0]=strlen("w")+1;;
LibeArrayex(285,nctempstring,nctemp1426,0,w->d[0]);
}
int nctemp1431=i;
if((0>i)||(i>=A->d[0])){
nctempstring->a="A";
nctempstring->d[0]=strlen("A")+1;;
LibeArrayex(285,nctempstring,i,0,A->d[0]);
}
int nctemp1437 = j - k;
nctemp1431=nctemp1437*A->d[0]+nctemp1431;
if((0>nctemp1437)||(nctemp1437>=A->d[1])){
nctempstring->a="A";
nctempstring->d[0]=strlen("A")+1;;
LibeArrayex(285,nctempstring,nctemp1437,1,A->d[1]);
}
float nctemp1430= -A->a[nctemp1431];
int nctemp1439=i;
if((0>i)||(i>=A->d[0])){
nctempstring->a="A";
nctempstring->d[0]=strlen("A")+1;;
LibeArrayex(285,nctempstring,i,0,A->d[0]);
}
int nctemp1449 = k - 1;
int nctemp1450 = j + nctemp1449;
nctemp1439=nctemp1450*A->d[0]+nctemp1439;
if((0>nctemp1450)||(nctemp1450>=A->d[1])){
nctempstring->a="A";
nctempstring->d[0]=strlen("A")+1;;
LibeArrayex(285,nctempstring,nctemp1450,1,A->d[1]);
}
float nctemp1451 = nctemp1430 + A->a[nctemp1439];
float nctemp1452 = w->a[nctemp1421] * nctemp1451;
float nctemp1454 = nctemp1452 + sum;
sum =nctemp1454;
}
int nctemp1463 = k + 1;
k =nctemp1463;
int nctemp1472 = l + 1;
int nctemp1464 = (k < nctemp1472);
nctemp1402=nctemp1464;
}
int nctemp1476=i;
if((0>i)||(i>=dA->d[0])){
nctempstring->a="dA";
nctempstring->d[0]=strlen("dA")+1;;
LibeArrayex(287,nctempstring,i,0,dA->d[0]);
}
nctemp1476=j*dA->d[0]+nctemp1476;
if((0>j)||(j>=dA->d[1])){
nctempstring->a="dA";
nctempstring->d[0]=strlen("dA")+1;;
LibeArrayex(287,nctempstring,j,1,dA->d[1]);
}
float nctemp1484 = sum / dx;
dA->a[nctemp1476] =nctemp1484;
}
}}int nctemp1489 = ny - l;

 #pragma omp parallel for
for(j=nctemp1489;j<ny;j=j+1){for(i=0;i<nx;i=i+1){{
sum =0.0;
k =1;
int nctemp1509 = l + 1;
int nctemp1501 = (k < nctemp1509);
while(nctemp1501){
{
int nctemp1525 = k - 1;
int nctemp1520=nctemp1525;
if((0>nctemp1525)||(nctemp1525>=w->d[0])){
nctempstring->a="w";
nctempstring->d[0]=strlen("w")+1;;
LibeArrayex(297,nctempstring,nctemp1525,0,w->d[0]);
}
float nctemp1519= -w->a[nctemp1520];
int nctemp1527=i;
if((0>i)||(i>=A->d[0])){
nctempstring->a="A";
nctempstring->d[0]=strlen("A")+1;;
LibeArrayex(297,nctempstring,i,0,A->d[0]);
}
int nctemp1533 = j - k;
nctemp1527=nctemp1533*A->d[0]+nctemp1527;
if((0>nctemp1533)||(nctemp1533>=A->d[1])){
nctempstring->a="A";
nctempstring->d[0]=strlen("A")+1;;
LibeArrayex(297,nctempstring,nctemp1533,1,A->d[1]);
}
float nctemp1534 = nctemp1519 * A->a[nctemp1527];
float nctemp1536 = nctemp1534 + sum;
sum =nctemp1536;
}
int nctemp1545 = k + 1;
k =nctemp1545;
int nctemp1554 = l + 1;
int nctemp1546 = (k < nctemp1554);
nctemp1501=nctemp1546;
}
k =1;
int nctemp1570 = ny - j;
int nctemp1572 = nctemp1570 + 1;
int nctemp1559 = (k < nctemp1572);
while(nctemp1559){
{
int nctemp1588 = k - 1;
int nctemp1583=nctemp1588;
if((0>nctemp1588)||(nctemp1588>=w->d[0])){
nctempstring->a="w";
nctempstring->d[0]=strlen("w")+1;;
LibeArrayex(301,nctempstring,nctemp1588,0,w->d[0]);
}
int nctemp1590=i;
if((0>i)||(i>=A->d[0])){
nctempstring->a="A";
nctempstring->d[0]=strlen("A")+1;;
LibeArrayex(301,nctempstring,i,0,A->d[0]);
}
int nctemp1600 = k - 1;
int nctemp1601 = j + nctemp1600;
nctemp1590=nctemp1601*A->d[0]+nctemp1590;
if((0>nctemp1601)||(nctemp1601>=A->d[1])){
nctempstring->a="A";
nctempstring->d[0]=strlen("A")+1;;
LibeArrayex(301,nctempstring,nctemp1601,1,A->d[1]);
}
float nctemp1602 = w->a[nctemp1583] * A->a[nctemp1590];
float nctemp1604 = nctemp1602 + sum;
sum =nctemp1604;
}
int nctemp1613 = k + 1;
k =nctemp1613;
int nctemp1625 = ny - j;
int nctemp1627 = nctemp1625 + 1;
int nctemp1614 = (k < nctemp1627);
nctemp1559=nctemp1614;
}
int nctemp1631=i;
if((0>i)||(i>=dA->d[0])){
nctempstring->a="dA";
nctempstring->d[0]=strlen("dA")+1;;
LibeArrayex(303,nctempstring,i,0,dA->d[0]);
}
nctemp1631=j*dA->d[0]+nctemp1631;
if((0>j)||(j>=dA->d[1])){
nctempstring->a="dA";
nctempstring->d[0]=strlen("dA")+1;;
LibeArrayex(303,nctempstring,j,1,dA->d[1]);
}
float nctemp1639 = sum / dx;
dA->a[nctemp1631] =nctemp1639;
}
}}}
int DiffDyplus (struct diff* Diff,nctempfloat2 *A,nctempfloat2 *dA,float dx)
{
int nx;
int ny;
int i;
int j;
int k;
float sum;
int l;
nctempfloat1 *w;
int nctemp1644=A->d[0];nx =nctemp1644;
int nctemp1652=A->d[1];ny =nctemp1652;
l =Diff->l;
w=Diff->w;

 #pragma omp parallel for
for(j=0;j<l;j=j+1){for(i=0;i<nx;i=i+1){{
sum =0.0;
k =1;
int nctemp1686 = j + 2;
int nctemp1678 = (k < nctemp1686);
while(nctemp1678){
{
int nctemp1702 = k - 1;
int nctemp1697=nctemp1702;
if((0>nctemp1702)||(nctemp1702>=w->d[0])){
nctempstring->a="w";
nctempstring->d[0]=strlen("w")+1;;
LibeArrayex(343,nctempstring,nctemp1702,0,w->d[0]);
}
float nctemp1696= -w->a[nctemp1697];
int nctemp1704=i;
if((0>i)||(i>=A->d[0])){
nctempstring->a="A";
nctempstring->d[0]=strlen("A")+1;;
LibeArrayex(343,nctempstring,i,0,A->d[0]);
}
int nctemp1714 = k - 1;
int nctemp1715 = j - nctemp1714;
nctemp1704=nctemp1715*A->d[0]+nctemp1704;
if((0>nctemp1715)||(nctemp1715>=A->d[1])){
nctempstring->a="A";
nctempstring->d[0]=strlen("A")+1;;
LibeArrayex(343,nctempstring,nctemp1715,1,A->d[1]);
}
float nctemp1716 = nctemp1696 * A->a[nctemp1704];
float nctemp1718 = nctemp1716 + sum;
sum =nctemp1718;
}
int nctemp1727 = k + 1;
k =nctemp1727;
int nctemp1736 = j + 2;
int nctemp1728 = (k < nctemp1736);
nctemp1678=nctemp1728;
}
k =1;
int nctemp1749 = l + 1;
int nctemp1741 = (k < nctemp1749);
while(nctemp1741){
{
int nctemp1765 = k - 1;
int nctemp1760=nctemp1765;
if((0>nctemp1765)||(nctemp1765>=w->d[0])){
nctempstring->a="w";
nctempstring->d[0]=strlen("w")+1;;
LibeArrayex(346,nctempstring,nctemp1765,0,w->d[0]);
}
int nctemp1767=i;
if((0>i)||(i>=A->d[0])){
nctempstring->a="A";
nctempstring->d[0]=strlen("A")+1;;
LibeArrayex(346,nctempstring,i,0,A->d[0]);
}
int nctemp1773 = j + k;
nctemp1767=nctemp1773*A->d[0]+nctemp1767;
if((0>nctemp1773)||(nctemp1773>=A->d[1])){
nctempstring->a="A";
nctempstring->d[0]=strlen("A")+1;;
LibeArrayex(346,nctempstring,nctemp1773,1,A->d[1]);
}
float nctemp1774 = w->a[nctemp1760] * A->a[nctemp1767];
float nctemp1776 = nctemp1774 + sum;
sum =nctemp1776;
}
int nctemp1785 = k + 1;
k =nctemp1785;
int nctemp1794 = l + 1;
int nctemp1786 = (k < nctemp1794);
nctemp1741=nctemp1786;
}
int nctemp1798=i;
if((0>i)||(i>=dA->d[0])){
nctempstring->a="dA";
nctempstring->d[0]=strlen("dA")+1;;
LibeArrayex(348,nctempstring,i,0,dA->d[0]);
}
nctemp1798=j*dA->d[0]+nctemp1798;
if((0>j)||(j>=dA->d[1])){
nctempstring->a="dA";
nctempstring->d[0]=strlen("dA")+1;;
LibeArrayex(348,nctempstring,j,1,dA->d[1]);
}
float nctemp1806 = sum / dx;
dA->a[nctemp1798] =nctemp1806;
}
}}int nctemp1812 = ny - l;

 #pragma omp parallel for
for(j=l;j<nctemp1812;j=j+1){for(i=0;i<nx;i=i+1){{
sum =0.0;
k =1;
int nctemp1831 = l + 1;
int nctemp1823 = (k < nctemp1831);
while(nctemp1823){
{
int nctemp1847 = k - 1;
int nctemp1842=nctemp1847;
if((0>nctemp1847)||(nctemp1847>=w->d[0])){
nctempstring->a="w";
nctempstring->d[0]=strlen("w")+1;;
LibeArrayex(358,nctempstring,nctemp1847,0,w->d[0]);
}
int nctemp1852=i;
if((0>i)||(i>=A->d[0])){
nctempstring->a="A";
nctempstring->d[0]=strlen("A")+1;;
LibeArrayex(358,nctempstring,i,0,A->d[0]);
}
int nctemp1862 = k - 1;
int nctemp1863 = j - nctemp1862;
nctemp1852=nctemp1863*A->d[0]+nctemp1852;
if((0>nctemp1863)||(nctemp1863>=A->d[1])){
nctempstring->a="A";
nctempstring->d[0]=strlen("A")+1;;
LibeArrayex(358,nctempstring,nctemp1863,1,A->d[1]);
}
float nctemp1851= -A->a[nctemp1852];
int nctemp1865=i;
if((0>i)||(i>=A->d[0])){
nctempstring->a="A";
nctempstring->d[0]=strlen("A")+1;;
LibeArrayex(358,nctempstring,i,0,A->d[0]);
}
int nctemp1871 = j + k;
nctemp1865=nctemp1871*A->d[0]+nctemp1865;
if((0>nctemp1871)||(nctemp1871>=A->d[1])){
nctempstring->a="A";
nctempstring->d[0]=strlen("A")+1;;
LibeArrayex(358,nctempstring,nctemp1871,1,A->d[1]);
}
float nctemp1872 = nctemp1851 + A->a[nctemp1865];
float nctemp1873 = w->a[nctemp1842] * nctemp1872;
float nctemp1875 = nctemp1873 + sum;
sum =nctemp1875;
}
int nctemp1884 = k + 1;
k =nctemp1884;
int nctemp1893 = l + 1;
int nctemp1885 = (k < nctemp1893);
nctemp1823=nctemp1885;
}
int nctemp1897=i;
if((0>i)||(i>=dA->d[0])){
nctempstring->a="dA";
nctempstring->d[0]=strlen("dA")+1;;
LibeArrayex(360,nctempstring,i,0,dA->d[0]);
}
nctemp1897=j*dA->d[0]+nctemp1897;
if((0>j)||(j>=dA->d[1])){
nctempstring->a="dA";
nctempstring->d[0]=strlen("dA")+1;;
LibeArrayex(360,nctempstring,j,1,dA->d[1]);
}
float nctemp1905 = sum / dx;
dA->a[nctemp1897] =nctemp1905;
}
}}int nctemp1910 = ny - l;

 #pragma omp parallel for
for(j=nctemp1910;j<ny;j=j+1){for(i=0;i<nx;i=i+1){{
sum =0.0;
k =1;
int nctemp1930 = l + 1;
int nctemp1922 = (k < nctemp1930);
while(nctemp1922){
{
int nctemp1946 = k - 1;
int nctemp1941=nctemp1946;
if((0>nctemp1946)||(nctemp1946>=w->d[0])){
nctempstring->a="w";
nctempstring->d[0]=strlen("w")+1;;
LibeArrayex(370,nctempstring,nctemp1946,0,w->d[0]);
}
float nctemp1940= -w->a[nctemp1941];
int nctemp1948=i;
if((0>i)||(i>=A->d[0])){
nctempstring->a="A";
nctempstring->d[0]=strlen("A")+1;;
LibeArrayex(370,nctempstring,i,0,A->d[0]);
}
int nctemp1958 = k - 1;
int nctemp1959 = j - nctemp1958;
nctemp1948=nctemp1959*A->d[0]+nctemp1948;
if((0>nctemp1959)||(nctemp1959>=A->d[1])){
nctempstring->a="A";
nctempstring->d[0]=strlen("A")+1;;
LibeArrayex(370,nctempstring,nctemp1959,1,A->d[1]);
}
float nctemp1960 = nctemp1940 * A->a[nctemp1948];
float nctemp1962 = nctemp1960 + sum;
sum =nctemp1962;
}
int nctemp1971 = k + 1;
k =nctemp1971;
int nctemp1980 = l + 1;
int nctemp1972 = (k < nctemp1980);
nctemp1922=nctemp1972;
}
k =1;
int nctemp1993 = ny - j;
int nctemp1985 = (k < nctemp1993);
while(nctemp1985){
{
int nctemp2009 = k - 1;
int nctemp2004=nctemp2009;
if((0>nctemp2009)||(nctemp2009>=w->d[0])){
nctempstring->a="w";
nctempstring->d[0]=strlen("w")+1;;
LibeArrayex(374,nctempstring,nctemp2009,0,w->d[0]);
}
int nctemp2011=i;
if((0>i)||(i>=A->d[0])){
nctempstring->a="A";
nctempstring->d[0]=strlen("A")+1;;
LibeArrayex(374,nctempstring,i,0,A->d[0]);
}
int nctemp2017 = j + k;
nctemp2011=nctemp2017*A->d[0]+nctemp2011;
if((0>nctemp2017)||(nctemp2017>=A->d[1])){
nctempstring->a="A";
nctempstring->d[0]=strlen("A")+1;;
LibeArrayex(374,nctempstring,nctemp2017,1,A->d[1]);
}
float nctemp2018 = w->a[nctemp2004] * A->a[nctemp2011];
float nctemp2020 = nctemp2018 + sum;
sum =nctemp2020;
}
int nctemp2029 = k + 1;
k =nctemp2029;
int nctemp2038 = ny - j;
int nctemp2030 = (k < nctemp2038);
nctemp1985=nctemp2030;
}
int nctemp2042=i;
if((0>i)||(i>=dA->d[0])){
nctempstring->a="dA";
nctempstring->d[0]=strlen("dA")+1;;
LibeArrayex(376,nctempstring,i,0,dA->d[0]);
}
nctemp2042=j*dA->d[0]+nctemp2042;
if((0>j)||(j>=dA->d[1])){
nctempstring->a="dA";
nctempstring->d[0]=strlen("dA")+1;;
LibeArrayex(376,nctempstring,j,1,dA->d[1]);
}
float nctemp2050 = sum / dx;
dA->a[nctemp2042] =nctemp2050;
}
}}}
