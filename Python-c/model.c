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
struct model {nctempfloat2 *tausx;
nctempfloat2 *tauex;
nctempfloat2 *tausy;
nctempfloat2 *tauey;
nctempfloat2 *chisx;
nctempfloat2 *chiex;
nctempfloat2 *chisy;
nctempfloat2 *chiey;
nctempfloat2 *etasx;
nctempfloat2 *etaex;
nctempfloat2 *etasy;
nctempfloat2 *etaey;
nctempfloat2 *lambda;
nctempfloat2 *mu;
nctempfloat2 *nu;
float dt;
float dx;
float w0;
int nb;
int nx;
int ny;
int freesurface;
};
typedef struct nctempmodel1 {int d[1]; struct model *a; } nctempmodel1;
struct nctempmodel2 {int d[2]; struct model *a; } ;
struct nctempmodel3 {int d[3]; struct model *a; } ;
struct nctempmodel4 {int d[4]; struct model *a; } ;
struct model* ModelNew (nctempfloat2 *vp,nctempfloat2 *vs,nctempfloat2 *rho,float dx,float w0,float dt,int nb,int freesurface,nctempfloat2 *tausx,nctempfloat2 *tausy,nctempfloat2 *tauex,nctempfloat2 *tauey,nctempfloat2 *chisx,nctempfloat2 *chisy,nctempfloat2 *chiex,nctempfloat2 *chiey,nctempfloat2 *etasx,nctempfloat2 *etasy,nctempfloat2 *etaex,nctempfloat2 *etaey)
{
int nx;
int ny;
int i;
struct model* m;
int j;
{
int nctemp5=vp->d[0];nx =nctemp5;
int nctemp13=vp->d[1];ny =nctemp13;
for(i = 0;i < 10;i = (i + 1)){
{
struct nctempchar1 *nctemp20;
static struct nctempchar1 nctemp21 = {{ 21}, (char*)"Eps x ============\n\0"};
nctemp20=&nctemp21;
nctempchar1* nctemp18= nctemp20;
int nctemp22=LibePs(nctemp18);
int nctemp26=i;
if((0>i)||(i>=chiex->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:model.e chiex %d %d %d %d \n " ,61,i,0,chiex->d[0]-1);
}
nctemp26=0*chiex->d[0]+nctemp26;
if((0>0)||(0>=chiex->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:model.e chiex %d %d %d %d \n " ,61,0,1,chiex->d[1]-1);
}
float nctemp24= chiex->a[nctemp26];
int nctemp29=LibePf(nctemp24);
struct nctempchar1 *nctemp33;
static struct nctempchar1 nctemp34 = {{ 3}, (char*)"\n\0"};
nctemp33=&nctemp34;
nctempchar1* nctemp31= nctemp33;
int nctemp35=LibePs(nctemp31);
}
}
for(i = 0;i < 10;i = (i + 1)){
{
struct nctempchar1 *nctemp39;
static struct nctempchar1 nctemp40 = {{ 21}, (char*)"Eps y ============\n\0"};
nctemp39=&nctemp40;
nctempchar1* nctemp37= nctemp39;
int nctemp41=LibePs(nctemp37);
int nctemp45=0;
if((0>0)||(0>=chiey->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:model.e chiey %d %d %d %d \n " ,66,0,0,chiey->d[0]-1);
}
nctemp45=i*chiey->d[0]+nctemp45;
if((0>i)||(i>=chiey->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:model.e chiey %d %d %d %d \n " ,66,i,1,chiey->d[1]-1);
}
float nctemp43= chiey->a[nctemp45];
int nctemp48=LibePf(nctemp43);
struct nctempchar1 *nctemp52;
static struct nctempchar1 nctemp53 = {{ 3}, (char*)"\n\0"};
nctemp52=&nctemp53;
nctempchar1* nctemp50= nctemp52;
int nctemp54=LibePs(nctemp50);
}
}
struct model *nctemp59=(struct model*)RunMalloc(sizeof(struct model));
m =nctemp59;
int nctemp67=nx;
nctemp67=nctemp67*ny;
nctempfloat2 *nctemp66;
nctemp66=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp66->d[0]=nx;
nctemp66->d[1]=ny;
nctemp66->a=(float *)RunMalloc(sizeof(float)*nctemp67);
m->mu=nctemp66;
int nctemp78=nx;
nctemp78=nctemp78*ny;
nctempfloat2 *nctemp77;
nctemp77=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp77->d[0]=nx;
nctemp77->d[1]=ny;
nctemp77->a=(float *)RunMalloc(sizeof(float)*nctemp78);
m->lambda=nctemp77;
int nctemp89=nx;
nctemp89=nctemp89*ny;
nctempfloat2 *nctemp88;
nctemp88=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp88->d[0]=nx;
nctemp88->d[1]=ny;
nctemp88->a=(float *)RunMalloc(sizeof(float)*nctemp89);
m->nu=nctemp88;
m->tausx=tausx;
m->tausy=tausy;
m->tauex=tauex;
m->tauey=tauey;
m->chisx=chisx;
m->chisy=chisy;
m->chiex=chiex;
m->chiey=chiey;
m->etasx=etasx;
m->etasy=etasy;
m->etaex=etaex;
m->etaey=etaey;
for(j = 0;j < ny;j = (j + 1)){
{
for(i = 0;i < nx;i = (i + 1)){
{
int nctemp169=i;
if((0>i)||(i>=m->nu->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:model.e m->nu %d %d %d %d \n " ,89,i,0,m->nu->d[0]-1);
}
nctemp169=j*m->nu->d[0]+nctemp169;
if((0>j)||(j>=m->nu->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:model.e m->nu %d %d %d %d \n " ,89,j,1,m->nu->d[1]-1);
}
int nctemp177=i;
if((0>i)||(i>=rho->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:model.e rho %d %d %d %d \n " ,89,i,0,rho->d[0]-1);
}
nctemp177=j*rho->d[0]+nctemp177;
if((0>j)||(j>=rho->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:model.e rho %d %d %d %d \n " ,89,j,1,rho->d[1]-1);
}
float nctemp180 = 1.0 / rho->a[nctemp177];
m->nu->a[nctemp169] =nctemp180;
int nctemp184=i;
if((0>i)||(i>=m->mu->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:model.e m->mu %d %d %d %d \n " ,90,i,0,m->mu->d[0]-1);
}
nctemp184=j*m->mu->d[0]+nctemp184;
if((0>j)||(j>=m->mu->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:model.e m->mu %d %d %d %d \n " ,90,j,1,m->mu->d[1]-1);
}
int nctemp194=i;
if((0>i)||(i>=vs->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:model.e vs %d %d %d %d \n " ,90,i,0,vs->d[0]-1);
}
nctemp194=j*vs->d[0]+nctemp194;
if((0>j)||(j>=vs->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:model.e vs %d %d %d %d \n " ,90,j,1,vs->d[1]-1);
}
int nctemp198=i;
if((0>i)||(i>=vs->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:model.e vs %d %d %d %d \n " ,90,i,0,vs->d[0]-1);
}
nctemp198=j*vs->d[0]+nctemp198;
if((0>j)||(j>=vs->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:model.e vs %d %d %d %d \n " ,90,j,1,vs->d[1]-1);
}
float nctemp201 = vs->a[nctemp194] * vs->a[nctemp198];
int nctemp203=i;
if((0>i)||(i>=rho->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:model.e rho %d %d %d %d \n " ,90,i,0,rho->d[0]-1);
}
nctemp203=j*rho->d[0]+nctemp203;
if((0>j)||(j>=rho->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:model.e rho %d %d %d %d \n " ,90,j,1,rho->d[1]-1);
}
float nctemp206 = nctemp201 * rho->a[nctemp203];
m->mu->a[nctemp184] =nctemp206;
int nctemp210=i;
if((0>i)||(i>=m->lambda->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:model.e m->lambda %d %d %d %d \n " ,91,i,0,m->lambda->d[0]-1);
}
nctemp210=j*m->lambda->d[0]+nctemp210;
if((0>j)||(j>=m->lambda->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:model.e m->lambda %d %d %d %d \n " ,91,j,1,m->lambda->d[1]-1);
}
int nctemp217=i;
if((0>i)||(i>=rho->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:model.e rho %d %d %d %d \n " ,91,i,0,rho->d[0]-1);
}
nctemp217=j*rho->d[0]+nctemp217;
if((0>j)||(j>=rho->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:model.e rho %d %d %d %d \n " ,91,j,1,rho->d[1]-1);
}
int nctemp227=i;
if((0>i)||(i>=vp->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:model.e vp %d %d %d %d \n " ,91,i,0,vp->d[0]-1);
}
nctemp227=j*vp->d[0]+nctemp227;
if((0>j)||(j>=vp->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:model.e vp %d %d %d %d \n " ,91,j,1,vp->d[1]-1);
}
int nctemp231=i;
if((0>i)||(i>=vp->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:model.e vp %d %d %d %d \n " ,91,i,0,vp->d[0]-1);
}
nctemp231=j*vp->d[0]+nctemp231;
if((0>j)||(j>=vp->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:model.e vp %d %d %d %d \n " ,91,j,1,vp->d[1]-1);
}
float nctemp234 = vp->a[nctemp227] * vp->a[nctemp231];
int nctemp243=i;
if((0>i)||(i>=vs->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:model.e vs %d %d %d %d \n " ,91,i,0,vs->d[0]-1);
}
nctemp243=j*vs->d[0]+nctemp243;
if((0>j)||(j>=vs->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:model.e vs %d %d %d %d \n " ,91,j,1,vs->d[1]-1);
}
float nctemp246 = 2.0 * vs->a[nctemp243];
int nctemp248=i;
if((0>i)||(i>=vs->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:model.e vs %d %d %d %d \n " ,91,i,0,vs->d[0]-1);
}
nctemp248=j*vs->d[0]+nctemp248;
if((0>j)||(j>=vs->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:model.e vs %d %d %d %d \n " ,91,j,1,vs->d[1]-1);
}
float nctemp251 = nctemp246 * vs->a[nctemp248];
float nctemp252 = nctemp234 - nctemp251;
float nctemp253 = rho->a[nctemp217] * nctemp252;
m->lambda->a[nctemp210] =nctemp253;
}
}
}
}
m->dt =dt;
m->w0 =w0;
m->dx =dx;
m->nb =nb;
m->freesurface =freesurface;
m->nx =nx;
m->ny =ny;
return m;
}
}
