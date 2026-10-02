//  Translated by eps
extern "C" {
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
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

void *GpuNew(int n);
void *GpuDelete(void *f);
void *GpuError();
void *RunMalloc(int n);
int RunFree(void * );
int RunSync();
int RunGetnt();
int RunGetnb();
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
int nctemp114 = it / Rec->resamp;
Rec->pit =nctemp114;
int nctemp123 = Rec->nt - 1;
int nctemp115 = (Rec->pit > nctemp123);
if(nctemp115)
{
{
return 0;
}
}
int nctemp128= it;
int nctemp130= Rec->resamp;
int nctemp132=LibeMod(nctemp128,nctemp130);
int nctemp125 = (nctemp132 ==0);
if(nctemp125)
{
{
for(pos = 0;pos < Rec->nr;pos = (pos + 1)){
{
int nctemp138=pos;
if((0>pos)||(pos>=Rec->rx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:rec.e Rec->rx %d %d %d %d \n " ,72,pos,0,Rec->rx->d[0]-1);
}
ixr =Rec->rx->a[nctemp138];
int nctemp144=pos;
if((0>pos)||(pos>=Rec->ry->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:rec.e Rec->ry %d %d %d %d \n " ,73,pos,0,Rec->ry->d[0]-1);
}
iyr =Rec->ry->a[nctemp144];
int nctemp146 = (dtype ==1);
if(nctemp146)
{
{
int nctemp153=Rec->pit;
if((0>Rec->pit)||(Rec->pit>=Rec->p->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:rec.e Rec->p %d %d %d %d \n " ,75,Rec->pit,0,Rec->p->d[0]-1);
}
nctemp153=pos*Rec->p->d[0]+nctemp153;
if((0>pos)||(pos>=Rec->p->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:rec.e Rec->p %d %d %d %d \n " ,75,pos,1,Rec->p->d[1]-1);
}
int nctemp157=ixr;
if((0>ixr)||(ixr>=field->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:rec.e field %d %d %d %d \n " ,75,ixr,0,field->d[0]-1);
}
nctemp157=iyr*field->d[0]+nctemp157;
if((0>iyr)||(iyr>=field->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:rec.e field %d %d %d %d \n " ,75,iyr,1,field->d[1]-1);
}
Rec->p->a[nctemp153] =field->a[nctemp157];
}
}
else{
{
int nctemp160 = (dtype ==2);
if(nctemp160)
{
{
int nctemp167=Rec->pit;
if((0>Rec->pit)||(Rec->pit>=Rec->vx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:rec.e Rec->vx %d %d %d %d \n " ,77,Rec->pit,0,Rec->vx->d[0]-1);
}
nctemp167=pos*Rec->vx->d[0]+nctemp167;
if((0>pos)||(pos>=Rec->vx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:rec.e Rec->vx %d %d %d %d \n " ,77,pos,1,Rec->vx->d[1]-1);
}
int nctemp171=ixr;
if((0>ixr)||(ixr>=field->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:rec.e field %d %d %d %d \n " ,77,ixr,0,field->d[0]-1);
}
nctemp171=iyr*field->d[0]+nctemp171;
if((0>iyr)||(iyr>=field->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:rec.e field %d %d %d %d \n " ,77,iyr,1,field->d[1]-1);
}
Rec->vx->a[nctemp167] =field->a[nctemp171];
}
}
else{
{
int nctemp174 = (dtype ==3);
if(nctemp174)
{
{
int nctemp181=Rec->pit;
if((0>Rec->pit)||(Rec->pit>=Rec->vy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:rec.e Rec->vy %d %d %d %d \n " ,79,Rec->pit,0,Rec->vy->d[0]-1);
}
nctemp181=pos*Rec->vy->d[0]+nctemp181;
if((0>pos)||(pos>=Rec->vy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:rec.e Rec->vy %d %d %d %d \n " ,79,pos,1,Rec->vy->d[1]-1);
}
int nctemp185=ixr;
if((0>ixr)||(ixr>=field->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:rec.e field %d %d %d %d \n " ,79,ixr,0,field->d[0]-1);
}
nctemp185=iyr*field->d[0]+nctemp185;
if((0>iyr)||(iyr>=field->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:rec.e field %d %d %d %d \n " ,79,iyr,1,field->d[1]-1);
}
Rec->vy->a[nctemp181] =field->a[nctemp185];
}
}
else{
{
int nctemp188 = (dtype ==4);
if(nctemp188)
{
{
int nctemp195=Rec->pit;
if((0>Rec->pit)||(Rec->pit>=Rec->sxx->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:rec.e Rec->sxx %d %d %d %d \n " ,81,Rec->pit,0,Rec->sxx->d[0]-1);
}
nctemp195=pos*Rec->sxx->d[0]+nctemp195;
if((0>pos)||(pos>=Rec->sxx->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:rec.e Rec->sxx %d %d %d %d \n " ,81,pos,1,Rec->sxx->d[1]-1);
}
int nctemp199=ixr;
if((0>ixr)||(ixr>=field->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:rec.e field %d %d %d %d \n " ,81,ixr,0,field->d[0]-1);
}
nctemp199=iyr*field->d[0]+nctemp199;
if((0>iyr)||(iyr>=field->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:rec.e field %d %d %d %d \n " ,81,iyr,1,field->d[1]-1);
}
Rec->sxx->a[nctemp195] =field->a[nctemp199];
}
}
else{
{
int nctemp202 = (dtype ==5);
if(nctemp202)
{
{
int nctemp209=Rec->pit;
if((0>Rec->pit)||(Rec->pit>=Rec->syy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:rec.e Rec->syy %d %d %d %d \n " ,83,Rec->pit,0,Rec->syy->d[0]-1);
}
nctemp209=pos*Rec->syy->d[0]+nctemp209;
if((0>pos)||(pos>=Rec->syy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:rec.e Rec->syy %d %d %d %d \n " ,83,pos,1,Rec->syy->d[1]-1);
}
int nctemp213=ixr;
if((0>ixr)||(ixr>=field->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:rec.e field %d %d %d %d \n " ,83,ixr,0,field->d[0]-1);
}
nctemp213=iyr*field->d[0]+nctemp213;
if((0>iyr)||(iyr>=field->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:rec.e field %d %d %d %d \n " ,83,iyr,1,field->d[1]-1);
}
Rec->syy->a[nctemp209] =field->a[nctemp213];
}
}
else{
{
int nctemp216 = (dtype ==6);
if(nctemp216)
{
{
int nctemp223=Rec->pit;
if((0>Rec->pit)||(Rec->pit>=Rec->sxy->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:rec.e Rec->sxy %d %d %d %d \n " ,85,Rec->pit,0,Rec->sxy->d[0]-1);
}
nctemp223=pos*Rec->sxy->d[0]+nctemp223;
if((0>pos)||(pos>=Rec->sxy->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:rec.e Rec->sxy %d %d %d %d \n " ,85,pos,1,Rec->sxy->d[1]-1);
}
int nctemp227=ixr;
if((0>ixr)||(ixr>=field->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:rec.e field %d %d %d %d \n " ,85,ixr,0,field->d[0]-1);
}
nctemp227=iyr*field->d[0]+nctemp227;
if((0>iyr)||(iyr>=field->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:rec.e field %d %d %d %d \n " ,85,iyr,1,field->d[1]-1);
}
Rec->sxy->a[nctemp223] =field->a[nctemp227];
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
}
}
return 1;
}
}
int RecCopy (nctempfloat2 *a,nctempfloat2 *b)
{
int i;
int j;
{
i =0;
int nctemp240=a->d[0];int nctemp236 = (i < nctemp240);
while(nctemp236){
{
{
j =0;
int nctemp252=a->d[1];int nctemp248 = (j < nctemp252);
while(nctemp248){
{
{
int nctemp259=i;
if((0>i)||(i>=b->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:rec.e b %d %d %d %d \n " ,103,i,0,b->d[0]-1);
}
nctemp259=j*b->d[0]+nctemp259;
if((0>j)||(j>=b->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:rec.e b %d %d %d %d \n " ,103,j,1,b->d[1]-1);
}
int nctemp263=i;
if((0>i)||(i>=a->d[0])){
printf("***Out of bounds error (file,array,line,index,rank,bound:rec.e a %d %d %d %d \n " ,103,i,0,a->d[0]-1);
}
nctemp263=j*a->d[0]+nctemp263;
if((0>j)||(j>=a->d[1])){
printf("***Out of bounds error (file,array,line,index,rank,bound:rec.e a %d %d %d %d \n " ,103,j,1,a->d[1]-1);
}
b->a[nctemp259] =a->a[nctemp263];
}
}
int nctemp274 = j + 1;
j =nctemp274;
int nctemp279=a->d[1];int nctemp275 = (j < nctemp279);
nctemp248=nctemp275;
}
}
}
int nctemp291 = i + 1;
i =nctemp291;
int nctemp296=a->d[0];int nctemp292 = (i < nctemp296);
nctemp236=nctemp292;
}
return 1;
}
}
int RecGetrec (struct rec* Rec,nctempfloat2 *data,int type)
{
{
int nctemp301 = (type ==1);
if(nctemp301)
{
{
nctempfloat2* nctemp306= Rec->p;
nctempfloat2* nctemp309= data;
int nctemp312=RecCopy(nctemp306,nctemp309);
}
}
else{
{
int nctemp313 = (type ==2);
if(nctemp313)
{
{
nctempfloat2* nctemp318= Rec->vx;
nctempfloat2* nctemp321= data;
int nctemp324=RecCopy(nctemp318,nctemp321);
}
}
else{
{
int nctemp325 = (type ==3);
if(nctemp325)
{
{
nctempfloat2* nctemp330= Rec->vy;
nctempfloat2* nctemp333= data;
int nctemp336=RecCopy(nctemp330,nctemp333);
}
}
else{
{
int nctemp337 = (type ==4);
if(nctemp337)
{
{
nctempfloat2* nctemp342= Rec->sxx;
nctempfloat2* nctemp345= data;
int nctemp348=RecCopy(nctemp342,nctemp345);
}
}
else{
{
int nctemp349 = (type ==5);
if(nctemp349)
{
{
nctempfloat2* nctemp354= Rec->syy;
nctempfloat2* nctemp357= data;
int nctemp360=RecCopy(nctemp354,nctemp357);
}
}
else{
{
int nctemp361 = (type ==6);
if(nctemp361)
{
{
nctempfloat2* nctemp366= Rec->sxy;
nctempfloat2* nctemp369= data;
int nctemp372=RecCopy(nctemp366,nctemp369);
}
}
else{
{
nctempfloat2* nctemp374= Rec->p;
nctempfloat2* nctemp377= data;
int nctemp380=RecCopy(nctemp374,nctemp377);
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
return 1;
}
}
};