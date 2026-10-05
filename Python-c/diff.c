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
Diff->lmax = 8;
int nctemp7 = (l < 1);
if(nctemp7)
{
{
l = 1;
}
}
int nctemp11 = (l > Diff->lmax);
if(nctemp11)
{
{
l = Diff->lmax;
}
}
Diff->l = l;
int nctemp21=Diff->lmax;
nctemp21=nctemp21*Diff->lmax;
nctempfloat2 *nctemp20;
nctemp20=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp20->d[0]=Diff->lmax;
nctemp20->d[1]=Diff->lmax;
nctemp20->a=(float *)RunMalloc(sizeof(float)*nctemp21);
Diff->coeffs=nctemp20;
int nctemp32=l;
nctempfloat1 *nctemp31;
nctemp31=(nctempfloat1*)RunMalloc(sizeof(nctempfloat1));
nctemp31->d[0]=l;
nctemp31->a=(float *)RunMalloc(sizeof(float)*nctemp32);
Diff->w=nctemp31;
for(i = 0;i < Diff->lmax;i = (i + 1)){
{
for(j = 0;j < Diff->lmax;j = (j + 1)){
{
Diff->coeffs->a[i+Diff->coeffs->d[0]*(j)] = 0.0;
}
}
}
}
Diff->coeffs->a[0+Diff->coeffs->d[0]*(0)] = 1.0021;
Diff->coeffs->a[1+Diff->coeffs->d[0]*(0)] = 1.1452;
Diff->coeffs->a[1+Diff->coeffs->d[0]*(1)] =  -0.0492;
Diff->coeffs->a[2+Diff->coeffs->d[0]*(0)] = 1.2036;
Diff->coeffs->a[2+Diff->coeffs->d[0]*(1)] =  -0.0833;
Diff->coeffs->a[2+Diff->coeffs->d[0]*(2)] = 0.0097;
Diff->coeffs->a[3+Diff->coeffs->d[0]*(0)] = 1.2316;
Diff->coeffs->a[3+Diff->coeffs->d[0]*(1)] =  -0.1041;
Diff->coeffs->a[3+Diff->coeffs->d[0]*(2)] = 0.0206;
Diff->coeffs->a[3+Diff->coeffs->d[0]*(3)] =  -0.0035;
Diff->coeffs->a[4+Diff->coeffs->d[0]*(0)] = 1.2463;
Diff->coeffs->a[4+Diff->coeffs->d[0]*(1)] =  -0.1163;
Diff->coeffs->a[4+Diff->coeffs->d[0]*(2)] = 0.0290;
Diff->coeffs->a[4+Diff->coeffs->d[0]*(3)] =  -0.0080;
Diff->coeffs->a[4+Diff->coeffs->d[0]*(4)] = 0.0018;
Diff->coeffs->a[5+Diff->coeffs->d[0]*(0)] = 1.2542;
Diff->coeffs->a[5+Diff->coeffs->d[0]*(1)] =  -0.1213;
Diff->coeffs->a[5+Diff->coeffs->d[0]*(2)] = 0.0344;
Diff->coeffs->a[5+Diff->coeffs->d[0]*(3)] =  -0.017;
Diff->coeffs->a[5+Diff->coeffs->d[0]*(4)] = 0.0038;
Diff->coeffs->a[5+Diff->coeffs->d[0]*(5)] =  -0.0011;
Diff->coeffs->a[6+Diff->coeffs->d[0]*(0)] = 1.2593;
Diff->coeffs->a[6+Diff->coeffs->d[0]*(1)] =  -0.1280;
Diff->coeffs->a[6+Diff->coeffs->d[0]*(2)] = 0.0384;
Diff->coeffs->a[6+Diff->coeffs->d[0]*(3)] =  -0.0147;
Diff->coeffs->a[6+Diff->coeffs->d[0]*(4)] = 0.0059;
Diff->coeffs->a[6+Diff->coeffs->d[0]*(5)] =  -0.0022;
Diff->coeffs->a[6+Diff->coeffs->d[0]*(6)] = 0.0007;
Diff->coeffs->a[7+Diff->coeffs->d[0]*(0)] = 1.2626;
Diff->coeffs->a[7+Diff->coeffs->d[0]*(1)] =  -0.1312;
Diff->coeffs->a[7+Diff->coeffs->d[0]*(2)] = 0.0412;
Diff->coeffs->a[7+Diff->coeffs->d[0]*(3)] =  -0.0170;
Diff->coeffs->a[7+Diff->coeffs->d[0]*(4)] = 0.0076;
Diff->coeffs->a[7+Diff->coeffs->d[0]*(5)] =  -0.0034;
Diff->coeffs->a[7+Diff->coeffs->d[0]*(6)] = 0.0014;
Diff->coeffs->a[7+Diff->coeffs->d[0]*(7)] =  -0.0005;
for(k = 0;k < l;k = (k + 1)){
{
Diff->w->a[k] = Diff->coeffs->a[l - 1+Diff->coeffs->d[0]*(k)];
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
int nctemp40=A->d[0];nx =nctemp40;
int nctemp48=A->d[1];ny =nctemp48;
l = Diff->l;
w = Diff->w;

 #pragma omp parallel for
for(j=0;j<ny;j++){for(i=0;i<l;i++){{
{
sum = 0.0;
for(k = 1;k < (i + 1);k = (k + 1)){
{
sum = (( -w->a[k - 1] * A->a[i - k+A->d[0]*(j)]) + sum);
}
}
for(k = 1;k < (l + 1);k = (k + 1)){
{
sum = ((w->a[k - 1] * A->a[i + (k - 1)+A->d[0]*(j)]) + sum);
}
}
dA->a[i+dA->d[0]*(j)] = (sum / dx);
}
}
}}
 #pragma omp parallel for
for(j=0;j<ny;j++){int nctemp63 = nx - l;
for(i=l;i<nctemp63;i++){{
{
sum = 0.0;
for(k = 1;k < (l + 1);k = (k + 1)){
{
sum = ((w->a[k - 1] * ( -A->a[i - k+A->d[0]*(j)] + A->a[i + (k - 1)+A->d[0]*(j)])) + sum);
}
}
dA->a[i+dA->d[0]*(j)] = (sum / dx);
}
}
}}
 #pragma omp parallel for
for(j=0;j<ny;j++){int nctemp70 = nx - l;
for(i=nctemp70;i<nx;i++){{
{
sum = 0.0;
for(k = 1;k < (l + 1);k = (k + 1)){
{
sum = (( -w->a[k - 1] * A->a[i - k+A->d[0]*(j)]) + sum);
}
}
for(k = 1;k < ((nx - i) + 1);k = (k + 1)){
{
sum = ((w->a[k - 1] * A->a[i + (k - 1)+A->d[0]*(j)]) + sum);
}
}
dA->a[i+dA->d[0]*(j)] = (sum / dx);
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
int nctemp76=A->d[0];nx =nctemp76;
int nctemp84=A->d[1];ny =nctemp84;
l = Diff->l;
w = Diff->w;

 #pragma omp parallel for
for(j=0;j<ny;j++){for(i=0;i<l;i++){{
{
sum = 0.0;
for(k = 1;k < (i + 2);k = (k + 1)){
{
sum = (( -w->a[k - 1] * A->a[i - (k - 1)+A->d[0]*(j)]) + sum);
}
}
for(k = 1;k < (l + 1);k = (k + 1)){
{
sum = ((w->a[k - 1] * A->a[i + k+A->d[0]*(j)]) + sum);
}
}
dA->a[i+dA->d[0]*(j)] = (sum / dx);
}
}
}}
 #pragma omp parallel for
for(j=0;j<ny;j++){int nctemp99 = nx - l;
for(i=l;i<nctemp99;i++){{
{
sum = 0.0;
for(k = 1;k < (l + 1);k = (k + 1)){
{
sum = ((w->a[k - 1] * ( -A->a[i - (k - 1)+A->d[0]*(j)] + A->a[i + k+A->d[0]*(j)])) + sum);
}
}
dA->a[i+dA->d[0]*(j)] = (sum / dx);
}
}
}}
 #pragma omp parallel for
for(j=0;j<ny;j++){int nctemp106 = nx - l;
for(i=nctemp106;i<nx;i++){{
{
sum = 0.0;
for(k = 1;k < (l + 1);k = (k + 1)){
{
sum = (( -w->a[k - 1] * A->a[i - (k - 1)+A->d[0]*(j)]) + sum);
}
}
for(k = 1;k < (nx - i);k = (k + 1)){
{
sum = ((w->a[k - 1] * A->a[i + k+A->d[0]*(j)]) + sum);
}
}
dA->a[i+dA->d[0]*(j)] = (sum / dx);
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
int nctemp112=A->d[0];nx =nctemp112;
int nctemp120=A->d[1];ny =nctemp120;
l = Diff->l;
w = Diff->w;

 #pragma omp parallel for
for(j=0;j<l;j++){for(i=0;i<nx;i++){{
{
sum = 0.0;
for(k = 1;k < (j + 1);k = (k + 1)){
{
sum = (( -w->a[k - 1] * A->a[i+A->d[0]*(j - k)]) + sum);
}
}
for(k = 1;k < (l + 1);k = (k + 1)){
{
sum = ((w->a[k - 1] * A->a[i+A->d[0]*(j + (k - 1))]) + sum);
}
}
dA->a[i+dA->d[0]*(j)] = (sum / dx);
}
}
}}int nctemp133 = ny - l;

 #pragma omp parallel for
for(j=l;j<nctemp133;j++){for(i=0;i<nx;i++){{
{
sum = 0.0;
for(k = 1;k < (l + 1);k = (k + 1)){
{
sum = ((w->a[k - 1] * ( -A->a[i+A->d[0]*(j - k)] + A->a[i+A->d[0]*(j + (k - 1))])) + sum);
}
}
dA->a[i+dA->d[0]*(j)] = (sum / dx);
}
}
}}int nctemp140 = ny - l;

 #pragma omp parallel for
for(j=nctemp140;j<ny;j++){for(i=0;i<nx;i++){{
{
sum = 0.0;
for(k = 1;k < (l + 1);k = (k + 1)){
{
sum = (( -w->a[k - 1] * A->a[i+A->d[0]*(j - k)]) + sum);
}
}
for(k = 1;k < ((ny - j) + 1);k = (k + 1)){
{
sum = ((w->a[k - 1] * A->a[i+A->d[0]*(j + (k - 1))]) + sum);
}
}
dA->a[i+dA->d[0]*(j)] = (sum / dx);
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
int nctemp148=A->d[0];nx =nctemp148;
int nctemp156=A->d[1];ny =nctemp156;
l = Diff->l;
w = Diff->w;

 #pragma omp parallel for
for(j=0;j<l;j++){for(i=0;i<nx;i++){{
{
sum = 0.0;
for(k = 1;k < (j + 2);k = (k + 1)){
{
sum = (( -w->a[k - 1] * A->a[i+A->d[0]*(j - (k - 1))]) + sum);
}
}
for(k = 1;k < (l + 1);k = (k + 1)){
{
sum = ((w->a[k - 1] * A->a[i+A->d[0]*(j + k)]) + sum);
}
}
dA->a[i+dA->d[0]*(j)] = (sum / dx);
}
}
}}int nctemp169 = ny - l;

 #pragma omp parallel for
for(j=l;j<nctemp169;j++){for(i=0;i<nx;i++){{
{
sum = 0.0;
for(k = 1;k < (l + 1);k = (k + 1)){
{
sum = ((w->a[k - 1] * ( -A->a[i+A->d[0]*(j - (k - 1))] + A->a[i+A->d[0]*(j + k)])) + sum);
}
}
dA->a[i+dA->d[0]*(j)] = (sum / dx);
}
}
}}int nctemp176 = ny - l;

 #pragma omp parallel for
for(j=nctemp176;j<ny;j++){for(i=0;i<nx;i++){{
{
sum = 0.0;
for(k = 1;k < (l + 1);k = (k + 1)){
{
sum = (( -w->a[k - 1] * A->a[i+A->d[0]*(j - (k - 1))]) + sum);
}
}
for(k = 1;k < (ny - j);k = (k + 1)){
{
sum = ((w->a[k - 1] * A->a[i+A->d[0]*(j + k)]) + sum);
}
}
dA->a[i+dA->d[0]*(j)] = (sum / dx);
}
}
}}}
}
