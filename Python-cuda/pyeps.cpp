//  Translated by eps
extern "C" {
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
if((0>Nx)||(Nx>=str->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:pyeps.e str %d %d %d %d \n " ,21,Nx,0,str->d[0]-1);
}
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
int nctemp45=i;
if((0>i)||(i>=out->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:pyeps.e out %d %d %d %d \n " ,53,i,0,out->d[0]-1);
}
int nctemp48=i;
if((0>i)||(i>=arr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:pyeps.e arr %d %d %d %d \n " ,53,i,0,arr->d[0]-1);
}
out->a[nctemp45] =arr->a[nctemp48];
}
}
return 1;
}
}
nctempint1 * PyepsCre1di (int Nx)
{
nctempint1 *tmp;
{
int nctemp57=Nx;
nctempint1 *nctemp56;
nctemp56=(nctempint1*)RunMalloc(sizeof(nctempint1));
nctemp56->d[0]=Nx;
nctemp56->a=(int *)RunMalloc(sizeof(int)*nctemp57);
tmp=nctemp56;
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
int nctemp70=out->d[0];nx =nctemp70;
for(i = 0;i < nx;i = (i + 1)){
{
int nctemp77=i;
if((0>i)||(i>=out->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:pyeps.e out %d %d %d %d \n " ,97,i,0,out->d[0]-1);
}
int nctemp80=i;
if((0>i)||(i>=arr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:pyeps.e arr %d %d %d %d \n " ,97,i,0,arr->d[0]-1);
}
out->a[nctemp77] =arr->a[nctemp80];
}
}
return 1;
}
}
nctempint2 * PyepsCre2di (int Nx,int Ny)
{
{
int nctemp85=Nx;
nctemp85=nctemp85*Ny;
nctempint2 *nctemp84;
nctemp84=(nctempint2*)RunMalloc(sizeof(nctempint2));
nctemp84->d[0]=Nx;
nctemp84->d[1]=Ny;
nctemp84->a=(int *)RunMalloc(sizeof(int)*nctemp85);
return nctemp84;
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
int nctemp98=out->d[0];nx =nctemp98;
int nctemp106=out->d[1];ny =nctemp106;
for(j = 0;j < ny;j = (j + 1)){
{
for(i = 0;i < nx;i = (i + 1)){
{
int nctemp113=i;
if((0>i)||(i>=out->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:pyeps.e out %d %d %d %d \n " ,146,i,0,out->d[0]-1);
}
nctemp113=j*out->d[0]+nctemp113;
if((0>j)||(j>=out->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:pyeps.e out %d %d %d %d \n " ,146,j,1,out->d[1]-1);
}
int nctemp117=i;
if((0>i)||(i>=arr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:pyeps.e arr %d %d %d %d \n " ,146,i,0,arr->d[0]-1);
}
nctemp117=j*arr->d[0]+nctemp117;
if((0>j)||(j>=arr->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:pyeps.e arr %d %d %d %d \n " ,146,j,1,arr->d[1]-1);
}
out->a[nctemp113] =arr->a[nctemp117];
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
int nctemp127=Nx;
nctempfloat1 *nctemp126;
nctemp126=(nctempfloat1*)RunMalloc(sizeof(nctempfloat1));
nctemp126->d[0]=Nx;
nctemp126->a=(float *)RunMalloc(sizeof(float)*nctemp127);
tmp=nctemp126;
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
int nctemp140=out->d[0];nx =nctemp140;
for(i = 0;i < nx;i = (i + 1)){
{
int nctemp147=i;
if((0>i)||(i>=out->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:pyeps.e out %d %d %d %d \n " ,191,i,0,out->d[0]-1);
}
int nctemp150=i;
if((0>i)||(i>=arr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:pyeps.e arr %d %d %d %d \n " ,191,i,0,arr->d[0]-1);
}
out->a[nctemp147] =arr->a[nctemp150];
}
}
return 1;
}
}
nctempfloat2 * PyepsCre2df (int Nx,int Ny)
{
{
int nctemp155=Nx;
nctemp155=nctemp155*Ny;
nctempfloat2 *nctemp154;
nctemp154=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp154->d[0]=Nx;
nctemp154->d[1]=Ny;
nctemp154->a=(float *)RunMalloc(sizeof(float)*nctemp155);
return nctemp154;
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
int nctemp168=out->d[0];nx =nctemp168;
int nctemp176=out->d[1];ny =nctemp176;
for(j = 0;j < ny;j = (j + 1)){
{
for(i = 0;i < nx;i = (i + 1)){
{
int nctemp183=i;
if((0>i)||(i>=out->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:pyeps.e out %d %d %d %d \n " ,241,i,0,out->d[0]-1);
}
nctemp183=j*out->d[0]+nctemp183;
if((0>j)||(j>=out->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:pyeps.e out %d %d %d %d \n " ,241,j,1,out->d[1]-1);
}
int nctemp187=i;
if((0>i)||(i>=arr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:pyeps.e arr %d %d %d %d \n " ,241,i,0,arr->d[0]-1);
}
nctemp187=j*arr->d[0]+nctemp187;
if((0>j)||(j>=arr->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:pyeps.e arr %d %d %d %d \n " ,241,j,1,arr->d[1]-1);
}
out->a[nctemp183] =arr->a[nctemp187];
}
}
}
}
return 1;
}
}
};