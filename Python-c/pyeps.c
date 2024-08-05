
#line 1  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
/*  Translated by epsc  version today */

#line 4  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
#include <stddef.h>
typedef struct { float r; float i;} complex; 

#line 3  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
typedef struct nctempfloat1 { int d[1]; float *a;} nctempfloat1; 

#line 5  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
typedef struct nctempint1 { int d[1]; int *a;} nctempint1; 

#line 7  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
typedef struct nctempchar1 { int d[1]; char *a;} nctempchar1; 
typedef struct nctempcomplex1 { int d[1]; complex *a;} nctempcomplex1; 

#line 8  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
static struct nctempchar1 nctempstringx = {0, NULL};
static struct nctempchar1 *nctempstring = &nctempstringx;
typedef struct nctempfloat2 { int d[2]; float *a;} nctempfloat2; 

#line 10  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
typedef struct nctempint2 { int d[2]; int *a;} nctempint2; 
typedef struct nctempchar2 { int d[2]; char *a;} nctempchar2; 

#line 12  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
typedef struct nctempcomplex2 { int d[2]; complex *a;} nctempcomplex2; 

#line 13  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
typedef struct nctempfloat3 { int d[3]; float *a;} nctempfloat3; 

#line 14  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
typedef struct nctempint3 { int d[3]; int *a;} nctempint3; 

#line 15  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
typedef struct nctempchar3 { int d[3]; char *a;} nctempchar3; 

#line 16  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
typedef struct nctempcomplex3 { int d[3]; complex *a;} nctempcomplex3; 

#line 17  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
typedef struct nctempfloat4 { int d[4]; float *a;} nctempfloat4; 

#line 18  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
typedef struct nctempint4 { int d[4]; int *a;} nctempint4; 

#line 19  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
typedef struct nctempchar4 { int d[4]; char *a;} nctempchar4; 

#line 20  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
typedef struct nctempcomplex4 { int d[4]; complex *a;} nctempcomplex4; 
#include <stdlib.h>
#include <string.h>
void *RunMalloc(int n); 
int RunFree(void *n); 

#line 87  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeArrayex (int line,nctempchar1 *name,int ival,int index,int bound);

#line 89  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeClearerr ();

#line 90  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeGeterrno ();

#line 91  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
nctempchar1* LibeGeterrstr ();

#line 143  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
struct MainArg {nctempchar1 *arg;
};
typedef struct nctempMainArg1 {int d[1]; struct MainArg *a; } nctempMainArg1;
struct nctempMainArg2 {int d[2]; struct MainArg *a; } ;
struct nctempMainArg3 {int d[3]; struct MainArg *a; } ;
struct nctempMainArg4 {int d[4]; struct MainArg *a; } ;

#line 145  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int Main (struct nctempMainArg1 *MainArgs);

#line 153  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeInit ();

#line 154  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeDelete ();

#line 155  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeExit ();

#line 156  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
nctempchar1* LibeGetenv (nctempchar1 *name);

#line 172  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeOpen (nctempchar1 *name,nctempchar1 *mode);

#line 173  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeClose (int fp);

#line 174  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeGetc (int fp);

#line 175  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeUngetc (int fp);

#line 176  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeGetw (int fp,nctempchar1 *text);

#line 177  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibePs (nctempchar1 *s);

#line 178  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibePi (int n);

#line 179  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibePf (float r);

#line 180  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibePutf (int fp,float r,nctempchar1 *form);

#line 181  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibePutc (int fp,int c);

#line 182  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibePuts (int fp,nctempchar1 *s);

#line 183  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibePuti (int fp,int ival);

#line 184  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeRead (int fp,int n,nctempchar1 *array);

#line 185  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeWrite (int fp,int n,nctempchar1 *array);

#line 186  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeSeek (int fp,int pos,int flag);

#line 187  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeFlush (int fp);

#line 222  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeStrlen (nctempchar1 *s);

#line 223  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeStrcmp (nctempchar1 *s,nctempchar1 *t);

#line 224  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeStrev (nctempchar1 *s);

#line 225  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
nctempchar1* LibeStrsave (nctempchar1 *s);

#line 226  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeStrcpy (nctempchar1 *s,nctempchar1 *t);

#line 227  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeStrcat (nctempchar1 *s,nctempchar1 *t);

#line 228  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
nctempchar1* LibeStradd (nctempchar1 *t,nctempchar1 *s);

#line 229  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeIsalpha (int c);

#line 230  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeIsdigit (int c);

#line 231  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeIsalnum (int c);

#line 258  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeAtoi (nctempchar1 *s);

#line 259  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeItoa (int n,nctempchar1 *s);

#line 260  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeItoh (int n,nctempchar1 *s);

#line 261  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeAtof (nctempchar1 *s);

