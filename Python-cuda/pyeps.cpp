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
#include <assert.h>

void *GpuNew(int n);
void *GpuDelete(void *f);
void *GpuError();
void *RunMalloc(int n);
int RunFree(void * );
int RunSync();
int RunGetnt();
int RunGetnb();
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
struct MainArg {nctempchar1 *arg;
};
typedef struct nctempMainArg1 {int d[1]; struct MainArg *a; } nctempMainArg1;
struct nctempMainArg2 {int d[2]; struct MainArg *a; } ;
struct nctempMainArg3 {int d[3]; struct MainArg *a; } ;
struct nctempMainArg4 {int d[4]; struct MainArg *a; } ;
int LibeErrno;
nctempchar1 *LibeErrstr;
int LibeErrinit ();
int LibeGeterrno ();
int LibeClearerr ();
nctempchar1 * LibeGeterrstr ();
nctempchar1 * LibeGetenv (nctempchar1 *name);
;
;
;
;
;
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
;
;
;
;
;
;
;
float LibeSincosmax;
float LibeSincoslim;
float LibeLnmax;
float LibeLnmin;
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
;
struct nctempLibeFdescr1 *LibeFarr;
;
nctempchar1 *LibeTmpstr;
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
int NBLOCKS;
int NTHREADS;
int LibeSetnb (int nb);
int LibeSetnt (int nt);
int LibeGetnb ();
int LibeGetnt ();
int LibeArrayex (int line,nctempchar1 *name,int ival,int index,int bound);
int LibeSystem (nctempchar1 *cmd);
int LibeInit ();
int LibeExit ();
int Main (struct nctempMainArg1 *MainArgs)
{
return 1;
}
nctempchar1 * PyepsCre1ds (int Nx)
{
nctempchar1 *str;
int nctemp13 = Nx + 1;
int nctemp8=nctemp13;
nctempchar1 *nctemp7;
nctemp7=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp18 = Nx + 1;
nctemp7->d[0]=nctemp18;
nctemp7->a=(char *)RunMalloc(sizeof(char)*nctemp8);
str=nctemp7;
int nctemp22=Nx;
char nctemp25=(char)(0);
str->a[nctemp22] =nctemp25;
return str;
}
int PyepsDel1ds (nctempchar1 *arr)
{
RunFree(arr->a);
RunFree(arr);
return 1;
}
int PyepsCopy1ds (nctempchar1 *arr,nctempchar1 *out)
{
int nx;
int i;
int nctemp38=out->d[0];nx =nctemp38;
i =0;
int nctemp46 = (i < nx);
while(nctemp46){
{
int nctemp53=i;
int nctemp56=i;
out->a[nctemp53] =arr->a[nctemp56];
}
int nctemp66 = i + 1;
i =nctemp66;
int nctemp67 = (i < nx);
nctemp46=nctemp67;
}
return 1;
}
nctempint1 * PyepsCre1di (int Nx)
{
nctempint1 *tmp;
int nctemp78=Nx;
nctempint1 *nctemp77;
nctemp77=(nctempint1*)RunMalloc(sizeof(nctempint1));
nctemp77->d[0]=Nx;
nctemp77->a=(int *)RunMalloc(sizeof(int)*nctemp78);
tmp=nctemp77;
return tmp;
}
int PyepsDel1di (nctempint1 *arr)
{
RunFree(arr->a);
RunFree(arr);
return 1;
}
int PyepsCopy1di (nctempint1 *arr,nctempint1 *out)
{
int nx;
int i;
int nctemp91=out->d[0];nx =nctemp91;
i =0;
int nctemp99 = (i < nx);
while(nctemp99){
{
int nctemp106=i;
int nctemp109=i;
out->a[nctemp106] =arr->a[nctemp109];
}
int nctemp119 = i + 1;
i =nctemp119;
int nctemp120 = (i < nx);
nctemp99=nctemp120;
}
return 1;
}
nctempfloat1 * PyepsCre1df (int Nx)
{
nctempfloat1 *tmp;
int nctemp131=Nx;
nctempfloat1 *nctemp130;
nctemp130=(nctempfloat1*)RunMalloc(sizeof(nctempfloat1));
nctemp130->d[0]=Nx;
nctemp130->a=(float *)RunMalloc(sizeof(float)*nctemp131);
tmp=nctemp130;
return tmp;
}
int PyepsDel1df (nctempfloat1 *arr)
{
RunFree(arr->a);
RunFree(arr);
return 1;
}
int PyepsCopy1df (nctempfloat1 *arr,nctempfloat1 *out)
{
int nx;
int i;
int nctemp144=out->d[0];nx =nctemp144;
i =0;
int nctemp152 = (i < nx);
while(nctemp152){
{
int nctemp159=i;
int nctemp162=i;
out->a[nctemp159] =arr->a[nctemp162];
}
int nctemp172 = i + 1;
i =nctemp172;
int nctemp173 = (i < nx);
nctemp152=nctemp173;
}
return 1;
}
nctempfloat2 * PyepsCre2df (int Nx,int Ny)
{
int nctemp180=Nx;
nctemp180=nctemp180*Ny;
nctempfloat2 *nctemp179;
nctemp179=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp179->d[0]=Nx;
nctemp179->d[1]=Ny;
nctemp179->a=(float *)RunMalloc(sizeof(float)*nctemp180);
return nctemp179;
}
int PyepsDel2df (nctempfloat2 *arr)
{
RunFree(arr->a);
RunFree(arr);
return 1;
}
int PyepsCopy2df (nctempfloat2 *arr,nctempfloat2 *out)
{
int nx;
int ny;
int i;
int j;
int nctemp193=out->d[0];nx =nctemp193;
int nctemp201=out->d[1];ny =nctemp201;
j =0;
int nctemp209 = (j < ny);
while(nctemp209){
{
i =0;
int nctemp217 = (i < nx);
while(nctemp217){
{
int nctemp224=i;
nctemp224=j*out->d[0]+nctemp224;
int nctemp228=i;
nctemp228=j*arr->d[0]+nctemp228;
out->a[nctemp224] =arr->a[nctemp228];
}
int nctemp239 = i + 1;
i =nctemp239;
int nctemp240 = (i < nx);
nctemp217=nctemp240;
}
}
int nctemp252 = j + 1;
j =nctemp252;
int nctemp253 = (j < ny);
nctemp209=nctemp253;
}
return 1;
}
}
