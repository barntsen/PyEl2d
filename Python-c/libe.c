//  Translated by epsc  version today  
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
LibeErrno = 1;
LibeErrstr  = 0;
return 1;
}
int LibeGeterrno ()
{
return LibeErrno;
}
int LibeClearerr ()
{
LibeErrno = 1;
return 1;
}
nctempchar1 * LibeGeterrstr ()
{
return LibeErrstr;
}
nctempchar1 * LibeGetenv (nctempchar1 *name)
{
nctempchar1* nctemp7= name;
nctempchar1* nctemp10=RunGetenv(nctemp7);
return nctemp10;
}
float LibeMach (int flag)
{
int nctemp11 = (flag ==1);
if(nctemp11)
{
return 1.1754943508222875e-38;
}
else{
int nctemp16 = (flag ==2);
if(nctemp16)
{
return 3.4028234663852886e+38;
}
else{
int nctemp21 = (flag ==3);
if(nctemp21)
{
return 5.9604644775390625e-08;
}
else{
int nctemp26 = (flag ==4);
if(nctemp26)
{
return 1.1920928955078125e-07;
}
else{
int nctemp31 = (flag ==5);
if(nctemp31)
{
return 0.6931471805599453;
}
else{
float nctemp37=(float)(0);
return nctemp37;
}
}
}
}
}
}
float LibeFabs (float x)
{
int nctemp40 = (x < 0.0);
if(nctemp40)
{
float nctemp44= -x;
return nctemp44;
}
else{
return x;
}
}
float LibeFscale2 (float x,int n)
{
int i;
float rval;
int nctemp46 = (n ==0);
if(nctemp46)
{
return x;
}
rval = 1.0;
int nctemp51 = (n > 0);
if(nctemp51)
{
for(i = 0;i < n;i = (i + 1)){
rval = (rval * 2.0);
}
}
else{
n =  -n;
for(i = 0;i < n;i = (i + 1)){
rval = (rval * 0.5);
}
}
float nctemp59 = rval * x;
return nctemp59;
}
float LibeGetfman2 (float x)
{
float absx;
int n;
float nctemp64= x;
float nctemp66=LibeFabs(nctemp64);
absx =nctemp66;
n = 0;
int nctemp67 = (x ==0.0);
if(nctemp67)
{
return 0.0;
}
int nctemp72 = (absx < 0.5);
int nctemp76=nctemp72;
while(nctemp76)
{{
n = (n - 1);
absx = (absx * 2.0);
}
int nctemp77 = (absx < 0.5);
nctemp76=nctemp77;}int nctemp81 = (absx >= 1.0);
int nctemp85=nctemp81;
while(nctemp85)
{{
n = (n + 1);
absx = (absx * 0.5);
}
int nctemp86 = (absx >= 1.0);
nctemp85=nctemp86;}int nctemp90 = (x < 0.0);
if(nctemp90)
{
float nctemp94= -absx;
return nctemp94;
}
else{
return absx;
}
}
int LibeGetfexp2 (float x)
{
float absx;
int n;
float nctemp100= x;
float nctemp102=LibeFabs(nctemp100);
absx =nctemp102;
n = 0;
int nctemp103 = (x ==0.0);
if(nctemp103)
{
return 0;
}
int nctemp108 = (absx < 0.5);
int nctemp112=nctemp108;
while(nctemp112)
{{
n = (n - 1);
absx = (absx * 2.0);
}
int nctemp113 = (absx < 0.5);
nctemp112=nctemp113;}int nctemp117 = (absx >= 1.0);
int nctemp121=nctemp117;
while(nctemp121)
{{
n = (n + 1);
absx = (absx * 0.5);
}
int nctemp122 = (absx >= 1.0);
nctemp121=nctemp122;}return n;
}
float LibeFscale (float x,int n)
{
int i;
float rval;
rval = 1.0;
int nctemp127 = (n ==0);
if(nctemp127)
{
return x;
}
int nctemp132 = (n > 0);
if(nctemp132)
{
for(i = 0;i < n;i = (i + 1)){
rval = (rval * 10.0);
}
}
else{
n =  -n;
for(i = 0;i < n;i = (i + 1)){
rval = (rval * 0.1);
}
}
float nctemp140 = rval * x;
return nctemp140;
}
int LibeGetfman (float f,int maxdig)
{
int sign;
int nexp;
int n;
int i;
int nctemp141 = (f ==0.0);
if(nctemp141)
{
return 0;
}
sign = 1;
int nctemp146 = (f < 0.0);
if(nctemp146)
{
f =  -f;
sign =  -sign;
}
nexp = 0;
float nctemp160 = f / 10.0;
float nctemp162 = nctemp160 + 1.1920928955078125e-07;
int nctemp150 = (nctemp162 >= 1.0);
if(nctemp150)
{
float nctemp174 = f / 10.0;
float nctemp176 = nctemp174 + 1.1920928955078125e-07;
int nctemp164 = (nctemp176 >= 1.0);
int nctemp178=nctemp164;
while(nctemp178)
{{
f = (f / 10.0);
nexp = (nexp + 1);
}
float nctemp189 = f / 10.0;
float nctemp191 = nctemp189 + 1.1920928955078125e-07;
int nctemp179 = (nctemp191 >= 1.0);
nctemp178=nctemp179;}}
else{
float nctemp200 = f + 1.1920928955078125e-07;
int nctemp193 = (nctemp200 < 1.0);
if(nctemp193)
{
float nctemp209 = f + 1.1920928955078125e-07;
int nctemp202 = (nctemp209 < 1.0);
int nctemp211=nctemp202;
while(nctemp211)
{{
f = (f * 10.0);
nexp = (nexp - 1);
}
float nctemp219 = f + 1.1920928955078125e-07;
int nctemp212 = (nctemp219 < 1.0);
nctemp211=nctemp212;}}
}
for(i = 0;i < (maxdig - 1);i = (i + 1)){
f = (f * 10.0);
}
float nctemp231 = f + 0.5;
int nctemp225=(int)(nctemp231);
n =nctemp225;
int nctemp232 = (sign < 0);
if(nctemp232)
{
n =  -n;
}
return n;
}
float LibeGetffman (float f)
{
int sign;
int nexp;
int nctemp237 = (f ==0.0);
if(nctemp237)
{
return 0.0;
}
sign = 1;
int nctemp242 = (f < 0.0);
if(nctemp242)
{
f =  -f;
sign =  -sign;
}
nexp = 0;
float nctemp256 = f / 10.0;
float nctemp258 = nctemp256 + 1.1920928955078125e-07;
int nctemp246 = (nctemp258 >= 1.0);
if(nctemp246)
{
float nctemp270 = f / 10.0;
float nctemp272 = nctemp270 + 1.1920928955078125e-07;
int nctemp260 = (nctemp272 >= 1.0);
int nctemp274=nctemp260;
while(nctemp274)
{{
f = (f / 10.0);
nexp = (nexp + 1);
}
float nctemp285 = f / 10.0;
float nctemp287 = nctemp285 + 1.1920928955078125e-07;
int nctemp275 = (nctemp287 >= 1.0);
nctemp274=nctemp275;}}
else{
float nctemp296 = f + 1.1920928955078125e-07;
int nctemp289 = (nctemp296 < 1.0);
if(nctemp289)
{
float nctemp305 = f + 1.1920928955078125e-07;
int nctemp298 = (nctemp305 < 1.0);
int nctemp307=nctemp298;
while(nctemp307)
{{
f = (f * 10.0);
nexp = (nexp - 1);
}
float nctemp315 = f + 1.1920928955078125e-07;
int nctemp308 = (nctemp315 < 1.0);
nctemp307=nctemp308;}}
}
return f;
}
int LibeGetmaxdig (float f)
{
int sign;
int nexp;
int i;
int loop;
float r;
int nctemp318 = (f ==0.0);
if(nctemp318)
{
return 0;
}
sign = 1;
int nctemp323 = (f < 0.0);
if(nctemp323)
{
f =  -f;
sign =  -sign;
}
nexp = 0;
float nctemp337 = f / 10.0;
float nctemp339 = nctemp337 + 1.1920928955078125e-07;
int nctemp327 = (nctemp339 >= 1.0);
if(nctemp327)
{
float nctemp351 = f / 10.0;
float nctemp353 = nctemp351 + 1.1920928955078125e-07;
int nctemp341 = (nctemp353 >= 1.0);
int nctemp355=nctemp341;
while(nctemp355)
{{
f = (f / 10.0);
nexp = (nexp + 1);
}
float nctemp366 = f / 10.0;
float nctemp368 = nctemp366 + 1.1920928955078125e-07;
int nctemp356 = (nctemp368 >= 1.0);
nctemp355=nctemp356;}}
else{
float nctemp377 = f + 1.1920928955078125e-07;
int nctemp370 = (nctemp377 < 1.0);
if(nctemp370)
{
float nctemp386 = f + 1.1920928955078125e-07;
int nctemp379 = (nctemp386 < 1.0);
int nctemp388=nctemp379;
while(nctemp388)
{{
f = (f * 10.0);
nexp = (nexp - 1);
}
float nctemp396 = f + 1.1920928955078125e-07;
int nctemp389 = (nctemp396 < 1.0);
nctemp388=nctemp389;}}
}
i = 0;
loop = 1;
int nctemp399=loop;
while(nctemp399)
{{
int nctemp411=(int)(f);
float nctemp408=(float)(nctemp411);
float nctemp414 = f - nctemp408;
r =nctemp414;
int nctemp415 = (r < 1.1920928955078125e-07);
if(nctemp415)
{
loop = 0;
}
else{
f = (f * 10.0);
}
i = (i + 1);
int nctemp419 = (i >= 10);
if(nctemp419)
{
loop = 0;
}
}
nctemp399=loop;}return i;
}
int LibeGetfexp (float f)
{
int nexp;
int nctemp425 = (f ==0.0);
if(nctemp425)
{
return 0;
}
nexp = 0;
int nctemp430 = (f < 0.0);
if(nctemp430)
{
f =  -f;
}
float nctemp444 = f / 10.0;
float nctemp446 = nctemp444 + 1.1920928955078125e-07;
int nctemp434 = (nctemp446 >= 1.0);
if(nctemp434)
{
float nctemp458 = f / 10.0;
float nctemp460 = nctemp458 + 1.1920928955078125e-07;
int nctemp448 = (nctemp460 >= 1.0);
int nctemp462=nctemp448;
while(nctemp462)
{{
f = (f / 10.0);
nexp = (nexp + 1);
}
float nctemp473 = f / 10.0;
float nctemp475 = nctemp473 + 1.1920928955078125e-07;
int nctemp463 = (nctemp475 >= 1.0);
nctemp462=nctemp463;}}
else{
float nctemp484 = f + 1.1920928955078125e-07;
int nctemp477 = (nctemp484 < 1.0);
if(nctemp477)
{
float nctemp493 = f + 1.1920928955078125e-07;
int nctemp486 = (nctemp493 < 1.0);
int nctemp495=nctemp486;
while(nctemp495)
{{
f = (f * 10.0);
nexp = (nexp - 1);
}
float nctemp503 = f + 1.1920928955078125e-07;
int nctemp496 = (nctemp503 < 1.0);
nctemp495=nctemp496;}}
}
return nexp;
}
float LibeClock ()
{
float nctemp507=RunClock();
return nctemp507;
}
static float LibeSincosmax;
static float LibeSincoslim;
static float LibeLnmax;
static float LibeLnmin;
int LibeMod (int n,int r)
{
int nctemp508 = (r ==0);
if(nctemp508)
{
return n;
}
int nctemp524 = n / r;
int nctemp526 = nctemp524 * r;
int nctemp527 = n - nctemp526;
return nctemp527;
}
float LibeSqrt (float x)
{
float f;
float yest;
float z;
int n;
int nctemp528 = (x ==0.0);
if(nctemp528)
{
return 0.0;
}
int nctemp533 = (x < 0.0);
if(nctemp533)
{
LibeErrno = (-101);
struct nctempchar1 *nctemp542;
static struct nctempchar1 nctemp543 = {{ 25}, (char*)"Sqrt input argument < 0 \0"};
nctemp542=&nctemp543;
LibeErrstr=nctemp542;
return 0.0;
}
float nctemp549= x;
float nctemp551=LibeGetfman2(nctemp549);
f =nctemp551;
float nctemp556= x;
int nctemp558=LibeGetfexp2(nctemp556);
n =nctemp558;
yest = (0.41731 + (0.59016 * f));
z = (yest + (f / yest));
yest = ((0.25 * z) + (f / z));
int nctemp562= n;
int nctemp564= 2;
int nctemp566=LibeMod(nctemp562,nctemp564);
int nctemp559 = (nctemp566 !=0);
if(nctemp559)
{
yest = (yest * 0.70710678118654752440);
n = (n + 1);
}
float nctemp569= yest;
int nctemp576 = n / 2;
int nctemp571= nctemp576;
float nctemp577=LibeFscale2(nctemp569,nctemp571);
return nctemp577;
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
int nctemp578 = (x <= 0.0);
if(nctemp578)
{
LibeErrno = (-101);
struct nctempchar1 *nctemp587;
static struct nctempchar1 nctemp588 = {{ 23}, (char*)"Ln input argument < 0 \0"};
nctemp587=&nctemp588;
LibeErrstr=nctemp587;
return 3.4028234663852886e+38;
}
float nctemp594= x;
float nctemp596=LibeGetfman2(nctemp594);
f =nctemp596;
float nctemp601= x;
int nctemp603=LibeGetfexp2(nctemp601);
n =nctemp603;
int nctemp604 = (f > 0.70710678118654752440);
if(nctemp604)
{
zn = ((f - 0.5) - 0.5);
zd = ((f * 0.5) + 0.5);
}
else{
zn = (f - 0.5);
zd = ((zn * 0.5) + 0.5);
n = (n - 1);
}
z = (zn / zd);
w = (z * z);
r = (z + (z * ((w * (-0.5527074855E+0)) / (w + (-0.6632718214E+1)))));
float nctemp612=(float)(n);
xn =nctemp612;
float nctemp625 = xn * (-2.121944400546905827679E-4);
float nctemp627 = nctemp625 + r;
float nctemp633 = xn * 0.69335938;
float nctemp634 = nctemp627 + nctemp633;
return nctemp634;
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
P0 = 0.24999999950E+0;
P1 = 0.41602886268E-2;
Q1 = 0.49987178778E-1;
int nctemp635 = (x >= LibeLnmax);
if(nctemp635)
{
LibeErrno = (-102);
struct nctempchar1 *nctemp644;
static struct nctempchar1 nctemp645 = {{ 25}, (char*)"Overflow in exp function\0"};
nctemp644=&nctemp645;
LibeErrstr=nctemp644;
return 3.4028234663852886e+38;
}
int nctemp647 = (x < LibeLnmin);
if(nctemp647)
{
LibeErrno = (-102);
struct nctempchar1 *nctemp656;
static struct nctempchar1 nctemp657 = {{ 26}, (char*)"Underflow in exp function\0"};
nctemp656=&nctemp657;
LibeErrstr=nctemp656;
return 0.0;
}
float nctemp669 = x * 1.4426950408889634073;
int nctemp663=(int)(nctemp669);
n =nctemp663;
float nctemp674=(float)(n);
xn =nctemp674;
g = (x - (xn * 0.693147180559945309417232));
z = (g * g);
p = (((P1 * z) + P0) * g);
q = ((Q1 * z) + 0.5);
rval = (0.5 + (p / (q - p)));
float nctemp678= rval;
int nctemp685 = n + 1;
int nctemp680= nctemp685;
float nctemp686=LibeFscale2(nctemp678,nctemp680);
return nctemp686;
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
R1 =  -0.1666665668E+0;
R2 = 0.8333025139E-2;
R3 =  -0.1980741872E-3;
R4 = 0.2601903036E-5;
int nctemp687 = (y > LibeSincosmax);
if(nctemp687)
{
LibeErrno = (-102);
struct nctempchar1 *nctemp696;
static struct nctempchar1 nctemp697 = {{ 37}, (char*)"Loss of accuracy in sin/cos function\0"};
nctemp696=&nctemp697;
LibeErrstr=nctemp696;
return 0.0;
}
float nctemp712 = y * 0.31830988618379067154;
float nctemp714 = nctemp712 + 0.5;
int nctemp703=(int)(nctemp714);
n =nctemp703;
float nctemp719=(float)(n);
xn =nctemp719;
int nctemp725= n;
int nctemp727= 2;
int nctemp729=LibeMod(nctemp725,nctemp727);
int nctemp722 = (nctemp729 !=0);
if(nctemp722)
{
sign =  -sign;
}
float nctemp735= x;
float nctemp737=LibeFabs(nctemp735);
x =nctemp737;
int nctemp738 = (x !=y);
if(nctemp738)
{
xn = (xn - 0.5);
}
float nctemp749= x;
float nctemp751=LibeFabs(nctemp749);
float nctemp757 = xn * 3.1415926535897932384626433832795028841972;
float nctemp758 = nctemp751 - nctemp757;
f =nctemp758;
float nctemp762= f;
float nctemp764=LibeFabs(nctemp762);
int nctemp759 = (nctemp764 < LibeSincoslim);
if(nctemp759)
{
float nctemp770 = sign * f;
return nctemp770;
}
g = (f * f);
g = (((((((R4 * g) + R3) * g) + R2) * g) + R1) * g);
g = (f + (f * g));
float nctemp775 = sign * g;
return nctemp775;
}
float LibeSin (float x)
{
int nctemp776 = (x < 0.0);
if(nctemp776)
{
float nctemp781= x;
float nctemp784= -x;
float nctemp783= nctemp784;
float nctemp786= -1.0;
float nctemp785= nctemp786;
float nctemp787=LibeSincos(nctemp781,nctemp783,nctemp785);
return nctemp787;
}
else{
float nctemp789= x;
float nctemp791= x;
float nctemp793= 1.0;
float nctemp795=LibeSincos(nctemp789,nctemp791,nctemp793);
return nctemp795;
}
}
float LibeCos (float x)
{
float nctemp797= x;
float nctemp803= x;
float nctemp805=LibeFabs(nctemp803);
float nctemp807 = nctemp805 + 1.57079632679489661923132;
float nctemp799= nctemp807;
float nctemp808= 1.0;
float nctemp810=LibeSincos(nctemp797,nctemp799,nctemp808);
return nctemp810;
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
P1 =  -0.958017723E-1;
Q1 =  -0.429135777E+0;
Q2 = 0.971685835E-2;
float nctemp815= x;
float nctemp817=LibeFabs(nctemp815);
y =nctemp817;
int nctemp818 = (y > LibeSincosmax);
if(nctemp818)
{
LibeErrno = (-102);
struct nctempchar1 *nctemp827;
static struct nctempchar1 nctemp828 = {{ 33}, (char*)"Loss of accuracy in tan function\0"};
nctemp827=&nctemp828;
LibeErrstr=nctemp827;
return 0.0;
}
float nctemp840 = x * 0.63661977236758134308;
int nctemp834=(int)(nctemp840);
n =nctemp834;
float nctemp845=(float)(n);
xn =nctemp845;
f = (x - (xn * 1.57079632679489661923132));
float nctemp851= f;
float nctemp853=LibeFabs(nctemp851);
int nctemp848 = (nctemp853 < LibeSincoslim);
if(nctemp848)
{
xnum = f;
xden = 1.0;
}
else{
g = (f * f);
xnum = (((P1 * g) * f) + f);
xden = (((((Q2 * g) + Q1) * g) + 0.5) + 0.5);
}
int nctemp858= n;
int nctemp860= 2;
int nctemp862=LibeMod(nctemp858,nctemp860);
int nctemp855 = (nctemp862 !=0);
if(nctemp855)
{
float nctemp867= -xnum;
float nctemp868 = xden / nctemp867;
return nctemp868;
}
else{
float nctemp873 = xnum / xden;
return nctemp873;
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
P1 = 0.933935835E+0;
P2 =  -0.504400557E+0;
Q0 = 0.560363004E+1;
Q1 =  -0.554846723E+1;
float nctemp878= x;
float nctemp880=LibeFabs(nctemp878);
y =nctemp880;
int nctemp881 = (y > 0.5);
if(nctemp881)
{
i = 1;
int nctemp885 = (y > 1.0);
if(nctemp885)
{
LibeErrno = (-101);
struct nctempchar1 *nctemp894;
static struct nctempchar1 nctemp895 = {{ 41}, (char*)"Absolute value of argument of arcsin > 1\0"};
nctemp894=&nctemp895;
LibeErrstr=nctemp894;
return 3.4028234663852886e+38;
}
g = ((1.0 - y) * 0.5);
float nctemp901= g;
float nctemp903=LibeSqrt(nctemp901);
r =nctemp903;
r =  -r;
y = (r + r);
r = ((((P2 * g) + P1) * g) / (((g + Q1) * g) + Q0));
res = (y + (y * r));
}
else{
i = 0;
int nctemp904 = (y < LibeSincoslim);
if(nctemp904)
{
res = y;
}
else{
g = (y * y);
g = ((((P2 * g) + P1) * g) / (((g + Q1) * g) + Q0));
res = (y + (y * g));
}
}
int nctemp908 = (i ==1);
if(nctemp908)
{
res = (0.78539816339744830962 + (0.78539816339744830962 + res));
}
int nctemp912 = (x < 0.0);
if(nctemp912)
{
res =  -res;
}
return res;
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
P1 = 0.933935835E+0;
P2 =  -0.504400557E+0;
Q0 = 0.560363004E+1;
Q1 =  -0.554846723E+1;
float nctemp921= x;
float nctemp923=LibeFabs(nctemp921);
y =nctemp923;
int nctemp924 = (y > 0.5);
if(nctemp924)
{
i = 0;
int nctemp928 = (y > 1.0);
if(nctemp928)
{
LibeErrno = (-101);
struct nctempchar1 *nctemp937;
static struct nctempchar1 nctemp938 = {{ 50}, (char*)"Absolute value of argument of arccos out of range\0"};
nctemp937=&nctemp938;
LibeErrstr=nctemp937;
return 3.4028234663852886e+38;
}
g = ((1.0 - y) * 0.5);
float nctemp944= g;
float nctemp946=LibeSqrt(nctemp944);
r =nctemp946;
r =  -r;
y = (r + r);
r = ((((P2 * g) + P1) * g) / (((g + Q1) * g) + Q0));
res = (y + (y * r));
}
else{
i = 1;
int nctemp947 = (y < LibeSincoslim);
if(nctemp947)
{
res = y;
}
else{
g = (y * y);
g = ((((P2 * g) + P1) * g) / (((g + Q1) * g) + Q0));
res = (y + (y * g));
}
}
int nctemp951 = (x < 0.0);
if(nctemp951)
{
int nctemp955 = (i ==0);
if(nctemp955)
{
res = (1.57079632679489661923132 + (1.57079632679489661923132 + res));
}
else{
res = (0.78539816339744830962 + (0.78539816339744830962 + res));
}
}
else{
int nctemp959 = (i ==1);
if(nctemp959)
{
res = (0.78539816339744830962 + (0.78539816339744830962 - res));
}
else{
res =  -res;
}
}
return res;
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
rt32 = 0.26794919243112270647;
rt3 = 1.73205080756887729353;
a = (rt3 - 1.0);
P0 =  -0.4708325141E+0;
P1 =  -0.5090958253E-1;
Q0 = 0.1412500740E+1;
int nctemp964 = (f > 1.0);
if(nctemp964)
{
f = (1.0 / f);
n = 2;
}
else{
n = 0;
}
int nctemp968 = (f > rt32);
if(nctemp968)
{
f = (((((a * f) - 0.5) - 0.5) + f) / (rt3 + f));
n = (n + 1);
}
float nctemp975= f;
float nctemp977=LibeFabs(nctemp975);
int nctemp972 = (nctemp977 < LibeSincoslim);
if(nctemp972)
{
res = f;
}
else{
g = (f * f);
res = ((((P1 * g) + P0) * g) / (g + Q0));
res = (f + (f * res));
}
int nctemp979 = (n > 1);
if(nctemp979)
{
res =  -res;
}
int nctemp983 = (n ==1);
if(nctemp983)
{
res = (res + 0.52359877559829887308);
}
else{
int nctemp987 = (n ==2);
if(nctemp987)
{
res = (res + 1.57079632679489661923132);
}
else{
int nctemp991 = (n ==3);
if(nctemp991)
{
res = (res + 1.04719755119659774615);
}
}
}
return res;
}
float LibeArctan (float x)
{
float rval;
int nctemp996 = (x < 0.0);
if(nctemp996)
{
float nctemp1005= -x;
float nctemp1004= nctemp1005;
float nctemp1006=LibeAtan(nctemp1004);
rval =nctemp1006;
rval =  -rval;
}
else{
float nctemp1011= x;
float nctemp1013=LibeAtan(nctemp1011);
rval =nctemp1013;
}
return rval;
}
float LibePow (float base,float exponent)
{
float nctemp1021= base;
float nctemp1023=LibeLn(nctemp1021);
float nctemp1024 = exponent * nctemp1023;
float nctemp1016= nctemp1024;
float nctemp1025=LibeExp(nctemp1016);
return nctemp1025;
}
int LibeMathinit ()
{
float nctemp1030= 1.0;
int nctemp1037 = 24 - 1;
int nctemp1032= nctemp1037;
float nctemp1038=LibeFscale2(nctemp1030,nctemp1032);
LibeSincosmax =nctemp1038;
float nctemp1047= LibeSincosmax;
float nctemp1049=LibeSqrt(nctemp1047);
float nctemp1050 = 3.1415926535897932384626433832795028841972 * nctemp1049;
LibeSincosmax =nctemp1050;
float nctemp1059= 1.0;
int nctemp1066 = 24 / 2;
int nctemp1061= nctemp1066;
float nctemp1067=LibeFscale2(nctemp1059,nctemp1061);
float nctemp1068 = 1.0 / nctemp1067;
LibeSincoslim =nctemp1068;
float nctemp1073= 3.4028234663852886e+38;
float nctemp1075=LibeLn(nctemp1073);
LibeLnmax =nctemp1075;
float nctemp1080= 1.1754943508222875e-38;
float nctemp1082=LibeLn(nctemp1080);
LibeLnmin =nctemp1082;
return 1;
}
int LibeStrlen (nctempchar1 *s)
{
int ls;
int i;
int nctemp1088=s->d[0];ls =nctemp1088;
i = 0;
int nctemp1101=i;
int nctemp1098=(int)(s->a[nctemp1101]);
int nctemp1095 = (nctemp1098 !=0);
int nctemp1105 = (i < ls);
int nctemp1092 = (nctemp1095 && nctemp1105);
int nctemp1109=nctemp1092;
while(nctemp1109)
{{
i = (i + 1);
}
int nctemp1119=i;
int nctemp1116=(int)(s->a[nctemp1119]);
int nctemp1113 = (nctemp1116 !=0);
int nctemp1123 = (i < ls);
int nctemp1110 = (nctemp1113 && nctemp1123);
nctemp1109=nctemp1110;}return i;
}
int LibeStrcmp (nctempchar1 *s,nctempchar1 *t)
{
int ls;
int i;
int nctemp1132=s->d[0];ls =nctemp1132;
i = 0;
int nctemp1142=i;
int nctemp1145=i;
int nctemp1139 = (s->a[nctemp1142] ==t->a[nctemp1145]);
int nctemp1148 = (i < ls);
int nctemp1136 = (nctemp1139 && nctemp1148);
int nctemp1152=nctemp1136;
while(nctemp1152)
{{
int nctemp1159=i;
int nctemp1156=(int)(s->a[nctemp1159]);
int nctemp1153 = (nctemp1156 ==0);
if(nctemp1153)
{
return 1;
}
i = (i + 1);
}
int nctemp1169=i;
int nctemp1172=i;
int nctemp1166 = (s->a[nctemp1169] ==t->a[nctemp1172]);
int nctemp1175 = (i < ls);
int nctemp1163 = (nctemp1166 && nctemp1175);
nctemp1152=nctemp1163;}return 0;
}
int LibeStrev (nctempchar1 *s)
{
char c;
int i;
int j;
i = 0;
nctempchar1* nctemp1187= s;
int nctemp1190=LibeStrlen(nctemp1187);
int nctemp1192 = nctemp1190 - 1;
j =nctemp1192;
int nctemp1193 = (i < j);
int nctemp1197=nctemp1193;
while(nctemp1197)
{{
c = s->a[i];
s->a[i] = s->a[j];
s->a[j] = c;
i = (i + 1);
j = (j - 1);
}
int nctemp1198 = (i < j);
nctemp1197=nctemp1198;}return 1;
}
int LibeStrcpy (nctempchar1 *s,nctempchar1 *t)
{
int ls;
int i;
nctempchar1* nctemp1207= s;
int nctemp1210=LibeStrlen(nctemp1207);
ls =nctemp1210;
int nctemp1211 = (ls ==0);
if(nctemp1211)
{
return 1;
}
int nctemp1219=t->d[0];int nctemp1216 = (nctemp1219 <= ls);
if(nctemp1216)
{
return 0;
}
for(i = 0;i <= ls;i = (i + 1)){
t->a[i] = s->a[i];
}
return 1;
}
int LibeStrcat (nctempchar1 *s,nctempchar1 *t)
{
int ls;
int lt;
int i;
nctempchar1* nctemp1230= s;
int nctemp1233=LibeStrlen(nctemp1230);
ls =nctemp1233;
nctempchar1* nctemp1238= t;
int nctemp1241=LibeStrlen(nctemp1238);
lt =nctemp1241;
int nctemp1245=t->d[0];int nctemp1254 = lt + ls;
int nctemp1242 = (nctemp1245 < nctemp1254);
if(nctemp1242)
{
return 0;
}
for(i = lt;i < (ls + lt);i = (i + 1)){
t->a[i] = s->a[i - lt];
}
int nctemp1264 = ls + lt;
int nctemp1259=nctemp1264;
char nctemp1266=(char)(0);
t->a[nctemp1259] =nctemp1266;
return 1;
}
nctempchar1 * LibeStradd (nctempchar1 *t,nctempchar1 *s)
{
int ls;
int lt;
nctempchar1 *r;
int i;
nctempchar1* nctemp1274= s;
int nctemp1277=LibeStrlen(nctemp1274);
ls =nctemp1277;
nctempchar1* nctemp1282= t;
int nctemp1285=LibeStrlen(nctemp1282);
lt =nctemp1285;
int nctemp1300 = lt + ls;
int nctemp1302 = nctemp1300 + 1;
int nctemp1292=nctemp1302;
nctempchar1 *nctemp1291;
nctemp1291=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp1310 = lt + ls;
int nctemp1312 = nctemp1310 + 1;
nctemp1291->d[0]=nctemp1312;
nctemp1291->a=(char *)RunMalloc(sizeof(char)*nctemp1292);
r=nctemp1291;
for(i = 0;i < lt;i = (i + 1)){
r->a[i] = t->a[i];
}
for(i = lt;i < (ls + lt);i = (i + 1)){
r->a[i] = s->a[i - lt];
}
int nctemp1321 = ls + lt;
int nctemp1316=nctemp1321;
char nctemp1323=(char)(0);
r->a[nctemp1316] =nctemp1323;
return r;
}
nctempchar1 * LibeStrsave (nctempchar1 *s)
{
int l;
nctempchar1 *tmp;
tmp  = 0;
l = 0;
nctempchar1* nctemp1332= s;
int nctemp1335=LibeStrlen(nctemp1332);
l =nctemp1335;
int nctemp1347 = l + 1;
int nctemp1342=nctemp1347;
nctempchar1 *nctemp1341;
nctemp1341=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp1352 = l + 1;
nctemp1341->d[0]=nctemp1352;
nctemp1341->a=(char *)RunMalloc(sizeof(char)*nctemp1342);
tmp=nctemp1341;
nctempchar1 *nctemp1354 =tmp;
int nctemp1353 =(nctemp1354!=0);
if(nctemp1353)
{
nctempchar1* nctemp1359= s;
nctempchar1* nctemp1362= tmp;
int nctemp1365=LibeStrcpy(nctemp1359,nctemp1362);
}
return tmp;
}
int LibeIsalhpa (int c)
{
int nctemp1374 = (c >= 'a');
int nctemp1379 = (c <= 'z');
int nctemp1371 = (nctemp1374 && nctemp1379);
int nctemp1387 = (c >= 'A');
int nctemp1392 = (c <= 'Z');
int nctemp1384 = (nctemp1387 && nctemp1392);
int nctemp1368 = (nctemp1371 || nctemp1384);
if(nctemp1368)
{
return 1;
}
else{
return 0;
}
}
int LibeIsdigit (int c)
{
int nctemp1401 = (c >= '0');
int nctemp1406 = (c <= '9');
int nctemp1398 = (nctemp1401 && nctemp1406);
if(nctemp1398)
{
return 1;
}
else{
return 0;
}
}
int LibeIsalnum (int c)
{
int nctemp1418 = (c >= 'a');
int nctemp1423 = (c <= 'z');
int nctemp1415 = (nctemp1418 && nctemp1423);
int nctemp1431 = (c >= 'A');
int nctemp1436 = (c <= 'Z');
int nctemp1428 = (nctemp1431 && nctemp1436);
int nctemp1412 = (nctemp1415 || nctemp1428);
if(nctemp1412)
{
return 1;
}
else{
int nctemp1444 = (c >= '0');
int nctemp1449 = (c <= '9');
int nctemp1441 = (nctemp1444 && nctemp1449);
if(nctemp1441)
{
return 1;
}
else{
return 0;
}
}
}
int LibeAtoi (nctempchar1 *s)
{
int sign;
int i;
int n;
i = 0;
int nctemp1464=i;
char nctemp1467=(char)(' ');
int nctemp1461 = (s->a[nctemp1464] ==nctemp1467);
int nctemp1474=i;
char nctemp1477=(char)(10);
int nctemp1471 = (s->a[nctemp1474] ==nctemp1477);
int nctemp1458 = (nctemp1461 || nctemp1471);
int nctemp1484=i;
char nctemp1487=(char)(9);
int nctemp1481 = (s->a[nctemp1484] ==nctemp1487);
int nctemp1455 = (nctemp1458 || nctemp1481);
int nctemp1490=nctemp1455;
while(nctemp1490)
{{
i = (i + 1);
}
int nctemp1500=i;
char nctemp1503=(char)(' ');
int nctemp1497 = (s->a[nctemp1500] ==nctemp1503);
int nctemp1510=i;
char nctemp1513=(char)(10);
int nctemp1507 = (s->a[nctemp1510] ==nctemp1513);
int nctemp1494 = (nctemp1497 || nctemp1507);
int nctemp1520=i;
char nctemp1523=(char)(9);
int nctemp1517 = (s->a[nctemp1520] ==nctemp1523);
int nctemp1491 = (nctemp1494 || nctemp1517);
nctemp1490=nctemp1491;}int nctemp1529=i;
char nctemp1532=(char)('-');
int nctemp1526 = (s->a[nctemp1529] ==nctemp1532);
if(nctemp1526)
{
sign =  -1;
i = (i + 1);
}
else{
int nctemp1538=i;
char nctemp1541=(char)('+');
int nctemp1535 = (s->a[nctemp1538] ==nctemp1541);
if(nctemp1535)
{
sign = 1;
i = (i + 1);
}
else{
sign = 1;
}
}
n =0;
int nctemp1554=i;
int nctemp1551=(int)(s->a[nctemp1554]);
int nctemp1549= nctemp1551;
int nctemp1556=LibeIsdigit(nctemp1549);
while(nctemp1556){
{
int nctemp1571 = 10 * n;
int nctemp1576=i;
int nctemp1573=(int)(s->a[nctemp1576]);
int nctemp1578 = nctemp1571 + nctemp1573;
int nctemp1580 = nctemp1578 - '0';
n =nctemp1580;
}
int nctemp1589 = i + 1;
i =nctemp1589;
int nctemp1596=i;
int nctemp1593=(int)(s->a[nctemp1596]);
int nctemp1591= nctemp1593;
int nctemp1598=LibeIsdigit(nctemp1591);
nctemp1556=nctemp1598;
}
int nctemp1603 = sign * n;
return nctemp1603;
}
int LibeItoa (int n,nctempchar1 *s)
{
int sign;
int i;
nctempchar1 *nctemp1605 =s;
int nctemp1604 =(nctemp1605==0);
if(nctemp1604)
{
return 0;
}
sign =n;
int nctemp1610 = (sign < 0);
if(nctemp1610)
{
n =  -n;
}
i = 0;
int nctemp1621=0;
int nctemp1629= n;
int nctemp1631= 10;
int nctemp1633=LibeMod(nctemp1629,nctemp1631);
int nctemp1635 = nctemp1633 + 48;
char nctemp1624=(char)(nctemp1635);
s->a[nctemp1621] =nctemp1624;
int nctemp1647 = n / 10;
n =nctemp1647;
int nctemp1636 = (n > 0);
int nctemp1649=nctemp1636;
while(nctemp1649)
{{
int nctemp1657 = i + 1;
int nctemp1662=s->d[0];int nctemp1667 = nctemp1662 - 1;
int nctemp1650 = (nctemp1657 > nctemp1667);
if(nctemp1650)
{
return 0;
}
int nctemp1681 = i + 1;
i =nctemp1681;
int nctemp1672=i;
int nctemp1688= n;
int nctemp1690= 10;
int nctemp1692=LibeMod(nctemp1688,nctemp1690);
int nctemp1694 = nctemp1692 + 48;
char nctemp1683=(char)(nctemp1694);
s->a[nctemp1672] =nctemp1683;
}
int nctemp1706 = n / 10;
n =nctemp1706;
int nctemp1695 = (n > 0);
nctemp1649=nctemp1695;}int nctemp1708 = (sign < 0);
if(nctemp1708)
{
int nctemp1719 = i + 1;
int nctemp1724=s->d[0];int nctemp1729 = nctemp1724 - 1;
int nctemp1712 = (nctemp1719 > nctemp1729);
if(nctemp1712)
{
return 0;
}
int nctemp1743 = i + 1;
i =nctemp1743;
int nctemp1734=i;
char nctemp1745=(char)(45);
s->a[nctemp1734] =nctemp1745;
}
int nctemp1755 = i + 1;
int nctemp1760=s->d[0];int nctemp1765 = nctemp1760 - 1;
int nctemp1748 = (nctemp1755 > nctemp1765);
if(nctemp1748)
{
return 0;
}
int nctemp1779 = i + 1;
i =nctemp1779;
int nctemp1770=i;
char nctemp1781=(char)(0);
s->a[nctemp1770] =nctemp1781;
nctempchar1* nctemp1785= s;
int nctemp1788=LibeStrev(nctemp1785);
return 1;
}
int LibeItoh (int n,nctempchar1 *s)
{
int i;
int sign;
sign =n;
int nctemp1790 = (sign < 0);
if(nctemp1790)
{
n =  -n;
}
i = 0;
int nctemp1801= n;
int nctemp1803= 16;
int nctemp1805=LibeMod(nctemp1801,nctemp1803);
int nctemp1798 = (nctemp1805 <= 9);
if(nctemp1798)
{
int nctemp1810=0;
int nctemp1818= n;
int nctemp1820= 16;
int nctemp1822=LibeMod(nctemp1818,nctemp1820);
int nctemp1824 = nctemp1822 + 48;
char nctemp1813=(char)(nctemp1824);
s->a[nctemp1810] =nctemp1813;
}
else{
int nctemp1828=0;
int nctemp1839= n;
int nctemp1841= 16;
int nctemp1843=LibeMod(nctemp1839,nctemp1841);
int nctemp1845 = nctemp1843 + 'a';
int nctemp1847 = nctemp1845 - 10;
char nctemp1831=(char)(nctemp1847);
s->a[nctemp1828] =nctemp1831;
}
int nctemp1859 = n / 16;
n =nctemp1859;
int nctemp1848 = (n > 0);
int nctemp1861=nctemp1848;
while(nctemp1861)
{{
int nctemp1865= n;
int nctemp1867= 16;
int nctemp1869=LibeMod(nctemp1865,nctemp1867);
int nctemp1862 = (nctemp1869 <= 9);
if(nctemp1862)
{
int nctemp1883 = i + 1;
i =nctemp1883;
int nctemp1874=i;
int nctemp1890= n;
int nctemp1892= 16;
int nctemp1894=LibeMod(nctemp1890,nctemp1892);
int nctemp1896 = nctemp1894 + 48;
char nctemp1885=(char)(nctemp1896);
s->a[nctemp1874] =nctemp1885;
}
else{
int nctemp1909 = i + 1;
i =nctemp1909;
int nctemp1900=i;
int nctemp1919= n;
int nctemp1921= 16;
int nctemp1923=LibeMod(nctemp1919,nctemp1921);
int nctemp1925 = nctemp1923 + 'a';
int nctemp1927 = nctemp1925 - 10;
char nctemp1911=(char)(nctemp1927);
s->a[nctemp1900] =nctemp1911;
}
}
int nctemp1939 = n / 16;
n =nctemp1939;
int nctemp1928 = (n > 0);
nctemp1861=nctemp1928;}int nctemp1941 = (sign < 0);
if(nctemp1941)
{
int nctemp1957 = i + 1;
i =nctemp1957;
int nctemp1948=i;
char nctemp1959=(char)(45);
s->a[nctemp1948] =nctemp1959;
}
int nctemp1974 = i + 1;
i =nctemp1974;
int nctemp1965=i;
char nctemp1976=(char)(0);
s->a[nctemp1965] =nctemp1976;
nctempchar1* nctemp1980= s;
int nctemp1983=LibeStrev(nctemp1980);
return 0;
}
float LibeAtof (nctempchar1 *s)
{
float val;
float power;
int exponent;
int sign;
int esign;
int i;
sign = 1;
val = 0.0;
power = 1.0;
exponent = 0;
esign = 1;
i = 0;
int nctemp1988=i;
char nctemp1991=(char)(' ');
int nctemp1985 = (s->a[nctemp1988] ==nctemp1991);
int nctemp1994=nctemp1985;
while(nctemp1994)
{{
i = (i + 1);
}
int nctemp1998=i;
char nctemp2001=(char)(' ');
int nctemp1995 = (s->a[nctemp1998] ==nctemp2001);
nctemp1994=nctemp1995;}int nctemp2010=i;
char nctemp2013=(char)('+');
int nctemp2007 = (s->a[nctemp2010] ==nctemp2013);
int nctemp2020=i;
char nctemp2023=(char)('-');
int nctemp2017 = (s->a[nctemp2020] ==nctemp2023);
int nctemp2004 = (nctemp2007 || nctemp2017);
if(nctemp2004)
{
int nctemp2029=i;
char nctemp2032=(char)('-');
int nctemp2026 = (s->a[nctemp2029] ==nctemp2032);
if(nctemp2026)
{
sign =  -1;
}
i = (i + 1);
}
int nctemp2041=i;
int nctemp2038=(int)(s->a[nctemp2041]);
int nctemp2036= nctemp2038;
int nctemp2043=LibeIsdigit(nctemp2036);
int nctemp2044=nctemp2043;
while(nctemp2044)
{{
float nctemp2056 = 10.0 * val;
int nctemp2066=i;
int nctemp2063=(int)(s->a[nctemp2066]);
int nctemp2069 = nctemp2063 - '0';
float nctemp2058=(float)(nctemp2069);
float nctemp2070 = nctemp2056 + nctemp2058;
val =nctemp2070;
i = (i + 1);
}
int nctemp2077=i;
int nctemp2074=(int)(s->a[nctemp2077]);
int nctemp2072= nctemp2074;
int nctemp2079=LibeIsdigit(nctemp2072);
nctemp2044=nctemp2079;}int nctemp2083=i;
char nctemp2086=(char)('.');
int nctemp2080 = (s->a[nctemp2083] ==nctemp2086);
if(nctemp2080)
{
i = (i + 1);
int nctemp2095=i;
int nctemp2092=(int)(s->a[nctemp2095]);
int nctemp2090= nctemp2092;
int nctemp2097=LibeIsdigit(nctemp2090);
int nctemp2098=nctemp2097;
while(nctemp2098)
{{
float nctemp2110 = 10.0 * val;
int nctemp2120=i;
int nctemp2117=(int)(s->a[nctemp2120]);
int nctemp2123 = nctemp2117 - '0';
float nctemp2112=(float)(nctemp2123);
float nctemp2124 = nctemp2110 + nctemp2112;
val =nctemp2124;
i = (i + 1);
power = (10.0 * power);
}
int nctemp2131=i;
int nctemp2128=(int)(s->a[nctemp2131]);
int nctemp2126= nctemp2128;
int nctemp2133=LibeIsdigit(nctemp2126);
nctemp2098=nctemp2133;}}
int nctemp2140=i;
char nctemp2143=(char)('e');
int nctemp2137 = (s->a[nctemp2140] ==nctemp2143);
int nctemp2150=i;
char nctemp2153=(char)('E');
int nctemp2147 = (s->a[nctemp2150] ==nctemp2153);
int nctemp2134 = (nctemp2137 || nctemp2147);
if(nctemp2134)
{
i = (i + 1);
int nctemp2162=i;
char nctemp2165=(char)('+');
int nctemp2159 = (s->a[nctemp2162] ==nctemp2165);
int nctemp2172=i;
char nctemp2175=(char)('-');
int nctemp2169 = (s->a[nctemp2172] ==nctemp2175);
int nctemp2156 = (nctemp2159 || nctemp2169);
if(nctemp2156)
{
int nctemp2181=i;
char nctemp2184=(char)('-');
int nctemp2178 = (s->a[nctemp2181] ==nctemp2184);
if(nctemp2178)
{
esign =  -1;
}
i = (i + 1);
}
int nctemp2193=i;
int nctemp2190=(int)(s->a[nctemp2193]);
int nctemp2188= nctemp2190;
int nctemp2195=LibeIsdigit(nctemp2188);
int nctemp2196=nctemp2195;
while(nctemp2196)
{{
int nctemp2211 = 10 * exponent;
int nctemp2216=i;
int nctemp2213=(int)(s->a[nctemp2216]);
int nctemp2218 = nctemp2211 + nctemp2213;
int nctemp2220 = nctemp2218 - '0';
exponent =nctemp2220;
i = (i + 1);
}
int nctemp2227=i;
int nctemp2224=(int)(s->a[nctemp2227]);
int nctemp2222= nctemp2224;
int nctemp2229=LibeIsdigit(nctemp2222);
nctemp2196=nctemp2229;}}
float nctemp2238=(float)(sign);
float nctemp2242 = nctemp2238 * val;
float nctemp2244=(float)(power);
float nctemp2247 = nctemp2242 / nctemp2244;
float nctemp2231= nctemp2247;
int nctemp2253 = esign * exponent;
int nctemp2248= nctemp2253;
float nctemp2254=LibeFscale(nctemp2231,nctemp2248);
return nctemp2254;
}
int LibeFtoaf (int mant,int nexp,int nfield,int nfrac,nctempchar1 *s)
{
nctempchar1 *t;
int sign;
int i;
int tp;
int l;
int nctemp2255 = (mant < 0);
if(nctemp2255)
{
sign =  -1;
mant =  -mant;
}
else{
sign = 1;
}
int nctemp2262=s->d[0];int nctemp2271 = nfield + 1;
int nctemp2259 = (nctemp2262 < nctemp2271);
if(nctemp2259)
{
return 0;
}
l = (((nexp + 1) + 1) + nfrac);
int nctemp2273 = (sign < 0);
if(nctemp2273)
{
l = (l + 1);
}
int nctemp2277 = (nfield < l);
if(nctemp2277)
{
for(i = 0;i < nfield;i = (i + 1)){
int nctemp2284=i;
char nctemp2287=(char)('*');
s->a[nctemp2284] =nctemp2287;
}
int nctemp2293=nfield;
char nctemp2296=(char)(0);
s->a[nctemp2293] =nctemp2296;
return 0;
}
else{
tp = (nfield - l);
}
int nctemp2311 = 6 + 1;
int nctemp2306=nctemp2311;
nctempchar1 *nctemp2305;
nctemp2305=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp2316 = 6 + 1;
nctemp2305->d[0]=nctemp2316;
nctemp2305->a=(char *)RunMalloc(sizeof(char)*nctemp2306);
t=nctemp2305;
int nctemp2318= mant;
nctempchar1* nctemp2320= t;
int nctemp2323=LibeItoa(nctemp2318,nctemp2320);
for(i = 0;i < tp;i = (i + 1)){
int nctemp2327=i;
char nctemp2330=(char)(' ');
s->a[nctemp2327] =nctemp2330;
}
int nctemp2333 = (nexp >= 0);
if(nctemp2333)
{
int nctemp2340= -1;
int nctemp2337 = (sign ==nctemp2340);
if(nctemp2337)
{
int nctemp2344=tp;
char nctemp2347=(char)('-');
s->a[nctemp2344] =nctemp2347;
tp = (tp + 1);
}
for(i = 0;i <= nexp;i = (i + 1)){
s->a[i + tp] = t->a[i];
}
int nctemp2350 = (nfrac > 0);
if(nctemp2350)
{
int nctemp2365 = tp + nexp;
int nctemp2367 = nctemp2365 + 1;
int nctemp2357=nctemp2367;
char nctemp2369=(char)('.');
s->a[nctemp2357] =nctemp2369;
}
for(i = 0;i < nfrac;i = (i + 1)){
int nctemp2372 = (mant ==0);
if(nctemp2372)
{
int nctemp2393 = tp + nexp;
int nctemp2395 = nctemp2393 + 1;
int nctemp2397 = nctemp2395 + 1;
int nctemp2399 = nctemp2397 + i;
int nctemp2379=nctemp2399;
char nctemp2401=(char)('0');
s->a[nctemp2379] =nctemp2401;
}
else{
s->a[(((tp + nexp) + 1) + 1) + i] = t->a[(nexp + 1) + i];
}
}
int nctemp2404 = (nfrac > 0);
if(nctemp2404)
{
int nctemp2425 = tp + nexp;
int nctemp2427 = nctemp2425 + 1;
int nctemp2429 = nctemp2427 + 1;
int nctemp2431 = nctemp2429 + nfrac;
int nctemp2411=nctemp2431;
char nctemp2433=(char)(0);
s->a[nctemp2411] =nctemp2433;
}
else{
int nctemp2447 = tp + nexp;
int nctemp2449 = nctemp2447 + 1;
int nctemp2439=nctemp2449;
char nctemp2451=(char)(0);
s->a[nctemp2439] =nctemp2451;
}
}
else{
nexp =  -nexp;
int nctemp2457= -1;
int nctemp2454 = (sign ==nctemp2457);
if(nctemp2454)
{
int nctemp2461=tp;
char nctemp2464=(char)('-');
s->a[nctemp2461] =nctemp2464;
tp = (tp + 1);
}
int nctemp2470=tp;
char nctemp2473=(char)('0');
s->a[nctemp2470] =nctemp2473;
int nctemp2484 = tp + 1;
int nctemp2479=nctemp2484;
char nctemp2486=(char)('.');
s->a[nctemp2479] =nctemp2486;
for(i = 0;i < (nexp - 1);i = (i + 1)){
int nctemp2500 = i + tp;
int nctemp2502 = nctemp2500 + 2;
int nctemp2492=nctemp2502;
char nctemp2504=(char)('0');
s->a[nctemp2492] =nctemp2504;
}
for(i = 0;i < ((nfrac - nexp) + 1);i = (i + 1)){
s->a[(((tp + 2) + i) + nexp) - 1] = t->a[i];
}
int nctemp2518 = tp + 2;
int nctemp2520 = nctemp2518 + nfrac;
int nctemp2510=nctemp2520;
char nctemp2522=(char)(0);
s->a[nctemp2510] =nctemp2522;
}
return 1;
}
int LibeFtoae (int mant,int nexp,int nfield,int nfrac,nctempchar1 *s)
{
int tp;
int sign;
int i;
int l;
nctempchar1 *t;
int nctemp2526 = (mant < 0);
if(nctemp2526)
{
mant =  -mant;
sign =  -1;
}
else{
sign = 1;
}
int nctemp2533=s->d[0];int nctemp2560 = 1 + 1;
int nctemp2562 = nctemp2560 + 1;
int nctemp2564 = nctemp2562 + nfrac;
int nctemp2566 = nctemp2564 + 1;
int nctemp2568 = nctemp2566 + 1;
int nctemp2570 = nctemp2568 + 2;
int nctemp2572 = nctemp2570 + 1;
int nctemp2530 = (nctemp2533 < nctemp2572);
if(nctemp2530)
{
return 0;
}
int nctemp2582=s->d[0];int nctemp2580=nctemp2582;
nctempchar1 *nctemp2579;
nctemp2579=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp2587=s->d[0];nctemp2579->d[0]=nctemp2587;
nctemp2579->a=(char *)RunMalloc(sizeof(char)*nctemp2580);
t=nctemp2579;
l = ((((((1 + 1) + nfrac) + 1) + 1) + 2) + 1);
int nctemp2591 = (sign < 0);
if(nctemp2591)
{
l = (l + 1);
}
int nctemp2595 = (nfield < l);
if(nctemp2595)
{
for(i = 0;i < nfield;i = (i + 1)){
int nctemp2602=i;
char nctemp2605=(char)('*');
s->a[nctemp2602] =nctemp2605;
}
int nctemp2611=nfield;
char nctemp2614=(char)(0);
s->a[nctemp2611] =nctemp2614;
return 0;
}
else{
tp = (nfield - l);
}
for(i = 0;i < tp;i = (i + 1)){
int nctemp2621=i;
char nctemp2624=(char)(' ');
s->a[nctemp2621] =nctemp2624;
}
int nctemp2628= mant;
nctempchar1* nctemp2630= t;
int nctemp2633=LibeItoa(nctemp2628,nctemp2630);
int nctemp2634 = (sign < 0);
if(nctemp2634)
{
int nctemp2641=tp;
char nctemp2644=(char)('-');
s->a[nctemp2641] =nctemp2644;
tp = (tp + 1);
}
s->a[tp] = t->a[0];
int nctemp2655 = tp + 1;
int nctemp2650=nctemp2655;
char nctemp2657=(char)('.');
s->a[nctemp2650] =nctemp2657;
for(i = 0;i < nfrac;i = (i + 1)){
s->a[(tp + 2) + i] = t->a[i + 1];
}
int nctemp2671 = tp + 2;
int nctemp2673 = nctemp2671 + nfrac;
int nctemp2663=nctemp2673;
char nctemp2675=(char)(0);
s->a[nctemp2663] =nctemp2675;
sign = 1;
int nctemp2678 = (nexp < 0);
if(nctemp2678)
{
sign =  -1;
nexp =  -nexp;
}
struct nctempchar1 *nctemp2685;
static struct nctempchar1 nctemp2686 = {{ 2}, (char*)"e\0"};
nctemp2685=&nctemp2686;
nctempchar1* nctemp2683= nctemp2685;
nctempchar1* nctemp2687= s;
int nctemp2690=LibeStrcat(nctemp2683,nctemp2687);
int nctemp2691 = (sign > 0);
if(nctemp2691)
{
struct nctempchar1 *nctemp2698;
static struct nctempchar1 nctemp2699 = {{ 2}, (char*)"+\0"};
nctemp2698=&nctemp2699;
nctempchar1* nctemp2696= nctemp2698;
nctempchar1* nctemp2700= s;
int nctemp2703=LibeStrcat(nctemp2696,nctemp2700);
}
else{
struct nctempchar1 *nctemp2707;
static struct nctempchar1 nctemp2708 = {{ 2}, (char*)"-\0"};
nctemp2707=&nctemp2708;
nctempchar1* nctemp2705= nctemp2707;
nctempchar1* nctemp2709= s;
int nctemp2712=LibeStrcat(nctemp2705,nctemp2709);
}
int nctemp2714= nexp;
nctempchar1* nctemp2716= t;
int nctemp2719=LibeItoa(nctemp2714,nctemp2716);
nctempchar1* nctemp2723= t;
int nctemp2726=LibeStrlen(nctemp2723);
int nctemp2720 = (nctemp2726 ==1);
if(nctemp2720)
{
struct nctempchar1 *nctemp2731;
static struct nctempchar1 nctemp2732 = {{ 2}, (char*)"0\0"};
nctemp2731=&nctemp2732;
nctempchar1* nctemp2729= nctemp2731;
nctempchar1* nctemp2733= s;
int nctemp2736=LibeStrcat(nctemp2729,nctemp2733);
}
nctempchar1* nctemp2738= t;
nctempchar1* nctemp2741= s;
int nctemp2744=LibeStrcat(nctemp2738,nctemp2741);
RunFree(t->a);
RunFree(t);
return 1;
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
int nctemp2752=s->d[0];int nctemp2757=fmt->d[0];int nctemp2749 = (nctemp2752 < nctemp2757);
if(nctemp2749)
{
return 0;
}
int nctemp2769=fmt->d[0];int nctemp2774 = nctemp2769 - 2;
l =nctemp2774;
p = 0;
q = 0;
int nctemp2782=p;
int nctemp2779=(int)(fmt->a[nctemp2782]);
c =nctemp2779;
int nctemp2784 = (c =='g');
if(nctemp2784)
{
mode = 'g';
}
else{
int nctemp2791= c;
int nctemp2793=LibeIsdigit(nctemp2791);
int nctemp2788 = (nctemp2793 ==1);
if(nctemp2788)
{
int nctemp2798= c;
int nctemp2800=LibeIsdigit(nctemp2798);
int nctemp2795 = (nctemp2800 ==1);
int nctemp2802=nctemp2795;
while(nctemp2802)
{{
s->a[q] = fmt->a[p];
int nctemp2814 = p + 1;
p =nctemp2814;
int nctemp2803 = (p > l);
if(nctemp2803)
{
return 0;
}
q = (q + 1);
int nctemp2824=p;
int nctemp2821=(int)(fmt->a[nctemp2824]);
c =nctemp2821;
}
int nctemp2829= c;
int nctemp2831=LibeIsdigit(nctemp2829);
int nctemp2826 = (nctemp2831 ==1);
nctemp2802=nctemp2826;}int nctemp2836=q;
char nctemp2839=(char)(0);
s->a[nctemp2836] =nctemp2839;
nctempchar1* nctemp2846= s;
int nctemp2849=LibeAtoi(nctemp2846);
nfield =nctemp2849;
}
else{
return 0;
}
int nctemp2851 = (c !='.');
if(nctemp2851)
{
return 0;
}
int nctemp2867 = p + 1;
p =nctemp2867;
int nctemp2856 = (p > l);
if(nctemp2856)
{
return 0;
}
int nctemp2877=p;
int nctemp2874=(int)(fmt->a[nctemp2877]);
c =nctemp2874;
q = 0;
int nctemp2882= c;
int nctemp2884=LibeIsdigit(nctemp2882);
int nctemp2879 = (nctemp2884 ==1);
if(nctemp2879)
{
int nctemp2889= c;
int nctemp2891=LibeIsdigit(nctemp2889);
int nctemp2886 = (nctemp2891 ==1);
int nctemp2893=nctemp2886;
while(nctemp2893)
{{
s->a[q] = fmt->a[p];
int nctemp2905 = p + 1;
p =nctemp2905;
int nctemp2894 = (p > l);
if(nctemp2894)
{
return 0;
}
q = (q + 1);
int nctemp2915=p;
int nctemp2912=(int)(fmt->a[nctemp2915]);
c =nctemp2912;
}
int nctemp2920= c;
int nctemp2922=LibeIsdigit(nctemp2920);
int nctemp2917 = (nctemp2922 ==1);
nctemp2893=nctemp2917;}int nctemp2927=q;
char nctemp2930=(char)(0);
s->a[nctemp2927] =nctemp2930;
nctempchar1* nctemp2937= s;
int nctemp2940=LibeAtoi(nctemp2937);
nfrac =nctemp2940;
}
else{
return 0;
}
int nctemp2942 = (c =='f');
if(nctemp2942)
{
mode = 'f';
}
else{
int nctemp2946 = (c =='e');
if(nctemp2946)
{
mode = 'e';
}
else{
return 0;
}
}
}
int nctemp2951 = (mode =='g');
if(nctemp2951)
{
float nctemp2959= f;
int nctemp2961=LibeGetmaxdig(nctemp2959);
nfrac =nctemp2961;
nfield = (((((((1 + 1) + 1) + 1) + nfrac) + 1) + 1) + 2);
ndigit = (nfrac + 1);
float nctemp2966= f;
int nctemp2968= ndigit;
int nctemp2970=LibeGetfman(nctemp2966,nctemp2968);
mant =nctemp2970;
float nctemp2975= f;
int nctemp2977=LibeGetfexp(nctemp2975);
nexp =nctemp2977;
int nctemp2979= mant;
int nctemp2981= nexp;
int nctemp2983= nfield;
int nctemp2985= nfrac;
nctempchar1* nctemp2987= s;
int nctemp2990=LibeFtoae(nctemp2979,nctemp2981,nctemp2983,nctemp2985,nctemp2987);
}
else{
int nctemp2991 = (mode =='e');
if(nctemp2991)
{
ndigit = (nfrac + 1);
float nctemp2999= f;
int nctemp3001= ndigit;
int nctemp3003=LibeGetfman(nctemp2999,nctemp3001);
mant =nctemp3003;
float nctemp3008= f;
int nctemp3010=LibeGetfexp(nctemp3008);
nexp =nctemp3010;
int nctemp3012= mant;
int nctemp3014= nexp;
int nctemp3016= nfield;
int nctemp3018= nfrac;
nctempchar1* nctemp3020= s;
int nctemp3023=LibeFtoae(nctemp3012,nctemp3014,nctemp3016,nctemp3018,nctemp3020);
}
else{
int nctemp3024 = (mode =='f');
if(nctemp3024)
{
float nctemp3032= f;
int nctemp3034=LibeGetfexp(nctemp3032);
nexp =nctemp3034;
ndigit = ((nexp + nfrac) + 1);
float nctemp3039= f;
int nctemp3041= ndigit;
int nctemp3043=LibeGetfman(nctemp3039,nctemp3041);
mant =nctemp3043;
int nctemp3045= mant;
int nctemp3047= nexp;
int nctemp3049= nfield;
int nctemp3051= nfrac;
nctempchar1* nctemp3053= s;
int nctemp3056=LibeFtoaf(nctemp3045,nctemp3047,nctemp3049,nctemp3051,nctemp3053);
}
}
}
return 1;
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
int nctemp3064=40;
struct nctempLibeFdescr1 *nctemp3063;
nctemp3063=(struct nctempLibeFdescr1*)RunMalloc(sizeof(struct nctempLibeFdescr1));
nctemp3063->d[0]=40;
nctemp3063->a=(struct LibeFdescr*)RunMalloc(sizeof(struct LibeFdescr)*nctemp3064);
LibeFarr=nctemp3063;
nctempLibeFdescr1 *nctemp3068 =LibeFarr;
int nctemp3067 =(nctemp3068==0);
if(nctemp3067)
{
LibeErrno = (-100);
return 0;
}
for(i = 0;i < 40;i = (i + 1)){
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
int nctemp3079=64;
nctempchar1 *nctemp3078;
nctemp3078=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp3078->d[0]=64;
nctemp3078->a=(char *)RunMalloc(sizeof(char)*nctemp3079);
LibeTmpstr=nctemp3078;
nctempchar1 *nctemp3083 =LibeTmpstr;
int nctemp3082 =(nctemp3083==0);
if(nctemp3082)
{
LibeErrno = (-100);
return 0;
}
return 1;
}
int LibeFlushbuff (int fp)
{
int st;
int size;
int nctemp3092=fp;
int nctemp3089 = (LibeFarr->a[nctemp3092].writflg !=1);
if(nctemp3089)
{
struct nctempchar1 *nctemp3100;
static struct nctempchar1 nctemp3101 = {{ 28}, (char*)"file not open for writing\n\0"};
nctemp3100=&nctemp3101;
LibeErrstr=nctemp3100;
LibeErrno = (-110);
return 0;
}
int nctemp3106=fp;
int nctemp3103 = (LibeFarr->a[nctemp3106].unbflg ==1);
if(nctemp3103)
{
LibeFarr->a[fp].bufsize = 1;
}
else{
LibeFarr->a[fp].bufsize = 1024;
}
int nctemp3112=fp;
nctempchar1 *nctemp3110 =LibeFarr->a[nctemp3112].base;
int nctemp3109 =(nctemp3110==0);
if(nctemp3109)
{
size = LibeFarr->a[fp].bufsize;
int nctemp3122=fp;
int nctemp3127=size;
nctempchar1 *nctemp3126;
nctemp3126=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp3126->d[0]=size;
nctemp3126->a=(char *)RunMalloc(sizeof(char)*nctemp3127);
LibeFarr->a[nctemp3122].base=nctemp3126;
nctempchar1 *nctemp3117 =LibeFarr->a[nctemp3122].base;
int nctemp3116 =(nctemp3117==0);
if(nctemp3116)
{
struct nctempchar1 *nctemp3136;
static struct nctempchar1 nctemp3137 = {{ 24}, (char*)"can not allocate buffer\0"};
nctemp3136=&nctemp3137;
LibeErrstr=nctemp3136;
LibeErrno = (-113);
return 0;
}
}
LibeFarr->a[fp].ptr = 0;
int nctemp3145=fp;
int nctemp3143= LibeFarr->a[nctemp3145].fd;
int nctemp3149=fp;
int nctemp3147= LibeFarr->a[nctemp3149].cnt;
int nctemp3153=fp;
nctempchar1* nctemp3151= LibeFarr->a[nctemp3153].base;
int nctemp3156=RunWrite(nctemp3143,nctemp3147,nctemp3151);
st =nctemp3156;
int nctemp3161=fp;
int nctemp3157 = (st !=LibeFarr->a[nctemp3161].cnt);
if(nctemp3157)
{
LibeFarr->a[fp].errflg = 1;
struct nctempchar1 *nctemp3168;
static struct nctempchar1 nctemp3169 = {{ 12}, (char*)"write error\0"};
nctemp3168=&nctemp3169;
LibeErrstr=nctemp3168;
LibeErrno = (-112);
LibeFarr->a[fp].cnt = 0;
LibeFarr->a[fp].ptr = 0;
return 0;
}
else{
LibeFarr->a[fp].cnt = 0;
LibeFarr->a[fp].ptr = 0;
return 1;
}
}
int LibeFillbuff (int fp)
{
int size;
int rval;
int nctemp3175=fp;
int nctemp3172 = (LibeFarr->a[nctemp3175].readflg !=1);
if(nctemp3172)
{
struct nctempchar1 *nctemp3183;
static struct nctempchar1 nctemp3184 = {{ 28}, (char*)"file not open for reading\n\0"};
nctemp3183=&nctemp3184;
LibeErrstr=nctemp3183;
LibeErrno = (-110);
return (-1);
}
int nctemp3189=fp;
int nctemp3186 = (LibeFarr->a[nctemp3189].unbflg ==1);
if(nctemp3186)
{
LibeFarr->a[fp].bufsize = 1;
}
else{
LibeFarr->a[fp].bufsize = 1024;
}
int nctemp3195=fp;
nctempchar1 *nctemp3193 =LibeFarr->a[nctemp3195].base;
int nctemp3192 =(nctemp3193==0);
if(nctemp3192)
{
size = LibeFarr->a[fp].bufsize;
int nctemp3205=fp;
int nctemp3210=size;
nctempchar1 *nctemp3209;
nctemp3209=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp3209->d[0]=size;
nctemp3209->a=(char *)RunMalloc(sizeof(char)*nctemp3210);
LibeFarr->a[nctemp3205].base=nctemp3209;
nctempchar1 *nctemp3200 =LibeFarr->a[nctemp3205].base;
int nctemp3199 =(nctemp3200==0);
if(nctemp3199)
{
struct nctempchar1 *nctemp3219;
static struct nctempchar1 nctemp3220 = {{ 24}, (char*)"Can not allocate buffer\0"};
nctemp3219=&nctemp3220;
LibeErrstr=nctemp3219;
LibeErrno = (-113);
return (-1);
}
}
LibeFarr->a[fp].ptr = 0;
int nctemp3225=fp;
int nctemp3230=fp;
int nctemp3228= LibeFarr->a[nctemp3230].fd;
int nctemp3234=fp;
int nctemp3232= LibeFarr->a[nctemp3234].bufsize;
int nctemp3238=fp;
nctempchar1* nctemp3236= LibeFarr->a[nctemp3238].base;
int nctemp3241=RunRead(nctemp3228,nctemp3232,nctemp3236);
LibeFarr->a[nctemp3225].cnt =nctemp3241;
int nctemp3245=fp;
int nctemp3242 = (LibeFarr->a[nctemp3245].cnt <= 0);
if(nctemp3242)
{
int nctemp3251=fp;
int nctemp3248 = (LibeFarr->a[nctemp3251].cnt ==(-1));
if(nctemp3248)
{
LibeFarr->a[fp].eoflg = 1;
rval = (-1);
}
else{
LibeFarr->a[fp].errflg = 1;
struct nctempchar1 *nctemp3259;
static struct nctempchar1 nctemp3260 = {{ 11}, (char*)"read error\0"};
nctemp3259=&nctemp3260;
LibeErrstr=nctemp3259;
LibeErrno = (-111);
rval = (-1);
}
LibeFarr->a[fp].cnt = 0;
return rval;
}
LibeFarr->a[fp].ptr = (LibeFarr->a[fp].ptr + 1);
LibeFarr->a[fp].cnt = (LibeFarr->a[fp].cnt - 1);
int nctemp3266=fp;
int nctemp3272=fp;
int nctemp3275 = LibeFarr->a[nctemp3272].ptr - 1;
int nctemp3268=nctemp3275;
int nctemp3263=(int)(LibeFarr->a[nctemp3266].base->a[nctemp3268]);
return nctemp3263;
}
int LibeFlush (int fp)
{
int nctemp3277= fp;
int nctemp3279=LibeFlushbuff(nctemp3277);
return nctemp3279;
}
int LibeOpen (nctempchar1 *name,nctempchar1 *mode)
{
int fd;
int slot;
int i;
int nctemp3283=0;
char nctemp3286=(char)('r');
int nctemp3280 = (mode->a[nctemp3283] !=nctemp3286);
if(nctemp3280)
{
int nctemp3292=0;
char nctemp3295=(char)('w');
int nctemp3289 = (mode->a[nctemp3292] !=nctemp3295);
if(nctemp3289)
{
int nctemp3301=0;
char nctemp3304=(char)('a');
int nctemp3298 = (mode->a[nctemp3301] !=nctemp3304);
if(nctemp3298)
{
struct nctempchar1 *nctemp3312;
static struct nctempchar1 nctemp3313 = {{ 20}, (char*)"Unknown file mode\n\0"};
nctemp3312=&nctemp3313;
LibeErrstr=nctemp3312;
LibeErrno = (-103);
return 0;
}
}
}
i = 0;
slot =  -1;
int nctemp3318 = (slot < 0);
int nctemp3323 = (i < 40);
int nctemp3315 = (nctemp3318 && nctemp3323);
int nctemp3327=nctemp3315;
while(nctemp3327)
{{
int nctemp3334=i;
int nctemp3331 = (LibeFarr->a[nctemp3334].readflg ==0);
int nctemp3341=i;
int nctemp3338 = (LibeFarr->a[nctemp3341].writflg ==0);
int nctemp3328 = (nctemp3331 && nctemp3338);
if(nctemp3328)
{
slot = i;
}
i = (i + 1);
}
int nctemp3347 = (slot < 0);
int nctemp3352 = (i < 40);
int nctemp3344 = (nctemp3347 && nctemp3352);
nctemp3327=nctemp3344;}int nctemp3356 = (slot < 0);
if(nctemp3356)
{
struct nctempchar1 *nctemp3365;
static struct nctempchar1 nctemp3366 = {{ 22}, (char*)"Too many open files\n\0"};
nctemp3365=&nctemp3366;
LibeErrstr=nctemp3365;
LibeErrno = (-104);
return 0;
}
int nctemp3374=0;
int nctemp3371=(int)(mode->a[nctemp3374]);
int nctemp3368 = (nctemp3371 =='w');
if(nctemp3368)
{
nctempchar1* nctemp3381= name;
int nctemp3384=RunCreate(nctemp3381);
fd =nctemp3384;
}
else{
int nctemp3391=0;
int nctemp3388=(int)(mode->a[nctemp3391]);
int nctemp3385 = (nctemp3388 =='a');
if(nctemp3385)
{
nctempchar1* nctemp3401= name;
nctempchar1* nctemp3404= mode;
int nctemp3407=RunOpen(nctemp3401,nctemp3404);
fd =nctemp3407;
int nctemp3394 = (fd ==0);
if(nctemp3394)
{
nctempchar1* nctemp3413= name;
int nctemp3416=RunCreate(nctemp3413);
fd =nctemp3416;
}
else{
nctempchar1* nctemp3421= name;
nctempchar1* nctemp3424= mode;
int nctemp3427=RunOpen(nctemp3421,nctemp3424);
fd =nctemp3427;
}
}
else{
int nctemp3434=0;
int nctemp3431=(int)(mode->a[nctemp3434]);
int nctemp3428 = (nctemp3431 =='r');
if(nctemp3428)
{
nctempchar1* nctemp3441= name;
nctempchar1* nctemp3444= mode;
int nctemp3447=RunOpen(nctemp3441,nctemp3444);
fd =nctemp3447;
}
else{
struct nctempchar1 *nctemp3453;
static struct nctempchar1 nctemp3454 = {{ 20}, (char*)"Unknown file mode\n\0"};
nctemp3453=&nctemp3454;
LibeErrstr=nctemp3453;
LibeErrno = (-103);
return 0;
}
}
}
int nctemp3456 = (fd ==0);
if(nctemp3456)
{
struct nctempchar1 *nctemp3465;
static struct nctempchar1 nctemp3466 = {{ 20}, (char*)"Could not open file\0"};
nctemp3465=&nctemp3466;
LibeErrstr=nctemp3465;
LibeErrno = (-105);
return 0;
}
LibeFarr->a[slot].fd = fd;
LibeFarr->a[slot].cnt = 0;
LibeFarr->a[slot].base  = 0;
int nctemp3474=0;
int nctemp3471=(int)(mode->a[nctemp3474]);
int nctemp3468 = (nctemp3471 =='r');
if(nctemp3468)
{
LibeFarr->a[slot].readflg = 1;
}
else{
LibeFarr->a[slot].writflg = 1;
}
return slot;
}
int LibeClose (int fp)
{
int fd;
int stat;
int nctemp3481=fp;
nctempchar1 *nctemp3479 =LibeFarr->a[nctemp3481].base;
int nctemp3478 =(nctemp3479!=0);
if(nctemp3478)
{
int nctemp3486= fp;
int nctemp3488=LibeFlush(nctemp3486);
}
fd = LibeFarr->a[fp].fd;
int nctemp3493= fd;
int nctemp3495=RunClose(nctemp3493);
stat =nctemp3495;
int nctemp3496 = (stat ==0);
if(nctemp3496)
{
LibeFarr->a[fp].errflg = 1;
struct nctempchar1 *nctemp3505;
static struct nctempchar1 nctemp3506 = {{ 21}, (char*)"Could not close file\0"};
nctemp3505=&nctemp3506;
LibeErrstr=nctemp3505;
LibeErrno = (-106);
return 0;
}
LibeFarr->a[fp].cnt = 0;
LibeFarr->a[fp].ptr = 0;
LibeFarr->a[fp].bufsize = 0;
int nctemp3511=fp;
nctempchar1 *nctemp3509 =LibeFarr->a[nctemp3511].base;
int nctemp3508 =(nctemp3509!=0);
if(nctemp3508)
{
int nctemp3517=fp;
RunFree(LibeFarr->a[nctemp3517].base->a);
RunFree(LibeFarr->a[nctemp3517].base);
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
int LibeGetc (int fp)
{
int nctemp3524=fp;
int nctemp3521 = (LibeFarr->a[nctemp3524].cnt ==0);
if(nctemp3521)
{
int nctemp3528= fp;
int nctemp3530=LibeFillbuff(nctemp3528);
return nctemp3530;
}
else{
LibeFarr->a[fp].cnt = (LibeFarr->a[fp].cnt - 1);
LibeFarr->a[fp].ptr = (LibeFarr->a[fp].ptr + 1);
int nctemp3535=fp;
int nctemp3541=fp;
int nctemp3544 = LibeFarr->a[nctemp3541].ptr - 1;
int nctemp3537=nctemp3544;
int nctemp3532=(int)(LibeFarr->a[nctemp3535].base->a[nctemp3537]);
return nctemp3532;
}
}
int LibeUngetc (int fp)
{
int nctemp3548=fp;
int nctemp3545 = (LibeFarr->a[nctemp3548].eoflg ==1);
if(nctemp3545)
{
return (-1);
}
int nctemp3555=fp;
int nctemp3558=fp;
int nctemp3552 = (LibeFarr->a[nctemp3555].cnt < LibeFarr->a[nctemp3558].bufsize);
if(nctemp3552)
{
LibeFarr->a[fp].cnt = (LibeFarr->a[fp].cnt + 1);
LibeFarr->a[fp].ptr = (LibeFarr->a[fp].ptr - 1);
int nctemp3563=fp;
int nctemp3569=fp;
int nctemp3572 = LibeFarr->a[nctemp3569].bufsize - 1;
int nctemp3560 = (LibeFarr->a[nctemp3563].ptr ==nctemp3572);
if(nctemp3560)
{
int nctemp3577=fp;
int nctemp3581=fp;
int nctemp3579=LibeFarr->a[nctemp3581].ptr;
int nctemp3574=(int)(LibeFarr->a[nctemp3577].base->a[nctemp3579]);
return nctemp3574;
}
else{
int nctemp3587=fp;
int nctemp3593=fp;
int nctemp3596 = LibeFarr->a[nctemp3593].ptr + 1;
int nctemp3589=nctemp3596;
int nctemp3584=(int)(LibeFarr->a[nctemp3587].base->a[nctemp3589]);
return nctemp3584;
}
}
else{
struct nctempchar1 *nctemp3602;
static struct nctempchar1 nctemp3603 = {{ 15}, (char*)"Pushback error\0"};
nctemp3602=&nctemp3603;
LibeErrstr=nctemp3602;
LibeErrno = (-107);
return (-1);
}
}
int LibeGetw (int fp,nctempchar1 *text)
{
int p;
int ch;
int lim;
int nctemp3609=text->d[0];lim =nctemp3609;
p = 0;
int nctemp3614=LibeClearerr();
int nctemp3628= fp;
int nctemp3630=LibeGetc(nctemp3628);
ch =nctemp3630;
int nctemp3621 = (ch ==32);
int nctemp3633 = (ch ==9);
int nctemp3618 = (nctemp3621 || nctemp3633);
int nctemp3638 = (ch ==10);
int nctemp3615 = (nctemp3618 || nctemp3638);
int nctemp3642=nctemp3615;
while(nctemp3642)
{{
p = 0;
}
int nctemp3656= fp;
int nctemp3658=LibeGetc(nctemp3656);
ch =nctemp3658;
int nctemp3649 = (ch ==32);
int nctemp3661 = (ch ==9);
int nctemp3646 = (nctemp3649 || nctemp3661);
int nctemp3666 = (ch ==10);
int nctemp3643 = (nctemp3646 || nctemp3666);
nctemp3642=nctemp3643;}int nctemp3671= fp;
int nctemp3673=LibeUngetc(nctemp3671);
int nctemp3684= fp;
int nctemp3686=LibeGetc(nctemp3684);
ch =nctemp3686;
int nctemp3677 = (ch !=(-1));
int nctemp3689 = (p < lim);
int nctemp3674 = (nctemp3677 && nctemp3689);
int nctemp3693=nctemp3674;
while(nctemp3693)
{{
int nctemp3700 = (ch ==32);
int nctemp3705 = (ch ==9);
int nctemp3697 = (nctemp3700 || nctemp3705);
int nctemp3710 = (ch ==10);
int nctemp3694 = (nctemp3697 || nctemp3710);
if(nctemp3694)
{
int nctemp3715= fp;
int nctemp3717=LibeUngetc(nctemp3715);
int nctemp3721=p;
char nctemp3724=(char)(0);
text->a[nctemp3721] =nctemp3724;
return 1;
}
else{
int nctemp3731=p;
char nctemp3734=(char)(ch);
text->a[nctemp3731] =nctemp3734;
p = (p + 1);
}
}
int nctemp3747= fp;
int nctemp3749=LibeGetc(nctemp3747);
ch =nctemp3749;
int nctemp3740 = (ch !=(-1));
int nctemp3752 = (p < lim);
int nctemp3737 = (nctemp3740 && nctemp3752);
nctemp3693=nctemp3737;}int nctemp3756 = (p >= lim);
if(nctemp3756)
{
return 0;
}
else{
int nctemp3761 = (ch ==(-1));
if(nctemp3761)
{
return (-1);
}
else{
return 1;
}
}
}
int LibePutc (int fp,int c)
{
int rval;
int nctemp3770=fp;
int nctemp3767 = (LibeFarr->a[nctemp3770].cnt ==0);
if(nctemp3767)
{
int nctemp3774= fp;
int nctemp3776=LibeFlushbuff(nctemp3774);
}
int nctemp3780=fp;
int nctemp3783=fp;
int nctemp3777 = (LibeFarr->a[nctemp3780].cnt ==LibeFarr->a[nctemp3783].bufsize);
if(nctemp3777)
{
int nctemp3789= fp;
int nctemp3791=LibeFlushbuff(nctemp3789);
rval =nctemp3791;
int nctemp3795=fp;
int nctemp3799=fp;
int nctemp3797=LibeFarr->a[nctemp3799].ptr;
char nctemp3802=(char)(c);
LibeFarr->a[nctemp3795].base->a[nctemp3797] =nctemp3802;
LibeFarr->a[fp].ptr = (LibeFarr->a[fp].ptr + 1);
LibeFarr->a[fp].cnt = (LibeFarr->a[fp].cnt + 1);
return rval;
}
else{
int nctemp3809=fp;
int nctemp3813=fp;
int nctemp3811=LibeFarr->a[nctemp3813].ptr;
char nctemp3816=(char)(c);
LibeFarr->a[nctemp3809].base->a[nctemp3811] =nctemp3816;
LibeFarr->a[fp].cnt = (LibeFarr->a[fp].cnt + 1);
LibeFarr->a[fp].ptr = (LibeFarr->a[fp].ptr + 1);
return 1;
}
}
int LibePuts (int fp,nctempchar1 *s)
{
int ls;
int i;
int nctemp3824=s->d[0];ls =nctemp3824;
i = 0;
int nctemp3837=i;
int nctemp3834=(int)(s->a[nctemp3837]);
int nctemp3831 = (nctemp3834 !=0);
int nctemp3841 = (i < ls);
int nctemp3828 = (nctemp3831 && nctemp3841);
int nctemp3845=nctemp3828;
while(nctemp3845)
{{
int nctemp3849= fp;
int nctemp3856=i;
int nctemp3853=(int)(s->a[nctemp3856]);
int nctemp3851= nctemp3853;
int nctemp3858=LibePutc(nctemp3849,nctemp3851);
int nctemp3846 = (nctemp3858 ==0);
if(nctemp3846)
{
struct nctempchar1 *nctemp3865;
static struct nctempchar1 nctemp3866 = {{ 12}, (char*)"write error\0"};
nctemp3865=&nctemp3866;
LibeErrstr=nctemp3865;
LibeErrno = 0;
return 0;
}
else{
i = (i + 1);
}
}
int nctemp3877=i;
int nctemp3874=(int)(s->a[nctemp3877]);
int nctemp3871 = (nctemp3874 !=0);
int nctemp3881 = (i < ls);
int nctemp3868 = (nctemp3871 && nctemp3881);
nctemp3845=nctemp3868;}int nctemp3886= fp;
int nctemp3888=LibeFlushbuff(nctemp3886);
return 1;
}
int LibePuti (int fp,int ival)
{
int nctemp3891= ival;
nctempchar1* nctemp3893= LibeTmpstr;
int nctemp3896=LibeItoa(nctemp3891,nctemp3893);
int nctemp3898= fp;
nctempchar1* nctemp3900= LibeTmpstr;
int nctemp3903=LibePuts(nctemp3898,nctemp3900);
return nctemp3903;
}
int LibePutf (int fp,float fval,nctempchar1 *form)
{
float nctemp3905= fval;
nctempchar1* nctemp3907= form;
nctempchar1* nctemp3910= LibeTmpstr;
int nctemp3913=LibeFtoa(nctemp3905,nctemp3907,nctemp3910);
int nctemp3915= fp;
nctempchar1* nctemp3917= LibeTmpstr;
int nctemp3920=LibePuts(nctemp3915,nctemp3917);
return nctemp3920;
}
int LibePs (nctempchar1 *s)
{
int nctemp3922= 3;
nctempchar1* nctemp3924= s;
int nctemp3927=LibePuts(nctemp3922,nctemp3924);
return 1;
}
int LibePi (int n)
{
int nctemp3930= 3;
int nctemp3932= n;
int nctemp3934=LibePuti(nctemp3930,nctemp3932);
return 1;
}
int LibePf (float r)
{
int nctemp3937= 3;
float nctemp3939= r;
struct nctempchar1 *nctemp3943;
static struct nctempchar1 nctemp3944 = {{ 2}, (char*)"g\0"};
nctemp3943=&nctemp3944;
nctempchar1* nctemp3941= nctemp3943;
int nctemp3945=LibePutf(nctemp3937,nctemp3939,nctemp3941);
return 1;
}
int LibeRead (int fp,int n,nctempchar1 *buffer)
{
int rval;
int nctemp3950=fp;
int nctemp3947 = (LibeFarr->a[nctemp3950].readflg !=1);
if(nctemp3947)
{
struct nctempchar1 *nctemp3958;
static struct nctempchar1 nctemp3959 = {{ 26}, (char*)"File not open for reading\0"};
nctemp3958=&nctemp3959;
LibeErrstr=nctemp3958;
LibeErrno = (-109);
return (-1);
}
int nctemp3965=buffer->d[0];int nctemp3961 = (n > nctemp3965);
if(nctemp3961)
{
LibeErrno = (-108);
struct nctempchar1 *nctemp3974;
static struct nctempchar1 nctemp3975 = {{ 30}, (char*)"The buffer array is too small\0"};
nctemp3974=&nctemp3975;
LibeErrstr=nctemp3974;
return 0;
}
int nctemp3983=fp;
int nctemp3981= LibeFarr->a[nctemp3983].fd;
int nctemp3985= n;
nctempchar1* nctemp3987= buffer;
int nctemp3990=RunRead(nctemp3981,nctemp3985,nctemp3987);
rval =nctemp3990;
int nctemp3991 = (rval ==(-1));
if(nctemp3991)
{
LibeFarr->a[fp].eoflg = 1;
rval = (-1);
}
else{
int nctemp3995 = (rval ==0);
if(nctemp3995)
{
LibeFarr->a[fp].errflg = 1;
struct nctempchar1 *nctemp4004;
static struct nctempchar1 nctemp4005 = {{ 11}, (char*)"read error\0"};
nctemp4004=&nctemp4005;
LibeErrstr=nctemp4004;
LibeErrno = 0;
LibeFarr->a[fp].errflg = 0;
rval = 0;
}
}
return rval;
}
int LibeWrite (int fp,int n,nctempchar1 *buffer)
{
int rval;
int nctemp4011=buffer->d[0];int nctemp4007 = (n > nctemp4011);
if(nctemp4007)
{
LibeErrno = (-108);
struct nctempchar1 *nctemp4020;
static struct nctempchar1 nctemp4021 = {{ 30}, (char*)"The buffer array is too small\0"};
nctemp4020=&nctemp4021;
LibeErrstr=nctemp4020;
return 0;
}
int nctemp4026=fp;
int nctemp4023 = (LibeFarr->a[nctemp4026].writflg !=1);
if(nctemp4023)
{
struct nctempchar1 *nctemp4034;
static struct nctempchar1 nctemp4035 = {{ 26}, (char*)"file not open for writing\0"};
nctemp4034=&nctemp4035;
LibeErrstr=nctemp4034;
LibeErrno = (-110);
return 0;
}
int nctemp4043=fp;
int nctemp4041= LibeFarr->a[nctemp4043].fd;
int nctemp4045= n;
nctempchar1* nctemp4047= buffer;
int nctemp4050=RunWrite(nctemp4041,nctemp4045,nctemp4047);
rval =nctemp4050;
int nctemp4051 = (rval ==0);
if(nctemp4051)
{
LibeFarr->a[fp].errflg = 1;
struct nctempchar1 *nctemp4060;
static struct nctempchar1 nctemp4061 = {{ 12}, (char*)"write error\0"};
nctemp4060=&nctemp4061;
LibeErrstr=nctemp4060;
LibeErrno = 0;
LibeFarr->a[fp].errflg = 0;
rval = 0;
}
return rval;
}
int LibeSeek (int fp,int pos,int flag)
{
int rval;
int nctemp4069=fp;
int nctemp4067= LibeFarr->a[nctemp4069].fd;
int nctemp4071= pos;
int nctemp4073= flag;
int nctemp4075=RunSeek(nctemp4067,nctemp4071,nctemp4073);
rval =nctemp4075;
int nctemp4076 = (rval ==0);
if(nctemp4076)
{
LibeFarr->a[fp].errflg = 1;
struct nctempchar1 *nctemp4085;
static struct nctempchar1 nctemp4086 = {{ 11}, (char*)"Seek error\0"};
nctemp4085=&nctemp4086;
LibeErrstr=nctemp4085;
LibeErrno = 0;
LibeFarr->a[fp].errflg = 0;
rval = 0;
}
return rval;
}
int LibeIodelete ()
{
int stat;
int fd;
int i;
RunFree(LibeTmpstr->a);
RunFree(LibeTmpstr);
stat = 1;
for(i = 0;i < 40;i = (i + 1)){
int nctemp4094=i;
nctempchar1 *nctemp4092 =LibeFarr->a[nctemp4094].base;
int nctemp4091 =(nctemp4092!=0);
if(nctemp4091)
{
int nctemp4098 = (i > 4);
if(nctemp4098)
{
fd = LibeFarr->a[i].fd;
int nctemp4106= fd;
int nctemp4108=RunClose(nctemp4106);
stat =nctemp4108;
int nctemp4109 = (stat ==0);
if(nctemp4109)
{
struct nctempchar1 *nctemp4118;
static struct nctempchar1 nctemp4119 = {{ 21}, (char*)"Could not close file\0"};
nctemp4118=&nctemp4119;
LibeErrstr=nctemp4118;
LibeErrno = (-106);
}
}
int nctemp4124= i;
int nctemp4126=LibeFlush(nctemp4124);
stat =nctemp4126;
int nctemp4129=i;
RunFree(LibeFarr->a[nctemp4129].base->a);
RunFree(LibeFarr->a[nctemp4129].base);
}
}
RunFree(LibeFarr->a);
RunFree(LibeFarr);
return stat;
}
static int NBLOCKS;
static int NTHREADS;
int LibeSetnb (int nb)
{
NBLOCKS = nb;
return 1;
}
int LibeSetnt (int nt)
{
NTHREADS = nt;
return 1;
}
int LibeGetnb ()
{
return NBLOCKS;
}
int LibeGetnt ()
{
return NTHREADS;
}
int LibeArrayex (int line,nctempchar1 *name,int ival,int index,int bound)
{
int nctemp4141= 4;
struct nctempchar1 *nctemp4145;
static struct nctempchar1 nctemp4146 = {{ 37}, (char*)"Array index out of bond at line no: \0"};
nctemp4145=&nctemp4146;
nctempchar1* nctemp4143= nctemp4145;
int nctemp4147=LibePuts(nctemp4141,nctemp4143);
int nctemp4149= 4;
int nctemp4151= line;
int nctemp4153=LibePuti(nctemp4149,nctemp4151);
int nctemp4155= 4;
struct nctempchar1 *nctemp4159;
static struct nctempchar1 nctemp4160 = {{ 3}, (char*)"\n\0"};
nctemp4159=&nctemp4160;
nctempchar1* nctemp4157= nctemp4159;
int nctemp4161=LibePuts(nctemp4155,nctemp4157);
int nctemp4163= 4;
struct nctempchar1 *nctemp4167;
static struct nctempchar1 nctemp4168 = {{ 13}, (char*)"Array name: \0"};
nctemp4167=&nctemp4168;
nctempchar1* nctemp4165= nctemp4167;
int nctemp4169=LibePuts(nctemp4163,nctemp4165);
int nctemp4171= 4;
nctempchar1* nctemp4173= name;
int nctemp4176=LibePuts(nctemp4171,nctemp4173);
int nctemp4178= 4;
struct nctempchar1 *nctemp4182;
static struct nctempchar1 nctemp4183 = {{ 3}, (char*)"\n\0"};
nctemp4182=&nctemp4183;
nctempchar1* nctemp4180= nctemp4182;
int nctemp4184=LibePuts(nctemp4178,nctemp4180);
int nctemp4186= 4;
struct nctempchar1 *nctemp4190;
static struct nctempchar1 nctemp4191 = {{ 11}, (char*)"Index no: \0"};
nctemp4190=&nctemp4191;
nctempchar1* nctemp4188= nctemp4190;
int nctemp4192=LibePuts(nctemp4186,nctemp4188);
int nctemp4194= 4;
int nctemp4196= index;
int nctemp4198=LibePuti(nctemp4194,nctemp4196);
int nctemp4200= 4;
struct nctempchar1 *nctemp4204;
static struct nctempchar1 nctemp4205 = {{ 3}, (char*)"\n\0"};
nctemp4204=&nctemp4205;
nctempchar1* nctemp4202= nctemp4204;
int nctemp4206=LibePuts(nctemp4200,nctemp4202);
int nctemp4208= 4;
struct nctempchar1 *nctemp4212;
static struct nctempchar1 nctemp4213 = {{ 14}, (char*)"Index value: \0"};
nctemp4212=&nctemp4213;
nctempchar1* nctemp4210= nctemp4212;
int nctemp4214=LibePuts(nctemp4208,nctemp4210);
int nctemp4216= 4;
int nctemp4218= ival;
int nctemp4220=LibePuti(nctemp4216,nctemp4218);
int nctemp4222= 4;
struct nctempchar1 *nctemp4226;
static struct nctempchar1 nctemp4227 = {{ 3}, (char*)"\n\0"};
nctemp4226=&nctemp4227;
nctempchar1* nctemp4224= nctemp4226;
int nctemp4228=LibePuts(nctemp4222,nctemp4224);
int nctemp4230= 4;
struct nctempchar1 *nctemp4234;
static struct nctempchar1 nctemp4235 = {{ 16}, (char*)"Index bound: 0-\0"};
nctemp4234=&nctemp4235;
nctempchar1* nctemp4232= nctemp4234;
int nctemp4236=LibePuts(nctemp4230,nctemp4232);
int nctemp4238= 4;
int nctemp4245 = bound - 1;
int nctemp4240= nctemp4245;
int nctemp4246=LibePuti(nctemp4238,nctemp4240);
int nctemp4248= 4;
struct nctempchar1 *nctemp4252;
static struct nctempchar1 nctemp4253 = {{ 3}, (char*)"\n\0"};
nctemp4252=&nctemp4253;
nctempchar1* nctemp4250= nctemp4252;
int nctemp4254=LibePuts(nctemp4248,nctemp4250);
int nctemp4256= 4;
int nctemp4258=LibeFlush(nctemp4256);
int nctemp4260=RunExit();
return 1;
}
int LibeSystem (nctempchar1 *cmd)
{
int rval;
nctempchar1* nctemp4266= cmd;
int nctemp4269=RunSystem(nctemp4266);
rval =nctemp4269;
return rval;
}
int LibeInit ()
{
int rval;
int nctemp4275=LibeErrinit();
rval =nctemp4275;
int nctemp4280=LibeIoinit();
rval =nctemp4280;
int nctemp4285=LibeMathinit();
rval =nctemp4285;
int nctemp4290= 1024;
int nctemp4292=LibeSetnb(nctemp4290);
rval =nctemp4292;
int nctemp4297= 1024;
int nctemp4299=LibeSetnt(nctemp4297);
rval =nctemp4299;
return rval;
}
int LibeExit ()
{
int nctemp4302=RunExit();
return 1;
}
