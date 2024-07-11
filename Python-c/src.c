/*  Translated by epsc  version today */
#include <stddef.h>
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
int LibeArrayex (int line,nctempchar1 *name,int ival,int index,int bound);
int LibeClearerr ();
int LibeGeterrno ();
nctempchar1* LibeGeterrstr ();
struct MainArg {nctempchar1 *arg;
};
typedef struct nctempMainArg1 {int d[1]; struct MainArg *a; } nctempMainArg1;
struct nctempMainArg2 {int d[2]; struct MainArg *a; } ;
struct nctempMainArg3 {int d[3]; struct MainArg *a; } ;
struct nctempMainArg4 {int d[4]; struct MainArg *a; } ;
int Main (struct nctempMainArg1 *MainArgs);
int LibeInit ();
int LibeDelete ();
int LibeExit ();
nctempchar1* LibeGetenv (nctempchar1 *name);
int LibeOpen (nctempchar1 *name,nctempchar1 *mode);
int LibeClose (int fp);
int LibeGetc (int fp);
int LibeUngetc (int fp);
int LibeGetw (int fp,nctempchar1 *text);
int LibePs (nctempchar1 *s);
int LibePi (int n);
int LibePf (float r);
int LibePutf (int fp,float r,nctempchar1 *form);
int LibePutc (int fp,int c);
int LibePuts (int fp,nctempchar1 *s);
int LibePuti (int fp,int ival);
int LibeRead (int fp,int n,nctempchar1 *array);
int LibeWrite (int fp,int n,nctempchar1 *array);
int LibeSeek (int fp,int pos,int flag);
int LibeFlush (int fp);
int LibeStrlen (nctempchar1 *s);
int LibeStrcmp (nctempchar1 *s,nctempchar1 *t);
int LibeStrev (nctempchar1 *s);
nctempchar1* LibeStrsave (nctempchar1 *s);
int LibeStrcpy (nctempchar1 *s,nctempchar1 *t);
int LibeStrcat (nctempchar1 *s,nctempchar1 *t);
nctempchar1* LibeStradd (nctempchar1 *t,nctempchar1 *s);
int LibeIsalpha (int c);
int LibeIsdigit (int c);
int LibeIsalnum (int c);
int LibeAtoi (nctempchar1 *s);
int LibeItoa (int n,nctempchar1 *s);
int LibeItoh (int n,nctempchar1 *s);
float LibeAtof (nctempchar1 *s);
int LibeFtoa (float f,nctempchar1 *fmt,nctempchar1 *s);
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
int LibeSetnb (int n);
int LibeSetnt (int n);
int LibeGetnb ();
int LibeGetnt ();
int LibeMod (int n,int r);
float LibeSqrt (float x);
float LibeLn (float x);
float LibeExp (float x);
float LibeSin (float x);
float LibeCos (float x);
float LibeTan (float x);
float LibeArcsin (float x);
float LibeArccos (float x);
float LibeArctan (float x);
float LibePow (float base,float exponent);
int LibeSystem (nctempchar1 *cmd);
struct src {nctempfloat1 *Src;
nctempint1 *Sx;
nctempint1 *Sy;
nctempint1 *Fx;
nctempint1 *Fy;
nctempint1 *Sflag;
int Ns;
};
typedef struct nctempsrc1 {int d[1]; struct src *a; } nctempsrc1;
struct nctempsrc2 {int d[2]; struct src *a; } ;
struct nctempsrc3 {int d[3]; struct src *a; } ;
struct nctempsrc4 {int d[4]; struct src *a; } ;
struct src* SrcNew (nctempfloat1 *source,nctempint1 *sx,nctempint1 *sy,nctempint1 *fx,nctempint1 *fy,nctempint1 *sflag);
int SrcDel (struct src* Src);
int Srcricker (nctempfloat1 *src,float t0,float f0,int nt,float dt);
struct src* SrcNew (nctempfloat1 *source,nctempint1 *sx,nctempint1 *sy,nctempint1 *fx,nctempint1 *fy,nctempint1 *sflag)
{
int i;
struct src* Src;
struct src *nctemp5=(struct src*)RunMalloc(sizeof(struct src));
Src =nctemp5;
int nctemp15=source->d[0];int nctemp13=nctemp15;
nctempfloat1 *nctemp12;
nctemp12=(nctempfloat1*)RunMalloc(sizeof(nctempfloat1));
int nctemp20=source->d[0];nctemp12->d[0]=nctemp20;
nctemp12->a=(float *)RunMalloc(sizeof(float)*nctemp13);
Src->Src=nctemp12;
i =0;
int nctemp32=source->d[0];int nctemp28 = (i < nctemp32);
while(nctemp28){
{
int nctemp39=i;
int nctemp42=i;
Src->Src->a[nctemp39] =source->a[nctemp42];
}
int nctemp52 = i + 1;
i =nctemp52;
int nctemp57=source->d[0];int nctemp53 = (i < nctemp57);
nctemp28=nctemp53;
}
Src->Sflag=sflag;
Src->Sx=sx;
Src->Sy=sy;
Src->Fx=fx;
Src->Fy=fy;
int nctemp95=sx->d[0];Src->Ns =nctemp95;
return Src;
}
int SrcDel (struct src* Src)
{
return 1;
}
int Srcricker (nctempfloat1 *source,float t0,float f0,int nt,float dt)
{
float t;
float w0;
float arg;
int i;
i =0;
int nctemp107 = (i < nt);
while(nctemp107){
{
float nctemp121=(float)(i);
float nctemp125 = nctemp121 * dt;
float nctemp127 = nctemp125 - t0;
t =nctemp127;
float nctemp139 = 2.0 * 3.14159;
float nctemp141 = nctemp139 * f0;
w0 =nctemp141;
float nctemp150 = w0 * t;
arg =nctemp150;
int nctemp154=i;
float nctemp171 = 0.5 * arg;
float nctemp173 = nctemp171 * arg;
float nctemp174 = 1.0 - nctemp173;
float nctemp182= -0.25;
float nctemp184 = nctemp182 * arg;
float nctemp186 = nctemp184 * arg;
float nctemp176= nctemp186;
float nctemp187=LibeExp(nctemp176);
float nctemp188 = nctemp174 * nctemp187;
source->a[nctemp154] =nctemp188;
}
int nctemp197 = i + 1;
i =nctemp197;
int nctemp198 = (i < nt);
nctemp107=nctemp198;
}
return 1;
}
