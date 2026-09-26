//  Translated by epsc  version: Fri Sep 25 17:44:05 2026

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
struct rec {int nr;
nctempint1 *rx;
nctempint1 *ry;
int fd;
int nt;
nctempfloat2 *p;
nctempfloat2 *sxx;
nctempfloat2 *syy;
nctempfloat2 *sxy;
nctempfloat2 *vx;
nctempfloat2 *vy;
nctempfloat2 *wrk;
int resamp;
int pit;
};
typedef struct nctemprec1 {int d[1]; struct rec *a; } nctemprec1;
struct nctemprec2 {int d[2]; struct rec *a; } ;
struct nctemprec3 {int d[3]; struct rec *a; } ;
struct nctemprec4 {int d[4]; struct rec *a; } ;
struct rec* RecNew (nctempint1 *rx,nctempint1 *ry,int nt,int resamp)
{
struct rec* Rec;
{
struct rec *nctemp5=(struct rec*)RunMalloc(sizeof(struct rec));
Rec =nctemp5;
int nctemp11=rx->d[0];Rec->nr =nctemp11;
Rec->rx=rx;
Rec->ry=ry;
Rec->nt =nt;
int nctemp37=Rec->nt;
nctemp37=nctemp37*Rec->nr;
nctempfloat2 *nctemp36;
nctemp36=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp36->d[0]=Rec->nt;
nctemp36->d[1]=Rec->nr;
nctemp36->a=(float *)RunMalloc(sizeof(float)*nctemp37);
Rec->p=nctemp36;
int nctemp48=Rec->nt;
nctemp48=nctemp48*Rec->nr;
nctempfloat2 *nctemp47;
nctemp47=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp47->d[0]=Rec->nt;
nctemp47->d[1]=Rec->nr;
nctemp47->a=(float *)RunMalloc(sizeof(float)*nctemp48);
Rec->vx=nctemp47;
int nctemp59=Rec->nt;
nctemp59=nctemp59*Rec->nr;
nctempfloat2 *nctemp58;
nctemp58=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp58->d[0]=Rec->nt;
nctemp58->d[1]=Rec->nr;
nctemp58->a=(float *)RunMalloc(sizeof(float)*nctemp59);
Rec->vy=nctemp58;
int nctemp70=Rec->nt;
nctemp70=nctemp70*Rec->nr;
nctempfloat2 *nctemp69;
nctemp69=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp69->d[0]=Rec->nt;
nctemp69->d[1]=Rec->nr;
nctemp69->a=(float *)RunMalloc(sizeof(float)*nctemp70);
Rec->sxx=nctemp69;
int nctemp81=Rec->nt;
nctemp81=nctemp81*Rec->nr;
nctempfloat2 *nctemp80;
nctemp80=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp80->d[0]=Rec->nt;
nctemp80->d[1]=Rec->nr;
nctemp80->a=(float *)RunMalloc(sizeof(float)*nctemp81);
Rec->syy=nctemp80;
int nctemp92=Rec->nt;
nctemp92=nctemp92*Rec->nr;
nctempfloat2 *nctemp91;
nctemp91=(nctempfloat2*)RunMalloc(sizeof(nctempfloat2));
nctemp91->d[0]=Rec->nt;
nctemp91->d[1]=Rec->nr;
nctemp91->a=(float *)RunMalloc(sizeof(float)*nctemp92);
Rec->sxy=nctemp91;
Rec->resamp =resamp;
Rec->pit =0;
return Rec;
}
}
int RecReceiver (struct rec* Rec,int it,nctempfloat2 *field,int dtype)
{
int pos;
int ixr;
int iyr;
{
int nctemp114 = Rec->nt - 1;
int nctemp106 = (Rec->pit > nctemp114);
if(nctemp106)
{
{
return 0;
}
}
int nctemp119= it;
int nctemp121= Rec->resamp;
int nctemp123=LibeMod(nctemp119,nctemp121);
int nctemp116 = (nctemp123 ==0);
if(nctemp116)
{
{
for(pos = 0;pos < Rec->nr;pos = (pos + 1)){
{
int nctemp129=pos;
if((0>pos)||(pos>=Rec->rx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:rec.e Rec->rx %d %d %d %d \n " ,71,pos,0,Rec->rx->d[0]-1);
}
ixr =Rec->rx->a[nctemp129];
int nctemp135=pos;
if((0>pos)||(pos>=Rec->ry->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:rec.e Rec->ry %d %d %d %d \n " ,72,pos,0,Rec->ry->d[0]-1);
}
iyr =Rec->ry->a[nctemp135];
int nctemp137 = (dtype ==1);
if(nctemp137)
{
{
int nctemp144=Rec->pit;
if((0>Rec->pit)||(Rec->pit>=Rec->p->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:rec.e Rec->p %d %d %d %d \n " ,74,Rec->pit,0,Rec->p->d[0]-1);
}
nctemp144=pos*Rec->p->d[0]+nctemp144;
if((0>pos)||(pos>=Rec->p->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:rec.e Rec->p %d %d %d %d \n " ,74,pos,1,Rec->p->d[1]-1);
}
int nctemp148=ixr;
if((0>ixr)||(ixr>=field->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:rec.e field %d %d %d %d \n " ,74,ixr,0,field->d[0]-1);
}
nctemp148=iyr*field->d[0]+nctemp148;
if((0>iyr)||(iyr>=field->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:rec.e field %d %d %d %d \n " ,74,iyr,1,field->d[1]-1);
}
Rec->p->a[nctemp144] =field->a[nctemp148];
}
}
else{
{
int nctemp151 = (dtype ==2);
if(nctemp151)
{
{
int nctemp158=Rec->pit;
if((0>Rec->pit)||(Rec->pit>=Rec->vx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:rec.e Rec->vx %d %d %d %d \n " ,76,Rec->pit,0,Rec->vx->d[0]-1);
}
nctemp158=pos*Rec->vx->d[0]+nctemp158;
if((0>pos)||(pos>=Rec->vx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:rec.e Rec->vx %d %d %d %d \n " ,76,pos,1,Rec->vx->d[1]-1);
}
int nctemp162=ixr;
if((0>ixr)||(ixr>=field->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:rec.e field %d %d %d %d \n " ,76,ixr,0,field->d[0]-1);
}
nctemp162=iyr*field->d[0]+nctemp162;
if((0>iyr)||(iyr>=field->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:rec.e field %d %d %d %d \n " ,76,iyr,1,field->d[1]-1);
}
Rec->vx->a[nctemp158] =field->a[nctemp162];
}
}
else{
{
int nctemp165 = (dtype ==3);
if(nctemp165)
{
{
int nctemp172=Rec->pit;
if((0>Rec->pit)||(Rec->pit>=Rec->vy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:rec.e Rec->vy %d %d %d %d \n " ,78,Rec->pit,0,Rec->vy->d[0]-1);
}
nctemp172=pos*Rec->vy->d[0]+nctemp172;
if((0>pos)||(pos>=Rec->vy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:rec.e Rec->vy %d %d %d %d \n " ,78,pos,1,Rec->vy->d[1]-1);
}
int nctemp176=ixr;
if((0>ixr)||(ixr>=field->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:rec.e field %d %d %d %d \n " ,78,ixr,0,field->d[0]-1);
}
nctemp176=iyr*field->d[0]+nctemp176;
if((0>iyr)||(iyr>=field->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:rec.e field %d %d %d %d \n " ,78,iyr,1,field->d[1]-1);
}
Rec->vy->a[nctemp172] =field->a[nctemp176];
}
}
else{
{
int nctemp179 = (dtype ==4);
if(nctemp179)
{
{
int nctemp186=Rec->pit;
if((0>Rec->pit)||(Rec->pit>=Rec->sxx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:rec.e Rec->sxx %d %d %d %d \n " ,80,Rec->pit,0,Rec->sxx->d[0]-1);
}
nctemp186=pos*Rec->sxx->d[0]+nctemp186;
if((0>pos)||(pos>=Rec->sxx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:rec.e Rec->sxx %d %d %d %d \n " ,80,pos,1,Rec->sxx->d[1]-1);
}
int nctemp190=ixr;
if((0>ixr)||(ixr>=field->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:rec.e field %d %d %d %d \n " ,80,ixr,0,field->d[0]-1);
}
nctemp190=iyr*field->d[0]+nctemp190;
if((0>iyr)||(iyr>=field->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:rec.e field %d %d %d %d \n " ,80,iyr,1,field->d[1]-1);
}
Rec->sxx->a[nctemp186] =field->a[nctemp190];
}
}
else{
{
int nctemp193 = (dtype ==5);
if(nctemp193)
{
{
int nctemp200=Rec->pit;
if((0>Rec->pit)||(Rec->pit>=Rec->syy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:rec.e Rec->syy %d %d %d %d \n " ,82,Rec->pit,0,Rec->syy->d[0]-1);
}
nctemp200=pos*Rec->syy->d[0]+nctemp200;
if((0>pos)||(pos>=Rec->syy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:rec.e Rec->syy %d %d %d %d \n " ,82,pos,1,Rec->syy->d[1]-1);
}
int nctemp204=ixr;
if((0>ixr)||(ixr>=field->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:rec.e field %d %d %d %d \n " ,82,ixr,0,field->d[0]-1);
}
nctemp204=iyr*field->d[0]+nctemp204;
if((0>iyr)||(iyr>=field->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:rec.e field %d %d %d %d \n " ,82,iyr,1,field->d[1]-1);
}
Rec->syy->a[nctemp200] =field->a[nctemp204];
}
}
else{
{
int nctemp207 = (dtype ==6);
if(nctemp207)
{
{
int nctemp214=Rec->pit;
if((0>Rec->pit)||(Rec->pit>=Rec->sxy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:rec.e Rec->sxy %d %d %d %d \n " ,84,Rec->pit,0,Rec->sxy->d[0]-1);
}
nctemp214=pos*Rec->sxy->d[0]+nctemp214;
if((0>pos)||(pos>=Rec->sxy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:rec.e Rec->sxy %d %d %d %d \n " ,84,pos,1,Rec->sxy->d[1]-1);
}
int nctemp218=ixr;
if((0>ixr)||(ixr>=field->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:rec.e field %d %d %d %d \n " ,84,ixr,0,field->d[0]-1);
}
nctemp218=iyr*field->d[0]+nctemp218;
if((0>iyr)||(iyr>=field->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:rec.e field %d %d %d %d \n " ,84,iyr,1,field->d[1]-1);
}
Rec->sxy->a[nctemp214] =field->a[nctemp218];
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
}
}
}
}
}
}
}
}
int nctemp230 = Rec->pit + 1;
Rec->pit =nctemp230;
}
}
return 1;
}
}
nctempfloat2 * RecGetrec (struct rec* Rec,int data)
{
{
int nctemp232 = (data ==0);
if(nctemp232)
{
{
return Rec->p;
}
}
else{
{
int nctemp238 = (data ==1);
if(nctemp238)
{
{
return Rec->vx;
}
}
else{
{
int nctemp244 = (data ==2);
if(nctemp244)
{
{
return Rec->vy;
}
}
else{
{
int nctemp250 = (data ==3);
if(nctemp250)
{
{
return Rec->sxx;
}
}
else{
{
int nctemp256 = (data ==4);
if(nctemp256)
{
{
return Rec->syy;
}
}
else{
{
int nctemp262 = (data ==5);
if(nctemp262)
{
{
return Rec->sxy;
}
}
else{
{
return Rec->p;
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
}
}
