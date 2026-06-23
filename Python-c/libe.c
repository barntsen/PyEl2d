//  Translated by epsc  version: Tue Jun 23 16:01:28 2026

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
int ls;
int lt;
nctempchar1 *r;
int i;
{
nctempchar1* nctemp1270= s;
int nctemp1273=LibeStrlen(nctemp1270);
ls =nctemp1273;
nctempchar1* nctemp1278= t;
int nctemp1281=LibeStrlen(nctemp1278);
lt =nctemp1281;
int nctemp1296 = lt + ls;
int nctemp1298 = nctemp1296 + 1;
int nctemp1288=nctemp1298;
nctempchar1 *nctemp1287;
nctemp1287=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp1306 = lt + ls;
int nctemp1308 = nctemp1306 + 1;
nctemp1287->d[0]=nctemp1308;
nctemp1287->a=(char *)RunMalloc(sizeof(char)*nctemp1288);
r=nctemp1287;
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
int nctemp1317 = ls + lt;
int nctemp1312=nctemp1317;
char nctemp1319=(char)(0);
r->a[nctemp1312] =nctemp1319;
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
nctempchar1* nctemp1328= s;
int nctemp1331=LibeStrlen(nctemp1328);
l =nctemp1331;
int nctemp1343 = l + 1;
int nctemp1338=nctemp1343;
nctempchar1 *nctemp1337;
nctemp1337=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp1348 = l + 1;
nctemp1337->d[0]=nctemp1348;
nctemp1337->a=(char *)RunMalloc(sizeof(char)*nctemp1338);
tmp=nctemp1337;
nctempchar1 *nctemp1350 =tmp;
int nctemp1349 =(nctemp1350!=0);
if(nctemp1349)
{
{
nctempchar1* nctemp1355= s;
nctempchar1* nctemp1358= tmp;
int nctemp1361=LibeStrcpy(nctemp1355,nctemp1358);
}
}
return tmp;
}
}
int LibeIsalhpa (int c)
{
{
int nctemp1370 = (c >= 'a');
int nctemp1375 = (c <= 'z');
int nctemp1367 = (nctemp1370 && nctemp1375);
int nctemp1383 = (c >= 'A');
int nctemp1388 = (c <= 'Z');
int nctemp1380 = (nctemp1383 && nctemp1388);
int nctemp1364 = (nctemp1367 || nctemp1380);
if(nctemp1364)
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
int nctemp1397 = (c >= '0');
int nctemp1402 = (c <= '9');
int nctemp1394 = (nctemp1397 && nctemp1402);
if(nctemp1394)
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
int nctemp1414 = (c >= 'a');
int nctemp1419 = (c <= 'z');
int nctemp1411 = (nctemp1414 && nctemp1419);
int nctemp1427 = (c >= 'A');
int nctemp1432 = (c <= 'Z');
int nctemp1424 = (nctemp1427 && nctemp1432);
int nctemp1408 = (nctemp1411 || nctemp1424);
if(nctemp1408)
{
{
return 1;
}
}
else{
{
int nctemp1440 = (c >= '0');
int nctemp1445 = (c <= '9');
int nctemp1437 = (nctemp1440 && nctemp1445);
if(nctemp1437)
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
int nctemp1460=i;
char nctemp1463=(char)(' ');
int nctemp1457 = (s->a[nctemp1460] ==nctemp1463);
int nctemp1470=i;
char nctemp1473=(char)(10);
int nctemp1467 = (s->a[nctemp1470] ==nctemp1473);
int nctemp1454 = (nctemp1457 || nctemp1467);
int nctemp1480=i;
char nctemp1483=(char)(9);
int nctemp1477 = (s->a[nctemp1480] ==nctemp1483);
int nctemp1451 = (nctemp1454 || nctemp1477);
int nctemp1486=nctemp1451;
while(nctemp1486)
{{
{
i = (i + 1);
}
}
int nctemp1496=i;
char nctemp1499=(char)(' ');
int nctemp1493 = (s->a[nctemp1496] ==nctemp1499);
int nctemp1506=i;
char nctemp1509=(char)(10);
int nctemp1503 = (s->a[nctemp1506] ==nctemp1509);
int nctemp1490 = (nctemp1493 || nctemp1503);
int nctemp1516=i;
char nctemp1519=(char)(9);
int nctemp1513 = (s->a[nctemp1516] ==nctemp1519);
int nctemp1487 = (nctemp1490 || nctemp1513);
nctemp1486=nctemp1487;}int nctemp1525=i;
char nctemp1528=(char)('-');
int nctemp1522 = (s->a[nctemp1525] ==nctemp1528);
if(nctemp1522)
{
{
sign =  -1;
i = (i + 1);
}
}
else{
{
int nctemp1534=i;
char nctemp1537=(char)('+');
int nctemp1531 = (s->a[nctemp1534] ==nctemp1537);
if(nctemp1531)
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
int nctemp1550=i;
int nctemp1547=(int)(s->a[nctemp1550]);
int nctemp1545= nctemp1547;
int nctemp1552=LibeIsdigit(nctemp1545);
while(nctemp1552){
{
{
int nctemp1567 = 10 * n;
int nctemp1572=i;
int nctemp1569=(int)(s->a[nctemp1572]);
int nctemp1574 = nctemp1567 + nctemp1569;
int nctemp1576 = nctemp1574 - '0';
n =nctemp1576;
}
}
int nctemp1585 = i + 1;
i =nctemp1585;
int nctemp1592=i;
int nctemp1589=(int)(s->a[nctemp1592]);
int nctemp1587= nctemp1589;
int nctemp1594=LibeIsdigit(nctemp1587);
nctemp1552=nctemp1594;
}
int nctemp1599 = sign * n;
return nctemp1599;
}
}
int LibeItoa (int n,nctempchar1 *s)
{
int sign;
int i;
{
nctempchar1 *nctemp1601 =s;
int nctemp1600 =(nctemp1601==0);
if(nctemp1600)
{
{
return 0;
}
}
sign =n;
int nctemp1606 = (sign < 0);
if(nctemp1606)
{
{
n =  -n;
}
}
i = 0;
int nctemp1617=0;
int nctemp1625= n;
int nctemp1627= 10;
int nctemp1629=LibeMod(nctemp1625,nctemp1627);
int nctemp1631 = nctemp1629 + 48;
char nctemp1620=(char)(nctemp1631);
s->a[nctemp1617] =nctemp1620;
int nctemp1643 = n / 10;
n =nctemp1643;
int nctemp1632 = (n > 0);
int nctemp1645=nctemp1632;
while(nctemp1645)
{{
{
int nctemp1653 = i + 1;
int nctemp1658=s->d[0];int nctemp1663 = nctemp1658 - 1;
int nctemp1646 = (nctemp1653 > nctemp1663);
if(nctemp1646)
{
{
return 0;
}
}
int nctemp1677 = i + 1;
i =nctemp1677;
int nctemp1668=i;
int nctemp1684= n;
int nctemp1686= 10;
int nctemp1688=LibeMod(nctemp1684,nctemp1686);
int nctemp1690 = nctemp1688 + 48;
char nctemp1679=(char)(nctemp1690);
s->a[nctemp1668] =nctemp1679;
}
}
int nctemp1702 = n / 10;
n =nctemp1702;
int nctemp1691 = (n > 0);
nctemp1645=nctemp1691;}int nctemp1704 = (sign < 0);
if(nctemp1704)
{
{
int nctemp1715 = i + 1;
int nctemp1720=s->d[0];int nctemp1725 = nctemp1720 - 1;
int nctemp1708 = (nctemp1715 > nctemp1725);
if(nctemp1708)
{
{
return 0;
}
}
int nctemp1739 = i + 1;
i =nctemp1739;
int nctemp1730=i;
char nctemp1741=(char)(45);
s->a[nctemp1730] =nctemp1741;
}
}
int nctemp1751 = i + 1;
int nctemp1756=s->d[0];int nctemp1761 = nctemp1756 - 1;
int nctemp1744 = (nctemp1751 > nctemp1761);
if(nctemp1744)
{
{
return 0;
}
}
int nctemp1775 = i + 1;
i =nctemp1775;
int nctemp1766=i;
char nctemp1777=(char)(0);
s->a[nctemp1766] =nctemp1777;
nctempchar1* nctemp1781= s;
int nctemp1784=LibeStrev(nctemp1781);
return 1;
}
}
int LibeItoh (int n,nctempchar1 *s)
{
int i;
int sign;
{
sign =n;
int nctemp1786 = (sign < 0);
if(nctemp1786)
{
{
n =  -n;
}
}
i = 0;
int nctemp1797= n;
int nctemp1799= 16;
int nctemp1801=LibeMod(nctemp1797,nctemp1799);
int nctemp1794 = (nctemp1801 <= 9);
if(nctemp1794)
{
{
int nctemp1806=0;
int nctemp1814= n;
int nctemp1816= 16;
int nctemp1818=LibeMod(nctemp1814,nctemp1816);
int nctemp1820 = nctemp1818 + 48;
char nctemp1809=(char)(nctemp1820);
s->a[nctemp1806] =nctemp1809;
}
}
else{
{
int nctemp1824=0;
int nctemp1835= n;
int nctemp1837= 16;
int nctemp1839=LibeMod(nctemp1835,nctemp1837);
int nctemp1841 = nctemp1839 + 'a';
int nctemp1843 = nctemp1841 - 10;
char nctemp1827=(char)(nctemp1843);
s->a[nctemp1824] =nctemp1827;
}
}
int nctemp1855 = n / 16;
n =nctemp1855;
int nctemp1844 = (n > 0);
int nctemp1857=nctemp1844;
while(nctemp1857)
{{
{
int nctemp1861= n;
int nctemp1863= 16;
int nctemp1865=LibeMod(nctemp1861,nctemp1863);
int nctemp1858 = (nctemp1865 <= 9);
if(nctemp1858)
{
{
int nctemp1879 = i + 1;
i =nctemp1879;
int nctemp1870=i;
int nctemp1886= n;
int nctemp1888= 16;
int nctemp1890=LibeMod(nctemp1886,nctemp1888);
int nctemp1892 = nctemp1890 + 48;
char nctemp1881=(char)(nctemp1892);
s->a[nctemp1870] =nctemp1881;
}
}
else{
{
int nctemp1905 = i + 1;
i =nctemp1905;
int nctemp1896=i;
int nctemp1915= n;
int nctemp1917= 16;
int nctemp1919=LibeMod(nctemp1915,nctemp1917);
int nctemp1921 = nctemp1919 + 'a';
int nctemp1923 = nctemp1921 - 10;
char nctemp1907=(char)(nctemp1923);
s->a[nctemp1896] =nctemp1907;
}
}
}
}
int nctemp1935 = n / 16;
n =nctemp1935;
int nctemp1924 = (n > 0);
nctemp1857=nctemp1924;}int nctemp1937 = (sign < 0);
if(nctemp1937)
{
{
int nctemp1953 = i + 1;
i =nctemp1953;
int nctemp1944=i;
char nctemp1955=(char)(45);
s->a[nctemp1944] =nctemp1955;
}
}
int nctemp1970 = i + 1;
i =nctemp1970;
int nctemp1961=i;
char nctemp1972=(char)(0);
s->a[nctemp1961] =nctemp1972;
nctempchar1* nctemp1976= s;
int nctemp1979=LibeStrev(nctemp1976);
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
int nctemp1984=i;
char nctemp1987=(char)(' ');
int nctemp1981 = (s->a[nctemp1984] ==nctemp1987);
int nctemp1990=nctemp1981;
while(nctemp1990)
{{
{
i = (i + 1);
}
}
int nctemp1994=i;
char nctemp1997=(char)(' ');
int nctemp1991 = (s->a[nctemp1994] ==nctemp1997);
nctemp1990=nctemp1991;}int nctemp2006=i;
char nctemp2009=(char)('+');
int nctemp2003 = (s->a[nctemp2006] ==nctemp2009);
int nctemp2016=i;
char nctemp2019=(char)('-');
int nctemp2013 = (s->a[nctemp2016] ==nctemp2019);
int nctemp2000 = (nctemp2003 || nctemp2013);
if(nctemp2000)
{
{
int nctemp2025=i;
char nctemp2028=(char)('-');
int nctemp2022 = (s->a[nctemp2025] ==nctemp2028);
if(nctemp2022)
{
{
sign =  -1;
}
}
i = (i + 1);
}
}
int nctemp2037=i;
int nctemp2034=(int)(s->a[nctemp2037]);
int nctemp2032= nctemp2034;
int nctemp2039=LibeIsdigit(nctemp2032);
int nctemp2040=nctemp2039;
while(nctemp2040)
{{
{
float nctemp2052 = 10.0 * val;
int nctemp2062=i;
int nctemp2059=(int)(s->a[nctemp2062]);
int nctemp2065 = nctemp2059 - '0';
float nctemp2054=(float)(nctemp2065);
float nctemp2066 = nctemp2052 + nctemp2054;
val =nctemp2066;
i = (i + 1);
}
}
int nctemp2073=i;
int nctemp2070=(int)(s->a[nctemp2073]);
int nctemp2068= nctemp2070;
int nctemp2075=LibeIsdigit(nctemp2068);
nctemp2040=nctemp2075;}int nctemp2079=i;
char nctemp2082=(char)('.');
int nctemp2076 = (s->a[nctemp2079] ==nctemp2082);
if(nctemp2076)
{
{
i = (i + 1);
int nctemp2091=i;
int nctemp2088=(int)(s->a[nctemp2091]);
int nctemp2086= nctemp2088;
int nctemp2093=LibeIsdigit(nctemp2086);
int nctemp2094=nctemp2093;
while(nctemp2094)
{{
{
float nctemp2106 = 10.0 * val;
int nctemp2116=i;
int nctemp2113=(int)(s->a[nctemp2116]);
int nctemp2119 = nctemp2113 - '0';
float nctemp2108=(float)(nctemp2119);
float nctemp2120 = nctemp2106 + nctemp2108;
val =nctemp2120;
i = (i + 1);
power = (10.0 * power);
}
}
int nctemp2127=i;
int nctemp2124=(int)(s->a[nctemp2127]);
int nctemp2122= nctemp2124;
int nctemp2129=LibeIsdigit(nctemp2122);
nctemp2094=nctemp2129;}}
}
int nctemp2136=i;
char nctemp2139=(char)('e');
int nctemp2133 = (s->a[nctemp2136] ==nctemp2139);
int nctemp2146=i;
char nctemp2149=(char)('E');
int nctemp2143 = (s->a[nctemp2146] ==nctemp2149);
int nctemp2130 = (nctemp2133 || nctemp2143);
if(nctemp2130)
{
{
i = (i + 1);
int nctemp2158=i;
char nctemp2161=(char)('+');
int nctemp2155 = (s->a[nctemp2158] ==nctemp2161);
int nctemp2168=i;
char nctemp2171=(char)('-');
int nctemp2165 = (s->a[nctemp2168] ==nctemp2171);
int nctemp2152 = (nctemp2155 || nctemp2165);
if(nctemp2152)
{
{
int nctemp2177=i;
char nctemp2180=(char)('-');
int nctemp2174 = (s->a[nctemp2177] ==nctemp2180);
if(nctemp2174)
{
{
esign =  -1;
}
}
i = (i + 1);
}
}
int nctemp2189=i;
int nctemp2186=(int)(s->a[nctemp2189]);
int nctemp2184= nctemp2186;
int nctemp2191=LibeIsdigit(nctemp2184);
int nctemp2192=nctemp2191;
while(nctemp2192)
{{
{
int nctemp2207 = 10 * exponent;
int nctemp2212=i;
int nctemp2209=(int)(s->a[nctemp2212]);
int nctemp2214 = nctemp2207 + nctemp2209;
int nctemp2216 = nctemp2214 - '0';
exponent =nctemp2216;
i = (i + 1);
}
}
int nctemp2223=i;
int nctemp2220=(int)(s->a[nctemp2223]);
int nctemp2218= nctemp2220;
int nctemp2225=LibeIsdigit(nctemp2218);
nctemp2192=nctemp2225;}}
}
float nctemp2234=(float)(sign);
float nctemp2238 = nctemp2234 * val;
float nctemp2240=(float)(power);
float nctemp2243 = nctemp2238 / nctemp2240;
float nctemp2227= nctemp2243;
int nctemp2249 = esign * exponent;
int nctemp2244= nctemp2249;
float nctemp2250=LibeFscale(nctemp2227,nctemp2244);
return nctemp2250;
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
int nctemp2251 = (mant < 0);
if(nctemp2251)
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
int nctemp2258=s->d[0];int nctemp2267 = nfield + 1;
int nctemp2255 = (nctemp2258 < nctemp2267);
if(nctemp2255)
{
{
return 0;
}
}
l = (((nexp + 1) + 1) + nfrac);
int nctemp2269 = (sign < 0);
if(nctemp2269)
{
{
l = (l + 1);
}
}
int nctemp2273 = (nfield < l);
if(nctemp2273)
{
{
for(i = 0;i < nfield;i = (i + 1)){
{
int nctemp2280=i;
char nctemp2283=(char)('*');
s->a[nctemp2280] =nctemp2283;
}
}
int nctemp2289=nfield;
char nctemp2292=(char)(0);
s->a[nctemp2289] =nctemp2292;
return 0;
}
}
else{
{
tp = (nfield - l);
}
}
int nctemp2307 = 6 + 1;
int nctemp2302=nctemp2307;
nctempchar1 *nctemp2301;
nctemp2301=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp2312 = 6 + 1;
nctemp2301->d[0]=nctemp2312;
nctemp2301->a=(char *)RunMalloc(sizeof(char)*nctemp2302);
t=nctemp2301;
int nctemp2314= mant;
nctempchar1* nctemp2316= t;
int nctemp2319=LibeItoa(nctemp2314,nctemp2316);
for(i = 0;i < tp;i = (i + 1)){
{
int nctemp2323=i;
char nctemp2326=(char)(' ');
s->a[nctemp2323] =nctemp2326;
}
}
int nctemp2329 = (nexp >= 0);
if(nctemp2329)
{
{
int nctemp2336= -1;
int nctemp2333 = (sign ==nctemp2336);
if(nctemp2333)
{
{
int nctemp2340=tp;
char nctemp2343=(char)('-');
s->a[nctemp2340] =nctemp2343;
tp = (tp + 1);
}
}
for(i = 0;i <= nexp;i = (i + 1)){
{
s->a[i + tp] = t->a[i];
}
}
int nctemp2346 = (nfrac > 0);
if(nctemp2346)
{
{
int nctemp2361 = tp + nexp;
int nctemp2363 = nctemp2361 + 1;
int nctemp2353=nctemp2363;
char nctemp2365=(char)('.');
s->a[nctemp2353] =nctemp2365;
}
}
for(i = 0;i < nfrac;i = (i + 1)){
{
int nctemp2368 = (mant ==0);
if(nctemp2368)
{
{
int nctemp2389 = tp + nexp;
int nctemp2391 = nctemp2389 + 1;
int nctemp2393 = nctemp2391 + 1;
int nctemp2395 = nctemp2393 + i;
int nctemp2375=nctemp2395;
char nctemp2397=(char)('0');
s->a[nctemp2375] =nctemp2397;
}
}
else{
{
s->a[(((tp + nexp) + 1) + 1) + i] = t->a[(nexp + 1) + i];
}
}
}
}
int nctemp2400 = (nfrac > 0);
if(nctemp2400)
{
{
int nctemp2421 = tp + nexp;
int nctemp2423 = nctemp2421 + 1;
int nctemp2425 = nctemp2423 + 1;
int nctemp2427 = nctemp2425 + nfrac;
int nctemp2407=nctemp2427;
char nctemp2429=(char)(0);
s->a[nctemp2407] =nctemp2429;
}
}
else{
{
int nctemp2443 = tp + nexp;
int nctemp2445 = nctemp2443 + 1;
int nctemp2435=nctemp2445;
char nctemp2447=(char)(0);
s->a[nctemp2435] =nctemp2447;
}
}
}
}
else{
{
nexp =  -nexp;
int nctemp2453= -1;
int nctemp2450 = (sign ==nctemp2453);
if(nctemp2450)
{
{
int nctemp2457=tp;
char nctemp2460=(char)('-');
s->a[nctemp2457] =nctemp2460;
tp = (tp + 1);
}
}
int nctemp2466=tp;
char nctemp2469=(char)('0');
s->a[nctemp2466] =nctemp2469;
int nctemp2480 = tp + 1;
int nctemp2475=nctemp2480;
char nctemp2482=(char)('.');
s->a[nctemp2475] =nctemp2482;
for(i = 0;i < (nexp - 1);i = (i + 1)){
{
int nctemp2496 = i + tp;
int nctemp2498 = nctemp2496 + 2;
int nctemp2488=nctemp2498;
char nctemp2500=(char)('0');
s->a[nctemp2488] =nctemp2500;
}
}
for(i = 0;i < ((nfrac - nexp) + 1);i = (i + 1)){
{
s->a[(((tp + 2) + i) + nexp) - 1] = t->a[i];
}
}
int nctemp2514 = tp + 2;
int nctemp2516 = nctemp2514 + nfrac;
int nctemp2506=nctemp2516;
char nctemp2518=(char)(0);
s->a[nctemp2506] =nctemp2518;
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
int nctemp2522 = (mant < 0);
if(nctemp2522)
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
int nctemp2529=s->d[0];int nctemp2556 = 1 + 1;
int nctemp2558 = nctemp2556 + 1;
int nctemp2560 = nctemp2558 + nfrac;
int nctemp2562 = nctemp2560 + 1;
int nctemp2564 = nctemp2562 + 1;
int nctemp2566 = nctemp2564 + 2;
int nctemp2568 = nctemp2566 + 1;
int nctemp2526 = (nctemp2529 < nctemp2568);
if(nctemp2526)
{
{
return 0;
}
}
int nctemp2578=s->d[0];int nctemp2576=nctemp2578;
nctempchar1 *nctemp2575;
nctemp2575=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp2583=s->d[0];nctemp2575->d[0]=nctemp2583;
nctemp2575->a=(char *)RunMalloc(sizeof(char)*nctemp2576);
t=nctemp2575;
l = ((((((1 + 1) + nfrac) + 1) + 1) + 2) + 1);
int nctemp2587 = (sign < 0);
if(nctemp2587)
{
{
l = (l + 1);
}
}
int nctemp2591 = (nfield < l);
if(nctemp2591)
{
{
for(i = 0;i < nfield;i = (i + 1)){
{
int nctemp2598=i;
char nctemp2601=(char)('*');
s->a[nctemp2598] =nctemp2601;
}
}
int nctemp2607=nfield;
char nctemp2610=(char)(0);
s->a[nctemp2607] =nctemp2610;
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
int nctemp2617=i;
char nctemp2620=(char)(' ');
s->a[nctemp2617] =nctemp2620;
}
}
int nctemp2624= mant;
nctempchar1* nctemp2626= t;
int nctemp2629=LibeItoa(nctemp2624,nctemp2626);
int nctemp2630 = (sign < 0);
if(nctemp2630)
{
{
int nctemp2637=tp;
char nctemp2640=(char)('-');
s->a[nctemp2637] =nctemp2640;
tp = (tp + 1);
}
}
s->a[tp] = t->a[0];
int nctemp2651 = tp + 1;
int nctemp2646=nctemp2651;
char nctemp2653=(char)('.');
s->a[nctemp2646] =nctemp2653;
for(i = 0;i < nfrac;i = (i + 1)){
{
s->a[(tp + 2) + i] = t->a[i + 1];
}
}
int nctemp2667 = tp + 2;
int nctemp2669 = nctemp2667 + nfrac;
int nctemp2659=nctemp2669;
char nctemp2671=(char)(0);
s->a[nctemp2659] =nctemp2671;
sign = 1;
int nctemp2674 = (nexp < 0);
if(nctemp2674)
{
{
sign =  -1;
nexp =  -nexp;
}
}
struct nctempchar1 *nctemp2681;
static struct nctempchar1 nctemp2682 = {{ 2}, (char*)"e\0"};
nctemp2681=&nctemp2682;
nctempchar1* nctemp2679= nctemp2681;
nctempchar1* nctemp2683= s;
int nctemp2686=LibeStrcat(nctemp2679,nctemp2683);
int nctemp2687 = (sign > 0);
if(nctemp2687)
{
{
struct nctempchar1 *nctemp2694;
static struct nctempchar1 nctemp2695 = {{ 2}, (char*)"+\0"};
nctemp2694=&nctemp2695;
nctempchar1* nctemp2692= nctemp2694;
nctempchar1* nctemp2696= s;
int nctemp2699=LibeStrcat(nctemp2692,nctemp2696);
}
}
else{
{
struct nctempchar1 *nctemp2703;
static struct nctempchar1 nctemp2704 = {{ 2}, (char*)"-\0"};
nctemp2703=&nctemp2704;
nctempchar1* nctemp2701= nctemp2703;
nctempchar1* nctemp2705= s;
int nctemp2708=LibeStrcat(nctemp2701,nctemp2705);
}
}
int nctemp2710= nexp;
nctempchar1* nctemp2712= t;
int nctemp2715=LibeItoa(nctemp2710,nctemp2712);
nctempchar1* nctemp2719= t;
int nctemp2722=LibeStrlen(nctemp2719);
int nctemp2716 = (nctemp2722 ==1);
if(nctemp2716)
{
{
struct nctempchar1 *nctemp2727;
static struct nctempchar1 nctemp2728 = {{ 2}, (char*)"0\0"};
nctemp2727=&nctemp2728;
nctempchar1* nctemp2725= nctemp2727;
nctempchar1* nctemp2729= s;
int nctemp2732=LibeStrcat(nctemp2725,nctemp2729);
}
}
nctempchar1* nctemp2734= t;
nctempchar1* nctemp2737= s;
int nctemp2740=LibeStrcat(nctemp2734,nctemp2737);
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
int nctemp2748=s->d[0];int nctemp2753=fmt->d[0];int nctemp2745 = (nctemp2748 < nctemp2753);
if(nctemp2745)
{
{
return 0;
}
}
int nctemp2765=fmt->d[0];int nctemp2770 = nctemp2765 - 2;
l =nctemp2770;
p = 0;
q = 0;
int nctemp2778=p;
int nctemp2775=(int)(fmt->a[nctemp2778]);
c =nctemp2775;
int nctemp2780 = (c =='g');
if(nctemp2780)
{
{
mode = 'g';
}
}
else{
{
int nctemp2787= c;
int nctemp2789=LibeIsdigit(nctemp2787);
int nctemp2784 = (nctemp2789 ==1);
if(nctemp2784)
{
{
int nctemp2794= c;
int nctemp2796=LibeIsdigit(nctemp2794);
int nctemp2791 = (nctemp2796 ==1);
int nctemp2798=nctemp2791;
while(nctemp2798)
{{
{
s->a[q] = fmt->a[p];
int nctemp2810 = p + 1;
p =nctemp2810;
int nctemp2799 = (p > l);
if(nctemp2799)
{
{
return 0;
}
}
q = (q + 1);
int nctemp2820=p;
int nctemp2817=(int)(fmt->a[nctemp2820]);
c =nctemp2817;
}
}
int nctemp2825= c;
int nctemp2827=LibeIsdigit(nctemp2825);
int nctemp2822 = (nctemp2827 ==1);
nctemp2798=nctemp2822;}int nctemp2832=q;
char nctemp2835=(char)(0);
s->a[nctemp2832] =nctemp2835;
nctempchar1* nctemp2842= s;
int nctemp2845=LibeAtoi(nctemp2842);
nfield =nctemp2845;
}
}
else{
{
return 0;
}
}
int nctemp2847 = (c !='.');
if(nctemp2847)
{
{
return 0;
}
}
int nctemp2863 = p + 1;
p =nctemp2863;
int nctemp2852 = (p > l);
if(nctemp2852)
{
{
return 0;
}
}
int nctemp2873=p;
int nctemp2870=(int)(fmt->a[nctemp2873]);
c =nctemp2870;
q = 0;
int nctemp2878= c;
int nctemp2880=LibeIsdigit(nctemp2878);
int nctemp2875 = (nctemp2880 ==1);
if(nctemp2875)
{
{
int nctemp2885= c;
int nctemp2887=LibeIsdigit(nctemp2885);
int nctemp2882 = (nctemp2887 ==1);
int nctemp2889=nctemp2882;
while(nctemp2889)
{{
{
s->a[q] = fmt->a[p];
int nctemp2901 = p + 1;
p =nctemp2901;
int nctemp2890 = (p > l);
if(nctemp2890)
{
{
return 0;
}
}
q = (q + 1);
int nctemp2911=p;
int nctemp2908=(int)(fmt->a[nctemp2911]);
c =nctemp2908;
}
}
int nctemp2916= c;
int nctemp2918=LibeIsdigit(nctemp2916);
int nctemp2913 = (nctemp2918 ==1);
nctemp2889=nctemp2913;}int nctemp2923=q;
char nctemp2926=(char)(0);
s->a[nctemp2923] =nctemp2926;
nctempchar1* nctemp2933= s;
int nctemp2936=LibeAtoi(nctemp2933);
nfrac =nctemp2936;
}
}
else{
{
return 0;
}
}
int nctemp2938 = (c =='f');
if(nctemp2938)
{
{
mode = 'f';
}
}
else{
{
int nctemp2942 = (c =='e');
if(nctemp2942)
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
int nctemp2947 = (mode =='g');
if(nctemp2947)
{
{
float nctemp2955= f;
int nctemp2957=LibeGetmaxdig(nctemp2955);
nfrac =nctemp2957;
nfield = (((((((1 + 1) + 1) + 1) + nfrac) + 1) + 1) + 2);
ndigit = (nfrac + 1);
float nctemp2962= f;
int nctemp2964= ndigit;
int nctemp2966=LibeGetfman(nctemp2962,nctemp2964);
mant =nctemp2966;
float nctemp2971= f;
int nctemp2973=LibeGetfexp(nctemp2971);
nexp =nctemp2973;
int nctemp2975= mant;
int nctemp2977= nexp;
int nctemp2979= nfield;
int nctemp2981= nfrac;
nctempchar1* nctemp2983= s;
int nctemp2986=LibeFtoae(nctemp2975,nctemp2977,nctemp2979,nctemp2981,nctemp2983);
}
}
else{
{
int nctemp2987 = (mode =='e');
if(nctemp2987)
{
{
ndigit = (nfrac + 1);
float nctemp2995= f;
int nctemp2997= ndigit;
int nctemp2999=LibeGetfman(nctemp2995,nctemp2997);
mant =nctemp2999;
float nctemp3004= f;
int nctemp3006=LibeGetfexp(nctemp3004);
nexp =nctemp3006;
int nctemp3008= mant;
int nctemp3010= nexp;
int nctemp3012= nfield;
int nctemp3014= nfrac;
nctempchar1* nctemp3016= s;
int nctemp3019=LibeFtoae(nctemp3008,nctemp3010,nctemp3012,nctemp3014,nctemp3016);
}
}
else{
{
int nctemp3020 = (mode =='f');
if(nctemp3020)
{
{
float nctemp3028= f;
int nctemp3030=LibeGetfexp(nctemp3028);
nexp =nctemp3030;
ndigit = ((nexp + nfrac) + 1);
float nctemp3035= f;
int nctemp3037= ndigit;
int nctemp3039=LibeGetfman(nctemp3035,nctemp3037);
mant =nctemp3039;
int nctemp3041= mant;
int nctemp3043= nexp;
int nctemp3045= nfield;
int nctemp3047= nfrac;
nctempchar1* nctemp3049= s;
int nctemp3052=LibeFtoaf(nctemp3041,nctemp3043,nctemp3045,nctemp3047,nctemp3049);
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
int nctemp3060=40;
struct nctempLibeFdescr1 *nctemp3059;
nctemp3059=(struct nctempLibeFdescr1*)RunMalloc(sizeof(struct nctempLibeFdescr1));
nctemp3059->d[0]=40;
nctemp3059->a=(struct LibeFdescr*)RunMalloc(sizeof(struct LibeFdescr)*nctemp3060);
LibeFarr=nctemp3059;
nctempLibeFdescr1 *nctemp3064 =LibeFarr;
int nctemp3063 =(nctemp3064==0);
if(nctemp3063)
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
int nctemp3075=64;
nctempchar1 *nctemp3074;
nctemp3074=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp3074->d[0]=64;
nctemp3074->a=(char *)RunMalloc(sizeof(char)*nctemp3075);
LibeTmpstr=nctemp3074;
nctempchar1 *nctemp3079 =LibeTmpstr;
int nctemp3078 =(nctemp3079==0);
if(nctemp3078)
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
int nctemp3088=fp;
int nctemp3085 = (LibeFarr->a[nctemp3088].writflg !=1);
if(nctemp3085)
{
{
struct nctempchar1 *nctemp3096;
static struct nctempchar1 nctemp3097 = {{ 28}, (char*)"file not open for writing\n\0"};
nctemp3096=&nctemp3097;
LibeErrstr=nctemp3096;
LibeErrno = -110;
return 0;
}
}
int nctemp3102=fp;
int nctemp3099 = (LibeFarr->a[nctemp3102].unbflg ==1);
if(nctemp3099)
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
int nctemp3108=fp;
nctempchar1 *nctemp3106 =LibeFarr->a[nctemp3108].base;
int nctemp3105 =(nctemp3106==0);
if(nctemp3105)
{
{
size = LibeFarr->a[fp].bufsize;
int nctemp3118=fp;
int nctemp3123=size;
nctempchar1 *nctemp3122;
nctemp3122=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp3122->d[0]=size;
nctemp3122->a=(char *)RunMalloc(sizeof(char)*nctemp3123);
LibeFarr->a[nctemp3118].base=nctemp3122;
nctempchar1 *nctemp3113 =LibeFarr->a[nctemp3118].base;
int nctemp3112 =(nctemp3113==0);
if(nctemp3112)
{
{
struct nctempchar1 *nctemp3132;
static struct nctempchar1 nctemp3133 = {{ 24}, (char*)"can not allocate buffer\0"};
nctemp3132=&nctemp3133;
LibeErrstr=nctemp3132;
LibeErrno = -113;
return 0;
}
}
}
}
LibeFarr->a[fp].ptr = 0;
int nctemp3141=fp;
int nctemp3139= LibeFarr->a[nctemp3141].fd;
int nctemp3145=fp;
int nctemp3143= LibeFarr->a[nctemp3145].cnt;
int nctemp3149=fp;
nctempchar1* nctemp3147= LibeFarr->a[nctemp3149].base;
int nctemp3152=RunWrite(nctemp3139,nctemp3143,nctemp3147);
st =nctemp3152;
int nctemp3157=fp;
int nctemp3153 = (st !=LibeFarr->a[nctemp3157].cnt);
if(nctemp3153)
{
{
LibeFarr->a[fp].errflg = 1;
struct nctempchar1 *nctemp3164;
static struct nctempchar1 nctemp3165 = {{ 12}, (char*)"write error\0"};
nctemp3164=&nctemp3165;
LibeErrstr=nctemp3164;
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
int nctemp3171=fp;
int nctemp3168 = (LibeFarr->a[nctemp3171].readflg !=1);
if(nctemp3168)
{
{
struct nctempchar1 *nctemp3179;
static struct nctempchar1 nctemp3180 = {{ 28}, (char*)"file not open for reading\n\0"};
nctemp3179=&nctemp3180;
LibeErrstr=nctemp3179;
LibeErrno = -110;
return -1;
}
}
int nctemp3185=fp;
int nctemp3182 = (LibeFarr->a[nctemp3185].unbflg ==1);
if(nctemp3182)
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
int nctemp3191=fp;
nctempchar1 *nctemp3189 =LibeFarr->a[nctemp3191].base;
int nctemp3188 =(nctemp3189==0);
if(nctemp3188)
{
{
size = LibeFarr->a[fp].bufsize;
int nctemp3201=fp;
int nctemp3206=size;
nctempchar1 *nctemp3205;
nctemp3205=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp3205->d[0]=size;
nctemp3205->a=(char *)RunMalloc(sizeof(char)*nctemp3206);
LibeFarr->a[nctemp3201].base=nctemp3205;
nctempchar1 *nctemp3196 =LibeFarr->a[nctemp3201].base;
int nctemp3195 =(nctemp3196==0);
if(nctemp3195)
{
{
struct nctempchar1 *nctemp3215;
static struct nctempchar1 nctemp3216 = {{ 24}, (char*)"Can not allocate buffer\0"};
nctemp3215=&nctemp3216;
LibeErrstr=nctemp3215;
LibeErrno = -113;
return -1;
}
}
}
}
LibeFarr->a[fp].ptr = 0;
int nctemp3221=fp;
int nctemp3226=fp;
int nctemp3224= LibeFarr->a[nctemp3226].fd;
int nctemp3230=fp;
int nctemp3228= LibeFarr->a[nctemp3230].bufsize;
int nctemp3234=fp;
nctempchar1* nctemp3232= LibeFarr->a[nctemp3234].base;
int nctemp3237=RunRead(nctemp3224,nctemp3228,nctemp3232);
LibeFarr->a[nctemp3221].cnt =nctemp3237;
int nctemp3241=fp;
int nctemp3238 = (LibeFarr->a[nctemp3241].cnt <= 0);
if(nctemp3238)
{
{
int nctemp3247=fp;
int nctemp3244 = (LibeFarr->a[nctemp3247].cnt ==-1);
if(nctemp3244)
{
{
LibeFarr->a[fp].eoflg = 1;
rval = -1;
}
}
else{
{
LibeFarr->a[fp].errflg = 1;
struct nctempchar1 *nctemp3255;
static struct nctempchar1 nctemp3256 = {{ 11}, (char*)"read error\0"};
nctemp3255=&nctemp3256;
LibeErrstr=nctemp3255;
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
int nctemp3262=fp;
int nctemp3268=fp;
int nctemp3271 = LibeFarr->a[nctemp3268].ptr - 1;
int nctemp3264=nctemp3271;
int nctemp3259=(int)(LibeFarr->a[nctemp3262].base->a[nctemp3264]);
return nctemp3259;
}
}
int LibeFlush (int fp)
{
{
int nctemp3273= fp;
int nctemp3275=LibeFlushbuff(nctemp3273);
return nctemp3275;
}
}
int LibeOpen (nctempchar1 *name,nctempchar1 *mode)
{
int fd;
int slot;
int i;
{
int nctemp3279=0;
char nctemp3282=(char)('r');
int nctemp3276 = (mode->a[nctemp3279] !=nctemp3282);
if(nctemp3276)
{
{
int nctemp3288=0;
char nctemp3291=(char)('w');
int nctemp3285 = (mode->a[nctemp3288] !=nctemp3291);
if(nctemp3285)
{
{
int nctemp3297=0;
char nctemp3300=(char)('a');
int nctemp3294 = (mode->a[nctemp3297] !=nctemp3300);
if(nctemp3294)
{
{
struct nctempchar1 *nctemp3308;
static struct nctempchar1 nctemp3309 = {{ 20}, (char*)"Unknown file mode\n\0"};
nctemp3308=&nctemp3309;
LibeErrstr=nctemp3308;
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
int nctemp3314 = (slot < 0);
int nctemp3319 = (i < 40);
int nctemp3311 = (nctemp3314 && nctemp3319);
int nctemp3323=nctemp3311;
while(nctemp3323)
{{
{
int nctemp3330=i;
int nctemp3327 = (LibeFarr->a[nctemp3330].readflg ==0);
int nctemp3337=i;
int nctemp3334 = (LibeFarr->a[nctemp3337].writflg ==0);
int nctemp3324 = (nctemp3327 && nctemp3334);
if(nctemp3324)
{
{
slot = i;
}
}
i = (i + 1);
}
}
int nctemp3343 = (slot < 0);
int nctemp3348 = (i < 40);
int nctemp3340 = (nctemp3343 && nctemp3348);
nctemp3323=nctemp3340;}int nctemp3352 = (slot < 0);
if(nctemp3352)
{
{
struct nctempchar1 *nctemp3361;
static struct nctempchar1 nctemp3362 = {{ 22}, (char*)"Too many open files\n\0"};
nctemp3361=&nctemp3362;
LibeErrstr=nctemp3361;
LibeErrno = -104;
return 0;
}
}
int nctemp3370=0;
int nctemp3367=(int)(mode->a[nctemp3370]);
int nctemp3364 = (nctemp3367 =='w');
if(nctemp3364)
{
{
nctempchar1* nctemp3377= name;
int nctemp3380=RunCreate(nctemp3377);
fd =nctemp3380;
}
}
else{
{
int nctemp3387=0;
int nctemp3384=(int)(mode->a[nctemp3387]);
int nctemp3381 = (nctemp3384 =='a');
if(nctemp3381)
{
{
nctempchar1* nctemp3397= name;
nctempchar1* nctemp3400= mode;
int nctemp3403=RunOpen(nctemp3397,nctemp3400);
fd =nctemp3403;
int nctemp3390 = (fd ==0);
if(nctemp3390)
{
{
nctempchar1* nctemp3409= name;
int nctemp3412=RunCreate(nctemp3409);
fd =nctemp3412;
}
}
else{
{
nctempchar1* nctemp3417= name;
nctempchar1* nctemp3420= mode;
int nctemp3423=RunOpen(nctemp3417,nctemp3420);
fd =nctemp3423;
}
}
}
}
else{
{
int nctemp3430=0;
int nctemp3427=(int)(mode->a[nctemp3430]);
int nctemp3424 = (nctemp3427 =='r');
if(nctemp3424)
{
{
nctempchar1* nctemp3437= name;
nctempchar1* nctemp3440= mode;
int nctemp3443=RunOpen(nctemp3437,nctemp3440);
fd =nctemp3443;
}
}
else{
{
struct nctempchar1 *nctemp3449;
static struct nctempchar1 nctemp3450 = {{ 20}, (char*)"Unknown file mode\n\0"};
nctemp3449=&nctemp3450;
LibeErrstr=nctemp3449;
LibeErrno = -103;
return 0;
}
}
}
}
}
}
int nctemp3452 = (fd ==0);
if(nctemp3452)
{
{
struct nctempchar1 *nctemp3461;
static struct nctempchar1 nctemp3462 = {{ 20}, (char*)"Could not open file\0"};
nctemp3461=&nctemp3462;
LibeErrstr=nctemp3461;
LibeErrno = -105;
return 0;
}
}
LibeFarr->a[slot].fd = fd;
LibeFarr->a[slot].cnt = 0;
LibeFarr->a[slot].base  = 0;
int nctemp3470=0;
int nctemp3467=(int)(mode->a[nctemp3470]);
int nctemp3464 = (nctemp3467 =='r');
if(nctemp3464)
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
int nctemp3477=fp;
nctempchar1 *nctemp3475 =LibeFarr->a[nctemp3477].base;
int nctemp3474 =(nctemp3475!=0);
if(nctemp3474)
{
{
int nctemp3482= fp;
int nctemp3484=LibeFlush(nctemp3482);
}
}
fd = LibeFarr->a[fp].fd;
int nctemp3489= fd;
int nctemp3491=RunClose(nctemp3489);
stat =nctemp3491;
int nctemp3492 = (stat ==0);
if(nctemp3492)
{
{
LibeFarr->a[fp].errflg = 1;
struct nctempchar1 *nctemp3501;
static struct nctempchar1 nctemp3502 = {{ 21}, (char*)"Could not close file\0"};
nctemp3501=&nctemp3502;
LibeErrstr=nctemp3501;
LibeErrno = -106;
return 0;
}
}
LibeFarr->a[fp].cnt = 0;
LibeFarr->a[fp].ptr = 0;
LibeFarr->a[fp].bufsize = 0;
int nctemp3507=fp;
nctempchar1 *nctemp3505 =LibeFarr->a[nctemp3507].base;
int nctemp3504 =(nctemp3505!=0);
if(nctemp3504)
{
{
int nctemp3513=fp;
RunFree(LibeFarr->a[nctemp3513].base->a);
RunFree(LibeFarr->a[nctemp3513].base);
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
int nctemp3520=fp;
int nctemp3517 = (LibeFarr->a[nctemp3520].cnt ==0);
if(nctemp3517)
{
{
int nctemp3524= fp;
int nctemp3526=LibeFillbuff(nctemp3524);
return nctemp3526;
}
}
else{
{
LibeFarr->a[fp].cnt = (LibeFarr->a[fp].cnt - 1);
LibeFarr->a[fp].ptr = (LibeFarr->a[fp].ptr + 1);
int nctemp3531=fp;
int nctemp3537=fp;
int nctemp3540 = LibeFarr->a[nctemp3537].ptr - 1;
int nctemp3533=nctemp3540;
int nctemp3528=(int)(LibeFarr->a[nctemp3531].base->a[nctemp3533]);
return nctemp3528;
}
}
}
}
int LibeUngetc (int fp)
{
{
int nctemp3544=fp;
int nctemp3541 = (LibeFarr->a[nctemp3544].eoflg ==1);
if(nctemp3541)
{
{
return -1;
}
}
int nctemp3551=fp;
int nctemp3554=fp;
int nctemp3548 = (LibeFarr->a[nctemp3551].cnt < LibeFarr->a[nctemp3554].bufsize);
if(nctemp3548)
{
{
LibeFarr->a[fp].cnt = (LibeFarr->a[fp].cnt + 1);
LibeFarr->a[fp].ptr = (LibeFarr->a[fp].ptr - 1);
int nctemp3559=fp;
int nctemp3565=fp;
int nctemp3568 = LibeFarr->a[nctemp3565].bufsize - 1;
int nctemp3556 = (LibeFarr->a[nctemp3559].ptr ==nctemp3568);
if(nctemp3556)
{
{
int nctemp3573=fp;
int nctemp3577=fp;
int nctemp3575=LibeFarr->a[nctemp3577].ptr;
int nctemp3570=(int)(LibeFarr->a[nctemp3573].base->a[nctemp3575]);
return nctemp3570;
}
}
else{
{
int nctemp3583=fp;
int nctemp3589=fp;
int nctemp3592 = LibeFarr->a[nctemp3589].ptr + 1;
int nctemp3585=nctemp3592;
int nctemp3580=(int)(LibeFarr->a[nctemp3583].base->a[nctemp3585]);
return nctemp3580;
}
}
}
}
else{
{
struct nctempchar1 *nctemp3598;
static struct nctempchar1 nctemp3599 = {{ 15}, (char*)"Pushback error\0"};
nctemp3598=&nctemp3599;
LibeErrstr=nctemp3598;
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
int nctemp3605=text->d[0];lim =nctemp3605;
p = 0;
int nctemp3610=LibeClearerr();
int nctemp3624= fp;
int nctemp3626=LibeGetc(nctemp3624);
ch =nctemp3626;
int nctemp3617 = (ch ==32);
int nctemp3629 = (ch ==9);
int nctemp3614 = (nctemp3617 || nctemp3629);
int nctemp3634 = (ch ==10);
int nctemp3611 = (nctemp3614 || nctemp3634);
int nctemp3638=nctemp3611;
while(nctemp3638)
{{
{
p = 0;
}
}
int nctemp3652= fp;
int nctemp3654=LibeGetc(nctemp3652);
ch =nctemp3654;
int nctemp3645 = (ch ==32);
int nctemp3657 = (ch ==9);
int nctemp3642 = (nctemp3645 || nctemp3657);
int nctemp3662 = (ch ==10);
int nctemp3639 = (nctemp3642 || nctemp3662);
nctemp3638=nctemp3639;}int nctemp3667= fp;
int nctemp3669=LibeUngetc(nctemp3667);
int nctemp3680= fp;
int nctemp3682=LibeGetc(nctemp3680);
ch =nctemp3682;
int nctemp3673 = (ch !=-1);
int nctemp3685 = (p < lim);
int nctemp3670 = (nctemp3673 && nctemp3685);
int nctemp3689=nctemp3670;
while(nctemp3689)
{{
{
int nctemp3696 = (ch ==32);
int nctemp3701 = (ch ==9);
int nctemp3693 = (nctemp3696 || nctemp3701);
int nctemp3706 = (ch ==10);
int nctemp3690 = (nctemp3693 || nctemp3706);
if(nctemp3690)
{
{
int nctemp3711= fp;
int nctemp3713=LibeUngetc(nctemp3711);
int nctemp3717=p;
char nctemp3720=(char)(0);
text->a[nctemp3717] =nctemp3720;
return 1;
}
}
else{
{
int nctemp3727=p;
char nctemp3730=(char)(ch);
text->a[nctemp3727] =nctemp3730;
p = (p + 1);
}
}
}
}
int nctemp3743= fp;
int nctemp3745=LibeGetc(nctemp3743);
ch =nctemp3745;
int nctemp3736 = (ch !=-1);
int nctemp3748 = (p < lim);
int nctemp3733 = (nctemp3736 && nctemp3748);
nctemp3689=nctemp3733;}int nctemp3752 = (p >= lim);
if(nctemp3752)
{
{
return 0;
}
}
else{
{
int nctemp3757 = (ch ==-1);
if(nctemp3757)
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
int nctemp3766=fp;
int nctemp3763 = (LibeFarr->a[nctemp3766].cnt ==0);
if(nctemp3763)
{
{
int nctemp3770= fp;
int nctemp3772=LibeFlushbuff(nctemp3770);
}
}
int nctemp3776=fp;
int nctemp3779=fp;
int nctemp3773 = (LibeFarr->a[nctemp3776].cnt ==LibeFarr->a[nctemp3779].bufsize);
if(nctemp3773)
{
{
int nctemp3785= fp;
int nctemp3787=LibeFlushbuff(nctemp3785);
rval =nctemp3787;
int nctemp3791=fp;
int nctemp3795=fp;
int nctemp3793=LibeFarr->a[nctemp3795].ptr;
char nctemp3798=(char)(c);
LibeFarr->a[nctemp3791].base->a[nctemp3793] =nctemp3798;
LibeFarr->a[fp].ptr = (LibeFarr->a[fp].ptr + 1);
LibeFarr->a[fp].cnt = (LibeFarr->a[fp].cnt + 1);
return rval;
}
}
else{
{
int nctemp3805=fp;
int nctemp3809=fp;
int nctemp3807=LibeFarr->a[nctemp3809].ptr;
char nctemp3812=(char)(c);
LibeFarr->a[nctemp3805].base->a[nctemp3807] =nctemp3812;
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
int nctemp3820=s->d[0];ls =nctemp3820;
i = 0;
int nctemp3833=i;
int nctemp3830=(int)(s->a[nctemp3833]);
int nctemp3827 = (nctemp3830 !=0);
int nctemp3837 = (i < ls);
int nctemp3824 = (nctemp3827 && nctemp3837);
int nctemp3841=nctemp3824;
while(nctemp3841)
{{
{
int nctemp3845= fp;
int nctemp3852=i;
int nctemp3849=(int)(s->a[nctemp3852]);
int nctemp3847= nctemp3849;
int nctemp3854=LibePutc(nctemp3845,nctemp3847);
int nctemp3842 = (nctemp3854 ==0);
if(nctemp3842)
{
{
struct nctempchar1 *nctemp3861;
static struct nctempchar1 nctemp3862 = {{ 12}, (char*)"write error\0"};
nctemp3861=&nctemp3862;
LibeErrstr=nctemp3861;
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
int nctemp3873=i;
int nctemp3870=(int)(s->a[nctemp3873]);
int nctemp3867 = (nctemp3870 !=0);
int nctemp3877 = (i < ls);
int nctemp3864 = (nctemp3867 && nctemp3877);
nctemp3841=nctemp3864;}int nctemp3882= fp;
int nctemp3884=LibeFlushbuff(nctemp3882);
return 1;
}
}
int LibePuti (int fp,int ival)
{
{
int nctemp3887= ival;
nctempchar1* nctemp3889= LibeTmpstr;
int nctemp3892=LibeItoa(nctemp3887,nctemp3889);
int nctemp3894= fp;
nctempchar1* nctemp3896= LibeTmpstr;
int nctemp3899=LibePuts(nctemp3894,nctemp3896);
return nctemp3899;
}
}
int LibePutf (int fp,float fval,nctempchar1 *form)
{
{
float nctemp3901= fval;
nctempchar1* nctemp3903= form;
nctempchar1* nctemp3906= LibeTmpstr;
int nctemp3909=LibeFtoa(nctemp3901,nctemp3903,nctemp3906);
int nctemp3911= fp;
nctempchar1* nctemp3913= LibeTmpstr;
int nctemp3916=LibePuts(nctemp3911,nctemp3913);
return nctemp3916;
}
}
int LibePs (nctempchar1 *s)
{
{
int nctemp3918= 3;
nctempchar1* nctemp3920= s;
int nctemp3923=LibePuts(nctemp3918,nctemp3920);
return 1;
}
}
int LibePi (int n)
{
{
int nctemp3926= 3;
int nctemp3928= n;
int nctemp3930=LibePuti(nctemp3926,nctemp3928);
return 1;
}
}
int LibePf (float r)
{
{
int nctemp3933= 3;
float nctemp3935= r;
struct nctempchar1 *nctemp3939;
static struct nctempchar1 nctemp3940 = {{ 2}, (char*)"g\0"};
nctemp3939=&nctemp3940;
nctempchar1* nctemp3937= nctemp3939;
int nctemp3941=LibePutf(nctemp3933,nctemp3935,nctemp3937);
return 1;
}
}
int LibeRead (int fp,int n,nctempchar1 *buffer)
{
int rval;
{
int nctemp3946=fp;
int nctemp3943 = (LibeFarr->a[nctemp3946].readflg !=1);
if(nctemp3943)
{
{
struct nctempchar1 *nctemp3954;
static struct nctempchar1 nctemp3955 = {{ 26}, (char*)"File not open for reading\0"};
nctemp3954=&nctemp3955;
LibeErrstr=nctemp3954;
LibeErrno = -109;
return -1;
}
}
int nctemp3961=buffer->d[0];int nctemp3957 = (n > nctemp3961);
if(nctemp3957)
{
{
LibeErrno = -108;
struct nctempchar1 *nctemp3970;
static struct nctempchar1 nctemp3971 = {{ 30}, (char*)"The buffer array is too small\0"};
nctemp3970=&nctemp3971;
LibeErrstr=nctemp3970;
return 0;
}
}
int nctemp3979=fp;
int nctemp3977= LibeFarr->a[nctemp3979].fd;
int nctemp3981= n;
nctempchar1* nctemp3983= buffer;
int nctemp3986=RunRead(nctemp3977,nctemp3981,nctemp3983);
rval =nctemp3986;
int nctemp3987 = (rval ==-1);
if(nctemp3987)
{
{
LibeFarr->a[fp].eoflg = 1;
rval = -1;
}
}
else{
{
int nctemp3991 = (rval ==0);
if(nctemp3991)
{
{
LibeFarr->a[fp].errflg = 1;
struct nctempchar1 *nctemp4000;
static struct nctempchar1 nctemp4001 = {{ 11}, (char*)"read error\0"};
nctemp4000=&nctemp4001;
LibeErrstr=nctemp4000;
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
int nctemp4007=buffer->d[0];int nctemp4003 = (n > nctemp4007);
if(nctemp4003)
{
{
LibeErrno = -108;
struct nctempchar1 *nctemp4016;
static struct nctempchar1 nctemp4017 = {{ 30}, (char*)"The buffer array is too small\0"};
nctemp4016=&nctemp4017;
LibeErrstr=nctemp4016;
return 0;
}
}
int nctemp4022=fp;
int nctemp4019 = (LibeFarr->a[nctemp4022].writflg !=1);
if(nctemp4019)
{
{
struct nctempchar1 *nctemp4030;
static struct nctempchar1 nctemp4031 = {{ 26}, (char*)"file not open for writing\0"};
nctemp4030=&nctemp4031;
LibeErrstr=nctemp4030;
LibeErrno = -110;
return 0;
}
}
int nctemp4039=fp;
int nctemp4037= LibeFarr->a[nctemp4039].fd;
int nctemp4041= n;
nctempchar1* nctemp4043= buffer;
int nctemp4046=RunWrite(nctemp4037,nctemp4041,nctemp4043);
rval =nctemp4046;
int nctemp4047 = (rval ==0);
if(nctemp4047)
{
{
LibeFarr->a[fp].errflg = 1;
struct nctempchar1 *nctemp4056;
static struct nctempchar1 nctemp4057 = {{ 12}, (char*)"write error\0"};
nctemp4056=&nctemp4057;
LibeErrstr=nctemp4056;
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
int nctemp4065=fp;
int nctemp4063= LibeFarr->a[nctemp4065].fd;
int nctemp4067= pos;
int nctemp4069= flag;
int nctemp4071=RunSeek(nctemp4063,nctemp4067,nctemp4069);
rval =nctemp4071;
int nctemp4072 = (rval ==0);
if(nctemp4072)
{
{
LibeFarr->a[fp].errflg = 1;
struct nctempchar1 *nctemp4081;
static struct nctempchar1 nctemp4082 = {{ 11}, (char*)"Seek error\0"};
nctemp4081=&nctemp4082;
LibeErrstr=nctemp4081;
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
int nctemp4090=i;
nctempchar1 *nctemp4088 =LibeFarr->a[nctemp4090].base;
int nctemp4087 =(nctemp4088!=0);
if(nctemp4087)
{
{
int nctemp4094 = (i > 4);
if(nctemp4094)
{
{
fd = LibeFarr->a[i].fd;
int nctemp4102= fd;
int nctemp4104=RunClose(nctemp4102);
stat =nctemp4104;
int nctemp4105 = (stat ==0);
if(nctemp4105)
{
{
struct nctempchar1 *nctemp4114;
static struct nctempchar1 nctemp4115 = {{ 21}, (char*)"Could not close file\0"};
nctemp4114=&nctemp4115;
LibeErrstr=nctemp4114;
LibeErrno = -106;
}
}
}
}
int nctemp4120= i;
int nctemp4122=LibeFlush(nctemp4120);
stat =nctemp4122;
int nctemp4125=i;
RunFree(LibeFarr->a[nctemp4125].base->a);
RunFree(LibeFarr->a[nctemp4125].base);
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
int nctemp4137= 4;
struct nctempchar1 *nctemp4141;
static struct nctempchar1 nctemp4142 = {{ 37}, (char*)"Array index out of bond at line no: \0"};
nctemp4141=&nctemp4142;
nctempchar1* nctemp4139= nctemp4141;
int nctemp4143=LibePuts(nctemp4137,nctemp4139);
int nctemp4145= 4;
int nctemp4147= line;
int nctemp4149=LibePuti(nctemp4145,nctemp4147);
int nctemp4151= 4;
struct nctempchar1 *nctemp4155;
static struct nctempchar1 nctemp4156 = {{ 3}, (char*)"\n\0"};
nctemp4155=&nctemp4156;
nctempchar1* nctemp4153= nctemp4155;
int nctemp4157=LibePuts(nctemp4151,nctemp4153);
int nctemp4159= 4;
struct nctempchar1 *nctemp4163;
static struct nctempchar1 nctemp4164 = {{ 13}, (char*)"Array name: \0"};
nctemp4163=&nctemp4164;
nctempchar1* nctemp4161= nctemp4163;
int nctemp4165=LibePuts(nctemp4159,nctemp4161);
int nctemp4167= 4;
nctempchar1* nctemp4169= name;
int nctemp4172=LibePuts(nctemp4167,nctemp4169);
int nctemp4174= 4;
struct nctempchar1 *nctemp4178;
static struct nctempchar1 nctemp4179 = {{ 3}, (char*)"\n\0"};
nctemp4178=&nctemp4179;
nctempchar1* nctemp4176= nctemp4178;
int nctemp4180=LibePuts(nctemp4174,nctemp4176);
int nctemp4182= 4;
struct nctempchar1 *nctemp4186;
static struct nctempchar1 nctemp4187 = {{ 11}, (char*)"Index no: \0"};
nctemp4186=&nctemp4187;
nctempchar1* nctemp4184= nctemp4186;
int nctemp4188=LibePuts(nctemp4182,nctemp4184);
int nctemp4190= 4;
int nctemp4192= index;
int nctemp4194=LibePuti(nctemp4190,nctemp4192);
int nctemp4196= 4;
struct nctempchar1 *nctemp4200;
static struct nctempchar1 nctemp4201 = {{ 3}, (char*)"\n\0"};
nctemp4200=&nctemp4201;
nctempchar1* nctemp4198= nctemp4200;
int nctemp4202=LibePuts(nctemp4196,nctemp4198);
int nctemp4204= 4;
struct nctempchar1 *nctemp4208;
static struct nctempchar1 nctemp4209 = {{ 14}, (char*)"Index value: \0"};
nctemp4208=&nctemp4209;
nctempchar1* nctemp4206= nctemp4208;
int nctemp4210=LibePuts(nctemp4204,nctemp4206);
int nctemp4212= 4;
int nctemp4214= ival;
int nctemp4216=LibePuti(nctemp4212,nctemp4214);
int nctemp4218= 4;
struct nctempchar1 *nctemp4222;
static struct nctempchar1 nctemp4223 = {{ 3}, (char*)"\n\0"};
nctemp4222=&nctemp4223;
nctempchar1* nctemp4220= nctemp4222;
int nctemp4224=LibePuts(nctemp4218,nctemp4220);
int nctemp4226= 4;
struct nctempchar1 *nctemp4230;
static struct nctempchar1 nctemp4231 = {{ 16}, (char*)"Index bound: 0-\0"};
nctemp4230=&nctemp4231;
nctempchar1* nctemp4228= nctemp4230;
int nctemp4232=LibePuts(nctemp4226,nctemp4228);
int nctemp4234= 4;
int nctemp4241 = bound - 1;
int nctemp4236= nctemp4241;
int nctemp4242=LibePuti(nctemp4234,nctemp4236);
int nctemp4244= 4;
struct nctempchar1 *nctemp4248;
static struct nctempchar1 nctemp4249 = {{ 3}, (char*)"\n\0"};
nctemp4248=&nctemp4249;
nctempchar1* nctemp4246= nctemp4248;
int nctemp4250=LibePuts(nctemp4244,nctemp4246);
int nctemp4252= 4;
int nctemp4254=LibeFlush(nctemp4252);
int nctemp4256=RunExit();
return 1;
}
}
int LibeSystem (nctempchar1 *cmd)
{
int rval;
{
nctempchar1* nctemp4262= cmd;
int nctemp4265=RunSystem(nctemp4262);
rval =nctemp4265;
return rval;
}
}
int LibeInit ()
{
int rval;
{
int nctemp4271=LibeErrinit();
rval =nctemp4271;
int nctemp4276=LibeIoinit();
rval =nctemp4276;
int nctemp4281=LibeMathinit();
rval =nctemp4281;
int nctemp4286= 1024;
int nctemp4288=LibeSetnb(nctemp4286);
rval =nctemp4288;
int nctemp4293= 1024;
int nctemp4295=LibeSetnt(nctemp4293);
rval =nctemp4295;
return rval;
}
}
int LibeExit ()
{
{
int nctemp4298=RunExit();
return 1;
}
}
nctempchar1 * LibeDate ()
{
{
nctempchar1* nctemp4301=RunDate();
return nctemp4301;
}
}
