
#line 1  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
//  Translated by epsc  version today  

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

#line 60  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeArrayex (int line,nctempchar1 *name,int ival,int index,int bound);

#line 63  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeClearerr ();

#line 65  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeGeterrno ();

#line 67  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
nctempchar1* LibeGeterrstr ();

#line 118  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
struct MainArg {nctempchar1 *arg;
};
typedef struct nctempMainArg1 {int d[1]; struct MainArg *a; } nctempMainArg1;
struct nctempMainArg2 {int d[2]; struct MainArg *a; } ;
struct nctempMainArg3 {int d[3]; struct MainArg *a; } ;
struct nctempMainArg4 {int d[4]; struct MainArg *a; } ;

#line 121  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int Main (struct nctempMainArg1 *MainArgs);

#line 126  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeInit ();

#line 128  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeDelete ();

#line 130  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeExit ();

#line 132  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
nctempchar1* LibeGetenv (nctempchar1 *name);

#line 146  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeOpen (nctempchar1 *name,nctempchar1 *mode);

#line 148  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeClose (int fp);

#line 150  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeGetc (int fp);

#line 152  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeUngetc (int fp);

#line 154  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeGetw (int fp,nctempchar1 *text);

#line 156  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibePs (nctempchar1 *s);

#line 158  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibePi (int n);

#line 160  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibePf (float r);

#line 162  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibePutf (int fp,float r,nctempchar1 *form);

#line 164  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibePutc (int fp,int c);

#line 166  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibePuts (int fp,nctempchar1 *s);

#line 168  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibePuti (int fp,int ival);

#line 170  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeRead (int fp,int n,nctempchar1 *array);

#line 172  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeWrite (int fp,int n,nctempchar1 *array);

#line 174  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeSeek (int fp,int pos,int flag);

#line 176  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeFlush (int fp);

#line 210  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeStrlen (nctempchar1 *s);

#line 212  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeStrcmp (nctempchar1 *s,nctempchar1 *t);

#line 214  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeStrev (nctempchar1 *s);

#line 216  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
nctempchar1* LibeStrsave (nctempchar1 *s);

#line 218  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeStrcpy (nctempchar1 *s,nctempchar1 *t);

#line 220  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeStrcat (nctempchar1 *s,nctempchar1 *t);

#line 222  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
nctempchar1* LibeStradd (nctempchar1 *t,nctempchar1 *s);

#line 224  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeIsalpha (int c);

#line 226  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeIsdigit (int c);

#line 228  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeIsalnum (int c);

#line 252  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeAtoi (nctempchar1 *s);

#line 254  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeItoa (int n,nctempchar1 *s);

#line 256  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeItoh (int n,nctempchar1 *s);

#line 258  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeAtof (nctempchar1 *s);

#line 260  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeFtoa (float f,nctempchar1 *fmt,nctempchar1 *s);

#line 288  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeMach (int flag);

#line 290  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeFabs (float x);

#line 292  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeFscale2 (float x,int n);

#line 294  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeGetfman2 (float x);

#line 296  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeGetfexp2 (float x);

#line 298  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeFscale (float x,int n);

#line 300  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeGetfman (float f,int maxdig);

#line 302  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeGetffman (float f);

#line 304  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeGetmaxdig (float f);

#line 306  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeGetfexp (float f);

#line 331  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeClock ();

#line 339  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeSetnb (int n);

#line 342  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeSetnt (int n);

#line 346  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeGetnb ();

#line 349  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeGetnt ();

#line 354  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeMod (int n,int r);

#line 362  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeSqrt (float x);

#line 364  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeLn (float x);

#line 366  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeExp (float x);

#line 368  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeSin (float x);

#line 370  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeCos (float x);

#line 372  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeTan (float x);

#line 374  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeArcsin (float x);

#line 376  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeArccos (float x);

#line 378  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibeArctan (float x);

#line 380  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
float LibePow (float base,float exponent);

