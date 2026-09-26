//  Translated by epsc  version: Fri Sep 25 17:44:05 2026

#include <stddef.h>
#include <stdio.h>
#include <assert.h>
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
struct diff {int l;
int lmax;
nctempfloat2 *coeffs;
nctempfloat1 *w;
};
typedef struct nctempdiff1 {int d[1]; struct diff *a; } nctempdiff1;
struct nctempdiff2 {int d[2]; struct diff *a; } ;
struct nctempdiff3 {int d[3]; struct diff *a; } ;
struct nctempdiff4 {int d[4]; struct diff *a; } ;
struct diff* DiffNew (int l)
{
struct diff* Diff;
int i;
int j;
int k;
{
struct diff *nctemp5=(struct diff*)RunMalloc(sizeof(struct diff));
Diff =nctemp5;
Diff->lmax =8;
int nctemp11 = (l < 1);
if(nctemp11)
{
{
l =1;
}
}
int nctemp19 = (l > Diff->lmax);
if(nctemp19)
{
{
l =Diff->lmax;
}
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
for(i = 0;i < Diff->lmax;i = (i + 1)){
{
for(j = 0;j < Diff->lmax;j = (j + 1)){
{
int nctemp54=i;
if((0>i)||(i>=Diff->coeffs->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,45,i,0,Diff->coeffs->d[0]-1);
}
nctemp54=j*Diff->coeffs->d[0]+nctemp54;
if((0>j)||(j>=Diff->coeffs->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,45,j,1,Diff->coeffs->d[1]-1);
}
Diff->coeffs->a[nctemp54] =0.0;
}
}
}
}
int nctemp61=0;
if((0>0)||(0>=Diff->coeffs->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,49,0,0,Diff->coeffs->d[0]-1);
}
nctemp61=0*Diff->coeffs->d[0]+nctemp61;
if((0>0)||(0>=Diff->coeffs->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,49,0,1,Diff->coeffs->d[1]-1);
}
Diff->coeffs->a[nctemp61] =1.0021;
int nctemp68=1;
if((0>1)||(1>=Diff->coeffs->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,52,1,0,Diff->coeffs->d[0]-1);
}
nctemp68=0*Diff->coeffs->d[0]+nctemp68;
if((0>0)||(0>=Diff->coeffs->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,52,0,1,Diff->coeffs->d[1]-1);
}
Diff->coeffs->a[nctemp68] =1.1452;
int nctemp75=1;
if((0>1)||(1>=Diff->coeffs->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,53,1,0,Diff->coeffs->d[0]-1);
}
nctemp75=1*Diff->coeffs->d[0]+nctemp75;
if((0>1)||(1>=Diff->coeffs->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,53,1,1,Diff->coeffs->d[1]-1);
}
float nctemp78= -0.0492;
Diff->coeffs->a[nctemp75] =nctemp78;
int nctemp82=2;
if((0>2)||(2>=Diff->coeffs->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,56,2,0,Diff->coeffs->d[0]-1);
}
nctemp82=0*Diff->coeffs->d[0]+nctemp82;
if((0>0)||(0>=Diff->coeffs->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,56,0,1,Diff->coeffs->d[1]-1);
}
Diff->coeffs->a[nctemp82] =1.2036;
int nctemp89=2;
if((0>2)||(2>=Diff->coeffs->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,57,2,0,Diff->coeffs->d[0]-1);
}
nctemp89=1*Diff->coeffs->d[0]+nctemp89;
if((0>1)||(1>=Diff->coeffs->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,57,1,1,Diff->coeffs->d[1]-1);
}
float nctemp92= -0.0833;
Diff->coeffs->a[nctemp89] =nctemp92;
int nctemp96=2;
if((0>2)||(2>=Diff->coeffs->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,58,2,0,Diff->coeffs->d[0]-1);
}
nctemp96=2*Diff->coeffs->d[0]+nctemp96;
if((0>2)||(2>=Diff->coeffs->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,58,2,1,Diff->coeffs->d[1]-1);
}
Diff->coeffs->a[nctemp96] =0.0097;
int nctemp103=3;
if((0>3)||(3>=Diff->coeffs->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,61,3,0,Diff->coeffs->d[0]-1);
}
nctemp103=0*Diff->coeffs->d[0]+nctemp103;
if((0>0)||(0>=Diff->coeffs->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,61,0,1,Diff->coeffs->d[1]-1);
}
Diff->coeffs->a[nctemp103] =1.2316;
int nctemp110=3;
if((0>3)||(3>=Diff->coeffs->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,62,3,0,Diff->coeffs->d[0]-1);
}
nctemp110=1*Diff->coeffs->d[0]+nctemp110;
if((0>1)||(1>=Diff->coeffs->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,62,1,1,Diff->coeffs->d[1]-1);
}
float nctemp113= -0.1041;
Diff->coeffs->a[nctemp110] =nctemp113;
int nctemp117=3;
if((0>3)||(3>=Diff->coeffs->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,63,3,0,Diff->coeffs->d[0]-1);
}
nctemp117=2*Diff->coeffs->d[0]+nctemp117;
if((0>2)||(2>=Diff->coeffs->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,63,2,1,Diff->coeffs->d[1]-1);
}
Diff->coeffs->a[nctemp117] =0.0206;
int nctemp124=3;
if((0>3)||(3>=Diff->coeffs->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,64,3,0,Diff->coeffs->d[0]-1);
}
nctemp124=3*Diff->coeffs->d[0]+nctemp124;
if((0>3)||(3>=Diff->coeffs->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,64,3,1,Diff->coeffs->d[1]-1);
}
float nctemp127= -0.0035;
Diff->coeffs->a[nctemp124] =nctemp127;
int nctemp131=4;
if((0>4)||(4>=Diff->coeffs->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,67,4,0,Diff->coeffs->d[0]-1);
}
nctemp131=0*Diff->coeffs->d[0]+nctemp131;
if((0>0)||(0>=Diff->coeffs->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,67,0,1,Diff->coeffs->d[1]-1);
}
Diff->coeffs->a[nctemp131] =1.2463;
int nctemp138=4;
if((0>4)||(4>=Diff->coeffs->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,68,4,0,Diff->coeffs->d[0]-1);
}
nctemp138=1*Diff->coeffs->d[0]+nctemp138;
if((0>1)||(1>=Diff->coeffs->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,68,1,1,Diff->coeffs->d[1]-1);
}
float nctemp141= -0.1163;
Diff->coeffs->a[nctemp138] =nctemp141;
int nctemp145=4;
if((0>4)||(4>=Diff->coeffs->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,69,4,0,Diff->coeffs->d[0]-1);
}
nctemp145=2*Diff->coeffs->d[0]+nctemp145;
if((0>2)||(2>=Diff->coeffs->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,69,2,1,Diff->coeffs->d[1]-1);
}
Diff->coeffs->a[nctemp145] =0.0290;
int nctemp152=4;
if((0>4)||(4>=Diff->coeffs->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,70,4,0,Diff->coeffs->d[0]-1);
}
nctemp152=3*Diff->coeffs->d[0]+nctemp152;
if((0>3)||(3>=Diff->coeffs->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,70,3,1,Diff->coeffs->d[1]-1);
}
float nctemp155= -0.0080;
Diff->coeffs->a[nctemp152] =nctemp155;
int nctemp159=4;
if((0>4)||(4>=Diff->coeffs->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,71,4,0,Diff->coeffs->d[0]-1);
}
nctemp159=4*Diff->coeffs->d[0]+nctemp159;
if((0>4)||(4>=Diff->coeffs->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,71,4,1,Diff->coeffs->d[1]-1);
}
Diff->coeffs->a[nctemp159] =0.0018;
int nctemp166=5;
if((0>5)||(5>=Diff->coeffs->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,74,5,0,Diff->coeffs->d[0]-1);
}
nctemp166=0*Diff->coeffs->d[0]+nctemp166;
if((0>0)||(0>=Diff->coeffs->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,74,0,1,Diff->coeffs->d[1]-1);
}
Diff->coeffs->a[nctemp166] =1.2542;
int nctemp173=5;
if((0>5)||(5>=Diff->coeffs->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,75,5,0,Diff->coeffs->d[0]-1);
}
nctemp173=1*Diff->coeffs->d[0]+nctemp173;
if((0>1)||(1>=Diff->coeffs->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,75,1,1,Diff->coeffs->d[1]-1);
}
float nctemp176= -0.1213;
Diff->coeffs->a[nctemp173] =nctemp176;
int nctemp180=5;
if((0>5)||(5>=Diff->coeffs->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,76,5,0,Diff->coeffs->d[0]-1);
}
nctemp180=2*Diff->coeffs->d[0]+nctemp180;
if((0>2)||(2>=Diff->coeffs->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,76,2,1,Diff->coeffs->d[1]-1);
}
Diff->coeffs->a[nctemp180] =0.0344;
int nctemp187=5;
if((0>5)||(5>=Diff->coeffs->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,77,5,0,Diff->coeffs->d[0]-1);
}
nctemp187=3*Diff->coeffs->d[0]+nctemp187;
if((0>3)||(3>=Diff->coeffs->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,77,3,1,Diff->coeffs->d[1]-1);
}
float nctemp190= -0.017;
Diff->coeffs->a[nctemp187] =nctemp190;
int nctemp194=5;
if((0>5)||(5>=Diff->coeffs->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,78,5,0,Diff->coeffs->d[0]-1);
}
nctemp194=4*Diff->coeffs->d[0]+nctemp194;
if((0>4)||(4>=Diff->coeffs->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,78,4,1,Diff->coeffs->d[1]-1);
}
Diff->coeffs->a[nctemp194] =0.0038;
int nctemp201=5;
if((0>5)||(5>=Diff->coeffs->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,79,5,0,Diff->coeffs->d[0]-1);
}
nctemp201=5*Diff->coeffs->d[0]+nctemp201;
if((0>5)||(5>=Diff->coeffs->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,79,5,1,Diff->coeffs->d[1]-1);
}
float nctemp204= -0.0011;
Diff->coeffs->a[nctemp201] =nctemp204;
int nctemp208=6;
if((0>6)||(6>=Diff->coeffs->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,82,6,0,Diff->coeffs->d[0]-1);
}
nctemp208=0*Diff->coeffs->d[0]+nctemp208;
if((0>0)||(0>=Diff->coeffs->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,82,0,1,Diff->coeffs->d[1]-1);
}
Diff->coeffs->a[nctemp208] =1.2593;
int nctemp215=6;
if((0>6)||(6>=Diff->coeffs->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,83,6,0,Diff->coeffs->d[0]-1);
}
nctemp215=1*Diff->coeffs->d[0]+nctemp215;
if((0>1)||(1>=Diff->coeffs->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,83,1,1,Diff->coeffs->d[1]-1);
}
float nctemp218= -0.1280;
Diff->coeffs->a[nctemp215] =nctemp218;
int nctemp222=6;
if((0>6)||(6>=Diff->coeffs->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,84,6,0,Diff->coeffs->d[0]-1);
}
nctemp222=2*Diff->coeffs->d[0]+nctemp222;
if((0>2)||(2>=Diff->coeffs->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,84,2,1,Diff->coeffs->d[1]-1);
}
Diff->coeffs->a[nctemp222] =0.0384;
int nctemp229=6;
if((0>6)||(6>=Diff->coeffs->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,85,6,0,Diff->coeffs->d[0]-1);
}
nctemp229=3*Diff->coeffs->d[0]+nctemp229;
if((0>3)||(3>=Diff->coeffs->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,85,3,1,Diff->coeffs->d[1]-1);
}
float nctemp232= -0.0147;
Diff->coeffs->a[nctemp229] =nctemp232;
int nctemp236=6;
if((0>6)||(6>=Diff->coeffs->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,86,6,0,Diff->coeffs->d[0]-1);
}
nctemp236=4*Diff->coeffs->d[0]+nctemp236;
if((0>4)||(4>=Diff->coeffs->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,86,4,1,Diff->coeffs->d[1]-1);
}
Diff->coeffs->a[nctemp236] =0.0059;
int nctemp243=6;
if((0>6)||(6>=Diff->coeffs->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,87,6,0,Diff->coeffs->d[0]-1);
}
nctemp243=5*Diff->coeffs->d[0]+nctemp243;
if((0>5)||(5>=Diff->coeffs->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,87,5,1,Diff->coeffs->d[1]-1);
}
float nctemp246= -0.0022;
Diff->coeffs->a[nctemp243] =nctemp246;
int nctemp250=6;
if((0>6)||(6>=Diff->coeffs->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,88,6,0,Diff->coeffs->d[0]-1);
}
nctemp250=6*Diff->coeffs->d[0]+nctemp250;
if((0>6)||(6>=Diff->coeffs->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,88,6,1,Diff->coeffs->d[1]-1);
}
Diff->coeffs->a[nctemp250] =0.0007;
int nctemp257=7;
if((0>7)||(7>=Diff->coeffs->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,91,7,0,Diff->coeffs->d[0]-1);
}
nctemp257=0*Diff->coeffs->d[0]+nctemp257;
if((0>0)||(0>=Diff->coeffs->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,91,0,1,Diff->coeffs->d[1]-1);
}
Diff->coeffs->a[nctemp257] =1.2626;
int nctemp264=7;
if((0>7)||(7>=Diff->coeffs->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,92,7,0,Diff->coeffs->d[0]-1);
}
nctemp264=1*Diff->coeffs->d[0]+nctemp264;
if((0>1)||(1>=Diff->coeffs->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,92,1,1,Diff->coeffs->d[1]-1);
}
float nctemp267= -0.1312;
Diff->coeffs->a[nctemp264] =nctemp267;
int nctemp271=7;
if((0>7)||(7>=Diff->coeffs->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,93,7,0,Diff->coeffs->d[0]-1);
}
nctemp271=2*Diff->coeffs->d[0]+nctemp271;
if((0>2)||(2>=Diff->coeffs->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,93,2,1,Diff->coeffs->d[1]-1);
}
Diff->coeffs->a[nctemp271] =0.0412;
int nctemp278=7;
if((0>7)||(7>=Diff->coeffs->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,94,7,0,Diff->coeffs->d[0]-1);
}
nctemp278=3*Diff->coeffs->d[0]+nctemp278;
if((0>3)||(3>=Diff->coeffs->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,94,3,1,Diff->coeffs->d[1]-1);
}
float nctemp281= -0.0170;
Diff->coeffs->a[nctemp278] =nctemp281;
int nctemp285=7;
if((0>7)||(7>=Diff->coeffs->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,95,7,0,Diff->coeffs->d[0]-1);
}
nctemp285=4*Diff->coeffs->d[0]+nctemp285;
if((0>4)||(4>=Diff->coeffs->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,95,4,1,Diff->coeffs->d[1]-1);
}
Diff->coeffs->a[nctemp285] =0.0076;
int nctemp292=7;
if((0>7)||(7>=Diff->coeffs->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,96,7,0,Diff->coeffs->d[0]-1);
}
nctemp292=5*Diff->coeffs->d[0]+nctemp292;
if((0>5)||(5>=Diff->coeffs->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,96,5,1,Diff->coeffs->d[1]-1);
}
float nctemp295= -0.0034;
Diff->coeffs->a[nctemp292] =nctemp295;
int nctemp299=7;
if((0>7)||(7>=Diff->coeffs->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,97,7,0,Diff->coeffs->d[0]-1);
}
nctemp299=6*Diff->coeffs->d[0]+nctemp299;
if((0>6)||(6>=Diff->coeffs->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,97,6,1,Diff->coeffs->d[1]-1);
}
Diff->coeffs->a[nctemp299] =0.0014;
int nctemp306=7;
if((0>7)||(7>=Diff->coeffs->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,98,7,0,Diff->coeffs->d[0]-1);
}
nctemp306=7*Diff->coeffs->d[0]+nctemp306;
if((0>7)||(7>=Diff->coeffs->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,98,7,1,Diff->coeffs->d[1]-1);
}
float nctemp309= -0.0005;
Diff->coeffs->a[nctemp306] =nctemp309;
for(k = 0;k < l;k = (k + 1)){
{
int nctemp313=k;
if((0>k)||(k>=Diff->w->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->w %d %d %d %d \n " ,102,k,0,Diff->w->d[0]-1);
}
int nctemp321 = l - 1;
int nctemp316=nctemp321;
if((0>nctemp321)||(nctemp321>=Diff->coeffs->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,102,nctemp321,0,Diff->coeffs->d[0]-1);
}
nctemp316=k*Diff->coeffs->d[0]+nctemp316;
if((0>k)||(k>=Diff->coeffs->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e Diff->coeffs %d %d %d %d \n " ,102,k,1,Diff->coeffs->d[1]-1);
}
Diff->w->a[nctemp313] =Diff->coeffs->a[nctemp316];
}
}
return Diff;
}
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
{
int nctemp328=A->d[0];nx =nctemp328;
int nctemp336=A->d[1];ny =nctemp336;
l =Diff->l;
w=Diff->w;

 #pragma omp parallel for
for(j=0;j<ny;j++){for(i=0;i<l;i++){{
{
sum =0.0;
for(k = 1;k < (i + 1);k = (k + 1)){
{
int nctemp373 = k - 1;
int nctemp368=nctemp373;
if((0>nctemp373)||(nctemp373>=w->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e w %d %d %d %d \n " ,144,nctemp373,0,w->d[0]-1);
}
float nctemp367= -w->a[nctemp368];
int nctemp380 = i - k;
int nctemp375=nctemp380;
if((0>nctemp380)||(nctemp380>=A->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e A %d %d %d %d \n " ,144,nctemp380,0,A->d[0]-1);
}
nctemp375=j*A->d[0]+nctemp375;
if((0>j)||(j>=A->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e A %d %d %d %d \n " ,144,j,1,A->d[1]-1);
}
float nctemp382 = nctemp367 * A->a[nctemp375];
float nctemp384 = nctemp382 + sum;
sum =nctemp384;
}
}
for(k = 1;k < (l + 1);k = (k + 1)){
{
int nctemp400 = k - 1;
int nctemp395=nctemp400;
if((0>nctemp400)||(nctemp400>=w->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e w %d %d %d %d \n " ,147,nctemp400,0,w->d[0]-1);
}
int nctemp411 = k - 1;
int nctemp412 = i + nctemp411;
int nctemp402=nctemp412;
if((0>nctemp412)||(nctemp412>=A->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e A %d %d %d %d \n " ,147,nctemp412,0,A->d[0]-1);
}
nctemp402=j*A->d[0]+nctemp402;
if((0>j)||(j>=A->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e A %d %d %d %d \n " ,147,j,1,A->d[1]-1);
}
float nctemp414 = w->a[nctemp395] * A->a[nctemp402];
float nctemp416 = nctemp414 + sum;
sum =nctemp416;
}
}
int nctemp420=i;
if((0>i)||(i>=dA->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e dA %d %d %d %d \n " ,149,i,0,dA->d[0]-1);
}
nctemp420=j*dA->d[0]+nctemp420;
if((0>j)||(j>=dA->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e dA %d %d %d %d \n " ,149,j,1,dA->d[1]-1);
}
float nctemp428 = sum / dx;
dA->a[nctemp420] =nctemp428;
}
}
}}
 #pragma omp parallel for
for(j=0;j<ny;j++){int nctemp436 = nx - l;
for(i=l;i<nctemp436;i++){{
{
sum =0.0;
for(k = 1;k < (l + 1);k = (k + 1)){
{
int nctemp456 = k - 1;
int nctemp451=nctemp456;
if((0>nctemp456)||(nctemp456>=w->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e w %d %d %d %d \n " ,157,nctemp456,0,w->d[0]-1);
}
int nctemp466 = i - k;
int nctemp461=nctemp466;
if((0>nctemp466)||(nctemp466>=A->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e A %d %d %d %d \n " ,157,nctemp466,0,A->d[0]-1);
}
nctemp461=j*A->d[0]+nctemp461;
if((0>j)||(j>=A->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e A %d %d %d %d \n " ,157,j,1,A->d[1]-1);
}
float nctemp460= -A->a[nctemp461];
int nctemp478 = k - 1;
int nctemp479 = i + nctemp478;
int nctemp469=nctemp479;
if((0>nctemp479)||(nctemp479>=A->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e A %d %d %d %d \n " ,157,nctemp479,0,A->d[0]-1);
}
nctemp469=j*A->d[0]+nctemp469;
if((0>j)||(j>=A->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e A %d %d %d %d \n " ,157,j,1,A->d[1]-1);
}
float nctemp481 = nctemp460 + A->a[nctemp469];
float nctemp482 = w->a[nctemp451] * nctemp481;
float nctemp484 = nctemp482 + sum;
sum =nctemp484;
}
}
int nctemp488=i;
if((0>i)||(i>=dA->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e dA %d %d %d %d \n " ,159,i,0,dA->d[0]-1);
}
nctemp488=j*dA->d[0]+nctemp488;
if((0>j)||(j>=dA->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e dA %d %d %d %d \n " ,159,j,1,dA->d[1]-1);
}
float nctemp496 = sum / dx;
dA->a[nctemp488] =nctemp496;
}
}
}}
 #pragma omp parallel for
for(j=0;j<ny;j++){int nctemp503 = nx - l;
for(i=nctemp503;i<nx;i++){{
{
sum =0.0;
for(k = 1;k < (l + 1);k = (k + 1)){
{
int nctemp524 = k - 1;
int nctemp519=nctemp524;
if((0>nctemp524)||(nctemp524>=w->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e w %d %d %d %d \n " ,168,nctemp524,0,w->d[0]-1);
}
float nctemp518= -w->a[nctemp519];
int nctemp531 = i - k;
int nctemp526=nctemp531;
if((0>nctemp531)||(nctemp531>=A->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e A %d %d %d %d \n " ,168,nctemp531,0,A->d[0]-1);
}
nctemp526=j*A->d[0]+nctemp526;
if((0>j)||(j>=A->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e A %d %d %d %d \n " ,168,j,1,A->d[1]-1);
}
float nctemp533 = nctemp518 * A->a[nctemp526];
float nctemp535 = nctemp533 + sum;
sum =nctemp535;
}
}
for(k = 1;k < ((nx - i) + 1);k = (k + 1)){
{
int nctemp551 = k - 1;
int nctemp546=nctemp551;
if((0>nctemp551)||(nctemp551>=w->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e w %d %d %d %d \n " ,172,nctemp551,0,w->d[0]-1);
}
int nctemp562 = k - 1;
int nctemp563 = i + nctemp562;
int nctemp553=nctemp563;
if((0>nctemp563)||(nctemp563>=A->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e A %d %d %d %d \n " ,172,nctemp563,0,A->d[0]-1);
}
nctemp553=j*A->d[0]+nctemp553;
if((0>j)||(j>=A->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e A %d %d %d %d \n " ,172,j,1,A->d[1]-1);
}
float nctemp565 = w->a[nctemp546] * A->a[nctemp553];
float nctemp567 = nctemp565 + sum;
sum =nctemp567;
}
}
int nctemp571=i;
if((0>i)||(i>=dA->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e dA %d %d %d %d \n " ,174,i,0,dA->d[0]-1);
}
nctemp571=j*dA->d[0]+nctemp571;
if((0>j)||(j>=dA->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e dA %d %d %d %d \n " ,174,j,1,dA->d[1]-1);
}
float nctemp579 = sum / dx;
dA->a[nctemp571] =nctemp579;
}
}
}}}
}
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
{
int nctemp584=A->d[0];nx =nctemp584;
int nctemp592=A->d[1];ny =nctemp592;
l =Diff->l;
w=Diff->w;

 #pragma omp parallel for
for(j=0;j<ny;j++){for(i=0;i<l;i++){{
{
sum =0.0;
for(k = 1;k < (i + 2);k = (k + 1)){
{
int nctemp629 = k - 1;
int nctemp624=nctemp629;
if((0>nctemp629)||(nctemp629>=w->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e w %d %d %d %d \n " ,217,nctemp629,0,w->d[0]-1);
}
float nctemp623= -w->a[nctemp624];
int nctemp640 = k - 1;
int nctemp641 = i - nctemp640;
int nctemp631=nctemp641;
if((0>nctemp641)||(nctemp641>=A->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e A %d %d %d %d \n " ,217,nctemp641,0,A->d[0]-1);
}
nctemp631=j*A->d[0]+nctemp631;
if((0>j)||(j>=A->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e A %d %d %d %d \n " ,217,j,1,A->d[1]-1);
}
float nctemp643 = nctemp623 * A->a[nctemp631];
float nctemp645 = nctemp643 + sum;
sum =nctemp645;
}
}
for(k = 1;k < (l + 1);k = (k + 1)){
{
int nctemp661 = k - 1;
int nctemp656=nctemp661;
if((0>nctemp661)||(nctemp661>=w->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e w %d %d %d %d \n " ,220,nctemp661,0,w->d[0]-1);
}
int nctemp668 = i + k;
int nctemp663=nctemp668;
if((0>nctemp668)||(nctemp668>=A->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e A %d %d %d %d \n " ,220,nctemp668,0,A->d[0]-1);
}
nctemp663=j*A->d[0]+nctemp663;
if((0>j)||(j>=A->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e A %d %d %d %d \n " ,220,j,1,A->d[1]-1);
}
float nctemp670 = w->a[nctemp656] * A->a[nctemp663];
float nctemp672 = nctemp670 + sum;
sum =nctemp672;
}
}
int nctemp676=i;
if((0>i)||(i>=dA->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e dA %d %d %d %d \n " ,222,i,0,dA->d[0]-1);
}
nctemp676=j*dA->d[0]+nctemp676;
if((0>j)||(j>=dA->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e dA %d %d %d %d \n " ,222,j,1,dA->d[1]-1);
}
float nctemp684 = sum / dx;
dA->a[nctemp676] =nctemp684;
}
}
}}
 #pragma omp parallel for
for(j=0;j<ny;j++){int nctemp692 = nx - l;
for(i=l;i<nctemp692;i++){{
{
sum =0.0;
for(k = 1;k < (l + 1);k = (k + 1)){
{
int nctemp712 = k - 1;
int nctemp707=nctemp712;
if((0>nctemp712)||(nctemp712>=w->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e w %d %d %d %d \n " ,230,nctemp712,0,w->d[0]-1);
}
int nctemp726 = k - 1;
int nctemp727 = i - nctemp726;
int nctemp717=nctemp727;
if((0>nctemp727)||(nctemp727>=A->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e A %d %d %d %d \n " ,230,nctemp727,0,A->d[0]-1);
}
nctemp717=j*A->d[0]+nctemp717;
if((0>j)||(j>=A->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e A %d %d %d %d \n " ,230,j,1,A->d[1]-1);
}
float nctemp716= -A->a[nctemp717];
int nctemp735 = i + k;
int nctemp730=nctemp735;
if((0>nctemp735)||(nctemp735>=A->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e A %d %d %d %d \n " ,230,nctemp735,0,A->d[0]-1);
}
nctemp730=j*A->d[0]+nctemp730;
if((0>j)||(j>=A->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e A %d %d %d %d \n " ,230,j,1,A->d[1]-1);
}
float nctemp737 = nctemp716 + A->a[nctemp730];
float nctemp738 = w->a[nctemp707] * nctemp737;
float nctemp740 = nctemp738 + sum;
sum =nctemp740;
}
}
int nctemp744=i;
if((0>i)||(i>=dA->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e dA %d %d %d %d \n " ,232,i,0,dA->d[0]-1);
}
nctemp744=j*dA->d[0]+nctemp744;
if((0>j)||(j>=dA->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e dA %d %d %d %d \n " ,232,j,1,dA->d[1]-1);
}
float nctemp752 = sum / dx;
dA->a[nctemp744] =nctemp752;
}
}
}}
 #pragma omp parallel for
for(j=0;j<ny;j++){int nctemp759 = nx - l;
for(i=nctemp759;i<nx;i++){{
{
sum =0.0;
for(k = 1;k < (l + 1);k = (k + 1)){
{
int nctemp780 = k - 1;
int nctemp775=nctemp780;
if((0>nctemp780)||(nctemp780>=w->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e w %d %d %d %d \n " ,241,nctemp780,0,w->d[0]-1);
}
float nctemp774= -w->a[nctemp775];
int nctemp791 = k - 1;
int nctemp792 = i - nctemp791;
int nctemp782=nctemp792;
if((0>nctemp792)||(nctemp792>=A->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e A %d %d %d %d \n " ,241,nctemp792,0,A->d[0]-1);
}
nctemp782=j*A->d[0]+nctemp782;
if((0>j)||(j>=A->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e A %d %d %d %d \n " ,241,j,1,A->d[1]-1);
}
float nctemp794 = nctemp774 * A->a[nctemp782];
float nctemp796 = nctemp794 + sum;
sum =nctemp796;
}
}
for(k = 1;k < (nx - i);k = (k + 1)){
{
int nctemp812 = k - 1;
int nctemp807=nctemp812;
if((0>nctemp812)||(nctemp812>=w->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e w %d %d %d %d \n " ,244,nctemp812,0,w->d[0]-1);
}
int nctemp819 = i + k;
int nctemp814=nctemp819;
if((0>nctemp819)||(nctemp819>=A->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e A %d %d %d %d \n " ,244,nctemp819,0,A->d[0]-1);
}
nctemp814=j*A->d[0]+nctemp814;
if((0>j)||(j>=A->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e A %d %d %d %d \n " ,244,j,1,A->d[1]-1);
}
float nctemp821 = w->a[nctemp807] * A->a[nctemp814];
float nctemp823 = nctemp821 + sum;
sum =nctemp823;
}
}
int nctemp827=i;
if((0>i)||(i>=dA->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e dA %d %d %d %d \n " ,246,i,0,dA->d[0]-1);
}
nctemp827=j*dA->d[0]+nctemp827;
if((0>j)||(j>=dA->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e dA %d %d %d %d \n " ,246,j,1,dA->d[1]-1);
}
float nctemp835 = sum / dx;
dA->a[nctemp827] =nctemp835;
}
}
}}}
}
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
{
int nctemp840=A->d[0];nx =nctemp840;
int nctemp848=A->d[1];ny =nctemp848;
l =Diff->l;
w=Diff->w;

 #pragma omp parallel for
for(j=0;j<l;j++){for(i=0;i<nx;i++){{
{
sum =0.0;
for(k = 1;k < (j + 1);k = (k + 1)){
{
int nctemp885 = k - 1;
int nctemp880=nctemp885;
if((0>nctemp885)||(nctemp885>=w->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e w %d %d %d %d \n " ,287,nctemp885,0,w->d[0]-1);
}
float nctemp879= -w->a[nctemp880];
int nctemp887=i;
if((0>i)||(i>=A->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e A %d %d %d %d \n " ,287,i,0,A->d[0]-1);
}
int nctemp893 = j - k;
nctemp887=nctemp893*A->d[0]+nctemp887;
if((0>nctemp893)||(nctemp893>=A->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e A %d %d %d %d \n " ,287,nctemp893,1,A->d[1]-1);
}
float nctemp894 = nctemp879 * A->a[nctemp887];
float nctemp896 = nctemp894 + sum;
sum =nctemp896;
}
}
for(k = 1;k < (l + 1);k = (k + 1)){
{
int nctemp912 = k - 1;
int nctemp907=nctemp912;
if((0>nctemp912)||(nctemp912>=w->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e w %d %d %d %d \n " ,290,nctemp912,0,w->d[0]-1);
}
int nctemp914=i;
if((0>i)||(i>=A->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e A %d %d %d %d \n " ,290,i,0,A->d[0]-1);
}
int nctemp924 = k - 1;
int nctemp925 = j + nctemp924;
nctemp914=nctemp925*A->d[0]+nctemp914;
if((0>nctemp925)||(nctemp925>=A->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e A %d %d %d %d \n " ,290,nctemp925,1,A->d[1]-1);
}
float nctemp926 = w->a[nctemp907] * A->a[nctemp914];
float nctemp928 = nctemp926 + sum;
sum =nctemp928;
}
}
int nctemp932=i;
if((0>i)||(i>=dA->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e dA %d %d %d %d \n " ,292,i,0,dA->d[0]-1);
}
nctemp932=j*dA->d[0]+nctemp932;
if((0>j)||(j>=dA->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e dA %d %d %d %d \n " ,292,j,1,dA->d[1]-1);
}
float nctemp940 = sum / dx;
dA->a[nctemp932] =nctemp940;
}
}
}}int nctemp946 = ny - l;

 #pragma omp parallel for
for(j=l;j<nctemp946;j++){for(i=0;i<nx;i++){{
{
sum =0.0;
for(k = 1;k < (l + 1);k = (k + 1)){
{
int nctemp968 = k - 1;
int nctemp963=nctemp968;
if((0>nctemp968)||(nctemp968>=w->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e w %d %d %d %d \n " ,300,nctemp968,0,w->d[0]-1);
}
int nctemp973=i;
if((0>i)||(i>=A->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e A %d %d %d %d \n " ,300,i,0,A->d[0]-1);
}
int nctemp979 = j - k;
nctemp973=nctemp979*A->d[0]+nctemp973;
if((0>nctemp979)||(nctemp979>=A->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e A %d %d %d %d \n " ,300,nctemp979,1,A->d[1]-1);
}
float nctemp972= -A->a[nctemp973];
int nctemp981=i;
if((0>i)||(i>=A->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e A %d %d %d %d \n " ,300,i,0,A->d[0]-1);
}
int nctemp991 = k - 1;
int nctemp992 = j + nctemp991;
nctemp981=nctemp992*A->d[0]+nctemp981;
if((0>nctemp992)||(nctemp992>=A->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e A %d %d %d %d \n " ,300,nctemp992,1,A->d[1]-1);
}
float nctemp993 = nctemp972 + A->a[nctemp981];
float nctemp994 = w->a[nctemp963] * nctemp993;
float nctemp996 = nctemp994 + sum;
sum =nctemp996;
}
}
int nctemp1000=i;
if((0>i)||(i>=dA->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e dA %d %d %d %d \n " ,302,i,0,dA->d[0]-1);
}
nctemp1000=j*dA->d[0]+nctemp1000;
if((0>j)||(j>=dA->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e dA %d %d %d %d \n " ,302,j,1,dA->d[1]-1);
}
float nctemp1008 = sum / dx;
dA->a[nctemp1000] =nctemp1008;
}
}
}}int nctemp1013 = ny - l;

 #pragma omp parallel for
for(j=nctemp1013;j<ny;j++){for(i=0;i<nx;i++){{
{
sum =0.0;
for(k = 1;k < (l + 1);k = (k + 1)){
{
int nctemp1036 = k - 1;
int nctemp1031=nctemp1036;
if((0>nctemp1036)||(nctemp1036>=w->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e w %d %d %d %d \n " ,310,nctemp1036,0,w->d[0]-1);
}
float nctemp1030= -w->a[nctemp1031];
int nctemp1038=i;
if((0>i)||(i>=A->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e A %d %d %d %d \n " ,310,i,0,A->d[0]-1);
}
int nctemp1044 = j - k;
nctemp1038=nctemp1044*A->d[0]+nctemp1038;
if((0>nctemp1044)||(nctemp1044>=A->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e A %d %d %d %d \n " ,310,nctemp1044,1,A->d[1]-1);
}
float nctemp1045 = nctemp1030 * A->a[nctemp1038];
float nctemp1047 = nctemp1045 + sum;
sum =nctemp1047;
}
}
for(k = 1;k < ((ny - j) + 1);k = (k + 1)){
{
int nctemp1063 = k - 1;
int nctemp1058=nctemp1063;
if((0>nctemp1063)||(nctemp1063>=w->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e w %d %d %d %d \n " ,313,nctemp1063,0,w->d[0]-1);
}
int nctemp1065=i;
if((0>i)||(i>=A->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e A %d %d %d %d \n " ,313,i,0,A->d[0]-1);
}
int nctemp1075 = k - 1;
int nctemp1076 = j + nctemp1075;
nctemp1065=nctemp1076*A->d[0]+nctemp1065;
if((0>nctemp1076)||(nctemp1076>=A->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e A %d %d %d %d \n " ,313,nctemp1076,1,A->d[1]-1);
}
float nctemp1077 = w->a[nctemp1058] * A->a[nctemp1065];
float nctemp1079 = nctemp1077 + sum;
sum =nctemp1079;
}
}
int nctemp1083=i;
if((0>i)||(i>=dA->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e dA %d %d %d %d \n " ,315,i,0,dA->d[0]-1);
}
nctemp1083=j*dA->d[0]+nctemp1083;
if((0>j)||(j>=dA->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e dA %d %d %d %d \n " ,315,j,1,dA->d[1]-1);
}
float nctemp1091 = sum / dx;
dA->a[nctemp1083] =nctemp1091;
}
}
}}}
}
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
{
int nctemp1096=A->d[0];nx =nctemp1096;
int nctemp1104=A->d[1];ny =nctemp1104;
l =Diff->l;
w=Diff->w;

 #pragma omp parallel for
for(j=0;j<l;j++){for(i=0;i<nx;i++){{
{
sum =0.0;
for(k = 1;k < (j + 2);k = (k + 1)){
{
int nctemp1141 = k - 1;
int nctemp1136=nctemp1141;
if((0>nctemp1141)||(nctemp1141>=w->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e w %d %d %d %d \n " ,356,nctemp1141,0,w->d[0]-1);
}
float nctemp1135= -w->a[nctemp1136];
int nctemp1143=i;
if((0>i)||(i>=A->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e A %d %d %d %d \n " ,356,i,0,A->d[0]-1);
}
int nctemp1153 = k - 1;
int nctemp1154 = j - nctemp1153;
nctemp1143=nctemp1154*A->d[0]+nctemp1143;
if((0>nctemp1154)||(nctemp1154>=A->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e A %d %d %d %d \n " ,356,nctemp1154,1,A->d[1]-1);
}
float nctemp1155 = nctemp1135 * A->a[nctemp1143];
float nctemp1157 = nctemp1155 + sum;
sum =nctemp1157;
}
}
for(k = 1;k < (l + 1);k = (k + 1)){
{
int nctemp1173 = k - 1;
int nctemp1168=nctemp1173;
if((0>nctemp1173)||(nctemp1173>=w->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e w %d %d %d %d \n " ,359,nctemp1173,0,w->d[0]-1);
}
int nctemp1175=i;
if((0>i)||(i>=A->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e A %d %d %d %d \n " ,359,i,0,A->d[0]-1);
}
int nctemp1181 = j + k;
nctemp1175=nctemp1181*A->d[0]+nctemp1175;
if((0>nctemp1181)||(nctemp1181>=A->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e A %d %d %d %d \n " ,359,nctemp1181,1,A->d[1]-1);
}
float nctemp1182 = w->a[nctemp1168] * A->a[nctemp1175];
float nctemp1184 = nctemp1182 + sum;
sum =nctemp1184;
}
}
int nctemp1188=i;
if((0>i)||(i>=dA->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e dA %d %d %d %d \n " ,361,i,0,dA->d[0]-1);
}
nctemp1188=j*dA->d[0]+nctemp1188;
if((0>j)||(j>=dA->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e dA %d %d %d %d \n " ,361,j,1,dA->d[1]-1);
}
float nctemp1196 = sum / dx;
dA->a[nctemp1188] =nctemp1196;
}
}
}}int nctemp1202 = ny - l;

 #pragma omp parallel for
for(j=l;j<nctemp1202;j++){for(i=0;i<nx;i++){{
{
sum =0.0;
for(k = 1;k < (l + 1);k = (k + 1)){
{
int nctemp1224 = k - 1;
int nctemp1219=nctemp1224;
if((0>nctemp1224)||(nctemp1224>=w->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e w %d %d %d %d \n " ,369,nctemp1224,0,w->d[0]-1);
}
int nctemp1229=i;
if((0>i)||(i>=A->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e A %d %d %d %d \n " ,369,i,0,A->d[0]-1);
}
int nctemp1239 = k - 1;
int nctemp1240 = j - nctemp1239;
nctemp1229=nctemp1240*A->d[0]+nctemp1229;
if((0>nctemp1240)||(nctemp1240>=A->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e A %d %d %d %d \n " ,369,nctemp1240,1,A->d[1]-1);
}
float nctemp1228= -A->a[nctemp1229];
int nctemp1242=i;
if((0>i)||(i>=A->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e A %d %d %d %d \n " ,369,i,0,A->d[0]-1);
}
int nctemp1248 = j + k;
nctemp1242=nctemp1248*A->d[0]+nctemp1242;
if((0>nctemp1248)||(nctemp1248>=A->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e A %d %d %d %d \n " ,369,nctemp1248,1,A->d[1]-1);
}
float nctemp1249 = nctemp1228 + A->a[nctemp1242];
float nctemp1250 = w->a[nctemp1219] * nctemp1249;
float nctemp1252 = nctemp1250 + sum;
sum =nctemp1252;
}
}
int nctemp1256=i;
if((0>i)||(i>=dA->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e dA %d %d %d %d \n " ,371,i,0,dA->d[0]-1);
}
nctemp1256=j*dA->d[0]+nctemp1256;
if((0>j)||(j>=dA->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e dA %d %d %d %d \n " ,371,j,1,dA->d[1]-1);
}
float nctemp1264 = sum / dx;
dA->a[nctemp1256] =nctemp1264;
}
}
}}int nctemp1269 = ny - l;

 #pragma omp parallel for
for(j=nctemp1269;j<ny;j++){for(i=0;i<nx;i++){{
{
sum =0.0;
for(k = 1;k < (l + 1);k = (k + 1)){
{
int nctemp1292 = k - 1;
int nctemp1287=nctemp1292;
if((0>nctemp1292)||(nctemp1292>=w->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e w %d %d %d %d \n " ,380,nctemp1292,0,w->d[0]-1);
}
float nctemp1286= -w->a[nctemp1287];
int nctemp1294=i;
if((0>i)||(i>=A->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e A %d %d %d %d \n " ,380,i,0,A->d[0]-1);
}
int nctemp1304 = k - 1;
int nctemp1305 = j - nctemp1304;
nctemp1294=nctemp1305*A->d[0]+nctemp1294;
if((0>nctemp1305)||(nctemp1305>=A->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e A %d %d %d %d \n " ,380,nctemp1305,1,A->d[1]-1);
}
float nctemp1306 = nctemp1286 * A->a[nctemp1294];
float nctemp1308 = nctemp1306 + sum;
sum =nctemp1308;
}
}
for(k = 1;k < (ny - j);k = (k + 1)){
{
int nctemp1324 = k - 1;
int nctemp1319=nctemp1324;
if((0>nctemp1324)||(nctemp1324>=w->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e w %d %d %d %d \n " ,384,nctemp1324,0,w->d[0]-1);
}
int nctemp1326=i;
if((0>i)||(i>=A->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e A %d %d %d %d \n " ,384,i,0,A->d[0]-1);
}
int nctemp1332 = j + k;
nctemp1326=nctemp1332*A->d[0]+nctemp1326;
if((0>nctemp1332)||(nctemp1332>=A->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e A %d %d %d %d \n " ,384,nctemp1332,1,A->d[1]-1);
}
float nctemp1333 = w->a[nctemp1319] * A->a[nctemp1326];
float nctemp1335 = nctemp1333 + sum;
sum =nctemp1335;
}
}
int nctemp1339=i;
if((0>i)||(i>=dA->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e dA %d %d %d %d \n " ,386,i,0,dA->d[0]-1);
}
nctemp1339=j*dA->d[0]+nctemp1339;
if((0>j)||(j>=dA->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:diff.e dA %d %d %d %d \n " ,386,j,1,dA->d[1]-1);
}
float nctemp1347 = sum / dx;
dA->a[nctemp1339] =nctemp1347;
}
}
}}}
}
