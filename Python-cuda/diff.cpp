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
nctemp70=j*Diff->coeffs->d[0]+nctemp70;
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
nctemp103=0*Diff->coeffs->d[0]+nctemp103;
Diff->coeffs->a[nctemp103] =1.0021;
int nctemp110=1;
nctemp110=0*Diff->coeffs->d[0]+nctemp110;
Diff->coeffs->a[nctemp110] =1.1452;
int nctemp117=1;
nctemp117=1*Diff->coeffs->d[0]+nctemp117;
float nctemp120= -0.0492;
Diff->coeffs->a[nctemp117] =nctemp120;
int nctemp124=2;
nctemp124=0*Diff->coeffs->d[0]+nctemp124;
Diff->coeffs->a[nctemp124] =1.2036;
int nctemp131=2;
nctemp131=1*Diff->coeffs->d[0]+nctemp131;
float nctemp134= -0.0833;
Diff->coeffs->a[nctemp131] =nctemp134;
int nctemp138=2;
nctemp138=2*Diff->coeffs->d[0]+nctemp138;
Diff->coeffs->a[nctemp138] =0.0097;
int nctemp145=3;
nctemp145=0*Diff->coeffs->d[0]+nctemp145;
Diff->coeffs->a[nctemp145] =1.2316;
int nctemp152=3;
nctemp152=1*Diff->coeffs->d[0]+nctemp152;
float nctemp155= -0.1041;
Diff->coeffs->a[nctemp152] =nctemp155;
int nctemp159=3;
nctemp159=2*Diff->coeffs->d[0]+nctemp159;
Diff->coeffs->a[nctemp159] =0.0206;
int nctemp166=3;
nctemp166=3*Diff->coeffs->d[0]+nctemp166;
float nctemp169= -0.0035;
Diff->coeffs->a[nctemp166] =nctemp169;
int nctemp173=4;
nctemp173=0*Diff->coeffs->d[0]+nctemp173;
Diff->coeffs->a[nctemp173] =1.2463;
int nctemp180=4;
nctemp180=1*Diff->coeffs->d[0]+nctemp180;
float nctemp183= -0.1163;
Diff->coeffs->a[nctemp180] =nctemp183;
int nctemp187=4;
nctemp187=2*Diff->coeffs->d[0]+nctemp187;
Diff->coeffs->a[nctemp187] =0.0290;
int nctemp194=4;
nctemp194=3*Diff->coeffs->d[0]+nctemp194;
float nctemp197= -0.0080;
Diff->coeffs->a[nctemp194] =nctemp197;
int nctemp201=4;
nctemp201=4*Diff->coeffs->d[0]+nctemp201;
Diff->coeffs->a[nctemp201] =0.0018;
int nctemp208=5;
nctemp208=0*Diff->coeffs->d[0]+nctemp208;
Diff->coeffs->a[nctemp208] =1.2542;
int nctemp215=5;
nctemp215=1*Diff->coeffs->d[0]+nctemp215;
float nctemp218= -0.1213;
Diff->coeffs->a[nctemp215] =nctemp218;
int nctemp222=5;
nctemp222=2*Diff->coeffs->d[0]+nctemp222;
Diff->coeffs->a[nctemp222] =0.0344;
int nctemp229=5;
nctemp229=3*Diff->coeffs->d[0]+nctemp229;
float nctemp232= -0.017;
Diff->coeffs->a[nctemp229] =nctemp232;
int nctemp236=5;
nctemp236=4*Diff->coeffs->d[0]+nctemp236;
Diff->coeffs->a[nctemp236] =0.0038;
int nctemp243=5;
nctemp243=5*Diff->coeffs->d[0]+nctemp243;
float nctemp246= -0.0011;
Diff->coeffs->a[nctemp243] =nctemp246;
int nctemp250=6;
nctemp250=0*Diff->coeffs->d[0]+nctemp250;
Diff->coeffs->a[nctemp250] =1.2593;
int nctemp257=6;
nctemp257=1*Diff->coeffs->d[0]+nctemp257;
float nctemp260= -0.1280;
Diff->coeffs->a[nctemp257] =nctemp260;
int nctemp264=6;
nctemp264=2*Diff->coeffs->d[0]+nctemp264;
Diff->coeffs->a[nctemp264] =0.0384;
int nctemp271=6;
nctemp271=3*Diff->coeffs->d[0]+nctemp271;
float nctemp274= -0.0147;
Diff->coeffs->a[nctemp271] =nctemp274;
int nctemp278=6;
nctemp278=4*Diff->coeffs->d[0]+nctemp278;
Diff->coeffs->a[nctemp278] =0.0059;
int nctemp285=6;
nctemp285=5*Diff->coeffs->d[0]+nctemp285;
float nctemp288= -0.0022;
Diff->coeffs->a[nctemp285] =nctemp288;
int nctemp292=6;
nctemp292=6*Diff->coeffs->d[0]+nctemp292;
Diff->coeffs->a[nctemp292] =0.0007;
int nctemp299=7;
nctemp299=0*Diff->coeffs->d[0]+nctemp299;
Diff->coeffs->a[nctemp299] =1.2626;
int nctemp306=7;
nctemp306=1*Diff->coeffs->d[0]+nctemp306;
float nctemp309= -0.1312;
Diff->coeffs->a[nctemp306] =nctemp309;
int nctemp313=7;
nctemp313=2*Diff->coeffs->d[0]+nctemp313;
Diff->coeffs->a[nctemp313] =0.0412;
int nctemp320=7;
nctemp320=3*Diff->coeffs->d[0]+nctemp320;
float nctemp323= -0.0170;
Diff->coeffs->a[nctemp320] =nctemp323;
int nctemp327=7;
nctemp327=4*Diff->coeffs->d[0]+nctemp327;
Diff->coeffs->a[nctemp327] =0.0076;
int nctemp334=7;
nctemp334=5*Diff->coeffs->d[0]+nctemp334;
float nctemp337= -0.0034;
Diff->coeffs->a[nctemp334] =nctemp337;
int nctemp341=7;
nctemp341=6*Diff->coeffs->d[0]+nctemp341;
Diff->coeffs->a[nctemp341] =0.0014;
int nctemp348=7;
nctemp348=7*Diff->coeffs->d[0]+nctemp348;
float nctemp351= -0.0005;
Diff->coeffs->a[nctemp348] =nctemp351;
k =0;
int nctemp356 = (k < l);
while(nctemp356){
{
int nctemp363=k;
int nctemp371 = l - 1;
int nctemp366=nctemp371;
nctemp366=k*Diff->coeffs->d[0]+nctemp366;
Diff->w->a[nctemp363] =Diff->coeffs->a[nctemp366];
}
int nctemp381 = k + 1;
k =nctemp381;
int nctemp382 = (k < l);
nctemp356=nctemp382;
}
return Diff;
}
__global__ void kernel_DiffDxminus (struct diff* Diff,nctempfloat2 *A,nctempfloat2 *dA,float dx)
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
{
int nctempno=blockIdx.x*blockDim.x + threadIdx.x; i =0;
int nctemp419=i;
int nctemp413=l-nctemp419;
j =0;
int nctemp426=j;
int nctemp420=ny-nctemp426;
int nctemp427=nctemp413*nctemp420;
for(nctempno=blockIdx.x*blockDim.x + threadIdx.x; nctempno<nctemp427;nctempno+=blockDim.x*gridDim.x){
i=(nctempno/(1))%nctemp413+nctemp419;
j=(nctempno/(1*nctemp413))+nctemp426;
{
sum =0.0;
k =1;
int nctemp444 = i + 1;
int nctemp436 = (k < nctemp444);
while(nctemp436){
{
int nctemp460 = k - 1;
int nctemp455=nctemp460;
float nctemp454= -w->a[nctemp455];
int nctemp467 = i - k;
int nctemp462=nctemp467;
nctemp462=j*A->d[0]+nctemp462;
float nctemp469 = nctemp454 * A->a[nctemp462];
float nctemp471 = nctemp469 + sum;
sum =nctemp471;
}
int nctemp480 = k + 1;
k =nctemp480;
int nctemp489 = i + 1;
int nctemp481 = (k < nctemp489);
nctemp436=nctemp481;
}
k =1;
int nctemp502 = l + 1;
int nctemp494 = (k < nctemp502);
while(nctemp494){
{
int nctemp518 = k - 1;
int nctemp513=nctemp518;
int nctemp529 = k - 1;
int nctemp530 = i + nctemp529;
int nctemp520=nctemp530;
nctemp520=j*A->d[0]+nctemp520;
float nctemp532 = w->a[nctemp513] * A->a[nctemp520];
float nctemp534 = nctemp532 + sum;
sum =nctemp534;
}
int nctemp543 = k + 1;
k =nctemp543;
int nctemp552 = l + 1;
int nctemp544 = (k < nctemp552);
nctemp494=nctemp544;
}
int nctemp556=i;
nctemp556=j*dA->d[0]+nctemp556;
float nctemp564 = sum / dx;
dA->a[nctemp556] =nctemp564;
}
}
}
{
int nctempno=blockIdx.x*blockDim.x + threadIdx.x; int nctemp570 = nx - l;
i =l;
int nctemp575=i;
int nctemp565=nctemp570-nctemp575;
j =0;
int nctemp582=j;
int nctemp576=ny-nctemp582;
int nctemp583=nctemp565*nctemp576;
for(nctempno=blockIdx.x*blockDim.x + threadIdx.x; nctempno<nctemp583;nctempno+=blockDim.x*gridDim.x){
i=(nctempno/(1))%nctemp565+nctemp575;
j=(nctempno/(1*nctemp565))+nctemp582;
{
sum =0.0;
k =1;
int nctemp600 = l + 1;
int nctemp592 = (k < nctemp600);
while(nctemp592){
{
int nctemp616 = k - 1;
int nctemp611=nctemp616;
int nctemp626 = i - k;
int nctemp621=nctemp626;
nctemp621=j*A->d[0]+nctemp621;
float nctemp620= -A->a[nctemp621];
int nctemp638 = k - 1;
int nctemp639 = i + nctemp638;
int nctemp629=nctemp639;
nctemp629=j*A->d[0]+nctemp629;
float nctemp641 = nctemp620 + A->a[nctemp629];
float nctemp642 = w->a[nctemp611] * nctemp641;
float nctemp644 = nctemp642 + sum;
sum =nctemp644;
}
int nctemp653 = k + 1;
k =nctemp653;
int nctemp662 = l + 1;
int nctemp654 = (k < nctemp662);
nctemp592=nctemp654;
}
int nctemp666=i;
nctemp666=j*dA->d[0]+nctemp666;
float nctemp674 = sum / dx;
dA->a[nctemp666] =nctemp674;
}
}
}
{
int nctempno=blockIdx.x*blockDim.x + threadIdx.x; int nctemp685 = nx - l;
i =nctemp685;
int nctemp686=i;
int nctemp675=nx-nctemp686;
j =0;
int nctemp693=j;
int nctemp687=ny-nctemp693;
int nctemp694=nctemp675*nctemp687;
for(nctempno=blockIdx.x*blockDim.x + threadIdx.x; nctempno<nctemp694;nctempno+=blockDim.x*gridDim.x){
i=(nctempno/(1))%nctemp675+nctemp686;
j=(nctempno/(1*nctemp675))+nctemp693;
{
sum =0.0;
k =1;
int nctemp711 = l + 1;
int nctemp703 = (k < nctemp711);
while(nctemp703){
{
int nctemp727 = k - 1;
int nctemp722=nctemp727;
float nctemp721= -w->a[nctemp722];
int nctemp734 = i - k;
int nctemp729=nctemp734;
nctemp729=j*A->d[0]+nctemp729;
float nctemp736 = nctemp721 * A->a[nctemp729];
float nctemp738 = nctemp736 + sum;
sum =nctemp738;
}
int nctemp747 = k + 1;
k =nctemp747;
int nctemp756 = l + 1;
int nctemp748 = (k < nctemp756);
nctemp703=nctemp748;
}
k =1;
int nctemp772 = nx - i;
int nctemp774 = nctemp772 + 1;
int nctemp761 = (k < nctemp774);
while(nctemp761){
{
int nctemp790 = k - 1;
int nctemp785=nctemp790;
int nctemp801 = k - 1;
int nctemp802 = i + nctemp801;
int nctemp792=nctemp802;
nctemp792=j*A->d[0]+nctemp792;
float nctemp804 = w->a[nctemp785] * A->a[nctemp792];
float nctemp806 = nctemp804 + sum;
sum =nctemp806;
}
int nctemp815 = k + 1;
k =nctemp815;
int nctemp827 = nx - i;
int nctemp829 = nctemp827 + 1;
int nctemp816 = (k < nctemp829);
nctemp761=nctemp816;
}
int nctemp833=i;
nctemp833=j*dA->d[0]+nctemp833;
float nctemp841 = sum / dx;
dA->a[nctemp833] =nctemp841;
}
}
}
}
int DiffDxminus (struct diff* Diff,nctempfloat2 *A,nctempfloat2 *dA,float dx)
{
  kernel_DiffDxminus<<< RunGetnb(),RunGetnt() >>>(Diff,A,dA,dx);
GpuError();
return(1);
}
__global__ void kernel_DiffDxplus (struct diff* Diff,nctempfloat2 *A,nctempfloat2 *dA,float dx)
{
int nx;
int ny;
int i;
int j;
int k;
float sum;
int l;
nctempfloat1 *w;
int nctemp846=A->d[0];nx =nctemp846;
int nctemp854=A->d[1];ny =nctemp854;
l =Diff->l;
w=Diff->w;
{
int nctempno=blockIdx.x*blockDim.x + threadIdx.x; i =0;
int nctemp874=i;
int nctemp868=l-nctemp874;
j =0;
int nctemp881=j;
int nctemp875=ny-nctemp881;
int nctemp882=nctemp868*nctemp875;
for(nctempno=blockIdx.x*blockDim.x + threadIdx.x; nctempno<nctemp882;nctempno+=blockDim.x*gridDim.x){
i=(nctempno/(1))%nctemp868+nctemp874;
j=(nctempno/(1*nctemp868))+nctemp881;
{
sum =0.0;
k =1;
int nctemp899 = i + 2;
int nctemp891 = (k < nctemp899);
while(nctemp891){
{
int nctemp915 = k - 1;
int nctemp910=nctemp915;
float nctemp909= -w->a[nctemp910];
int nctemp926 = k - 1;
int nctemp927 = i - nctemp926;
int nctemp917=nctemp927;
nctemp917=j*A->d[0]+nctemp917;
float nctemp929 = nctemp909 * A->a[nctemp917];
float nctemp931 = nctemp929 + sum;
sum =nctemp931;
}
int nctemp940 = k + 1;
k =nctemp940;
int nctemp949 = i + 2;
int nctemp941 = (k < nctemp949);
nctemp891=nctemp941;
}
k =1;
int nctemp962 = l + 1;
int nctemp954 = (k < nctemp962);
while(nctemp954){
{
int nctemp978 = k - 1;
int nctemp973=nctemp978;
int nctemp985 = i + k;
int nctemp980=nctemp985;
nctemp980=j*A->d[0]+nctemp980;
float nctemp987 = w->a[nctemp973] * A->a[nctemp980];
float nctemp989 = nctemp987 + sum;
sum =nctemp989;
}
int nctemp998 = k + 1;
k =nctemp998;
int nctemp1007 = l + 1;
int nctemp999 = (k < nctemp1007);
nctemp954=nctemp999;
}
int nctemp1011=i;
nctemp1011=j*dA->d[0]+nctemp1011;
float nctemp1019 = sum / dx;
dA->a[nctemp1011] =nctemp1019;
}
}
}
{
int nctempno=blockIdx.x*blockDim.x + threadIdx.x; int nctemp1025 = nx - l;
i =l;
int nctemp1030=i;
int nctemp1020=nctemp1025-nctemp1030;
j =0;
int nctemp1037=j;
int nctemp1031=ny-nctemp1037;
int nctemp1038=nctemp1020*nctemp1031;
for(nctempno=blockIdx.x*blockDim.x + threadIdx.x; nctempno<nctemp1038;nctempno+=blockDim.x*gridDim.x){
i=(nctempno/(1))%nctemp1020+nctemp1030;
j=(nctempno/(1*nctemp1020))+nctemp1037;
{
sum =0.0;
k =1;
int nctemp1055 = l + 1;
int nctemp1047 = (k < nctemp1055);
while(nctemp1047){
{
int nctemp1071 = k - 1;
int nctemp1066=nctemp1071;
int nctemp1085 = k - 1;
int nctemp1086 = i - nctemp1085;
int nctemp1076=nctemp1086;
nctemp1076=j*A->d[0]+nctemp1076;
float nctemp1075= -A->a[nctemp1076];
int nctemp1094 = i + k;
int nctemp1089=nctemp1094;
nctemp1089=j*A->d[0]+nctemp1089;
float nctemp1096 = nctemp1075 + A->a[nctemp1089];
float nctemp1097 = w->a[nctemp1066] * nctemp1096;
float nctemp1099 = nctemp1097 + sum;
sum =nctemp1099;
}
int nctemp1108 = k + 1;
k =nctemp1108;
int nctemp1117 = l + 1;
int nctemp1109 = (k < nctemp1117);
nctemp1047=nctemp1109;
}
int nctemp1121=i;
nctemp1121=j*dA->d[0]+nctemp1121;
float nctemp1129 = sum / dx;
dA->a[nctemp1121] =nctemp1129;
}
}
}
{
int nctempno=blockIdx.x*blockDim.x + threadIdx.x; int nctemp1140 = nx - l;
i =nctemp1140;
int nctemp1141=i;
int nctemp1130=nx-nctemp1141;
j =0;
int nctemp1148=j;
int nctemp1142=ny-nctemp1148;
int nctemp1149=nctemp1130*nctemp1142;
for(nctempno=blockIdx.x*blockDim.x + threadIdx.x; nctempno<nctemp1149;nctempno+=blockDim.x*gridDim.x){
i=(nctempno/(1))%nctemp1130+nctemp1141;
j=(nctempno/(1*nctemp1130))+nctemp1148;
{
sum =0.0;
k =1;
int nctemp1166 = l + 1;
int nctemp1158 = (k < nctemp1166);
while(nctemp1158){
{
int nctemp1182 = k - 1;
int nctemp1177=nctemp1182;
float nctemp1176= -w->a[nctemp1177];
int nctemp1193 = k - 1;
int nctemp1194 = i - nctemp1193;
int nctemp1184=nctemp1194;
nctemp1184=j*A->d[0]+nctemp1184;
float nctemp1196 = nctemp1176 * A->a[nctemp1184];
float nctemp1198 = nctemp1196 + sum;
sum =nctemp1198;
}
int nctemp1207 = k + 1;
k =nctemp1207;
int nctemp1216 = l + 1;
int nctemp1208 = (k < nctemp1216);
nctemp1158=nctemp1208;
}
k =1;
int nctemp1229 = nx - i;
int nctemp1221 = (k < nctemp1229);
while(nctemp1221){
{
int nctemp1245 = k - 1;
int nctemp1240=nctemp1245;
int nctemp1252 = i + k;
int nctemp1247=nctemp1252;
nctemp1247=j*A->d[0]+nctemp1247;
float nctemp1254 = w->a[nctemp1240] * A->a[nctemp1247];
float nctemp1256 = nctemp1254 + sum;
sum =nctemp1256;
}
int nctemp1265 = k + 1;
k =nctemp1265;
int nctemp1274 = nx - i;
int nctemp1266 = (k < nctemp1274);
nctemp1221=nctemp1266;
}
int nctemp1278=i;
nctemp1278=j*dA->d[0]+nctemp1278;
float nctemp1286 = sum / dx;
dA->a[nctemp1278] =nctemp1286;
}
}
}
}
int DiffDxplus (struct diff* Diff,nctempfloat2 *A,nctempfloat2 *dA,float dx)
{
  kernel_DiffDxplus<<< RunGetnb(),RunGetnt() >>>(Diff,A,dA,dx);
GpuError();
return(1);
}
__global__ void kernel_DiffDyminus (struct diff* Diff,nctempfloat2 *A,nctempfloat2 *dA,float dx)
{
int nx;
int ny;
int i;
int j;
int k;
float sum;
int l;
nctempfloat1 *w;
int nctemp1291=A->d[0];nx =nctemp1291;
int nctemp1299=A->d[1];ny =nctemp1299;
l =Diff->l;
w=Diff->w;
{
int nctempno=blockIdx.x*blockDim.x + threadIdx.x; i =0;
int nctemp1319=i;
int nctemp1313=nx-nctemp1319;
j =0;
int nctemp1326=j;
int nctemp1320=l-nctemp1326;
int nctemp1327=nctemp1313*nctemp1320;
for(nctempno=blockIdx.x*blockDim.x + threadIdx.x; nctempno<nctemp1327;nctempno+=blockDim.x*gridDim.x){
i=(nctempno/(1))%nctemp1313+nctemp1319;
j=(nctempno/(1*nctemp1313))+nctemp1326;
{
sum =0.0;
k =1;
int nctemp1344 = j + 1;
int nctemp1336 = (k < nctemp1344);
while(nctemp1336){
{
int nctemp1360 = k - 1;
int nctemp1355=nctemp1360;
float nctemp1354= -w->a[nctemp1355];
int nctemp1362=i;
int nctemp1368 = j - k;
nctemp1362=nctemp1368*A->d[0]+nctemp1362;
float nctemp1369 = nctemp1354 * A->a[nctemp1362];
float nctemp1371 = nctemp1369 + sum;
sum =nctemp1371;
}
int nctemp1380 = k + 1;
k =nctemp1380;
int nctemp1389 = j + 1;
int nctemp1381 = (k < nctemp1389);
nctemp1336=nctemp1381;
}
k =1;
int nctemp1402 = l + 1;
int nctemp1394 = (k < nctemp1402);
while(nctemp1394){
{
int nctemp1418 = k - 1;
int nctemp1413=nctemp1418;
int nctemp1420=i;
int nctemp1430 = k - 1;
int nctemp1431 = j + nctemp1430;
nctemp1420=nctemp1431*A->d[0]+nctemp1420;
float nctemp1432 = w->a[nctemp1413] * A->a[nctemp1420];
float nctemp1434 = nctemp1432 + sum;
sum =nctemp1434;
}
int nctemp1443 = k + 1;
k =nctemp1443;
int nctemp1452 = l + 1;
int nctemp1444 = (k < nctemp1452);
nctemp1394=nctemp1444;
}
int nctemp1456=i;
nctemp1456=j*dA->d[0]+nctemp1456;
float nctemp1464 = sum / dx;
dA->a[nctemp1456] =nctemp1464;
}
}
}
{
int nctempno=blockIdx.x*blockDim.x + threadIdx.x; i =0;
int nctemp1471=i;
int nctemp1465=nx-nctemp1471;
int nctemp1477 = ny - l;
j =l;
int nctemp1482=j;
int nctemp1472=nctemp1477-nctemp1482;
int nctemp1483=nctemp1465*nctemp1472;
for(nctempno=blockIdx.x*blockDim.x + threadIdx.x; nctempno<nctemp1483;nctempno+=blockDim.x*gridDim.x){
i=(nctempno/(1))%nctemp1465+nctemp1471;
j=(nctempno/(1*nctemp1465))+nctemp1482;
{
sum =0.0;
k =1;
int nctemp1500 = l + 1;
int nctemp1492 = (k < nctemp1500);
while(nctemp1492){
{
int nctemp1516 = k - 1;
int nctemp1511=nctemp1516;
int nctemp1521=i;
int nctemp1527 = j - k;
nctemp1521=nctemp1527*A->d[0]+nctemp1521;
float nctemp1520= -A->a[nctemp1521];
int nctemp1529=i;
int nctemp1539 = k - 1;
int nctemp1540 = j + nctemp1539;
nctemp1529=nctemp1540*A->d[0]+nctemp1529;
float nctemp1541 = nctemp1520 + A->a[nctemp1529];
float nctemp1542 = w->a[nctemp1511] * nctemp1541;
float nctemp1544 = nctemp1542 + sum;
sum =nctemp1544;
}
int nctemp1553 = k + 1;
k =nctemp1553;
int nctemp1562 = l + 1;
int nctemp1554 = (k < nctemp1562);
nctemp1492=nctemp1554;
}
int nctemp1566=i;
nctemp1566=j*dA->d[0]+nctemp1566;
float nctemp1574 = sum / dx;
dA->a[nctemp1566] =nctemp1574;
}
}
}
{
int nctempno=blockIdx.x*blockDim.x + threadIdx.x; i =0;
int nctemp1581=i;
int nctemp1575=nx-nctemp1581;
int nctemp1592 = ny - l;
j =nctemp1592;
int nctemp1593=j;
int nctemp1582=ny-nctemp1593;
int nctemp1594=nctemp1575*nctemp1582;
for(nctempno=blockIdx.x*blockDim.x + threadIdx.x; nctempno<nctemp1594;nctempno+=blockDim.x*gridDim.x){
i=(nctempno/(1))%nctemp1575+nctemp1581;
j=(nctempno/(1*nctemp1575))+nctemp1593;
{
sum =0.0;
k =1;
int nctemp1611 = l + 1;
int nctemp1603 = (k < nctemp1611);
while(nctemp1603){
{
int nctemp1627 = k - 1;
int nctemp1622=nctemp1627;
float nctemp1621= -w->a[nctemp1622];
int nctemp1629=i;
int nctemp1635 = j - k;
nctemp1629=nctemp1635*A->d[0]+nctemp1629;
float nctemp1636 = nctemp1621 * A->a[nctemp1629];
float nctemp1638 = nctemp1636 + sum;
sum =nctemp1638;
}
int nctemp1647 = k + 1;
k =nctemp1647;
int nctemp1656 = l + 1;
int nctemp1648 = (k < nctemp1656);
nctemp1603=nctemp1648;
}
k =1;
int nctemp1672 = ny - j;
int nctemp1674 = nctemp1672 + 1;
int nctemp1661 = (k < nctemp1674);
while(nctemp1661){
{
int nctemp1690 = k - 1;
int nctemp1685=nctemp1690;
int nctemp1692=i;
int nctemp1702 = k - 1;
int nctemp1703 = j + nctemp1702;
nctemp1692=nctemp1703*A->d[0]+nctemp1692;
float nctemp1704 = w->a[nctemp1685] * A->a[nctemp1692];
float nctemp1706 = nctemp1704 + sum;
sum =nctemp1706;
}
int nctemp1715 = k + 1;
k =nctemp1715;
int nctemp1727 = ny - j;
int nctemp1729 = nctemp1727 + 1;
int nctemp1716 = (k < nctemp1729);
nctemp1661=nctemp1716;
}
int nctemp1733=i;
nctemp1733=j*dA->d[0]+nctemp1733;
float nctemp1741 = sum / dx;
dA->a[nctemp1733] =nctemp1741;
}
}
}
}
int DiffDyminus (struct diff* Diff,nctempfloat2 *A,nctempfloat2 *dA,float dx)
{
  kernel_DiffDyminus<<< RunGetnb(),RunGetnt() >>>(Diff,A,dA,dx);
GpuError();
return(1);
}
__global__ void kernel_DiffDyplus (struct diff* Diff,nctempfloat2 *A,nctempfloat2 *dA,float dx)
{
int nx;
int ny;
int i;
int j;
int k;
float sum;
int l;
nctempfloat1 *w;
int nctemp1746=A->d[0];nx =nctemp1746;
int nctemp1754=A->d[1];ny =nctemp1754;
l =Diff->l;
w=Diff->w;
{
int nctempno=blockIdx.x*blockDim.x + threadIdx.x; i =0;
int nctemp1774=i;
int nctemp1768=nx-nctemp1774;
j =0;
int nctemp1781=j;
int nctemp1775=l-nctemp1781;
int nctemp1782=nctemp1768*nctemp1775;
for(nctempno=blockIdx.x*blockDim.x + threadIdx.x; nctempno<nctemp1782;nctempno+=blockDim.x*gridDim.x){
i=(nctempno/(1))%nctemp1768+nctemp1774;
j=(nctempno/(1*nctemp1768))+nctemp1781;
{
sum =0.0;
k =1;
int nctemp1799 = j + 2;
int nctemp1791 = (k < nctemp1799);
while(nctemp1791){
{
int nctemp1815 = k - 1;
int nctemp1810=nctemp1815;
float nctemp1809= -w->a[nctemp1810];
int nctemp1817=i;
int nctemp1827 = k - 1;
int nctemp1828 = j - nctemp1827;
nctemp1817=nctemp1828*A->d[0]+nctemp1817;
float nctemp1829 = nctemp1809 * A->a[nctemp1817];
float nctemp1831 = nctemp1829 + sum;
sum =nctemp1831;
}
int nctemp1840 = k + 1;
k =nctemp1840;
int nctemp1849 = j + 2;
int nctemp1841 = (k < nctemp1849);
nctemp1791=nctemp1841;
}
k =1;
int nctemp1862 = l + 1;
int nctemp1854 = (k < nctemp1862);
while(nctemp1854){
{
int nctemp1878 = k - 1;
int nctemp1873=nctemp1878;
int nctemp1880=i;
int nctemp1886 = j + k;
nctemp1880=nctemp1886*A->d[0]+nctemp1880;
float nctemp1887 = w->a[nctemp1873] * A->a[nctemp1880];
float nctemp1889 = nctemp1887 + sum;
sum =nctemp1889;
}
int nctemp1898 = k + 1;
k =nctemp1898;
int nctemp1907 = l + 1;
int nctemp1899 = (k < nctemp1907);
nctemp1854=nctemp1899;
}
int nctemp1911=i;
nctemp1911=j*dA->d[0]+nctemp1911;
float nctemp1919 = sum / dx;
dA->a[nctemp1911] =nctemp1919;
}
}
}
{
int nctempno=blockIdx.x*blockDim.x + threadIdx.x; i =0;
int nctemp1926=i;
int nctemp1920=nx-nctemp1926;
int nctemp1932 = ny - l;
j =l;
int nctemp1937=j;
int nctemp1927=nctemp1932-nctemp1937;
int nctemp1938=nctemp1920*nctemp1927;
for(nctempno=blockIdx.x*blockDim.x + threadIdx.x; nctempno<nctemp1938;nctempno+=blockDim.x*gridDim.x){
i=(nctempno/(1))%nctemp1920+nctemp1926;
j=(nctempno/(1*nctemp1920))+nctemp1937;
{
sum =0.0;
k =1;
int nctemp1955 = l + 1;
int nctemp1947 = (k < nctemp1955);
while(nctemp1947){
{
int nctemp1971 = k - 1;
int nctemp1966=nctemp1971;
int nctemp1976=i;
int nctemp1986 = k - 1;
int nctemp1987 = j - nctemp1986;
nctemp1976=nctemp1987*A->d[0]+nctemp1976;
float nctemp1975= -A->a[nctemp1976];
int nctemp1989=i;
int nctemp1995 = j + k;
nctemp1989=nctemp1995*A->d[0]+nctemp1989;
float nctemp1996 = nctemp1975 + A->a[nctemp1989];
float nctemp1997 = w->a[nctemp1966] * nctemp1996;
float nctemp1999 = nctemp1997 + sum;
sum =nctemp1999;
}
int nctemp2008 = k + 1;
k =nctemp2008;
int nctemp2017 = l + 1;
int nctemp2009 = (k < nctemp2017);
nctemp1947=nctemp2009;
}
int nctemp2021=i;
nctemp2021=j*dA->d[0]+nctemp2021;
float nctemp2029 = sum / dx;
dA->a[nctemp2021] =nctemp2029;
}
}
}
{
int nctempno=blockIdx.x*blockDim.x + threadIdx.x; i =0;
int nctemp2036=i;
int nctemp2030=nx-nctemp2036;
int nctemp2047 = ny - l;
j =nctemp2047;
int nctemp2048=j;
int nctemp2037=ny-nctemp2048;
int nctemp2049=nctemp2030*nctemp2037;
for(nctempno=blockIdx.x*blockDim.x + threadIdx.x; nctempno<nctemp2049;nctempno+=blockDim.x*gridDim.x){
i=(nctempno/(1))%nctemp2030+nctemp2036;
j=(nctempno/(1*nctemp2030))+nctemp2048;
{
sum =0.0;
k =1;
int nctemp2066 = l + 1;
int nctemp2058 = (k < nctemp2066);
while(nctemp2058){
{
int nctemp2082 = k - 1;
int nctemp2077=nctemp2082;
float nctemp2076= -w->a[nctemp2077];
int nctemp2084=i;
int nctemp2094 = k - 1;
int nctemp2095 = j - nctemp2094;
nctemp2084=nctemp2095*A->d[0]+nctemp2084;
float nctemp2096 = nctemp2076 * A->a[nctemp2084];
float nctemp2098 = nctemp2096 + sum;
sum =nctemp2098;
}
int nctemp2107 = k + 1;
k =nctemp2107;
int nctemp2116 = l + 1;
int nctemp2108 = (k < nctemp2116);
nctemp2058=nctemp2108;
}
k =1;
int nctemp2129 = ny - j;
int nctemp2121 = (k < nctemp2129);
while(nctemp2121){
{
int nctemp2145 = k - 1;
int nctemp2140=nctemp2145;
int nctemp2147=i;
int nctemp2153 = j + k;
nctemp2147=nctemp2153*A->d[0]+nctemp2147;
float nctemp2154 = w->a[nctemp2140] * A->a[nctemp2147];
float nctemp2156 = nctemp2154 + sum;
sum =nctemp2156;
}
int nctemp2165 = k + 1;
k =nctemp2165;
int nctemp2174 = ny - j;
int nctemp2166 = (k < nctemp2174);
nctemp2121=nctemp2166;
}
int nctemp2178=i;
nctemp2178=j*dA->d[0]+nctemp2178;
float nctemp2186 = sum / dx;
dA->a[nctemp2178] =nctemp2186;
}
}
}
}
int DiffDyplus (struct diff* Diff,nctempfloat2 *A,nctempfloat2 *dA,float dx)
{
  kernel_DiffDyplus<<< RunGetnb(),RunGetnt() >>>(Diff,A,dA,dx);
GpuError();
return(1);
}
}
