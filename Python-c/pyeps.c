//  Translated by epsc  version: Sun Oct  4 18:44:46 2026

#include <stddef.h>
#include <stdio.h>
#include <assert.h>
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
int Main (struct nctempMainArg1 *MainArgs)
{
{
return 1;
}
}
nctempchar1 * PyepsCre1ds (int Nx)
{
nctempchar1 *str;
{
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
}
int PyepsDel1ds (nctempchar1 *arr)
{
{
RunFree(arr->a);
RunFree(arr);
return 1;
}
}
int PyepsCopy1ds (nctempchar1 *arr,nctempchar1 *out)
{
int nx;
int i;
{
int nctemp38=out->d[0];nx =nctemp38;
for(i = 0;i < nx;i = (i + 1)){
{
out->a[i] = arr->a[i];
}
}
return 1;
}
}
nctempint1 * PyepsCre1di (int Nx)
{
nctempint1 *tmp;
{
int nctemp49=Nx;
nctempint1 *nctemp48;
nctemp48=(nctempint1*)RunMalloc(sizeof(nctempint1));
nctemp48->d[0]=Nx;
nctemp48->a=(int *)RunMalloc(sizeof(int)*nctemp49);
tmp=nctemp48;
return tmp;
}
}
int PyepsDel1di (nctempint1 *arr)
{
{
RunFree(arr->a);
RunFree(arr);
return 1;
}
}
int PyepsCopy1di (nctempint1 *arr,nctempint1 *out)
{
int nx;
int i;
{
int nctemp62=out->d[0];nx =nctemp62;
for(i = 0;i < nx;i = (i + 1)){
{
out->a[i] = arr->a[i];
}
}
return 1;
}
}
nctempint2 * PyepsCre2di (int Nx,int Ny)
{
{
int nctemp69=Nx;
nctemp69=nctemp69*Ny;
nctempint2 *nctemp68;
nctemp68=(nctempint2*)RunMalloc(sizeof(nctempint2));
nctemp68->d[0]=Nx;
nctemp68->d[1]=Ny;
nctemp68->a=(int *)RunMalloc(sizeof(int)*nctemp69);
return nctemp68;
}
}
int PyepsDel2di (nctempint2 *arr)
{
{
RunFree(arr->a);
RunFree(arr);
return 1;
}
}
int PyepsCopy2di (nctempint2 *arr,nctempint2 *out)
{
int nx;
int ny;
int i;
int j;
{
int nctemp82=out->d[0];nx =nctemp82;
int nctemp90=out->d[1];ny =nctemp90;
for(j = 0;j < ny;j = (j + 1)){
{
for(i = 0;i < nx;i = (i + 1)){
{
out->a[i+out->d[0]*(j)] = arr->a[i+arr->d[0]*(j)];
}
}
}
}
return 1;
}
}
nctempfloat1 * PyepsCre1df (int Nx)
{
nctempfloat1 *tmp;
{
int nctemp101=Nx;
nctempfloat1 *nctemp100;
nctemp100=(nctempfloat1*)RunMalloc(sizeof(nctempfloat1));
nctemp100->d[0]=Nx;
nctemp100->a=(float *)RunMalloc(sizeof(float)*nctemp101);
tmp=nctemp100;
return tmp;
}
}
int PyepsDel1df (nctempfloat1 *arr)
{
{
RunFree(arr->a);
RunFree(arr);
return 1;
}
}
int PyepsCopy1df (nctempfloat1 *arr,nctempfloat1 *out)
{
int nx;
int i;
{
int nctemp114=out->d[0];nx =nctemp114;
for(i = 0;i < nx;i = (i + 1)){
{
out->a[i] = arr->a[i];
}
}
return 1;
}
}
nctempfloat2 * PyepsCre2df (int Nx,int Ny)
{
{
int nctemp121=Nx;
nctemp121=nctemp121*Ny;
nctempfloat2 *nctemp120;
nctemp120=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp120->d[0]=Nx;
nctemp120->d[1]=Ny;
nctemp120->a=(float *)RunMalloc(sizeof(float)*nctemp121);
return nctemp120;
}
}
int PyepsDel2df (nctempfloat2 *arr)
{
{
RunFree(arr->a);
RunFree(arr);
return 1;
}
}
int PyepsCopy2df (nctempfloat2 *arr,nctempfloat2 *out)
{
int nx;
int ny;
int i;
int j;
{
int nctemp134=out->d[0];nx =nctemp134;
int nctemp142=out->d[1];ny =nctemp142;
for(j = 0;j < ny;j = (j + 1)){
{
for(i = 0;i < nx;i = (i + 1)){
{
out->a[i+out->d[0]*(j)] = arr->a[i+arr->d[0]*(j)];
}
}
}
}
return 1;
}
}