#line 386  "/home/barn/Dropbox/Src/Eps/Inc/libe.i"
int LibeSystem (nctempchar1 *cmd);

#line 2  "src.i"
struct src {nctempint1 *Sx;
nctempint1 *Sy;
nctempfloat2 *Sqyy;
nctempfloat2 *Sqxx;
nctempfloat2 *Sfx;
nctempfloat2 *Sfy;
int Ns;
};
typedef struct nctempsrc1 {int d[1]; struct src *a; } nctempsrc1;
struct nctempsrc2 {int d[2]; struct src *a; } ;
struct nctempsrc3 {int d[3]; struct src *a; } ;
struct nctempsrc4 {int d[4]; struct src *a; } ;

#line 13  "src.i"
struct src* SrcNew (nctempint1 *sx,nctempint1 *sy,nctempfloat2 *sqxx,nctempfloat2 *sqyy,nctempfloat2 *sfx,nctempfloat2 *sfy);

#line 18  "src.i"
int SrcDel (struct src* Src);

#line 8  "src.e"
int Srcricker (nctempfloat1 *src,float t0,float f0,int nt,float dt);

#line 11  "src.e"
struct src* SrcNew (nctempint1 *sx,nctempint1 *sy,nctempfloat2 *sqxx,nctempfloat2 *sqyy,nctempfloat2 *sfx,nctempfloat2 *sfy)

#line 13  "src.e"
{

#line 37  "src.e"
struct src* Src;

#line 39  "src.e"
struct src *nctemp5=(struct src*)RunMalloc(sizeof(struct src));
Src =nctemp5;

#line 41  "src.e"
Src->Sx=sx;

#line 42  "src.e"
Src->Sy=sy;

#line 43  "src.e"
Src->Sfx=sfx;

#line 44  "src.e"
Src->Sfy=sfy;

#line 45  "src.e"
Src->Sqxx=sqxx;

#line 46  "src.e"
Src->Sqyy=sqyy;

#line 47  "src.e"
int nctemp47=sx->d[0];Src->Ns =nctemp47;

#line 49  "src.e"
return Src;

#line 13  "src.e"
}

#line 52  "src.e"
int SrcDel (struct src* Src)
{

#line 61  "src.e"
return 1;

#line 52  "src.e"
}

#line 65  "src.e"
int Srcricker (nctempfloat1 *source,float t0,float f0,int nt,float dt)
{

#line 66  "src.e"
float t;
float w0;
float arg;
int i;

#line 71  "src.e"
i =0;
int nctemp59 = (i < nt);
while(nctemp59){
{

#line 72  "src.e"
float nctemp73=(float)(i);
float nctemp77 = nctemp73 * dt;
float nctemp79 = nctemp77 - t0;
t =nctemp79;

#line 73  "src.e"
float nctemp91 = 2.0 * 3.14159;
float nctemp93 = nctemp91 * f0;
w0 =nctemp93;

#line 74  "src.e"
float nctemp102 = w0 * t;
arg =nctemp102;

#line 75  "src.e"
int nctemp106=i;
if((0>i)||(i>=source->d[0])){
nctempstring->a="source";
nctempstring->d[0]=strlen("source")+1;;
LibeArrayex(75,nctempstring,i,0,source->d[0]);
}
float nctemp123 = 0.5 * arg;
float nctemp125 = nctemp123 * arg;
float nctemp126 = 1.0 - nctemp125;
float nctemp134= -0.25;
float nctemp136 = nctemp134 * arg;
float nctemp138 = nctemp136 * arg;
float nctemp128= nctemp138;
float nctemp139=LibeExp(nctemp128);
float nctemp140 = nctemp126 * nctemp139;
source->a[nctemp106] =nctemp140;

#line 71  "src.e"
}
int nctemp149 = i + 1;
i =nctemp149;
int nctemp150 = (i < nt);
nctemp59=nctemp150;
}

#line 77  "src.e"
return 1;

#line 65  "src.e"
}
