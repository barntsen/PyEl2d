//  Translated by epsc  version: Fri Sep 18 13:42:14 2026

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
struct src {nctempint1 *Sx;
nctempint1 *Sy;
nctempfloat2 *Sqyy;
nctempfloat2 *Sqxx;
nctempfloat2 *Sqxy;
nctempfloat2 *Sfx;
nctempfloat2 *Sfy;
int Ns;
};
typedef struct nctempsrc1 {int d[1]; struct src *a; } nctempsrc1;
struct nctempsrc2 {int d[2]; struct src *a; } ;
struct nctempsrc3 {int d[3]; struct src *a; } ;
struct nctempsrc4 {int d[4]; struct src *a; } ;
struct src* SrcNew (nctempint1 *sx,nctempint1 *sy,nctempfloat2 *sqxx,nctempfloat2 *sqyy,nctempfloat2 *sqxy,nctempfloat2 *sfx,nctempfloat2 *sfy)
{
struct src* Src;
{
struct src *nctemp5=(struct src*)RunMalloc(sizeof(struct src));
Src =nctemp5;
Src->Sx = sx;
Src->Sy = sy;
Src->Sfx = sfx;
Src->Sfy = sfy;
Src->Sqxx = sqxx;
Src->Sqyy = sqyy;
Src->Sqxy = sqxy;
int nctemp11=sx->d[0];Src->Ns =nctemp11;
return Src;
}
}
int SrcDel (struct src* Src)
{
{
return 1;
}
}
int Srcricker (nctempfloat1 *source,float t0,float f0,int nt,float dt)
{
int i;
float t;
float w0;
float arg;
{
for(i = 0;i < nt;i = (i + 1)){
{
float nctemp29=(float)(i);
float nctemp33 = nctemp29 * dt;
float nctemp35 = nctemp33 - t0;
t =nctemp35;
w0 = ((2.0 * 3.14159) * f0);
arg = (w0 * t);
int nctemp39=i;
float nctemp56 = 0.5 * arg;
float nctemp58 = nctemp56 * arg;
float nctemp59 = 1.0 - nctemp58;
float nctemp67= -0.25;
float nctemp69 = nctemp67 * arg;
float nctemp71 = nctemp69 * arg;
float nctemp61= nctemp71;
float nctemp72=LibeExp(nctemp61);
float nctemp73 = nctemp59 * nctemp72;
source->a[nctemp39] =nctemp73;
}
}
return 1;
}
}
