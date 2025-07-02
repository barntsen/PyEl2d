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
int LibeErrno;
nctempchar1 *LibeErrstr;
int LibeErrinit ()
{
LibeErrno =1;
LibeErrstr=(0);
return 1;
}
int LibeGeterrno ()
{
return LibeErrno;
}
int LibeClearerr ()
{
LibeErrno =1;
return 1;
}
nctempchar1 * LibeGeterrstr ()
{
return LibeErrstr;
}
nctempchar1 * LibeGetenv (nctempchar1 *name)
{
nctempchar1* nctemp20= name;
nctempchar1* nctemp23=RunGetenv(nctemp20);
return nctemp23;
}
float LibeMach (int flag)
{
int nctemp24 = (flag ==1);
if(nctemp24)
{
return 1.1754943508222875e-38;
}
else{
int nctemp29 = (flag ==2);
if(nctemp29)
{
return 3.4028234663852886e+38;
}
else{
int nctemp34 = (flag ==3);
if(nctemp34)
{
return 5.9604644775390625e-08;
}
else{
int nctemp39 = (flag ==4);
if(nctemp39)
{
return 1.1920928955078125e-07;
}
else{
int nctemp44 = (flag ==5);
if(nctemp44)
{
return 0.6931471805599453;
}
else{
float nctemp50=(float)(0);
return nctemp50;
}
}
}
}
}
}
float LibeFabs (float x)
{
int nctemp53 = (x < 0.0);
if(nctemp53)
{
float nctemp57= -x;
return nctemp57;
}
else{
return x;
}
}
float LibeFscale2 (float x,int n)
{
int i;
float rval;
int nctemp59 = (n ==0);
if(nctemp59)
{
return x;
}
rval =1.0;
int nctemp68 = (n > 0);
if(nctemp68)
{
i =0;
int nctemp76 = (i < n);
while(nctemp76){
{
float nctemp88 = rval * 2.0;
rval =nctemp88;
}
int nctemp97 = i + 1;
i =nctemp97;
int nctemp98 = (i < n);
nctemp76=nctemp98;
}
}
else{
int nctemp105= -n;
n =nctemp105;
i =0;
int nctemp110 = (i < n);
while(nctemp110){
{
float nctemp122 = rval * 0.5;
rval =nctemp122;
}
int nctemp131 = i + 1;
i =nctemp131;
int nctemp132 = (i < n);
nctemp110=nctemp132;
}
}
float nctemp140 = rval * x;
return nctemp140;
}
float LibeGetfman2 (float x)
{
float absx;
int n;
float nctemp145= x;
float nctemp147=LibeFabs(nctemp145);
absx =nctemp147;
n =0;
int nctemp152 = (x ==0.0);
if(nctemp152)
{
return 0.0;
}
int nctemp157 = (absx < 0.5);
int nctemp161=nctemp157;
while(nctemp161)
{{
int nctemp170 = n - 1;
n =nctemp170;
float nctemp179 = absx * 2.0;
absx =nctemp179;
}
int nctemp180 = (absx < 0.5);
nctemp161=nctemp180;}int nctemp184 = (absx >= 1.0);
int nctemp188=nctemp184;
while(nctemp188)
{{
int nctemp197 = n + 1;
n =nctemp197;
float nctemp206 = absx * 0.5;
absx =nctemp206;
}
int nctemp207 = (absx >= 1.0);
nctemp188=nctemp207;}int nctemp211 = (x < 0.0);
if(nctemp211)
{
float nctemp215= -absx;
return nctemp215;
}
else{
return absx;
}
}
int LibeGetfexp2 (float x)
{
float absx;
int n;
float nctemp221= x;
float nctemp223=LibeFabs(nctemp221);
absx =nctemp223;
n =0;
int nctemp228 = (x ==0.0);
if(nctemp228)
{
return 0;
}
int nctemp233 = (absx < 0.5);
int nctemp237=nctemp233;
while(nctemp237)
{{
int nctemp246 = n - 1;
n =nctemp246;
float nctemp255 = absx * 2.0;
absx =nctemp255;
}
int nctemp256 = (absx < 0.5);
nctemp237=nctemp256;}int nctemp260 = (absx >= 1.0);
int nctemp264=nctemp260;
while(nctemp264)
{{
int nctemp273 = n + 1;
n =nctemp273;
float nctemp282 = absx * 0.5;
absx =nctemp282;
}
int nctemp283 = (absx >= 1.0);
nctemp264=nctemp283;}return n;
}
float LibeFscale (float x,int n)
{
int i;
float rval;
rval =1.0;
int nctemp292 = (n ==0);
if(nctemp292)
{
return x;
}
int nctemp297 = (n > 0);
if(nctemp297)
{
i =0;
int nctemp305 = (i < n);
while(nctemp305){
{
float nctemp317 = rval * 10.0;
rval =nctemp317;
}
int nctemp326 = i + 1;
i =nctemp326;
int nctemp327 = (i < n);
nctemp305=nctemp327;
}
}
else{
int nctemp334= -n;
n =nctemp334;
i =0;
int nctemp339 = (i < n);
while(nctemp339){
{
float nctemp351 = rval * 0.1;
rval =nctemp351;
}
int nctemp360 = i + 1;
i =nctemp360;
int nctemp361 = (i < n);
nctemp339=nctemp361;
}
}
float nctemp369 = rval * x;
return nctemp369;
}
int LibeGetfman (float f,int maxdig)
{
int sign;
int nexp;
int n;
int i;
int nctemp370 = (f ==0.0);
if(nctemp370)
{
return 0;
}
sign =1;
int nctemp379 = (f < 0.0);
if(nctemp379)
{
float nctemp386= -f;
f =nctemp386;
int nctemp390= -sign;
sign =nctemp390;
}
nexp =0;
float nctemp405 = f / 10.0;
float nctemp407 = nctemp405 + 1.1920928955078125e-07;
int nctemp395 = (nctemp407 >= 1.0);
if(nctemp395)
{
float nctemp419 = f / 10.0;
float nctemp421 = nctemp419 + 1.1920928955078125e-07;
int nctemp409 = (nctemp421 >= 1.0);
int nctemp423=nctemp409;
while(nctemp423)
{{
float nctemp432 = f / 10.0;
f =nctemp432;
int nctemp441 = nexp + 1;
nexp =nctemp441;
}
float nctemp452 = f / 10.0;
float nctemp454 = nctemp452 + 1.1920928955078125e-07;
int nctemp442 = (nctemp454 >= 1.0);
nctemp423=nctemp442;}}
else{
float nctemp463 = f + 1.1920928955078125e-07;
int nctemp456 = (nctemp463 < 1.0);
if(nctemp456)
{
float nctemp472 = f + 1.1920928955078125e-07;
int nctemp465 = (nctemp472 < 1.0);
int nctemp474=nctemp465;
while(nctemp474)
{{
float nctemp483 = f * 10.0;
f =nctemp483;
int nctemp492 = nexp - 1;
nexp =nctemp492;
}
float nctemp500 = f + 1.1920928955078125e-07;
int nctemp493 = (nctemp500 < 1.0);
nctemp474=nctemp493;}}
}
i =0;
int nctemp514 = maxdig - 1;
int nctemp506 = (i < nctemp514);
while(nctemp506){
{
float nctemp523 = f * 10.0;
f =nctemp523;
}
int nctemp532 = i + 1;
i =nctemp532;
int nctemp541 = maxdig - 1;
int nctemp533 = (i < nctemp541);
nctemp506=nctemp533;
}
float nctemp552 = f + 0.5;
int nctemp546=(int)(nctemp552);
n =nctemp546;
int nctemp553 = (sign < 0);
if(nctemp553)
{
int nctemp560= -n;
n =nctemp560;
}
return n;
}
float LibeGetffman (float f)
{
int sign;
int nexp;
int nctemp562 = (f ==0.0);
if(nctemp562)
{
return 0.0;
}
sign =1;
int nctemp571 = (f < 0.0);
if(nctemp571)
{
float nctemp578= -f;
f =nctemp578;
int nctemp582= -sign;
sign =nctemp582;
}
nexp =0;
float nctemp597 = f / 10.0;
float nctemp599 = nctemp597 + 1.1920928955078125e-07;
int nctemp587 = (nctemp599 >= 1.0);
if(nctemp587)
{
float nctemp611 = f / 10.0;
float nctemp613 = nctemp611 + 1.1920928955078125e-07;
int nctemp601 = (nctemp613 >= 1.0);
int nctemp615=nctemp601;
while(nctemp615)
{{
float nctemp624 = f / 10.0;
f =nctemp624;
int nctemp633 = nexp + 1;
nexp =nctemp633;
}
float nctemp644 = f / 10.0;
float nctemp646 = nctemp644 + 1.1920928955078125e-07;
int nctemp634 = (nctemp646 >= 1.0);
nctemp615=nctemp634;}}
else{
float nctemp655 = f + 1.1920928955078125e-07;
int nctemp648 = (nctemp655 < 1.0);
if(nctemp648)
{
float nctemp664 = f + 1.1920928955078125e-07;
int nctemp657 = (nctemp664 < 1.0);
int nctemp666=nctemp657;
while(nctemp666)
{{
float nctemp675 = f * 10.0;
f =nctemp675;
int nctemp684 = nexp - 1;
nexp =nctemp684;
}
float nctemp692 = f + 1.1920928955078125e-07;
int nctemp685 = (nctemp692 < 1.0);
nctemp666=nctemp685;}}
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
int nctemp695 = (f ==0.0);
if(nctemp695)
{
return 0;
}
sign =1;
int nctemp704 = (f < 0.0);
if(nctemp704)
{
float nctemp711= -f;
f =nctemp711;
int nctemp715= -sign;
sign =nctemp715;
}
nexp =0;
float nctemp730 = f / 10.0;
float nctemp732 = nctemp730 + 1.1920928955078125e-07;
int nctemp720 = (nctemp732 >= 1.0);
if(nctemp720)
{
float nctemp744 = f / 10.0;
float nctemp746 = nctemp744 + 1.1920928955078125e-07;
int nctemp734 = (nctemp746 >= 1.0);
int nctemp748=nctemp734;
while(nctemp748)
{{
float nctemp757 = f / 10.0;
f =nctemp757;
int nctemp766 = nexp + 1;
nexp =nctemp766;
}
float nctemp777 = f / 10.0;
float nctemp779 = nctemp777 + 1.1920928955078125e-07;
int nctemp767 = (nctemp779 >= 1.0);
nctemp748=nctemp767;}}
else{
float nctemp788 = f + 1.1920928955078125e-07;
int nctemp781 = (nctemp788 < 1.0);
if(nctemp781)
{
float nctemp797 = f + 1.1920928955078125e-07;
int nctemp790 = (nctemp797 < 1.0);
int nctemp799=nctemp790;
while(nctemp799)
{{
float nctemp808 = f * 10.0;
f =nctemp808;
int nctemp817 = nexp - 1;
nexp =nctemp817;
}
float nctemp825 = f + 1.1920928955078125e-07;
int nctemp818 = (nctemp825 < 1.0);
nctemp799=nctemp818;}}
}
i =0;
loop =1;
int nctemp836=loop;
while(nctemp836)
{{
int nctemp848=(int)(f);
float nctemp845=(float)(nctemp848);
float nctemp851 = f - nctemp845;
r =nctemp851;
int nctemp852 = (r < 1.1920928955078125e-07);
if(nctemp852)
{
loop =0;
}
else{
float nctemp868 = f * 10.0;
f =nctemp868;
}
int nctemp877 = i + 1;
i =nctemp877;
int nctemp878 = (i >= 10);
if(nctemp878)
{
loop =0;
}
}
nctemp836=loop;}return i;
}
int LibeGetfexp (float f)
{
int nexp;
int nctemp888 = (f ==0.0);
if(nctemp888)
{
return 0;
}
nexp =0;
int nctemp897 = (f < 0.0);
if(nctemp897)
{
float nctemp904= -f;
f =nctemp904;
}
float nctemp915 = f / 10.0;
float nctemp917 = nctemp915 + 1.1920928955078125e-07;
int nctemp905 = (nctemp917 >= 1.0);
if(nctemp905)
{
float nctemp929 = f / 10.0;
float nctemp931 = nctemp929 + 1.1920928955078125e-07;
int nctemp919 = (nctemp931 >= 1.0);
int nctemp933=nctemp919;
while(nctemp933)
{{
float nctemp942 = f / 10.0;
f =nctemp942;
int nctemp951 = nexp + 1;
nexp =nctemp951;
}
float nctemp962 = f / 10.0;
float nctemp964 = nctemp962 + 1.1920928955078125e-07;
int nctemp952 = (nctemp964 >= 1.0);
nctemp933=nctemp952;}}
else{
float nctemp973 = f + 1.1920928955078125e-07;
int nctemp966 = (nctemp973 < 1.0);
if(nctemp966)
{
float nctemp982 = f + 1.1920928955078125e-07;
int nctemp975 = (nctemp982 < 1.0);
int nctemp984=nctemp975;
while(nctemp984)
{{
float nctemp993 = f * 10.0;
f =nctemp993;
int nctemp1002 = nexp - 1;
nexp =nctemp1002;
}
float nctemp1010 = f + 1.1920928955078125e-07;
int nctemp1003 = (nctemp1010 < 1.0);
nctemp984=nctemp1003;}}
}
return nexp;
}
float LibeClock ()
{
float nctemp1014=RunClock();
return nctemp1014;
}
float LibeSincosmax;
float LibeSincoslim;
float LibeLnmax;
float LibeLnmin;
int LibeMod (int n,int r)
{
int nctemp1015 = (r ==0);
if(nctemp1015)
{
return n;
}
int nctemp1031 = n / r;
int nctemp1033 = nctemp1031 * r;
int nctemp1034 = n - nctemp1033;
return nctemp1034;
}
float LibeSqrt (float x)
{
float f;
float yest;
float z;
int n;
int nctemp1035 = (x ==0.0);
if(nctemp1035)
{
return 0.0;
}
int nctemp1040 = (x < 0.0);
if(nctemp1040)
{
LibeErrno =(-101);
struct nctempchar1 *nctemp1053;
static struct nctempchar1 nctemp1054 = {{ 25}, (char*)"Sqrt input argument < 0 \0"};
nctemp1053=&nctemp1054;
LibeErrstr=nctemp1053;
return 0.0;
}
float nctemp1060= x;
float nctemp1062=LibeGetfman2(nctemp1060);
f =nctemp1062;
float nctemp1067= x;
int nctemp1069=LibeGetfexp2(nctemp1067);
n =nctemp1069;
float nctemp1082 = 0.59016 * f;
float nctemp1083 = 0.41731 + nctemp1082;
yest =nctemp1083;
float nctemp1096 = f / yest;
float nctemp1097 = yest + nctemp1096;
z =nctemp1097;
float nctemp1109 = 0.25 * z;
float nctemp1115 = f / z;
float nctemp1116 = nctemp1109 + nctemp1115;
yest =nctemp1116;
int nctemp1120= n;
int nctemp1122= 2;
int nctemp1124=LibeMod(nctemp1120,nctemp1122);
int nctemp1117 = (nctemp1124 !=0);
if(nctemp1117)
{
float nctemp1134 = yest * 0.70710678118654752440;
yest =nctemp1134;
int nctemp1143 = n + 1;
n =nctemp1143;
}
float nctemp1145= yest;
int nctemp1152 = n / 2;
int nctemp1147= nctemp1152;
float nctemp1153=LibeFscale2(nctemp1145,nctemp1147);
return nctemp1153;
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
int nctemp1154 = (x <= 0.0);
if(nctemp1154)
{
LibeErrno =(-101);
struct nctempchar1 *nctemp1167;
static struct nctempchar1 nctemp1168 = {{ 23}, (char*)"Ln input argument < 0 \0"};
nctemp1167=&nctemp1168;
LibeErrstr=nctemp1167;
return 3.4028234663852886e+38;
}
float nctemp1174= x;
float nctemp1176=LibeGetfman2(nctemp1174);
f =nctemp1176;
float nctemp1181= x;
int nctemp1183=LibeGetfexp2(nctemp1181);
n =nctemp1183;
int nctemp1184 = (f > 0.70710678118654752440);
if(nctemp1184)
{
float nctemp1199 = f - 0.5;
float nctemp1201 = nctemp1199 - 0.5;
zn =nctemp1201;
float nctemp1213 = f * 0.5;
float nctemp1215 = nctemp1213 + 0.5;
zd =nctemp1215;
}
else{
float nctemp1224 = f - 0.5;
zn =nctemp1224;
float nctemp1236 = zn * 0.5;
float nctemp1238 = nctemp1236 + 0.5;
zd =nctemp1238;
int nctemp1247 = n - 1;
n =nctemp1247;
}
float nctemp1256 = zn / zd;
z =nctemp1256;
float nctemp1265 = z * z;
w =nctemp1265;
float nctemp1285 = w * (-0.5527074855E+0);
float nctemp1291 = w + (-0.6632718214E+1);
float nctemp1292 = nctemp1285 / nctemp1291;
float nctemp1293 = z * nctemp1292;
float nctemp1294 = z + nctemp1293;
r =nctemp1294;
float nctemp1299=(float)(n);
xn =nctemp1299;
float nctemp1312 = xn * (-2.121944400546905827679E-4);
float nctemp1314 = nctemp1312 + r;
float nctemp1320 = xn * 0.69335938;
float nctemp1321 = nctemp1314 + nctemp1320;
return nctemp1321;
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
P0 =0.24999999950E+0;
P1 =0.41602886268E-2;
Q1 =0.49987178778E-1;
int nctemp1334 = (x >= LibeLnmax);
if(nctemp1334)
{
LibeErrno =(-102);
struct nctempchar1 *nctemp1347;
static struct nctempchar1 nctemp1348 = {{ 25}, (char*)"Overflow in exp function\0"};
nctemp1347=&nctemp1348;
LibeErrstr=nctemp1347;
return 3.4028234663852886e+38;
}
int nctemp1350 = (x < LibeLnmin);
if(nctemp1350)
{
LibeErrno =(-102);
struct nctempchar1 *nctemp1363;
static struct nctempchar1 nctemp1364 = {{ 26}, (char*)"Underflow in exp function\0"};
nctemp1363=&nctemp1364;
LibeErrstr=nctemp1363;
return 0.0;
}
float nctemp1376 = x * 1.4426950408889634073;
int nctemp1370=(int)(nctemp1376);
n =nctemp1370;
float nctemp1381=(float)(n);
xn =nctemp1381;
float nctemp1396 = xn * 0.693147180559945309417232;
float nctemp1397 = x - nctemp1396;
g =nctemp1397;
float nctemp1406 = g * g;
z =nctemp1406;
float nctemp1421 = P1 * z;
float nctemp1423 = nctemp1421 + P0;
float nctemp1425 = nctemp1423 * g;
p =nctemp1425;
float nctemp1437 = Q1 * z;
float nctemp1439 = nctemp1437 + 0.5;
q =nctemp1439;
float nctemp1456 = q - p;
float nctemp1457 = p / nctemp1456;
float nctemp1458 = 0.5 + nctemp1457;
rval =nctemp1458;
float nctemp1460= rval;
int nctemp1467 = n + 1;
int nctemp1462= nctemp1467;
float nctemp1468=LibeFscale2(nctemp1460,nctemp1462);
return nctemp1468;
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
float nctemp1472= -0.1666665668E+0;
R1 =nctemp1472;
R2 =0.8333025139E-2;
float nctemp1480= -0.1980741872E-3;
R3 =nctemp1480;
R4 =0.2601903036E-5;
int nctemp1485 = (y > LibeSincosmax);
if(nctemp1485)
{
LibeErrno =(-102);
struct nctempchar1 *nctemp1498;
static struct nctempchar1 nctemp1499 = {{ 37}, (char*)"Loss of accuracy in sin/cos function\0"};
nctemp1498=&nctemp1499;
LibeErrstr=nctemp1498;
return 0.0;
}
float nctemp1514 = y * 0.31830988618379067154;
float nctemp1516 = nctemp1514 + 0.5;
int nctemp1505=(int)(nctemp1516);
n =nctemp1505;
float nctemp1521=(float)(n);
xn =nctemp1521;
int nctemp1527= n;
int nctemp1529= 2;
int nctemp1531=LibeMod(nctemp1527,nctemp1529);
int nctemp1524 = (nctemp1531 !=0);
if(nctemp1524)
{
float nctemp1536= -sign;
sign =nctemp1536;
}
float nctemp1541= x;
float nctemp1543=LibeFabs(nctemp1541);
x =nctemp1543;
int nctemp1544 = (x !=y);
if(nctemp1544)
{
float nctemp1556 = xn - 0.5;
xn =nctemp1556;
}
float nctemp1564= x;
float nctemp1566=LibeFabs(nctemp1564);
float nctemp1572 = xn * 3.1415926535897932384626433832795028841972;
float nctemp1573 = nctemp1566 - nctemp1572;
f =nctemp1573;
float nctemp1577= f;
float nctemp1579=LibeFabs(nctemp1577);
int nctemp1574 = (nctemp1579 < LibeSincoslim);
if(nctemp1574)
{
float nctemp1585 = sign * f;
return nctemp1585;
}
float nctemp1594 = f * f;
g =nctemp1594;
float nctemp1621 = R4 * g;
float nctemp1623 = nctemp1621 + R3;
float nctemp1625 = nctemp1623 * g;
float nctemp1627 = nctemp1625 + R2;
float nctemp1629 = nctemp1627 * g;
float nctemp1631 = nctemp1629 + R1;
float nctemp1633 = nctemp1631 * g;
g =nctemp1633;
float nctemp1646 = f * g;
float nctemp1647 = f + nctemp1646;
g =nctemp1647;
float nctemp1652 = sign * g;
return nctemp1652;
}
float LibeSin (float x)
{
int nctemp1653 = (x < 0.0);
if(nctemp1653)
{
float nctemp1658= x;
float nctemp1661= -x;
float nctemp1660= nctemp1661;
float nctemp1663= -1.0;
float nctemp1662= nctemp1663;
float nctemp1664=LibeSincos(nctemp1658,nctemp1660,nctemp1662);
return nctemp1664;
}
else{
float nctemp1666= x;
float nctemp1668= x;
float nctemp1670= 1.0;
float nctemp1672=LibeSincos(nctemp1666,nctemp1668,nctemp1670);
return nctemp1672;
}
}
float LibeCos (float x)
{
float nctemp1674= x;
float nctemp1680= x;
float nctemp1682=LibeFabs(nctemp1680);
float nctemp1684 = nctemp1682 + 1.57079632679489661923132;
float nctemp1676= nctemp1684;
float nctemp1685= 1.0;
float nctemp1687=LibeSincos(nctemp1674,nctemp1676,nctemp1685);
return nctemp1687;
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
float nctemp1691= -0.958017723E-1;
P1 =nctemp1691;
float nctemp1695= -0.429135777E+0;
Q1 =nctemp1695;
Q2 =0.971685835E-2;
float nctemp1704= x;
float nctemp1706=LibeFabs(nctemp1704);
y =nctemp1706;
int nctemp1707 = (y > LibeSincosmax);
if(nctemp1707)
{
LibeErrno =(-102);
struct nctempchar1 *nctemp1720;
static struct nctempchar1 nctemp1721 = {{ 33}, (char*)"Loss of accuracy in tan function\0"};
nctemp1720=&nctemp1721;
LibeErrstr=nctemp1720;
return 0.0;
}
float nctemp1733 = x * 0.63661977236758134308;
int nctemp1727=(int)(nctemp1733);
n =nctemp1727;
float nctemp1738=(float)(n);
xn =nctemp1738;
float nctemp1753 = xn * 1.57079632679489661923132;
float nctemp1754 = x - nctemp1753;
f =nctemp1754;
float nctemp1758= f;
float nctemp1760=LibeFabs(nctemp1758);
int nctemp1755 = (nctemp1760 < LibeSincoslim);
if(nctemp1755)
{
xnum =f;
xden =1.0;
}
else{
float nctemp1778 = f * f;
g =nctemp1778;
float nctemp1793 = P1 * g;
float nctemp1795 = nctemp1793 * f;
float nctemp1797 = nctemp1795 + f;
xnum =nctemp1797;
float nctemp1818 = Q2 * g;
float nctemp1820 = nctemp1818 + Q1;
float nctemp1822 = nctemp1820 * g;
float nctemp1824 = nctemp1822 + 0.5;
float nctemp1826 = nctemp1824 + 0.5;
xden =nctemp1826;
}
int nctemp1830= n;
int nctemp1832= 2;
int nctemp1834=LibeMod(nctemp1830,nctemp1832);
int nctemp1827 = (nctemp1834 !=0);
if(nctemp1827)
{
float nctemp1839= -xnum;
float nctemp1840 = xden / nctemp1839;
return nctemp1840;
}
else{
float nctemp1845 = xnum / xden;
return nctemp1845;
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
P1 =0.933935835E+0;
float nctemp1853= -0.504400557E+0;
P2 =nctemp1853;
Q0 =0.560363004E+1;
float nctemp1861= -0.554846723E+1;
Q1 =nctemp1861;
float nctemp1866= x;
float nctemp1868=LibeFabs(nctemp1866);
y =nctemp1868;
int nctemp1869 = (y > 0.5);
if(nctemp1869)
{
i =1;
int nctemp1877 = (y > 1.0);
if(nctemp1877)
{
LibeErrno =(-101);
struct nctempchar1 *nctemp1890;
static struct nctempchar1 nctemp1891 = {{ 41}, (char*)"Absolute value of argument of arcsin > 1\0"};
nctemp1890=&nctemp1891;
LibeErrstr=nctemp1890;
return 3.4028234663852886e+38;
}
float nctemp1904 = 1.0 - y;
float nctemp1906 = nctemp1904 * 0.5;
g =nctemp1906;
float nctemp1911= g;
float nctemp1913=LibeSqrt(nctemp1911);
r =nctemp1913;
float nctemp1917= -r;
r =nctemp1917;
float nctemp1926 = r + r;
y =nctemp1926;
float nctemp1944 = P2 * g;
float nctemp1946 = nctemp1944 + P1;
float nctemp1948 = nctemp1946 * g;
float nctemp1960 = g + Q1;
float nctemp1962 = nctemp1960 * g;
float nctemp1964 = nctemp1962 + Q0;
float nctemp1965 = nctemp1948 / nctemp1964;
r =nctemp1965;
float nctemp1978 = y * r;
float nctemp1979 = y + nctemp1978;
res =nctemp1979;
}
else{
i =0;
int nctemp1984 = (y < LibeSincoslim);
if(nctemp1984)
{
res =y;
}
else{
float nctemp2000 = y * y;
g =nctemp2000;
float nctemp2018 = P2 * g;
float nctemp2020 = nctemp2018 + P1;
float nctemp2022 = nctemp2020 * g;
float nctemp2034 = g + Q1;
float nctemp2036 = nctemp2034 * g;
float nctemp2038 = nctemp2036 + Q0;
float nctemp2039 = nctemp2022 / nctemp2038;
g =nctemp2039;
float nctemp2052 = y * g;
float nctemp2053 = y + nctemp2052;
res =nctemp2053;
}
}
int nctemp2054 = (i ==1);
if(nctemp2054)
{
float nctemp2070 = 0.78539816339744830962 + res;
float nctemp2071 = 0.78539816339744830962 + nctemp2070;
res =nctemp2071;
}
int nctemp2072 = (x < 0.0);
if(nctemp2072)
{
float nctemp2079= -res;
res =nctemp2079;
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
P1 =0.933935835E+0;
float nctemp2088= -0.504400557E+0;
P2 =nctemp2088;
Q0 =0.560363004E+1;
float nctemp2096= -0.554846723E+1;
Q1 =nctemp2096;
float nctemp2101= x;
float nctemp2103=LibeFabs(nctemp2101);
y =nctemp2103;
int nctemp2104 = (y > 0.5);
if(nctemp2104)
{
i =0;
int nctemp2112 = (y > 1.0);
if(nctemp2112)
{
LibeErrno =(-101);
struct nctempchar1 *nctemp2125;
static struct nctempchar1 nctemp2126 = {{ 50}, (char*)"Absolute value of argument of arccos out of range\0"};
nctemp2125=&nctemp2126;
LibeErrstr=nctemp2125;
return 3.4028234663852886e+38;
}
float nctemp2139 = 1.0 - y;
float nctemp2141 = nctemp2139 * 0.5;
g =nctemp2141;
float nctemp2146= g;
float nctemp2148=LibeSqrt(nctemp2146);
r =nctemp2148;
float nctemp2152= -r;
r =nctemp2152;
float nctemp2161 = r + r;
y =nctemp2161;
float nctemp2179 = P2 * g;
float nctemp2181 = nctemp2179 + P1;
float nctemp2183 = nctemp2181 * g;
float nctemp2195 = g + Q1;
float nctemp2197 = nctemp2195 * g;
float nctemp2199 = nctemp2197 + Q0;
float nctemp2200 = nctemp2183 / nctemp2199;
r =nctemp2200;
float nctemp2213 = y * r;
float nctemp2214 = y + nctemp2213;
res =nctemp2214;
}
else{
i =1;
int nctemp2219 = (y < LibeSincoslim);
if(nctemp2219)
{
res =y;
}
else{
float nctemp2235 = y * y;
g =nctemp2235;
float nctemp2253 = P2 * g;
float nctemp2255 = nctemp2253 + P1;
float nctemp2257 = nctemp2255 * g;
float nctemp2269 = g + Q1;
float nctemp2271 = nctemp2269 * g;
float nctemp2273 = nctemp2271 + Q0;
float nctemp2274 = nctemp2257 / nctemp2273;
g =nctemp2274;
float nctemp2287 = y * g;
float nctemp2288 = y + nctemp2287;
res =nctemp2288;
}
}
int nctemp2289 = (x < 0.0);
if(nctemp2289)
{
int nctemp2293 = (i ==0);
if(nctemp2293)
{
float nctemp2309 = 1.57079632679489661923132 + res;
float nctemp2310 = 1.57079632679489661923132 + nctemp2309;
res =nctemp2310;
}
else{
float nctemp2323 = 0.78539816339744830962 + res;
float nctemp2324 = 0.78539816339744830962 + nctemp2323;
res =nctemp2324;
}
}
else{
int nctemp2325 = (i ==1);
if(nctemp2325)
{
float nctemp2341 = 0.78539816339744830962 - res;
float nctemp2342 = 0.78539816339744830962 + nctemp2341;
res =nctemp2342;
}
else{
float nctemp2346= -res;
res =nctemp2346;
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
rt32 =0.26794919243112270647;
rt3 =1.73205080756887729353;
float nctemp2364 = rt3 - 1.0;
a =nctemp2364;
float nctemp2368= -0.4708325141E+0;
P0 =nctemp2368;
float nctemp2372= -0.5090958253E-1;
P1 =nctemp2372;
Q0 =0.1412500740E+1;
int nctemp2377 = (f > 1.0);
if(nctemp2377)
{
float nctemp2389 = 1.0 / f;
f =nctemp2389;
n =2;
}
else{
n =0;
}
int nctemp2398 = (f > rt32);
if(nctemp2398)
{
float nctemp2422 = a * f;
float nctemp2424 = nctemp2422 - 0.5;
float nctemp2426 = nctemp2424 - 0.5;
float nctemp2428 = nctemp2426 + f;
float nctemp2434 = rt3 + f;
float nctemp2435 = nctemp2428 / nctemp2434;
f =nctemp2435;
int nctemp2444 = n + 1;
n =nctemp2444;
}
float nctemp2448= f;
float nctemp2450=LibeFabs(nctemp2448);
int nctemp2445 = (nctemp2450 < LibeSincoslim);
if(nctemp2445)
{
res =f;
}
else{
float nctemp2464 = f * f;
g =nctemp2464;
float nctemp2482 = P1 * g;
float nctemp2484 = nctemp2482 + P0;
float nctemp2486 = nctemp2484 * g;
float nctemp2492 = g + Q0;
float nctemp2493 = nctemp2486 / nctemp2492;
res =nctemp2493;
float nctemp2506 = f * res;
float nctemp2507 = f + nctemp2506;
res =nctemp2507;
}
int nctemp2508 = (n > 1);
if(nctemp2508)
{
float nctemp2515= -res;
res =nctemp2515;
}
int nctemp2516 = (n ==1);
if(nctemp2516)
{
float nctemp2528 = res + 0.52359877559829887308;
res =nctemp2528;
}
else{
int nctemp2529 = (n ==2);
if(nctemp2529)
{
float nctemp2541 = res + 1.57079632679489661923132;
res =nctemp2541;
}
else{
int nctemp2542 = (n ==3);
if(nctemp2542)
{
float nctemp2554 = res + 1.04719755119659774615;
res =nctemp2554;
}
}
}
return res;
}
float LibeArctan (float x)
{
float rval;
int nctemp2556 = (x < 0.0);
if(nctemp2556)
{
float nctemp2565= -x;
float nctemp2564= nctemp2565;
float nctemp2566=LibeAtan(nctemp2564);
rval =nctemp2566;
float nctemp2570= -rval;
rval =nctemp2570;
}
else{
float nctemp2575= x;
float nctemp2577=LibeAtan(nctemp2575);
rval =nctemp2577;
}
return rval;
}
float LibePow (float base,float exponent)
{
float nctemp2585= base;
float nctemp2587=LibeLn(nctemp2585);
float nctemp2588 = exponent * nctemp2587;
float nctemp2580= nctemp2588;
float nctemp2589=LibeExp(nctemp2580);
return nctemp2589;
}
int LibeMathinit ()
{
float nctemp2594= 1.0;
int nctemp2601 = 24 - 1;
int nctemp2596= nctemp2601;
float nctemp2602=LibeFscale2(nctemp2594,nctemp2596);
LibeSincosmax =nctemp2602;
float nctemp2611= LibeSincosmax;
float nctemp2613=LibeSqrt(nctemp2611);
float nctemp2614 = 3.1415926535897932384626433832795028841972 * nctemp2613;
LibeSincosmax =nctemp2614;
float nctemp2623= 1.0;
int nctemp2630 = 24 / 2;
int nctemp2625= nctemp2630;
float nctemp2631=LibeFscale2(nctemp2623,nctemp2625);
float nctemp2632 = 1.0 / nctemp2631;
LibeSincoslim =nctemp2632;
float nctemp2637= 3.4028234663852886e+38;
float nctemp2639=LibeLn(nctemp2637);
LibeLnmax =nctemp2639;
float nctemp2644= 1.1754943508222875e-38;
float nctemp2646=LibeLn(nctemp2644);
LibeLnmin =nctemp2646;
return 1;
}
int LibeStrlen (nctempchar1 *s)
{
int ls;
int i;
int nctemp2652=s->d[0];ls =nctemp2652;
i =0;
int nctemp2669=i;
int nctemp2666=(int)(s->a[nctemp2669]);
int nctemp2663 = (nctemp2666 !=0);
int nctemp2673 = (i < ls);
int nctemp2660 = (nctemp2663 && nctemp2673);
int nctemp2677=nctemp2660;
while(nctemp2677)
{{
int nctemp2686 = i + 1;
i =nctemp2686;
}
int nctemp2696=i;
int nctemp2693=(int)(s->a[nctemp2696]);
int nctemp2690 = (nctemp2693 !=0);
int nctemp2700 = (i < ls);
int nctemp2687 = (nctemp2690 && nctemp2700);
nctemp2677=nctemp2687;}return i;
}
int LibeStrcmp (nctempchar1 *s,nctempchar1 *t)
{
int ls;
int i;
int nctemp2709=s->d[0];ls =nctemp2709;
i =0;
int nctemp2723=i;
int nctemp2726=i;
int nctemp2720 = (s->a[nctemp2723] ==t->a[nctemp2726]);
int nctemp2729 = (i < ls);
int nctemp2717 = (nctemp2720 && nctemp2729);
int nctemp2733=nctemp2717;
while(nctemp2733)
{{
int nctemp2740=i;
int nctemp2737=(int)(s->a[nctemp2740]);
int nctemp2734 = (nctemp2737 ==0);
if(nctemp2734)
{
return 1;
}
int nctemp2752 = i + 1;
i =nctemp2752;
}
int nctemp2759=i;
int nctemp2762=i;
int nctemp2756 = (s->a[nctemp2759] ==t->a[nctemp2762]);
int nctemp2765 = (i < ls);
int nctemp2753 = (nctemp2756 && nctemp2765);
nctemp2733=nctemp2753;}return 0;
}
int LibeStrev (nctempchar1 *s)
{
char c;
int i;
int j;
i =0;
nctempchar1* nctemp2781= s;
int nctemp2784=LibeStrlen(nctemp2781);
int nctemp2786 = nctemp2784 - 1;
j =nctemp2786;
int nctemp2787 = (i < j);
int nctemp2791=nctemp2787;
while(nctemp2791)
{{
int nctemp2796=i;
c =s->a[nctemp2796];
int nctemp2801=i;
int nctemp2804=j;
s->a[nctemp2801] =s->a[nctemp2804];
int nctemp2809=j;
s->a[nctemp2809] =c;
int nctemp2820 = i + 1;
i =nctemp2820;
int nctemp2829 = j - 1;
j =nctemp2829;
}
int nctemp2830 = (i < j);
nctemp2791=nctemp2830;}return 1;
}
int LibeStrcpy (nctempchar1 *s,nctempchar1 *t)
{
int ls;
int i;
nctempchar1* nctemp2839= s;
int nctemp2842=LibeStrlen(nctemp2839);
ls =nctemp2842;
int nctemp2843 = (ls ==0);
if(nctemp2843)
{
return 1;
}
int nctemp2851=t->d[0];int nctemp2848 = (nctemp2851 <= ls);
if(nctemp2848)
{
return 0;
}
i =0;
int nctemp2861 = (i <= ls);
while(nctemp2861){
{
int nctemp2868=i;
int nctemp2871=i;
t->a[nctemp2868] =s->a[nctemp2871];
}
int nctemp2881 = i + 1;
i =nctemp2881;
int nctemp2882 = (i <= ls);
nctemp2861=nctemp2882;
}
return 1;
}
int LibeStrcat (nctempchar1 *s,nctempchar1 *t)
{
int ls;
int lt;
int i;
nctempchar1* nctemp2891= s;
int nctemp2894=LibeStrlen(nctemp2891);
ls =nctemp2894;
nctempchar1* nctemp2899= t;
int nctemp2902=LibeStrlen(nctemp2899);
lt =nctemp2902;
int nctemp2906=t->d[0];int nctemp2915 = lt + ls;
int nctemp2903 = (nctemp2906 < nctemp2915);
if(nctemp2903)
{
return 0;
}
i =lt;
int nctemp2929 = ls + lt;
int nctemp2921 = (i < nctemp2929);
while(nctemp2921){
{
int nctemp2933=i;
int nctemp2941 = i - lt;
int nctemp2936=nctemp2941;
t->a[nctemp2933] =s->a[nctemp2936];
}
int nctemp2950 = i + 1;
i =nctemp2950;
int nctemp2959 = ls + lt;
int nctemp2951 = (i < nctemp2959);
nctemp2921=nctemp2951;
}
int nctemp2968 = ls + lt;
int nctemp2963=nctemp2968;
char nctemp2970=(char)(0);
t->a[nctemp2963] =nctemp2970;
return 1;
}
nctempchar1 * LibeStradd (nctempchar1 *t,nctempchar1 *s)
{
int ls;
int lt;
nctempchar1 *r;
int i;
nctempchar1* nctemp2978= s;
int nctemp2981=LibeStrlen(nctemp2978);
ls =nctemp2981;
nctempchar1* nctemp2986= t;
int nctemp2989=LibeStrlen(nctemp2986);
lt =nctemp2989;
int nctemp3004 = lt + ls;
int nctemp3006 = nctemp3004 + 1;
int nctemp2996=nctemp3006;
nctempchar1 *nctemp2995;
nctemp2995=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp3014 = lt + ls;
int nctemp3016 = nctemp3014 + 1;
nctemp2995->d[0]=nctemp3016;
nctemp2995->a=(char *)RunMalloc(sizeof(char)*nctemp2996);
r=nctemp2995;
i =0;
int nctemp3021 = (i < lt);
while(nctemp3021){
{
int nctemp3028=i;
int nctemp3031=i;
r->a[nctemp3028] =t->a[nctemp3031];
}
int nctemp3041 = i + 1;
i =nctemp3041;
int nctemp3042 = (i < lt);
nctemp3021=nctemp3042;
}
i =lt;
int nctemp3058 = ls + lt;
int nctemp3050 = (i < nctemp3058);
while(nctemp3050){
{
int nctemp3062=i;
int nctemp3070 = i - lt;
int nctemp3065=nctemp3070;
r->a[nctemp3062] =s->a[nctemp3065];
}
int nctemp3079 = i + 1;
i =nctemp3079;
int nctemp3088 = ls + lt;
int nctemp3080 = (i < nctemp3088);
nctemp3050=nctemp3080;
}
int nctemp3097 = ls + lt;
int nctemp3092=nctemp3097;
char nctemp3099=(char)(0);
r->a[nctemp3092] =nctemp3099;
return r;
}
nctempchar1 * LibeStrsave (nctempchar1 *s)
{
int l;
nctempchar1 *tmp;
tmp=(0);
l =0;
nctempchar1* nctemp3117= s;
int nctemp3120=LibeStrlen(nctemp3117);
l =nctemp3120;
int nctemp3132 = l + 1;
int nctemp3127=nctemp3132;
nctempchar1 *nctemp3126;
nctemp3126=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp3137 = l + 1;
nctemp3126->d[0]=nctemp3137;
nctemp3126->a=(char *)RunMalloc(sizeof(char)*nctemp3127);
tmp=nctemp3126;
nctempchar1 *nctemp3139 =tmp;
int nctemp3138 =(nctemp3139!=0);
if(nctemp3138)
{
nctempchar1* nctemp3144= s;
nctempchar1* nctemp3147= tmp;
int nctemp3150=LibeStrcpy(nctemp3144,nctemp3147);
}
return tmp;
}
int LibeIsalhpa (int c)
{
int nctemp3159 = (c >= 'a');
int nctemp3164 = (c <= 'z');
int nctemp3156 = (nctemp3159 && nctemp3164);
int nctemp3172 = (c >= 'A');
int nctemp3177 = (c <= 'Z');
int nctemp3169 = (nctemp3172 && nctemp3177);
int nctemp3153 = (nctemp3156 || nctemp3169);
if(nctemp3153)
{
return 1;
}
else{
return 0;
}
}
int LibeIsdigit (int c)
{
int nctemp3186 = (c >= '0');
int nctemp3191 = (c <= '9');
int nctemp3183 = (nctemp3186 && nctemp3191);
if(nctemp3183)
{
return 1;
}
else{
return 0;
}
}
int LibeIsalnum (int c)
{
int nctemp3203 = (c >= 'a');
int nctemp3208 = (c <= 'z');
int nctemp3200 = (nctemp3203 && nctemp3208);
int nctemp3216 = (c >= 'A');
int nctemp3221 = (c <= 'Z');
int nctemp3213 = (nctemp3216 && nctemp3221);
int nctemp3197 = (nctemp3200 || nctemp3213);
if(nctemp3197)
{
return 1;
}
else{
int nctemp3229 = (c >= '0');
int nctemp3234 = (c <= '9');
int nctemp3226 = (nctemp3229 && nctemp3234);
if(nctemp3226)
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
i =0;
int nctemp3253=i;
char nctemp3256=(char)(' ');
int nctemp3250 = (s->a[nctemp3253] ==nctemp3256);
int nctemp3263=i;
char nctemp3266=(char)(10);
int nctemp3260 = (s->a[nctemp3263] ==nctemp3266);
int nctemp3247 = (nctemp3250 || nctemp3260);
int nctemp3273=i;
char nctemp3276=(char)(9);
int nctemp3270 = (s->a[nctemp3273] ==nctemp3276);
int nctemp3244 = (nctemp3247 || nctemp3270);
int nctemp3279=nctemp3244;
while(nctemp3279)
{{
int nctemp3288 = i + 1;
i =nctemp3288;
}
int nctemp3298=i;
char nctemp3301=(char)(' ');
int nctemp3295 = (s->a[nctemp3298] ==nctemp3301);
int nctemp3308=i;
char nctemp3311=(char)(10);
int nctemp3305 = (s->a[nctemp3308] ==nctemp3311);
int nctemp3292 = (nctemp3295 || nctemp3305);
int nctemp3318=i;
char nctemp3321=(char)(9);
int nctemp3315 = (s->a[nctemp3318] ==nctemp3321);
int nctemp3289 = (nctemp3292 || nctemp3315);
nctemp3279=nctemp3289;}int nctemp3327=i;
char nctemp3330=(char)('-');
int nctemp3324 = (s->a[nctemp3327] ==nctemp3330);
if(nctemp3324)
{
int nctemp3336= -1;
sign =nctemp3336;
int nctemp3345 = i + 1;
i =nctemp3345;
}
else{
int nctemp3349=i;
char nctemp3352=(char)('+');
int nctemp3346 = (s->a[nctemp3349] ==nctemp3352);
if(nctemp3346)
{
sign =1;
int nctemp3367 = i + 1;
i =nctemp3367;
}
else{
sign =1;
}
}
n =0;
int nctemp3382=i;
int nctemp3379=(int)(s->a[nctemp3382]);
int nctemp3377= nctemp3379;
int nctemp3384=LibeIsdigit(nctemp3377);
while(nctemp3384){
{
int nctemp3399 = 10 * n;
int nctemp3404=i;
int nctemp3401=(int)(s->a[nctemp3404]);
int nctemp3406 = nctemp3399 + nctemp3401;
int nctemp3408 = nctemp3406 - '0';
n =nctemp3408;
}
int nctemp3417 = i + 1;
i =nctemp3417;
int nctemp3424=i;
int nctemp3421=(int)(s->a[nctemp3424]);
int nctemp3419= nctemp3421;
int nctemp3426=LibeIsdigit(nctemp3419);
nctemp3384=nctemp3426;
}
int nctemp3431 = sign * n;
return nctemp3431;
}
int LibeItoa (int n,nctempchar1 *s)
{
int sign;
int i;
nctempchar1 *nctemp3433 =s;
int nctemp3432 =(nctemp3433==0);
if(nctemp3432)
{
return 0;
}
sign =n;
int nctemp3438 = (sign < 0);
if(nctemp3438)
{
int nctemp3449= -n;
n =nctemp3449;
}
i =0;
int nctemp3457=0;
int nctemp3465= n;
int nctemp3467= 10;
int nctemp3469=LibeMod(nctemp3465,nctemp3467);
int nctemp3471 = nctemp3469 + 48;
char nctemp3460=(char)(nctemp3471);
s->a[nctemp3457] =nctemp3460;
int nctemp3483 = n / 10;
n =nctemp3483;
int nctemp3472 = (n > 0);
int nctemp3485=nctemp3472;
while(nctemp3485)
{{
int nctemp3493 = i + 1;
int nctemp3498=s->d[0];int nctemp3503 = nctemp3498 - 1;
int nctemp3486 = (nctemp3493 > nctemp3503);
if(nctemp3486)
{
return 0;
}
int nctemp3517 = i + 1;
i =nctemp3517;
int nctemp3508=i;
int nctemp3524= n;
int nctemp3526= 10;
int nctemp3528=LibeMod(nctemp3524,nctemp3526);
int nctemp3530 = nctemp3528 + 48;
char nctemp3519=(char)(nctemp3530);
s->a[nctemp3508] =nctemp3519;
}
int nctemp3542 = n / 10;
n =nctemp3542;
int nctemp3531 = (n > 0);
nctemp3485=nctemp3531;}int nctemp3544 = (sign < 0);
if(nctemp3544)
{
int nctemp3555 = i + 1;
int nctemp3560=s->d[0];int nctemp3565 = nctemp3560 - 1;
int nctemp3548 = (nctemp3555 > nctemp3565);
if(nctemp3548)
{
return 0;
}
int nctemp3579 = i + 1;
i =nctemp3579;
int nctemp3570=i;
char nctemp3581=(char)(45);
s->a[nctemp3570] =nctemp3581;
}
int nctemp3591 = i + 1;
int nctemp3596=s->d[0];int nctemp3601 = nctemp3596 - 1;
int nctemp3584 = (nctemp3591 > nctemp3601);
if(nctemp3584)
{
return 0;
}
int nctemp3615 = i + 1;
i =nctemp3615;
int nctemp3606=i;
char nctemp3617=(char)(0);
s->a[nctemp3606] =nctemp3617;
nctempchar1* nctemp3621= s;
int nctemp3624=LibeStrev(nctemp3621);
return 1;
}
int LibeItoh (int n,nctempchar1 *s)
{
int i;
int sign;
sign =n;
int nctemp3626 = (sign < 0);
if(nctemp3626)
{
int nctemp3637= -n;
n =nctemp3637;
}
i =0;
int nctemp3645= n;
int nctemp3647= 16;
int nctemp3649=LibeMod(nctemp3645,nctemp3647);
int nctemp3642 = (nctemp3649 <= 9);
if(nctemp3642)
{
int nctemp3654=0;
int nctemp3662= n;
int nctemp3664= 16;
int nctemp3666=LibeMod(nctemp3662,nctemp3664);
int nctemp3668 = nctemp3666 + 48;
char nctemp3657=(char)(nctemp3668);
s->a[nctemp3654] =nctemp3657;
}
else{
int nctemp3672=0;
int nctemp3683= n;
int nctemp3685= 16;
int nctemp3687=LibeMod(nctemp3683,nctemp3685);
int nctemp3689 = nctemp3687 + 'a';
int nctemp3691 = nctemp3689 - 10;
char nctemp3675=(char)(nctemp3691);
s->a[nctemp3672] =nctemp3675;
}
int nctemp3703 = n / 16;
n =nctemp3703;
int nctemp3692 = (n > 0);
int nctemp3705=nctemp3692;
while(nctemp3705)
{{
int nctemp3709= n;
int nctemp3711= 16;
int nctemp3713=LibeMod(nctemp3709,nctemp3711);
int nctemp3706 = (nctemp3713 <= 9);
if(nctemp3706)
{
int nctemp3727 = i + 1;
i =nctemp3727;
int nctemp3718=i;
int nctemp3734= n;
int nctemp3736= 16;
int nctemp3738=LibeMod(nctemp3734,nctemp3736);
int nctemp3740 = nctemp3738 + 48;
char nctemp3729=(char)(nctemp3740);
s->a[nctemp3718] =nctemp3729;
}
else{
int nctemp3753 = i + 1;
i =nctemp3753;
int nctemp3744=i;
int nctemp3763= n;
int nctemp3765= 16;
int nctemp3767=LibeMod(nctemp3763,nctemp3765);
int nctemp3769 = nctemp3767 + 'a';
int nctemp3771 = nctemp3769 - 10;
char nctemp3755=(char)(nctemp3771);
s->a[nctemp3744] =nctemp3755;
}
}
int nctemp3783 = n / 16;
n =nctemp3783;
int nctemp3772 = (n > 0);
nctemp3705=nctemp3772;}int nctemp3785 = (sign < 0);
if(nctemp3785)
{
int nctemp3801 = i + 1;
i =nctemp3801;
int nctemp3792=i;
char nctemp3803=(char)(45);
s->a[nctemp3792] =nctemp3803;
}
int nctemp3818 = i + 1;
i =nctemp3818;
int nctemp3809=i;
char nctemp3820=(char)(0);
s->a[nctemp3809] =nctemp3820;
nctempchar1* nctemp3824= s;
int nctemp3827=LibeStrev(nctemp3824);
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
sign =1;
val =0.0;
power =1.0;
exponent =0;
esign =1;
i =0;
int nctemp3856=i;
char nctemp3859=(char)(' ');
int nctemp3853 = (s->a[nctemp3856] ==nctemp3859);
int nctemp3862=nctemp3853;
while(nctemp3862)
{{
int nctemp3871 = i + 1;
i =nctemp3871;
}
int nctemp3875=i;
char nctemp3878=(char)(' ');
int nctemp3872 = (s->a[nctemp3875] ==nctemp3878);
nctemp3862=nctemp3872;}int nctemp3887=i;
char nctemp3890=(char)('+');
int nctemp3884 = (s->a[nctemp3887] ==nctemp3890);
int nctemp3897=i;
char nctemp3900=(char)('-');
int nctemp3894 = (s->a[nctemp3897] ==nctemp3900);
int nctemp3881 = (nctemp3884 || nctemp3894);
if(nctemp3881)
{
int nctemp3906=i;
char nctemp3909=(char)('-');
int nctemp3903 = (s->a[nctemp3906] ==nctemp3909);
if(nctemp3903)
{
int nctemp3915= -1;
sign =nctemp3915;
}
int nctemp3924 = i + 1;
i =nctemp3924;
}
int nctemp3931=i;
int nctemp3928=(int)(s->a[nctemp3931]);
int nctemp3926= nctemp3928;
int nctemp3933=LibeIsdigit(nctemp3926);
int nctemp3934=nctemp3933;
while(nctemp3934)
{{
float nctemp3946 = 10.0 * val;
int nctemp3956=i;
int nctemp3953=(int)(s->a[nctemp3956]);
int nctemp3959 = nctemp3953 - '0';
float nctemp3948=(float)(nctemp3959);
float nctemp3960 = nctemp3946 + nctemp3948;
val =nctemp3960;
int nctemp3969 = i + 1;
i =nctemp3969;
}
int nctemp3976=i;
int nctemp3973=(int)(s->a[nctemp3976]);
int nctemp3971= nctemp3973;
int nctemp3978=LibeIsdigit(nctemp3971);
nctemp3934=nctemp3978;}int nctemp3982=i;
char nctemp3985=(char)('.');
int nctemp3979 = (s->a[nctemp3982] ==nctemp3985);
if(nctemp3979)
{
int nctemp3996 = i + 1;
i =nctemp3996;
int nctemp4003=i;
int nctemp4000=(int)(s->a[nctemp4003]);
int nctemp3998= nctemp4000;
int nctemp4005=LibeIsdigit(nctemp3998);
int nctemp4006=nctemp4005;
while(nctemp4006)
{{
float nctemp4018 = 10.0 * val;
int nctemp4028=i;
int nctemp4025=(int)(s->a[nctemp4028]);
int nctemp4031 = nctemp4025 - '0';
float nctemp4020=(float)(nctemp4031);
float nctemp4032 = nctemp4018 + nctemp4020;
val =nctemp4032;
int nctemp4041 = i + 1;
i =nctemp4041;
float nctemp4050 = 10.0 * power;
power =nctemp4050;
}
int nctemp4057=i;
int nctemp4054=(int)(s->a[nctemp4057]);
int nctemp4052= nctemp4054;
int nctemp4059=LibeIsdigit(nctemp4052);
nctemp4006=nctemp4059;}}
int nctemp4066=i;
char nctemp4069=(char)('e');
int nctemp4063 = (s->a[nctemp4066] ==nctemp4069);
int nctemp4076=i;
char nctemp4079=(char)('E');
int nctemp4073 = (s->a[nctemp4076] ==nctemp4079);
int nctemp4060 = (nctemp4063 || nctemp4073);
if(nctemp4060)
{
int nctemp4090 = i + 1;
i =nctemp4090;
int nctemp4097=i;
char nctemp4100=(char)('+');
int nctemp4094 = (s->a[nctemp4097] ==nctemp4100);
int nctemp4107=i;
char nctemp4110=(char)('-');
int nctemp4104 = (s->a[nctemp4107] ==nctemp4110);
int nctemp4091 = (nctemp4094 || nctemp4104);
if(nctemp4091)
{
int nctemp4116=i;
char nctemp4119=(char)('-');
int nctemp4113 = (s->a[nctemp4116] ==nctemp4119);
if(nctemp4113)
{
int nctemp4125= -1;
esign =nctemp4125;
}
int nctemp4134 = i + 1;
i =nctemp4134;
}
int nctemp4141=i;
int nctemp4138=(int)(s->a[nctemp4141]);
int nctemp4136= nctemp4138;
int nctemp4143=LibeIsdigit(nctemp4136);
int nctemp4144=nctemp4143;
while(nctemp4144)
{{
int nctemp4159 = 10 * exponent;
int nctemp4164=i;
int nctemp4161=(int)(s->a[nctemp4164]);
int nctemp4166 = nctemp4159 + nctemp4161;
int nctemp4168 = nctemp4166 - '0';
exponent =nctemp4168;
int nctemp4177 = i + 1;
i =nctemp4177;
}
int nctemp4184=i;
int nctemp4181=(int)(s->a[nctemp4184]);
int nctemp4179= nctemp4181;
int nctemp4186=LibeIsdigit(nctemp4179);
nctemp4144=nctemp4186;}}
float nctemp4195=(float)(sign);
float nctemp4199 = nctemp4195 * val;
float nctemp4201=(float)(power);
float nctemp4204 = nctemp4199 / nctemp4201;
float nctemp4188= nctemp4204;
int nctemp4210 = esign * exponent;
int nctemp4205= nctemp4210;
float nctemp4211=LibeFscale(nctemp4188,nctemp4205);
return nctemp4211;
}
int LibeFtoaf (int mant,int nexp,int nfield,int nfrac,nctempchar1 *s)
{
nctempchar1 *t;
int sign;
int i;
int tp;
int l;
int nctemp4212 = (mant < 0);
if(nctemp4212)
{
int nctemp4219= -1;
sign =nctemp4219;
int nctemp4223= -mant;
mant =nctemp4223;
}
else{
sign =1;
}
int nctemp4231=s->d[0];int nctemp4240 = nfield + 1;
int nctemp4228 = (nctemp4231 < nctemp4240);
if(nctemp4228)
{
return 0;
}
int nctemp4256 = nexp + 1;
int nctemp4258 = nctemp4256 + 1;
int nctemp4260 = nctemp4258 + nfrac;
l =nctemp4260;
int nctemp4261 = (sign < 0);
if(nctemp4261)
{
int nctemp4273 = l + 1;
l =nctemp4273;
}
int nctemp4274 = (nfield < l);
if(nctemp4274)
{
i =0;
int nctemp4282 = (i < nfield);
while(nctemp4282){
{
int nctemp4289=i;
char nctemp4292=(char)('*');
s->a[nctemp4289] =nctemp4292;
}
int nctemp4303 = i + 1;
i =nctemp4303;
int nctemp4304 = (i < nfield);
nctemp4282=nctemp4304;
}
int nctemp4311=nfield;
char nctemp4314=(char)(0);
s->a[nctemp4311] =nctemp4314;
return 0;
}
else{
int nctemp4326 = nfield - l;
tp =nctemp4326;
}
int nctemp4338 = 6 + 1;
int nctemp4333=nctemp4338;
nctempchar1 *nctemp4332;
nctemp4332=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp4343 = 6 + 1;
nctemp4332->d[0]=nctemp4343;
nctemp4332->a=(char *)RunMalloc(sizeof(char)*nctemp4333);
t=nctemp4332;
int nctemp4345= mant;
nctempchar1* nctemp4347= t;
int nctemp4350=LibeItoa(nctemp4345,nctemp4347);
i =0;
int nctemp4355 = (i < tp);
while(nctemp4355){
{
int nctemp4362=i;
char nctemp4365=(char)(' ');
s->a[nctemp4362] =nctemp4365;
}
int nctemp4376 = i + 1;
i =nctemp4376;
int nctemp4377 = (i < tp);
nctemp4355=nctemp4377;
}
int nctemp4381 = (nexp >= 0);
if(nctemp4381)
{
int nctemp4388= -1;
int nctemp4385 = (sign ==nctemp4388);
if(nctemp4385)
{
int nctemp4392=tp;
char nctemp4395=(char)('-');
s->a[nctemp4392] =nctemp4395;
int nctemp4406 = tp + 1;
tp =nctemp4406;
}
i =0;
int nctemp4411 = (i <= nexp);
while(nctemp4411){
{
int nctemp4423 = i + tp;
int nctemp4418=nctemp4423;
int nctemp4425=i;
s->a[nctemp4418] =t->a[nctemp4425];
}
int nctemp4435 = i + 1;
i =nctemp4435;
int nctemp4436 = (i <= nexp);
nctemp4411=nctemp4436;
}
int nctemp4440 = (nfrac > 0);
if(nctemp4440)
{
int nctemp4455 = tp + nexp;
int nctemp4457 = nctemp4455 + 1;
int nctemp4447=nctemp4457;
char nctemp4459=(char)('.');
s->a[nctemp4447] =nctemp4459;
}
i =0;
int nctemp4466 = (i < nfrac);
while(nctemp4466){
{
int nctemp4470 = (mant ==0);
if(nctemp4470)
{
int nctemp4491 = tp + nexp;
int nctemp4493 = nctemp4491 + 1;
int nctemp4495 = nctemp4493 + 1;
int nctemp4497 = nctemp4495 + i;
int nctemp4477=nctemp4497;
char nctemp4499=(char)('0');
s->a[nctemp4477] =nctemp4499;
}
else{
int nctemp4519 = tp + nexp;
int nctemp4521 = nctemp4519 + 1;
int nctemp4523 = nctemp4521 + 1;
int nctemp4525 = nctemp4523 + i;
int nctemp4505=nctemp4525;
int nctemp4535 = nexp + 1;
int nctemp4537 = nctemp4535 + i;
int nctemp4527=nctemp4537;
s->a[nctemp4505] =t->a[nctemp4527];
}
}
int nctemp4546 = i + 1;
i =nctemp4546;
int nctemp4547 = (i < nfrac);
nctemp4466=nctemp4547;
}
int nctemp4551 = (nfrac > 0);
if(nctemp4551)
{
int nctemp4572 = tp + nexp;
int nctemp4574 = nctemp4572 + 1;
int nctemp4576 = nctemp4574 + 1;
int nctemp4578 = nctemp4576 + nfrac;
int nctemp4558=nctemp4578;
char nctemp4580=(char)(0);
s->a[nctemp4558] =nctemp4580;
}
else{
int nctemp4594 = tp + nexp;
int nctemp4596 = nctemp4594 + 1;
int nctemp4586=nctemp4596;
char nctemp4598=(char)(0);
s->a[nctemp4586] =nctemp4598;
}
}
else{
int nctemp4604= -nexp;
nexp =nctemp4604;
int nctemp4608= -1;
int nctemp4605 = (sign ==nctemp4608);
if(nctemp4605)
{
int nctemp4612=tp;
char nctemp4615=(char)('-');
s->a[nctemp4612] =nctemp4615;
int nctemp4626 = tp + 1;
tp =nctemp4626;
}
int nctemp4630=tp;
char nctemp4633=(char)('0');
s->a[nctemp4630] =nctemp4633;
int nctemp4644 = tp + 1;
int nctemp4639=nctemp4644;
char nctemp4646=(char)('.');
s->a[nctemp4639] =nctemp4646;
i =0;
int nctemp4661 = nexp - 1;
int nctemp4653 = (i < nctemp4661);
while(nctemp4653){
{
int nctemp4673 = i + tp;
int nctemp4675 = nctemp4673 + 2;
int nctemp4665=nctemp4675;
char nctemp4677=(char)('0');
s->a[nctemp4665] =nctemp4677;
}
int nctemp4688 = i + 1;
i =nctemp4688;
int nctemp4697 = nexp - 1;
int nctemp4689 = (i < nctemp4697);
nctemp4653=nctemp4689;
}
i =0;
int nctemp4713 = nfrac - nexp;
int nctemp4715 = nctemp4713 + 1;
int nctemp4702 = (i < nctemp4715);
while(nctemp4702){
{
int nctemp4733 = tp + 2;
int nctemp4735 = nctemp4733 + i;
int nctemp4737 = nctemp4735 + nexp;
int nctemp4739 = nctemp4737 - 1;
int nctemp4719=nctemp4739;
int nctemp4741=i;
s->a[nctemp4719] =t->a[nctemp4741];
}
int nctemp4751 = i + 1;
i =nctemp4751;
int nctemp4763 = nfrac - nexp;
int nctemp4765 = nctemp4763 + 1;
int nctemp4752 = (i < nctemp4765);
nctemp4702=nctemp4752;
}
int nctemp4777 = tp + 2;
int nctemp4779 = nctemp4777 + nfrac;
int nctemp4769=nctemp4779;
char nctemp4781=(char)(0);
s->a[nctemp4769] =nctemp4781;
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
int nctemp4785 = (mant < 0);
if(nctemp4785)
{
int nctemp4792= -mant;
mant =nctemp4792;
int nctemp4796= -1;
sign =nctemp4796;
}
else{
sign =1;
}
int nctemp4804=s->d[0];int nctemp4831 = 1 + 1;
int nctemp4833 = nctemp4831 + 1;
int nctemp4835 = nctemp4833 + nfrac;
int nctemp4837 = nctemp4835 + 1;
int nctemp4839 = nctemp4837 + 1;
int nctemp4841 = nctemp4839 + 2;
int nctemp4843 = nctemp4841 + 1;
int nctemp4801 = (nctemp4804 < nctemp4843);
if(nctemp4801)
{
return 0;
}
int nctemp4853=s->d[0];int nctemp4851=nctemp4853;
nctempchar1 *nctemp4850;
nctemp4850=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp4858=s->d[0];nctemp4850->d[0]=nctemp4858;
nctemp4850->a=(char *)RunMalloc(sizeof(char)*nctemp4851);
t=nctemp4850;
int nctemp4885 = 1 + 1;
int nctemp4887 = nctemp4885 + nfrac;
int nctemp4889 = nctemp4887 + 1;
int nctemp4891 = nctemp4889 + 1;
int nctemp4893 = nctemp4891 + 2;
int nctemp4895 = nctemp4893 + 1;
l =nctemp4895;
int nctemp4896 = (sign < 0);
if(nctemp4896)
{
int nctemp4908 = l + 1;
l =nctemp4908;
}
int nctemp4909 = (nfield < l);
if(nctemp4909)
{
i =0;
int nctemp4917 = (i < nfield);
while(nctemp4917){
{
int nctemp4924=i;
char nctemp4927=(char)('*');
s->a[nctemp4924] =nctemp4927;
}
int nctemp4938 = i + 1;
i =nctemp4938;
int nctemp4939 = (i < nfield);
nctemp4917=nctemp4939;
}
int nctemp4946=nfield;
char nctemp4949=(char)(0);
s->a[nctemp4946] =nctemp4949;
return 0;
}
else{
int nctemp4961 = nfield - l;
tp =nctemp4961;
}
i =0;
int nctemp4966 = (i < tp);
while(nctemp4966){
{
int nctemp4973=i;
char nctemp4976=(char)(' ');
s->a[nctemp4973] =nctemp4976;
}
int nctemp4987 = i + 1;
i =nctemp4987;
int nctemp4988 = (i < tp);
nctemp4966=nctemp4988;
}
int nctemp4993= mant;
nctempchar1* nctemp4995= t;
int nctemp4998=LibeItoa(nctemp4993,nctemp4995);
int nctemp4999 = (sign < 0);
if(nctemp4999)
{
int nctemp5006=tp;
char nctemp5009=(char)('-');
s->a[nctemp5006] =nctemp5009;
int nctemp5020 = tp + 1;
tp =nctemp5020;
}
int nctemp5024=tp;
int nctemp5027=0;
s->a[nctemp5024] =t->a[nctemp5027];
int nctemp5037 = tp + 1;
int nctemp5032=nctemp5037;
char nctemp5039=(char)('.');
s->a[nctemp5032] =nctemp5039;
i =0;
int nctemp5046 = (i < nfrac);
while(nctemp5046){
{
int nctemp5061 = tp + 2;
int nctemp5063 = nctemp5061 + i;
int nctemp5053=nctemp5063;
int nctemp5070 = i + 1;
int nctemp5065=nctemp5070;
s->a[nctemp5053] =t->a[nctemp5065];
}
int nctemp5079 = i + 1;
i =nctemp5079;
int nctemp5080 = (i < nfrac);
nctemp5046=nctemp5080;
}
int nctemp5095 = tp + 2;
int nctemp5097 = nctemp5095 + nfrac;
int nctemp5087=nctemp5097;
char nctemp5099=(char)(0);
s->a[nctemp5087] =nctemp5099;
sign =1;
int nctemp5106 = (nexp < 0);
if(nctemp5106)
{
int nctemp5113= -1;
sign =nctemp5113;
int nctemp5117= -nexp;
nexp =nctemp5117;
}
struct nctempchar1 *nctemp5121;
static struct nctempchar1 nctemp5122 = {{ 2}, (char*)"e\0"};
nctemp5121=&nctemp5122;
nctempchar1* nctemp5119= nctemp5121;
nctempchar1* nctemp5123= s;
int nctemp5126=LibeStrcat(nctemp5119,nctemp5123);
int nctemp5127 = (sign > 0);
if(nctemp5127)
{
struct nctempchar1 *nctemp5134;
static struct nctempchar1 nctemp5135 = {{ 2}, (char*)"+\0"};
nctemp5134=&nctemp5135;
nctempchar1* nctemp5132= nctemp5134;
nctempchar1* nctemp5136= s;
int nctemp5139=LibeStrcat(nctemp5132,nctemp5136);
}
else{
struct nctempchar1 *nctemp5143;
static struct nctempchar1 nctemp5144 = {{ 2}, (char*)"-\0"};
nctemp5143=&nctemp5144;
nctempchar1* nctemp5141= nctemp5143;
nctempchar1* nctemp5145= s;
int nctemp5148=LibeStrcat(nctemp5141,nctemp5145);
}
int nctemp5150= nexp;
nctempchar1* nctemp5152= t;
int nctemp5155=LibeItoa(nctemp5150,nctemp5152);
nctempchar1* nctemp5159= t;
int nctemp5162=LibeStrlen(nctemp5159);
int nctemp5156 = (nctemp5162 ==1);
if(nctemp5156)
{
struct nctempchar1 *nctemp5167;
static struct nctempchar1 nctemp5168 = {{ 2}, (char*)"0\0"};
nctemp5167=&nctemp5168;
nctempchar1* nctemp5165= nctemp5167;
nctempchar1* nctemp5169= s;
int nctemp5172=LibeStrcat(nctemp5165,nctemp5169);
}
nctempchar1* nctemp5174= t;
nctempchar1* nctemp5177= s;
int nctemp5180=LibeStrcat(nctemp5174,nctemp5177);
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
int nctemp5188=s->d[0];int nctemp5193=fmt->d[0];int nctemp5185 = (nctemp5188 < nctemp5193);
if(nctemp5185)
{
return 0;
}
int nctemp5205=fmt->d[0];int nctemp5210 = nctemp5205 - 2;
l =nctemp5210;
p =0;
q =0;
int nctemp5226=p;
int nctemp5223=(int)(fmt->a[nctemp5226]);
c =nctemp5223;
int nctemp5228 = (c =='g');
if(nctemp5228)
{
mode ='g';
}
else{
int nctemp5239= c;
int nctemp5241=LibeIsdigit(nctemp5239);
int nctemp5236 = (nctemp5241 ==1);
if(nctemp5236)
{
int nctemp5246= c;
int nctemp5248=LibeIsdigit(nctemp5246);
int nctemp5243 = (nctemp5248 ==1);
int nctemp5250=nctemp5243;
while(nctemp5250)
{{
int nctemp5254=q;
int nctemp5257=p;
s->a[nctemp5254] =fmt->a[nctemp5257];
int nctemp5270 = p + 1;
p =nctemp5270;
int nctemp5259 = (p > l);
if(nctemp5259)
{
return 0;
}
int nctemp5281 = q + 1;
q =nctemp5281;
int nctemp5289=p;
int nctemp5286=(int)(fmt->a[nctemp5289]);
c =nctemp5286;
}
int nctemp5294= c;
int nctemp5296=LibeIsdigit(nctemp5294);
int nctemp5291 = (nctemp5296 ==1);
nctemp5250=nctemp5291;}int nctemp5301=q;
char nctemp5304=(char)(0);
s->a[nctemp5301] =nctemp5304;
nctempchar1* nctemp5311= s;
int nctemp5314=LibeAtoi(nctemp5311);
nfield =nctemp5314;
}
else{
return 0;
}
int nctemp5316 = (c !='.');
if(nctemp5316)
{
return 0;
}
int nctemp5332 = p + 1;
p =nctemp5332;
int nctemp5321 = (p > l);
if(nctemp5321)
{
return 0;
}
int nctemp5342=p;
int nctemp5339=(int)(fmt->a[nctemp5342]);
c =nctemp5339;
q =0;
int nctemp5351= c;
int nctemp5353=LibeIsdigit(nctemp5351);
int nctemp5348 = (nctemp5353 ==1);
if(nctemp5348)
{
int nctemp5358= c;
int nctemp5360=LibeIsdigit(nctemp5358);
int nctemp5355 = (nctemp5360 ==1);
int nctemp5362=nctemp5355;
while(nctemp5362)
{{
int nctemp5366=q;
int nctemp5369=p;
s->a[nctemp5366] =fmt->a[nctemp5369];
int nctemp5382 = p + 1;
p =nctemp5382;
int nctemp5371 = (p > l);
if(nctemp5371)
{
return 0;
}
int nctemp5393 = q + 1;
q =nctemp5393;
int nctemp5401=p;
int nctemp5398=(int)(fmt->a[nctemp5401]);
c =nctemp5398;
}
int nctemp5406= c;
int nctemp5408=LibeIsdigit(nctemp5406);
int nctemp5403 = (nctemp5408 ==1);
nctemp5362=nctemp5403;}int nctemp5413=q;
char nctemp5416=(char)(0);
s->a[nctemp5413] =nctemp5416;
nctempchar1* nctemp5423= s;
int nctemp5426=LibeAtoi(nctemp5423);
nfrac =nctemp5426;
}
else{
return 0;
}
int nctemp5428 = (c =='f');
if(nctemp5428)
{
mode ='f';
}
else{
int nctemp5436 = (c =='e');
if(nctemp5436)
{
mode ='e';
}
else{
return 0;
}
}
}
int nctemp5445 = (mode =='g');
if(nctemp5445)
{
float nctemp5453= f;
int nctemp5455=LibeGetmaxdig(nctemp5453);
nfrac =nctemp5455;
int nctemp5482 = 1 + 1;
int nctemp5484 = nctemp5482 + 1;
int nctemp5486 = nctemp5484 + 1;
int nctemp5488 = nctemp5486 + nfrac;
int nctemp5490 = nctemp5488 + 1;
int nctemp5492 = nctemp5490 + 1;
int nctemp5494 = nctemp5492 + 2;
nfield =nctemp5494;
int nctemp5503 = nfrac + 1;
ndigit =nctemp5503;
float nctemp5508= f;
int nctemp5510= ndigit;
int nctemp5512=LibeGetfman(nctemp5508,nctemp5510);
mant =nctemp5512;
float nctemp5517= f;
int nctemp5519=LibeGetfexp(nctemp5517);
nexp =nctemp5519;
int nctemp5521= mant;
int nctemp5523= nexp;
int nctemp5525= nfield;
int nctemp5527= nfrac;
nctempchar1* nctemp5529= s;
int nctemp5532=LibeFtoae(nctemp5521,nctemp5523,nctemp5525,nctemp5527,nctemp5529);
}
else{
int nctemp5533 = (mode =='e');
if(nctemp5533)
{
int nctemp5545 = nfrac + 1;
ndigit =nctemp5545;
float nctemp5550= f;
int nctemp5552= ndigit;
int nctemp5554=LibeGetfman(nctemp5550,nctemp5552);
mant =nctemp5554;
float nctemp5559= f;
int nctemp5561=LibeGetfexp(nctemp5559);
nexp =nctemp5561;
int nctemp5563= mant;
int nctemp5565= nexp;
int nctemp5567= nfield;
int nctemp5569= nfrac;
nctempchar1* nctemp5571= s;
int nctemp5574=LibeFtoae(nctemp5563,nctemp5565,nctemp5567,nctemp5569,nctemp5571);
}
else{
int nctemp5575 = (mode =='f');
if(nctemp5575)
{
float nctemp5583= f;
int nctemp5585=LibeGetfexp(nctemp5583);
nexp =nctemp5585;
int nctemp5597 = nexp + nfrac;
int nctemp5599 = nctemp5597 + 1;
ndigit =nctemp5599;
float nctemp5604= f;
int nctemp5606= ndigit;
int nctemp5608=LibeGetfman(nctemp5604,nctemp5606);
mant =nctemp5608;
int nctemp5610= mant;
int nctemp5612= nexp;
int nctemp5614= nfield;
int nctemp5616= nfrac;
nctempchar1* nctemp5618= s;
int nctemp5621=LibeFtoaf(nctemp5610,nctemp5612,nctemp5614,nctemp5616,nctemp5618);
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
struct nctempLibeFdescr1 *LibeFarr;
nctempchar1 *LibeTmpstr;
int LibeIoinit ()
{
int i;
int nctemp5629=40;
struct nctempLibeFdescr1 *nctemp5628;
nctemp5628=(struct nctempLibeFdescr1*)RunMalloc(sizeof(struct nctempLibeFdescr1));
nctemp5628->d[0]=40;
nctemp5628->a=(struct LibeFdescr*)RunMalloc(sizeof(struct LibeFdescr)*nctemp5629);
LibeFarr=nctemp5628;
nctempLibeFdescr1 *nctemp5633 =LibeFarr;
int nctemp5632 =(nctemp5633==0);
if(nctemp5632)
{
LibeErrno =(-100);
return 0;
}
i =0;
int nctemp5646 = (i < 40);
while(nctemp5646){
{
int nctemp5653=i;
LibeFarr->a[nctemp5653].cnt =0;
int nctemp5659=i;
LibeFarr->a[nctemp5659].ptr =0;
int nctemp5665=i;
LibeFarr->a[nctemp5665].bufsize =0;
int nctemp5671=i;
LibeFarr->a[nctemp5671].base=(0);
int nctemp5678=i;
LibeFarr->a[nctemp5678].readflg =0;
int nctemp5684=i;
LibeFarr->a[nctemp5684].writflg =0;
int nctemp5690=i;
LibeFarr->a[nctemp5690].unbflg =0;
int nctemp5696=i;
LibeFarr->a[nctemp5696].errflg =1;
int nctemp5702=i;
LibeFarr->a[nctemp5702].eoflg =0;
int nctemp5708=i;
LibeFarr->a[nctemp5708].fd =0;
}
int nctemp5719 = i + 1;
i =nctemp5719;
int nctemp5720 = (i < 40);
nctemp5646=nctemp5720;
}
int nctemp5727=0;
int nctemp5729= -1;
LibeFarr->a[nctemp5727].fd =nctemp5729;
int nctemp5733=0;
LibeFarr->a[nctemp5733].readflg =1;
int nctemp5739=1;
int nctemp5741= -1;
LibeFarr->a[nctemp5739].fd =nctemp5741;
int nctemp5745=1;
LibeFarr->a[nctemp5745].readflg =1;
int nctemp5751=2;
LibeFarr->a[nctemp5751].fd =0;
int nctemp5757=2;
LibeFarr->a[nctemp5757].readflg =1;
int nctemp5763=3;
LibeFarr->a[nctemp5763].fd =1;
int nctemp5769=3;
LibeFarr->a[nctemp5769].writflg =1;
int nctemp5775=4;
LibeFarr->a[nctemp5775].fd =2;
int nctemp5781=4;
LibeFarr->a[nctemp5781].writflg =1;
int nctemp5790=64;
nctempchar1 *nctemp5789;
nctemp5789=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp5789->d[0]=64;
nctemp5789->a=(char *)RunMalloc(sizeof(char)*nctemp5790);
LibeTmpstr=nctemp5789;
nctempchar1 *nctemp5794 =LibeTmpstr;
int nctemp5793 =(nctemp5794==0);
if(nctemp5793)
{
LibeErrno =(-100);
return 0;
}
return 1;
}
int LibeFlushbuff (int fp)
{
int st;
int size;
int nctemp5807=fp;
int nctemp5804 = (LibeFarr->a[nctemp5807].writflg !=1);
if(nctemp5804)
{
struct nctempchar1 *nctemp5815;
static struct nctempchar1 nctemp5816 = {{ 28}, (char*)"file not open for writing\n\0"};
nctemp5815=&nctemp5816;
LibeErrstr=nctemp5815;
LibeErrno =(-110);
return 0;
}
int nctemp5825=fp;
int nctemp5822 = (LibeFarr->a[nctemp5825].unbflg ==1);
if(nctemp5822)
{
int nctemp5831=fp;
LibeFarr->a[nctemp5831].bufsize =1;
}
else{
int nctemp5837=fp;
LibeFarr->a[nctemp5837].bufsize =1024;
}
int nctemp5843=fp;
nctempchar1 *nctemp5841 =LibeFarr->a[nctemp5843].base;
int nctemp5840 =(nctemp5841==0);
if(nctemp5840)
{
int nctemp5851=fp;
size =LibeFarr->a[nctemp5851].bufsize;
int nctemp5859=fp;
int nctemp5864=size;
nctempchar1 *nctemp5863;
nctemp5863=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp5863->d[0]=size;
nctemp5863->a=(char *)RunMalloc(sizeof(char)*nctemp5864);
LibeFarr->a[nctemp5859].base=nctemp5863;
nctempchar1 *nctemp5854 =LibeFarr->a[nctemp5859].base;
int nctemp5853 =(nctemp5854==0);
if(nctemp5853)
{
struct nctempchar1 *nctemp5873;
static struct nctempchar1 nctemp5874 = {{ 24}, (char*)"can not allocate buffer\0"};
nctemp5873=&nctemp5874;
LibeErrstr=nctemp5873;
LibeErrno =(-113);
return 0;
}
}
int nctemp5883=fp;
LibeFarr->a[nctemp5883].ptr =0;
int nctemp5892=fp;
int nctemp5890= LibeFarr->a[nctemp5892].fd;
int nctemp5896=fp;
int nctemp5894= LibeFarr->a[nctemp5896].cnt;
int nctemp5900=fp;
nctempchar1* nctemp5898= LibeFarr->a[nctemp5900].base;
int nctemp5903=RunWrite(nctemp5890,nctemp5894,nctemp5898);
st =nctemp5903;
int nctemp5908=fp;
int nctemp5904 = (st !=LibeFarr->a[nctemp5908].cnt);
if(nctemp5904)
{
int nctemp5913=fp;
LibeFarr->a[nctemp5913].errflg =1;
struct nctempchar1 *nctemp5921;
static struct nctempchar1 nctemp5922 = {{ 12}, (char*)"write error\0"};
nctemp5921=&nctemp5922;
LibeErrstr=nctemp5921;
LibeErrno =(-112);
int nctemp5930=fp;
LibeFarr->a[nctemp5930].cnt =0;
int nctemp5936=fp;
LibeFarr->a[nctemp5936].ptr =0;
return 0;
}
else{
int nctemp5943=fp;
LibeFarr->a[nctemp5943].cnt =0;
int nctemp5949=fp;
LibeFarr->a[nctemp5949].ptr =0;
return 1;
}
}
int LibeFillbuff (int fp)
{
int size;
int rval;
int nctemp5956=fp;
int nctemp5953 = (LibeFarr->a[nctemp5956].readflg !=1);
if(nctemp5953)
{
struct nctempchar1 *nctemp5964;
static struct nctempchar1 nctemp5965 = {{ 28}, (char*)"file not open for reading\n\0"};
nctemp5964=&nctemp5965;
LibeErrstr=nctemp5964;
LibeErrno =(-110);
return (-1);
}
int nctemp5974=fp;
int nctemp5971 = (LibeFarr->a[nctemp5974].unbflg ==1);
if(nctemp5971)
{
int nctemp5980=fp;
LibeFarr->a[nctemp5980].bufsize =1;
}
else{
int nctemp5986=fp;
LibeFarr->a[nctemp5986].bufsize =1024;
}
int nctemp5992=fp;
nctempchar1 *nctemp5990 =LibeFarr->a[nctemp5992].base;
int nctemp5989 =(nctemp5990==0);
if(nctemp5989)
{
int nctemp6000=fp;
size =LibeFarr->a[nctemp6000].bufsize;
int nctemp6008=fp;
int nctemp6013=size;
nctempchar1 *nctemp6012;
nctemp6012=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp6012->d[0]=size;
nctemp6012->a=(char *)RunMalloc(sizeof(char)*nctemp6013);
LibeFarr->a[nctemp6008].base=nctemp6012;
nctempchar1 *nctemp6003 =LibeFarr->a[nctemp6008].base;
int nctemp6002 =(nctemp6003==0);
if(nctemp6002)
{
struct nctempchar1 *nctemp6022;
static struct nctempchar1 nctemp6023 = {{ 24}, (char*)"Can not allocate buffer\0"};
nctemp6022=&nctemp6023;
LibeErrstr=nctemp6022;
LibeErrno =(-113);
return (-1);
}
}
int nctemp6032=fp;
LibeFarr->a[nctemp6032].ptr =0;
int nctemp6038=fp;
int nctemp6043=fp;
int nctemp6041= LibeFarr->a[nctemp6043].fd;
int nctemp6047=fp;
int nctemp6045= LibeFarr->a[nctemp6047].bufsize;
int nctemp6051=fp;
nctempchar1* nctemp6049= LibeFarr->a[nctemp6051].base;
int nctemp6054=RunRead(nctemp6041,nctemp6045,nctemp6049);
LibeFarr->a[nctemp6038].cnt =nctemp6054;
int nctemp6058=fp;
int nctemp6055 = (LibeFarr->a[nctemp6058].cnt <= 0);
if(nctemp6055)
{
int nctemp6064=fp;
int nctemp6061 = (LibeFarr->a[nctemp6064].cnt ==(-1));
if(nctemp6061)
{
int nctemp6070=fp;
LibeFarr->a[nctemp6070].eoflg =1;
rval =(-1);
}
else{
int nctemp6080=fp;
LibeFarr->a[nctemp6080].errflg =1;
struct nctempchar1 *nctemp6088;
static struct nctempchar1 nctemp6089 = {{ 11}, (char*)"read error\0"};
nctemp6088=&nctemp6089;
LibeErrstr=nctemp6088;
LibeErrno =(-111);
rval =(-1);
}
int nctemp6101=fp;
LibeFarr->a[nctemp6101].cnt =0;
return rval;
}
int nctemp6108=fp;
int nctemp6114=fp;
int nctemp6117 = LibeFarr->a[nctemp6114].ptr + 1;
LibeFarr->a[nctemp6108].ptr =nctemp6117;
int nctemp6121=fp;
int nctemp6127=fp;
int nctemp6130 = LibeFarr->a[nctemp6127].cnt - 1;
LibeFarr->a[nctemp6121].cnt =nctemp6130;
int nctemp6135=fp;
int nctemp6141=fp;
int nctemp6144 = LibeFarr->a[nctemp6141].ptr - 1;
int nctemp6137=nctemp6144;
int nctemp6132=(int)(LibeFarr->a[nctemp6135].base->a[nctemp6137]);
return nctemp6132;
}
int LibeFlush (int fp)
{
int nctemp6146= fp;
int nctemp6148=LibeFlushbuff(nctemp6146);
return nctemp6148;
}
int LibeOpen (nctempchar1 *name,nctempchar1 *mode)
{
int fd;
int slot;
int i;
int nctemp6152=0;
char nctemp6155=(char)('r');
int nctemp6149 = (mode->a[nctemp6152] !=nctemp6155);
if(nctemp6149)
{
int nctemp6161=0;
char nctemp6164=(char)('w');
int nctemp6158 = (mode->a[nctemp6161] !=nctemp6164);
if(nctemp6158)
{
int nctemp6170=0;
char nctemp6173=(char)('a');
int nctemp6167 = (mode->a[nctemp6170] !=nctemp6173);
if(nctemp6167)
{
struct nctempchar1 *nctemp6181;
static struct nctempchar1 nctemp6182 = {{ 20}, (char*)"Unknown file mode\n\0"};
nctemp6181=&nctemp6182;
LibeErrstr=nctemp6181;
LibeErrno =(-103);
return 0;
}
}
}
i =0;
int nctemp6195= -1;
slot =nctemp6195;
int nctemp6199 = (slot < 0);
int nctemp6204 = (i < 40);
int nctemp6196 = (nctemp6199 && nctemp6204);
int nctemp6208=nctemp6196;
while(nctemp6208)
{{
int nctemp6215=i;
int nctemp6212 = (LibeFarr->a[nctemp6215].readflg ==0);
int nctemp6222=i;
int nctemp6219 = (LibeFarr->a[nctemp6222].writflg ==0);
int nctemp6209 = (nctemp6212 && nctemp6219);
if(nctemp6209)
{
slot =i;
}
int nctemp6237 = i + 1;
i =nctemp6237;
}
int nctemp6241 = (slot < 0);
int nctemp6246 = (i < 40);
int nctemp6238 = (nctemp6241 && nctemp6246);
nctemp6208=nctemp6238;}int nctemp6250 = (slot < 0);
if(nctemp6250)
{
struct nctempchar1 *nctemp6259;
static struct nctempchar1 nctemp6260 = {{ 22}, (char*)"Too many open files\n\0"};
nctemp6259=&nctemp6260;
LibeErrstr=nctemp6259;
LibeErrno =(-104);
return 0;
}
int nctemp6272=0;
int nctemp6269=(int)(mode->a[nctemp6272]);
int nctemp6266 = (nctemp6269 =='w');
if(nctemp6266)
{
nctempchar1* nctemp6279= name;
int nctemp6282=RunCreate(nctemp6279);
fd =nctemp6282;
}
else{
int nctemp6289=0;
int nctemp6286=(int)(mode->a[nctemp6289]);
int nctemp6283 = (nctemp6286 =='a');
if(nctemp6283)
{
nctempchar1* nctemp6299= name;
nctempchar1* nctemp6302= mode;
int nctemp6305=RunOpen(nctemp6299,nctemp6302);
fd =nctemp6305;
int nctemp6292 = (fd ==0);
if(nctemp6292)
{
nctempchar1* nctemp6311= name;
int nctemp6314=RunCreate(nctemp6311);
fd =nctemp6314;
}
else{
nctempchar1* nctemp6319= name;
nctempchar1* nctemp6322= mode;
int nctemp6325=RunOpen(nctemp6319,nctemp6322);
fd =nctemp6325;
}
}
else{
int nctemp6332=0;
int nctemp6329=(int)(mode->a[nctemp6332]);
int nctemp6326 = (nctemp6329 =='r');
if(nctemp6326)
{
nctempchar1* nctemp6339= name;
nctempchar1* nctemp6342= mode;
int nctemp6345=RunOpen(nctemp6339,nctemp6342);
fd =nctemp6345;
}
else{
struct nctempchar1 *nctemp6351;
static struct nctempchar1 nctemp6352 = {{ 20}, (char*)"Unknown file mode\n\0"};
nctemp6351=&nctemp6352;
LibeErrstr=nctemp6351;
LibeErrno =(-103);
return 0;
}
}
}
int nctemp6358 = (fd ==0);
if(nctemp6358)
{
struct nctempchar1 *nctemp6367;
static struct nctempchar1 nctemp6368 = {{ 20}, (char*)"Could not open file\0"};
nctemp6367=&nctemp6368;
LibeErrstr=nctemp6367;
LibeErrno =(-105);
return 0;
}
int nctemp6377=slot;
LibeFarr->a[nctemp6377].fd =fd;
int nctemp6383=slot;
LibeFarr->a[nctemp6383].cnt =0;
int nctemp6389=slot;
LibeFarr->a[nctemp6389].base=(0);
int nctemp6399=0;
int nctemp6396=(int)(mode->a[nctemp6399]);
int nctemp6393 = (nctemp6396 =='r');
if(nctemp6393)
{
int nctemp6405=slot;
LibeFarr->a[nctemp6405].readflg =1;
}
else{
int nctemp6411=slot;
LibeFarr->a[nctemp6411].writflg =1;
}
return slot;
}
int LibeClose (int fp)
{
int fd;
int stat;
int nctemp6418=fp;
nctempchar1 *nctemp6416 =LibeFarr->a[nctemp6418].base;
int nctemp6415 =(nctemp6416!=0);
if(nctemp6415)
{
int nctemp6423= fp;
int nctemp6425=LibeFlush(nctemp6423);
}
int nctemp6430=fp;
fd =LibeFarr->a[nctemp6430].fd;
int nctemp6436= fd;
int nctemp6438=RunClose(nctemp6436);
stat =nctemp6438;
int nctemp6439 = (stat ==0);
if(nctemp6439)
{
int nctemp6446=fp;
LibeFarr->a[nctemp6446].errflg =1;
struct nctempchar1 *nctemp6454;
static struct nctempchar1 nctemp6455 = {{ 21}, (char*)"Could not close file\0"};
nctemp6454=&nctemp6455;
LibeErrstr=nctemp6454;
LibeErrno =(-106);
return 0;
}
int nctemp6464=fp;
LibeFarr->a[nctemp6464].cnt =0;
int nctemp6470=fp;
LibeFarr->a[nctemp6470].ptr =0;
int nctemp6476=fp;
LibeFarr->a[nctemp6476].bufsize =0;
int nctemp6482=fp;
nctempchar1 *nctemp6480 =LibeFarr->a[nctemp6482].base;
int nctemp6479 =(nctemp6480!=0);
if(nctemp6479)
{
int nctemp6488=fp;
RunFree(LibeFarr->a[nctemp6488].base->a);
RunFree(LibeFarr->a[nctemp6488].base);
}
int nctemp6494=fp;
LibeFarr->a[nctemp6494].base=(0);
int nctemp6501=fp;
LibeFarr->a[nctemp6501].readflg =0;
int nctemp6507=fp;
LibeFarr->a[nctemp6507].writflg =0;
int nctemp6513=fp;
LibeFarr->a[nctemp6513].unbflg =0;
int nctemp6519=fp;
LibeFarr->a[nctemp6519].errflg =0;
int nctemp6525=fp;
LibeFarr->a[nctemp6525].eoflg =0;
int nctemp6531=fp;
LibeFarr->a[nctemp6531].fd =0;
return 1;
}
int LibeGetc (int fp)
{
int nctemp6538=fp;
int nctemp6535 = (LibeFarr->a[nctemp6538].cnt ==0);
if(nctemp6535)
{
int nctemp6542= fp;
int nctemp6544=LibeFillbuff(nctemp6542);
return nctemp6544;
}
else{
int nctemp6548=fp;
int nctemp6554=fp;
int nctemp6557 = LibeFarr->a[nctemp6554].cnt - 1;
LibeFarr->a[nctemp6548].cnt =nctemp6557;
int nctemp6561=fp;
int nctemp6567=fp;
int nctemp6570 = LibeFarr->a[nctemp6567].ptr + 1;
LibeFarr->a[nctemp6561].ptr =nctemp6570;
int nctemp6575=fp;
int nctemp6581=fp;
int nctemp6584 = LibeFarr->a[nctemp6581].ptr - 1;
int nctemp6577=nctemp6584;
int nctemp6572=(int)(LibeFarr->a[nctemp6575].base->a[nctemp6577]);
return nctemp6572;
}
}
int LibeUngetc (int fp)
{
int nctemp6588=fp;
int nctemp6585 = (LibeFarr->a[nctemp6588].eoflg ==1);
if(nctemp6585)
{
return (-1);
}
int nctemp6595=fp;
int nctemp6598=fp;
int nctemp6592 = (LibeFarr->a[nctemp6595].cnt < LibeFarr->a[nctemp6598].bufsize);
if(nctemp6592)
{
int nctemp6603=fp;
int nctemp6609=fp;
int nctemp6612 = LibeFarr->a[nctemp6609].cnt + 1;
LibeFarr->a[nctemp6603].cnt =nctemp6612;
int nctemp6616=fp;
int nctemp6622=fp;
int nctemp6625 = LibeFarr->a[nctemp6622].ptr - 1;
LibeFarr->a[nctemp6616].ptr =nctemp6625;
int nctemp6629=fp;
int nctemp6635=fp;
int nctemp6638 = LibeFarr->a[nctemp6635].bufsize - 1;
int nctemp6626 = (LibeFarr->a[nctemp6629].ptr ==nctemp6638);
if(nctemp6626)
{
int nctemp6643=fp;
int nctemp6647=fp;
int nctemp6645=LibeFarr->a[nctemp6647].ptr;
int nctemp6640=(int)(LibeFarr->a[nctemp6643].base->a[nctemp6645]);
return nctemp6640;
}
else{
int nctemp6653=fp;
int nctemp6659=fp;
int nctemp6662 = LibeFarr->a[nctemp6659].ptr + 1;
int nctemp6655=nctemp6662;
int nctemp6650=(int)(LibeFarr->a[nctemp6653].base->a[nctemp6655]);
return nctemp6650;
}
}
else{
struct nctempchar1 *nctemp6668;
static struct nctempchar1 nctemp6669 = {{ 15}, (char*)"Pushback error\0"};
nctemp6668=&nctemp6669;
LibeErrstr=nctemp6668;
LibeErrno =(-107);
return (-1);
}
}
int LibeGetw (int fp,nctempchar1 *text)
{
int p;
int ch;
int lim;
int nctemp6679=text->d[0];lim =nctemp6679;
p =0;
int nctemp6688=LibeClearerr();
int nctemp6702= fp;
int nctemp6704=LibeGetc(nctemp6702);
ch =nctemp6704;
int nctemp6695 = (ch ==32);
int nctemp6707 = (ch ==9);
int nctemp6692 = (nctemp6695 || nctemp6707);
int nctemp6712 = (ch ==10);
int nctemp6689 = (nctemp6692 || nctemp6712);
int nctemp6716=nctemp6689;
while(nctemp6716)
{{
p =0;
}
int nctemp6734= fp;
int nctemp6736=LibeGetc(nctemp6734);
ch =nctemp6736;
int nctemp6727 = (ch ==32);
int nctemp6739 = (ch ==9);
int nctemp6724 = (nctemp6727 || nctemp6739);
int nctemp6744 = (ch ==10);
int nctemp6721 = (nctemp6724 || nctemp6744);
nctemp6716=nctemp6721;}int nctemp6749= fp;
int nctemp6751=LibeUngetc(nctemp6749);
int nctemp6762= fp;
int nctemp6764=LibeGetc(nctemp6762);
ch =nctemp6764;
int nctemp6755 = (ch !=(-1));
int nctemp6767 = (p < lim);
int nctemp6752 = (nctemp6755 && nctemp6767);
int nctemp6771=nctemp6752;
while(nctemp6771)
{{
int nctemp6778 = (ch ==32);
int nctemp6783 = (ch ==9);
int nctemp6775 = (nctemp6778 || nctemp6783);
int nctemp6788 = (ch ==10);
int nctemp6772 = (nctemp6775 || nctemp6788);
if(nctemp6772)
{
int nctemp6793= fp;
int nctemp6795=LibeUngetc(nctemp6793);
int nctemp6799=p;
char nctemp6802=(char)(0);
text->a[nctemp6799] =nctemp6802;
return 1;
}
else{
int nctemp6809=p;
char nctemp6812=(char)(ch);
text->a[nctemp6809] =nctemp6812;
int nctemp6823 = p + 1;
p =nctemp6823;
}
}
int nctemp6834= fp;
int nctemp6836=LibeGetc(nctemp6834);
ch =nctemp6836;
int nctemp6827 = (ch !=(-1));
int nctemp6839 = (p < lim);
int nctemp6824 = (nctemp6827 && nctemp6839);
nctemp6771=nctemp6824;}int nctemp6843 = (p >= lim);
if(nctemp6843)
{
return 0;
}
else{
int nctemp6848 = (ch ==(-1));
if(nctemp6848)
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
int nctemp6857=fp;
int nctemp6854 = (LibeFarr->a[nctemp6857].cnt ==0);
if(nctemp6854)
{
int nctemp6861= fp;
int nctemp6863=LibeFlushbuff(nctemp6861);
}
int nctemp6867=fp;
int nctemp6870=fp;
int nctemp6864 = (LibeFarr->a[nctemp6867].cnt ==LibeFarr->a[nctemp6870].bufsize);
if(nctemp6864)
{
int nctemp6876= fp;
int nctemp6878=LibeFlushbuff(nctemp6876);
rval =nctemp6878;
int nctemp6882=fp;
int nctemp6886=fp;
int nctemp6884=LibeFarr->a[nctemp6886].ptr;
char nctemp6889=(char)(c);
LibeFarr->a[nctemp6882].base->a[nctemp6884] =nctemp6889;
int nctemp6895=fp;
int nctemp6901=fp;
int nctemp6904 = LibeFarr->a[nctemp6901].ptr + 1;
LibeFarr->a[nctemp6895].ptr =nctemp6904;
int nctemp6908=fp;
int nctemp6914=fp;
int nctemp6917 = LibeFarr->a[nctemp6914].cnt + 1;
LibeFarr->a[nctemp6908].cnt =nctemp6917;
return rval;
}
else{
int nctemp6922=fp;
int nctemp6926=fp;
int nctemp6924=LibeFarr->a[nctemp6926].ptr;
char nctemp6929=(char)(c);
LibeFarr->a[nctemp6922].base->a[nctemp6924] =nctemp6929;
int nctemp6935=fp;
int nctemp6941=fp;
int nctemp6944 = LibeFarr->a[nctemp6941].cnt + 1;
LibeFarr->a[nctemp6935].cnt =nctemp6944;
int nctemp6948=fp;
int nctemp6954=fp;
int nctemp6957 = LibeFarr->a[nctemp6954].ptr + 1;
LibeFarr->a[nctemp6948].ptr =nctemp6957;
return 1;
}
}
int LibePuts (int fp,nctempchar1 *s)
{
int ls;
int i;
int nctemp6963=s->d[0];ls =nctemp6963;
i =0;
int nctemp6980=i;
int nctemp6977=(int)(s->a[nctemp6980]);
int nctemp6974 = (nctemp6977 !=0);
int nctemp6984 = (i < ls);
int nctemp6971 = (nctemp6974 && nctemp6984);
int nctemp6988=nctemp6971;
while(nctemp6988)
{{
int nctemp6992= fp;
int nctemp6999=i;
int nctemp6996=(int)(s->a[nctemp6999]);
int nctemp6994= nctemp6996;
int nctemp7001=LibePutc(nctemp6992,nctemp6994);
int nctemp6989 = (nctemp7001 ==0);
if(nctemp6989)
{
struct nctempchar1 *nctemp7008;
static struct nctempchar1 nctemp7009 = {{ 12}, (char*)"write error\0"};
nctemp7008=&nctemp7009;
LibeErrstr=nctemp7008;
LibeErrno =0;
return 0;
}
else{
int nctemp7023 = i + 1;
i =nctemp7023;
}
}
int nctemp7033=i;
int nctemp7030=(int)(s->a[nctemp7033]);
int nctemp7027 = (nctemp7030 !=0);
int nctemp7037 = (i < ls);
int nctemp7024 = (nctemp7027 && nctemp7037);
nctemp6988=nctemp7024;}int nctemp7042= fp;
int nctemp7044=LibeFlushbuff(nctemp7042);
return 1;
}
int LibePuti (int fp,int ival)
{
int nctemp7047= ival;
nctempchar1* nctemp7049= LibeTmpstr;
int nctemp7052=LibeItoa(nctemp7047,nctemp7049);
int nctemp7054= fp;
nctempchar1* nctemp7056= LibeTmpstr;
int nctemp7059=LibePuts(nctemp7054,nctemp7056);
return nctemp7059;
}
int LibePutf (int fp,float fval,nctempchar1 *form)
{
float nctemp7061= fval;
nctempchar1* nctemp7063= form;
nctempchar1* nctemp7066= LibeTmpstr;
int nctemp7069=LibeFtoa(nctemp7061,nctemp7063,nctemp7066);
int nctemp7071= fp;
nctempchar1* nctemp7073= LibeTmpstr;
int nctemp7076=LibePuts(nctemp7071,nctemp7073);
return nctemp7076;
}
int LibePs (nctempchar1 *s)
{
int nctemp7078= 3;
nctempchar1* nctemp7080= s;
int nctemp7083=LibePuts(nctemp7078,nctemp7080);
return 1;
}
int LibePi (int n)
{
int nctemp7086= 3;
int nctemp7088= n;
int nctemp7090=LibePuti(nctemp7086,nctemp7088);
return 1;
}
int LibePf (float r)
{
int nctemp7093= 3;
float nctemp7095= r;
struct nctempchar1 *nctemp7099;
static struct nctempchar1 nctemp7100 = {{ 2}, (char*)"g\0"};
nctemp7099=&nctemp7100;
nctempchar1* nctemp7097= nctemp7099;
int nctemp7101=LibePutf(nctemp7093,nctemp7095,nctemp7097);
return 1;
}
int LibeRead (int fp,int n,nctempchar1 *buffer)
{
int rval;
int nctemp7106=fp;
int nctemp7103 = (LibeFarr->a[nctemp7106].readflg !=1);
if(nctemp7103)
{
struct nctempchar1 *nctemp7114;
static struct nctempchar1 nctemp7115 = {{ 26}, (char*)"File not open for reading\0"};
nctemp7114=&nctemp7115;
LibeErrstr=nctemp7114;
LibeErrno =(-109);
return (-1);
}
int nctemp7125=buffer->d[0];int nctemp7121 = (n > nctemp7125);
if(nctemp7121)
{
LibeErrno =(-108);
struct nctempchar1 *nctemp7138;
static struct nctempchar1 nctemp7139 = {{ 30}, (char*)"The buffer array is too small\0"};
nctemp7138=&nctemp7139;
LibeErrstr=nctemp7138;
return 0;
}
int nctemp7147=fp;
int nctemp7145= LibeFarr->a[nctemp7147].fd;
int nctemp7149= n;
nctempchar1* nctemp7151= buffer;
int nctemp7154=RunRead(nctemp7145,nctemp7149,nctemp7151);
rval =nctemp7154;
int nctemp7155 = (rval ==(-1));
if(nctemp7155)
{
int nctemp7162=fp;
LibeFarr->a[nctemp7162].eoflg =1;
rval =(-1);
}
else{
int nctemp7169 = (rval ==0);
if(nctemp7169)
{
int nctemp7176=fp;
LibeFarr->a[nctemp7176].errflg =1;
struct nctempchar1 *nctemp7184;
static struct nctempchar1 nctemp7185 = {{ 11}, (char*)"read error\0"};
nctemp7184=&nctemp7185;
LibeErrstr=nctemp7184;
LibeErrno =0;
int nctemp7193=fp;
LibeFarr->a[nctemp7193].errflg =0;
rval =0;
}
}
return rval;
}
int LibeWrite (int fp,int n,nctempchar1 *buffer)
{
int rval;
int nctemp7205=buffer->d[0];int nctemp7201 = (n > nctemp7205);
if(nctemp7201)
{
LibeErrno =(-108);
struct nctempchar1 *nctemp7218;
static struct nctempchar1 nctemp7219 = {{ 30}, (char*)"The buffer array is too small\0"};
nctemp7218=&nctemp7219;
LibeErrstr=nctemp7218;
return 0;
}
int nctemp7224=fp;
int nctemp7221 = (LibeFarr->a[nctemp7224].writflg !=1);
if(nctemp7221)
{
struct nctempchar1 *nctemp7232;
static struct nctempchar1 nctemp7233 = {{ 26}, (char*)"file not open for writing\0"};
nctemp7232=&nctemp7233;
LibeErrstr=nctemp7232;
LibeErrno =(-110);
return 0;
}
int nctemp7245=fp;
int nctemp7243= LibeFarr->a[nctemp7245].fd;
int nctemp7247= n;
nctempchar1* nctemp7249= buffer;
int nctemp7252=RunWrite(nctemp7243,nctemp7247,nctemp7249);
rval =nctemp7252;
int nctemp7253 = (rval ==0);
if(nctemp7253)
{
int nctemp7260=fp;
LibeFarr->a[nctemp7260].errflg =1;
struct nctempchar1 *nctemp7268;
static struct nctempchar1 nctemp7269 = {{ 12}, (char*)"write error\0"};
nctemp7268=&nctemp7269;
LibeErrstr=nctemp7268;
LibeErrno =0;
int nctemp7277=fp;
LibeFarr->a[nctemp7277].errflg =0;
rval =0;
}
return rval;
}
int LibeSeek (int fp,int pos,int flag)
{
int rval;
int nctemp7291=fp;
int nctemp7289= LibeFarr->a[nctemp7291].fd;
int nctemp7293= pos;
int nctemp7295= flag;
int nctemp7297=RunSeek(nctemp7289,nctemp7293,nctemp7295);
rval =nctemp7297;
int nctemp7298 = (rval ==0);
if(nctemp7298)
{
int nctemp7305=fp;
LibeFarr->a[nctemp7305].errflg =1;
struct nctempchar1 *nctemp7313;
static struct nctempchar1 nctemp7314 = {{ 11}, (char*)"Seek error\0"};
nctemp7313=&nctemp7314;
LibeErrstr=nctemp7313;
LibeErrno =0;
int nctemp7322=fp;
LibeFarr->a[nctemp7322].errflg =0;
rval =0;
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
stat =1;
i =0;
int nctemp7341 = (i < 40);
while(nctemp7341){
{
int nctemp7348=i;
nctempchar1 *nctemp7346 =LibeFarr->a[nctemp7348].base;
int nctemp7345 =(nctemp7346!=0);
if(nctemp7345)
{
int nctemp7352 = (i > 4);
if(nctemp7352)
{
int nctemp7360=i;
fd =LibeFarr->a[nctemp7360].fd;
int nctemp7366= fd;
int nctemp7368=RunClose(nctemp7366);
stat =nctemp7368;
int nctemp7369 = (stat ==0);
if(nctemp7369)
{
struct nctempchar1 *nctemp7378;
static struct nctempchar1 nctemp7379 = {{ 21}, (char*)"Could not close file\0"};
nctemp7378=&nctemp7379;
LibeErrstr=nctemp7378;
LibeErrno =(-106);
}
}
int nctemp7388= i;
int nctemp7390=LibeFlush(nctemp7388);
stat =nctemp7390;
int nctemp7393=i;
RunFree(LibeFarr->a[nctemp7393].base->a);
RunFree(LibeFarr->a[nctemp7393].base);
}
}
int nctemp7404 = i + 1;
i =nctemp7404;
int nctemp7405 = (i < 40);
nctemp7341=nctemp7405;
}
RunFree(LibeFarr->a);
RunFree(LibeFarr);
return stat;
}
int NBLOCKS;
int NTHREADS;
int LibeSetnb (int nb)
{
NBLOCKS =nb;
return 1;
}
int LibeSetnt (int nt)
{
NTHREADS =nt;
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
int nctemp7426= 4;
struct nctempchar1 *nctemp7430;
static struct nctempchar1 nctemp7431 = {{ 37}, (char*)"Array index out of bond at line no: \0"};
nctemp7430=&nctemp7431;
nctempchar1* nctemp7428= nctemp7430;
int nctemp7432=LibePuts(nctemp7426,nctemp7428);
int nctemp7434= 4;
int nctemp7436= line;
int nctemp7438=LibePuti(nctemp7434,nctemp7436);
int nctemp7440= 4;
struct nctempchar1 *nctemp7444;
static struct nctempchar1 nctemp7445 = {{ 3}, (char*)"\n\0"};
nctemp7444=&nctemp7445;
nctempchar1* nctemp7442= nctemp7444;
int nctemp7446=LibePuts(nctemp7440,nctemp7442);
int nctemp7448= 4;
struct nctempchar1 *nctemp7452;
static struct nctempchar1 nctemp7453 = {{ 13}, (char*)"Array name: \0"};
nctemp7452=&nctemp7453;
nctempchar1* nctemp7450= nctemp7452;
int nctemp7454=LibePuts(nctemp7448,nctemp7450);
int nctemp7456= 4;
nctempchar1* nctemp7458= name;
int nctemp7461=LibePuts(nctemp7456,nctemp7458);
int nctemp7463= 4;
struct nctempchar1 *nctemp7467;
static struct nctempchar1 nctemp7468 = {{ 3}, (char*)"\n\0"};
nctemp7467=&nctemp7468;
nctempchar1* nctemp7465= nctemp7467;
int nctemp7469=LibePuts(nctemp7463,nctemp7465);
int nctemp7471= 4;
struct nctempchar1 *nctemp7475;
static struct nctempchar1 nctemp7476 = {{ 11}, (char*)"Index no: \0"};
nctemp7475=&nctemp7476;
nctempchar1* nctemp7473= nctemp7475;
int nctemp7477=LibePuts(nctemp7471,nctemp7473);
int nctemp7479= 4;
int nctemp7481= index;
int nctemp7483=LibePuti(nctemp7479,nctemp7481);
int nctemp7485= 4;
struct nctempchar1 *nctemp7489;
static struct nctempchar1 nctemp7490 = {{ 3}, (char*)"\n\0"};
nctemp7489=&nctemp7490;
nctempchar1* nctemp7487= nctemp7489;
int nctemp7491=LibePuts(nctemp7485,nctemp7487);
int nctemp7493= 4;
struct nctempchar1 *nctemp7497;
static struct nctempchar1 nctemp7498 = {{ 14}, (char*)"Index value: \0"};
nctemp7497=&nctemp7498;
nctempchar1* nctemp7495= nctemp7497;
int nctemp7499=LibePuts(nctemp7493,nctemp7495);
int nctemp7501= 4;
int nctemp7503= ival;
int nctemp7505=LibePuti(nctemp7501,nctemp7503);
int nctemp7507= 4;
struct nctempchar1 *nctemp7511;
static struct nctempchar1 nctemp7512 = {{ 3}, (char*)"\n\0"};
nctemp7511=&nctemp7512;
nctempchar1* nctemp7509= nctemp7511;
int nctemp7513=LibePuts(nctemp7507,nctemp7509);
int nctemp7515= 4;
struct nctempchar1 *nctemp7519;
static struct nctempchar1 nctemp7520 = {{ 16}, (char*)"Index bound: 0-\0"};
nctemp7519=&nctemp7520;
nctempchar1* nctemp7517= nctemp7519;
int nctemp7521=LibePuts(nctemp7515,nctemp7517);
int nctemp7523= 4;
int nctemp7530 = bound - 1;
int nctemp7525= nctemp7530;
int nctemp7531=LibePuti(nctemp7523,nctemp7525);
int nctemp7533= 4;
struct nctempchar1 *nctemp7537;
static struct nctempchar1 nctemp7538 = {{ 3}, (char*)"\n\0"};
nctemp7537=&nctemp7538;
nctempchar1* nctemp7535= nctemp7537;
int nctemp7539=LibePuts(nctemp7533,nctemp7535);
int nctemp7541= 4;
int nctemp7543=LibeFlush(nctemp7541);
int nctemp7545=RunExit();
return 1;
}
int LibeSystem (nctempchar1 *cmd)
{
int rval;
nctempchar1* nctemp7551= cmd;
int nctemp7554=RunSystem(nctemp7551);
rval =nctemp7554;
return rval;
}
int LibeInit ()
{
int rval;
int nctemp7560=LibeErrinit();
rval =nctemp7560;
int nctemp7565=LibeIoinit();
rval =nctemp7565;
int nctemp7570=LibeMathinit();
rval =nctemp7570;
int nctemp7575= 1024;
int nctemp7577=LibeSetnb(nctemp7575);
rval =nctemp7577;
int nctemp7582= 1024;
int nctemp7584=LibeSetnt(nctemp7582);
rval =nctemp7584;
return rval;
}
int LibeExit ()
{
int nctemp7587=RunExit();
return 1;
}