#line 262  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeFtoa (float f,nctempchar1 *fmt,nctempchar1 *s);

#line 292  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeMach (int flag);

#line 293  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeFabs (float x);

#line 294  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeFscale2 (float x,int n);

#line 295  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeGetfman2 (float x);

#line 296  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeGetfexp2 (float x);

#line 297  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeFscale (float x,int n);

#line 298  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeGetfman (float f,int maxdig);

#line 299  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeGetffman (float f);

#line 300  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeGetmaxdig (float f);

#line 301  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeGetfexp (float f);

#line 328  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeClock ();

#line 333  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeSetnb (int n);

#line 335  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeSetnt (int n);

#line 338  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeGetnb ();

#line 340  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeGetnt ();

#line 349  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeMod (int n,int r);

#line 362  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeSqrt (float x);

#line 363  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeLn (float x);

#line 364  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeExp (float x);

#line 365  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeSin (float x);

#line 366  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeCos (float x);

#line 367  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeTan (float x);

#line 368  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeArcsin (float x);

#line 369  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeArccos (float x);

#line 370  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeArctan (float x);

#line 371  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibePow (float base,float exponent);

#line 376  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeSystem (nctempchar1 *cmd);

#line 5  "pyeps.e"
nctempchar1* PyepsCre1ds (int Nx);

#line 8  "pyeps.e"
int PyepsDel1ds (nctempchar1 *arr);

#line 11  "pyeps.e"
int PyepsSet1ds (nctempchar1 *arr,int i,char val);

#line 14  "pyeps.e"
nctempint1* PyepsCre1di (int Nx);

#line 17  "pyeps.e"
int PyepsDel1di (nctempint1 *arr);

#line 20  "pyeps.e"
int PyepsSet1di (nctempint1 *arr,int i,int val);

#line 23  "pyeps.e"
nctempfloat1* PyepsCre1df (int Nx);

#line 26  "pyeps.e"
int PyepsDel1df (nctempfloat1 *arr);

#line 29  "pyeps.e"
int PyepsSet1df (nctempfloat1 *arr,int i,float val);

#line 32  "pyeps.e"
nctempfloat2* PyepsCre2df (int Nx,int Ny);

#line 35  "pyeps.e"
int PyepsDel2df (nctempfloat2 *arr);

#line 38  "pyeps.e"
int PyepsSet2df (nctempfloat2 *arr,int i,int j,float val);

#line 41  "pyeps.e"
float PyepsGet2df (nctempfloat2 *arr,int i,int j);

#line 44  "pyeps.e"
int Main (struct nctempMainArg1 *MainArgs)

#line 45  "pyeps.e"
{

#line 46  "pyeps.e"
return 1;

#line 45  "pyeps.e"
}

#line 56  "pyeps.e"
nctempchar1 * PyepsCre1ds (int Nx)
{

#line 57  "pyeps.e"
nctempchar1 *str;

#line 58  "pyeps.e"
int nctemp13 = Nx + 1;
int nctemp8=nctemp13;
nctempchar1 *nctemp7;
nctemp7=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp18 = Nx + 1;
nctemp7->d[0]=nctemp18;
nctemp7->a=(char *)RunMalloc(sizeof(char)*nctemp8);
str=nctemp7;

#line 59  "pyeps.e"
int nctemp22=Nx;
if((0>Nx)||(Nx>=str->d[0])){
nctempstring->a="str";
nctempstring->d[0]=strlen("str")+1;;
LibeArrayex(59,nctempstring,Nx,0,str->d[0]);
}
char nctemp25=(char)(0);
str->a[nctemp22] =nctemp25;

#line 60  "pyeps.e"
return str;

#line 56  "pyeps.e"
}

#line 70  "pyeps.e"
int PyepsDel1ds (nctempchar1 *arr)
{

#line 71  "pyeps.e"
RunFree(arr->a);
RunFree(arr);

#line 72  "pyeps.e"
return 1;

#line 70  "pyeps.e"
}

#line 84  "pyeps.e"
int PyepsSet1ds (nctempchar1 *arr,int i,char val)
{

#line 85  "pyeps.e"
int nctemp37=i;
if((0>i)||(i>=arr->d[0])){
nctempstring->a="arr";
nctempstring->d[0]=strlen("arr")+1;;
LibeArrayex(85,nctempstring,i,0,arr->d[0]);
}
arr->a[nctemp37] =val;

#line 86  "pyeps.e"
return 1;

#line 84  "pyeps.e"
}

#line 97  "pyeps.e"
nctempint1 * PyepsCre1di (int Nx)
{

#line 98  "pyeps.e"
nctempint1 *tmp;

#line 99  "pyeps.e"
int nctemp47=Nx;
nctempint1 *nctemp46;
nctemp46=(nctempint1*)RunMalloc(sizeof(nctempint1));
nctemp46->d[0]=Nx;
nctemp46->a=(int *)RunMalloc(sizeof(int)*nctemp47);
tmp=nctemp46;

#line 100  "pyeps.e"
return tmp;

#line 97  "pyeps.e"
}

