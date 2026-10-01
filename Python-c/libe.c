//  Translated by epsc  version: Tue Sep 29 21:19:03 2026

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
int RunCreate (nctempchar1 *name);
float RunClock ();
int RunOpen (nctempchar1 *name,nctempchar1 *mode);
int RunClose (int fd);
int RunRead (int fd,int lbuff,nctempchar1 *buffer);
int RunWrite (int fd,int lbuff,nctempchar1 *buffer);
int RunSeek (int fd,int pos,int flag);
nctempchar1 * RunGetenv (nctempchar1 *name);
int RunGetnt ();
int RunGetnb ();
int RunStrcmp (nctempchar1 *s,nctempchar1 *t);
int RunStrlen (nctempchar1 *s);
int RunExit ();
int RunSystem (nctempchar1 *cmd);
nctempchar1 * RunDate ();
struct MainArg {nctempchar1 *arg;
};
typedef struct nctempMainArg1 {int d[1]; struct MainArg *a; } nctempMainArg1;
struct nctempMainArg2 {int d[2]; struct MainArg *a; } ;
struct nctempMainArg3 {int d[3]; struct MainArg *a; } ;
struct nctempMainArg4 {int d[4]; struct MainArg *a; } ;
static int LibeErrno;
static nctempchar1 *LibeErrstr;
int LibeErrinit ()
{
{
LibeErrno = 1;
LibeErrstr  = 0;
return 1;
}
}
int LibeGeterrno ()
{
{
return LibeErrno;
}
}
int LibeClearerr ()
{
{
LibeErrno = 1;
return 1;
}
}
nctempchar1 * LibeGeterrstr ()
{
{
return LibeErrstr;
}
}
nctempchar1 * LibeGetenv (nctempchar1 *name)
{
{
nctempchar1* nctemp7= name;
nctempchar1* nctemp10=RunGetenv(nctemp7);
return nctemp10;
}
}
float LibeMach (int flag)
{
{
int nctemp11 = (flag ==1);
if(nctemp11)
{
{
return 1.1754943508222875e-38;
}
}
else{
{
int nctemp16 = (flag ==2);
if(nctemp16)
{
{
return 3.4028234663852886e+38;
}
}
else{
{
int nctemp21 = (flag ==3);
if(nctemp21)
{
{
return 5.9604644775390625e-08;
}
}
else{
{
int nctemp26 = (flag ==4);
if(nctemp26)
{
{
return 1.1920928955078125e-07;
}
}
else{
{
int nctemp31 = (flag ==5);
if(nctemp31)
{
{
return 0.6931471805599453;
}
}
else{
{
float nctemp37=(float)(0);
return nctemp37;
}
}
}
}
}
}
}
}
}
}
}
}
float LibeFabs (float x)
{
{
int nctemp40 = (x < 0.0);
if(nctemp40)
{
{
float nctemp44= -x;
return nctemp44;
}
}
else{
{
return x;
}
}
}
}
float LibeFscale2 (float x,int n)
{
int i;
float rval;
{
int nctemp46 = (n ==0);
if(nctemp46)
{
{
return x;
}
}
rval = 1.0;
int nctemp51 = (n > 0);
if(nctemp51)
{
{
for(i = 0;i < n;i = (i + 1)){
{
rval = (rval * 2.0);
}
}
}
}
else{
{
n =  -n;
for(i = 0;i < n;i = (i + 1)){
{
rval = (rval * 0.5);
}
}
}
}
float nctemp59 = rval * x;
return nctemp59;
}
}
float LibeGetfman2 (float x)
{
float absx;
int n;
{
float nctemp64= x;
float nctemp66=LibeFabs(nctemp64);
absx =nctemp66;
n = 0;
int nctemp67 = (x ==0.0);
if(nctemp67)
{
{
return 0.0;
}
}
int nctemp72 = (absx < 0.5);
int nctemp76=nctemp72;
while(nctemp76)
{{
{
n = (n - 1);
absx = (absx * 2.0);
}
}
int nctemp77 = (absx < 0.5);
nctemp76=nctemp77;}int nctemp81 = (absx >= 1.0);
int nctemp85=nctemp81;
while(nctemp85)
{{
{
n = (n + 1);
absx = (absx * 0.5);
}
}
int nctemp86 = (absx >= 1.0);
nctemp85=nctemp86;}int nctemp90 = (x < 0.0);
if(nctemp90)
{
{
float nctemp94= -absx;
return nctemp94;
}
}
else{
{
return absx;
}
}
}
}
int LibeGetfexp2 (float x)
{
float absx;
int n;
{
float nctemp100= x;
float nctemp102=LibeFabs(nctemp100);
absx =nctemp102;
n = 0;
int nctemp103 = (x ==0.0);
if(nctemp103)
{
{
return 0;
}
}
int nctemp108 = (absx < 0.5);
int nctemp112=nctemp108;
while(nctemp112)
{{
{
n = (n - 1);
absx = (absx * 2.0);
}
}
int nctemp113 = (absx < 0.5);
nctemp112=nctemp113;}int nctemp117 = (absx >= 1.0);
int nctemp121=nctemp117;
while(nctemp121)
{{
{
n = (n + 1);
absx = (absx * 0.5);
}
}
int nctemp122 = (absx >= 1.0);
nctemp121=nctemp122;}return n;
}
}
float LibeFscale (float x,int n)
{
int i;
float rval;
{
rval = 1.0;
int nctemp127 = (n ==0);
if(nctemp127)
{
{
return x;
}
}
int nctemp132 = (n > 0);
if(nctemp132)
{
{
for(i = 0;i < n;i = (i + 1)){
{
rval = (rval * 10.0);
}
}
}
}
else{
{
n =  -n;
for(i = 0;i < n;i = (i + 1)){
{
rval = (rval * 0.1);
}
}
}
}
rval = (rval * x);
return rval;
}
}
int LibeGetfman (float f,int maxdig)
{
int sign;
int nexp;
int n;
int i;
{
int nctemp137 = (f ==0.0);
if(nctemp137)
{
{
return 0;
}
}
sign = 1;
int nctemp142 = (f < 0.0);
if(nctemp142)
{
{
f =  -f;
sign =  -sign;
}
}
nexp = 0;
float nctemp156 = f / 10.0;
float nctemp158 = nctemp156 + 1.1920928955078125e-07;
int nctemp146 = (nctemp158 >= 1.0);
if(nctemp146)
{
{
float nctemp170 = f / 10.0;
float nctemp172 = nctemp170 + 1.1920928955078125e-07;
int nctemp160 = (nctemp172 >= 1.0);
int nctemp174=nctemp160;
while(nctemp174)
{{
{
f = (f / 10.0);
nexp = (nexp + 1);
}
}
float nctemp185 = f / 10.0;
float nctemp187 = nctemp185 + 1.1920928955078125e-07;
int nctemp175 = (nctemp187 >= 1.0);
nctemp174=nctemp175;}}
}
else{
{
float nctemp196 = f + 1.1920928955078125e-07;
int nctemp189 = (nctemp196 < 1.0);
if(nctemp189)
{
{
float nctemp205 = f + 1.1920928955078125e-07;
int nctemp198 = (nctemp205 < 1.0);
int nctemp207=nctemp198;
while(nctemp207)
{{
{
f = (f * 10.0);
nexp = (nexp - 1);
}
}
float nctemp215 = f + 1.1920928955078125e-07;
int nctemp208 = (nctemp215 < 1.0);
nctemp207=nctemp208;}}
}
}
}
for(i = 0;i < (maxdig - 1);i = (i + 1)){
{
f = (f * 10.0);
}
}
float nctemp227 = f + 0.5;
int nctemp221=(int)(nctemp227);
n =nctemp221;
int nctemp228 = (sign < 0);
if(nctemp228)
{
{
n =  -n;
}
}
return n;
}
}
float LibeGetffman (float f)
{
int sign;
int nexp;
{
int nctemp233 = (f ==0.0);
if(nctemp233)
{
{
return 0.0;
}
}
sign = 1;
int nctemp238 = (f < 0.0);
if(nctemp238)
{
{
f =  -f;
sign =  -sign;
}
}
nexp = 0;
float nctemp252 = f / 10.0;
float nctemp254 = nctemp252 + 1.1920928955078125e-07;
int nctemp242 = (nctemp254 >= 1.0);
if(nctemp242)
{
{
float nctemp266 = f / 10.0;
float nctemp268 = nctemp266 + 1.1920928955078125e-07;
int nctemp256 = (nctemp268 >= 1.0);
int nctemp270=nctemp256;
while(nctemp270)
{{
{
f = (f / 10.0);
nexp = (nexp + 1);
}
}
float nctemp281 = f / 10.0;
float nctemp283 = nctemp281 + 1.1920928955078125e-07;
int nctemp271 = (nctemp283 >= 1.0);
nctemp270=nctemp271;}}
}
else{
{
float nctemp292 = f + 1.1920928955078125e-07;
int nctemp285 = (nctemp292 < 1.0);
if(nctemp285)
{
{
float nctemp301 = f + 1.1920928955078125e-07;
int nctemp294 = (nctemp301 < 1.0);
int nctemp303=nctemp294;
while(nctemp303)
{{
{
f = (f * 10.0);
nexp = (nexp - 1);
}
}
float nctemp311 = f + 1.1920928955078125e-07;
int nctemp304 = (nctemp311 < 1.0);
nctemp303=nctemp304;}}
}
}
}
return f;
}
}
int LibeGetmaxdig (float f)
{
int sign;
int nexp;
int i;
int loop;
float r;
{
int nctemp314 = (f ==0.0);
if(nctemp314)
{
{
return 0;
}
}
sign = 1;
int nctemp319 = (f < 0.0);
if(nctemp319)
{
{
f =  -f;
sign =  -sign;
}
}
nexp = 0;
float nctemp333 = f / 10.0;
float nctemp335 = nctemp333 + 1.1920928955078125e-07;
int nctemp323 = (nctemp335 >= 1.0);
if(nctemp323)
{
{
float nctemp347 = f / 10.0;
float nctemp349 = nctemp347 + 1.1920928955078125e-07;
int nctemp337 = (nctemp349 >= 1.0);
int nctemp351=nctemp337;
while(nctemp351)
{{
{
f = (f / 10.0);
nexp = (nexp + 1);
}
}
float nctemp362 = f / 10.0;
float nctemp364 = nctemp362 + 1.1920928955078125e-07;
int nctemp352 = (nctemp364 >= 1.0);
nctemp351=nctemp352;}}
}
else{
{
float nctemp373 = f + 1.1920928955078125e-07;
int nctemp366 = (nctemp373 < 1.0);
if(nctemp366)
{
{
float nctemp382 = f + 1.1920928955078125e-07;
int nctemp375 = (nctemp382 < 1.0);
int nctemp384=nctemp375;
while(nctemp384)
{{
{
f = (f * 10.0);
nexp = (nexp - 1);
}
}
float nctemp392 = f + 1.1920928955078125e-07;
int nctemp385 = (nctemp392 < 1.0);
nctemp384=nctemp385;}}
}
}
}
i = 0;
loop = 1;
int nctemp395=loop;
while(nctemp395)
{{
{
int nctemp407=(int)(f);
float nctemp404=(float)(nctemp407);
float nctemp410 = f - nctemp404;
r =nctemp410;
int nctemp411 = (r < 1.1920928955078125e-07);
if(nctemp411)
{
{
loop = 0;
}
}
else{
{
f = (f * 10.0);
}
}
i = (i + 1);
int nctemp415 = (i >= 10);
if(nctemp415)
{
{
loop = 0;
}
}
}
}
nctemp395=loop;}return i;
}
}
int LibeGetfexp (float f)
{
int nexp;
{
int nctemp421 = (f ==0.0);
if(nctemp421)
{
{
return 0;
}
}
nexp = 0;
int nctemp426 = (f < 0.0);
if(nctemp426)
{
{
f =  -f;
}
}
float nctemp440 = f / 10.0;
float nctemp442 = nctemp440 + 1.1920928955078125e-07;
int nctemp430 = (nctemp442 >= 1.0);
if(nctemp430)
{
{
float nctemp454 = f / 10.0;
float nctemp456 = nctemp454 + 1.1920928955078125e-07;
int nctemp444 = (nctemp456 >= 1.0);
int nctemp458=nctemp444;
while(nctemp458)
{{
{
f = (f / 10.0);
nexp = (nexp + 1);
}
}
float nctemp469 = f / 10.0;
float nctemp471 = nctemp469 + 1.1920928955078125e-07;
int nctemp459 = (nctemp471 >= 1.0);
nctemp458=nctemp459;}}
}
else{
{
float nctemp480 = f + 1.1920928955078125e-07;
int nctemp473 = (nctemp480 < 1.0);
if(nctemp473)
{
{
float nctemp489 = f + 1.1920928955078125e-07;
int nctemp482 = (nctemp489 < 1.0);
int nctemp491=nctemp482;
while(nctemp491)
{{
{
f = (f * 10.0);
nexp = (nexp - 1);
}
}
float nctemp499 = f + 1.1920928955078125e-07;
int nctemp492 = (nctemp499 < 1.0);
nctemp491=nctemp492;}}
}
}
}
return nexp;
}
}
float LibeClock ()
{
{
float nctemp503=RunClock();
return nctemp503;
}
}
static float LibeSincosmax;
static float LibeSincoslim;
static float LibeLnmax;
static float LibeLnmin;
int LibeMod (int n,int r)
{
{
int nctemp504 = (r ==0);
if(nctemp504)
{
{
return n;
}
}
int nctemp520 = n / r;
int nctemp522 = nctemp520 * r;
int nctemp523 = n - nctemp522;
return nctemp523;
}
}
float LibeSqrt (float x)
{
float f;
float yest;
float z;
int n;
{
int nctemp524 = (x ==0.0);
if(nctemp524)
{
{
return 0.0;
}
}
int nctemp529 = (x < 0.0);
if(nctemp529)
{
{
LibeErrno = -101;
struct nctempchar1 *nctemp538;
static struct nctempchar1 nctemp539 = {{ 25}, (char*)"Sqrt input argument < 0 \0"};
nctemp538=&nctemp539;
LibeErrstr=nctemp538;
return 0.0;
}
}
float nctemp545= x;
float nctemp547=LibeGetfman2(nctemp545);
f =nctemp547;
float nctemp552= x;
int nctemp554=LibeGetfexp2(nctemp552);
n =nctemp554;
yest = (0.41731 + (0.59016 * f));
z = (yest + (f / yest));
yest = ((0.25 * z) + (f / z));
int nctemp558= n;
int nctemp560= 2;
int nctemp562=LibeMod(nctemp558,nctemp560);
int nctemp555 = (nctemp562 !=0);
if(nctemp555)
{
{
yest = (yest * 0.70710678118654752440);
n = (n + 1);
}
}
float nctemp565= yest;
int nctemp572 = n / 2;
int nctemp567= nctemp572;
float nctemp573=LibeFscale2(nctemp565,nctemp567);
return nctemp573;
}
}
float LibeLn (float x)
{
float f;
int n;
float z;
float zn;
float zd;
float w;
float r;
float xn;
{
int nctemp574 = (x <= 0.0);
if(nctemp574)
{
{
LibeErrno = -101;
struct nctempchar1 *nctemp583;
static struct nctempchar1 nctemp584 = {{ 23}, (char*)"Ln input argument < 0 \0"};
nctemp583=&nctemp584;
LibeErrstr=nctemp583;
return 3.4028234663852886e+38;
}
}
float nctemp590= x;
float nctemp592=LibeGetfman2(nctemp590);
f =nctemp592;
float nctemp597= x;
int nctemp599=LibeGetfexp2(nctemp597);
n =nctemp599;
int nctemp600 = (f > 0.70710678118654752440);
if(nctemp600)
{
{
zn = ((f - 0.5) - 0.5);
zd = ((f * 0.5) + 0.5);
}
}
else{
{
zn = (f - 0.5);
zd = ((zn * 0.5) + 0.5);
n = (n - 1);
}
}
z = (zn / zd);
w = (z * z);
r = (z + (z * ((w * -0.5527074855E+0) / (w + -0.6632718214E+1))));
float nctemp608=(float)(n);
xn =nctemp608;
float nctemp621 = xn * -2.121944400546905827679E-4;
float nctemp623 = nctemp621 + r;
float nctemp629 = xn * 0.69335938;
float nctemp630 = nctemp623 + nctemp629;
return nctemp630;
}
}
float LibeExp (float x)
{
int n;
float g;
float z;
float p;
float q;
float xn;
float P0;
float P1;
float Q1;
float rval;
{
P0 = 0.24999999950E+0;
P1 = 0.41602886268E-2;
Q1 = 0.49987178778E-1;
int nctemp631 = (x >= LibeLnmax);
if(nctemp631)
{
{
LibeErrno = -102;
struct nctempchar1 *nctemp640;
static struct nctempchar1 nctemp641 = {{ 25}, (char*)"Overflow in exp function\0"};
nctemp640=&nctemp641;
LibeErrstr=nctemp640;
return 3.4028234663852886e+38;
}
}
int nctemp643 = (x < LibeLnmin);
if(nctemp643)
{
{
LibeErrno = -102;
struct nctempchar1 *nctemp652;
static struct nctempchar1 nctemp653 = {{ 26}, (char*)"Underflow in exp function\0"};
nctemp652=&nctemp653;
LibeErrstr=nctemp652;
return 0.0;
}
}
float nctemp665 = x * 1.4426950408889634073;
int nctemp659=(int)(nctemp665);
n =nctemp659;
float nctemp670=(float)(n);
xn =nctemp670;
g = (x - (xn * 0.693147180559945309417232));
z = (g * g);
p = (((P1 * z) + P0) * g);
q = ((Q1 * z) + 0.5);
rval = (0.5 + (p / (q - p)));
float nctemp674= rval;
int nctemp681 = n + 1;
int nctemp676= nctemp681;
float nctemp682=LibeFscale2(nctemp674,nctemp676);
return nctemp682;
}
}
float LibeSincos (float x,float y,float sign)
{
int n;
float xn;
float f;
float g;
float R1;
float R2;
float R3;
float R4;
{
R1 =  -0.1666665668E+0;
R2 = 0.8333025139E-2;
R3 =  -0.1980741872E-3;
R4 = 0.2601903036E-5;
int nctemp683 = (y > LibeSincosmax);
if(nctemp683)
{
{
LibeErrno = -102;
struct nctempchar1 *nctemp692;
static struct nctempchar1 nctemp693 = {{ 37}, (char*)"Loss of accuracy in sin/cos function\0"};
nctemp692=&nctemp693;
LibeErrstr=nctemp692;
return 0.0;
}
}
float nctemp708 = y * 0.31830988618379067154;
float nctemp710 = nctemp708 + 0.5;
int nctemp699=(int)(nctemp710);
n =nctemp699;
float nctemp715=(float)(n);
xn =nctemp715;
int nctemp721= n;
int nctemp723= 2;
int nctemp725=LibeMod(nctemp721,nctemp723);
int nctemp718 = (nctemp725 !=0);
if(nctemp718)
{
{
sign =  -sign;
}
}
float nctemp731= x;
float nctemp733=LibeFabs(nctemp731);
x =nctemp733;
int nctemp734 = (x !=y);
if(nctemp734)
{
{
xn = (xn - 0.5);
}
}
float nctemp745= x;
float nctemp747=LibeFabs(nctemp745);
float nctemp753 = xn * 3.1415926535897932384626433832795028841972;
float nctemp754 = nctemp747 - nctemp753;
f =nctemp754;
float nctemp758= f;
float nctemp760=LibeFabs(nctemp758);
int nctemp755 = (nctemp760 < LibeSincoslim);
if(nctemp755)
{
{
float nctemp766 = sign * f;
return nctemp766;
}
}
g = (f * f);
g = (((((((R4 * g) + R3) * g) + R2) * g) + R1) * g);
g = (f + (f * g));
float nctemp771 = sign * g;
return nctemp771;
}
}
float LibeSin (float x)
{
{
int nctemp772 = (x < 0.0);
if(nctemp772)
{
{
float nctemp777= x;
float nctemp780= -x;
float nctemp779= nctemp780;
float nctemp782= -1.0;
float nctemp781= nctemp782;
float nctemp783=LibeSincos(nctemp777,nctemp779,nctemp781);
return nctemp783;
}
}
else{
{
float nctemp785= x;
float nctemp787= x;
float nctemp789= 1.0;
float nctemp791=LibeSincos(nctemp785,nctemp787,nctemp789);
return nctemp791;
}
}
}
}
float LibeCos (float x)
{
{
float nctemp793= x;
float nctemp799= x;
float nctemp801=LibeFabs(nctemp799);
float nctemp803 = nctemp801 + 1.57079632679489661923132;
float nctemp795= nctemp803;
float nctemp804= 1.0;
float nctemp806=LibeSincos(nctemp793,nctemp795,nctemp804);
return nctemp806;
}
}
float LibeTan (float x)
{
float P1;
float Q1;
float Q2;
int n;
float y;
float xn;
float f;
float xnum;
float xden;
float g;
{
P1 =  -0.958017723E-1;
Q1 =  -0.429135777E+0;
Q2 = 0.971685835E-2;
float nctemp811= x;
float nctemp813=LibeFabs(nctemp811);
y =nctemp813;
int nctemp814 = (y > LibeSincosmax);
if(nctemp814)
{
{
LibeErrno = -102;
struct nctempchar1 *nctemp823;
static struct nctempchar1 nctemp824 = {{ 33}, (char*)"Loss of accuracy in tan function\0"};
nctemp823=&nctemp824;
LibeErrstr=nctemp823;
return 0.0;
}
}
float nctemp836 = x * 0.63661977236758134308;
int nctemp830=(int)(nctemp836);
n =nctemp830;
float nctemp841=(float)(n);
xn =nctemp841;
f = (x - (xn * 1.57079632679489661923132));
float nctemp847= f;
float nctemp849=LibeFabs(nctemp847);
int nctemp844 = (nctemp849 < LibeSincoslim);
if(nctemp844)
{
{
xnum = f;
xden = 1.0;
}
}
else{
{
g = (f * f);
xnum = (((P1 * g) * f) + f);
xden = (((((Q2 * g) + Q1) * g) + 0.5) + 0.5);
}
}
int nctemp854= n;
int nctemp856= 2;
int nctemp858=LibeMod(nctemp854,nctemp856);
int nctemp851 = (nctemp858 !=0);
if(nctemp851)
{
{
float nctemp863= -xnum;
float nctemp864 = xden / nctemp863;
return nctemp864;
}
}
else{
{
float nctemp869 = xnum / xden;
return nctemp869;
}
}
}
}
float LibeArcsin (float x)
{
float P1;
float P2;
float Q0;
float Q1;
float y;
float g;
float r;
float res;
int i;
{
P1 = 0.933935835E+0;
P2 =  -0.504400557E+0;
Q0 = 0.560363004E+1;
Q1 =  -0.554846723E+1;
float nctemp874= x;
float nctemp876=LibeFabs(nctemp874);
y =nctemp876;
int nctemp877 = (y > 0.5);
if(nctemp877)
{
{
i = 1;
int nctemp881 = (y > 1.0);
if(nctemp881)
{
{
LibeErrno = -101;
struct nctempchar1 *nctemp890;
static struct nctempchar1 nctemp891 = {{ 41}, (char*)"Absolute value of argument of arcsin > 1\0"};
nctemp890=&nctemp891;
LibeErrstr=nctemp890;
return 3.4028234663852886e+38;
}
}
g = ((1.0 - y) * 0.5);
float nctemp897= g;
float nctemp899=LibeSqrt(nctemp897);
r =nctemp899;
r =  -r;
y = (r + r);
r = ((((P2 * g) + P1) * g) / (((g + Q1) * g) + Q0));
res = (y + (y * r));
}
}
else{
{
i = 0;
int nctemp900 = (y < LibeSincoslim);
if(nctemp900)
{
{
res = y;
}
}
else{
{
g = (y * y);
g = ((((P2 * g) + P1) * g) / (((g + Q1) * g) + Q0));
res = (y + (y * g));
}
}
}
}
int nctemp904 = (i ==1);
if(nctemp904)
{
{
res = (0.78539816339744830962 + (0.78539816339744830962 + res));
}
}
int nctemp908 = (x < 0.0);
if(nctemp908)
{
{
res =  -res;
}
}
return res;
}
}
float LibeArccos (float x)
{
float P1;
float P2;
float Q0;
float Q1;
float y;
float g;
float r;
float res;
int i;
{
P1 = 0.933935835E+0;
P2 =  -0.504400557E+0;
Q0 = 0.560363004E+1;
Q1 =  -0.554846723E+1;
float nctemp917= x;
float nctemp919=LibeFabs(nctemp917);
y =nctemp919;
int nctemp920 = (y > 0.5);
if(nctemp920)
{
{
i = 0;
int nctemp924 = (y > 1.0);
if(nctemp924)
{
{
LibeErrno = -101;
struct nctempchar1 *nctemp933;
static struct nctempchar1 nctemp934 = {{ 50}, (char*)"Absolute value of argument of arccos out of range\0"};
nctemp933=&nctemp934;
LibeErrstr=nctemp933;
return 3.4028234663852886e+38;
}
}
g = ((1.0 - y) * 0.5);
float nctemp940= g;
float nctemp942=LibeSqrt(nctemp940);
r =nctemp942;
r =  -r;
y = (r + r);
r = ((((P2 * g) + P1) * g) / (((g + Q1) * g) + Q0));
res = (y + (y * r));
}
}
else{
{
i = 1;
int nctemp943 = (y < LibeSincoslim);
if(nctemp943)
{
{
res = y;
}
}
else{
{
g = (y * y);
g = ((((P2 * g) + P1) * g) / (((g + Q1) * g) + Q0));
res = (y + (y * g));
}
}
}
}
int nctemp947 = (x < 0.0);
if(nctemp947)
{
{
int nctemp951 = (i ==0);
if(nctemp951)
{
{
res = (1.57079632679489661923132 + (1.57079632679489661923132 + res));
}
}
else{
{
res = (0.78539816339744830962 + (0.78539816339744830962 + res));
}
}
}
}
else{
{
int nctemp955 = (i ==1);
if(nctemp955)
{
{
res = (0.78539816339744830962 + (0.78539816339744830962 - res));
}
}
else{
{
res =  -res;
}
}
}
}
return res;
}
}
float LibeAtan (float f)
{
float rt32;
float rt3;
float a;
float P0;
float P1;
float Q0;
int n;
float res;
float g;
{
rt32 = 0.26794919243112270647;
rt3 = 1.73205080756887729353;
a = (rt3 - 1.0);
P0 =  -0.4708325141E+0;
P1 =  -0.5090958253E-1;
Q0 = 0.1412500740E+1;
int nctemp960 = (f > 1.0);
if(nctemp960)
{
{
f = (1.0 / f);
n = 2;
}
}
else{
{
n = 0;
}
}
int nctemp964 = (f > rt32);
if(nctemp964)
{
{
f = (((((a * f) - 0.5) - 0.5) + f) / (rt3 + f));
n = (n + 1);
}
}
float nctemp971= f;
float nctemp973=LibeFabs(nctemp971);
int nctemp968 = (nctemp973 < LibeSincoslim);
if(nctemp968)
{
{
res = f;
}
}
else{
{
g = (f * f);
res = ((((P1 * g) + P0) * g) / (g + Q0));
res = (f + (f * res));
}
}
int nctemp975 = (n > 1);
if(nctemp975)
{
{
res =  -res;
}
}
int nctemp979 = (n ==1);
if(nctemp979)
{
{
res = (res + 0.52359877559829887308);
}
}
else{
{
int nctemp983 = (n ==2);
if(nctemp983)
{
{
res = (res + 1.57079632679489661923132);
}
}
else{
{
int nctemp987 = (n ==3);
if(nctemp987)
{
{
res = (res + 1.04719755119659774615);
}
}
}
}
}
}
return res;
}
}
float LibeArctan (float x)
{
float rval;
{
int nctemp992 = (x < 0.0);
if(nctemp992)
{
{
float nctemp1001= -x;
float nctemp1000= nctemp1001;
float nctemp1002=LibeAtan(nctemp1000);
rval =nctemp1002;
rval =  -rval;
}
}
else{
{
float nctemp1007= x;
float nctemp1009=LibeAtan(nctemp1007);
rval =nctemp1009;
}
}
return rval;
}
}
float LibePow (float base,float exponent)
{
{
float nctemp1017= base;
float nctemp1019=LibeLn(nctemp1017);
float nctemp1020 = exponent * nctemp1019;
float nctemp1012= nctemp1020;
float nctemp1021=LibeExp(nctemp1012);
return nctemp1021;
}
}
int LibeMathinit ()
{
{
float nctemp1026= 1.0;
int nctemp1033 = 24 - 1;
int nctemp1028= nctemp1033;
float nctemp1034=LibeFscale2(nctemp1026,nctemp1028);
LibeSincosmax =nctemp1034;
float nctemp1043= LibeSincosmax;
float nctemp1045=LibeSqrt(nctemp1043);
float nctemp1046 = 3.1415926535897932384626433832795028841972 * nctemp1045;
LibeSincosmax =nctemp1046;
float nctemp1055= 1.0;
int nctemp1062 = 24 / 2;
int nctemp1057= nctemp1062;
float nctemp1063=LibeFscale2(nctemp1055,nctemp1057);
float nctemp1064 = 1.0 / nctemp1063;
LibeSincoslim =nctemp1064;
float nctemp1069= 3.4028234663852886e+38;
float nctemp1071=LibeLn(nctemp1069);
LibeLnmax =nctemp1071;
float nctemp1076= 1.1754943508222875e-38;
float nctemp1078=LibeLn(nctemp1076);
LibeLnmin =nctemp1078;
return 1;
}
}
int LibeStrlen (nctempchar1 *s)
{
int ls;
int i;
{
int nctemp1084=s->d[0];ls =nctemp1084;
i = 0;
int nctemp1097=i;
int nctemp1094=(int)(s->a[nctemp1097]);
int nctemp1091 = (nctemp1094 !=0);
int nctemp1101 = (i < ls);
int nctemp1088 = (nctemp1091 && nctemp1101);
int nctemp1105=nctemp1088;
while(nctemp1105)
{{
{
i = (i + 1);
}
}
int nctemp1115=i;
int nctemp1112=(int)(s->a[nctemp1115]);
int nctemp1109 = (nctemp1112 !=0);
int nctemp1119 = (i < ls);
int nctemp1106 = (nctemp1109 && nctemp1119);
nctemp1105=nctemp1106;}return i;
}
}
int LibeStrcmp (nctempchar1 *s,nctempchar1 *t)
{
int ls;
int i;
{
int nctemp1128=s->d[0];ls =nctemp1128;
i = 0;
int nctemp1138=i;
int nctemp1141=i;
int nctemp1135 = (s->a[nctemp1138] ==t->a[nctemp1141]);
int nctemp1144 = (i < ls);
int nctemp1132 = (nctemp1135 && nctemp1144);
int nctemp1148=nctemp1132;
while(nctemp1148)
{{
{
int nctemp1155=i;
int nctemp1152=(int)(s->a[nctemp1155]);
int nctemp1149 = (nctemp1152 ==0);
if(nctemp1149)
{
{
return 1;
}
}
i = (i + 1);
}
}
int nctemp1165=i;
int nctemp1168=i;
int nctemp1162 = (s->a[nctemp1165] ==t->a[nctemp1168]);
int nctemp1171 = (i < ls);
int nctemp1159 = (nctemp1162 && nctemp1171);
nctemp1148=nctemp1159;}return 0;
}
}
int LibeStrev (nctempchar1 *s)
{
char c;
int i;
int j;
{
i = 0;
nctempchar1* nctemp1183= s;
int nctemp1186=LibeStrlen(nctemp1183);
int nctemp1188 = nctemp1186 - 1;
j =nctemp1188;
int nctemp1189 = (i < j);
int nctemp1193=nctemp1189;
while(nctemp1193)
{{
{
c = s->a[i];
s->a[i] = s->a[j];
s->a[j] = c;
i = (i + 1);
j = (j - 1);
}
}
int nctemp1194 = (i < j);
nctemp1193=nctemp1194;}return 1;
}
}
int LibeStrcpy (nctempchar1 *s,nctempchar1 *t)
{
int ls;
int i;
{
nctempchar1* nctemp1203= s;
int nctemp1206=LibeStrlen(nctemp1203);
ls =nctemp1206;
int nctemp1207 = (ls ==0);
if(nctemp1207)
{
{
return 1;
}
}
int nctemp1215=t->d[0];int nctemp1212 = (nctemp1215 <= ls);
if(nctemp1212)
{
{
return 0;
}
}
for(i = 0;i <= ls;i = (i + 1)){
{
t->a[i] = s->a[i];
}
}
return 1;
}
}
int LibeStrcat (nctempchar1 *s,nctempchar1 *t)
{
int ls;
int lt;
int i;
{
nctempchar1* nctemp1226= s;
int nctemp1229=LibeStrlen(nctemp1226);
ls =nctemp1229;
nctempchar1* nctemp1234= t;
int nctemp1237=LibeStrlen(nctemp1234);
lt =nctemp1237;
int nctemp1241=t->d[0];int nctemp1250 = lt + ls;
int nctemp1238 = (nctemp1241 < nctemp1250);
if(nctemp1238)
{
{
return 0;
}
}
for(i = lt;i < (ls + lt);i = (i + 1)){
{
t->a[i] = s->a[i - lt];
}
}
int nctemp1260 = ls + lt;
int nctemp1255=nctemp1260;
char nctemp1262=(char)(0);
t->a[nctemp1255] =nctemp1262;
return 1;
}
}
nctempchar1 * LibeStradd (nctempchar1 *t,nctempchar1 *s)
{
int lt;
int ls;
nctempchar1 *r;
int i;
{
int nctemp1273=t->d[0];int nctemp1278 = nctemp1273 - 1;
lt =nctemp1278;
int nctemp1286=s->d[0];int nctemp1291 = nctemp1286 - 1;
ls =nctemp1291;
int nctemp1306 = lt + ls;
int nctemp1308 = nctemp1306 + 1;
int nctemp1298=nctemp1308;
nctempchar1 *nctemp1297;
nctemp1297=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp1316 = lt + ls;
int nctemp1318 = nctemp1316 + 1;
nctemp1297->d[0]=nctemp1318;
nctemp1297->a=(char *)RunMalloc(sizeof(char)*nctemp1298);
r=nctemp1297;
for(i = 0;i < lt;i = (i + 1)){
{
r->a[i] = t->a[i];
}
}
for(i = lt;i < (ls + lt);i = (i + 1)){
{
r->a[i] = s->a[i - lt];
}
}
int nctemp1327 = ls + lt;
int nctemp1322=nctemp1327;
char nctemp1329=(char)(0);
r->a[nctemp1322] =nctemp1329;
return r;
}
}
nctempchar1 * LibeStrsave (nctempchar1 *s)
{
int l;
nctempchar1 *tmp;
{
tmp  = 0;
l = 0;
nctempchar1* nctemp1338= s;
int nctemp1341=LibeStrlen(nctemp1338);
l =nctemp1341;
int nctemp1353 = l + 1;
int nctemp1348=nctemp1353;
nctempchar1 *nctemp1347;
nctemp1347=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp1358 = l + 1;
nctemp1347->d[0]=nctemp1358;
nctemp1347->a=(char *)RunMalloc(sizeof(char)*nctemp1348);
tmp=nctemp1347;
nctempchar1 *nctemp1360 =tmp;
int nctemp1359 =(nctemp1360!=0);
if(nctemp1359)
{
{
nctempchar1* nctemp1365= s;
nctempchar1* nctemp1368= tmp;
int nctemp1371=LibeStrcpy(nctemp1365,nctemp1368);
}
}
return tmp;
}
}
int LibeIsalhpa (int c)
{
{
int nctemp1380 = (c >= 'a');
int nctemp1385 = (c <= 'z');
int nctemp1377 = (nctemp1380 && nctemp1385);
int nctemp1393 = (c >= 'A');
int nctemp1398 = (c <= 'Z');
int nctemp1390 = (nctemp1393 && nctemp1398);
int nctemp1374 = (nctemp1377 || nctemp1390);
if(nctemp1374)
{
{
return 1;
}
}
else{
{
return 0;
}
}
}
}
int LibeIsdigit (int c)
{
{
int nctemp1407 = (c >= '0');
int nctemp1412 = (c <= '9');
int nctemp1404 = (nctemp1407 && nctemp1412);
if(nctemp1404)
{
{
return 1;
}
}
else{
{
return 0;
}
}
}
}
int LibeIsalnum (int c)
{
{
int nctemp1424 = (c >= 'a');
int nctemp1429 = (c <= 'z');
int nctemp1421 = (nctemp1424 && nctemp1429);
int nctemp1437 = (c >= 'A');
int nctemp1442 = (c <= 'Z');
int nctemp1434 = (nctemp1437 && nctemp1442);
int nctemp1418 = (nctemp1421 || nctemp1434);
if(nctemp1418)
{
{
return 1;
}
}
else{
{
int nctemp1450 = (c >= '0');
int nctemp1455 = (c <= '9');
int nctemp1447 = (nctemp1450 && nctemp1455);
if(nctemp1447)
{
{
return 1;
}
}
else{
{
return 0;
}
}
}
}
}
}
int LibeAtoi (nctempchar1 *s)
{
int sign;
int i;
int n;
{
i = 0;
int nctemp1470=i;
char nctemp1473=(char)(' ');
int nctemp1467 = (s->a[nctemp1470] ==nctemp1473);
int nctemp1480=i;
char nctemp1483=(char)(10);
int nctemp1477 = (s->a[nctemp1480] ==nctemp1483);
int nctemp1464 = (nctemp1467 || nctemp1477);
int nctemp1490=i;
char nctemp1493=(char)(9);
int nctemp1487 = (s->a[nctemp1490] ==nctemp1493);
int nctemp1461 = (nctemp1464 || nctemp1487);
int nctemp1496=nctemp1461;
while(nctemp1496)
{{
{
i = (i + 1);
}
}
int nctemp1506=i;
char nctemp1509=(char)(' ');
int nctemp1503 = (s->a[nctemp1506] ==nctemp1509);
int nctemp1516=i;
char nctemp1519=(char)(10);
int nctemp1513 = (s->a[nctemp1516] ==nctemp1519);
int nctemp1500 = (nctemp1503 || nctemp1513);
int nctemp1526=i;
char nctemp1529=(char)(9);
int nctemp1523 = (s->a[nctemp1526] ==nctemp1529);
int nctemp1497 = (nctemp1500 || nctemp1523);
nctemp1496=nctemp1497;}int nctemp1535=i;
char nctemp1538=(char)('-');
int nctemp1532 = (s->a[nctemp1535] ==nctemp1538);
if(nctemp1532)
{
{
sign =  -1;
i = (i + 1);
}
}
else{
{
int nctemp1544=i;
char nctemp1547=(char)('+');
int nctemp1541 = (s->a[nctemp1544] ==nctemp1547);
if(nctemp1541)
{
{
sign = 1;
i = (i + 1);
}
}
else{
{
sign = 1;
}
}
}
}
n =0;
int nctemp1560=i;
int nctemp1557=(int)(s->a[nctemp1560]);
int nctemp1555= nctemp1557;
int nctemp1562=LibeIsdigit(nctemp1555);
while(nctemp1562){
{
{
int nctemp1577 = 10 * n;
int nctemp1582=i;
int nctemp1579=(int)(s->a[nctemp1582]);
int nctemp1584 = nctemp1577 + nctemp1579;
int nctemp1586 = nctemp1584 - '0';
n =nctemp1586;
}
}
int nctemp1595 = i + 1;
i =nctemp1595;
int nctemp1602=i;
int nctemp1599=(int)(s->a[nctemp1602]);
int nctemp1597= nctemp1599;
int nctemp1604=LibeIsdigit(nctemp1597);
nctemp1562=nctemp1604;
}
int nctemp1609 = sign * n;
return nctemp1609;
}
}
int LibeItoa (int n,nctempchar1 *s)
{
int sign;
int i;
{
nctempchar1 *nctemp1611 =s;
int nctemp1610 =(nctemp1611==0);
if(nctemp1610)
{
{
return 0;
}
}
sign =n;
int nctemp1616 = (sign < 0);
if(nctemp1616)
{
{
n =  -n;
}
}
i = 0;
int nctemp1627=0;
int nctemp1635= n;
int nctemp1637= 10;
int nctemp1639=LibeMod(nctemp1635,nctemp1637);
int nctemp1641 = nctemp1639 + 48;
char nctemp1630=(char)(nctemp1641);
s->a[nctemp1627] =nctemp1630;
int nctemp1653 = n / 10;
n =nctemp1653;
int nctemp1642 = (n > 0);
int nctemp1655=nctemp1642;
while(nctemp1655)
{{
{
int nctemp1663 = i + 1;
int nctemp1668=s->d[0];int nctemp1673 = nctemp1668 - 1;
int nctemp1656 = (nctemp1663 > nctemp1673);
if(nctemp1656)
{
{
return 0;
}
}
int nctemp1687 = i + 1;
i =nctemp1687;
int nctemp1678=i;
int nctemp1694= n;
int nctemp1696= 10;
int nctemp1698=LibeMod(nctemp1694,nctemp1696);
int nctemp1700 = nctemp1698 + 48;
char nctemp1689=(char)(nctemp1700);
s->a[nctemp1678] =nctemp1689;
}
}
int nctemp1712 = n / 10;
n =nctemp1712;
int nctemp1701 = (n > 0);
nctemp1655=nctemp1701;}int nctemp1714 = (sign < 0);
if(nctemp1714)
{
{
int nctemp1725 = i + 1;
int nctemp1730=s->d[0];int nctemp1735 = nctemp1730 - 1;
int nctemp1718 = (nctemp1725 > nctemp1735);
if(nctemp1718)
{
{
return 0;
}
}
int nctemp1749 = i + 1;
i =nctemp1749;
int nctemp1740=i;
char nctemp1751=(char)(45);
s->a[nctemp1740] =nctemp1751;
}
}
int nctemp1761 = i + 1;
int nctemp1766=s->d[0];int nctemp1771 = nctemp1766 - 1;
int nctemp1754 = (nctemp1761 > nctemp1771);
if(nctemp1754)
{
{
return 0;
}
}
int nctemp1785 = i + 1;
i =nctemp1785;
int nctemp1776=i;
char nctemp1787=(char)(0);
s->a[nctemp1776] =nctemp1787;
nctempchar1* nctemp1791= s;
int nctemp1794=LibeStrev(nctemp1791);
return 1;
}
}
int LibeItoh (int n,nctempchar1 *s)
{
int i;
int sign;
{
sign =n;
int nctemp1796 = (sign < 0);
if(nctemp1796)
{
{
n =  -n;
}
}
i = 0;
int nctemp1807= n;
int nctemp1809= 16;
int nctemp1811=LibeMod(nctemp1807,nctemp1809);
int nctemp1804 = (nctemp1811 <= 9);
if(nctemp1804)
{
{
int nctemp1816=0;
int nctemp1824= n;
int nctemp1826= 16;
int nctemp1828=LibeMod(nctemp1824,nctemp1826);
int nctemp1830 = nctemp1828 + 48;
char nctemp1819=(char)(nctemp1830);
s->a[nctemp1816] =nctemp1819;
}
}
else{
{
int nctemp1834=0;
int nctemp1845= n;
int nctemp1847= 16;
int nctemp1849=LibeMod(nctemp1845,nctemp1847);
int nctemp1851 = nctemp1849 + 'a';
int nctemp1853 = nctemp1851 - 10;
char nctemp1837=(char)(nctemp1853);
s->a[nctemp1834] =nctemp1837;
}
}
int nctemp1865 = n / 16;
n =nctemp1865;
int nctemp1854 = (n > 0);
int nctemp1867=nctemp1854;
while(nctemp1867)
{{
{
int nctemp1871= n;
int nctemp1873= 16;
int nctemp1875=LibeMod(nctemp1871,nctemp1873);
int nctemp1868 = (nctemp1875 <= 9);
if(nctemp1868)
{
{
int nctemp1889 = i + 1;
i =nctemp1889;
int nctemp1880=i;
int nctemp1896= n;
int nctemp1898= 16;
int nctemp1900=LibeMod(nctemp1896,nctemp1898);
int nctemp1902 = nctemp1900 + 48;
char nctemp1891=(char)(nctemp1902);
s->a[nctemp1880] =nctemp1891;
}
}
else{
{
int nctemp1915 = i + 1;
i =nctemp1915;
int nctemp1906=i;
int nctemp1925= n;
int nctemp1927= 16;
int nctemp1929=LibeMod(nctemp1925,nctemp1927);
int nctemp1931 = nctemp1929 + 'a';
int nctemp1933 = nctemp1931 - 10;
char nctemp1917=(char)(nctemp1933);
s->a[nctemp1906] =nctemp1917;
}
}
}
}
int nctemp1945 = n / 16;
n =nctemp1945;
int nctemp1934 = (n > 0);
nctemp1867=nctemp1934;}int nctemp1947 = (sign < 0);
if(nctemp1947)
{
{
int nctemp1963 = i + 1;
i =nctemp1963;
int nctemp1954=i;
char nctemp1965=(char)(45);
s->a[nctemp1954] =nctemp1965;
}
}
int nctemp1980 = i + 1;
i =nctemp1980;
int nctemp1971=i;
char nctemp1982=(char)(0);
s->a[nctemp1971] =nctemp1982;
nctempchar1* nctemp1986= s;
int nctemp1989=LibeStrev(nctemp1986);
return 0;
}
}
float LibeAtof (nctempchar1 *s)
{
float val;
float power;
int exponent;
int sign;
int esign;
int i;
{
sign = 1;
val = 0.0;
power = 1.0;
exponent = 0;
esign = 1;
i = 0;
int nctemp1994=i;
char nctemp1997=(char)(' ');
int nctemp1991 = (s->a[nctemp1994] ==nctemp1997);
int nctemp2000=nctemp1991;
while(nctemp2000)
{{
{
i = (i + 1);
}
}
int nctemp2004=i;
char nctemp2007=(char)(' ');
int nctemp2001 = (s->a[nctemp2004] ==nctemp2007);
nctemp2000=nctemp2001;}int nctemp2016=i;
char nctemp2019=(char)('+');
int nctemp2013 = (s->a[nctemp2016] ==nctemp2019);
int nctemp2026=i;
char nctemp2029=(char)('-');
int nctemp2023 = (s->a[nctemp2026] ==nctemp2029);
int nctemp2010 = (nctemp2013 || nctemp2023);
if(nctemp2010)
{
{
int nctemp2035=i;
char nctemp2038=(char)('-');
int nctemp2032 = (s->a[nctemp2035] ==nctemp2038);
if(nctemp2032)
{
{
sign =  -1;
}
}
i = (i + 1);
}
}
int nctemp2047=i;
int nctemp2044=(int)(s->a[nctemp2047]);
int nctemp2042= nctemp2044;
int nctemp2049=LibeIsdigit(nctemp2042);
int nctemp2050=nctemp2049;
while(nctemp2050)
{{
{
float nctemp2062 = 10.0 * val;
int nctemp2072=i;
int nctemp2069=(int)(s->a[nctemp2072]);
int nctemp2075 = nctemp2069 - '0';
float nctemp2064=(float)(nctemp2075);
float nctemp2076 = nctemp2062 + nctemp2064;
val =nctemp2076;
i = (i + 1);
}
}
int nctemp2083=i;
int nctemp2080=(int)(s->a[nctemp2083]);
int nctemp2078= nctemp2080;
int nctemp2085=LibeIsdigit(nctemp2078);
nctemp2050=nctemp2085;}int nctemp2089=i;
char nctemp2092=(char)('.');
int nctemp2086 = (s->a[nctemp2089] ==nctemp2092);
if(nctemp2086)
{
{
i = (i + 1);
int nctemp2101=i;
int nctemp2098=(int)(s->a[nctemp2101]);
int nctemp2096= nctemp2098;
int nctemp2103=LibeIsdigit(nctemp2096);
int nctemp2104=nctemp2103;
while(nctemp2104)
{{
{
float nctemp2116 = 10.0 * val;
int nctemp2126=i;
int nctemp2123=(int)(s->a[nctemp2126]);
int nctemp2129 = nctemp2123 - '0';
float nctemp2118=(float)(nctemp2129);
float nctemp2130 = nctemp2116 + nctemp2118;
val =nctemp2130;
i = (i + 1);
power = (10.0 * power);
}
}
int nctemp2137=i;
int nctemp2134=(int)(s->a[nctemp2137]);
int nctemp2132= nctemp2134;
int nctemp2139=LibeIsdigit(nctemp2132);
nctemp2104=nctemp2139;}}
}
int nctemp2146=i;
char nctemp2149=(char)('e');
int nctemp2143 = (s->a[nctemp2146] ==nctemp2149);
int nctemp2156=i;
char nctemp2159=(char)('E');
int nctemp2153 = (s->a[nctemp2156] ==nctemp2159);
int nctemp2140 = (nctemp2143 || nctemp2153);
if(nctemp2140)
{
{
i = (i + 1);
int nctemp2168=i;
char nctemp2171=(char)('+');
int nctemp2165 = (s->a[nctemp2168] ==nctemp2171);
int nctemp2178=i;
char nctemp2181=(char)('-');
int nctemp2175 = (s->a[nctemp2178] ==nctemp2181);
int nctemp2162 = (nctemp2165 || nctemp2175);
if(nctemp2162)
{
{
int nctemp2187=i;
char nctemp2190=(char)('-');
int nctemp2184 = (s->a[nctemp2187] ==nctemp2190);
if(nctemp2184)
{
{
esign =  -1;
}
}
i = (i + 1);
}
}
int nctemp2199=i;
int nctemp2196=(int)(s->a[nctemp2199]);
int nctemp2194= nctemp2196;
int nctemp2201=LibeIsdigit(nctemp2194);
int nctemp2202=nctemp2201;
while(nctemp2202)
{{
{
int nctemp2217 = 10 * exponent;
int nctemp2222=i;
int nctemp2219=(int)(s->a[nctemp2222]);
int nctemp2224 = nctemp2217 + nctemp2219;
int nctemp2226 = nctemp2224 - '0';
exponent =nctemp2226;
i = (i + 1);
}
}
int nctemp2233=i;
int nctemp2230=(int)(s->a[nctemp2233]);
int nctemp2228= nctemp2230;
int nctemp2235=LibeIsdigit(nctemp2228);
nctemp2202=nctemp2235;}}
}
float nctemp2244=(float)(sign);
float nctemp2248 = nctemp2244 * val;
float nctemp2250=(float)(power);
float nctemp2253 = nctemp2248 / nctemp2250;
float nctemp2237= nctemp2253;
int nctemp2259 = esign * exponent;
int nctemp2254= nctemp2259;
float nctemp2260=LibeFscale(nctemp2237,nctemp2254);
return nctemp2260;
}
}
int LibeFtoaf (int mant,int nexp,int nfield,int nfrac,nctempchar1 *s)
{
nctempchar1 *t;
int sign;
int i;
int tp;
int l;
{
int nctemp2261 = (mant < 0);
if(nctemp2261)
{
{
sign =  -1;
mant =  -mant;
}
}
else{
{
sign = 1;
}
}
int nctemp2268=s->d[0];int nctemp2277 = nfield + 1;
int nctemp2265 = (nctemp2268 < nctemp2277);
if(nctemp2265)
{
{
return 0;
}
}
l = (((nexp + 1) + 1) + nfrac);
int nctemp2279 = (sign < 0);
if(nctemp2279)
{
{
l = (l + 1);
}
}
int nctemp2283 = (nfield < l);
if(nctemp2283)
{
{
for(i = 0;i < nfield;i = (i + 1)){
{
int nctemp2290=i;
char nctemp2293=(char)('*');
s->a[nctemp2290] =nctemp2293;
}
}
int nctemp2299=nfield;
char nctemp2302=(char)(0);
s->a[nctemp2299] =nctemp2302;
return 0;
}
}
else{
{
tp = (nfield - l);
}
}
int nctemp2317 = 6 + 1;
int nctemp2312=nctemp2317;
nctempchar1 *nctemp2311;
nctemp2311=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp2322 = 6 + 1;
nctemp2311->d[0]=nctemp2322;
nctemp2311->a=(char *)RunMalloc(sizeof(char)*nctemp2312);
t=nctemp2311;
int nctemp2324= mant;
nctempchar1* nctemp2326= t;
int nctemp2329=LibeItoa(nctemp2324,nctemp2326);
for(i = 0;i < tp;i = (i + 1)){
{
int nctemp2333=i;
char nctemp2336=(char)(' ');
s->a[nctemp2333] =nctemp2336;
}
}
int nctemp2339 = (nexp >= 0);
if(nctemp2339)
{
{
int nctemp2346= -1;
int nctemp2343 = (sign ==nctemp2346);
if(nctemp2343)
{
{
int nctemp2350=tp;
char nctemp2353=(char)('-');
s->a[nctemp2350] =nctemp2353;
tp = (tp + 1);
}
}
for(i = 0;i <= nexp;i = (i + 1)){
{
s->a[i + tp] = t->a[i];
}
}
int nctemp2356 = (nfrac > 0);
if(nctemp2356)
{
{
int nctemp2371 = tp + nexp;
int nctemp2373 = nctemp2371 + 1;
int nctemp2363=nctemp2373;
char nctemp2375=(char)('.');
s->a[nctemp2363] =nctemp2375;
}
}
for(i = 0;i < nfrac;i = (i + 1)){
{
int nctemp2378 = (mant ==0);
if(nctemp2378)
{
{
int nctemp2399 = tp + nexp;
int nctemp2401 = nctemp2399 + 1;
int nctemp2403 = nctemp2401 + 1;
int nctemp2405 = nctemp2403 + i;
int nctemp2385=nctemp2405;
char nctemp2407=(char)('0');
s->a[nctemp2385] =nctemp2407;
}
}
else{
{
s->a[(((tp + nexp) + 1) + 1) + i] = t->a[(nexp + 1) + i];
}
}
}
}
int nctemp2410 = (nfrac > 0);
if(nctemp2410)
{
{
int nctemp2431 = tp + nexp;
int nctemp2433 = nctemp2431 + 1;
int nctemp2435 = nctemp2433 + 1;
int nctemp2437 = nctemp2435 + nfrac;
int nctemp2417=nctemp2437;
char nctemp2439=(char)(0);
s->a[nctemp2417] =nctemp2439;
}
}
else{
{
int nctemp2453 = tp + nexp;
int nctemp2455 = nctemp2453 + 1;
int nctemp2445=nctemp2455;
char nctemp2457=(char)(0);
s->a[nctemp2445] =nctemp2457;
}
}
}
}
else{
{
nexp =  -nexp;
int nctemp2463= -1;
int nctemp2460 = (sign ==nctemp2463);
if(nctemp2460)
{
{
int nctemp2467=tp;
char nctemp2470=(char)('-');
s->a[nctemp2467] =nctemp2470;
tp = (tp + 1);
}
}
int nctemp2476=tp;
char nctemp2479=(char)('0');
s->a[nctemp2476] =nctemp2479;
int nctemp2490 = tp + 1;
int nctemp2485=nctemp2490;
char nctemp2492=(char)('.');
s->a[nctemp2485] =nctemp2492;
for(i = 0;i < (nexp - 1);i = (i + 1)){
{
int nctemp2506 = i + tp;
int nctemp2508 = nctemp2506 + 2;
int nctemp2498=nctemp2508;
char nctemp2510=(char)('0');
s->a[nctemp2498] =nctemp2510;
}
}
for(i = 0;i < ((nfrac - nexp) + 1);i = (i + 1)){
{
s->a[(((tp + 2) + i) + nexp) - 1] = t->a[i];
}
}
int nctemp2524 = tp + 2;
int nctemp2526 = nctemp2524 + nfrac;
int nctemp2516=nctemp2526;
char nctemp2528=(char)(0);
s->a[nctemp2516] =nctemp2528;
}
}
return 1;
}
}
int LibeFtoae (int mant,int nexp,int nfield,int nfrac,nctempchar1 *s)
{
int tp;
int sign;
int i;
int l;
nctempchar1 *t;
{
int nctemp2532 = (mant < 0);
if(nctemp2532)
{
{
mant =  -mant;
sign =  -1;
}
}
else{
{
sign = 1;
}
}
int nctemp2539=s->d[0];int nctemp2566 = 1 + 1;
int nctemp2568 = nctemp2566 + 1;
int nctemp2570 = nctemp2568 + nfrac;
int nctemp2572 = nctemp2570 + 1;
int nctemp2574 = nctemp2572 + 1;
int nctemp2576 = nctemp2574 + 2;
int nctemp2578 = nctemp2576 + 1;
int nctemp2536 = (nctemp2539 < nctemp2578);
if(nctemp2536)
{
{
return 0;
}
}
int nctemp2588=s->d[0];int nctemp2586=nctemp2588;
nctempchar1 *nctemp2585;
nctemp2585=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp2593=s->d[0];nctemp2585->d[0]=nctemp2593;
nctemp2585->a=(char *)RunMalloc(sizeof(char)*nctemp2586);
t=nctemp2585;
l = ((((((1 + 1) + nfrac) + 1) + 1) + 2) + 1);
int nctemp2597 = (sign < 0);
if(nctemp2597)
{
{
l = (l + 1);
}
}
int nctemp2601 = (nfield < l);
if(nctemp2601)
{
{
for(i = 0;i < nfield;i = (i + 1)){
{
int nctemp2608=i;
char nctemp2611=(char)('*');
s->a[nctemp2608] =nctemp2611;
}
}
int nctemp2617=nfield;
char nctemp2620=(char)(0);
s->a[nctemp2617] =nctemp2620;
return 0;
}
}
else{
{
tp = (nfield - l);
}
}
for(i = 0;i < tp;i = (i + 1)){
{
int nctemp2627=i;
char nctemp2630=(char)(' ');
s->a[nctemp2627] =nctemp2630;
}
}
int nctemp2634= mant;
nctempchar1* nctemp2636= t;
int nctemp2639=LibeItoa(nctemp2634,nctemp2636);
int nctemp2640 = (sign < 0);
if(nctemp2640)
{
{
int nctemp2647=tp;
char nctemp2650=(char)('-');
s->a[nctemp2647] =nctemp2650;
tp = (tp + 1);
}
}
s->a[tp] = t->a[0];
int nctemp2661 = tp + 1;
int nctemp2656=nctemp2661;
char nctemp2663=(char)('.');
s->a[nctemp2656] =nctemp2663;
for(i = 0;i < nfrac;i = (i + 1)){
{
s->a[(tp + 2) + i] = t->a[i + 1];
}
}
int nctemp2677 = tp + 2;
int nctemp2679 = nctemp2677 + nfrac;
int nctemp2669=nctemp2679;
char nctemp2681=(char)(0);
s->a[nctemp2669] =nctemp2681;
sign = 1;
int nctemp2684 = (nexp < 0);
if(nctemp2684)
{
{
sign =  -1;
nexp =  -nexp;
}
}
struct nctempchar1 *nctemp2691;
static struct nctempchar1 nctemp2692 = {{ 2}, (char*)"e\0"};
nctemp2691=&nctemp2692;
nctempchar1* nctemp2689= nctemp2691;
nctempchar1* nctemp2693= s;
int nctemp2696=LibeStrcat(nctemp2689,nctemp2693);
int nctemp2697 = (sign > 0);
if(nctemp2697)
{
{
struct nctempchar1 *nctemp2704;
static struct nctempchar1 nctemp2705 = {{ 2}, (char*)"+\0"};
nctemp2704=&nctemp2705;
nctempchar1* nctemp2702= nctemp2704;
nctempchar1* nctemp2706= s;
int nctemp2709=LibeStrcat(nctemp2702,nctemp2706);
}
}
else{
{
struct nctempchar1 *nctemp2713;
static struct nctempchar1 nctemp2714 = {{ 2}, (char*)"-\0"};
nctemp2713=&nctemp2714;
nctempchar1* nctemp2711= nctemp2713;
nctempchar1* nctemp2715= s;
int nctemp2718=LibeStrcat(nctemp2711,nctemp2715);
}
}
int nctemp2720= nexp;
nctempchar1* nctemp2722= t;
int nctemp2725=LibeItoa(nctemp2720,nctemp2722);
nctempchar1* nctemp2729= t;
int nctemp2732=LibeStrlen(nctemp2729);
int nctemp2726 = (nctemp2732 ==1);
if(nctemp2726)
{
{
struct nctempchar1 *nctemp2737;
static struct nctempchar1 nctemp2738 = {{ 2}, (char*)"0\0"};
nctemp2737=&nctemp2738;
nctempchar1* nctemp2735= nctemp2737;
nctempchar1* nctemp2739= s;
int nctemp2742=LibeStrcat(nctemp2735,nctemp2739);
}
}
nctempchar1* nctemp2744= t;
nctempchar1* nctemp2747= s;
int nctemp2750=LibeStrcat(nctemp2744,nctemp2747);
RunFree(t->a);
RunFree(t);
return 1;
}
}
int LibeFtoa (float f,nctempchar1 *fmt,nctempchar1 *s)
{
int nexp;
int mant;
int c;
int p;
int q;
int l;
int mode;
int ndigit;
int nfield;
int nfrac;
{
int nctemp2755 = (f !=f);
if(nctemp2755)
{
{
int nctemp2762=0;
char nctemp2765=(char)('N');
s->a[nctemp2762] =nctemp2765;
int nctemp2771=1;
char nctemp2774=(char)('a');
s->a[nctemp2771] =nctemp2774;
int nctemp2780=2;
char nctemp2783=(char)('N');
s->a[nctemp2780] =nctemp2783;
int nctemp2789=3;
char nctemp2792=(char)(0);
s->a[nctemp2789] =nctemp2792;
return 1;
}
}
int nctemp2799=s->d[0];int nctemp2804=fmt->d[0];int nctemp2796 = (nctemp2799 < nctemp2804);
if(nctemp2796)
{
{
return 0;
}
}
int nctemp2816=fmt->d[0];int nctemp2821 = nctemp2816 - 2;
l =nctemp2821;
p = 0;
q = 0;
int nctemp2829=p;
int nctemp2826=(int)(fmt->a[nctemp2829]);
c =nctemp2826;
int nctemp2831 = (c =='g');
if(nctemp2831)
{
{
mode = 'g';
}
}
else{
{
int nctemp2838= c;
int nctemp2840=LibeIsdigit(nctemp2838);
int nctemp2835 = (nctemp2840 ==1);
if(nctemp2835)
{
{
int nctemp2845= c;
int nctemp2847=LibeIsdigit(nctemp2845);
int nctemp2842 = (nctemp2847 ==1);
int nctemp2849=nctemp2842;
while(nctemp2849)
{{
{
s->a[q] = fmt->a[p];
int nctemp2861 = p + 1;
p =nctemp2861;
int nctemp2850 = (p > l);
if(nctemp2850)
{
{
return 0;
}
}
q = (q + 1);
int nctemp2871=p;
int nctemp2868=(int)(fmt->a[nctemp2871]);
c =nctemp2868;
}
}
int nctemp2876= c;
int nctemp2878=LibeIsdigit(nctemp2876);
int nctemp2873 = (nctemp2878 ==1);
nctemp2849=nctemp2873;}int nctemp2883=q;
char nctemp2886=(char)(0);
s->a[nctemp2883] =nctemp2886;
nctempchar1* nctemp2893= s;
int nctemp2896=LibeAtoi(nctemp2893);
nfield =nctemp2896;
}
}
else{
{
return 0;
}
}
int nctemp2898 = (c !='.');
if(nctemp2898)
{
{
return 0;
}
}
int nctemp2914 = p + 1;
p =nctemp2914;
int nctemp2903 = (p > l);
if(nctemp2903)
{
{
return 0;
}
}
int nctemp2924=p;
int nctemp2921=(int)(fmt->a[nctemp2924]);
c =nctemp2921;
q = 0;
int nctemp2929= c;
int nctemp2931=LibeIsdigit(nctemp2929);
int nctemp2926 = (nctemp2931 ==1);
if(nctemp2926)
{
{
int nctemp2936= c;
int nctemp2938=LibeIsdigit(nctemp2936);
int nctemp2933 = (nctemp2938 ==1);
int nctemp2940=nctemp2933;
while(nctemp2940)
{{
{
s->a[q] = fmt->a[p];
int nctemp2952 = p + 1;
p =nctemp2952;
int nctemp2941 = (p > l);
if(nctemp2941)
{
{
return 0;
}
}
q = (q + 1);
int nctemp2962=p;
int nctemp2959=(int)(fmt->a[nctemp2962]);
c =nctemp2959;
}
}
int nctemp2967= c;
int nctemp2969=LibeIsdigit(nctemp2967);
int nctemp2964 = (nctemp2969 ==1);
nctemp2940=nctemp2964;}int nctemp2974=q;
char nctemp2977=(char)(0);
s->a[nctemp2974] =nctemp2977;
nctempchar1* nctemp2984= s;
int nctemp2987=LibeAtoi(nctemp2984);
nfrac =nctemp2987;
}
}
else{
{
return 0;
}
}
int nctemp2989 = (c =='f');
if(nctemp2989)
{
{
mode = 'f';
}
}
else{
{
int nctemp2993 = (c =='e');
if(nctemp2993)
{
{
mode = 'e';
}
}
else{
{
return 0;
}
}
}
}
}
}
int nctemp2998 = (mode =='g');
if(nctemp2998)
{
{
float nctemp3006= f;
int nctemp3008=LibeGetmaxdig(nctemp3006);
nfrac =nctemp3008;
nfield = (((((((1 + 1) + 1) + 1) + nfrac) + 1) + 1) + 2);
ndigit = (nfrac + 1);
float nctemp3013= f;
int nctemp3015= ndigit;
int nctemp3017=LibeGetfman(nctemp3013,nctemp3015);
mant =nctemp3017;
float nctemp3022= f;
int nctemp3024=LibeGetfexp(nctemp3022);
nexp =nctemp3024;
int nctemp3026= mant;
int nctemp3028= nexp;
int nctemp3030= nfield;
int nctemp3032= nfrac;
nctempchar1* nctemp3034= s;
int nctemp3037=LibeFtoae(nctemp3026,nctemp3028,nctemp3030,nctemp3032,nctemp3034);
}
}
else{
{
int nctemp3038 = (mode =='e');
if(nctemp3038)
{
{
ndigit = (nfrac + 1);
float nctemp3046= f;
int nctemp3048= ndigit;
int nctemp3050=LibeGetfman(nctemp3046,nctemp3048);
mant =nctemp3050;
float nctemp3055= f;
int nctemp3057=LibeGetfexp(nctemp3055);
nexp =nctemp3057;
int nctemp3059= mant;
int nctemp3061= nexp;
int nctemp3063= nfield;
int nctemp3065= nfrac;
nctempchar1* nctemp3067= s;
int nctemp3070=LibeFtoae(nctemp3059,nctemp3061,nctemp3063,nctemp3065,nctemp3067);
}
}
else{
{
int nctemp3071 = (mode =='f');
if(nctemp3071)
{
{
float nctemp3079= f;
int nctemp3081=LibeGetfexp(nctemp3079);
nexp =nctemp3081;
ndigit = ((nexp + nfrac) + 1);
float nctemp3086= f;
int nctemp3088= ndigit;
int nctemp3090=LibeGetfman(nctemp3086,nctemp3088);
mant =nctemp3090;
int nctemp3092= mant;
int nctemp3094= nexp;
int nctemp3096= nfield;
int nctemp3098= nfrac;
nctempchar1* nctemp3100= s;
int nctemp3103=LibeFtoaf(nctemp3092,nctemp3094,nctemp3096,nctemp3098,nctemp3100);
}
}
}
}
}
}
return 1;
}
}
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
static struct nctempLibeFdescr1 *LibeFarr;
static nctempchar1 *LibeTmpstr;
int LibeIoinit ()
{
int i;
{
int nctemp3111=40;
struct nctempLibeFdescr1 *nctemp3110;
nctemp3110=(struct nctempLibeFdescr1*)RunMalloc(sizeof(struct nctempLibeFdescr1));
nctemp3110->d[0]=40;
nctemp3110->a=(struct LibeFdescr*)RunMalloc(sizeof(struct LibeFdescr)*nctemp3111);
LibeFarr=nctemp3110;
nctempLibeFdescr1 *nctemp3115 =LibeFarr;
int nctemp3114 =(nctemp3115==0);
if(nctemp3114)
{
{
LibeErrno = -100;
return 0;
}
}
for(i = 0;i < 40;i = (i + 1)){
{
LibeFarr->a[i].cnt = 0;
LibeFarr->a[i].ptr = 0;
LibeFarr->a[i].bufsize = 0;
LibeFarr->a[i].base  = 0;
LibeFarr->a[i].readflg = 0;
LibeFarr->a[i].writflg = 0;
LibeFarr->a[i].unbflg = 0;
LibeFarr->a[i].errflg = 1;
LibeFarr->a[i].eoflg = 0;
LibeFarr->a[i].fd = 0;
}
}
LibeFarr->a[0].fd =  -1;
LibeFarr->a[0].readflg = 1;
LibeFarr->a[1].fd =  -1;
LibeFarr->a[1].readflg = 1;
LibeFarr->a[2].fd = 0;
LibeFarr->a[2].readflg = 1;
LibeFarr->a[3].fd = 1;
LibeFarr->a[3].writflg = 1;
LibeFarr->a[4].fd = 2;
LibeFarr->a[4].writflg = 1;
int nctemp3126=64;
nctempchar1 *nctemp3125;
nctemp3125=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp3125->d[0]=64;
nctemp3125->a=(char *)RunMalloc(sizeof(char)*nctemp3126);
LibeTmpstr=nctemp3125;
nctempchar1 *nctemp3130 =LibeTmpstr;
int nctemp3129 =(nctemp3130==0);
if(nctemp3129)
{
{
LibeErrno = -100;
return 0;
}
}
return 1;
}
}
int LibeFlushbuff (int fp)
{
int st;
int size;
{
int nctemp3139=fp;
int nctemp3136 = (LibeFarr->a[nctemp3139].writflg !=1);
if(nctemp3136)
{
{
struct nctempchar1 *nctemp3147;
static struct nctempchar1 nctemp3148 = {{ 28}, (char*)"file not open for writing\n\0"};
nctemp3147=&nctemp3148;
LibeErrstr=nctemp3147;
LibeErrno = -110;
return 0;
}
}
int nctemp3153=fp;
int nctemp3150 = (LibeFarr->a[nctemp3153].unbflg ==1);
if(nctemp3150)
{
{
LibeFarr->a[fp].bufsize = 1;
}
}
else{
{
LibeFarr->a[fp].bufsize = 1024;
}
}
int nctemp3159=fp;
nctempchar1 *nctemp3157 =LibeFarr->a[nctemp3159].base;
int nctemp3156 =(nctemp3157==0);
if(nctemp3156)
{
{
size = LibeFarr->a[fp].bufsize;
int nctemp3169=fp;
int nctemp3174=size;
nctempchar1 *nctemp3173;
nctemp3173=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp3173->d[0]=size;
nctemp3173->a=(char *)RunMalloc(sizeof(char)*nctemp3174);
LibeFarr->a[nctemp3169].base=nctemp3173;
nctempchar1 *nctemp3164 =LibeFarr->a[nctemp3169].base;
int nctemp3163 =(nctemp3164==0);
if(nctemp3163)
{
{
struct nctempchar1 *nctemp3183;
static struct nctempchar1 nctemp3184 = {{ 24}, (char*)"can not allocate buffer\0"};
nctemp3183=&nctemp3184;
LibeErrstr=nctemp3183;
LibeErrno = -113;
return 0;
}
}
}
}
LibeFarr->a[fp].ptr = 0;
int nctemp3192=fp;
int nctemp3190= LibeFarr->a[nctemp3192].fd;
int nctemp3196=fp;
int nctemp3194= LibeFarr->a[nctemp3196].cnt;
int nctemp3200=fp;
nctempchar1* nctemp3198= LibeFarr->a[nctemp3200].base;
int nctemp3203=RunWrite(nctemp3190,nctemp3194,nctemp3198);
st =nctemp3203;
int nctemp3208=fp;
int nctemp3204 = (st !=LibeFarr->a[nctemp3208].cnt);
if(nctemp3204)
{
{
LibeFarr->a[fp].errflg = 1;
struct nctempchar1 *nctemp3215;
static struct nctempchar1 nctemp3216 = {{ 12}, (char*)"write error\0"};
nctemp3215=&nctemp3216;
LibeErrstr=nctemp3215;
LibeErrno = -112;
LibeFarr->a[fp].cnt = 0;
LibeFarr->a[fp].ptr = 0;
return 0;
}
}
else{
{
LibeFarr->a[fp].cnt = 0;
LibeFarr->a[fp].ptr = 0;
return 1;
}
}
}
}
int LibeFillbuff (int fp)
{
int size;
int rval;
{
int nctemp3222=fp;
int nctemp3219 = (LibeFarr->a[nctemp3222].readflg !=1);
if(nctemp3219)
{
{
struct nctempchar1 *nctemp3230;
static struct nctempchar1 nctemp3231 = {{ 28}, (char*)"file not open for reading\n\0"};
nctemp3230=&nctemp3231;
LibeErrstr=nctemp3230;
LibeErrno = -110;
return -1;
}
}
int nctemp3236=fp;
int nctemp3233 = (LibeFarr->a[nctemp3236].unbflg ==1);
if(nctemp3233)
{
{
LibeFarr->a[fp].bufsize = 1;
}
}
else{
{
LibeFarr->a[fp].bufsize = 1024;
}
}
int nctemp3242=fp;
nctempchar1 *nctemp3240 =LibeFarr->a[nctemp3242].base;
int nctemp3239 =(nctemp3240==0);
if(nctemp3239)
{
{
size = LibeFarr->a[fp].bufsize;
int nctemp3252=fp;
int nctemp3257=size;
nctempchar1 *nctemp3256;
nctemp3256=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp3256->d[0]=size;
nctemp3256->a=(char *)RunMalloc(sizeof(char)*nctemp3257);
LibeFarr->a[nctemp3252].base=nctemp3256;
nctempchar1 *nctemp3247 =LibeFarr->a[nctemp3252].base;
int nctemp3246 =(nctemp3247==0);
if(nctemp3246)
{
{
struct nctempchar1 *nctemp3266;
static struct nctempchar1 nctemp3267 = {{ 24}, (char*)"Can not allocate buffer\0"};
nctemp3266=&nctemp3267;
LibeErrstr=nctemp3266;
LibeErrno = -113;
return -1;
}
}
}
}
LibeFarr->a[fp].ptr = 0;
int nctemp3272=fp;
int nctemp3277=fp;
int nctemp3275= LibeFarr->a[nctemp3277].fd;
int nctemp3281=fp;
int nctemp3279= LibeFarr->a[nctemp3281].bufsize;
int nctemp3285=fp;
nctempchar1* nctemp3283= LibeFarr->a[nctemp3285].base;
int nctemp3288=RunRead(nctemp3275,nctemp3279,nctemp3283);
LibeFarr->a[nctemp3272].cnt =nctemp3288;
int nctemp3292=fp;
int nctemp3289 = (LibeFarr->a[nctemp3292].cnt <= 0);
if(nctemp3289)
{
{
int nctemp3298=fp;
int nctemp3295 = (LibeFarr->a[nctemp3298].cnt ==-1);
if(nctemp3295)
{
{
LibeFarr->a[fp].eoflg = 1;
rval = -1;
}
}
else{
{
LibeFarr->a[fp].errflg = 1;
struct nctempchar1 *nctemp3306;
static struct nctempchar1 nctemp3307 = {{ 11}, (char*)"read error\0"};
nctemp3306=&nctemp3307;
LibeErrstr=nctemp3306;
LibeErrno = -111;
rval = -1;
}
}
LibeFarr->a[fp].cnt = 0;
return rval;
}
}
LibeFarr->a[fp].ptr = (LibeFarr->a[fp].ptr + 1);
LibeFarr->a[fp].cnt = (LibeFarr->a[fp].cnt - 1);
int nctemp3313=fp;
int nctemp3319=fp;
int nctemp3322 = LibeFarr->a[nctemp3319].ptr - 1;
int nctemp3315=nctemp3322;
int nctemp3310=(int)(LibeFarr->a[nctemp3313].base->a[nctemp3315]);
return nctemp3310;
}
}
int LibeFlush (int fp)
{
{
int nctemp3324= fp;
int nctemp3326=LibeFlushbuff(nctemp3324);
return nctemp3326;
}
}
int LibeOpen (nctempchar1 *name,nctempchar1 *mode)
{
int fd;
int slot;
int i;
{
int nctemp3330=0;
char nctemp3333=(char)('r');
int nctemp3327 = (mode->a[nctemp3330] !=nctemp3333);
if(nctemp3327)
{
{
int nctemp3339=0;
char nctemp3342=(char)('w');
int nctemp3336 = (mode->a[nctemp3339] !=nctemp3342);
if(nctemp3336)
{
{
int nctemp3348=0;
char nctemp3351=(char)('a');
int nctemp3345 = (mode->a[nctemp3348] !=nctemp3351);
if(nctemp3345)
{
{
struct nctempchar1 *nctemp3359;
static struct nctempchar1 nctemp3360 = {{ 20}, (char*)"Unknown file mode\n\0"};
nctemp3359=&nctemp3360;
LibeErrstr=nctemp3359;
LibeErrno = -103;
return 0;
}
}
}
}
}
}
i = 0;
slot =  -1;
int nctemp3365 = (slot < 0);
int nctemp3370 = (i < 40);
int nctemp3362 = (nctemp3365 && nctemp3370);
int nctemp3374=nctemp3362;
while(nctemp3374)
{{
{
int nctemp3381=i;
int nctemp3378 = (LibeFarr->a[nctemp3381].readflg ==0);
int nctemp3388=i;
int nctemp3385 = (LibeFarr->a[nctemp3388].writflg ==0);
int nctemp3375 = (nctemp3378 && nctemp3385);
if(nctemp3375)
{
{
slot = i;
}
}
i = (i + 1);
}
}
int nctemp3394 = (slot < 0);
int nctemp3399 = (i < 40);
int nctemp3391 = (nctemp3394 && nctemp3399);
nctemp3374=nctemp3391;}int nctemp3403 = (slot < 0);
if(nctemp3403)
{
{
struct nctempchar1 *nctemp3412;
static struct nctempchar1 nctemp3413 = {{ 22}, (char*)"Too many open files\n\0"};
nctemp3412=&nctemp3413;
LibeErrstr=nctemp3412;
LibeErrno = -104;
return 0;
}
}
int nctemp3421=0;
int nctemp3418=(int)(mode->a[nctemp3421]);
int nctemp3415 = (nctemp3418 =='w');
if(nctemp3415)
{
{
nctempchar1* nctemp3428= name;
int nctemp3431=RunCreate(nctemp3428);
fd =nctemp3431;
}
}
else{
{
int nctemp3438=0;
int nctemp3435=(int)(mode->a[nctemp3438]);
int nctemp3432 = (nctemp3435 =='a');
if(nctemp3432)
{
{
nctempchar1* nctemp3448= name;
nctempchar1* nctemp3451= mode;
int nctemp3454=RunOpen(nctemp3448,nctemp3451);
fd =nctemp3454;
int nctemp3441 = (fd ==0);
if(nctemp3441)
{
{
nctempchar1* nctemp3460= name;
int nctemp3463=RunCreate(nctemp3460);
fd =nctemp3463;
}
}
else{
{
nctempchar1* nctemp3468= name;
nctempchar1* nctemp3471= mode;
int nctemp3474=RunOpen(nctemp3468,nctemp3471);
fd =nctemp3474;
}
}
}
}
else{
{
int nctemp3481=0;
int nctemp3478=(int)(mode->a[nctemp3481]);
int nctemp3475 = (nctemp3478 =='r');
if(nctemp3475)
{
{
nctempchar1* nctemp3488= name;
nctempchar1* nctemp3491= mode;
int nctemp3494=RunOpen(nctemp3488,nctemp3491);
fd =nctemp3494;
}
}
else{
{
struct nctempchar1 *nctemp3500;
static struct nctempchar1 nctemp3501 = {{ 20}, (char*)"Unknown file mode\n\0"};
nctemp3500=&nctemp3501;
LibeErrstr=nctemp3500;
LibeErrno = -103;
return 0;
}
}
}
}
}
}
int nctemp3503 = (fd ==0);
if(nctemp3503)
{
{
struct nctempchar1 *nctemp3512;
static struct nctempchar1 nctemp3513 = {{ 20}, (char*)"Could not open file\0"};
nctemp3512=&nctemp3513;
LibeErrstr=nctemp3512;
LibeErrno = -105;
return 0;
}
}
LibeFarr->a[slot].fd = fd;
LibeFarr->a[slot].cnt = 0;
LibeFarr->a[slot].base  = 0;
int nctemp3521=0;
int nctemp3518=(int)(mode->a[nctemp3521]);
int nctemp3515 = (nctemp3518 =='r');
if(nctemp3515)
{
{
LibeFarr->a[slot].readflg = 1;
}
}
else{
{
LibeFarr->a[slot].writflg = 1;
}
}
return slot;
}
}
int LibeClose (int fp)
{
int fd;
int stat;
{
int nctemp3528=fp;
nctempchar1 *nctemp3526 =LibeFarr->a[nctemp3528].base;
int nctemp3525 =(nctemp3526!=0);
if(nctemp3525)
{
{
int nctemp3533= fp;
int nctemp3535=LibeFlush(nctemp3533);
}
}
fd = LibeFarr->a[fp].fd;
int nctemp3540= fd;
int nctemp3542=RunClose(nctemp3540);
stat =nctemp3542;
int nctemp3543 = (stat ==0);
if(nctemp3543)
{
{
LibeFarr->a[fp].errflg = 1;
struct nctempchar1 *nctemp3552;
static struct nctempchar1 nctemp3553 = {{ 21}, (char*)"Could not close file\0"};
nctemp3552=&nctemp3553;
LibeErrstr=nctemp3552;
LibeErrno = -106;
return 0;
}
}
LibeFarr->a[fp].cnt = 0;
LibeFarr->a[fp].ptr = 0;
LibeFarr->a[fp].bufsize = 0;
int nctemp3558=fp;
nctempchar1 *nctemp3556 =LibeFarr->a[nctemp3558].base;
int nctemp3555 =(nctemp3556!=0);
if(nctemp3555)
{
{
int nctemp3564=fp;
RunFree(LibeFarr->a[nctemp3564].base->a);
RunFree(LibeFarr->a[nctemp3564].base);
}
}
LibeFarr->a[fp].base  = 0;
LibeFarr->a[fp].readflg = 0;
LibeFarr->a[fp].writflg = 0;
LibeFarr->a[fp].unbflg = 0;
LibeFarr->a[fp].errflg = 0;
LibeFarr->a[fp].eoflg = 0;
LibeFarr->a[fp].fd = 0;
return 1;
}
}
int LibeGetc (int fp)
{
{
int nctemp3571=fp;
int nctemp3568 = (LibeFarr->a[nctemp3571].cnt ==0);
if(nctemp3568)
{
{
int nctemp3575= fp;
int nctemp3577=LibeFillbuff(nctemp3575);
return nctemp3577;
}
}
else{
{
LibeFarr->a[fp].cnt = (LibeFarr->a[fp].cnt - 1);
LibeFarr->a[fp].ptr = (LibeFarr->a[fp].ptr + 1);
int nctemp3582=fp;
int nctemp3588=fp;
int nctemp3591 = LibeFarr->a[nctemp3588].ptr - 1;
int nctemp3584=nctemp3591;
int nctemp3579=(int)(LibeFarr->a[nctemp3582].base->a[nctemp3584]);
return nctemp3579;
}
}
}
}
int LibeUngetc (int fp)
{
{
int nctemp3595=fp;
int nctemp3592 = (LibeFarr->a[nctemp3595].eoflg ==1);
if(nctemp3592)
{
{
return -1;
}
}
int nctemp3602=fp;
int nctemp3605=fp;
int nctemp3599 = (LibeFarr->a[nctemp3602].cnt < LibeFarr->a[nctemp3605].bufsize);
if(nctemp3599)
{
{
LibeFarr->a[fp].cnt = (LibeFarr->a[fp].cnt + 1);
LibeFarr->a[fp].ptr = (LibeFarr->a[fp].ptr - 1);
int nctemp3610=fp;
int nctemp3616=fp;
int nctemp3619 = LibeFarr->a[nctemp3616].bufsize - 1;
int nctemp3607 = (LibeFarr->a[nctemp3610].ptr ==nctemp3619);
if(nctemp3607)
{
{
int nctemp3624=fp;
int nctemp3628=fp;
int nctemp3626=LibeFarr->a[nctemp3628].ptr;
int nctemp3621=(int)(LibeFarr->a[nctemp3624].base->a[nctemp3626]);
return nctemp3621;
}
}
else{
{
int nctemp3634=fp;
int nctemp3640=fp;
int nctemp3643 = LibeFarr->a[nctemp3640].ptr + 1;
int nctemp3636=nctemp3643;
int nctemp3631=(int)(LibeFarr->a[nctemp3634].base->a[nctemp3636]);
return nctemp3631;
}
}
}
}
else{
{
struct nctempchar1 *nctemp3649;
static struct nctempchar1 nctemp3650 = {{ 15}, (char*)"Pushback error\0"};
nctemp3649=&nctemp3650;
LibeErrstr=nctemp3649;
LibeErrno = -107;
return -1;
}
}
}
}
int LibeGetw (int fp,nctempchar1 *text)
{
int p;
int ch;
int lim;
{
int nctemp3656=text->d[0];lim =nctemp3656;
p = 0;
int nctemp3661=LibeClearerr();
int nctemp3675= fp;
int nctemp3677=LibeGetc(nctemp3675);
ch =nctemp3677;
int nctemp3668 = (ch ==32);
int nctemp3680 = (ch ==9);
int nctemp3665 = (nctemp3668 || nctemp3680);
int nctemp3685 = (ch ==10);
int nctemp3662 = (nctemp3665 || nctemp3685);
int nctemp3689=nctemp3662;
while(nctemp3689)
{{
{
p = 0;
}
}
int nctemp3703= fp;
int nctemp3705=LibeGetc(nctemp3703);
ch =nctemp3705;
int nctemp3696 = (ch ==32);
int nctemp3708 = (ch ==9);
int nctemp3693 = (nctemp3696 || nctemp3708);
int nctemp3713 = (ch ==10);
int nctemp3690 = (nctemp3693 || nctemp3713);
nctemp3689=nctemp3690;}int nctemp3718= fp;
int nctemp3720=LibeUngetc(nctemp3718);
int nctemp3731= fp;
int nctemp3733=LibeGetc(nctemp3731);
ch =nctemp3733;
int nctemp3724 = (ch !=-1);
int nctemp3736 = (p < lim);
int nctemp3721 = (nctemp3724 && nctemp3736);
int nctemp3740=nctemp3721;
while(nctemp3740)
{{
{
int nctemp3747 = (ch ==32);
int nctemp3752 = (ch ==9);
int nctemp3744 = (nctemp3747 || nctemp3752);
int nctemp3757 = (ch ==10);
int nctemp3741 = (nctemp3744 || nctemp3757);
if(nctemp3741)
{
{
int nctemp3762= fp;
int nctemp3764=LibeUngetc(nctemp3762);
int nctemp3768=p;
char nctemp3771=(char)(0);
text->a[nctemp3768] =nctemp3771;
return 1;
}
}
else{
{
int nctemp3778=p;
char nctemp3781=(char)(ch);
text->a[nctemp3778] =nctemp3781;
p = (p + 1);
}
}
}
}
int nctemp3794= fp;
int nctemp3796=LibeGetc(nctemp3794);
ch =nctemp3796;
int nctemp3787 = (ch !=-1);
int nctemp3799 = (p < lim);
int nctemp3784 = (nctemp3787 && nctemp3799);
nctemp3740=nctemp3784;}int nctemp3803 = (p >= lim);
if(nctemp3803)
{
{
return 0;
}
}
else{
{
int nctemp3808 = (ch ==-1);
if(nctemp3808)
{
{
return -1;
}
}
else{
{
return 1;
}
}
}
}
}
}
int LibePutc (int fp,int c)
{
int rval;
{
int nctemp3817=fp;
int nctemp3814 = (LibeFarr->a[nctemp3817].cnt ==0);
if(nctemp3814)
{
{
int nctemp3821= fp;
int nctemp3823=LibeFlushbuff(nctemp3821);
}
}
int nctemp3827=fp;
int nctemp3830=fp;
int nctemp3824 = (LibeFarr->a[nctemp3827].cnt ==LibeFarr->a[nctemp3830].bufsize);
if(nctemp3824)
{
{
int nctemp3836= fp;
int nctemp3838=LibeFlushbuff(nctemp3836);
rval =nctemp3838;
int nctemp3842=fp;
int nctemp3846=fp;
int nctemp3844=LibeFarr->a[nctemp3846].ptr;
char nctemp3849=(char)(c);
LibeFarr->a[nctemp3842].base->a[nctemp3844] =nctemp3849;
LibeFarr->a[fp].ptr = (LibeFarr->a[fp].ptr + 1);
LibeFarr->a[fp].cnt = (LibeFarr->a[fp].cnt + 1);
return rval;
}
}
else{
{
int nctemp3856=fp;
int nctemp3860=fp;
int nctemp3858=LibeFarr->a[nctemp3860].ptr;
char nctemp3863=(char)(c);
LibeFarr->a[nctemp3856].base->a[nctemp3858] =nctemp3863;
LibeFarr->a[fp].cnt = (LibeFarr->a[fp].cnt + 1);
LibeFarr->a[fp].ptr = (LibeFarr->a[fp].ptr + 1);
return 1;
}
}
}
}
int LibePuts (int fp,nctempchar1 *s)
{
int ls;
int i;
{
int nctemp3871=s->d[0];ls =nctemp3871;
i = 0;
int nctemp3884=i;
int nctemp3881=(int)(s->a[nctemp3884]);
int nctemp3878 = (nctemp3881 !=0);
int nctemp3888 = (i < ls);
int nctemp3875 = (nctemp3878 && nctemp3888);
int nctemp3892=nctemp3875;
while(nctemp3892)
{{
{
int nctemp3896= fp;
int nctemp3903=i;
int nctemp3900=(int)(s->a[nctemp3903]);
int nctemp3898= nctemp3900;
int nctemp3905=LibePutc(nctemp3896,nctemp3898);
int nctemp3893 = (nctemp3905 ==0);
if(nctemp3893)
{
{
struct nctempchar1 *nctemp3912;
static struct nctempchar1 nctemp3913 = {{ 12}, (char*)"write error\0"};
nctemp3912=&nctemp3913;
LibeErrstr=nctemp3912;
LibeErrno = 0;
return 0;
}
}
else{
{
i = (i + 1);
}
}
}
}
int nctemp3924=i;
int nctemp3921=(int)(s->a[nctemp3924]);
int nctemp3918 = (nctemp3921 !=0);
int nctemp3928 = (i < ls);
int nctemp3915 = (nctemp3918 && nctemp3928);
nctemp3892=nctemp3915;}int nctemp3933= fp;
int nctemp3935=LibeFlushbuff(nctemp3933);
return 1;
}
}
int LibePuti (int fp,int ival)
{
{
int nctemp3938= ival;
nctempchar1* nctemp3940= LibeTmpstr;
int nctemp3943=LibeItoa(nctemp3938,nctemp3940);
int nctemp3945= fp;
nctempchar1* nctemp3947= LibeTmpstr;
int nctemp3950=LibePuts(nctemp3945,nctemp3947);
return nctemp3950;
}
}
int LibePutf (int fp,float fval,nctempchar1 *form)
{
{
float nctemp3952= fval;
nctempchar1* nctemp3954= form;
nctempchar1* nctemp3957= LibeTmpstr;
int nctemp3960=LibeFtoa(nctemp3952,nctemp3954,nctemp3957);
int nctemp3962= fp;
nctempchar1* nctemp3964= LibeTmpstr;
int nctemp3967=LibePuts(nctemp3962,nctemp3964);
return nctemp3967;
}
}
int LibePs (nctempchar1 *s)
{
{
int nctemp3969= 3;
nctempchar1* nctemp3971= s;
int nctemp3974=LibePuts(nctemp3969,nctemp3971);
return 1;
}
}
int LibePi (int n)
{
{
int nctemp3977= 3;
int nctemp3979= n;
int nctemp3981=LibePuti(nctemp3977,nctemp3979);
return 1;
}
}
int LibePf (float r)
{
{
int nctemp3984= 3;
float nctemp3986= r;
struct nctempchar1 *nctemp3990;
static struct nctempchar1 nctemp3991 = {{ 2}, (char*)"g\0"};
nctemp3990=&nctemp3991;
nctempchar1* nctemp3988= nctemp3990;
int nctemp3992=LibePutf(nctemp3984,nctemp3986,nctemp3988);
return 1;
}
}
int LibeRead (int fp,int n,nctempchar1 *buffer)
{
int rval;
{
int nctemp3997=fp;
int nctemp3994 = (LibeFarr->a[nctemp3997].readflg !=1);
if(nctemp3994)
{
{
struct nctempchar1 *nctemp4005;
static struct nctempchar1 nctemp4006 = {{ 26}, (char*)"File not open for reading\0"};
nctemp4005=&nctemp4006;
LibeErrstr=nctemp4005;
LibeErrno = -109;
return -1;
}
}
int nctemp4012=buffer->d[0];int nctemp4008 = (n > nctemp4012);
if(nctemp4008)
{
{
LibeErrno = -108;
struct nctempchar1 *nctemp4021;
static struct nctempchar1 nctemp4022 = {{ 30}, (char*)"The buffer array is too small\0"};
nctemp4021=&nctemp4022;
LibeErrstr=nctemp4021;
return 0;
}
}
int nctemp4030=fp;
int nctemp4028= LibeFarr->a[nctemp4030].fd;
int nctemp4032= n;
nctempchar1* nctemp4034= buffer;
int nctemp4037=RunRead(nctemp4028,nctemp4032,nctemp4034);
rval =nctemp4037;
int nctemp4038 = (rval ==-1);
if(nctemp4038)
{
{
LibeFarr->a[fp].eoflg = 1;
rval = -1;
}
}
else{
{
int nctemp4042 = (rval ==0);
if(nctemp4042)
{
{
LibeFarr->a[fp].errflg = 1;
struct nctempchar1 *nctemp4051;
static struct nctempchar1 nctemp4052 = {{ 11}, (char*)"read error\0"};
nctemp4051=&nctemp4052;
LibeErrstr=nctemp4051;
LibeErrno = 0;
LibeFarr->a[fp].errflg = 0;
rval = 0;
}
}
}
}
return rval;
}
}
int LibeWrite (int fp,int n,nctempchar1 *buffer)
{
int rval;
{
int nctemp4058=buffer->d[0];int nctemp4054 = (n > nctemp4058);
if(nctemp4054)
{
{
LibeErrno = -108;
struct nctempchar1 *nctemp4067;
static struct nctempchar1 nctemp4068 = {{ 30}, (char*)"The buffer array is too small\0"};
nctemp4067=&nctemp4068;
LibeErrstr=nctemp4067;
return 0;
}
}
int nctemp4073=fp;
int nctemp4070 = (LibeFarr->a[nctemp4073].writflg !=1);
if(nctemp4070)
{
{
struct nctempchar1 *nctemp4081;
static struct nctempchar1 nctemp4082 = {{ 26}, (char*)"file not open for writing\0"};
nctemp4081=&nctemp4082;
LibeErrstr=nctemp4081;
LibeErrno = -110;
return 0;
}
}
int nctemp4090=fp;
int nctemp4088= LibeFarr->a[nctemp4090].fd;
int nctemp4092= n;
nctempchar1* nctemp4094= buffer;
int nctemp4097=RunWrite(nctemp4088,nctemp4092,nctemp4094);
rval =nctemp4097;
int nctemp4098 = (rval ==0);
if(nctemp4098)
{
{
LibeFarr->a[fp].errflg = 1;
struct nctempchar1 *nctemp4107;
static struct nctempchar1 nctemp4108 = {{ 12}, (char*)"write error\0"};
nctemp4107=&nctemp4108;
LibeErrstr=nctemp4107;
LibeErrno = 0;
LibeFarr->a[fp].errflg = 0;
rval = 0;
}
}
return rval;
}
}
int LibeSeek (int fp,int pos,int flag)
{
int rval;
{
int nctemp4116=fp;
int nctemp4114= LibeFarr->a[nctemp4116].fd;
int nctemp4118= pos;
int nctemp4120= flag;
int nctemp4122=RunSeek(nctemp4114,nctemp4118,nctemp4120);
rval =nctemp4122;
int nctemp4123 = (rval ==0);
if(nctemp4123)
{
{
LibeFarr->a[fp].errflg = 1;
struct nctempchar1 *nctemp4132;
static struct nctempchar1 nctemp4133 = {{ 11}, (char*)"Seek error\0"};
nctemp4132=&nctemp4133;
LibeErrstr=nctemp4132;
LibeErrno = 0;
LibeFarr->a[fp].errflg = 0;
rval = 0;
}
}
return rval;
}
}
int LibeIodelete ()
{
int stat;
int fd;
int i;
{
RunFree(LibeTmpstr->a);
RunFree(LibeTmpstr);
stat = 1;
for(i = 0;i < 40;i = (i + 1)){
{
int nctemp4141=i;
nctempchar1 *nctemp4139 =LibeFarr->a[nctemp4141].base;
int nctemp4138 =(nctemp4139!=0);
if(nctemp4138)
{
{
int nctemp4145 = (i > 4);
if(nctemp4145)
{
{
fd = LibeFarr->a[i].fd;
int nctemp4153= fd;
int nctemp4155=RunClose(nctemp4153);
stat =nctemp4155;
int nctemp4156 = (stat ==0);
if(nctemp4156)
{
{
struct nctempchar1 *nctemp4165;
static struct nctempchar1 nctemp4166 = {{ 21}, (char*)"Could not close file\0"};
nctemp4165=&nctemp4166;
LibeErrstr=nctemp4165;
LibeErrno = -106;
}
}
}
}
int nctemp4171= i;
int nctemp4173=LibeFlush(nctemp4171);
stat =nctemp4173;
int nctemp4176=i;
RunFree(LibeFarr->a[nctemp4176].base->a);
RunFree(LibeFarr->a[nctemp4176].base);
}
}
}
}
RunFree(LibeFarr->a);
RunFree(LibeFarr);
return stat;
}
}
static int NBLOCKS;
static int NTHREADS;
int LibeSetnb (int nb)
{
{
NBLOCKS = nb;
return 1;
}
}
int LibeSetnt (int nt)
{
{
NTHREADS = nt;
return 1;
}
}
int LibeGetnb ()
{
{
return NBLOCKS;
}
}
int LibeGetnt ()
{
{
return NTHREADS;
}
}
int LibeArrayex (int line,nctempchar1 *name,int ival,int index,int bound)
{
{
int nctemp4188= 4;
struct nctempchar1 *nctemp4192;
static struct nctempchar1 nctemp4193 = {{ 37}, (char*)"Array index out of bond at line no: \0"};
nctemp4192=&nctemp4193;
nctempchar1* nctemp4190= nctemp4192;
int nctemp4194=LibePuts(nctemp4188,nctemp4190);
int nctemp4196= 4;
int nctemp4198= line;
int nctemp4200=LibePuti(nctemp4196,nctemp4198);
int nctemp4202= 4;
struct nctempchar1 *nctemp4206;
static struct nctempchar1 nctemp4207 = {{ 3}, (char*)"\n\0"};
nctemp4206=&nctemp4207;
nctempchar1* nctemp4204= nctemp4206;
int nctemp4208=LibePuts(nctemp4202,nctemp4204);
int nctemp4210= 4;
struct nctempchar1 *nctemp4214;
static struct nctempchar1 nctemp4215 = {{ 13}, (char*)"Array name: \0"};
nctemp4214=&nctemp4215;
nctempchar1* nctemp4212= nctemp4214;
int nctemp4216=LibePuts(nctemp4210,nctemp4212);
int nctemp4218= 4;
nctempchar1* nctemp4220= name;
int nctemp4223=LibePuts(nctemp4218,nctemp4220);
int nctemp4225= 4;
struct nctempchar1 *nctemp4229;
static struct nctempchar1 nctemp4230 = {{ 3}, (char*)"\n\0"};
nctemp4229=&nctemp4230;
nctempchar1* nctemp4227= nctemp4229;
int nctemp4231=LibePuts(nctemp4225,nctemp4227);
int nctemp4233= 4;
struct nctempchar1 *nctemp4237;
static struct nctempchar1 nctemp4238 = {{ 11}, (char*)"Index no: \0"};
nctemp4237=&nctemp4238;
nctempchar1* nctemp4235= nctemp4237;
int nctemp4239=LibePuts(nctemp4233,nctemp4235);
int nctemp4241= 4;
int nctemp4243= index;
int nctemp4245=LibePuti(nctemp4241,nctemp4243);
int nctemp4247= 4;
struct nctempchar1 *nctemp4251;
static struct nctempchar1 nctemp4252 = {{ 3}, (char*)"\n\0"};
nctemp4251=&nctemp4252;
nctempchar1* nctemp4249= nctemp4251;
int nctemp4253=LibePuts(nctemp4247,nctemp4249);
int nctemp4255= 4;
struct nctempchar1 *nctemp4259;
static struct nctempchar1 nctemp4260 = {{ 14}, (char*)"Index value: \0"};
nctemp4259=&nctemp4260;
nctempchar1* nctemp4257= nctemp4259;
int nctemp4261=LibePuts(nctemp4255,nctemp4257);
int nctemp4263= 4;
int nctemp4265= ival;
int nctemp4267=LibePuti(nctemp4263,nctemp4265);
int nctemp4269= 4;
struct nctempchar1 *nctemp4273;
static struct nctempchar1 nctemp4274 = {{ 3}, (char*)"\n\0"};
nctemp4273=&nctemp4274;
nctempchar1* nctemp4271= nctemp4273;
int nctemp4275=LibePuts(nctemp4269,nctemp4271);
int nctemp4277= 4;
struct nctempchar1 *nctemp4281;
static struct nctempchar1 nctemp4282 = {{ 16}, (char*)"Index bound: 0-\0"};
nctemp4281=&nctemp4282;
nctempchar1* nctemp4279= nctemp4281;
int nctemp4283=LibePuts(nctemp4277,nctemp4279);
int nctemp4285= 4;
int nctemp4292 = bound - 1;
int nctemp4287= nctemp4292;
int nctemp4293=LibePuti(nctemp4285,nctemp4287);
int nctemp4295= 4;
struct nctempchar1 *nctemp4299;
static struct nctempchar1 nctemp4300 = {{ 3}, (char*)"\n\0"};
nctemp4299=&nctemp4300;
nctempchar1* nctemp4297= nctemp4299;
int nctemp4301=LibePuts(nctemp4295,nctemp4297);
int nctemp4303= 4;
int nctemp4305=LibeFlush(nctemp4303);
int nctemp4307=RunExit();
return 1;
}
}
int LibeSystem (nctempchar1 *cmd)
{
int rval;
{
nctempchar1* nctemp4313= cmd;
int nctemp4316=RunSystem(nctemp4313);
rval =nctemp4316;
return rval;
}
}
int LibeInit ()
{
int rval;
{
int nctemp4322=LibeErrinit();
rval =nctemp4322;
int nctemp4327=LibeIoinit();
rval =nctemp4327;
int nctemp4332=LibeMathinit();
rval =nctemp4332;
int nctemp4337= 1024;
int nctemp4339=LibeSetnb(nctemp4337);
rval =nctemp4339;
int nctemp4344= 1024;
int nctemp4346=LibeSetnt(nctemp4344);
rval =nctemp4346;
return rval;
}
}
int LibeExit ()
{
{
int nctemp4349=RunExit();
return 1;
}
}
nctempchar1 * LibeDate ()
{
{
nctempchar1* nctemp4352=RunDate();
return nctemp4352;
}
}
