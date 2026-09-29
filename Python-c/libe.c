//  Translated by epsc  version: Tue Sep 29 12:09:44 2026

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
LibeErrno =1;
LibeErrstr=(0);
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
LibeErrno =1;
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
nctempchar1* nctemp20= name;
nctempchar1* nctemp23=RunGetenv(nctemp20);
return nctemp23;
}
}
float LibeMach (int flag)
{
{
int nctemp24 = (flag ==1);
if(nctemp24)
{
{
return 1.1754943508222875e-38;
}
}
else{
{
int nctemp29 = (flag ==2);
if(nctemp29)
{
{
return 3.4028234663852886e+38;
}
}
else{
{
int nctemp34 = (flag ==3);
if(nctemp34)
{
{
return 5.9604644775390625e-08;
}
}
else{
{
int nctemp39 = (flag ==4);
if(nctemp39)
{
{
return 1.1920928955078125e-07;
}
}
else{
{
int nctemp44 = (flag ==5);
if(nctemp44)
{
{
return 0.6931471805599453;
}
}
else{
{
float nctemp50=(float)(0);
return nctemp50;
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
int nctemp53 = (x < 0.0);
if(nctemp53)
{
{
float nctemp57= -x;
return nctemp57;
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
int nctemp59 = (n ==0);
if(nctemp59)
{
{
return x;
}
}
rval =1.0;
int nctemp68 = (n > 0);
if(nctemp68)
{
{
for(i = 0;i < n;i = (i + 1)){
{
float nctemp80 = rval * 2.0;
rval =nctemp80;
}
}
}
}
else{
{
int nctemp84= -n;
n =nctemp84;
for(i = 0;i < n;i = (i + 1)){
{
float nctemp93 = rval * 0.5;
rval =nctemp93;
}
}
}
}
float nctemp98 = rval * x;
return nctemp98;
}
}
float LibeGetfman2 (float x)
{
float absx;
int n;
{
float nctemp103= x;
float nctemp105=LibeFabs(nctemp103);
absx =nctemp105;
n =0;
int nctemp110 = (x ==0.0);
if(nctemp110)
{
{
return 0.0;
}
}
int nctemp115 = (absx < 0.5);
int nctemp119=nctemp115;
while(nctemp119)
{{
{
int nctemp128 = n - 1;
n =nctemp128;
float nctemp137 = absx * 2.0;
absx =nctemp137;
}
}
int nctemp138 = (absx < 0.5);
nctemp119=nctemp138;}int nctemp142 = (absx >= 1.0);
int nctemp146=nctemp142;
while(nctemp146)
{{
{
int nctemp155 = n + 1;
n =nctemp155;
float nctemp164 = absx * 0.5;
absx =nctemp164;
}
}
int nctemp165 = (absx >= 1.0);
nctemp146=nctemp165;}int nctemp169 = (x < 0.0);
if(nctemp169)
{
{
float nctemp173= -absx;
return nctemp173;
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
float nctemp179= x;
float nctemp181=LibeFabs(nctemp179);
absx =nctemp181;
n =0;
int nctemp186 = (x ==0.0);
if(nctemp186)
{
{
return 0;
}
}
int nctemp191 = (absx < 0.5);
int nctemp195=nctemp191;
while(nctemp195)
{{
{
int nctemp204 = n - 1;
n =nctemp204;
float nctemp213 = absx * 2.0;
absx =nctemp213;
}
}
int nctemp214 = (absx < 0.5);
nctemp195=nctemp214;}int nctemp218 = (absx >= 1.0);
int nctemp222=nctemp218;
while(nctemp222)
{{
{
int nctemp231 = n + 1;
n =nctemp231;
float nctemp240 = absx * 0.5;
absx =nctemp240;
}
}
int nctemp241 = (absx >= 1.0);
nctemp222=nctemp241;}return n;
}
}
float LibeFscale (float x,int n)
{
int i;
float rval;
{
rval =1.0;
int nctemp250 = (n ==0);
if(nctemp250)
{
{
return x;
}
}
int nctemp255 = (n > 0);
if(nctemp255)
{
{
for(i = 0;i < n;i = (i + 1)){
{
float nctemp267 = rval * 10.0;
rval =nctemp267;
}
}
}
}
else{
{
int nctemp271= -n;
n =nctemp271;
for(i = 0;i < n;i = (i + 1)){
{
float nctemp280 = rval * 0.1;
rval =nctemp280;
}
}
}
}
float nctemp289 = rval * x;
rval =nctemp289;
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
int nctemp291 = (f ==0.0);
if(nctemp291)
{
{
return 0;
}
}
sign =1;
int nctemp300 = (f < 0.0);
if(nctemp300)
{
{
float nctemp307= -f;
f =nctemp307;
int nctemp311= -sign;
sign =nctemp311;
}
}
nexp =0;
float nctemp326 = f / 10.0;
float nctemp328 = nctemp326 + 1.1920928955078125e-07;
int nctemp316 = (nctemp328 >= 1.0);
if(nctemp316)
{
{
float nctemp340 = f / 10.0;
float nctemp342 = nctemp340 + 1.1920928955078125e-07;
int nctemp330 = (nctemp342 >= 1.0);
int nctemp344=nctemp330;
while(nctemp344)
{{
{
float nctemp353 = f / 10.0;
f =nctemp353;
int nctemp362 = nexp + 1;
nexp =nctemp362;
}
}
float nctemp373 = f / 10.0;
float nctemp375 = nctemp373 + 1.1920928955078125e-07;
int nctemp363 = (nctemp375 >= 1.0);
nctemp344=nctemp363;}}
}
else{
{
float nctemp384 = f + 1.1920928955078125e-07;
int nctemp377 = (nctemp384 < 1.0);
if(nctemp377)
{
{
float nctemp393 = f + 1.1920928955078125e-07;
int nctemp386 = (nctemp393 < 1.0);
int nctemp395=nctemp386;
while(nctemp395)
{{
{
float nctemp404 = f * 10.0;
f =nctemp404;
int nctemp413 = nexp - 1;
nexp =nctemp413;
}
}
float nctemp421 = f + 1.1920928955078125e-07;
int nctemp414 = (nctemp421 < 1.0);
nctemp395=nctemp414;}}
}
}
}
for(i = 0;i < (maxdig - 1);i = (i + 1)){
{
float nctemp431 = f * 10.0;
f =nctemp431;
}
}
float nctemp442 = f + 0.5;
int nctemp436=(int)(nctemp442);
n =nctemp436;
int nctemp443 = (sign < 0);
if(nctemp443)
{
{
int nctemp450= -n;
n =nctemp450;
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
int nctemp452 = (f ==0.0);
if(nctemp452)
{
{
return 0.0;
}
}
sign =1;
int nctemp461 = (f < 0.0);
if(nctemp461)
{
{
float nctemp468= -f;
f =nctemp468;
int nctemp472= -sign;
sign =nctemp472;
}
}
nexp =0;
float nctemp487 = f / 10.0;
float nctemp489 = nctemp487 + 1.1920928955078125e-07;
int nctemp477 = (nctemp489 >= 1.0);
if(nctemp477)
{
{
float nctemp501 = f / 10.0;
float nctemp503 = nctemp501 + 1.1920928955078125e-07;
int nctemp491 = (nctemp503 >= 1.0);
int nctemp505=nctemp491;
while(nctemp505)
{{
{
float nctemp514 = f / 10.0;
f =nctemp514;
int nctemp523 = nexp + 1;
nexp =nctemp523;
}
}
float nctemp534 = f / 10.0;
float nctemp536 = nctemp534 + 1.1920928955078125e-07;
int nctemp524 = (nctemp536 >= 1.0);
nctemp505=nctemp524;}}
}
else{
{
float nctemp545 = f + 1.1920928955078125e-07;
int nctemp538 = (nctemp545 < 1.0);
if(nctemp538)
{
{
float nctemp554 = f + 1.1920928955078125e-07;
int nctemp547 = (nctemp554 < 1.0);
int nctemp556=nctemp547;
while(nctemp556)
{{
{
float nctemp565 = f * 10.0;
f =nctemp565;
int nctemp574 = nexp - 1;
nexp =nctemp574;
}
}
float nctemp582 = f + 1.1920928955078125e-07;
int nctemp575 = (nctemp582 < 1.0);
nctemp556=nctemp575;}}
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
int nctemp585 = (f ==0.0);
if(nctemp585)
{
{
return 0;
}
}
sign =1;
int nctemp594 = (f < 0.0);
if(nctemp594)
{
{
float nctemp601= -f;
f =nctemp601;
int nctemp605= -sign;
sign =nctemp605;
}
}
nexp =0;
float nctemp620 = f / 10.0;
float nctemp622 = nctemp620 + 1.1920928955078125e-07;
int nctemp610 = (nctemp622 >= 1.0);
if(nctemp610)
{
{
float nctemp634 = f / 10.0;
float nctemp636 = nctemp634 + 1.1920928955078125e-07;
int nctemp624 = (nctemp636 >= 1.0);
int nctemp638=nctemp624;
while(nctemp638)
{{
{
float nctemp647 = f / 10.0;
f =nctemp647;
int nctemp656 = nexp + 1;
nexp =nctemp656;
}
}
float nctemp667 = f / 10.0;
float nctemp669 = nctemp667 + 1.1920928955078125e-07;
int nctemp657 = (nctemp669 >= 1.0);
nctemp638=nctemp657;}}
}
else{
{
float nctemp678 = f + 1.1920928955078125e-07;
int nctemp671 = (nctemp678 < 1.0);
if(nctemp671)
{
{
float nctemp687 = f + 1.1920928955078125e-07;
int nctemp680 = (nctemp687 < 1.0);
int nctemp689=nctemp680;
while(nctemp689)
{{
{
float nctemp698 = f * 10.0;
f =nctemp698;
int nctemp707 = nexp - 1;
nexp =nctemp707;
}
}
float nctemp715 = f + 1.1920928955078125e-07;
int nctemp708 = (nctemp715 < 1.0);
nctemp689=nctemp708;}}
}
}
}
i =0;
loop =1;
int nctemp726=loop;
while(nctemp726)
{{
{
int nctemp738=(int)(f);
float nctemp735=(float)(nctemp738);
float nctemp741 = f - nctemp735;
r =nctemp741;
int nctemp742 = (r < 1.1920928955078125e-07);
if(nctemp742)
{
{
loop =0;
}
}
else{
{
float nctemp758 = f * 10.0;
f =nctemp758;
}
}
int nctemp767 = i + 1;
i =nctemp767;
int nctemp768 = (i >= 10);
if(nctemp768)
{
{
loop =0;
}
}
}
}
nctemp726=loop;}return i;
}
}
int LibeGetfexp (float f)
{
int nexp;
{
int nctemp778 = (f ==0.0);
if(nctemp778)
{
{
return 0;
}
}
nexp =0;
int nctemp787 = (f < 0.0);
if(nctemp787)
{
{
float nctemp794= -f;
f =nctemp794;
}
}
float nctemp805 = f / 10.0;
float nctemp807 = nctemp805 + 1.1920928955078125e-07;
int nctemp795 = (nctemp807 >= 1.0);
if(nctemp795)
{
{
float nctemp819 = f / 10.0;
float nctemp821 = nctemp819 + 1.1920928955078125e-07;
int nctemp809 = (nctemp821 >= 1.0);
int nctemp823=nctemp809;
while(nctemp823)
{{
{
float nctemp832 = f / 10.0;
f =nctemp832;
int nctemp841 = nexp + 1;
nexp =nctemp841;
}
}
float nctemp852 = f / 10.0;
float nctemp854 = nctemp852 + 1.1920928955078125e-07;
int nctemp842 = (nctemp854 >= 1.0);
nctemp823=nctemp842;}}
}
else{
{
float nctemp863 = f + 1.1920928955078125e-07;
int nctemp856 = (nctemp863 < 1.0);
if(nctemp856)
{
{
float nctemp872 = f + 1.1920928955078125e-07;
int nctemp865 = (nctemp872 < 1.0);
int nctemp874=nctemp865;
while(nctemp874)
{{
{
float nctemp883 = f * 10.0;
f =nctemp883;
int nctemp892 = nexp - 1;
nexp =nctemp892;
}
}
float nctemp900 = f + 1.1920928955078125e-07;
int nctemp893 = (nctemp900 < 1.0);
nctemp874=nctemp893;}}
}
}
}
return nexp;
}
}
float LibeClock ()
{
{
float nctemp904=RunClock();
return nctemp904;
}
}
static float LibeSincosmax;
static float LibeSincoslim;
static float LibeLnmax;
static float LibeLnmin;
int LibeMod (int n,int r)
{
{
int nctemp905 = (r ==0);
if(nctemp905)
{
{
return n;
}
}
int nctemp921 = n / r;
int nctemp923 = nctemp921 * r;
int nctemp924 = n - nctemp923;
return nctemp924;
}
}
float LibeSqrt (float x)
{
float f;
float yest;
float z;
int n;
{
int nctemp925 = (x ==0.0);
if(nctemp925)
{
{
return 0.0;
}
}
int nctemp930 = (x < 0.0);
if(nctemp930)
{
{
LibeErrno =-101;
struct nctempchar1 *nctemp943;
static struct nctempchar1 nctemp944 = {{ 25}, (char*)"Sqrt input argument < 0 \0"};
nctemp943=&nctemp944;
LibeErrstr=nctemp943;
return 0.0;
}
}
float nctemp950= x;
float nctemp952=LibeGetfman2(nctemp950);
f =nctemp952;
float nctemp957= x;
int nctemp959=LibeGetfexp2(nctemp957);
n =nctemp959;
float nctemp972 = 0.59016 * f;
float nctemp973 = 0.41731 + nctemp972;
yest =nctemp973;
float nctemp986 = f / yest;
float nctemp987 = yest + nctemp986;
z =nctemp987;
float nctemp999 = 0.25 * z;
float nctemp1005 = f / z;
float nctemp1006 = nctemp999 + nctemp1005;
yest =nctemp1006;
int nctemp1010= n;
int nctemp1012= 2;
int nctemp1014=LibeMod(nctemp1010,nctemp1012);
int nctemp1007 = (nctemp1014 !=0);
if(nctemp1007)
{
{
float nctemp1024 = yest * 0.70710678118654752440;
yest =nctemp1024;
int nctemp1033 = n + 1;
n =nctemp1033;
}
}
float nctemp1035= yest;
int nctemp1042 = n / 2;
int nctemp1037= nctemp1042;
float nctemp1043=LibeFscale2(nctemp1035,nctemp1037);
return nctemp1043;
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
int nctemp1044 = (x <= 0.0);
if(nctemp1044)
{
{
LibeErrno =-101;
struct nctempchar1 *nctemp1057;
static struct nctempchar1 nctemp1058 = {{ 23}, (char*)"Ln input argument < 0 \0"};
nctemp1057=&nctemp1058;
LibeErrstr=nctemp1057;
return 3.4028234663852886e+38;
}
}
float nctemp1064= x;
float nctemp1066=LibeGetfman2(nctemp1064);
f =nctemp1066;
float nctemp1071= x;
int nctemp1073=LibeGetfexp2(nctemp1071);
n =nctemp1073;
int nctemp1074 = (f > 0.70710678118654752440);
if(nctemp1074)
{
{
float nctemp1089 = f - 0.5;
float nctemp1091 = nctemp1089 - 0.5;
zn =nctemp1091;
float nctemp1103 = f * 0.5;
float nctemp1105 = nctemp1103 + 0.5;
zd =nctemp1105;
}
}
else{
{
float nctemp1114 = f - 0.5;
zn =nctemp1114;
float nctemp1126 = zn * 0.5;
float nctemp1128 = nctemp1126 + 0.5;
zd =nctemp1128;
int nctemp1137 = n - 1;
n =nctemp1137;
}
}
float nctemp1146 = zn / zd;
z =nctemp1146;
float nctemp1155 = z * z;
w =nctemp1155;
float nctemp1175 = w * -0.5527074855E+0;
float nctemp1181 = w + -0.6632718214E+1;
float nctemp1182 = nctemp1175 / nctemp1181;
float nctemp1183 = z * nctemp1182;
float nctemp1184 = z + nctemp1183;
r =nctemp1184;
float nctemp1189=(float)(n);
xn =nctemp1189;
float nctemp1202 = xn * -2.121944400546905827679E-4;
float nctemp1204 = nctemp1202 + r;
float nctemp1210 = xn * 0.69335938;
float nctemp1211 = nctemp1204 + nctemp1210;
return nctemp1211;
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
P0 =0.24999999950E+0;
P1 =0.41602886268E-2;
Q1 =0.49987178778E-1;
int nctemp1224 = (x >= LibeLnmax);
if(nctemp1224)
{
{
LibeErrno =-102;
struct nctempchar1 *nctemp1237;
static struct nctempchar1 nctemp1238 = {{ 25}, (char*)"Overflow in exp function\0"};
nctemp1237=&nctemp1238;
LibeErrstr=nctemp1237;
return 3.4028234663852886e+38;
}
}
int nctemp1240 = (x < LibeLnmin);
if(nctemp1240)
{
{
LibeErrno =-102;
struct nctempchar1 *nctemp1253;
static struct nctempchar1 nctemp1254 = {{ 26}, (char*)"Underflow in exp function\0"};
nctemp1253=&nctemp1254;
LibeErrstr=nctemp1253;
return 0.0;
}
}
float nctemp1266 = x * 1.4426950408889634073;
int nctemp1260=(int)(nctemp1266);
n =nctemp1260;
float nctemp1271=(float)(n);
xn =nctemp1271;
float nctemp1286 = xn * 0.693147180559945309417232;
float nctemp1287 = x - nctemp1286;
g =nctemp1287;
float nctemp1296 = g * g;
z =nctemp1296;
float nctemp1311 = P1 * z;
float nctemp1313 = nctemp1311 + P0;
float nctemp1315 = nctemp1313 * g;
p =nctemp1315;
float nctemp1327 = Q1 * z;
float nctemp1329 = nctemp1327 + 0.5;
q =nctemp1329;
float nctemp1346 = q - p;
float nctemp1347 = p / nctemp1346;
float nctemp1348 = 0.5 + nctemp1347;
rval =nctemp1348;
float nctemp1350= rval;
int nctemp1357 = n + 1;
int nctemp1352= nctemp1357;
float nctemp1358=LibeFscale2(nctemp1350,nctemp1352);
return nctemp1358;
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
float nctemp1362= -0.1666665668E+0;
R1 =nctemp1362;
R2 =0.8333025139E-2;
float nctemp1370= -0.1980741872E-3;
R3 =nctemp1370;
R4 =0.2601903036E-5;
int nctemp1375 = (y > LibeSincosmax);
if(nctemp1375)
{
{
LibeErrno =-102;
struct nctempchar1 *nctemp1388;
static struct nctempchar1 nctemp1389 = {{ 37}, (char*)"Loss of accuracy in sin/cos function\0"};
nctemp1388=&nctemp1389;
LibeErrstr=nctemp1388;
return 0.0;
}
}
float nctemp1404 = y * 0.31830988618379067154;
float nctemp1406 = nctemp1404 + 0.5;
int nctemp1395=(int)(nctemp1406);
n =nctemp1395;
float nctemp1411=(float)(n);
xn =nctemp1411;
int nctemp1417= n;
int nctemp1419= 2;
int nctemp1421=LibeMod(nctemp1417,nctemp1419);
int nctemp1414 = (nctemp1421 !=0);
if(nctemp1414)
{
{
float nctemp1426= -sign;
sign =nctemp1426;
}
}
float nctemp1431= x;
float nctemp1433=LibeFabs(nctemp1431);
x =nctemp1433;
int nctemp1434 = (x !=y);
if(nctemp1434)
{
{
float nctemp1446 = xn - 0.5;
xn =nctemp1446;
}
}
float nctemp1454= x;
float nctemp1456=LibeFabs(nctemp1454);
float nctemp1462 = xn * 3.1415926535897932384626433832795028841972;
float nctemp1463 = nctemp1456 - nctemp1462;
f =nctemp1463;
float nctemp1467= f;
float nctemp1469=LibeFabs(nctemp1467);
int nctemp1464 = (nctemp1469 < LibeSincoslim);
if(nctemp1464)
{
{
float nctemp1475 = sign * f;
return nctemp1475;
}
}
float nctemp1484 = f * f;
g =nctemp1484;
float nctemp1511 = R4 * g;
float nctemp1513 = nctemp1511 + R3;
float nctemp1515 = nctemp1513 * g;
float nctemp1517 = nctemp1515 + R2;
float nctemp1519 = nctemp1517 * g;
float nctemp1521 = nctemp1519 + R1;
float nctemp1523 = nctemp1521 * g;
g =nctemp1523;
float nctemp1536 = f * g;
float nctemp1537 = f + nctemp1536;
g =nctemp1537;
float nctemp1542 = sign * g;
return nctemp1542;
}
}
float LibeSin (float x)
{
{
int nctemp1543 = (x < 0.0);
if(nctemp1543)
{
{
float nctemp1548= x;
float nctemp1551= -x;
float nctemp1550= nctemp1551;
float nctemp1553= -1.0;
float nctemp1552= nctemp1553;
float nctemp1554=LibeSincos(nctemp1548,nctemp1550,nctemp1552);
return nctemp1554;
}
}
else{
{
float nctemp1556= x;
float nctemp1558= x;
float nctemp1560= 1.0;
float nctemp1562=LibeSincos(nctemp1556,nctemp1558,nctemp1560);
return nctemp1562;
}
}
}
}
float LibeCos (float x)
{
{
float nctemp1564= x;
float nctemp1570= x;
float nctemp1572=LibeFabs(nctemp1570);
float nctemp1574 = nctemp1572 + 1.57079632679489661923132;
float nctemp1566= nctemp1574;
float nctemp1575= 1.0;
float nctemp1577=LibeSincos(nctemp1564,nctemp1566,nctemp1575);
return nctemp1577;
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
float nctemp1581= -0.958017723E-1;
P1 =nctemp1581;
float nctemp1585= -0.429135777E+0;
Q1 =nctemp1585;
Q2 =0.971685835E-2;
float nctemp1594= x;
float nctemp1596=LibeFabs(nctemp1594);
y =nctemp1596;
int nctemp1597 = (y > LibeSincosmax);
if(nctemp1597)
{
{
LibeErrno =-102;
struct nctempchar1 *nctemp1610;
static struct nctempchar1 nctemp1611 = {{ 33}, (char*)"Loss of accuracy in tan function\0"};
nctemp1610=&nctemp1611;
LibeErrstr=nctemp1610;
return 0.0;
}
}
float nctemp1623 = x * 0.63661977236758134308;
int nctemp1617=(int)(nctemp1623);
n =nctemp1617;
float nctemp1628=(float)(n);
xn =nctemp1628;
float nctemp1643 = xn * 1.57079632679489661923132;
float nctemp1644 = x - nctemp1643;
f =nctemp1644;
float nctemp1648= f;
float nctemp1650=LibeFabs(nctemp1648);
int nctemp1645 = (nctemp1650 < LibeSincoslim);
if(nctemp1645)
{
{
xnum =f;
xden =1.0;
}
}
else{
{
float nctemp1668 = f * f;
g =nctemp1668;
float nctemp1683 = P1 * g;
float nctemp1685 = nctemp1683 * f;
float nctemp1687 = nctemp1685 + f;
xnum =nctemp1687;
float nctemp1708 = Q2 * g;
float nctemp1710 = nctemp1708 + Q1;
float nctemp1712 = nctemp1710 * g;
float nctemp1714 = nctemp1712 + 0.5;
float nctemp1716 = nctemp1714 + 0.5;
xden =nctemp1716;
}
}
int nctemp1720= n;
int nctemp1722= 2;
int nctemp1724=LibeMod(nctemp1720,nctemp1722);
int nctemp1717 = (nctemp1724 !=0);
if(nctemp1717)
{
{
float nctemp1729= -xnum;
float nctemp1730 = xden / nctemp1729;
return nctemp1730;
}
}
else{
{
float nctemp1735 = xnum / xden;
return nctemp1735;
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
P1 =0.933935835E+0;
float nctemp1743= -0.504400557E+0;
P2 =nctemp1743;
Q0 =0.560363004E+1;
float nctemp1751= -0.554846723E+1;
Q1 =nctemp1751;
float nctemp1756= x;
float nctemp1758=LibeFabs(nctemp1756);
y =nctemp1758;
int nctemp1759 = (y > 0.5);
if(nctemp1759)
{
{
i =1;
int nctemp1767 = (y > 1.0);
if(nctemp1767)
{
{
LibeErrno =-101;
struct nctempchar1 *nctemp1780;
static struct nctempchar1 nctemp1781 = {{ 41}, (char*)"Absolute value of argument of arcsin > 1\0"};
nctemp1780=&nctemp1781;
LibeErrstr=nctemp1780;
return 3.4028234663852886e+38;
}
}
float nctemp1794 = 1.0 - y;
float nctemp1796 = nctemp1794 * 0.5;
g =nctemp1796;
float nctemp1801= g;
float nctemp1803=LibeSqrt(nctemp1801);
r =nctemp1803;
float nctemp1807= -r;
r =nctemp1807;
float nctemp1816 = r + r;
y =nctemp1816;
float nctemp1834 = P2 * g;
float nctemp1836 = nctemp1834 + P1;
float nctemp1838 = nctemp1836 * g;
float nctemp1850 = g + Q1;
float nctemp1852 = nctemp1850 * g;
float nctemp1854 = nctemp1852 + Q0;
float nctemp1855 = nctemp1838 / nctemp1854;
r =nctemp1855;
float nctemp1868 = y * r;
float nctemp1869 = y + nctemp1868;
res =nctemp1869;
}
}
else{
{
i =0;
int nctemp1874 = (y < LibeSincoslim);
if(nctemp1874)
{
{
res =y;
}
}
else{
{
float nctemp1890 = y * y;
g =nctemp1890;
float nctemp1908 = P2 * g;
float nctemp1910 = nctemp1908 + P1;
float nctemp1912 = nctemp1910 * g;
float nctemp1924 = g + Q1;
float nctemp1926 = nctemp1924 * g;
float nctemp1928 = nctemp1926 + Q0;
float nctemp1929 = nctemp1912 / nctemp1928;
g =nctemp1929;
float nctemp1942 = y * g;
float nctemp1943 = y + nctemp1942;
res =nctemp1943;
}
}
}
}
int nctemp1944 = (i ==1);
if(nctemp1944)
{
{
float nctemp1960 = 0.78539816339744830962 + res;
float nctemp1961 = 0.78539816339744830962 + nctemp1960;
res =nctemp1961;
}
}
int nctemp1962 = (x < 0.0);
if(nctemp1962)
{
{
float nctemp1969= -res;
res =nctemp1969;
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
P1 =0.933935835E+0;
float nctemp1978= -0.504400557E+0;
P2 =nctemp1978;
Q0 =0.560363004E+1;
float nctemp1986= -0.554846723E+1;
Q1 =nctemp1986;
float nctemp1991= x;
float nctemp1993=LibeFabs(nctemp1991);
y =nctemp1993;
int nctemp1994 = (y > 0.5);
if(nctemp1994)
{
{
i =0;
int nctemp2002 = (y > 1.0);
if(nctemp2002)
{
{
LibeErrno =-101;
struct nctempchar1 *nctemp2015;
static struct nctempchar1 nctemp2016 = {{ 50}, (char*)"Absolute value of argument of arccos out of range\0"};
nctemp2015=&nctemp2016;
LibeErrstr=nctemp2015;
return 3.4028234663852886e+38;
}
}
float nctemp2029 = 1.0 - y;
float nctemp2031 = nctemp2029 * 0.5;
g =nctemp2031;
float nctemp2036= g;
float nctemp2038=LibeSqrt(nctemp2036);
r =nctemp2038;
float nctemp2042= -r;
r =nctemp2042;
float nctemp2051 = r + r;
y =nctemp2051;
float nctemp2069 = P2 * g;
float nctemp2071 = nctemp2069 + P1;
float nctemp2073 = nctemp2071 * g;
float nctemp2085 = g + Q1;
float nctemp2087 = nctemp2085 * g;
float nctemp2089 = nctemp2087 + Q0;
float nctemp2090 = nctemp2073 / nctemp2089;
r =nctemp2090;
float nctemp2103 = y * r;
float nctemp2104 = y + nctemp2103;
res =nctemp2104;
}
}
else{
{
i =1;
int nctemp2109 = (y < LibeSincoslim);
if(nctemp2109)
{
{
res =y;
}
}
else{
{
float nctemp2125 = y * y;
g =nctemp2125;
float nctemp2143 = P2 * g;
float nctemp2145 = nctemp2143 + P1;
float nctemp2147 = nctemp2145 * g;
float nctemp2159 = g + Q1;
float nctemp2161 = nctemp2159 * g;
float nctemp2163 = nctemp2161 + Q0;
float nctemp2164 = nctemp2147 / nctemp2163;
g =nctemp2164;
float nctemp2177 = y * g;
float nctemp2178 = y + nctemp2177;
res =nctemp2178;
}
}
}
}
int nctemp2179 = (x < 0.0);
if(nctemp2179)
{
{
int nctemp2183 = (i ==0);
if(nctemp2183)
{
{
float nctemp2199 = 1.57079632679489661923132 + res;
float nctemp2200 = 1.57079632679489661923132 + nctemp2199;
res =nctemp2200;
}
}
else{
{
float nctemp2213 = 0.78539816339744830962 + res;
float nctemp2214 = 0.78539816339744830962 + nctemp2213;
res =nctemp2214;
}
}
}
}
else{
{
int nctemp2215 = (i ==1);
if(nctemp2215)
{
{
float nctemp2231 = 0.78539816339744830962 - res;
float nctemp2232 = 0.78539816339744830962 + nctemp2231;
res =nctemp2232;
}
}
else{
{
float nctemp2236= -res;
res =nctemp2236;
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
rt32 =0.26794919243112270647;
rt3 =1.73205080756887729353;
float nctemp2254 = rt3 - 1.0;
a =nctemp2254;
float nctemp2258= -0.4708325141E+0;
P0 =nctemp2258;
float nctemp2262= -0.5090958253E-1;
P1 =nctemp2262;
Q0 =0.1412500740E+1;
int nctemp2267 = (f > 1.0);
if(nctemp2267)
{
{
float nctemp2279 = 1.0 / f;
f =nctemp2279;
n =2;
}
}
else{
{
n =0;
}
}
int nctemp2288 = (f > rt32);
if(nctemp2288)
{
{
float nctemp2312 = a * f;
float nctemp2314 = nctemp2312 - 0.5;
float nctemp2316 = nctemp2314 - 0.5;
float nctemp2318 = nctemp2316 + f;
float nctemp2324 = rt3 + f;
float nctemp2325 = nctemp2318 / nctemp2324;
f =nctemp2325;
int nctemp2334 = n + 1;
n =nctemp2334;
}
}
float nctemp2338= f;
float nctemp2340=LibeFabs(nctemp2338);
int nctemp2335 = (nctemp2340 < LibeSincoslim);
if(nctemp2335)
{
{
res =f;
}
}
else{
{
float nctemp2354 = f * f;
g =nctemp2354;
float nctemp2372 = P1 * g;
float nctemp2374 = nctemp2372 + P0;
float nctemp2376 = nctemp2374 * g;
float nctemp2382 = g + Q0;
float nctemp2383 = nctemp2376 / nctemp2382;
res =nctemp2383;
float nctemp2396 = f * res;
float nctemp2397 = f + nctemp2396;
res =nctemp2397;
}
}
int nctemp2398 = (n > 1);
if(nctemp2398)
{
{
float nctemp2405= -res;
res =nctemp2405;
}
}
int nctemp2406 = (n ==1);
if(nctemp2406)
{
{
float nctemp2418 = res + 0.52359877559829887308;
res =nctemp2418;
}
}
else{
{
int nctemp2419 = (n ==2);
if(nctemp2419)
{
{
float nctemp2431 = res + 1.57079632679489661923132;
res =nctemp2431;
}
}
else{
{
int nctemp2432 = (n ==3);
if(nctemp2432)
{
{
float nctemp2444 = res + 1.04719755119659774615;
res =nctemp2444;
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
int nctemp2446 = (x < 0.0);
if(nctemp2446)
{
{
float nctemp2455= -x;
float nctemp2454= nctemp2455;
float nctemp2456=LibeAtan(nctemp2454);
rval =nctemp2456;
float nctemp2460= -rval;
rval =nctemp2460;
}
}
else{
{
float nctemp2465= x;
float nctemp2467=LibeAtan(nctemp2465);
rval =nctemp2467;
}
}
return rval;
}
}
float LibePow (float base,float exponent)
{
{
float nctemp2475= base;
float nctemp2477=LibeLn(nctemp2475);
float nctemp2478 = exponent * nctemp2477;
float nctemp2470= nctemp2478;
float nctemp2479=LibeExp(nctemp2470);
return nctemp2479;
}
}
int LibeMathinit ()
{
{
float nctemp2484= 1.0;
int nctemp2491 = 24 - 1;
int nctemp2486= nctemp2491;
float nctemp2492=LibeFscale2(nctemp2484,nctemp2486);
LibeSincosmax =nctemp2492;
float nctemp2501= LibeSincosmax;
float nctemp2503=LibeSqrt(nctemp2501);
float nctemp2504 = 3.1415926535897932384626433832795028841972 * nctemp2503;
LibeSincosmax =nctemp2504;
float nctemp2513= 1.0;
int nctemp2520 = 24 / 2;
int nctemp2515= nctemp2520;
float nctemp2521=LibeFscale2(nctemp2513,nctemp2515);
float nctemp2522 = 1.0 / nctemp2521;
LibeSincoslim =nctemp2522;
float nctemp2527= 3.4028234663852886e+38;
float nctemp2529=LibeLn(nctemp2527);
LibeLnmax =nctemp2529;
float nctemp2534= 1.1754943508222875e-38;
float nctemp2536=LibeLn(nctemp2534);
LibeLnmin =nctemp2536;
return 1;
}
}
int LibeStrlen (nctempchar1 *s)
{
int ls;
int i;
{
int nctemp2542=s->d[0];ls =nctemp2542;
i =0;
int nctemp2559=i;
if((0>i)||(i>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1109,i,0,s->d[0]-1);
}
int nctemp2556=(int)(s->a[nctemp2559]);
int nctemp2553 = (nctemp2556 !=0);
int nctemp2563 = (i < ls);
int nctemp2550 = (nctemp2553 && nctemp2563);
int nctemp2567=nctemp2550;
while(nctemp2567)
{{
{
int nctemp2576 = i + 1;
i =nctemp2576;
}
}
int nctemp2586=i;
if((0>i)||(i>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1109,i,0,s->d[0]-1);
}
int nctemp2583=(int)(s->a[nctemp2586]);
int nctemp2580 = (nctemp2583 !=0);
int nctemp2590 = (i < ls);
int nctemp2577 = (nctemp2580 && nctemp2590);
nctemp2567=nctemp2577;}return i;
}
}
int LibeStrcmp (nctempchar1 *s,nctempchar1 *t)
{
int ls;
int i;
{
int nctemp2599=s->d[0];ls =nctemp2599;
i =0;
int nctemp2613=i;
if((0>i)||(i>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1130,i,0,s->d[0]-1);
}
int nctemp2616=i;
if((0>i)||(i>=t->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e t %d %d %d %d \n " ,1130,i,0,t->d[0]-1);
}
int nctemp2610 = (s->a[nctemp2613] ==t->a[nctemp2616]);
int nctemp2619 = (i < ls);
int nctemp2607 = (nctemp2610 && nctemp2619);
int nctemp2623=nctemp2607;
while(nctemp2623)
{{
{
int nctemp2630=i;
if((0>i)||(i>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1131,i,0,s->d[0]-1);
}
int nctemp2627=(int)(s->a[nctemp2630]);
int nctemp2624 = (nctemp2627 ==0);
if(nctemp2624)
{
{
return 1;
}
}
int nctemp2642 = i + 1;
i =nctemp2642;
}
}
int nctemp2649=i;
if((0>i)||(i>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1130,i,0,s->d[0]-1);
}
int nctemp2652=i;
if((0>i)||(i>=t->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e t %d %d %d %d \n " ,1130,i,0,t->d[0]-1);
}
int nctemp2646 = (s->a[nctemp2649] ==t->a[nctemp2652]);
int nctemp2655 = (i < ls);
int nctemp2643 = (nctemp2646 && nctemp2655);
nctemp2623=nctemp2643;}return 0;
}
}
int LibeStrev (nctempchar1 *s)
{
char c;
int i;
int j;
{
i =0;
nctempchar1* nctemp2671= s;
int nctemp2674=LibeStrlen(nctemp2671);
int nctemp2676 = nctemp2674 - 1;
j =nctemp2676;
int nctemp2677 = (i < j);
int nctemp2681=nctemp2677;
while(nctemp2681)
{{
{
int nctemp2686=i;
if((0>i)||(i>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1154,i,0,s->d[0]-1);
}
c =s->a[nctemp2686];
int nctemp2691=i;
if((0>i)||(i>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1155,i,0,s->d[0]-1);
}
int nctemp2694=j;
if((0>j)||(j>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1155,j,0,s->d[0]-1);
}
s->a[nctemp2691] =s->a[nctemp2694];
int nctemp2699=j;
if((0>j)||(j>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1156,j,0,s->d[0]-1);
}
s->a[nctemp2699] =c;
int nctemp2710 = i + 1;
i =nctemp2710;
int nctemp2719 = j - 1;
j =nctemp2719;
}
}
int nctemp2720 = (i < j);
nctemp2681=nctemp2720;}return 1;
}
}
int LibeStrcpy (nctempchar1 *s,nctempchar1 *t)
{
int ls;
int i;
{
nctempchar1* nctemp2729= s;
int nctemp2732=LibeStrlen(nctemp2729);
ls =nctemp2732;
int nctemp2733 = (ls ==0);
if(nctemp2733)
{
{
return 1;
}
}
int nctemp2741=t->d[0];int nctemp2738 = (nctemp2741 <= ls);
if(nctemp2738)
{
{
return 0;
}
}
for(i = 0;i <= ls;i = (i + 1)){
{
int nctemp2750=i;
if((0>i)||(i>=t->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e t %d %d %d %d \n " ,1185,i,0,t->d[0]-1);
}
int nctemp2753=i;
if((0>i)||(i>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1185,i,0,s->d[0]-1);
}
t->a[nctemp2750] =s->a[nctemp2753];
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
nctempchar1* nctemp2760= s;
int nctemp2763=LibeStrlen(nctemp2760);
ls =nctemp2763;
nctempchar1* nctemp2768= t;
int nctemp2771=LibeStrlen(nctemp2768);
lt =nctemp2771;
int nctemp2775=t->d[0];int nctemp2784 = lt + ls;
int nctemp2772 = (nctemp2775 < nctemp2784);
if(nctemp2772)
{
{
return 0;
}
}
for(i = lt;i < (ls + lt);i = (i + 1)){
{
int nctemp2789=i;
if((0>i)||(i>=t->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e t %d %d %d %d \n " ,1212,i,0,t->d[0]-1);
}
int nctemp2797 = i - lt;
int nctemp2792=nctemp2797;
if((0>nctemp2797)||(nctemp2797>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1212,nctemp2797,0,s->d[0]-1);
}
t->a[nctemp2789] =s->a[nctemp2792];
}
}
int nctemp2806 = ls + lt;
int nctemp2801=nctemp2806;
if((0>nctemp2806)||(nctemp2806>=t->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e t %d %d %d %d \n " ,1214,nctemp2806,0,t->d[0]-1);
}
char nctemp2808=(char)(0);
t->a[nctemp2801] =nctemp2808;
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
int nctemp2819=t->d[0];int nctemp2824 = nctemp2819 - 1;
lt =nctemp2824;
int nctemp2832=s->d[0];int nctemp2837 = nctemp2832 - 1;
ls =nctemp2837;
int nctemp2852 = lt + ls;
int nctemp2854 = nctemp2852 + 1;
int nctemp2844=nctemp2854;
nctempchar1 *nctemp2843;
nctemp2843=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp2862 = lt + ls;
int nctemp2864 = nctemp2862 + 1;
nctemp2843->d[0]=nctemp2864;
nctemp2843->a=(char *)RunMalloc(sizeof(char)*nctemp2844);
r=nctemp2843;
for(i = 0;i < lt;i = (i + 1)){
{
int nctemp2868=i;
if((0>i)||(i>=r->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e r %d %d %d %d \n " ,1234,i,0,r->d[0]-1);
}
int nctemp2871=i;
if((0>i)||(i>=t->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e t %d %d %d %d \n " ,1234,i,0,t->d[0]-1);
}
r->a[nctemp2868] =t->a[nctemp2871];
}
}
for(i = lt;i < (ls + lt);i = (i + 1)){
{
int nctemp2876=i;
if((0>i)||(i>=r->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e r %d %d %d %d \n " ,1237,i,0,r->d[0]-1);
}
int nctemp2884 = i - lt;
int nctemp2879=nctemp2884;
if((0>nctemp2884)||(nctemp2884>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1237,nctemp2884,0,s->d[0]-1);
}
r->a[nctemp2876] =s->a[nctemp2879];
}
}
int nctemp2893 = ls + lt;
int nctemp2888=nctemp2893;
if((0>nctemp2893)||(nctemp2893>=r->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e r %d %d %d %d \n " ,1239,nctemp2893,0,r->d[0]-1);
}
char nctemp2895=(char)(0);
r->a[nctemp2888] =nctemp2895;
return r;
}
}
nctempchar1 * LibeStrsave (nctempchar1 *s)
{
int l;
nctempchar1 *tmp;
{
tmp=(0);
l =0;
nctempchar1* nctemp2913= s;
int nctemp2916=LibeStrlen(nctemp2913);
l =nctemp2916;
int nctemp2928 = l + 1;
int nctemp2923=nctemp2928;
nctempchar1 *nctemp2922;
nctemp2922=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp2933 = l + 1;
nctemp2922->d[0]=nctemp2933;
nctemp2922->a=(char *)RunMalloc(sizeof(char)*nctemp2923);
tmp=nctemp2922;
nctempchar1 *nctemp2935 =tmp;
int nctemp2934 =(nctemp2935!=0);
if(nctemp2934)
{
{
nctempchar1* nctemp2940= s;
nctempchar1* nctemp2943= tmp;
int nctemp2946=LibeStrcpy(nctemp2940,nctemp2943);
}
}
return tmp;
}
}
int LibeIsalhpa (int c)
{
{
int nctemp2955 = (c >= 'a');
int nctemp2960 = (c <= 'z');
int nctemp2952 = (nctemp2955 && nctemp2960);
int nctemp2968 = (c >= 'A');
int nctemp2973 = (c <= 'Z');
int nctemp2965 = (nctemp2968 && nctemp2973);
int nctemp2949 = (nctemp2952 || nctemp2965);
if(nctemp2949)
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
int nctemp2982 = (c >= '0');
int nctemp2987 = (c <= '9');
int nctemp2979 = (nctemp2982 && nctemp2987);
if(nctemp2979)
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
int nctemp2999 = (c >= 'a');
int nctemp3004 = (c <= 'z');
int nctemp2996 = (nctemp2999 && nctemp3004);
int nctemp3012 = (c >= 'A');
int nctemp3017 = (c <= 'Z');
int nctemp3009 = (nctemp3012 && nctemp3017);
int nctemp2993 = (nctemp2996 || nctemp3009);
if(nctemp2993)
{
{
return 1;
}
}
else{
{
int nctemp3025 = (c >= '0');
int nctemp3030 = (c <= '9');
int nctemp3022 = (nctemp3025 && nctemp3030);
if(nctemp3022)
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
i =0;
int nctemp3049=i;
if((0>i)||(i>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1353,i,0,s->d[0]-1);
}
char nctemp3052=(char)(' ');
int nctemp3046 = (s->a[nctemp3049] ==nctemp3052);
int nctemp3059=i;
if((0>i)||(i>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1353,i,0,s->d[0]-1);
}
char nctemp3062=(char)(10);
int nctemp3056 = (s->a[nctemp3059] ==nctemp3062);
int nctemp3043 = (nctemp3046 || nctemp3056);
int nctemp3069=i;
if((0>i)||(i>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1354,i,0,s->d[0]-1);
}
char nctemp3072=(char)(9);
int nctemp3066 = (s->a[nctemp3069] ==nctemp3072);
int nctemp3040 = (nctemp3043 || nctemp3066);
int nctemp3075=nctemp3040;
while(nctemp3075)
{{
{
int nctemp3084 = i + 1;
i =nctemp3084;
}
}
int nctemp3094=i;
if((0>i)||(i>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1353,i,0,s->d[0]-1);
}
char nctemp3097=(char)(' ');
int nctemp3091 = (s->a[nctemp3094] ==nctemp3097);
int nctemp3104=i;
if((0>i)||(i>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1353,i,0,s->d[0]-1);
}
char nctemp3107=(char)(10);
int nctemp3101 = (s->a[nctemp3104] ==nctemp3107);
int nctemp3088 = (nctemp3091 || nctemp3101);
int nctemp3114=i;
if((0>i)||(i>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1354,i,0,s->d[0]-1);
}
char nctemp3117=(char)(9);
int nctemp3111 = (s->a[nctemp3114] ==nctemp3117);
int nctemp3085 = (nctemp3088 || nctemp3111);
nctemp3075=nctemp3085;}int nctemp3123=i;
if((0>i)||(i>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1358,i,0,s->d[0]-1);
}
char nctemp3126=(char)('-');
int nctemp3120 = (s->a[nctemp3123] ==nctemp3126);
if(nctemp3120)
{
{
int nctemp3132= -1;
sign =nctemp3132;
int nctemp3141 = i + 1;
i =nctemp3141;
}
}
else{
{
int nctemp3145=i;
if((0>i)||(i>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1361,i,0,s->d[0]-1);
}
char nctemp3148=(char)('+');
int nctemp3142 = (s->a[nctemp3145] ==nctemp3148);
if(nctemp3142)
{
{
sign =1;
int nctemp3163 = i + 1;
i =nctemp3163;
}
}
else{
{
sign =1;
}
}
}
}
n =0;
int nctemp3178=i;
if((0>i)||(i>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1369,i,0,s->d[0]-1);
}
int nctemp3175=(int)(s->a[nctemp3178]);
int nctemp3173= nctemp3175;
int nctemp3180=LibeIsdigit(nctemp3173);
while(nctemp3180){
{
{
int nctemp3195 = 10 * n;
int nctemp3200=i;
if((0>i)||(i>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1370,i,0,s->d[0]-1);
}
int nctemp3197=(int)(s->a[nctemp3200]);
int nctemp3202 = nctemp3195 + nctemp3197;
int nctemp3204 = nctemp3202 - '0';
n =nctemp3204;
}
}
int nctemp3213 = i + 1;
i =nctemp3213;
int nctemp3220=i;
if((0>i)||(i>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1369,i,0,s->d[0]-1);
}
int nctemp3217=(int)(s->a[nctemp3220]);
int nctemp3215= nctemp3217;
int nctemp3222=LibeIsdigit(nctemp3215);
nctemp3180=nctemp3222;
}
int nctemp3227 = sign * n;
return nctemp3227;
}
}
int LibeItoa (int n,nctempchar1 *s)
{
int sign;
int i;
{
nctempchar1 *nctemp3229 =s;
int nctemp3228 =(nctemp3229==0);
if(nctemp3228)
{
{
return 0;
}
}
sign =n;
int nctemp3234 = (sign < 0);
if(nctemp3234)
{
{
int nctemp3245= -n;
n =nctemp3245;
}
}
i =0;
int nctemp3253=0;
if((0>0)||(0>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1400,0,0,s->d[0]-1);
}
int nctemp3261= n;
int nctemp3263= 10;
int nctemp3265=LibeMod(nctemp3261,nctemp3263);
int nctemp3267 = nctemp3265 + 48;
char nctemp3256=(char)(nctemp3267);
s->a[nctemp3253] =nctemp3256;
int nctemp3279 = n / 10;
n =nctemp3279;
int nctemp3268 = (n > 0);
int nctemp3281=nctemp3268;
while(nctemp3281)
{{
{
int nctemp3289 = i + 1;
int nctemp3294=s->d[0];int nctemp3299 = nctemp3294 - 1;
int nctemp3282 = (nctemp3289 > nctemp3299);
if(nctemp3282)
{
{
return 0;
}
}
int nctemp3313 = i + 1;
i =nctemp3313;
int nctemp3304=i;
if((0>i)||(i>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1404,i,0,s->d[0]-1);
}
int nctemp3320= n;
int nctemp3322= 10;
int nctemp3324=LibeMod(nctemp3320,nctemp3322);
int nctemp3326 = nctemp3324 + 48;
char nctemp3315=(char)(nctemp3326);
s->a[nctemp3304] =nctemp3315;
}
}
int nctemp3338 = n / 10;
n =nctemp3338;
int nctemp3327 = (n > 0);
nctemp3281=nctemp3327;}int nctemp3340 = (sign < 0);
if(nctemp3340)
{
{
int nctemp3351 = i + 1;
int nctemp3356=s->d[0];int nctemp3361 = nctemp3356 - 1;
int nctemp3344 = (nctemp3351 > nctemp3361);
if(nctemp3344)
{
{
return 0;
}
}
int nctemp3375 = i + 1;
i =nctemp3375;
int nctemp3366=i;
if((0>i)||(i>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1409,i,0,s->d[0]-1);
}
char nctemp3377=(char)(45);
s->a[nctemp3366] =nctemp3377;
}
}
int nctemp3387 = i + 1;
int nctemp3392=s->d[0];int nctemp3397 = nctemp3392 - 1;
int nctemp3380 = (nctemp3387 > nctemp3397);
if(nctemp3380)
{
{
return 0;
}
}
int nctemp3411 = i + 1;
i =nctemp3411;
int nctemp3402=i;
if((0>i)||(i>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1413,i,0,s->d[0]-1);
}
char nctemp3413=(char)(0);
s->a[nctemp3402] =nctemp3413;
nctempchar1* nctemp3417= s;
int nctemp3420=LibeStrev(nctemp3417);
return 1;
}
}
int LibeItoh (int n,nctempchar1 *s)
{
int i;
int sign;
{
sign =n;
int nctemp3422 = (sign < 0);
if(nctemp3422)
{
{
int nctemp3433= -n;
n =nctemp3433;
}
}
i =0;
int nctemp3441= n;
int nctemp3443= 16;
int nctemp3445=LibeMod(nctemp3441,nctemp3443);
int nctemp3438 = (nctemp3445 <= 9);
if(nctemp3438)
{
{
int nctemp3450=0;
if((0>0)||(0>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1443,0,0,s->d[0]-1);
}
int nctemp3458= n;
int nctemp3460= 16;
int nctemp3462=LibeMod(nctemp3458,nctemp3460);
int nctemp3464 = nctemp3462 + 48;
char nctemp3453=(char)(nctemp3464);
s->a[nctemp3450] =nctemp3453;
}
}
else{
{
int nctemp3468=0;
if((0>0)||(0>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1446,0,0,s->d[0]-1);
}
int nctemp3479= n;
int nctemp3481= 16;
int nctemp3483=LibeMod(nctemp3479,nctemp3481);
int nctemp3485 = nctemp3483 + 'a';
int nctemp3487 = nctemp3485 - 10;
char nctemp3471=(char)(nctemp3487);
s->a[nctemp3468] =nctemp3471;
}
}
int nctemp3499 = n / 16;
n =nctemp3499;
int nctemp3488 = (n > 0);
int nctemp3501=nctemp3488;
while(nctemp3501)
{{
{
int nctemp3505= n;
int nctemp3507= 16;
int nctemp3509=LibeMod(nctemp3505,nctemp3507);
int nctemp3502 = (nctemp3509 <= 9);
if(nctemp3502)
{
{
int nctemp3523 = i + 1;
i =nctemp3523;
int nctemp3514=i;
if((0>i)||(i>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1450,i,0,s->d[0]-1);
}
int nctemp3530= n;
int nctemp3532= 16;
int nctemp3534=LibeMod(nctemp3530,nctemp3532);
int nctemp3536 = nctemp3534 + 48;
char nctemp3525=(char)(nctemp3536);
s->a[nctemp3514] =nctemp3525;
}
}
else{
{
int nctemp3549 = i + 1;
i =nctemp3549;
int nctemp3540=i;
if((0>i)||(i>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1453,i,0,s->d[0]-1);
}
int nctemp3559= n;
int nctemp3561= 16;
int nctemp3563=LibeMod(nctemp3559,nctemp3561);
int nctemp3565 = nctemp3563 + 'a';
int nctemp3567 = nctemp3565 - 10;
char nctemp3551=(char)(nctemp3567);
s->a[nctemp3540] =nctemp3551;
}
}
}
}
int nctemp3579 = n / 16;
n =nctemp3579;
int nctemp3568 = (n > 0);
nctemp3501=nctemp3568;}int nctemp3581 = (sign < 0);
if(nctemp3581)
{
{
int nctemp3597 = i + 1;
i =nctemp3597;
int nctemp3588=i;
if((0>i)||(i>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1456,i,0,s->d[0]-1);
}
char nctemp3599=(char)(45);
s->a[nctemp3588] =nctemp3599;
}
}
int nctemp3614 = i + 1;
i =nctemp3614;
int nctemp3605=i;
if((0>i)||(i>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1458,i,0,s->d[0]-1);
}
char nctemp3616=(char)(0);
s->a[nctemp3605] =nctemp3616;
nctempchar1* nctemp3620= s;
int nctemp3623=LibeStrev(nctemp3620);
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
sign =1;
val =0.0;
power =1.0;
exponent =0;
esign =1;
i =0;
int nctemp3652=i;
if((0>i)||(i>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1484,i,0,s->d[0]-1);
}
char nctemp3655=(char)(' ');
int nctemp3649 = (s->a[nctemp3652] ==nctemp3655);
int nctemp3658=nctemp3649;
while(nctemp3658)
{{
{
int nctemp3667 = i + 1;
i =nctemp3667;
}
}
int nctemp3671=i;
if((0>i)||(i>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1484,i,0,s->d[0]-1);
}
char nctemp3674=(char)(' ');
int nctemp3668 = (s->a[nctemp3671] ==nctemp3674);
nctemp3658=nctemp3668;}int nctemp3683=i;
if((0>i)||(i>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1486,i,0,s->d[0]-1);
}
char nctemp3686=(char)('+');
int nctemp3680 = (s->a[nctemp3683] ==nctemp3686);
int nctemp3693=i;
if((0>i)||(i>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1486,i,0,s->d[0]-1);
}
char nctemp3696=(char)('-');
int nctemp3690 = (s->a[nctemp3693] ==nctemp3696);
int nctemp3677 = (nctemp3680 || nctemp3690);
if(nctemp3677)
{
{
int nctemp3702=i;
if((0>i)||(i>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1487,i,0,s->d[0]-1);
}
char nctemp3705=(char)('-');
int nctemp3699 = (s->a[nctemp3702] ==nctemp3705);
if(nctemp3699)
{
{
int nctemp3711= -1;
sign =nctemp3711;
}
}
int nctemp3720 = i + 1;
i =nctemp3720;
}
}
int nctemp3727=i;
if((0>i)||(i>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1491,i,0,s->d[0]-1);
}
int nctemp3724=(int)(s->a[nctemp3727]);
int nctemp3722= nctemp3724;
int nctemp3729=LibeIsdigit(nctemp3722);
int nctemp3730=nctemp3729;
while(nctemp3730)
{{
{
float nctemp3742 = 10.0 * val;
int nctemp3752=i;
if((0>i)||(i>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1492,i,0,s->d[0]-1);
}
int nctemp3749=(int)(s->a[nctemp3752]);
int nctemp3755 = nctemp3749 - '0';
float nctemp3744=(float)(nctemp3755);
float nctemp3756 = nctemp3742 + nctemp3744;
val =nctemp3756;
int nctemp3765 = i + 1;
i =nctemp3765;
}
}
int nctemp3772=i;
if((0>i)||(i>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1491,i,0,s->d[0]-1);
}
int nctemp3769=(int)(s->a[nctemp3772]);
int nctemp3767= nctemp3769;
int nctemp3774=LibeIsdigit(nctemp3767);
nctemp3730=nctemp3774;}int nctemp3778=i;
if((0>i)||(i>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1495,i,0,s->d[0]-1);
}
char nctemp3781=(char)('.');
int nctemp3775 = (s->a[nctemp3778] ==nctemp3781);
if(nctemp3775)
{
{
int nctemp3792 = i + 1;
i =nctemp3792;
int nctemp3799=i;
if((0>i)||(i>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1497,i,0,s->d[0]-1);
}
int nctemp3796=(int)(s->a[nctemp3799]);
int nctemp3794= nctemp3796;
int nctemp3801=LibeIsdigit(nctemp3794);
int nctemp3802=nctemp3801;
while(nctemp3802)
{{
{
float nctemp3814 = 10.0 * val;
int nctemp3824=i;
if((0>i)||(i>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1498,i,0,s->d[0]-1);
}
int nctemp3821=(int)(s->a[nctemp3824]);
int nctemp3827 = nctemp3821 - '0';
float nctemp3816=(float)(nctemp3827);
float nctemp3828 = nctemp3814 + nctemp3816;
val =nctemp3828;
int nctemp3837 = i + 1;
i =nctemp3837;
float nctemp3846 = 10.0 * power;
power =nctemp3846;
}
}
int nctemp3853=i;
if((0>i)||(i>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1497,i,0,s->d[0]-1);
}
int nctemp3850=(int)(s->a[nctemp3853]);
int nctemp3848= nctemp3850;
int nctemp3855=LibeIsdigit(nctemp3848);
nctemp3802=nctemp3855;}}
}
int nctemp3862=i;
if((0>i)||(i>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1502,i,0,s->d[0]-1);
}
char nctemp3865=(char)('e');
int nctemp3859 = (s->a[nctemp3862] ==nctemp3865);
int nctemp3872=i;
if((0>i)||(i>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1502,i,0,s->d[0]-1);
}
char nctemp3875=(char)('E');
int nctemp3869 = (s->a[nctemp3872] ==nctemp3875);
int nctemp3856 = (nctemp3859 || nctemp3869);
if(nctemp3856)
{
{
int nctemp3886 = i + 1;
i =nctemp3886;
int nctemp3893=i;
if((0>i)||(i>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1504,i,0,s->d[0]-1);
}
char nctemp3896=(char)('+');
int nctemp3890 = (s->a[nctemp3893] ==nctemp3896);
int nctemp3903=i;
if((0>i)||(i>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1504,i,0,s->d[0]-1);
}
char nctemp3906=(char)('-');
int nctemp3900 = (s->a[nctemp3903] ==nctemp3906);
int nctemp3887 = (nctemp3890 || nctemp3900);
if(nctemp3887)
{
{
int nctemp3912=i;
if((0>i)||(i>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1505,i,0,s->d[0]-1);
}
char nctemp3915=(char)('-');
int nctemp3909 = (s->a[nctemp3912] ==nctemp3915);
if(nctemp3909)
{
{
int nctemp3921= -1;
esign =nctemp3921;
}
}
int nctemp3930 = i + 1;
i =nctemp3930;
}
}
int nctemp3937=i;
if((0>i)||(i>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1509,i,0,s->d[0]-1);
}
int nctemp3934=(int)(s->a[nctemp3937]);
int nctemp3932= nctemp3934;
int nctemp3939=LibeIsdigit(nctemp3932);
int nctemp3940=nctemp3939;
while(nctemp3940)
{{
{
int nctemp3955 = 10 * exponent;
int nctemp3960=i;
if((0>i)||(i>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1510,i,0,s->d[0]-1);
}
int nctemp3957=(int)(s->a[nctemp3960]);
int nctemp3962 = nctemp3955 + nctemp3957;
int nctemp3964 = nctemp3962 - '0';
exponent =nctemp3964;
int nctemp3973 = i + 1;
i =nctemp3973;
}
}
int nctemp3980=i;
if((0>i)||(i>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1509,i,0,s->d[0]-1);
}
int nctemp3977=(int)(s->a[nctemp3980]);
int nctemp3975= nctemp3977;
int nctemp3982=LibeIsdigit(nctemp3975);
nctemp3940=nctemp3982;}}
}
float nctemp3991=(float)(sign);
float nctemp3995 = nctemp3991 * val;
float nctemp3997=(float)(power);
float nctemp4000 = nctemp3995 / nctemp3997;
float nctemp3984= nctemp4000;
int nctemp4006 = esign * exponent;
int nctemp4001= nctemp4006;
float nctemp4007=LibeFscale(nctemp3984,nctemp4001);
return nctemp4007;
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
int nctemp4008 = (mant < 0);
if(nctemp4008)
{
{
int nctemp4015= -1;
sign =nctemp4015;
int nctemp4019= -mant;
mant =nctemp4019;
}
}
else{
{
sign =1;
}
}
int nctemp4027=s->d[0];int nctemp4036 = nfield + 1;
int nctemp4024 = (nctemp4027 < nctemp4036);
if(nctemp4024)
{
{
return 0;
}
}
int nctemp4052 = nexp + 1;
int nctemp4054 = nctemp4052 + 1;
int nctemp4056 = nctemp4054 + nfrac;
l =nctemp4056;
int nctemp4057 = (sign < 0);
if(nctemp4057)
{
{
int nctemp4069 = l + 1;
l =nctemp4069;
}
}
int nctemp4070 = (nfield < l);
if(nctemp4070)
{
{
for(i = 0;i < nfield;i = (i + 1)){
{
int nctemp4077=i;
if((0>i)||(i>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1550,i,0,s->d[0]-1);
}
char nctemp4080=(char)('*');
s->a[nctemp4077] =nctemp4080;
}
}
int nctemp4086=nfield;
if((0>nfield)||(nfield>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1551,nfield,0,s->d[0]-1);
}
char nctemp4089=(char)(0);
s->a[nctemp4086] =nctemp4089;
return 0;
}
}
else{
{
int nctemp4101 = nfield - l;
tp =nctemp4101;
}
}
int nctemp4113 = 6 + 1;
int nctemp4108=nctemp4113;
nctempchar1 *nctemp4107;
nctemp4107=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp4118 = 6 + 1;
nctemp4107->d[0]=nctemp4118;
nctemp4107->a=(char *)RunMalloc(sizeof(char)*nctemp4108);
t=nctemp4107;
int nctemp4120= mant;
nctempchar1* nctemp4122= t;
int nctemp4125=LibeItoa(nctemp4120,nctemp4122);
for(i = 0;i < tp;i = (i + 1)){
{
int nctemp4129=i;
if((0>i)||(i>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1560,i,0,s->d[0]-1);
}
char nctemp4132=(char)(' ');
s->a[nctemp4129] =nctemp4132;
}
}
int nctemp4135 = (nexp >= 0);
if(nctemp4135)
{
{
int nctemp4142= -1;
int nctemp4139 = (sign ==nctemp4142);
if(nctemp4139)
{
{
int nctemp4146=tp;
if((0>tp)||(tp>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1564,tp,0,s->d[0]-1);
}
char nctemp4149=(char)('-');
s->a[nctemp4146] =nctemp4149;
int nctemp4160 = tp + 1;
tp =nctemp4160;
}
}
for(i = 0;i <= nexp;i = (i + 1)){
{
int nctemp4169 = i + tp;
int nctemp4164=nctemp4169;
if((0>nctemp4169)||(nctemp4169>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1568,nctemp4169,0,s->d[0]-1);
}
int nctemp4171=i;
if((0>i)||(i>=t->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e t %d %d %d %d \n " ,1568,i,0,t->d[0]-1);
}
s->a[nctemp4164] =t->a[nctemp4171];
}
}
int nctemp4173 = (nfrac > 0);
if(nctemp4173)
{
{
int nctemp4188 = tp + nexp;
int nctemp4190 = nctemp4188 + 1;
int nctemp4180=nctemp4190;
if((0>nctemp4190)||(nctemp4190>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1571,nctemp4190,0,s->d[0]-1);
}
char nctemp4192=(char)('.');
s->a[nctemp4180] =nctemp4192;
}
}
for(i = 0;i < nfrac;i = (i + 1)){
{
int nctemp4195 = (mant ==0);
if(nctemp4195)
{
{
int nctemp4216 = tp + nexp;
int nctemp4218 = nctemp4216 + 1;
int nctemp4220 = nctemp4218 + 1;
int nctemp4222 = nctemp4220 + i;
int nctemp4202=nctemp4222;
if((0>nctemp4222)||(nctemp4222>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1575,nctemp4222,0,s->d[0]-1);
}
char nctemp4224=(char)('0');
s->a[nctemp4202] =nctemp4224;
}
}
else{
{
int nctemp4244 = tp + nexp;
int nctemp4246 = nctemp4244 + 1;
int nctemp4248 = nctemp4246 + 1;
int nctemp4250 = nctemp4248 + i;
int nctemp4230=nctemp4250;
if((0>nctemp4250)||(nctemp4250>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1577,nctemp4250,0,s->d[0]-1);
}
int nctemp4260 = nexp + 1;
int nctemp4262 = nctemp4260 + i;
int nctemp4252=nctemp4262;
if((0>nctemp4262)||(nctemp4262>=t->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e t %d %d %d %d \n " ,1577,nctemp4262,0,t->d[0]-1);
}
s->a[nctemp4230] =t->a[nctemp4252];
}
}
}
}
int nctemp4263 = (nfrac > 0);
if(nctemp4263)
{
{
int nctemp4284 = tp + nexp;
int nctemp4286 = nctemp4284 + 1;
int nctemp4288 = nctemp4286 + 1;
int nctemp4290 = nctemp4288 + nfrac;
int nctemp4270=nctemp4290;
if((0>nctemp4290)||(nctemp4290>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1580,nctemp4290,0,s->d[0]-1);
}
char nctemp4292=(char)(0);
s->a[nctemp4270] =nctemp4292;
}
}
else{
{
int nctemp4306 = tp + nexp;
int nctemp4308 = nctemp4306 + 1;
int nctemp4298=nctemp4308;
if((0>nctemp4308)||(nctemp4308>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1582,nctemp4308,0,s->d[0]-1);
}
char nctemp4310=(char)(0);
s->a[nctemp4298] =nctemp4310;
}
}
}
}
else{
{
int nctemp4316= -nexp;
nexp =nctemp4316;
int nctemp4320= -1;
int nctemp4317 = (sign ==nctemp4320);
if(nctemp4317)
{
{
int nctemp4324=tp;
if((0>tp)||(tp>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1587,tp,0,s->d[0]-1);
}
char nctemp4327=(char)('-');
s->a[nctemp4324] =nctemp4327;
int nctemp4338 = tp + 1;
tp =nctemp4338;
}
}
int nctemp4342=tp;
if((0>tp)||(tp>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1589,tp,0,s->d[0]-1);
}
char nctemp4345=(char)('0');
s->a[nctemp4342] =nctemp4345;
int nctemp4356 = tp + 1;
int nctemp4351=nctemp4356;
if((0>nctemp4356)||(nctemp4356>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1590,nctemp4356,0,s->d[0]-1);
}
char nctemp4358=(char)('.');
s->a[nctemp4351] =nctemp4358;
for(i = 0;i < (nexp - 1);i = (i + 1)){
{
int nctemp4372 = i + tp;
int nctemp4374 = nctemp4372 + 2;
int nctemp4364=nctemp4374;
if((0>nctemp4374)||(nctemp4374>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1592,nctemp4374,0,s->d[0]-1);
}
char nctemp4376=(char)('0');
s->a[nctemp4364] =nctemp4376;
}
}
for(i = 0;i < ((nfrac - nexp) + 1);i = (i + 1)){
{
int nctemp4396 = tp + 2;
int nctemp4398 = nctemp4396 + i;
int nctemp4400 = nctemp4398 + nexp;
int nctemp4402 = nctemp4400 - 1;
int nctemp4382=nctemp4402;
if((0>nctemp4402)||(nctemp4402>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1594,nctemp4402,0,s->d[0]-1);
}
int nctemp4404=i;
if((0>i)||(i>=t->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e t %d %d %d %d \n " ,1594,i,0,t->d[0]-1);
}
s->a[nctemp4382] =t->a[nctemp4404];
}
}
int nctemp4417 = tp + 2;
int nctemp4419 = nctemp4417 + nfrac;
int nctemp4409=nctemp4419;
if((0>nctemp4419)||(nctemp4419>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1595,nctemp4419,0,s->d[0]-1);
}
char nctemp4421=(char)(0);
s->a[nctemp4409] =nctemp4421;
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
int nctemp4425 = (mant < 0);
if(nctemp4425)
{
{
int nctemp4432= -mant;
mant =nctemp4432;
int nctemp4436= -1;
sign =nctemp4436;
}
}
else{
{
sign =1;
}
}
int nctemp4444=s->d[0];int nctemp4471 = 1 + 1;
int nctemp4473 = nctemp4471 + 1;
int nctemp4475 = nctemp4473 + nfrac;
int nctemp4477 = nctemp4475 + 1;
int nctemp4479 = nctemp4477 + 1;
int nctemp4481 = nctemp4479 + 2;
int nctemp4483 = nctemp4481 + 1;
int nctemp4441 = (nctemp4444 < nctemp4483);
if(nctemp4441)
{
{
return 0;
}
}
int nctemp4493=s->d[0];int nctemp4491=nctemp4493;
nctempchar1 *nctemp4490;
nctemp4490=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp4498=s->d[0];nctemp4490->d[0]=nctemp4498;
nctemp4490->a=(char *)RunMalloc(sizeof(char)*nctemp4491);
t=nctemp4490;
int nctemp4525 = 1 + 1;
int nctemp4527 = nctemp4525 + nfrac;
int nctemp4529 = nctemp4527 + 1;
int nctemp4531 = nctemp4529 + 1;
int nctemp4533 = nctemp4531 + 2;
int nctemp4535 = nctemp4533 + 1;
l =nctemp4535;
int nctemp4536 = (sign < 0);
if(nctemp4536)
{
{
int nctemp4548 = l + 1;
l =nctemp4548;
}
}
int nctemp4549 = (nfield < l);
if(nctemp4549)
{
{
for(i = 0;i < nfield;i = (i + 1)){
{
int nctemp4556=i;
if((0>i)||(i>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1643,i,0,s->d[0]-1);
}
char nctemp4559=(char)('*');
s->a[nctemp4556] =nctemp4559;
}
}
int nctemp4565=nfield;
if((0>nfield)||(nfield>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1645,nfield,0,s->d[0]-1);
}
char nctemp4568=(char)(0);
s->a[nctemp4565] =nctemp4568;
return 0;
}
}
else{
{
int nctemp4580 = nfield - l;
tp =nctemp4580;
}
}
for(i = 0;i < tp;i = (i + 1)){
{
int nctemp4584=i;
if((0>i)||(i>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1651,i,0,s->d[0]-1);
}
char nctemp4587=(char)(' ');
s->a[nctemp4584] =nctemp4587;
}
}
int nctemp4591= mant;
nctempchar1* nctemp4593= t;
int nctemp4596=LibeItoa(nctemp4591,nctemp4593);
int nctemp4597 = (sign < 0);
if(nctemp4597)
{
{
int nctemp4604=tp;
if((0>tp)||(tp>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1656,tp,0,s->d[0]-1);
}
char nctemp4607=(char)('-');
s->a[nctemp4604] =nctemp4607;
int nctemp4618 = tp + 1;
tp =nctemp4618;
}
}
int nctemp4622=tp;
if((0>tp)||(tp>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1659,tp,0,s->d[0]-1);
}
int nctemp4625=0;
if((0>0)||(0>=t->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e t %d %d %d %d \n " ,1659,0,0,t->d[0]-1);
}
s->a[nctemp4622] =t->a[nctemp4625];
int nctemp4635 = tp + 1;
int nctemp4630=nctemp4635;
if((0>nctemp4635)||(nctemp4635>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1660,nctemp4635,0,s->d[0]-1);
}
char nctemp4637=(char)('.');
s->a[nctemp4630] =nctemp4637;
for(i = 0;i < nfrac;i = (i + 1)){
{
int nctemp4651 = tp + 2;
int nctemp4653 = nctemp4651 + i;
int nctemp4643=nctemp4653;
if((0>nctemp4653)||(nctemp4653>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1663,nctemp4653,0,s->d[0]-1);
}
int nctemp4660 = i + 1;
int nctemp4655=nctemp4660;
if((0>nctemp4660)||(nctemp4660>=t->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e t %d %d %d %d \n " ,1663,nctemp4660,0,t->d[0]-1);
}
s->a[nctemp4643] =t->a[nctemp4655];
}
}
int nctemp4672 = tp + 2;
int nctemp4674 = nctemp4672 + nfrac;
int nctemp4664=nctemp4674;
if((0>nctemp4674)||(nctemp4674>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1665,nctemp4674,0,s->d[0]-1);
}
char nctemp4676=(char)(0);
s->a[nctemp4664] =nctemp4676;
sign =1;
int nctemp4683 = (nexp < 0);
if(nctemp4683)
{
{
int nctemp4690= -1;
sign =nctemp4690;
int nctemp4694= -nexp;
nexp =nctemp4694;
}
}
struct nctempchar1 *nctemp4698;
static struct nctempchar1 nctemp4699 = {{ 2}, (char*)"e\0"};
nctemp4698=&nctemp4699;
nctempchar1* nctemp4696= nctemp4698;
nctempchar1* nctemp4700= s;
int nctemp4703=LibeStrcat(nctemp4696,nctemp4700);
int nctemp4704 = (sign > 0);
if(nctemp4704)
{
{
struct nctempchar1 *nctemp4711;
static struct nctempchar1 nctemp4712 = {{ 2}, (char*)"+\0"};
nctemp4711=&nctemp4712;
nctempchar1* nctemp4709= nctemp4711;
nctempchar1* nctemp4713= s;
int nctemp4716=LibeStrcat(nctemp4709,nctemp4713);
}
}
else{
{
struct nctempchar1 *nctemp4720;
static struct nctempchar1 nctemp4721 = {{ 2}, (char*)"-\0"};
nctemp4720=&nctemp4721;
nctempchar1* nctemp4718= nctemp4720;
nctempchar1* nctemp4722= s;
int nctemp4725=LibeStrcat(nctemp4718,nctemp4722);
}
}
int nctemp4727= nexp;
nctempchar1* nctemp4729= t;
int nctemp4732=LibeItoa(nctemp4727,nctemp4729);
nctempchar1* nctemp4736= t;
int nctemp4739=LibeStrlen(nctemp4736);
int nctemp4733 = (nctemp4739 ==1);
if(nctemp4733)
{
{
struct nctempchar1 *nctemp4744;
static struct nctempchar1 nctemp4745 = {{ 2}, (char*)"0\0"};
nctemp4744=&nctemp4745;
nctempchar1* nctemp4742= nctemp4744;
nctempchar1* nctemp4746= s;
int nctemp4749=LibeStrcat(nctemp4742,nctemp4746);
}
}
nctempchar1* nctemp4751= t;
nctempchar1* nctemp4754= s;
int nctemp4757=LibeStrcat(nctemp4751,nctemp4754);
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
int nctemp4762 = (f !=f);
if(nctemp4762)
{
{
int nctemp4769=0;
if((0>0)||(0>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1728,0,0,s->d[0]-1);
}
char nctemp4772=(char)('N');
s->a[nctemp4769] =nctemp4772;
int nctemp4778=1;
if((0>1)||(1>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1729,1,0,s->d[0]-1);
}
char nctemp4781=(char)('a');
s->a[nctemp4778] =nctemp4781;
int nctemp4787=2;
if((0>2)||(2>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1730,2,0,s->d[0]-1);
}
char nctemp4790=(char)('N');
s->a[nctemp4787] =nctemp4790;
int nctemp4796=3;
if((0>3)||(3>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1731,3,0,s->d[0]-1);
}
char nctemp4799=(char)(0);
s->a[nctemp4796] =nctemp4799;
return 1;
}
}
int nctemp4806=s->d[0];int nctemp4811=fmt->d[0];int nctemp4803 = (nctemp4806 < nctemp4811);
if(nctemp4803)
{
{
return 0;
}
}
int nctemp4823=fmt->d[0];int nctemp4828 = nctemp4823 - 2;
l =nctemp4828;
p =0;
q =0;
int nctemp4844=p;
if((0>p)||(p>=fmt->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e fmt %d %d %d %d \n " ,1742,p,0,fmt->d[0]-1);
}
int nctemp4841=(int)(fmt->a[nctemp4844]);
c =nctemp4841;
int nctemp4846 = (c =='g');
if(nctemp4846)
{
{
mode ='g';
}
}
else{
{
int nctemp4857= c;
int nctemp4859=LibeIsdigit(nctemp4857);
int nctemp4854 = (nctemp4859 ==1);
if(nctemp4854)
{
{
int nctemp4864= c;
int nctemp4866=LibeIsdigit(nctemp4864);
int nctemp4861 = (nctemp4866 ==1);
int nctemp4868=nctemp4861;
while(nctemp4868)
{{
{
int nctemp4872=q;
if((0>q)||(q>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1749,q,0,s->d[0]-1);
}
int nctemp4875=p;
if((0>p)||(p>=fmt->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e fmt %d %d %d %d \n " ,1749,p,0,fmt->d[0]-1);
}
s->a[nctemp4872] =fmt->a[nctemp4875];
int nctemp4888 = p + 1;
p =nctemp4888;
int nctemp4877 = (p > l);
if(nctemp4877)
{
{
return 0;
}
}
int nctemp4899 = q + 1;
q =nctemp4899;
int nctemp4907=p;
if((0>p)||(p>=fmt->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e fmt %d %d %d %d \n " ,1753,p,0,fmt->d[0]-1);
}
int nctemp4904=(int)(fmt->a[nctemp4907]);
c =nctemp4904;
}
}
int nctemp4912= c;
int nctemp4914=LibeIsdigit(nctemp4912);
int nctemp4909 = (nctemp4914 ==1);
nctemp4868=nctemp4909;}int nctemp4919=q;
if((0>q)||(q>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1754,q,0,s->d[0]-1);
}
char nctemp4922=(char)(0);
s->a[nctemp4919] =nctemp4922;
nctempchar1* nctemp4929= s;
int nctemp4932=LibeAtoi(nctemp4929);
nfield =nctemp4932;
}
}
else{
{
return 0;
}
}
int nctemp4934 = (c !='.');
if(nctemp4934)
{
{
return 0;
}
}
int nctemp4950 = p + 1;
p =nctemp4950;
int nctemp4939 = (p > l);
if(nctemp4939)
{
{
return 0;
}
}
int nctemp4960=p;
if((0>p)||(p>=fmt->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e fmt %d %d %d %d \n " ,1764,p,0,fmt->d[0]-1);
}
int nctemp4957=(int)(fmt->a[nctemp4960]);
c =nctemp4957;
q =0;
int nctemp4969= c;
int nctemp4971=LibeIsdigit(nctemp4969);
int nctemp4966 = (nctemp4971 ==1);
if(nctemp4966)
{
{
int nctemp4976= c;
int nctemp4978=LibeIsdigit(nctemp4976);
int nctemp4973 = (nctemp4978 ==1);
int nctemp4980=nctemp4973;
while(nctemp4980)
{{
{
int nctemp4984=q;
if((0>q)||(q>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1769,q,0,s->d[0]-1);
}
int nctemp4987=p;
if((0>p)||(p>=fmt->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e fmt %d %d %d %d \n " ,1769,p,0,fmt->d[0]-1);
}
s->a[nctemp4984] =fmt->a[nctemp4987];
int nctemp5000 = p + 1;
p =nctemp5000;
int nctemp4989 = (p > l);
if(nctemp4989)
{
{
return 0;
}
}
int nctemp5011 = q + 1;
q =nctemp5011;
int nctemp5019=p;
if((0>p)||(p>=fmt->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e fmt %d %d %d %d \n " ,1773,p,0,fmt->d[0]-1);
}
int nctemp5016=(int)(fmt->a[nctemp5019]);
c =nctemp5016;
}
}
int nctemp5024= c;
int nctemp5026=LibeIsdigit(nctemp5024);
int nctemp5021 = (nctemp5026 ==1);
nctemp4980=nctemp5021;}int nctemp5031=q;
if((0>q)||(q>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,1774,q,0,s->d[0]-1);
}
char nctemp5034=(char)(0);
s->a[nctemp5031] =nctemp5034;
nctempchar1* nctemp5041= s;
int nctemp5044=LibeAtoi(nctemp5041);
nfrac =nctemp5044;
}
}
else{
{
return 0;
}
}
int nctemp5046 = (c =='f');
if(nctemp5046)
{
{
mode ='f';
}
}
else{
{
int nctemp5054 = (c =='e');
if(nctemp5054)
{
{
mode ='e';
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
int nctemp5063 = (mode =='g');
if(nctemp5063)
{
{
float nctemp5071= f;
int nctemp5073=LibeGetmaxdig(nctemp5071);
nfrac =nctemp5073;
int nctemp5100 = 1 + 1;
int nctemp5102 = nctemp5100 + 1;
int nctemp5104 = nctemp5102 + 1;
int nctemp5106 = nctemp5104 + nfrac;
int nctemp5108 = nctemp5106 + 1;
int nctemp5110 = nctemp5108 + 1;
int nctemp5112 = nctemp5110 + 2;
nfield =nctemp5112;
int nctemp5121 = nfrac + 1;
ndigit =nctemp5121;
float nctemp5126= f;
int nctemp5128= ndigit;
int nctemp5130=LibeGetfman(nctemp5126,nctemp5128);
mant =nctemp5130;
float nctemp5135= f;
int nctemp5137=LibeGetfexp(nctemp5135);
nexp =nctemp5137;
int nctemp5139= mant;
int nctemp5141= nexp;
int nctemp5143= nfield;
int nctemp5145= nfrac;
nctempchar1* nctemp5147= s;
int nctemp5150=LibeFtoae(nctemp5139,nctemp5141,nctemp5143,nctemp5145,nctemp5147);
}
}
else{
{
int nctemp5151 = (mode =='e');
if(nctemp5151)
{
{
int nctemp5163 = nfrac + 1;
ndigit =nctemp5163;
float nctemp5168= f;
int nctemp5170= ndigit;
int nctemp5172=LibeGetfman(nctemp5168,nctemp5170);
mant =nctemp5172;
float nctemp5177= f;
int nctemp5179=LibeGetfexp(nctemp5177);
nexp =nctemp5179;
int nctemp5181= mant;
int nctemp5183= nexp;
int nctemp5185= nfield;
int nctemp5187= nfrac;
nctempchar1* nctemp5189= s;
int nctemp5192=LibeFtoae(nctemp5181,nctemp5183,nctemp5185,nctemp5187,nctemp5189);
}
}
else{
{
int nctemp5193 = (mode =='f');
if(nctemp5193)
{
{
float nctemp5201= f;
int nctemp5203=LibeGetfexp(nctemp5201);
nexp =nctemp5203;
int nctemp5215 = nexp + nfrac;
int nctemp5217 = nctemp5215 + 1;
ndigit =nctemp5217;
float nctemp5222= f;
int nctemp5224= ndigit;
int nctemp5226=LibeGetfman(nctemp5222,nctemp5224);
mant =nctemp5226;
int nctemp5228= mant;
int nctemp5230= nexp;
int nctemp5232= nfield;
int nctemp5234= nfrac;
nctempchar1* nctemp5236= s;
int nctemp5239=LibeFtoaf(nctemp5228,nctemp5230,nctemp5232,nctemp5234,nctemp5236);
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
int nctemp5247=40;
struct nctempLibeFdescr1 *nctemp5246;
nctemp5246=(struct nctempLibeFdescr1*)RunMalloc(sizeof(struct nctempLibeFdescr1));
nctemp5246->d[0]=40;
nctemp5246->a=(struct LibeFdescr*)RunMalloc(sizeof(struct LibeFdescr)*nctemp5247);
LibeFarr=nctemp5246;
nctempLibeFdescr1 *nctemp5251 =LibeFarr;
int nctemp5250 =(nctemp5251==0);
if(nctemp5250)
{
{
LibeErrno =-100;
return 0;
}
}
for(i = 0;i < 40;i = (i + 1)){
{
int nctemp5263=i;
if((0>i)||(i>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,1902,i,0,LibeFarr->d[0]-1);
}
LibeFarr->a[nctemp5263].cnt =0;
int nctemp5269=i;
if((0>i)||(i>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,1903,i,0,LibeFarr->d[0]-1);
}
LibeFarr->a[nctemp5269].ptr =0;
int nctemp5275=i;
if((0>i)||(i>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,1904,i,0,LibeFarr->d[0]-1);
}
LibeFarr->a[nctemp5275].bufsize =0;
int nctemp5281=i;
if((0>i)||(i>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,1905,i,0,LibeFarr->d[0]-1);
}
LibeFarr->a[nctemp5281].base=(0);
int nctemp5288=i;
if((0>i)||(i>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,1906,i,0,LibeFarr->d[0]-1);
}
LibeFarr->a[nctemp5288].readflg =0;
int nctemp5294=i;
if((0>i)||(i>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,1907,i,0,LibeFarr->d[0]-1);
}
LibeFarr->a[nctemp5294].writflg =0;
int nctemp5300=i;
if((0>i)||(i>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,1908,i,0,LibeFarr->d[0]-1);
}
LibeFarr->a[nctemp5300].unbflg =0;
int nctemp5306=i;
if((0>i)||(i>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,1909,i,0,LibeFarr->d[0]-1);
}
LibeFarr->a[nctemp5306].errflg =1;
int nctemp5312=i;
if((0>i)||(i>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,1910,i,0,LibeFarr->d[0]-1);
}
LibeFarr->a[nctemp5312].eoflg =0;
int nctemp5318=i;
if((0>i)||(i>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,1911,i,0,LibeFarr->d[0]-1);
}
LibeFarr->a[nctemp5318].fd =0;
}
}
int nctemp5324=0;
if((0>0)||(0>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,1915,0,0,LibeFarr->d[0]-1);
}
int nctemp5326= -1;
LibeFarr->a[nctemp5324].fd =nctemp5326;
int nctemp5330=0;
if((0>0)||(0>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,1916,0,0,LibeFarr->d[0]-1);
}
LibeFarr->a[nctemp5330].readflg =1;
int nctemp5336=1;
if((0>1)||(1>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,1917,1,0,LibeFarr->d[0]-1);
}
int nctemp5338= -1;
LibeFarr->a[nctemp5336].fd =nctemp5338;
int nctemp5342=1;
if((0>1)||(1>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,1918,1,0,LibeFarr->d[0]-1);
}
LibeFarr->a[nctemp5342].readflg =1;
int nctemp5348=2;
if((0>2)||(2>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,1923,2,0,LibeFarr->d[0]-1);
}
LibeFarr->a[nctemp5348].fd =0;
int nctemp5354=2;
if((0>2)||(2>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,1924,2,0,LibeFarr->d[0]-1);
}
LibeFarr->a[nctemp5354].readflg =1;
int nctemp5360=3;
if((0>3)||(3>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,1925,3,0,LibeFarr->d[0]-1);
}
LibeFarr->a[nctemp5360].fd =1;
int nctemp5366=3;
if((0>3)||(3>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,1926,3,0,LibeFarr->d[0]-1);
}
LibeFarr->a[nctemp5366].writflg =1;
int nctemp5372=4;
if((0>4)||(4>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,1927,4,0,LibeFarr->d[0]-1);
}
LibeFarr->a[nctemp5372].fd =2;
int nctemp5378=4;
if((0>4)||(4>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,1928,4,0,LibeFarr->d[0]-1);
}
LibeFarr->a[nctemp5378].writflg =1;
int nctemp5387=64;
nctempchar1 *nctemp5386;
nctemp5386=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp5386->d[0]=64;
nctemp5386->a=(char *)RunMalloc(sizeof(char)*nctemp5387);
LibeTmpstr=nctemp5386;
nctempchar1 *nctemp5391 =LibeTmpstr;
int nctemp5390 =(nctemp5391==0);
if(nctemp5390)
{
{
LibeErrno =-100;
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
int nctemp5404=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,1961,fp,0,LibeFarr->d[0]-1);
}
int nctemp5401 = (LibeFarr->a[nctemp5404].writflg !=1);
if(nctemp5401)
{
{
struct nctempchar1 *nctemp5412;
static struct nctempchar1 nctemp5413 = {{ 28}, (char*)"file not open for writing\n\0"};
nctemp5412=&nctemp5413;
LibeErrstr=nctemp5412;
LibeErrno =-110;
return 0;
}
}
int nctemp5422=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,1966,fp,0,LibeFarr->d[0]-1);
}
int nctemp5419 = (LibeFarr->a[nctemp5422].unbflg ==1);
if(nctemp5419)
{
{
int nctemp5428=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,1967,fp,0,LibeFarr->d[0]-1);
}
LibeFarr->a[nctemp5428].bufsize =1;
}
}
else{
{
int nctemp5434=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,1969,fp,0,LibeFarr->d[0]-1);
}
LibeFarr->a[nctemp5434].bufsize =1024;
}
}
int nctemp5440=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,1971,fp,0,LibeFarr->d[0]-1);
}
nctempchar1 *nctemp5438 =LibeFarr->a[nctemp5440].base;
int nctemp5437 =(nctemp5438==0);
if(nctemp5437)
{
{
int nctemp5448=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,1972,fp,0,LibeFarr->d[0]-1);
}
size =LibeFarr->a[nctemp5448].bufsize;
int nctemp5456=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,1973,fp,0,LibeFarr->d[0]-1);
}
int nctemp5461=size;
nctempchar1 *nctemp5460;
nctemp5460=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp5460->d[0]=size;
nctemp5460->a=(char *)RunMalloc(sizeof(char)*nctemp5461);
LibeFarr->a[nctemp5456].base=nctemp5460;
nctempchar1 *nctemp5451 =LibeFarr->a[nctemp5456].base;
int nctemp5450 =(nctemp5451==0);
if(nctemp5450)
{
{
struct nctempchar1 *nctemp5470;
static struct nctempchar1 nctemp5471 = {{ 24}, (char*)"can not allocate buffer\0"};
nctemp5470=&nctemp5471;
LibeErrstr=nctemp5470;
LibeErrno =-113;
return 0;
}
}
}
}
int nctemp5480=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,1978,fp,0,LibeFarr->d[0]-1);
}
LibeFarr->a[nctemp5480].ptr =0;
int nctemp5489=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,1979,fp,0,LibeFarr->d[0]-1);
}
int nctemp5487= LibeFarr->a[nctemp5489].fd;
int nctemp5493=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,1979,fp,0,LibeFarr->d[0]-1);
}
int nctemp5491= LibeFarr->a[nctemp5493].cnt;
int nctemp5497=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,1979,fp,0,LibeFarr->d[0]-1);
}
nctempchar1* nctemp5495= LibeFarr->a[nctemp5497].base;
int nctemp5500=RunWrite(nctemp5487,nctemp5491,nctemp5495);
st =nctemp5500;
int nctemp5505=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,1980,fp,0,LibeFarr->d[0]-1);
}
int nctemp5501 = (st !=LibeFarr->a[nctemp5505].cnt);
if(nctemp5501)
{
{
int nctemp5510=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,1981,fp,0,LibeFarr->d[0]-1);
}
LibeFarr->a[nctemp5510].errflg =1;
struct nctempchar1 *nctemp5518;
static struct nctempchar1 nctemp5519 = {{ 12}, (char*)"write error\0"};
nctemp5518=&nctemp5519;
LibeErrstr=nctemp5518;
LibeErrno =-112;
int nctemp5527=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,1984,fp,0,LibeFarr->d[0]-1);
}
LibeFarr->a[nctemp5527].cnt =0;
int nctemp5533=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,1985,fp,0,LibeFarr->d[0]-1);
}
LibeFarr->a[nctemp5533].ptr =0;
return 0;
}
}
else{
{
int nctemp5540=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,1988,fp,0,LibeFarr->d[0]-1);
}
LibeFarr->a[nctemp5540].cnt =0;
int nctemp5546=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,1989,fp,0,LibeFarr->d[0]-1);
}
LibeFarr->a[nctemp5546].ptr =0;
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
int nctemp5553=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2012,fp,0,LibeFarr->d[0]-1);
}
int nctemp5550 = (LibeFarr->a[nctemp5553].readflg !=1);
if(nctemp5550)
{
{
struct nctempchar1 *nctemp5561;
static struct nctempchar1 nctemp5562 = {{ 28}, (char*)"file not open for reading\n\0"};
nctemp5561=&nctemp5562;
LibeErrstr=nctemp5561;
LibeErrno =-110;
return -1;
}
}
int nctemp5571=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2017,fp,0,LibeFarr->d[0]-1);
}
int nctemp5568 = (LibeFarr->a[nctemp5571].unbflg ==1);
if(nctemp5568)
{
{
int nctemp5577=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2018,fp,0,LibeFarr->d[0]-1);
}
LibeFarr->a[nctemp5577].bufsize =1;
}
}
else{
{
int nctemp5583=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2020,fp,0,LibeFarr->d[0]-1);
}
LibeFarr->a[nctemp5583].bufsize =1024;
}
}
int nctemp5589=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2021,fp,0,LibeFarr->d[0]-1);
}
nctempchar1 *nctemp5587 =LibeFarr->a[nctemp5589].base;
int nctemp5586 =(nctemp5587==0);
if(nctemp5586)
{
{
int nctemp5597=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2022,fp,0,LibeFarr->d[0]-1);
}
size =LibeFarr->a[nctemp5597].bufsize;
int nctemp5605=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2023,fp,0,LibeFarr->d[0]-1);
}
int nctemp5610=size;
nctempchar1 *nctemp5609;
nctemp5609=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp5609->d[0]=size;
nctemp5609->a=(char *)RunMalloc(sizeof(char)*nctemp5610);
LibeFarr->a[nctemp5605].base=nctemp5609;
nctempchar1 *nctemp5600 =LibeFarr->a[nctemp5605].base;
int nctemp5599 =(nctemp5600==0);
if(nctemp5599)
{
{
struct nctempchar1 *nctemp5619;
static struct nctempchar1 nctemp5620 = {{ 24}, (char*)"Can not allocate buffer\0"};
nctemp5619=&nctemp5620;
LibeErrstr=nctemp5619;
LibeErrno =-113;
return -1;
}
}
}
}
int nctemp5629=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2028,fp,0,LibeFarr->d[0]-1);
}
LibeFarr->a[nctemp5629].ptr =0;
int nctemp5635=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2029,fp,0,LibeFarr->d[0]-1);
}
int nctemp5640=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2029,fp,0,LibeFarr->d[0]-1);
}
int nctemp5638= LibeFarr->a[nctemp5640].fd;
int nctemp5644=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2029,fp,0,LibeFarr->d[0]-1);
}
int nctemp5642= LibeFarr->a[nctemp5644].bufsize;
int nctemp5648=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2030,fp,0,LibeFarr->d[0]-1);
}
nctempchar1* nctemp5646= LibeFarr->a[nctemp5648].base;
int nctemp5651=RunRead(nctemp5638,nctemp5642,nctemp5646);
LibeFarr->a[nctemp5635].cnt =nctemp5651;
int nctemp5655=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2031,fp,0,LibeFarr->d[0]-1);
}
int nctemp5652 = (LibeFarr->a[nctemp5655].cnt <= 0);
if(nctemp5652)
{
{
int nctemp5661=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2032,fp,0,LibeFarr->d[0]-1);
}
int nctemp5658 = (LibeFarr->a[nctemp5661].cnt ==-1);
if(nctemp5658)
{
{
int nctemp5667=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2033,fp,0,LibeFarr->d[0]-1);
}
LibeFarr->a[nctemp5667].eoflg =1;
rval =-1;
}
}
else{
{
int nctemp5677=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2036,fp,0,LibeFarr->d[0]-1);
}
LibeFarr->a[nctemp5677].errflg =1;
struct nctempchar1 *nctemp5685;
static struct nctempchar1 nctemp5686 = {{ 11}, (char*)"read error\0"};
nctemp5685=&nctemp5686;
LibeErrstr=nctemp5685;
LibeErrno =-111;
rval =-1;
}
}
int nctemp5698=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2041,fp,0,LibeFarr->d[0]-1);
}
LibeFarr->a[nctemp5698].cnt =0;
return rval;
}
}
int nctemp5705=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2044,fp,0,LibeFarr->d[0]-1);
}
int nctemp5711=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2044,fp,0,LibeFarr->d[0]-1);
}
int nctemp5714 = LibeFarr->a[nctemp5711].ptr + 1;
LibeFarr->a[nctemp5705].ptr =nctemp5714;
int nctemp5718=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2045,fp,0,LibeFarr->d[0]-1);
}
int nctemp5724=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2045,fp,0,LibeFarr->d[0]-1);
}
int nctemp5727 = LibeFarr->a[nctemp5724].cnt - 1;
LibeFarr->a[nctemp5718].cnt =nctemp5727;
int nctemp5732=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2046,fp,0,LibeFarr->d[0]-1);
}
int nctemp5738=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2046,fp,0,LibeFarr->d[0]-1);
}
int nctemp5741 = LibeFarr->a[nctemp5738].ptr - 1;
int nctemp5734=nctemp5741;
if((0>nctemp5741)||(nctemp5741>=LibeFarr->a[nctemp5732].base->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr->a[nctemp5732].base %d %d %d %d \n " ,2046,nctemp5741,0,LibeFarr->a[nctemp5732].base->d[0]-1);
}
int nctemp5729=(int)(LibeFarr->a[nctemp5732].base->a[nctemp5734]);
return nctemp5729;
}
}
int LibeFlush (int fp)
{
{
int nctemp5743= fp;
int nctemp5745=LibeFlushbuff(nctemp5743);
return nctemp5745;
}
}
int LibeOpen (nctempchar1 *name,nctempchar1 *mode)
{
int fd;
int slot;
int i;
{
int nctemp5749=0;
if((0>0)||(0>=mode->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e mode %d %d %d %d \n " ,2099,0,0,mode->d[0]-1);
}
char nctemp5752=(char)('r');
int nctemp5746 = (mode->a[nctemp5749] !=nctemp5752);
if(nctemp5746)
{
{
int nctemp5758=0;
if((0>0)||(0>=mode->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e mode %d %d %d %d \n " ,2100,0,0,mode->d[0]-1);
}
char nctemp5761=(char)('w');
int nctemp5755 = (mode->a[nctemp5758] !=nctemp5761);
if(nctemp5755)
{
{
int nctemp5767=0;
if((0>0)||(0>=mode->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e mode %d %d %d %d \n " ,2101,0,0,mode->d[0]-1);
}
char nctemp5770=(char)('a');
int nctemp5764 = (mode->a[nctemp5767] !=nctemp5770);
if(nctemp5764)
{
{
struct nctempchar1 *nctemp5778;
static struct nctempchar1 nctemp5779 = {{ 20}, (char*)"Unknown file mode\n\0"};
nctemp5778=&nctemp5779;
LibeErrstr=nctemp5778;
LibeErrno =-103;
return 0;
}
}
}
}
}
}
i =0;
int nctemp5792= -1;
slot =nctemp5792;
int nctemp5796 = (slot < 0);
int nctemp5801 = (i < 40);
int nctemp5793 = (nctemp5796 && nctemp5801);
int nctemp5805=nctemp5793;
while(nctemp5805)
{{
{
int nctemp5812=i;
if((0>i)||(i>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2111,i,0,LibeFarr->d[0]-1);
}
int nctemp5809 = (LibeFarr->a[nctemp5812].readflg ==0);
int nctemp5819=i;
if((0>i)||(i>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2111,i,0,LibeFarr->d[0]-1);
}
int nctemp5816 = (LibeFarr->a[nctemp5819].writflg ==0);
int nctemp5806 = (nctemp5809 && nctemp5816);
if(nctemp5806)
{
{
slot =i;
}
}
int nctemp5834 = i + 1;
i =nctemp5834;
}
}
int nctemp5838 = (slot < 0);
int nctemp5843 = (i < 40);
int nctemp5835 = (nctemp5838 && nctemp5843);
nctemp5805=nctemp5835;}int nctemp5847 = (slot < 0);
if(nctemp5847)
{
{
struct nctempchar1 *nctemp5856;
static struct nctempchar1 nctemp5857 = {{ 22}, (char*)"Too many open files\n\0"};
nctemp5856=&nctemp5857;
LibeErrstr=nctemp5856;
LibeErrno =-104;
return 0;
}
}
int nctemp5869=0;
if((0>0)||(0>=mode->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e mode %d %d %d %d \n " ,2124,0,0,mode->d[0]-1);
}
int nctemp5866=(int)(mode->a[nctemp5869]);
int nctemp5863 = (nctemp5866 =='w');
if(nctemp5863)
{
{
nctempchar1* nctemp5876= name;
int nctemp5879=RunCreate(nctemp5876);
fd =nctemp5879;
}
}
else{
{
int nctemp5886=0;
if((0>0)||(0>=mode->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e mode %d %d %d %d \n " ,2126,0,0,mode->d[0]-1);
}
int nctemp5883=(int)(mode->a[nctemp5886]);
int nctemp5880 = (nctemp5883 =='a');
if(nctemp5880)
{
{
nctempchar1* nctemp5896= name;
nctempchar1* nctemp5899= mode;
int nctemp5902=RunOpen(nctemp5896,nctemp5899);
fd =nctemp5902;
int nctemp5889 = (fd ==0);
if(nctemp5889)
{
{
nctempchar1* nctemp5908= name;
int nctemp5911=RunCreate(nctemp5908);
fd =nctemp5911;
}
}
else{
{
nctempchar1* nctemp5916= name;
nctempchar1* nctemp5919= mode;
int nctemp5922=RunOpen(nctemp5916,nctemp5919);
fd =nctemp5922;
}
}
}
}
else{
{
int nctemp5929=0;
if((0>0)||(0>=mode->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e mode %d %d %d %d \n " ,2131,0,0,mode->d[0]-1);
}
int nctemp5926=(int)(mode->a[nctemp5929]);
int nctemp5923 = (nctemp5926 =='r');
if(nctemp5923)
{
{
nctempchar1* nctemp5936= name;
nctempchar1* nctemp5939= mode;
int nctemp5942=RunOpen(nctemp5936,nctemp5939);
fd =nctemp5942;
}
}
else{
{
struct nctempchar1 *nctemp5948;
static struct nctempchar1 nctemp5949 = {{ 20}, (char*)"Unknown file mode\n\0"};
nctemp5948=&nctemp5949;
LibeErrstr=nctemp5948;
LibeErrno =-103;
return 0;
}
}
}
}
}
}
int nctemp5955 = (fd ==0);
if(nctemp5955)
{
{
struct nctempchar1 *nctemp5964;
static struct nctempchar1 nctemp5965 = {{ 20}, (char*)"Could not open file\0"};
nctemp5964=&nctemp5965;
LibeErrstr=nctemp5964;
LibeErrno =-105;
return 0;
}
}
int nctemp5974=slot;
if((0>slot)||(slot>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2148,slot,0,LibeFarr->d[0]-1);
}
LibeFarr->a[nctemp5974].fd =fd;
int nctemp5980=slot;
if((0>slot)||(slot>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2149,slot,0,LibeFarr->d[0]-1);
}
LibeFarr->a[nctemp5980].cnt =0;
int nctemp5986=slot;
if((0>slot)||(slot>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2150,slot,0,LibeFarr->d[0]-1);
}
LibeFarr->a[nctemp5986].base=(0);
int nctemp5996=0;
if((0>0)||(0>=mode->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e mode %d %d %d %d \n " ,2155,0,0,mode->d[0]-1);
}
int nctemp5993=(int)(mode->a[nctemp5996]);
int nctemp5990 = (nctemp5993 =='r');
if(nctemp5990)
{
{
int nctemp6002=slot;
if((0>slot)||(slot>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2156,slot,0,LibeFarr->d[0]-1);
}
LibeFarr->a[nctemp6002].readflg =1;
}
}
else{
{
int nctemp6008=slot;
if((0>slot)||(slot>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2158,slot,0,LibeFarr->d[0]-1);
}
LibeFarr->a[nctemp6008].writflg =1;
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
int nctemp6015=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2188,fp,0,LibeFarr->d[0]-1);
}
nctempchar1 *nctemp6013 =LibeFarr->a[nctemp6015].base;
int nctemp6012 =(nctemp6013!=0);
if(nctemp6012)
{
{
int nctemp6020= fp;
int nctemp6022=LibeFlush(nctemp6020);
}
}
int nctemp6027=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2193,fp,0,LibeFarr->d[0]-1);
}
fd =LibeFarr->a[nctemp6027].fd;
int nctemp6033= fd;
int nctemp6035=RunClose(nctemp6033);
stat =nctemp6035;
int nctemp6036 = (stat ==0);
if(nctemp6036)
{
{
int nctemp6043=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2196,fp,0,LibeFarr->d[0]-1);
}
LibeFarr->a[nctemp6043].errflg =1;
struct nctempchar1 *nctemp6051;
static struct nctempchar1 nctemp6052 = {{ 21}, (char*)"Could not close file\0"};
nctemp6051=&nctemp6052;
LibeErrstr=nctemp6051;
LibeErrno =-106;
return 0;
}
}
int nctemp6061=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2203,fp,0,LibeFarr->d[0]-1);
}
LibeFarr->a[nctemp6061].cnt =0;
int nctemp6067=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2204,fp,0,LibeFarr->d[0]-1);
}
LibeFarr->a[nctemp6067].ptr =0;
int nctemp6073=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2205,fp,0,LibeFarr->d[0]-1);
}
LibeFarr->a[nctemp6073].bufsize =0;
int nctemp6079=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2206,fp,0,LibeFarr->d[0]-1);
}
nctempchar1 *nctemp6077 =LibeFarr->a[nctemp6079].base;
int nctemp6076 =(nctemp6077!=0);
if(nctemp6076)
{
{
int nctemp6085=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2207,fp,0,LibeFarr->d[0]-1);
}
RunFree(LibeFarr->a[nctemp6085].base->a);
RunFree(LibeFarr->a[nctemp6085].base);
}
}
int nctemp6091=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2209,fp,0,LibeFarr->d[0]-1);
}
LibeFarr->a[nctemp6091].base=(0);
int nctemp6098=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2210,fp,0,LibeFarr->d[0]-1);
}
LibeFarr->a[nctemp6098].readflg =0;
int nctemp6104=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2211,fp,0,LibeFarr->d[0]-1);
}
LibeFarr->a[nctemp6104].writflg =0;
int nctemp6110=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2212,fp,0,LibeFarr->d[0]-1);
}
LibeFarr->a[nctemp6110].unbflg =0;
int nctemp6116=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2213,fp,0,LibeFarr->d[0]-1);
}
LibeFarr->a[nctemp6116].errflg =0;
int nctemp6122=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2214,fp,0,LibeFarr->d[0]-1);
}
LibeFarr->a[nctemp6122].eoflg =0;
int nctemp6128=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2215,fp,0,LibeFarr->d[0]-1);
}
LibeFarr->a[nctemp6128].fd =0;
return 1;
}
}
int LibeGetc (int fp)
{
{
int nctemp6135=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2240,fp,0,LibeFarr->d[0]-1);
}
int nctemp6132 = (LibeFarr->a[nctemp6135].cnt ==0);
if(nctemp6132)
{
{
int nctemp6139= fp;
int nctemp6141=LibeFillbuff(nctemp6139);
return nctemp6141;
}
}
else{
{
int nctemp6145=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2243,fp,0,LibeFarr->d[0]-1);
}
int nctemp6151=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2243,fp,0,LibeFarr->d[0]-1);
}
int nctemp6154 = LibeFarr->a[nctemp6151].cnt - 1;
LibeFarr->a[nctemp6145].cnt =nctemp6154;
int nctemp6158=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2244,fp,0,LibeFarr->d[0]-1);
}
int nctemp6164=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2244,fp,0,LibeFarr->d[0]-1);
}
int nctemp6167 = LibeFarr->a[nctemp6164].ptr + 1;
LibeFarr->a[nctemp6158].ptr =nctemp6167;
int nctemp6172=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2245,fp,0,LibeFarr->d[0]-1);
}
int nctemp6178=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2245,fp,0,LibeFarr->d[0]-1);
}
int nctemp6181 = LibeFarr->a[nctemp6178].ptr - 1;
int nctemp6174=nctemp6181;
if((0>nctemp6181)||(nctemp6181>=LibeFarr->a[nctemp6172].base->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr->a[nctemp6172].base %d %d %d %d \n " ,2245,nctemp6181,0,LibeFarr->a[nctemp6172].base->d[0]-1);
}
int nctemp6169=(int)(LibeFarr->a[nctemp6172].base->a[nctemp6174]);
return nctemp6169;
}
}
}
}
int LibeUngetc (int fp)
{
{
int nctemp6185=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2289,fp,0,LibeFarr->d[0]-1);
}
int nctemp6182 = (LibeFarr->a[nctemp6185].eoflg ==1);
if(nctemp6182)
{
{
return -1;
}
}
int nctemp6192=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2294,fp,0,LibeFarr->d[0]-1);
}
int nctemp6195=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2294,fp,0,LibeFarr->d[0]-1);
}
int nctemp6189 = (LibeFarr->a[nctemp6192].cnt < LibeFarr->a[nctemp6195].bufsize);
if(nctemp6189)
{
{
int nctemp6200=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2295,fp,0,LibeFarr->d[0]-1);
}
int nctemp6206=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2295,fp,0,LibeFarr->d[0]-1);
}
int nctemp6209 = LibeFarr->a[nctemp6206].cnt + 1;
LibeFarr->a[nctemp6200].cnt =nctemp6209;
int nctemp6213=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2296,fp,0,LibeFarr->d[0]-1);
}
int nctemp6219=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2296,fp,0,LibeFarr->d[0]-1);
}
int nctemp6222 = LibeFarr->a[nctemp6219].ptr - 1;
LibeFarr->a[nctemp6213].ptr =nctemp6222;
int nctemp6226=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2300,fp,0,LibeFarr->d[0]-1);
}
int nctemp6232=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2300,fp,0,LibeFarr->d[0]-1);
}
int nctemp6235 = LibeFarr->a[nctemp6232].bufsize - 1;
int nctemp6223 = (LibeFarr->a[nctemp6226].ptr ==nctemp6235);
if(nctemp6223)
{
{
int nctemp6240=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2301,fp,0,LibeFarr->d[0]-1);
}
int nctemp6244=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2301,fp,0,LibeFarr->d[0]-1);
}
int nctemp6242=LibeFarr->a[nctemp6244].ptr;
if((0>LibeFarr->a[nctemp6244].ptr)||(LibeFarr->a[nctemp6244].ptr>=LibeFarr->a[nctemp6240].base->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr->a[nctemp6240].base %d %d %d %d \n " ,2301,LibeFarr->a[nctemp6244].ptr,0,LibeFarr->a[nctemp6240].base->d[0]-1);
}
int nctemp6237=(int)(LibeFarr->a[nctemp6240].base->a[nctemp6242]);
return nctemp6237;
}
}
else{
{
int nctemp6250=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2303,fp,0,LibeFarr->d[0]-1);
}
int nctemp6256=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2303,fp,0,LibeFarr->d[0]-1);
}
int nctemp6259 = LibeFarr->a[nctemp6256].ptr + 1;
int nctemp6252=nctemp6259;
if((0>nctemp6259)||(nctemp6259>=LibeFarr->a[nctemp6250].base->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr->a[nctemp6250].base %d %d %d %d \n " ,2303,nctemp6259,0,LibeFarr->a[nctemp6250].base->d[0]-1);
}
int nctemp6247=(int)(LibeFarr->a[nctemp6250].base->a[nctemp6252]);
return nctemp6247;
}
}
}
}
else{
{
struct nctempchar1 *nctemp6265;
static struct nctempchar1 nctemp6266 = {{ 15}, (char*)"Pushback error\0"};
nctemp6265=&nctemp6266;
LibeErrstr=nctemp6265;
LibeErrno =-107;
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
int nctemp6276=text->d[0];lim =nctemp6276;
p =0;
int nctemp6285=LibeClearerr();
int nctemp6299= fp;
int nctemp6301=LibeGetc(nctemp6299);
ch =nctemp6301;
int nctemp6292 = (ch ==32);
int nctemp6304 = (ch ==9);
int nctemp6289 = (nctemp6292 || nctemp6304);
int nctemp6309 = (ch ==10);
int nctemp6286 = (nctemp6289 || nctemp6309);
int nctemp6313=nctemp6286;
while(nctemp6313)
{{
{
p =0;
}
}
int nctemp6331= fp;
int nctemp6333=LibeGetc(nctemp6331);
ch =nctemp6333;
int nctemp6324 = (ch ==32);
int nctemp6336 = (ch ==9);
int nctemp6321 = (nctemp6324 || nctemp6336);
int nctemp6341 = (ch ==10);
int nctemp6318 = (nctemp6321 || nctemp6341);
nctemp6313=nctemp6318;}int nctemp6346= fp;
int nctemp6348=LibeUngetc(nctemp6346);
int nctemp6359= fp;
int nctemp6361=LibeGetc(nctemp6359);
ch =nctemp6361;
int nctemp6352 = (ch !=-1);
int nctemp6364 = (p < lim);
int nctemp6349 = (nctemp6352 && nctemp6364);
int nctemp6368=nctemp6349;
while(nctemp6368)
{{
{
int nctemp6375 = (ch ==32);
int nctemp6380 = (ch ==9);
int nctemp6372 = (nctemp6375 || nctemp6380);
int nctemp6385 = (ch ==10);
int nctemp6369 = (nctemp6372 || nctemp6385);
if(nctemp6369)
{
{
int nctemp6390= fp;
int nctemp6392=LibeUngetc(nctemp6390);
int nctemp6396=p;
if((0>p)||(p>=text->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e text %d %d %d %d \n " ,2340,p,0,text->d[0]-1);
}
char nctemp6399=(char)(0);
text->a[nctemp6396] =nctemp6399;
return 1;
}
}
else{
{
int nctemp6406=p;
if((0>p)||(p>=text->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e text %d %d %d %d \n " ,2343,p,0,text->d[0]-1);
}
char nctemp6409=(char)(ch);
text->a[nctemp6406] =nctemp6409;
int nctemp6420 = p + 1;
p =nctemp6420;
}
}
}
}
int nctemp6431= fp;
int nctemp6433=LibeGetc(nctemp6431);
ch =nctemp6433;
int nctemp6424 = (ch !=-1);
int nctemp6436 = (p < lim);
int nctemp6421 = (nctemp6424 && nctemp6436);
nctemp6368=nctemp6421;}int nctemp6440 = (p >= lim);
if(nctemp6440)
{
{
return 0;
}
}
else{
{
int nctemp6445 = (ch ==-1);
if(nctemp6445)
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
int nctemp6454=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2382,fp,0,LibeFarr->d[0]-1);
}
int nctemp6451 = (LibeFarr->a[nctemp6454].cnt ==0);
if(nctemp6451)
{
{
int nctemp6458= fp;
int nctemp6460=LibeFlushbuff(nctemp6458);
}
}
int nctemp6464=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2385,fp,0,LibeFarr->d[0]-1);
}
int nctemp6467=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2385,fp,0,LibeFarr->d[0]-1);
}
int nctemp6461 = (LibeFarr->a[nctemp6464].cnt ==LibeFarr->a[nctemp6467].bufsize);
if(nctemp6461)
{
{
int nctemp6473= fp;
int nctemp6475=LibeFlushbuff(nctemp6473);
rval =nctemp6475;
int nctemp6479=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2387,fp,0,LibeFarr->d[0]-1);
}
int nctemp6483=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2387,fp,0,LibeFarr->d[0]-1);
}
int nctemp6481=LibeFarr->a[nctemp6483].ptr;
if((0>LibeFarr->a[nctemp6483].ptr)||(LibeFarr->a[nctemp6483].ptr>=LibeFarr->a[nctemp6479].base->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr->a[nctemp6479].base %d %d %d %d \n " ,2387,LibeFarr->a[nctemp6483].ptr,0,LibeFarr->a[nctemp6479].base->d[0]-1);
}
char nctemp6486=(char)(c);
LibeFarr->a[nctemp6479].base->a[nctemp6481] =nctemp6486;
int nctemp6492=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2388,fp,0,LibeFarr->d[0]-1);
}
int nctemp6498=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2388,fp,0,LibeFarr->d[0]-1);
}
int nctemp6501 = LibeFarr->a[nctemp6498].ptr + 1;
LibeFarr->a[nctemp6492].ptr =nctemp6501;
int nctemp6505=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2389,fp,0,LibeFarr->d[0]-1);
}
int nctemp6511=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2389,fp,0,LibeFarr->d[0]-1);
}
int nctemp6514 = LibeFarr->a[nctemp6511].cnt + 1;
LibeFarr->a[nctemp6505].cnt =nctemp6514;
return rval;
}
}
else{
{
int nctemp6519=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2392,fp,0,LibeFarr->d[0]-1);
}
int nctemp6523=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2392,fp,0,LibeFarr->d[0]-1);
}
int nctemp6521=LibeFarr->a[nctemp6523].ptr;
if((0>LibeFarr->a[nctemp6523].ptr)||(LibeFarr->a[nctemp6523].ptr>=LibeFarr->a[nctemp6519].base->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr->a[nctemp6519].base %d %d %d %d \n " ,2392,LibeFarr->a[nctemp6523].ptr,0,LibeFarr->a[nctemp6519].base->d[0]-1);
}
char nctemp6526=(char)(c);
LibeFarr->a[nctemp6519].base->a[nctemp6521] =nctemp6526;
int nctemp6532=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2393,fp,0,LibeFarr->d[0]-1);
}
int nctemp6538=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2393,fp,0,LibeFarr->d[0]-1);
}
int nctemp6541 = LibeFarr->a[nctemp6538].cnt + 1;
LibeFarr->a[nctemp6532].cnt =nctemp6541;
int nctemp6545=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2394,fp,0,LibeFarr->d[0]-1);
}
int nctemp6551=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2394,fp,0,LibeFarr->d[0]-1);
}
int nctemp6554 = LibeFarr->a[nctemp6551].ptr + 1;
LibeFarr->a[nctemp6545].ptr =nctemp6554;
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
int nctemp6560=s->d[0];ls =nctemp6560;
i =0;
int nctemp6577=i;
if((0>i)||(i>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,2420,i,0,s->d[0]-1);
}
int nctemp6574=(int)(s->a[nctemp6577]);
int nctemp6571 = (nctemp6574 !=0);
int nctemp6581 = (i < ls);
int nctemp6568 = (nctemp6571 && nctemp6581);
int nctemp6585=nctemp6568;
while(nctemp6585)
{{
{
int nctemp6589= fp;
int nctemp6596=i;
if((0>i)||(i>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,2421,i,0,s->d[0]-1);
}
int nctemp6593=(int)(s->a[nctemp6596]);
int nctemp6591= nctemp6593;
int nctemp6598=LibePutc(nctemp6589,nctemp6591);
int nctemp6586 = (nctemp6598 ==0);
if(nctemp6586)
{
{
struct nctempchar1 *nctemp6605;
static struct nctempchar1 nctemp6606 = {{ 12}, (char*)"write error\0"};
nctemp6605=&nctemp6606;
LibeErrstr=nctemp6605;
LibeErrno =0;
return 0;
}
}
else{
{
int nctemp6620 = i + 1;
i =nctemp6620;
}
}
}
}
int nctemp6630=i;
if((0>i)||(i>=s->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e s %d %d %d %d \n " ,2420,i,0,s->d[0]-1);
}
int nctemp6627=(int)(s->a[nctemp6630]);
int nctemp6624 = (nctemp6627 !=0);
int nctemp6634 = (i < ls);
int nctemp6621 = (nctemp6624 && nctemp6634);
nctemp6585=nctemp6621;}int nctemp6639= fp;
int nctemp6641=LibeFlushbuff(nctemp6639);
return 1;
}
}
int LibePuti (int fp,int ival)
{
{
int nctemp6644= ival;
nctempchar1* nctemp6646= LibeTmpstr;
int nctemp6649=LibeItoa(nctemp6644,nctemp6646);
int nctemp6651= fp;
nctempchar1* nctemp6653= LibeTmpstr;
int nctemp6656=LibePuts(nctemp6651,nctemp6653);
return nctemp6656;
}
}
int LibePutf (int fp,float fval,nctempchar1 *form)
{
{
float nctemp6658= fval;
nctempchar1* nctemp6660= form;
nctempchar1* nctemp6663= LibeTmpstr;
int nctemp6666=LibeFtoa(nctemp6658,nctemp6660,nctemp6663);
int nctemp6668= fp;
nctempchar1* nctemp6670= LibeTmpstr;
int nctemp6673=LibePuts(nctemp6668,nctemp6670);
return nctemp6673;
}
}
int LibePs (nctempchar1 *s)
{
{
int nctemp6675= 3;
nctempchar1* nctemp6677= s;
int nctemp6680=LibePuts(nctemp6675,nctemp6677);
return 1;
}
}
int LibePi (int n)
{
{
int nctemp6683= 3;
int nctemp6685= n;
int nctemp6687=LibePuti(nctemp6683,nctemp6685);
return 1;
}
}
int LibePf (float r)
{
{
int nctemp6690= 3;
float nctemp6692= r;
struct nctempchar1 *nctemp6696;
static struct nctempchar1 nctemp6697 = {{ 2}, (char*)"g\0"};
nctemp6696=&nctemp6697;
nctempchar1* nctemp6694= nctemp6696;
int nctemp6698=LibePutf(nctemp6690,nctemp6692,nctemp6694);
return 1;
}
}
int LibeRead (int fp,int n,nctempchar1 *buffer)
{
int rval;
{
int nctemp6703=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2557,fp,0,LibeFarr->d[0]-1);
}
int nctemp6700 = (LibeFarr->a[nctemp6703].readflg !=1);
if(nctemp6700)
{
{
struct nctempchar1 *nctemp6711;
static struct nctempchar1 nctemp6712 = {{ 26}, (char*)"File not open for reading\0"};
nctemp6711=&nctemp6712;
LibeErrstr=nctemp6711;
LibeErrno =-109;
return -1;
}
}
int nctemp6722=buffer->d[0];int nctemp6718 = (n > nctemp6722);
if(nctemp6718)
{
{
LibeErrno =-108;
struct nctempchar1 *nctemp6735;
static struct nctempchar1 nctemp6736 = {{ 30}, (char*)"The buffer array is too small\0"};
nctemp6735=&nctemp6736;
LibeErrstr=nctemp6735;
return 0;
}
}
int nctemp6744=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2567,fp,0,LibeFarr->d[0]-1);
}
int nctemp6742= LibeFarr->a[nctemp6744].fd;
int nctemp6746= n;
nctempchar1* nctemp6748= buffer;
int nctemp6751=RunRead(nctemp6742,nctemp6746,nctemp6748);
rval =nctemp6751;
int nctemp6752 = (rval ==-1);
if(nctemp6752)
{
{
int nctemp6759=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2569,fp,0,LibeFarr->d[0]-1);
}
LibeFarr->a[nctemp6759].eoflg =1;
rval =-1;
}
}
else{
{
int nctemp6766 = (rval ==0);
if(nctemp6766)
{
{
int nctemp6773=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2573,fp,0,LibeFarr->d[0]-1);
}
LibeFarr->a[nctemp6773].errflg =1;
struct nctempchar1 *nctemp6781;
static struct nctempchar1 nctemp6782 = {{ 11}, (char*)"read error\0"};
nctemp6781=&nctemp6782;
LibeErrstr=nctemp6781;
LibeErrno =0;
int nctemp6790=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2576,fp,0,LibeFarr->d[0]-1);
}
LibeFarr->a[nctemp6790].errflg =0;
rval =0;
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
int nctemp6802=buffer->d[0];int nctemp6798 = (n > nctemp6802);
if(nctemp6798)
{
{
LibeErrno =-108;
struct nctempchar1 *nctemp6815;
static struct nctempchar1 nctemp6816 = {{ 30}, (char*)"The buffer array is too small\0"};
nctemp6815=&nctemp6816;
LibeErrstr=nctemp6815;
return 0;
}
}
int nctemp6821=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2619,fp,0,LibeFarr->d[0]-1);
}
int nctemp6818 = (LibeFarr->a[nctemp6821].writflg !=1);
if(nctemp6818)
{
{
struct nctempchar1 *nctemp6829;
static struct nctempchar1 nctemp6830 = {{ 26}, (char*)"file not open for writing\0"};
nctemp6829=&nctemp6830;
LibeErrstr=nctemp6829;
LibeErrno =-110;
return 0;
}
}
int nctemp6842=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2625,fp,0,LibeFarr->d[0]-1);
}
int nctemp6840= LibeFarr->a[nctemp6842].fd;
int nctemp6844= n;
nctempchar1* nctemp6846= buffer;
int nctemp6849=RunWrite(nctemp6840,nctemp6844,nctemp6846);
rval =nctemp6849;
int nctemp6850 = (rval ==0);
if(nctemp6850)
{
{
int nctemp6857=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2627,fp,0,LibeFarr->d[0]-1);
}
LibeFarr->a[nctemp6857].errflg =1;
struct nctempchar1 *nctemp6865;
static struct nctempchar1 nctemp6866 = {{ 12}, (char*)"write error\0"};
nctemp6865=&nctemp6866;
LibeErrstr=nctemp6865;
LibeErrno =0;
int nctemp6874=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2630,fp,0,LibeFarr->d[0]-1);
}
LibeFarr->a[nctemp6874].errflg =0;
rval =0;
}
}
return rval;
}
}
int LibeSeek (int fp,int pos,int flag)
{
int rval;
{
int nctemp6888=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2651,fp,0,LibeFarr->d[0]-1);
}
int nctemp6886= LibeFarr->a[nctemp6888].fd;
int nctemp6890= pos;
int nctemp6892= flag;
int nctemp6894=RunSeek(nctemp6886,nctemp6890,nctemp6892);
rval =nctemp6894;
int nctemp6895 = (rval ==0);
if(nctemp6895)
{
{
int nctemp6902=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2653,fp,0,LibeFarr->d[0]-1);
}
LibeFarr->a[nctemp6902].errflg =1;
struct nctempchar1 *nctemp6910;
static struct nctempchar1 nctemp6911 = {{ 11}, (char*)"Seek error\0"};
nctemp6910=&nctemp6911;
LibeErrstr=nctemp6910;
LibeErrno =0;
int nctemp6919=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2656,fp,0,LibeFarr->d[0]-1);
}
LibeFarr->a[nctemp6919].errflg =0;
rval =0;
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
stat =1;
for(i = 0;i < 40;i = (i + 1)){
{
int nctemp6937=i;
if((0>i)||(i>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2684,i,0,LibeFarr->d[0]-1);
}
nctempchar1 *nctemp6935 =LibeFarr->a[nctemp6937].base;
int nctemp6934 =(nctemp6935!=0);
if(nctemp6934)
{
{
int nctemp6941 = (i > 4);
if(nctemp6941)
{
{
int nctemp6949=i;
if((0>i)||(i>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2687,i,0,LibeFarr->d[0]-1);
}
fd =LibeFarr->a[nctemp6949].fd;
int nctemp6955= fd;
int nctemp6957=RunClose(nctemp6955);
stat =nctemp6957;
int nctemp6958 = (stat ==0);
if(nctemp6958)
{
{
struct nctempchar1 *nctemp6967;
static struct nctempchar1 nctemp6968 = {{ 21}, (char*)"Could not close file\0"};
nctemp6967=&nctemp6968;
LibeErrstr=nctemp6967;
LibeErrno =-106;
}
}
}
}
int nctemp6977= i;
int nctemp6979=LibeFlush(nctemp6977);
stat =nctemp6979;
int nctemp6982=i;
if((0>i)||(i>=LibeFarr->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:libe.e LibeFarr %d %d %d %d \n " ,2693,i,0,LibeFarr->d[0]-1);
}
RunFree(LibeFarr->a[nctemp6982].base->a);
RunFree(LibeFarr->a[nctemp6982].base);
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
NBLOCKS =nb;
return 1;
}
}
int LibeSetnt (int nt)
{
{
NTHREADS =nt;
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
int nctemp7002= 4;
struct nctempchar1 *nctemp7006;
static struct nctempchar1 nctemp7007 = {{ 37}, (char*)"Array index out of bond at line no: \0"};
nctemp7006=&nctemp7007;
nctempchar1* nctemp7004= nctemp7006;
int nctemp7008=LibePuts(nctemp7002,nctemp7004);
int nctemp7010= 4;
int nctemp7012= line;
int nctemp7014=LibePuti(nctemp7010,nctemp7012);
int nctemp7016= 4;
struct nctempchar1 *nctemp7020;
static struct nctempchar1 nctemp7021 = {{ 3}, (char*)"\n\0"};
nctemp7020=&nctemp7021;
nctempchar1* nctemp7018= nctemp7020;
int nctemp7022=LibePuts(nctemp7016,nctemp7018);
int nctemp7024= 4;
struct nctempchar1 *nctemp7028;
static struct nctempchar1 nctemp7029 = {{ 13}, (char*)"Array name: \0"};
nctemp7028=&nctemp7029;
nctempchar1* nctemp7026= nctemp7028;
int nctemp7030=LibePuts(nctemp7024,nctemp7026);
int nctemp7032= 4;
nctempchar1* nctemp7034= name;
int nctemp7037=LibePuts(nctemp7032,nctemp7034);
int nctemp7039= 4;
struct nctempchar1 *nctemp7043;
static struct nctempchar1 nctemp7044 = {{ 3}, (char*)"\n\0"};
nctemp7043=&nctemp7044;
nctempchar1* nctemp7041= nctemp7043;
int nctemp7045=LibePuts(nctemp7039,nctemp7041);
int nctemp7047= 4;
struct nctempchar1 *nctemp7051;
static struct nctempchar1 nctemp7052 = {{ 11}, (char*)"Index no: \0"};
nctemp7051=&nctemp7052;
nctempchar1* nctemp7049= nctemp7051;
int nctemp7053=LibePuts(nctemp7047,nctemp7049);
int nctemp7055= 4;
int nctemp7057= index;
int nctemp7059=LibePuti(nctemp7055,nctemp7057);
int nctemp7061= 4;
struct nctempchar1 *nctemp7065;
static struct nctempchar1 nctemp7066 = {{ 3}, (char*)"\n\0"};
nctemp7065=&nctemp7066;
nctempchar1* nctemp7063= nctemp7065;
int nctemp7067=LibePuts(nctemp7061,nctemp7063);
int nctemp7069= 4;
struct nctempchar1 *nctemp7073;
static struct nctempchar1 nctemp7074 = {{ 14}, (char*)"Index value: \0"};
nctemp7073=&nctemp7074;
nctempchar1* nctemp7071= nctemp7073;
int nctemp7075=LibePuts(nctemp7069,nctemp7071);
int nctemp7077= 4;
int nctemp7079= ival;
int nctemp7081=LibePuti(nctemp7077,nctemp7079);
int nctemp7083= 4;
struct nctempchar1 *nctemp7087;
static struct nctempchar1 nctemp7088 = {{ 3}, (char*)"\n\0"};
nctemp7087=&nctemp7088;
nctempchar1* nctemp7085= nctemp7087;
int nctemp7089=LibePuts(nctemp7083,nctemp7085);
int nctemp7091= 4;
struct nctempchar1 *nctemp7095;
static struct nctempchar1 nctemp7096 = {{ 16}, (char*)"Index bound: 0-\0"};
nctemp7095=&nctemp7096;
nctempchar1* nctemp7093= nctemp7095;
int nctemp7097=LibePuts(nctemp7091,nctemp7093);
int nctemp7099= 4;
int nctemp7106 = bound - 1;
int nctemp7101= nctemp7106;
int nctemp7107=LibePuti(nctemp7099,nctemp7101);
int nctemp7109= 4;
struct nctempchar1 *nctemp7113;
static struct nctempchar1 nctemp7114 = {{ 3}, (char*)"\n\0"};
nctemp7113=&nctemp7114;
nctempchar1* nctemp7111= nctemp7113;
int nctemp7115=LibePuts(nctemp7109,nctemp7111);
int nctemp7117= 4;
int nctemp7119=LibeFlush(nctemp7117);
int nctemp7121=RunExit();
return 1;
}
}
int LibeSystem (nctempchar1 *cmd)
{
int rval;
{
nctempchar1* nctemp7127= cmd;
int nctemp7130=RunSystem(nctemp7127);
rval =nctemp7130;
return rval;
}
}
int LibeInit ()
{
int rval;
{
int nctemp7136=LibeErrinit();
rval =nctemp7136;
int nctemp7141=LibeIoinit();
rval =nctemp7141;
int nctemp7146=LibeMathinit();
rval =nctemp7146;
int nctemp7151= 1024;
int nctemp7153=LibeSetnb(nctemp7151);
rval =nctemp7153;
int nctemp7158= 1024;
int nctemp7160=LibeSetnt(nctemp7158);
rval =nctemp7160;
return rval;
}
}
int LibeExit ()
{
{
int nctemp7163=RunExit();
return 1;
}
}
nctempchar1 * LibeDate ()
{
{
nctempchar1* nctemp7166=RunDate();
return nctemp7166;
}
}