#line 110  "pyeps.e"
int PyepsDel1di (nctempint1 *arr)
{

#line 111  "pyeps.e"
RunFree(arr->a);
RunFree(arr);

#line 112  "pyeps.e"
return 1;

#line 110  "pyeps.e"
}

#line 124  "pyeps.e"
int PyepsSet1di (nctempint1 *arr,int i,int val)
{

#line 125  "pyeps.e"
int nctemp59=i;
if((0>i)||(i>=arr->d[0])){
nctempstring->a="arr";
nctempstring->d[0]=strlen("arr")+1;;
LibeArrayex(125,nctempstring,i,0,arr->d[0]);
}
arr->a[nctemp59] =val;

#line 126  "pyeps.e"
return 1;

#line 124  "pyeps.e"
}

#line 137  "pyeps.e"
nctempfloat1 * PyepsCre1df (int Nx)
{

#line 138  "pyeps.e"
nctempfloat1 *tmp;

#line 139  "pyeps.e"
int nctemp69=Nx;
nctempfloat1 *nctemp68;
nctemp68=(nctempfloat1*)RunMalloc(sizeof(nctempfloat1));
nctemp68->d[0]=Nx;
nctemp68->a=(float *)RunMalloc(sizeof(float)*nctemp69);
tmp=nctemp68;

#line 140  "pyeps.e"
return tmp;

#line 137  "pyeps.e"
}

#line 150  "pyeps.e"
int PyepsDel1df (nctempfloat1 *arr)
{

#line 151  "pyeps.e"
RunFree(arr->a);
RunFree(arr);

#line 152  "pyeps.e"
return 1;

#line 150  "pyeps.e"
}

#line 164  "pyeps.e"
int PyepsSet1df (nctempfloat1 *arr,int i,float val)
{

#line 165  "pyeps.e"
int nctemp81=i;
if((0>i)||(i>=arr->d[0])){
nctempstring->a="arr";
nctempstring->d[0]=strlen("arr")+1;;
LibeArrayex(165,nctempstring,i,0,arr->d[0]);
}
arr->a[nctemp81] =val;

#line 166  "pyeps.e"
return 1;

#line 164  "pyeps.e"
}

#line 178  "pyeps.e"
nctempfloat2 * PyepsCre2df (int Nx,int Ny)
{

#line 179  "pyeps.e"
int nctemp87=Nx;
nctemp87=nctemp87*Ny;
nctempfloat2 *nctemp86;
nctemp86=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp86->d[0]=Nx;
nctemp86->d[1]=Ny;
nctemp86->a=(float *)RunMalloc(sizeof(float)*nctemp87);
return nctemp86;

#line 178  "pyeps.e"
}

#line 189  "pyeps.e"
int PyepsDel2df (nctempfloat2 *arr)
{

#line 190  "pyeps.e"
RunFree(arr->a);
RunFree(arr);

#line 191  "pyeps.e"
return 1;

#line 189  "pyeps.e"
}

#line 194  "pyeps.e"
int PyepsSet2df (nctempfloat2 *arr,int i,int j,float val)
{

#line 205  "pyeps.e"
int nctemp99=i;
if((0>i)||(i>=arr->d[0])){
nctempstring->a="arr";
nctempstring->d[0]=strlen("arr")+1;;
LibeArrayex(205,nctempstring,i,0,arr->d[0]);
}
nctemp99=j*arr->d[0]+nctemp99;
if((0>j)||(j>=arr->d[1])){
nctempstring->a="arr";
nctempstring->d[0]=strlen("arr")+1;;
LibeArrayex(205,nctempstring,j,1,arr->d[1]);
}
arr->a[nctemp99] =val;

#line 206  "pyeps.e"
return 1;

#line 194  "pyeps.e"
}

#line 208  "pyeps.e"
float PyepsGet2df (nctempfloat2 *arr,int i,int j)
{

#line 218  "pyeps.e"
int nctemp105=i;
if((0>i)||(i>=arr->d[0])){
nctempstring->a="arr";
nctempstring->d[0]=strlen("arr")+1;;
LibeArrayex(218,nctempstring,i,0,arr->d[0]);
}
nctemp105=j*arr->d[0]+nctemp105;
if((0>j)||(j>=arr->d[1])){
nctempstring->a="arr";
nctempstring->d[0]=strlen("arr")+1;;
LibeArrayex(218,nctempstring,j,1,arr->d[1]);
}
return arr->a[nctemp105];

#line 208  "pyeps.e"
}
