
#line 1  "libe.i"
/*  Translated by epsc  version today */

#line 4  "libe.i"
#include <stddef.h>
typedef struct { float r; float i;} complex; 

#line 3  "libe.i"
typedef struct nctempfloat1 { int d[1]; float *a;} nctempfloat1; 

#line 5  "libe.i"
typedef struct nctempint1 { int d[1]; int *a;} nctempint1; 

#line 7  "libe.i"
typedef struct nctempchar1 { int d[1]; char *a;} nctempchar1; 
typedef struct nctempcomplex1 { int d[1]; complex *a;} nctempcomplex1; 

#line 8  "libe.i"
static struct nctempchar1 nctempstringx = {0, NULL};
static struct nctempchar1 *nctempstring = &nctempstringx;
typedef struct nctempfloat2 { int d[2]; float *a;} nctempfloat2; 

#line 10  "libe.i"
typedef struct nctempint2 { int d[2]; int *a;} nctempint2; 
typedef struct nctempchar2 { int d[2]; char *a;} nctempchar2; 

#line 12  "libe.i"
typedef struct nctempcomplex2 { int d[2]; complex *a;} nctempcomplex2; 

#line 13  "libe.i"
typedef struct nctempfloat3 { int d[3]; float *a;} nctempfloat3; 

#line 14  "libe.i"
typedef struct nctempint3 { int d[3]; int *a;} nctempint3; 

#line 15  "libe.i"
typedef struct nctempchar3 { int d[3]; char *a;} nctempchar3; 

#line 16  "libe.i"
typedef struct nctempcomplex3 { int d[3]; complex *a;} nctempcomplex3; 

#line 17  "libe.i"
typedef struct nctempfloat4 { int d[4]; float *a;} nctempfloat4; 

#line 18  "libe.i"
typedef struct nctempint4 { int d[4]; int *a;} nctempint4; 

#line 19  "libe.i"
typedef struct nctempchar4 { int d[4]; char *a;} nctempchar4; 

#line 20  "libe.i"
typedef struct nctempcomplex4 { int d[4]; complex *a;} nctempcomplex4; 
#include <stdlib.h>
#include <string.h>
void *RunMalloc(int n); 
int RunFree(void *n); 

#line 87  "libe.i"
int LibeArrayex (int line,nctempchar1 *name,int ival,int index,int bound);

#line 89  "libe.i"
int LibeClearerr ();

#line 90  "libe.i"
int LibeGeterrno ();

#line 91  "libe.i"
nctempchar1* LibeGeterrstr ();

#line 143  "libe.i"
struct MainArg {nctempchar1 *arg;
};
typedef struct nctempMainArg1 {int d[1]; struct MainArg *a; } nctempMainArg1;
struct nctempMainArg2 {int d[2]; struct MainArg *a; } ;
struct nctempMainArg3 {int d[3]; struct MainArg *a; } ;
struct nctempMainArg4 {int d[4]; struct MainArg *a; } ;

#line 145  "libe.i"
int Main (struct nctempMainArg1 *MainArgs);

#line 153  "libe.i"
int LibeInit ();

#line 154  "libe.i"
int LibeDelete ();

#line 155  "libe.i"
int LibeExit ();

#line 156  "libe.i"
nctempchar1* LibeGetenv (nctempchar1 *name);

#line 172  "libe.i"
int LibeOpen (nctempchar1 *name,nctempchar1 *mode);

#line 173  "libe.i"
int LibeClose (int fp);

#line 174  "libe.i"
int LibeGetc (int fp);

#line 175  "libe.i"
int LibeUngetc (int fp);

#line 176  "libe.i"
int LibeGetw (int fp,nctempchar1 *text);

#line 177  "libe.i"
int LibePs (nctempchar1 *s);

#line 178  "libe.i"
int LibePi (int n);

#line 179  "libe.i"
int LibePf (float r);

#line 180  "libe.i"
int LibePutf (int fp,float r,nctempchar1 *form);

#line 181  "libe.i"
int LibePutc (int fp,int c);

#line 182  "libe.i"
int LibePuts (int fp,nctempchar1 *s);

#line 183  "libe.i"
int LibePuti (int fp,int ival);

#line 184  "libe.i"
int LibeRead (int fp,int n,nctempchar1 *array);

#line 185  "libe.i"
int LibeWrite (int fp,int n,nctempchar1 *array);

#line 186  "libe.i"
int LibeSeek (int fp,int pos,int flag);

#line 187  "libe.i"
int LibeFlush (int fp);

#line 222  "libe.i"
int LibeStrlen (nctempchar1 *s);

#line 223  "libe.i"
int LibeStrcmp (nctempchar1 *s,nctempchar1 *t);

#line 224  "libe.i"
int LibeStrev (nctempchar1 *s);

#line 225  "libe.i"
nctempchar1* LibeStrsave (nctempchar1 *s);

#line 226  "libe.i"
int LibeStrcpy (nctempchar1 *s,nctempchar1 *t);

#line 227  "libe.i"
int LibeStrcat (nctempchar1 *s,nctempchar1 *t);

#line 228  "libe.i"
nctempchar1* LibeStradd (nctempchar1 *t,nctempchar1 *s);

#line 229  "libe.i"
int LibeIsalpha (int c);

#line 230  "libe.i"
int LibeIsdigit (int c);

#line 231  "libe.i"
int LibeIsalnum (int c);

#line 258  "libe.i"
int LibeAtoi (nctempchar1 *s);

#line 259  "libe.i"
int LibeItoa (int n,nctempchar1 *s);

#line 260  "libe.i"
int LibeItoh (int n,nctempchar1 *s);

#line 261  "libe.i"
float LibeAtof (nctempchar1 *s);

#line 262  "libe.i"
int LibeFtoa (float f,nctempchar1 *fmt,nctempchar1 *s);

#line 292  "libe.i"
float LibeMach (int flag);

#line 293  "libe.i"
float LibeFabs (float x);

#line 294  "libe.i"
float LibeFscale2 (float x,int n);

#line 295  "libe.i"
float LibeGetfman2 (float x);

#line 296  "libe.i"
int LibeGetfexp2 (float x);

#line 297  "libe.i"
float LibeFscale (float x,int n);

#line 298  "libe.i"
int LibeGetfman (float f,int maxdig);

#line 299  "libe.i"
float LibeGetffman (float f);

#line 300  "libe.i"
int LibeGetmaxdig (float f);

#line 301  "libe.i"
int LibeGetfexp (float f);

#line 328  "libe.i"
float LibeClock ();

#line 333  "libe.i"
int LibeSetnb (int n);

#line 335  "libe.i"
int LibeSetnt (int n);

#line 338  "libe.i"
int LibeGetnb ();

#line 340  "libe.i"
int LibeGetnt ();

#line 349  "libe.i"
int LibeMod (int n,int r);

#line 362  "libe.i"
float LibeSqrt (float x);

#line 363  "libe.i"
float LibeLn (float x);

#line 364  "libe.i"
float LibeExp (float x);

#line 365  "libe.i"
float LibeSin (float x);

#line 366  "libe.i"
float LibeCos (float x);

#line 367  "libe.i"
float LibeTan (float x);

#line 368  "libe.i"
float LibeArcsin (float x);

#line 369  "libe.i"
float LibeArccos (float x);

#line 370  "libe.i"
float LibeArctan (float x);

#line 371  "libe.i"
float LibePow (float base,float exponent);

#line 376  "libe.i"
int LibeSystem (nctempchar1 *cmd);

#line 29  "run.i"
int RunCreate (nctempchar1 *name);

#line 38  "run.i"
float RunClock ();

#line 46  "run.i"
int RunOpen (nctempchar1 *name,nctempchar1 *mode);

#line 55  "run.i"
int RunClose (int fd);

#line 64  "run.i"
int RunRead (int fd,int lbuff,nctempchar1 *buffer);

#line 77  "run.i"
int RunWrite (int fd,int lbuff,nctempchar1 *buffer);

#line 89  "run.i"
int RunSeek (int fd,int pos,int flag);

#line 103  "run.i"
nctempchar1* RunGetenv (nctempchar1 *name);

#line 122  "run.i"
int RunStrcmp (nctempchar1 *s,nctempchar1 *t);

#line 130  "run.i"
int RunStrlen (nctempchar1 *s);

#line 138  "run.i"
int RunExit ();

#line 145  "run.i"
int RunSystem (nctempchar1 *cmd);

#line 22  "libe.e"
int LibeErrno;

#line 23  "libe.e"
nctempchar1 *LibeErrstr;

#line 32  "libe.e"
int LibeErrinit ();

#line 33  "libe.e"
int LibeErrinit (
#line 34  "libe.e"
)
{

#line 35  "libe.e"
LibeErrno =1;

#line 36  "libe.e"
LibeErrstr=(0);

#line 37  "libe.e"
return 1;

#line 34  "libe.e"
}

#line 48  "libe.e"
int LibeGeterrno (
#line 49  "libe.e"
)
{

#line 50  "libe.e"
return LibeErrno;

#line 49  "libe.e"
}

#line 60  "libe.e"
int LibeClearerr (
#line 61  "libe.e"
)
{

#line 62  "libe.e"
LibeErrno =1;

#line 63  "libe.e"
return 1;

#line 61  "libe.e"
}

#line 73  "libe.e"
nctempchar1 * LibeGeterrstr (
#line 74  "libe.e"
)
{

#line 75  "libe.e"
return LibeErrstr;

#line 74  "libe.e"
}

#line 86  "libe.e"
nctempchar1 * LibeGetenv (nctempchar1 *name)

#line 87  "libe.e"
{

#line 88  "libe.e"
nctempchar1* nctemp20= name;
nctempchar1* nctemp23=RunGetenv(nctemp20);
return nctemp23;

#line 87  "libe.e"
}

#line 102  "libe.e"
int LibeArrayex (int line,nctempchar1 *name,int ival,int index,int bound)

#line 104  "libe.e"
{

#line 105  "libe.e"
int nctemp25= 4;
struct nctempchar1 *nctemp29;
static struct nctempchar1 nctemp30 = {{ 37}, (char*)"Array index out of bond at line no: \0"};
nctemp29=&nctemp30;
nctempchar1* nctemp27= nctemp29;
int nctemp31=LibePuts(nctemp25,nctemp27);

#line 106  "libe.e"
int nctemp33= 4;
int nctemp35= line;
int nctemp37=LibePuti(nctemp33,nctemp35);
int nctemp39= 4;
struct nctempchar1 *nctemp43;
static struct nctempchar1 nctemp44 = {{ 3}, (char*)"\n\0"};
nctemp43=&nctemp44;
nctempchar1* nctemp41= nctemp43;
int nctemp45=LibePuts(nctemp39,nctemp41);

#line 107  "libe.e"
int nctemp47= 4;
struct nctempchar1 *nctemp51;
static struct nctempchar1 nctemp52 = {{ 13}, (char*)"Array name: \0"};
nctemp51=&nctemp52;
nctempchar1* nctemp49= nctemp51;
int nctemp53=LibePuts(nctemp47,nctemp49);

#line 108  "libe.e"
int nctemp55= 4;
nctempchar1* nctemp57= name;
int nctemp60=LibePuts(nctemp55,nctemp57);
int nctemp62= 4;
struct nctempchar1 *nctemp66;
static struct nctempchar1 nctemp67 = {{ 3}, (char*)"\n\0"};
nctemp66=&nctemp67;
nctempchar1* nctemp64= nctemp66;
int nctemp68=LibePuts(nctemp62,nctemp64);

#line 109  "libe.e"
int nctemp70= 4;
struct nctempchar1 *nctemp74;
static struct nctempchar1 nctemp75 = {{ 11}, (char*)"Index no: \0"};
nctemp74=&nctemp75;
nctempchar1* nctemp72= nctemp74;
int nctemp76=LibePuts(nctemp70,nctemp72);

#line 110  "libe.e"
int nctemp78= 4;
int nctemp80= index;
int nctemp82=LibePuti(nctemp78,nctemp80);
int nctemp84= 4;
struct nctempchar1 *nctemp88;
static struct nctempchar1 nctemp89 = {{ 3}, (char*)"\n\0"};
nctemp88=&nctemp89;
nctempchar1* nctemp86= nctemp88;
int nctemp90=LibePuts(nctemp84,nctemp86);

#line 111  "libe.e"
int nctemp92= 4;
struct nctempchar1 *nctemp96;
static struct nctempchar1 nctemp97 = {{ 14}, (char*)"Index value: \0"};
nctemp96=&nctemp97;
nctempchar1* nctemp94= nctemp96;
int nctemp98=LibePuts(nctemp92,nctemp94);

#line 112  "libe.e"
int nctemp100= 4;
int nctemp102= ival;
int nctemp104=LibePuti(nctemp100,nctemp102);
int nctemp106= 4;
struct nctempchar1 *nctemp110;
static struct nctempchar1 nctemp111 = {{ 3}, (char*)"\n\0"};
nctemp110=&nctemp111;
nctempchar1* nctemp108= nctemp110;
int nctemp112=LibePuts(nctemp106,nctemp108);

#line 113  "libe.e"
int nctemp114= 4;
struct nctempchar1 *nctemp118;
static struct nctempchar1 nctemp119 = {{ 16}, (char*)"Index bound: 0-\0"};
nctemp118=&nctemp119;
nctempchar1* nctemp116= nctemp118;
int nctemp120=LibePuts(nctemp114,nctemp116);

#line 114  "libe.e"
int nctemp122= 4;
int nctemp129 = bound - 1;
int nctemp124= nctemp129;
int nctemp130=LibePuti(nctemp122,nctemp124);
int nctemp132= 4;
struct nctempchar1 *nctemp136;
static struct nctempchar1 nctemp137 = {{ 3}, (char*)"\n\0"};
nctemp136=&nctemp137;
nctempchar1* nctemp134= nctemp136;
int nctemp138=LibePuts(nctemp132,nctemp134);

#line 115  "libe.e"
int nctemp140= 4;
int nctemp142=LibeFlush(nctemp140);

#line 117  "libe.e"
int nctemp144=RunExit();

#line 118  "libe.e"
return 1;

#line 104  "libe.e"
}

#line 137  "libe.e"
int LibeIoinit ();

#line 138  "libe.e"
int LibeMathinit ();

#line 139  "libe.e"
int LibeInit (
#line 140  "libe.e"
)
{

#line 141  "libe.e"
int rval;

#line 143  "libe.e"
int nctemp150=LibeErrinit();
rval =nctemp150;

#line 144  "libe.e"
int nctemp155=LibeIoinit();
rval =nctemp155;

#line 145  "libe.e"
int nctemp160=LibeMathinit();
rval =nctemp160;

#line 146  "libe.e"
int nctemp165= 1024;
int nctemp167=LibeSetnb(nctemp165);
rval =nctemp167;

#line 147  "libe.e"
int nctemp172= 1024;
int nctemp174=LibeSetnt(nctemp172);
rval =nctemp174;

#line 148  "libe.e"
return rval;

#line 140  "libe.e"
}

#line 151  "libe.e"
int LibeIodelete ();

#line 153  "libe.e"
int LibeDelete (
#line 154  "libe.e"
)
{

#line 155  "libe.e"
int nctemp177=LibeIodelete();

#line 156  "libe.e"
return 1;

#line 154  "libe.e"
}

#line 166  "libe.e"
int LibeExit (
#line 167  "libe.e"
)
{

#line 168  "libe.e"
int nctemp180=RunExit();

#line 169  "libe.e"
return 1;

#line 167  "libe.e"
}

#line 193  "libe.e"
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

#line 216  "libe.e"
struct nctempLibeFdescr1 *LibeFarr;

#line 228  "libe.e"
int LibeFillbuff (int fp);

#line 229  "libe.e"
int LibeFlushbuff (int fp);

#line 236  "libe.e"
nctempchar1 *LibeTmpstr;

#line 264  "libe.e"
int LibeIoinit (
#line 265  "libe.e"
)
{

#line 266  "libe.e"
int i;

#line 269  "libe.e"
int nctemp188=40;
struct nctempLibeFdescr1 *nctemp187;
nctemp187=(struct nctempLibeFdescr1*)RunMalloc(sizeof(struct nctempLibeFdescr1));
nctemp187->d[0]=40;
nctemp187->a=(struct LibeFdescr*)RunMalloc(sizeof(struct LibeFdescr)*nctemp188);
LibeFarr=nctemp187;

#line 270  "libe.e"
nctempLibeFdescr1 *nctemp192 =LibeFarr;
int nctemp191 =(nctemp192==0);
if(nctemp191)
{

#line 271  "libe.e"
LibeErrno =(-100);

#line 272  "libe.e"
return 0;

#line 270  "libe.e"
}

#line 274  "libe.e"
i =0;
int nctemp205 = (i < 40);
while(nctemp205){
{

#line 275  "libe.e"
int nctemp212=i;
if((0>i)||(i>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(275,nctempstring,i,0,LibeFarr->d[0]);
}
LibeFarr->a[nctemp212].cnt =0;

#line 276  "libe.e"
int nctemp218=i;
if((0>i)||(i>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(276,nctempstring,i,0,LibeFarr->d[0]);
}
LibeFarr->a[nctemp218].ptr =0;

#line 277  "libe.e"
int nctemp224=i;
if((0>i)||(i>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(277,nctempstring,i,0,LibeFarr->d[0]);
}
LibeFarr->a[nctemp224].bufsize =0;

#line 278  "libe.e"
int nctemp230=i;
if((0>i)||(i>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(278,nctempstring,i,0,LibeFarr->d[0]);
}
LibeFarr->a[nctemp230].base=(0);

#line 279  "libe.e"
int nctemp237=i;
if((0>i)||(i>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(279,nctempstring,i,0,LibeFarr->d[0]);
}
LibeFarr->a[nctemp237].readflg =0;

#line 280  "libe.e"
int nctemp243=i;
if((0>i)||(i>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(280,nctempstring,i,0,LibeFarr->d[0]);
}
LibeFarr->a[nctemp243].writflg =0;

#line 281  "libe.e"
int nctemp249=i;
if((0>i)||(i>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(281,nctempstring,i,0,LibeFarr->d[0]);
}
LibeFarr->a[nctemp249].unbflg =0;

#line 282  "libe.e"
int nctemp255=i;
if((0>i)||(i>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(282,nctempstring,i,0,LibeFarr->d[0]);
}
LibeFarr->a[nctemp255].errflg =1;

#line 283  "libe.e"
int nctemp261=i;
if((0>i)||(i>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(283,nctempstring,i,0,LibeFarr->d[0]);
}
LibeFarr->a[nctemp261].eoflg =0;

#line 284  "libe.e"
int nctemp267=i;
if((0>i)||(i>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(284,nctempstring,i,0,LibeFarr->d[0]);
}
LibeFarr->a[nctemp267].fd =0;

#line 274  "libe.e"
}
int nctemp278 = i + 1;
i =nctemp278;
int nctemp279 = (i < 40);
nctemp205=nctemp279;
}

#line 288  "libe.e"
int nctemp286=0;
if((0>0)||(0>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(288,nctempstring,0,0,LibeFarr->d[0]);
}
int nctemp288= -1;
LibeFarr->a[nctemp286].fd =nctemp288;

#line 289  "libe.e"
int nctemp292=0;
if((0>0)||(0>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(289,nctempstring,0,0,LibeFarr->d[0]);
}
LibeFarr->a[nctemp292].readflg =1;

#line 290  "libe.e"
int nctemp298=1;
if((0>1)||(1>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(290,nctempstring,1,0,LibeFarr->d[0]);
}
int nctemp300= -1;
LibeFarr->a[nctemp298].fd =nctemp300;

#line 291  "libe.e"
int nctemp304=1;
if((0>1)||(1>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(291,nctempstring,1,0,LibeFarr->d[0]);
}
LibeFarr->a[nctemp304].readflg =1;

#line 296  "libe.e"
int nctemp310=2;
if((0>2)||(2>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(296,nctempstring,2,0,LibeFarr->d[0]);
}
LibeFarr->a[nctemp310].fd =0;

#line 297  "libe.e"
int nctemp316=2;
if((0>2)||(2>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(297,nctempstring,2,0,LibeFarr->d[0]);
}
LibeFarr->a[nctemp316].readflg =1;

#line 298  "libe.e"
int nctemp322=3;
if((0>3)||(3>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(298,nctempstring,3,0,LibeFarr->d[0]);
}
LibeFarr->a[nctemp322].fd =1;

#line 299  "libe.e"
int nctemp328=3;
if((0>3)||(3>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(299,nctempstring,3,0,LibeFarr->d[0]);
}
LibeFarr->a[nctemp328].writflg =1;

#line 300  "libe.e"
int nctemp334=4;
if((0>4)||(4>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(300,nctempstring,4,0,LibeFarr->d[0]);
}
LibeFarr->a[nctemp334].fd =2;

#line 301  "libe.e"
int nctemp340=4;
if((0>4)||(4>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(301,nctempstring,4,0,LibeFarr->d[0]);
}
LibeFarr->a[nctemp340].writflg =1;

#line 306  "libe.e"
int nctemp349=64;
nctempchar1 *nctemp348;
nctemp348=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp348->d[0]=64;
nctemp348->a=(char *)RunMalloc(sizeof(char)*nctemp349);
LibeTmpstr=nctemp348;

#line 307  "libe.e"
nctempchar1 *nctemp353 =LibeTmpstr;
int nctemp352 =(nctemp353==0);
if(nctemp352)
{

#line 308  "libe.e"
LibeErrno =(-100);

#line 309  "libe.e"
return 0;

#line 307  "libe.e"
}

#line 311  "libe.e"
return 1;

#line 265  "libe.e"
}

#line 316  "libe.e"
int LibeIodelete (
#line 317  "libe.e"
)
{

#line 318  "libe.e"
int stat;
int fd;
int i;

#line 323  "libe.e"
RunFree(LibeTmpstr->a);
RunFree(LibeTmpstr);

#line 329  "libe.e"
stat =1;

#line 330  "libe.e"
i =0;
int nctemp374 = (i < 40);
while(nctemp374){
{

#line 331  "libe.e"
int nctemp381=i;
if((0>i)||(i>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(331,nctempstring,i,0,LibeFarr->d[0]);
}
nctempchar1 *nctemp379 =LibeFarr->a[nctemp381].base;
int nctemp378 =(nctemp379!=0);
if(nctemp378)

#line 332  "libe.e"
{

#line 333  "libe.e"
int nctemp385 = (i > 4);
if(nctemp385)

#line 334  "libe.e"
{

#line 335  "libe.e"
int nctemp393=i;
if((0>i)||(i>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(335,nctempstring,i,0,LibeFarr->d[0]);
}
fd =LibeFarr->a[nctemp393].fd;

#line 336  "libe.e"
int nctemp399= fd;
int nctemp401=RunClose(nctemp399);
stat =nctemp401;

#line 337  "libe.e"
int nctemp402 = (stat ==0);
if(nctemp402)
{

#line 338  "libe.e"
struct nctempchar1 *nctemp411;
static struct nctempchar1 nctemp412 = {{ 21}, (char*)"Could not close file\0"};
nctemp411=&nctemp412;
LibeErrstr=nctemp411;

#line 339  "libe.e"
LibeErrno =(-106);

#line 337  "libe.e"
}

#line 334  "libe.e"
}

#line 342  "libe.e"
int nctemp421= i;
int nctemp423=LibeFlush(nctemp421);
stat =nctemp423;

#line 343  "libe.e"
int nctemp426=i;
if((0>i)||(i>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(343,nctempstring,i,0,LibeFarr->d[0]);
}
RunFree(LibeFarr->a[nctemp426].base->a);
RunFree(LibeFarr->a[nctemp426].base);

#line 332  "libe.e"
}

#line 330  "libe.e"
}
int nctemp437 = i + 1;
i =nctemp437;
int nctemp438 = (i < 40);
nctemp374=nctemp438;
}

#line 348  "libe.e"
RunFree(LibeFarr->a);
RunFree(LibeFarr);

#line 350  "libe.e"
return stat;

#line 317  "libe.e"
}

#line 377  "libe.e"
int LibeOpen (nctempchar1 *name,nctempchar1 *mode)

#line 378  "libe.e"
{

#line 379  "libe.e"
int fd;
int slot;
int i;

#line 384  "libe.e"
int nctemp449=0;
if((0>0)||(0>=mode->d[0])){
nctempstring->a="mode";
nctempstring->d[0]=strlen("mode")+1;;
LibeArrayex(384,nctempstring,0,0,mode->d[0]);
}
char nctemp452=(char)('r');
int nctemp446 = (mode->a[nctemp449] !=nctemp452);
if(nctemp446)

#line 385  "libe.e"
{
int nctemp458=0;
if((0>0)||(0>=mode->d[0])){
nctempstring->a="mode";
nctempstring->d[0]=strlen("mode")+1;;
LibeArrayex(385,nctempstring,0,0,mode->d[0]);
}
char nctemp461=(char)('w');
int nctemp455 = (mode->a[nctemp458] !=nctemp461);
if(nctemp455)

#line 386  "libe.e"
{
int nctemp467=0;
if((0>0)||(0>=mode->d[0])){
nctempstring->a="mode";
nctempstring->d[0]=strlen("mode")+1;;
LibeArrayex(386,nctempstring,0,0,mode->d[0]);
}
char nctemp470=(char)('a');
int nctemp464 = (mode->a[nctemp467] !=nctemp470);
if(nctemp464)
{

#line 387  "libe.e"
struct nctempchar1 *nctemp478;
static struct nctempchar1 nctemp479 = {{ 20}, (char*)"Unknown file mode\n\0"};
nctemp478=&nctemp479;
LibeErrstr=nctemp478;

#line 388  "libe.e"
LibeErrno =(-103);

#line 389  "libe.e"
return 0;

#line 386  "libe.e"
}
}

#line 385  "libe.e"
}

#line 394  "libe.e"
i =0;

#line 395  "libe.e"
int nctemp492= -1;
slot =nctemp492;

#line 396  "libe.e"
int nctemp496 = (slot < 0);
int nctemp501 = (i < 40);
int nctemp493 = (nctemp496 && nctemp501);
int nctemp505=nctemp493;
while(nctemp505)
{{

#line 397  "libe.e"
int nctemp512=i;
if((0>i)||(i>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(397,nctempstring,i,0,LibeFarr->d[0]);
}
int nctemp509 = (LibeFarr->a[nctemp512].readflg ==0);
int nctemp519=i;
if((0>i)||(i>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(397,nctempstring,i,0,LibeFarr->d[0]);
}
int nctemp516 = (LibeFarr->a[nctemp519].writflg ==0);
int nctemp506 = (nctemp509 && nctemp516);
if(nctemp506)

#line 398  "libe.e"
{
slot =i;
}

#line 399  "libe.e"
int nctemp534 = i + 1;
i =nctemp534;

#line 396  "libe.e"
}
int nctemp538 = (slot < 0);
int nctemp543 = (i < 40);
int nctemp535 = (nctemp538 && nctemp543);
nctemp505=nctemp535;}
#line 404  "libe.e"
int nctemp547 = (slot < 0);
if(nctemp547)
{

#line 405  "libe.e"
struct nctempchar1 *nctemp556;
static struct nctempchar1 nctemp557 = {{ 22}, (char*)"Too many open files\n\0"};
nctemp556=&nctemp557;
LibeErrstr=nctemp556;

#line 406  "libe.e"
LibeErrno =(-104);

#line 407  "libe.e"
return 0;

#line 404  "libe.e"
}

#line 411  "libe.e"
int nctemp569=0;
if((0>0)||(0>=mode->d[0])){
nctempstring->a="mode";
nctempstring->d[0]=strlen("mode")+1;;
LibeArrayex(411,nctempstring,0,0,mode->d[0]);
}
int nctemp566=(int)(mode->a[nctemp569]);
int nctemp563 = (nctemp566 =='w');
if(nctemp563)

#line 412  "libe.e"
{
nctempchar1* nctemp576= name;
int nctemp579=RunCreate(nctemp576);
fd =nctemp579;
}

#line 413  "libe.e"
else{
int nctemp586=0;
if((0>0)||(0>=mode->d[0])){
nctempstring->a="mode";
nctempstring->d[0]=strlen("mode")+1;;
LibeArrayex(413,nctempstring,0,0,mode->d[0]);
}
int nctemp583=(int)(mode->a[nctemp586]);
int nctemp580 = (nctemp583 =='a');
if(nctemp580)
{

#line 414  "libe.e"
nctempchar1* nctemp596= name;
nctempchar1* nctemp599= mode;
int nctemp602=RunOpen(nctemp596,nctemp599);
fd =nctemp602;
int nctemp589 = (fd ==0);
if(nctemp589)

#line 415  "libe.e"
{
nctempchar1* nctemp608= name;
int nctemp611=RunCreate(nctemp608);
fd =nctemp611;
}

#line 417  "libe.e"
else{
nctempchar1* nctemp616= name;
nctempchar1* nctemp619= mode;
int nctemp622=RunOpen(nctemp616,nctemp619);
fd =nctemp622;
}

#line 413  "libe.e"
}

#line 419  "libe.e"
else{
int nctemp629=0;
if((0>0)||(0>=mode->d[0])){
nctempstring->a="mode";
nctempstring->d[0]=strlen("mode")+1;;
LibeArrayex(419,nctempstring,0,0,mode->d[0]);
}
int nctemp626=(int)(mode->a[nctemp629]);
int nctemp623 = (nctemp626 =='r');
if(nctemp623)
{

#line 420  "libe.e"
nctempchar1* nctemp636= name;
nctempchar1* nctemp639= mode;
int nctemp642=RunOpen(nctemp636,nctemp639);
fd =nctemp642;

#line 419  "libe.e"
}

#line 422  "libe.e"
else{

#line 423  "libe.e"
struct nctempchar1 *nctemp648;
static struct nctempchar1 nctemp649 = {{ 20}, (char*)"Unknown file mode\n\0"};
nctemp648=&nctemp649;
LibeErrstr=nctemp648;

#line 424  "libe.e"
LibeErrno =(-103);

#line 425  "libe.e"
return 0;

#line 422  "libe.e"
}

#line 419  "libe.e"
}

#line 413  "libe.e"
}

#line 430  "libe.e"
int nctemp655 = (fd ==0);
if(nctemp655)
{

#line 431  "libe.e"
struct nctempchar1 *nctemp664;
static struct nctempchar1 nctemp665 = {{ 20}, (char*)"Could not open file\0"};
nctemp664=&nctemp665;
LibeErrstr=nctemp664;

#line 432  "libe.e"
LibeErrno =(-105);

#line 433  "libe.e"
return 0;

#line 430  "libe.e"
}

#line 439  "libe.e"
int nctemp674=slot;
if((0>slot)||(slot>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(439,nctempstring,slot,0,LibeFarr->d[0]);
}
LibeFarr->a[nctemp674].fd =fd;

#line 440  "libe.e"
int nctemp680=slot;
if((0>slot)||(slot>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(440,nctempstring,slot,0,LibeFarr->d[0]);
}
LibeFarr->a[nctemp680].cnt =0;

#line 441  "libe.e"
int nctemp686=slot;
if((0>slot)||(slot>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(441,nctempstring,slot,0,LibeFarr->d[0]);
}
LibeFarr->a[nctemp686].base=(0);

#line 446  "libe.e"
int nctemp696=0;
if((0>0)||(0>=mode->d[0])){
nctempstring->a="mode";
nctempstring->d[0]=strlen("mode")+1;;
LibeArrayex(446,nctempstring,0,0,mode->d[0]);
}
int nctemp693=(int)(mode->a[nctemp696]);
int nctemp690 = (nctemp693 =='r');
if(nctemp690)

#line 447  "libe.e"
{
int nctemp702=slot;
if((0>slot)||(slot>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(447,nctempstring,slot,0,LibeFarr->d[0]);
}
LibeFarr->a[nctemp702].readflg =1;
}

#line 449  "libe.e"
else{
int nctemp708=slot;
if((0>slot)||(slot>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(449,nctempstring,slot,0,LibeFarr->d[0]);
}
LibeFarr->a[nctemp708].writflg =1;
}

#line 450  "libe.e"
return slot;

#line 378  "libe.e"
}

#line 470  "libe.e"
int LibeClose (int fp)

#line 471  "libe.e"
{

#line 472  "libe.e"
int fd;
int stat;

#line 477  "libe.e"
int nctemp715=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(477,nctempstring,fp,0,LibeFarr->d[0]);
}
nctempchar1 *nctemp713 =LibeFarr->a[nctemp715].base;
int nctemp712 =(nctemp713!=0);
if(nctemp712)
{

#line 478  "libe.e"
int nctemp720= fp;
int nctemp722=LibeFlush(nctemp720);

#line 477  "libe.e"
}

#line 483  "libe.e"
int nctemp727=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(483,nctempstring,fp,0,LibeFarr->d[0]);
}
fd =LibeFarr->a[nctemp727].fd;

#line 484  "libe.e"
int nctemp733= fd;
int nctemp735=RunClose(nctemp733);
stat =nctemp735;

#line 485  "libe.e"
int nctemp736 = (stat ==0);
if(nctemp736)
{

#line 486  "libe.e"
int nctemp743=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(486,nctempstring,fp,0,LibeFarr->d[0]);
}
LibeFarr->a[nctemp743].errflg =1;

#line 487  "libe.e"
struct nctempchar1 *nctemp751;
static struct nctempchar1 nctemp752 = {{ 21}, (char*)"Could not close file\0"};
nctemp751=&nctemp752;
LibeErrstr=nctemp751;

#line 488  "libe.e"
LibeErrno =(-106);

#line 489  "libe.e"
return 0;

#line 485  "libe.e"
}

#line 494  "libe.e"
int nctemp761=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(494,nctempstring,fp,0,LibeFarr->d[0]);
}
LibeFarr->a[nctemp761].cnt =0;

#line 495  "libe.e"
int nctemp767=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(495,nctempstring,fp,0,LibeFarr->d[0]);
}
LibeFarr->a[nctemp767].ptr =0;

#line 496  "libe.e"
int nctemp773=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(496,nctempstring,fp,0,LibeFarr->d[0]);
}
LibeFarr->a[nctemp773].bufsize =0;

#line 497  "libe.e"
int nctemp779=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(497,nctempstring,fp,0,LibeFarr->d[0]);
}
nctempchar1 *nctemp777 =LibeFarr->a[nctemp779].base;
int nctemp776 =(nctemp777!=0);
if(nctemp776)
{

#line 498  "libe.e"
int nctemp785=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(498,nctempstring,fp,0,LibeFarr->d[0]);
}
RunFree(LibeFarr->a[nctemp785].base->a);
RunFree(LibeFarr->a[nctemp785].base);

#line 497  "libe.e"
}

#line 500  "libe.e"
int nctemp791=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(500,nctempstring,fp,0,LibeFarr->d[0]);
}
LibeFarr->a[nctemp791].base=(0);

#line 501  "libe.e"
int nctemp798=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(501,nctempstring,fp,0,LibeFarr->d[0]);
}
LibeFarr->a[nctemp798].readflg =0;

#line 502  "libe.e"
int nctemp804=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(502,nctempstring,fp,0,LibeFarr->d[0]);
}
LibeFarr->a[nctemp804].writflg =0;

#line 503  "libe.e"
int nctemp810=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(503,nctempstring,fp,0,LibeFarr->d[0]);
}
LibeFarr->a[nctemp810].unbflg =0;

#line 504  "libe.e"
int nctemp816=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(504,nctempstring,fp,0,LibeFarr->d[0]);
}
LibeFarr->a[nctemp816].errflg =0;

#line 505  "libe.e"
int nctemp822=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(505,nctempstring,fp,0,LibeFarr->d[0]);
}
LibeFarr->a[nctemp822].eoflg =0;

#line 506  "libe.e"
int nctemp828=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(506,nctempstring,fp,0,LibeFarr->d[0]);
}
LibeFarr->a[nctemp828].fd =0;

#line 507  "libe.e"
return 1;

#line 471  "libe.e"
}

#line 527  "libe.e"
int LibeGetc (int fp)

#line 528  "libe.e"
{

#line 529  "libe.e"
int nctemp835=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(529,nctempstring,fp,0,LibeFarr->d[0]);
}
int nctemp832 = (LibeFarr->a[nctemp835].cnt ==0);
if(nctemp832)

#line 530  "libe.e"
{
int nctemp839= fp;
int nctemp841=LibeFillbuff(nctemp839);
return nctemp841;
}

#line 531  "libe.e"
else{

#line 532  "libe.e"
int nctemp845=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(532,nctempstring,fp,0,LibeFarr->d[0]);
}
int nctemp851=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(532,nctempstring,fp,0,LibeFarr->d[0]);
}
int nctemp854 = LibeFarr->a[nctemp851].cnt - 1;
LibeFarr->a[nctemp845].cnt =nctemp854;

#line 533  "libe.e"
int nctemp858=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(533,nctempstring,fp,0,LibeFarr->d[0]);
}
int nctemp864=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(533,nctempstring,fp,0,LibeFarr->d[0]);
}
int nctemp867 = LibeFarr->a[nctemp864].ptr + 1;
LibeFarr->a[nctemp858].ptr =nctemp867;

#line 534  "libe.e"
int nctemp872=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(534,nctempstring,fp,0,LibeFarr->d[0]);
}
int nctemp878=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(534,nctempstring,fp,0,LibeFarr->d[0]);
}
int nctemp881 = LibeFarr->a[nctemp878].ptr - 1;
int nctemp874=nctemp881;
if((0>nctemp881)||(nctemp881>=LibeFarr->a[nctemp872].base->d[0])){
nctempstring->a="LibeFarr->a[nctemp872].base";
nctempstring->d[0]=strlen("LibeFarr->a[nctemp872].base")+1;;
LibeArrayex(534,nctempstring,nctemp881,0,LibeFarr->a[nctemp872].base->d[0]);
}
int nctemp869=(int)(LibeFarr->a[nctemp872].base->a[nctemp874]);
return nctemp869;

#line 531  "libe.e"
}

#line 528  "libe.e"
}

#line 573  "libe.e"
int LibeUngetc (int fp)

#line 574  "libe.e"
{

#line 577  "libe.e"
int nctemp885=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(577,nctempstring,fp,0,LibeFarr->d[0]);
}
int nctemp882 = (LibeFarr->a[nctemp885].eoflg ==1);
if(nctemp882)

#line 578  "libe.e"
{
return (-1);
}

#line 582  "libe.e"
int nctemp892=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(582,nctempstring,fp,0,LibeFarr->d[0]);
}
int nctemp895=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(582,nctempstring,fp,0,LibeFarr->d[0]);
}
int nctemp889 = (LibeFarr->a[nctemp892].cnt < LibeFarr->a[nctemp895].bufsize);
if(nctemp889)
{

#line 583  "libe.e"
int nctemp900=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(583,nctempstring,fp,0,LibeFarr->d[0]);
}
int nctemp906=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(583,nctempstring,fp,0,LibeFarr->d[0]);
}
int nctemp909 = LibeFarr->a[nctemp906].cnt + 1;
LibeFarr->a[nctemp900].cnt =nctemp909;

#line 584  "libe.e"
int nctemp913=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(584,nctempstring,fp,0,LibeFarr->d[0]);
}
int nctemp919=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(584,nctempstring,fp,0,LibeFarr->d[0]);
}
int nctemp922 = LibeFarr->a[nctemp919].ptr - 1;
LibeFarr->a[nctemp913].ptr =nctemp922;

#line 588  "libe.e"
int nctemp926=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(588,nctempstring,fp,0,LibeFarr->d[0]);
}
int nctemp932=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(588,nctempstring,fp,0,LibeFarr->d[0]);
}
int nctemp935 = LibeFarr->a[nctemp932].bufsize - 1;
int nctemp923 = (LibeFarr->a[nctemp926].ptr ==nctemp935);
if(nctemp923)
{

#line 589  "libe.e"
int nctemp940=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(589,nctempstring,fp,0,LibeFarr->d[0]);
}
int nctemp944=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(589,nctempstring,fp,0,LibeFarr->d[0]);
}
int nctemp942=LibeFarr->a[nctemp944].ptr;
if((0>LibeFarr->a[nctemp944].ptr)||(LibeFarr->a[nctemp944].ptr>=LibeFarr->a[nctemp940].base->d[0])){
nctempstring->a="LibeFarr->a[nctemp940].base";
nctempstring->d[0]=strlen("LibeFarr->a[nctemp940].base")+1;;
LibeArrayex(589,nctempstring,LibeFarr->a[nctemp944].ptr,0,LibeFarr->a[nctemp940].base->d[0]);
}
int nctemp937=(int)(LibeFarr->a[nctemp940].base->a[nctemp942]);
return nctemp937;

#line 588  "libe.e"
}

#line 591  "libe.e"
else{
int nctemp950=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(591,nctempstring,fp,0,LibeFarr->d[0]);
}
int nctemp956=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(591,nctempstring,fp,0,LibeFarr->d[0]);
}
int nctemp959 = LibeFarr->a[nctemp956].ptr + 1;
int nctemp952=nctemp959;
if((0>nctemp959)||(nctemp959>=LibeFarr->a[nctemp950].base->d[0])){
nctempstring->a="LibeFarr->a[nctemp950].base";
nctempstring->d[0]=strlen("LibeFarr->a[nctemp950].base")+1;;
LibeArrayex(591,nctempstring,nctemp959,0,LibeFarr->a[nctemp950].base->d[0]);
}
int nctemp947=(int)(LibeFarr->a[nctemp950].base->a[nctemp952]);
return nctemp947;
}

#line 582  "libe.e"
}

#line 593  "libe.e"
else{

#line 594  "libe.e"
struct nctempchar1 *nctemp965;
static struct nctempchar1 nctemp966 = {{ 15}, (char*)"Pushback error\0"};
nctemp965=&nctemp966;
LibeErrstr=nctemp965;

#line 595  "libe.e"
LibeErrno =(-107);

#line 596  "libe.e"
return (-1);

#line 593  "libe.e"
}

#line 574  "libe.e"
}

#line 611  "libe.e"
int LibeGetw (int fp,nctempchar1 *text)

#line 612  "libe.e"
{

#line 613  "libe.e"
int p;
int ch;
int lim;

#line 617  "libe.e"
int nctemp976=text->d[0];lim =nctemp976;

#line 618  "libe.e"
p =0;

#line 619  "libe.e"
int nctemp985=LibeClearerr();

#line 620  "libe.e"
int nctemp999= fp;
int nctemp1001=LibeGetc(nctemp999);
ch =nctemp1001;
int nctemp992 = (ch ==32);
int nctemp1004 = (ch ==9);
int nctemp989 = (nctemp992 || nctemp1004);
int nctemp1009 = (ch ==10);
int nctemp986 = (nctemp989 || nctemp1009);
int nctemp1013=nctemp986;
while(nctemp1013)
{
#line 621  "libe.e"
{
p =0;
}

#line 620  "libe.e"
int nctemp1031= fp;
int nctemp1033=LibeGetc(nctemp1031);
ch =nctemp1033;
int nctemp1024 = (ch ==32);
int nctemp1036 = (ch ==9);
int nctemp1021 = (nctemp1024 || nctemp1036);
int nctemp1041 = (ch ==10);
int nctemp1018 = (nctemp1021 || nctemp1041);

#line 621  "libe.e"
nctemp1013=nctemp1018;}
#line 622  "libe.e"
int nctemp1046= fp;
int nctemp1048=LibeUngetc(nctemp1046);

#line 623  "libe.e"
int nctemp1059= fp;
int nctemp1061=LibeGetc(nctemp1059);
ch =nctemp1061;
int nctemp1052 = (ch !=(-1));
int nctemp1064 = (p < lim);
int nctemp1049 = (nctemp1052 && nctemp1064);
int nctemp1068=nctemp1049;
while(nctemp1068)
{{

#line 624  "libe.e"
int nctemp1075 = (ch ==32);
int nctemp1080 = (ch ==9);
int nctemp1072 = (nctemp1075 || nctemp1080);
int nctemp1085 = (ch ==10);
int nctemp1069 = (nctemp1072 || nctemp1085);
if(nctemp1069)
{

#line 625  "libe.e"
int nctemp1090= fp;
int nctemp1092=LibeUngetc(nctemp1090);

#line 626  "libe.e"
int nctemp1096=p;
if((0>p)||(p>=text->d[0])){
nctempstring->a="text";
nctempstring->d[0]=strlen("text")+1;;
LibeArrayex(626,nctempstring,p,0,text->d[0]);
}
char nctemp1099=(char)(0);
text->a[nctemp1096] =nctemp1099;

#line 627  "libe.e"
return 1;

#line 624  "libe.e"
}

#line 629  "libe.e"
else{

#line 630  "libe.e"
int nctemp1106=p;
if((0>p)||(p>=text->d[0])){
nctempstring->a="text";
nctempstring->d[0]=strlen("text")+1;;
LibeArrayex(630,nctempstring,p,0,text->d[0]);
}
char nctemp1109=(char)(ch);
text->a[nctemp1106] =nctemp1109;

#line 631  "libe.e"
int nctemp1120 = p + 1;
p =nctemp1120;

#line 629  "libe.e"
}

#line 623  "libe.e"
}
int nctemp1131= fp;
int nctemp1133=LibeGetc(nctemp1131);
ch =nctemp1133;
int nctemp1124 = (ch !=(-1));
int nctemp1136 = (p < lim);
int nctemp1121 = (nctemp1124 && nctemp1136);
nctemp1068=nctemp1121;}
#line 634  "libe.e"
int nctemp1140 = (p >= lim);
if(nctemp1140)
{

#line 635  "libe.e"
return 0;

#line 634  "libe.e"
}

#line 637  "libe.e"
else{
int nctemp1145 = (ch ==(-1));
if(nctemp1145)
{

#line 638  "libe.e"
return (-1);

#line 637  "libe.e"
}

#line 641  "libe.e"
else{
return 1;
}

#line 637  "libe.e"
}

#line 612  "libe.e"
}

#line 662  "libe.e"
int LibePutc (int fp,int c)

#line 663  "libe.e"
{

#line 664  "libe.e"
int rval;

#line 666  "libe.e"
int nctemp1154=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(666,nctempstring,fp,0,LibeFarr->d[0]);
}
int nctemp1151 = (LibeFarr->a[nctemp1154].cnt ==0);
if(nctemp1151)
{
int nctemp1158= fp;
int nctemp1160=LibeFlushbuff(nctemp1158);
}

#line 667  "libe.e"
int nctemp1164=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(667,nctempstring,fp,0,LibeFarr->d[0]);
}
int nctemp1167=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(667,nctempstring,fp,0,LibeFarr->d[0]);
}
int nctemp1161 = (LibeFarr->a[nctemp1164].cnt ==LibeFarr->a[nctemp1167].bufsize);
if(nctemp1161)
{

#line 668  "libe.e"
int nctemp1173= fp;
int nctemp1175=LibeFlushbuff(nctemp1173);
rval =nctemp1175;

#line 669  "libe.e"
int nctemp1179=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(669,nctempstring,fp,0,LibeFarr->d[0]);
}
int nctemp1183=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(669,nctempstring,fp,0,LibeFarr->d[0]);
}
int nctemp1181=LibeFarr->a[nctemp1183].ptr;
if((0>LibeFarr->a[nctemp1183].ptr)||(LibeFarr->a[nctemp1183].ptr>=LibeFarr->a[nctemp1179].base->d[0])){
nctempstring->a="LibeFarr->a[nctemp1179].base";
nctempstring->d[0]=strlen("LibeFarr->a[nctemp1179].base")+1;;
LibeArrayex(669,nctempstring,LibeFarr->a[nctemp1183].ptr,0,LibeFarr->a[nctemp1179].base->d[0]);
}
char nctemp1186=(char)(c);
LibeFarr->a[nctemp1179].base->a[nctemp1181] =nctemp1186;

#line 670  "libe.e"
int nctemp1192=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(670,nctempstring,fp,0,LibeFarr->d[0]);
}
int nctemp1198=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(670,nctempstring,fp,0,LibeFarr->d[0]);
}
int nctemp1201 = LibeFarr->a[nctemp1198].ptr + 1;
LibeFarr->a[nctemp1192].ptr =nctemp1201;

#line 671  "libe.e"
int nctemp1205=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(671,nctempstring,fp,0,LibeFarr->d[0]);
}
int nctemp1211=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(671,nctempstring,fp,0,LibeFarr->d[0]);
}
int nctemp1214 = LibeFarr->a[nctemp1211].cnt + 1;
LibeFarr->a[nctemp1205].cnt =nctemp1214;

#line 672  "libe.e"
return rval;

#line 667  "libe.e"
}

#line 674  "libe.e"
else{

#line 675  "libe.e"
int nctemp1219=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(675,nctempstring,fp,0,LibeFarr->d[0]);
}
int nctemp1223=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(675,nctempstring,fp,0,LibeFarr->d[0]);
}
int nctemp1221=LibeFarr->a[nctemp1223].ptr;
if((0>LibeFarr->a[nctemp1223].ptr)||(LibeFarr->a[nctemp1223].ptr>=LibeFarr->a[nctemp1219].base->d[0])){
nctempstring->a="LibeFarr->a[nctemp1219].base";
nctempstring->d[0]=strlen("LibeFarr->a[nctemp1219].base")+1;;
LibeArrayex(675,nctempstring,LibeFarr->a[nctemp1223].ptr,0,LibeFarr->a[nctemp1219].base->d[0]);
}
char nctemp1226=(char)(c);
LibeFarr->a[nctemp1219].base->a[nctemp1221] =nctemp1226;

#line 676  "libe.e"
int nctemp1232=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(676,nctempstring,fp,0,LibeFarr->d[0]);
}
int nctemp1238=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(676,nctempstring,fp,0,LibeFarr->d[0]);
}
int nctemp1241 = LibeFarr->a[nctemp1238].cnt + 1;
LibeFarr->a[nctemp1232].cnt =nctemp1241;

#line 677  "libe.e"
int nctemp1245=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(677,nctempstring,fp,0,LibeFarr->d[0]);
}
int nctemp1251=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(677,nctempstring,fp,0,LibeFarr->d[0]);
}
int nctemp1254 = LibeFarr->a[nctemp1251].ptr + 1;
LibeFarr->a[nctemp1245].ptr =nctemp1254;

#line 678  "libe.e"
return 1;

#line 674  "libe.e"
}

#line 663  "libe.e"
}

#line 683  "libe.e"
int LibePs (nctempchar1 *s)
{

#line 684  "libe.e"
int nctemp1257= 3;
nctempchar1* nctemp1259= s;
int nctemp1262=LibePuts(nctemp1257,nctemp1259);

#line 685  "libe.e"
return 1;

#line 683  "libe.e"
}

#line 689  "libe.e"
int LibePi (int n)
{

#line 690  "libe.e"
int nctemp1265= 3;
int nctemp1267= n;
int nctemp1269=LibePuti(nctemp1265,nctemp1267);

#line 691  "libe.e"
return 1;

#line 689  "libe.e"
}

#line 695  "libe.e"
int LibePf (float r)
{

#line 696  "libe.e"
int nctemp1272= 3;
float nctemp1274= r;
struct nctempchar1 *nctemp1278;
static struct nctempchar1 nctemp1279 = {{ 2}, (char*)"g\0"};
nctemp1278=&nctemp1279;
nctempchar1* nctemp1276= nctemp1278;
int nctemp1280=LibePutf(nctemp1272,nctemp1274,nctemp1276);

#line 697  "libe.e"
return 1;

#line 695  "libe.e"
}

#line 708  "libe.e"
int LibePuts (int fp,nctempchar1 *s)

#line 709  "libe.e"
{

#line 710  "libe.e"
int ls;
int i;

#line 713  "libe.e"
int nctemp1286=s->d[0];ls =nctemp1286;

#line 714  "libe.e"
i =0;

#line 715  "libe.e"
int nctemp1303=i;
if((0>i)||(i>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(715,nctempstring,i,0,s->d[0]);
}
int nctemp1300=(int)(s->a[nctemp1303]);
int nctemp1297 = (nctemp1300 !=0);
int nctemp1307 = (i < ls);
int nctemp1294 = (nctemp1297 && nctemp1307);
int nctemp1311=nctemp1294;
while(nctemp1311)
{{

#line 716  "libe.e"
int nctemp1315= fp;
int nctemp1322=i;
if((0>i)||(i>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(716,nctempstring,i,0,s->d[0]);
}
int nctemp1319=(int)(s->a[nctemp1322]);
int nctemp1317= nctemp1319;
int nctemp1324=LibePutc(nctemp1315,nctemp1317);
int nctemp1312 = (nctemp1324 ==0);
if(nctemp1312)
{

#line 717  "libe.e"
struct nctempchar1 *nctemp1331;
static struct nctempchar1 nctemp1332 = {{ 12}, (char*)"write error\0"};
nctemp1331=&nctemp1332;
LibeErrstr=nctemp1331;

#line 718  "libe.e"
LibeErrno =0;

#line 719  "libe.e"
return 0;

#line 716  "libe.e"
}

#line 722  "libe.e"
else{
int nctemp1346 = i + 1;
i =nctemp1346;
}

#line 715  "libe.e"
}
int nctemp1356=i;
if((0>i)||(i>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(715,nctempstring,i,0,s->d[0]);
}
int nctemp1353=(int)(s->a[nctemp1356]);
int nctemp1350 = (nctemp1353 !=0);
int nctemp1360 = (i < ls);
int nctemp1347 = (nctemp1350 && nctemp1360);
nctemp1311=nctemp1347;}
#line 725  "libe.e"
int nctemp1365= fp;
int nctemp1367=LibeFlushbuff(nctemp1365);

#line 726  "libe.e"
return 1;

#line 709  "libe.e"
}

#line 741  "libe.e"
int LibePuti (int fp,int ival)

#line 742  "libe.e"
{

#line 743  "libe.e"
int nctemp1370= ival;
nctempchar1* nctemp1372= LibeTmpstr;
int nctemp1375=LibeItoa(nctemp1370,nctemp1372);

#line 744  "libe.e"
int nctemp1377= fp;
nctempchar1* nctemp1379= LibeTmpstr;
int nctemp1382=LibePuts(nctemp1377,nctemp1379);
return nctemp1382;

#line 742  "libe.e"
}

#line 758  "libe.e"
int LibePutf (int fp,float fval,nctempchar1 *form)

#line 759  "libe.e"
{

#line 760  "libe.e"
float nctemp1384= fval;
nctempchar1* nctemp1386= form;
nctempchar1* nctemp1389= LibeTmpstr;
int nctemp1392=LibeFtoa(nctemp1384,nctemp1386,nctemp1389);

#line 761  "libe.e"
int nctemp1394= fp;
nctempchar1* nctemp1396= LibeTmpstr;
int nctemp1399=LibePuts(nctemp1394,nctemp1396);
return nctemp1399;

#line 759  "libe.e"
}

#line 775  "libe.e"
int LibeRead (int fp,int n,nctempchar1 *buffer)

#line 776  "libe.e"
{

#line 777  "libe.e"
int rval;

#line 779  "libe.e"
int nctemp1403=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(779,nctempstring,fp,0,LibeFarr->d[0]);
}
int nctemp1400 = (LibeFarr->a[nctemp1403].readflg !=1);
if(nctemp1400)
{

#line 780  "libe.e"
struct nctempchar1 *nctemp1411;
static struct nctempchar1 nctemp1412 = {{ 26}, (char*)"File not open for reading\0"};
nctemp1411=&nctemp1412;
LibeErrstr=nctemp1411;

#line 781  "libe.e"
LibeErrno =(-109);

#line 782  "libe.e"
return (-1);

#line 779  "libe.e"
}

#line 784  "libe.e"
int nctemp1422=buffer->d[0];int nctemp1418 = (n > nctemp1422);
if(nctemp1418)
{

#line 785  "libe.e"
LibeErrno =(-108);

#line 786  "libe.e"
struct nctempchar1 *nctemp1435;
static struct nctempchar1 nctemp1436 = {{ 30}, (char*)"The buffer array is too small\0"};
nctemp1435=&nctemp1436;
LibeErrstr=nctemp1435;

#line 787  "libe.e"
return 0;

#line 784  "libe.e"
}

#line 789  "libe.e"
int nctemp1444=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(789,nctempstring,fp,0,LibeFarr->d[0]);
}
int nctemp1442= LibeFarr->a[nctemp1444].fd;
int nctemp1446= n;
nctempchar1* nctemp1448= buffer;
int nctemp1451=RunRead(nctemp1442,nctemp1446,nctemp1448);
rval =nctemp1451;

#line 790  "libe.e"
int nctemp1452 = (rval ==(-1));
if(nctemp1452)
{

#line 791  "libe.e"
int nctemp1459=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(791,nctempstring,fp,0,LibeFarr->d[0]);
}
LibeFarr->a[nctemp1459].eoflg =1;

#line 792  "libe.e"
rval =(-1);

#line 790  "libe.e"
}

#line 794  "libe.e"
else{
int nctemp1466 = (rval ==0);
if(nctemp1466)
{

#line 795  "libe.e"
int nctemp1473=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(795,nctempstring,fp,0,LibeFarr->d[0]);
}
LibeFarr->a[nctemp1473].errflg =1;

#line 796  "libe.e"
struct nctempchar1 *nctemp1481;
static struct nctempchar1 nctemp1482 = {{ 11}, (char*)"read error\0"};
nctemp1481=&nctemp1482;
LibeErrstr=nctemp1481;

#line 797  "libe.e"
LibeErrno =0;

#line 798  "libe.e"
int nctemp1490=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(798,nctempstring,fp,0,LibeFarr->d[0]);
}
LibeFarr->a[nctemp1490].errflg =0;

#line 799  "libe.e"
rval =0;

#line 794  "libe.e"
}
}

#line 801  "libe.e"
return rval;

#line 776  "libe.e"
}

#line 811  "libe.e"
int LibeWrite (int fp,int n,nctempchar1 *buffer)

#line 812  "libe.e"
{

#line 813  "libe.e"
int rval;

#line 815  "libe.e"
int nctemp1502=buffer->d[0];int nctemp1498 = (n > nctemp1502);
if(nctemp1498)
{

#line 816  "libe.e"
LibeErrno =(-108);

#line 817  "libe.e"
struct nctempchar1 *nctemp1515;
static struct nctempchar1 nctemp1516 = {{ 30}, (char*)"The buffer array is too small\0"};
nctemp1515=&nctemp1516;
LibeErrstr=nctemp1515;

#line 818  "libe.e"
return 0;

#line 815  "libe.e"
}

#line 820  "libe.e"
int nctemp1521=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(820,nctempstring,fp,0,LibeFarr->d[0]);
}
int nctemp1518 = (LibeFarr->a[nctemp1521].writflg !=1);
if(nctemp1518)
{

#line 821  "libe.e"
struct nctempchar1 *nctemp1529;
static struct nctempchar1 nctemp1530 = {{ 26}, (char*)"file not open for writing\0"};
nctemp1529=&nctemp1530;
LibeErrstr=nctemp1529;

#line 822  "libe.e"
LibeErrno =(-110);

#line 823  "libe.e"
return 0;

#line 820  "libe.e"
}

#line 825  "libe.e"
int nctemp1542=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(825,nctempstring,fp,0,LibeFarr->d[0]);
}
int nctemp1540= LibeFarr->a[nctemp1542].fd;
int nctemp1544= n;
nctempchar1* nctemp1546= buffer;
int nctemp1549=RunWrite(nctemp1540,nctemp1544,nctemp1546);
rval =nctemp1549;

#line 826  "libe.e"
int nctemp1550 = (rval ==0);
if(nctemp1550)
{

#line 827  "libe.e"
int nctemp1557=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(827,nctempstring,fp,0,LibeFarr->d[0]);
}
LibeFarr->a[nctemp1557].errflg =1;

#line 828  "libe.e"
struct nctempchar1 *nctemp1565;
static struct nctempchar1 nctemp1566 = {{ 12}, (char*)"write error\0"};
nctemp1565=&nctemp1566;
LibeErrstr=nctemp1565;

#line 829  "libe.e"
LibeErrno =0;

#line 830  "libe.e"
int nctemp1574=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(830,nctempstring,fp,0,LibeFarr->d[0]);
}
LibeFarr->a[nctemp1574].errflg =0;

#line 831  "libe.e"
rval =0;

#line 826  "libe.e"
}

#line 833  "libe.e"
return rval;

#line 812  "libe.e"
}

#line 843  "libe.e"
int LibeSeek (int fp,int pos,int flag)

#line 844  "libe.e"
{

#line 845  "libe.e"
int rval;

#line 847  "libe.e"
int nctemp1588=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(847,nctempstring,fp,0,LibeFarr->d[0]);
}
int nctemp1586= LibeFarr->a[nctemp1588].fd;
int nctemp1590= pos;
int nctemp1592= flag;
int nctemp1594=RunSeek(nctemp1586,nctemp1590,nctemp1592);
rval =nctemp1594;

#line 848  "libe.e"
int nctemp1595 = (rval ==0);
if(nctemp1595)
{

#line 849  "libe.e"
int nctemp1602=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(849,nctempstring,fp,0,LibeFarr->d[0]);
}
LibeFarr->a[nctemp1602].errflg =1;

#line 850  "libe.e"
struct nctempchar1 *nctemp1610;
static struct nctempchar1 nctemp1611 = {{ 11}, (char*)"Seek error\0"};
nctemp1610=&nctemp1611;
LibeErrstr=nctemp1610;

#line 851  "libe.e"
LibeErrno =0;

#line 852  "libe.e"
int nctemp1619=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(852,nctempstring,fp,0,LibeFarr->d[0]);
}
LibeFarr->a[nctemp1619].errflg =0;

#line 853  "libe.e"
rval =0;

#line 848  "libe.e"
}

#line 855  "libe.e"
return rval;

#line 844  "libe.e"
}

#line 866  "libe.e"
int LibeFlush (int fp)

#line 867  "libe.e"
{

#line 868  "libe.e"
int nctemp1628= fp;
int nctemp1630=LibeFlushbuff(nctemp1628);
return nctemp1630;

#line 867  "libe.e"
}

#line 883  "libe.e"
int LibeFillbuff (int fp)

#line 884  "libe.e"
{

#line 885  "libe.e"
int size;
int rval;

#line 888  "libe.e"
int nctemp1634=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(888,nctempstring,fp,0,LibeFarr->d[0]);
}
int nctemp1631 = (LibeFarr->a[nctemp1634].readflg !=1);
if(nctemp1631)
{

#line 889  "libe.e"
struct nctempchar1 *nctemp1642;
static struct nctempchar1 nctemp1643 = {{ 28}, (char*)"file not open for reading\n\0"};
nctemp1642=&nctemp1643;
LibeErrstr=nctemp1642;

#line 890  "libe.e"
LibeErrno =(-110);

#line 891  "libe.e"
return (-1);

#line 888  "libe.e"
}

#line 893  "libe.e"
int nctemp1652=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(893,nctempstring,fp,0,LibeFarr->d[0]);
}
int nctemp1649 = (LibeFarr->a[nctemp1652].unbflg ==1);
if(nctemp1649)

#line 894  "libe.e"
{
int nctemp1658=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(894,nctempstring,fp,0,LibeFarr->d[0]);
}
LibeFarr->a[nctemp1658].bufsize =1;
}

#line 896  "libe.e"
else{
int nctemp1664=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(896,nctempstring,fp,0,LibeFarr->d[0]);
}
LibeFarr->a[nctemp1664].bufsize =1024;
}

#line 897  "libe.e"
int nctemp1670=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(897,nctempstring,fp,0,LibeFarr->d[0]);
}
nctempchar1 *nctemp1668 =LibeFarr->a[nctemp1670].base;
int nctemp1667 =(nctemp1668==0);
if(nctemp1667)
{

#line 898  "libe.e"
int nctemp1678=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(898,nctempstring,fp,0,LibeFarr->d[0]);
}
size =LibeFarr->a[nctemp1678].bufsize;

#line 899  "libe.e"
int nctemp1686=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(899,nctempstring,fp,0,LibeFarr->d[0]);
}
int nctemp1691=size;
nctempchar1 *nctemp1690;
nctemp1690=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp1690->d[0]=size;
nctemp1690->a=(char *)RunMalloc(sizeof(char)*nctemp1691);
LibeFarr->a[nctemp1686].base=nctemp1690;
nctempchar1 *nctemp1681 =LibeFarr->a[nctemp1686].base;
int nctemp1680 =(nctemp1681==0);
if(nctemp1680)
{

#line 900  "libe.e"
struct nctempchar1 *nctemp1700;
static struct nctempchar1 nctemp1701 = {{ 24}, (char*)"Can not allocate buffer\0"};
nctemp1700=&nctemp1701;
LibeErrstr=nctemp1700;

#line 901  "libe.e"
LibeErrno =(-113);

#line 902  "libe.e"
return (-1);

#line 899  "libe.e"
}

#line 897  "libe.e"
}

#line 905  "libe.e"
int nctemp1710=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(905,nctempstring,fp,0,LibeFarr->d[0]);
}
LibeFarr->a[nctemp1710].ptr =0;

#line 906  "libe.e"
int nctemp1716=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(906,nctempstring,fp,0,LibeFarr->d[0]);
}
int nctemp1721=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(906,nctempstring,fp,0,LibeFarr->d[0]);
}
int nctemp1719= LibeFarr->a[nctemp1721].fd;
int nctemp1725=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(906,nctempstring,fp,0,LibeFarr->d[0]);
}
int nctemp1723= LibeFarr->a[nctemp1725].bufsize;

#line 907  "libe.e"
int nctemp1729=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(907,nctempstring,fp,0,LibeFarr->d[0]);
}
nctempchar1* nctemp1727= LibeFarr->a[nctemp1729].base;

#line 906  "libe.e"
int nctemp1732=RunRead(nctemp1719,nctemp1723,nctemp1727);
LibeFarr->a[nctemp1716].cnt =nctemp1732;

#line 908  "libe.e"
int nctemp1736=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(908,nctempstring,fp,0,LibeFarr->d[0]);
}
int nctemp1733 = (LibeFarr->a[nctemp1736].cnt <= 0);
if(nctemp1733)
{

#line 909  "libe.e"
int nctemp1742=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(909,nctempstring,fp,0,LibeFarr->d[0]);
}
int nctemp1739 = (LibeFarr->a[nctemp1742].cnt ==(-1));
if(nctemp1739)
{

#line 910  "libe.e"
int nctemp1748=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(910,nctempstring,fp,0,LibeFarr->d[0]);
}
LibeFarr->a[nctemp1748].eoflg =1;

#line 911  "libe.e"
rval =(-1);

#line 909  "libe.e"
}

#line 913  "libe.e"
else{

#line 914  "libe.e"
int nctemp1758=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(914,nctempstring,fp,0,LibeFarr->d[0]);
}
LibeFarr->a[nctemp1758].errflg =1;

#line 915  "libe.e"
struct nctempchar1 *nctemp1766;
static struct nctempchar1 nctemp1767 = {{ 11}, (char*)"read error\0"};
nctemp1766=&nctemp1767;
LibeErrstr=nctemp1766;

#line 916  "libe.e"
LibeErrno =(-111);

#line 917  "libe.e"
rval =(-1);

#line 913  "libe.e"
}

#line 919  "libe.e"
int nctemp1779=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(919,nctempstring,fp,0,LibeFarr->d[0]);
}
LibeFarr->a[nctemp1779].cnt =0;

#line 920  "libe.e"
return rval;

#line 908  "libe.e"
}

#line 922  "libe.e"
int nctemp1786=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(922,nctempstring,fp,0,LibeFarr->d[0]);
}
int nctemp1792=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(922,nctempstring,fp,0,LibeFarr->d[0]);
}
int nctemp1795 = LibeFarr->a[nctemp1792].ptr + 1;
LibeFarr->a[nctemp1786].ptr =nctemp1795;

#line 923  "libe.e"
int nctemp1799=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(923,nctempstring,fp,0,LibeFarr->d[0]);
}
int nctemp1805=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(923,nctempstring,fp,0,LibeFarr->d[0]);
}
int nctemp1808 = LibeFarr->a[nctemp1805].cnt - 1;
LibeFarr->a[nctemp1799].cnt =nctemp1808;

#line 924  "libe.e"
int nctemp1813=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(924,nctempstring,fp,0,LibeFarr->d[0]);
}
int nctemp1819=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(924,nctempstring,fp,0,LibeFarr->d[0]);
}
int nctemp1822 = LibeFarr->a[nctemp1819].ptr - 1;
int nctemp1815=nctemp1822;
if((0>nctemp1822)||(nctemp1822>=LibeFarr->a[nctemp1813].base->d[0])){
nctempstring->a="LibeFarr->a[nctemp1813].base";
nctempstring->d[0]=strlen("LibeFarr->a[nctemp1813].base")+1;;
LibeArrayex(924,nctempstring,nctemp1822,0,LibeFarr->a[nctemp1813].base->d[0]);
}
int nctemp1810=(int)(LibeFarr->a[nctemp1813].base->a[nctemp1815]);
return nctemp1810;

#line 884  "libe.e"
}

#line 940  "libe.e"
int LibeFlushbuff (int fp)

#line 941  "libe.e"
{

#line 942  "libe.e"
int st;
int size;

#line 945  "libe.e"
int nctemp1826=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(945,nctempstring,fp,0,LibeFarr->d[0]);
}
int nctemp1823 = (LibeFarr->a[nctemp1826].writflg !=1);
if(nctemp1823)
{

#line 946  "libe.e"
struct nctempchar1 *nctemp1834;
static struct nctempchar1 nctemp1835 = {{ 28}, (char*)"file not open for writing\n\0"};
nctemp1834=&nctemp1835;
LibeErrstr=nctemp1834;

#line 947  "libe.e"
LibeErrno =(-110);

#line 948  "libe.e"
return 0;

#line 945  "libe.e"
}

#line 950  "libe.e"
int nctemp1844=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(950,nctempstring,fp,0,LibeFarr->d[0]);
}
int nctemp1841 = (LibeFarr->a[nctemp1844].unbflg ==1);
if(nctemp1841)

#line 951  "libe.e"
{
int nctemp1850=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(951,nctempstring,fp,0,LibeFarr->d[0]);
}
LibeFarr->a[nctemp1850].bufsize =1;
}

#line 953  "libe.e"
else{
int nctemp1856=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(953,nctempstring,fp,0,LibeFarr->d[0]);
}
LibeFarr->a[nctemp1856].bufsize =1024;
}

#line 955  "libe.e"
int nctemp1862=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(955,nctempstring,fp,0,LibeFarr->d[0]);
}
nctempchar1 *nctemp1860 =LibeFarr->a[nctemp1862].base;
int nctemp1859 =(nctemp1860==0);
if(nctemp1859)
{

#line 956  "libe.e"
int nctemp1870=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(956,nctempstring,fp,0,LibeFarr->d[0]);
}
size =LibeFarr->a[nctemp1870].bufsize;

#line 957  "libe.e"
int nctemp1878=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(957,nctempstring,fp,0,LibeFarr->d[0]);
}
int nctemp1883=size;
nctempchar1 *nctemp1882;
nctemp1882=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
nctemp1882->d[0]=size;
nctemp1882->a=(char *)RunMalloc(sizeof(char)*nctemp1883);
LibeFarr->a[nctemp1878].base=nctemp1882;
nctempchar1 *nctemp1873 =LibeFarr->a[nctemp1878].base;
int nctemp1872 =(nctemp1873==0);
if(nctemp1872)
{

#line 958  "libe.e"
struct nctempchar1 *nctemp1892;
static struct nctempchar1 nctemp1893 = {{ 24}, (char*)"can not allocate buffer\0"};
nctemp1892=&nctemp1893;
LibeErrstr=nctemp1892;

#line 959  "libe.e"
LibeErrno =(-113);

#line 960  "libe.e"
return 0;

#line 957  "libe.e"
}

#line 955  "libe.e"
}

#line 963  "libe.e"
int nctemp1902=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(963,nctempstring,fp,0,LibeFarr->d[0]);
}
LibeFarr->a[nctemp1902].ptr =0;

#line 964  "libe.e"
int nctemp1911=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(964,nctempstring,fp,0,LibeFarr->d[0]);
}
int nctemp1909= LibeFarr->a[nctemp1911].fd;
int nctemp1915=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(964,nctempstring,fp,0,LibeFarr->d[0]);
}
int nctemp1913= LibeFarr->a[nctemp1915].cnt;
int nctemp1919=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(964,nctempstring,fp,0,LibeFarr->d[0]);
}
nctempchar1* nctemp1917= LibeFarr->a[nctemp1919].base;
int nctemp1922=RunWrite(nctemp1909,nctemp1913,nctemp1917);
st =nctemp1922;

#line 965  "libe.e"
int nctemp1927=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(965,nctempstring,fp,0,LibeFarr->d[0]);
}
int nctemp1923 = (st !=LibeFarr->a[nctemp1927].cnt);
if(nctemp1923)
{

#line 966  "libe.e"
int nctemp1932=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(966,nctempstring,fp,0,LibeFarr->d[0]);
}
LibeFarr->a[nctemp1932].errflg =1;

#line 967  "libe.e"
struct nctempchar1 *nctemp1940;
static struct nctempchar1 nctemp1941 = {{ 12}, (char*)"write error\0"};
nctemp1940=&nctemp1941;
LibeErrstr=nctemp1940;

#line 968  "libe.e"
LibeErrno =(-112);

#line 969  "libe.e"
int nctemp1949=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(969,nctempstring,fp,0,LibeFarr->d[0]);
}
LibeFarr->a[nctemp1949].cnt =0;

#line 970  "libe.e"
int nctemp1955=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(970,nctempstring,fp,0,LibeFarr->d[0]);
}
LibeFarr->a[nctemp1955].ptr =0;

#line 971  "libe.e"
return 0;

#line 965  "libe.e"
}

#line 973  "libe.e"
else{

#line 974  "libe.e"
int nctemp1962=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(974,nctempstring,fp,0,LibeFarr->d[0]);
}
LibeFarr->a[nctemp1962].cnt =0;

#line 975  "libe.e"
int nctemp1968=fp;
if((0>fp)||(fp>=LibeFarr->d[0])){
nctempstring->a="LibeFarr";
nctempstring->d[0]=strlen("LibeFarr")+1;;
LibeArrayex(975,nctempstring,fp,0,LibeFarr->d[0]);
}
LibeFarr->a[nctemp1968].ptr =0;

#line 976  "libe.e"
return 1;

#line 973  "libe.e"
}

#line 941  "libe.e"
}

#line 987  "libe.e"
int LibeStrlen (nctempchar1 *s)

#line 988  "libe.e"
{

#line 989  "libe.e"
int ls;
int i;

#line 992  "libe.e"
int nctemp1976=s->d[0];ls =nctemp1976;

#line 993  "libe.e"
i =0;

#line 994  "libe.e"
int nctemp1993=i;
if((0>i)||(i>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(994,nctempstring,i,0,s->d[0]);
}
int nctemp1990=(int)(s->a[nctemp1993]);
int nctemp1987 = (nctemp1990 !=0);
int nctemp1997 = (i < ls);
int nctemp1984 = (nctemp1987 && nctemp1997);
int nctemp2001=nctemp1984;
while(nctemp2001)
{{

#line 995  "libe.e"
int nctemp2010 = i + 1;
i =nctemp2010;

#line 994  "libe.e"
}
int nctemp2020=i;
if((0>i)||(i>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(994,nctempstring,i,0,s->d[0]);
}
int nctemp2017=(int)(s->a[nctemp2020]);
int nctemp2014 = (nctemp2017 !=0);
int nctemp2024 = (i < ls);
int nctemp2011 = (nctemp2014 && nctemp2024);
nctemp2001=nctemp2011;}
#line 997  "libe.e"
return i;

#line 988  "libe.e"
}

#line 1004  "libe.e"
int LibeStrcmp (nctempchar1 *s,nctempchar1 *t)

#line 1005  "libe.e"
{

#line 1006  "libe.e"
int ls;
int i;

#line 1009  "libe.e"
int nctemp2033=s->d[0];ls =nctemp2033;

#line 1010  "libe.e"
i =0;

#line 1011  "libe.e"
int nctemp2047=i;
if((0>i)||(i>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1011,nctempstring,i,0,s->d[0]);
}
int nctemp2050=i;
if((0>i)||(i>=t->d[0])){
nctempstring->a="t";
nctempstring->d[0]=strlen("t")+1;;
LibeArrayex(1011,nctempstring,i,0,t->d[0]);
}
int nctemp2044 = (s->a[nctemp2047] ==t->a[nctemp2050]);
int nctemp2053 = (i < ls);
int nctemp2041 = (nctemp2044 && nctemp2053);
int nctemp2057=nctemp2041;
while(nctemp2057)
{{

#line 1012  "libe.e"
int nctemp2064=i;
if((0>i)||(i>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1012,nctempstring,i,0,s->d[0]);
}
int nctemp2061=(int)(s->a[nctemp2064]);
int nctemp2058 = (nctemp2061 ==0);
if(nctemp2058)
{

#line 1013  "libe.e"
return 1;

#line 1012  "libe.e"
}

#line 1015  "libe.e"
int nctemp2076 = i + 1;
i =nctemp2076;

#line 1011  "libe.e"
}
int nctemp2083=i;
if((0>i)||(i>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1011,nctempstring,i,0,s->d[0]);
}
int nctemp2086=i;
if((0>i)||(i>=t->d[0])){
nctempstring->a="t";
nctempstring->d[0]=strlen("t")+1;;
LibeArrayex(1011,nctempstring,i,0,t->d[0]);
}
int nctemp2080 = (s->a[nctemp2083] ==t->a[nctemp2086]);
int nctemp2089 = (i < ls);
int nctemp2077 = (nctemp2080 && nctemp2089);
nctemp2057=nctemp2077;}
#line 1017  "libe.e"
return 0;

#line 1005  "libe.e"
}

#line 1027  "libe.e"
int LibeStrev (nctempchar1 *s)

#line 1028  "libe.e"
{

#line 1029  "libe.e"
char c;
int i;
int j;

#line 1032  "libe.e"
i =0;

#line 1033  "libe.e"
nctempchar1* nctemp2105= s;
int nctemp2108=LibeStrlen(nctemp2105);
int nctemp2110 = nctemp2108 - 1;
j =nctemp2110;

#line 1034  "libe.e"
int nctemp2111 = (i < j);
int nctemp2115=nctemp2111;
while(nctemp2115)
{{

#line 1035  "libe.e"
int nctemp2120=i;
if((0>i)||(i>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1035,nctempstring,i,0,s->d[0]);
}
c =s->a[nctemp2120];

#line 1036  "libe.e"
int nctemp2125=i;
if((0>i)||(i>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1036,nctempstring,i,0,s->d[0]);
}
int nctemp2128=j;
if((0>j)||(j>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1036,nctempstring,j,0,s->d[0]);
}
s->a[nctemp2125] =s->a[nctemp2128];

#line 1037  "libe.e"
int nctemp2133=j;
if((0>j)||(j>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1037,nctempstring,j,0,s->d[0]);
}
s->a[nctemp2133] =c;

#line 1038  "libe.e"
int nctemp2144 = i + 1;
i =nctemp2144;

#line 1039  "libe.e"
int nctemp2153 = j - 1;
j =nctemp2153;

#line 1034  "libe.e"
}
int nctemp2154 = (i < j);
nctemp2115=nctemp2154;}
#line 1041  "libe.e"
return 1;

#line 1028  "libe.e"
}

#line 1052  "libe.e"
int LibeStrcpy (nctempchar1 *s,nctempchar1 *t)

#line 1053  "libe.e"
{

#line 1054  "libe.e"
int ls;
int i;

#line 1057  "libe.e"
nctempchar1* nctemp2163= s;
int nctemp2166=LibeStrlen(nctemp2163);
ls =nctemp2166;

#line 1058  "libe.e"
int nctemp2167 = (ls ==0);
if(nctemp2167)

#line 1059  "libe.e"
{
return 1;
}

#line 1060  "libe.e"
int nctemp2175=t->d[0];int nctemp2172 = (nctemp2175 <= ls);
if(nctemp2172)
{
return 0;
}

#line 1062  "libe.e"
i =0;
int nctemp2185 = (i <= ls);
while(nctemp2185){
{

#line 1063  "libe.e"
int nctemp2192=i;
if((0>i)||(i>=t->d[0])){
nctempstring->a="t";
nctempstring->d[0]=strlen("t")+1;;
LibeArrayex(1063,nctempstring,i,0,t->d[0]);
}
int nctemp2195=i;
if((0>i)||(i>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1063,nctempstring,i,0,s->d[0]);
}
t->a[nctemp2192] =s->a[nctemp2195];

#line 1062  "libe.e"
}
int nctemp2205 = i + 1;
i =nctemp2205;
int nctemp2206 = (i <= ls);
nctemp2185=nctemp2206;
}

#line 1065  "libe.e"
return 1;

#line 1053  "libe.e"
}

#line 1076  "libe.e"
int LibeStrcat (nctempchar1 *s,nctempchar1 *t)

#line 1077  "libe.e"
{

#line 1078  "libe.e"
int ls;
int lt;
int i;

#line 1081  "libe.e"
nctempchar1* nctemp2215= s;
int nctemp2218=LibeStrlen(nctemp2215);
ls =nctemp2218;

#line 1082  "libe.e"
nctempchar1* nctemp2223= t;
int nctemp2226=LibeStrlen(nctemp2223);
lt =nctemp2226;

#line 1083  "libe.e"
int nctemp2230=t->d[0];int nctemp2239 = lt + ls;
int nctemp2227 = (nctemp2230 < nctemp2239);
if(nctemp2227)
{
return 0;
}

#line 1084  "libe.e"
i =lt;
int nctemp2253 = ls + lt;
int nctemp2245 = (i < nctemp2253);
while(nctemp2245){
{

#line 1085  "libe.e"
int nctemp2257=i;
if((0>i)||(i>=t->d[0])){
nctempstring->a="t";
nctempstring->d[0]=strlen("t")+1;;
LibeArrayex(1085,nctempstring,i,0,t->d[0]);
}
int nctemp2265 = i - lt;
int nctemp2260=nctemp2265;
if((0>nctemp2265)||(nctemp2265>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1085,nctempstring,nctemp2265,0,s->d[0]);
}
t->a[nctemp2257] =s->a[nctemp2260];

#line 1084  "libe.e"
}
int nctemp2274 = i + 1;
i =nctemp2274;
int nctemp2283 = ls + lt;
int nctemp2275 = (i < nctemp2283);
nctemp2245=nctemp2275;
}

#line 1087  "libe.e"
int nctemp2292 = ls + lt;
int nctemp2287=nctemp2292;
if((0>nctemp2292)||(nctemp2292>=t->d[0])){
nctempstring->a="t";
nctempstring->d[0]=strlen("t")+1;;
LibeArrayex(1087,nctempstring,nctemp2292,0,t->d[0]);
}
char nctemp2294=(char)(0);
t->a[nctemp2287] =nctemp2294;

#line 1088  "libe.e"
return 1;

#line 1077  "libe.e"
}

#line 1092  "libe.e"
nctempchar1 * LibeStradd (nctempchar1 *t,nctempchar1 *s)

#line 1093  "libe.e"
{

#line 1094  "libe.e"
int ls;
int lt;
nctempchar1 *r;
int i;

#line 1098  "libe.e"
nctempchar1* nctemp2302= s;
int nctemp2305=LibeStrlen(nctemp2302);
ls =nctemp2305;

#line 1099  "libe.e"
nctempchar1* nctemp2310= t;
int nctemp2313=LibeStrlen(nctemp2310);
lt =nctemp2313;

#line 1100  "libe.e"
int nctemp2328 = lt + ls;
int nctemp2330 = nctemp2328 + 1;
int nctemp2320=nctemp2330;
nctempchar1 *nctemp2319;
nctemp2319=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp2338 = lt + ls;
int nctemp2340 = nctemp2338 + 1;
nctemp2319->d[0]=nctemp2340;
nctemp2319->a=(char *)RunMalloc(sizeof(char)*nctemp2320);
r=nctemp2319;

#line 1102  "libe.e"
i =0;
int nctemp2345 = (i < lt);
while(nctemp2345){
{

#line 1103  "libe.e"
int nctemp2352=i;
if((0>i)||(i>=r->d[0])){
nctempstring->a="r";
nctempstring->d[0]=strlen("r")+1;;
LibeArrayex(1103,nctempstring,i,0,r->d[0]);
}
int nctemp2355=i;
if((0>i)||(i>=t->d[0])){
nctempstring->a="t";
nctempstring->d[0]=strlen("t")+1;;
LibeArrayex(1103,nctempstring,i,0,t->d[0]);
}
r->a[nctemp2352] =t->a[nctemp2355];

#line 1102  "libe.e"
}
int nctemp2365 = i + 1;
i =nctemp2365;
int nctemp2366 = (i < lt);
nctemp2345=nctemp2366;
}

#line 1105  "libe.e"
i =lt;
int nctemp2382 = ls + lt;
int nctemp2374 = (i < nctemp2382);
while(nctemp2374){
{

#line 1106  "libe.e"
int nctemp2386=i;
if((0>i)||(i>=r->d[0])){
nctempstring->a="r";
nctempstring->d[0]=strlen("r")+1;;
LibeArrayex(1106,nctempstring,i,0,r->d[0]);
}
int nctemp2394 = i - lt;
int nctemp2389=nctemp2394;
if((0>nctemp2394)||(nctemp2394>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1106,nctempstring,nctemp2394,0,s->d[0]);
}
r->a[nctemp2386] =s->a[nctemp2389];

#line 1105  "libe.e"
}
int nctemp2403 = i + 1;
i =nctemp2403;
int nctemp2412 = ls + lt;
int nctemp2404 = (i < nctemp2412);
nctemp2374=nctemp2404;
}

#line 1108  "libe.e"
int nctemp2421 = ls + lt;
int nctemp2416=nctemp2421;
if((0>nctemp2421)||(nctemp2421>=r->d[0])){
nctempstring->a="r";
nctempstring->d[0]=strlen("r")+1;;
LibeArrayex(1108,nctempstring,nctemp2421,0,r->d[0]);
}
char nctemp2423=(char)(0);
r->a[nctemp2416] =nctemp2423;

#line 1109  "libe.e"
return r;

#line 1093  "libe.e"
}

#line 1120  "libe.e"
nctempchar1 * LibeStrsave (nctempchar1 *s)

#line 1121  "libe.e"
{

#line 1122  "libe.e"
int l;
nctempchar1 *tmp;

#line 1124  "libe.e"
tmp=(0);

#line 1125  "libe.e"
l =0;

#line 1128  "libe.e"
nctempchar1* nctemp2441= s;
int nctemp2444=LibeStrlen(nctemp2441);
l =nctemp2444;

#line 1129  "libe.e"
int nctemp2456 = l + 1;
int nctemp2451=nctemp2456;
nctempchar1 *nctemp2450;
nctemp2450=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp2461 = l + 1;
nctemp2450->d[0]=nctemp2461;
nctemp2450->a=(char *)RunMalloc(sizeof(char)*nctemp2451);
tmp=nctemp2450;

#line 1130  "libe.e"
nctempchar1 *nctemp2463 =tmp;
int nctemp2462 =(nctemp2463!=0);
if(nctemp2462)

#line 1131  "libe.e"
{
nctempchar1* nctemp2468= s;
nctempchar1* nctemp2471= tmp;
int nctemp2474=LibeStrcpy(nctemp2468,nctemp2471);
}

#line 1132  "libe.e"
return tmp;

#line 1121  "libe.e"
}

#line 1144  "libe.e"
int LibeIsalpha (int c)

#line 1145  "libe.e"
{

#line 1146  "libe.e"
int nctemp2483 = (c >= 'a');
int nctemp2488 = (c <= 'z');
int nctemp2480 = (nctemp2483 && nctemp2488);
int nctemp2496 = (c >= 'A');
int nctemp2501 = (c <= 'Z');
int nctemp2493 = (nctemp2496 && nctemp2501);
int nctemp2477 = (nctemp2480 || nctemp2493);
if(nctemp2477)

#line 1147  "libe.e"
{
return 1;
}

#line 1149  "libe.e"
else{
return 0;
}

#line 1145  "libe.e"
}

#line 1160  "libe.e"
int LibeIsdigit (int c)

#line 1161  "libe.e"
{

#line 1162  "libe.e"
int nctemp2510 = (c >= '0');
int nctemp2515 = (c <= '9');
int nctemp2507 = (nctemp2510 && nctemp2515);
if(nctemp2507)

#line 1163  "libe.e"
{
return 1;
}

#line 1165  "libe.e"
else{
return 0;
}

#line 1161  "libe.e"
}

#line 1178  "libe.e"
int LibeIsalnum (int c)

#line 1179  "libe.e"
{

#line 1180  "libe.e"
int nctemp2527 = (c >= 'a');
int nctemp2532 = (c <= 'z');
int nctemp2524 = (nctemp2527 && nctemp2532);
int nctemp2540 = (c >= 'A');
int nctemp2545 = (c <= 'Z');
int nctemp2537 = (nctemp2540 && nctemp2545);
int nctemp2521 = (nctemp2524 || nctemp2537);
if(nctemp2521)

#line 1181  "libe.e"
{
return 1;
}

#line 1182  "libe.e"
else{
int nctemp2553 = (c >= '0');
int nctemp2558 = (c <= '9');
int nctemp2550 = (nctemp2553 && nctemp2558);
if(nctemp2550)

#line 1183  "libe.e"
{
return 1;
}

#line 1185  "libe.e"
else{
return 0;
}

#line 1182  "libe.e"
}

#line 1179  "libe.e"
}

#line 1196  "libe.e"
int LibeFtoaf (int mant,int nexp,int nfield,int nfrac,nctempchar1 *s);

#line 1197  "libe.e"
int LibeFtoae (int mant,int nexp,int nfield,int nfrac,nctempchar1 *s);

#line 1207  "libe.e"
int LibeAtoi (nctempchar1 *s)

#line 1208  "libe.e"
{

#line 1209  "libe.e"
int sign;
int i;
int n;

#line 1215  "libe.e"
i =0;

#line 1216  "libe.e"
int nctemp2577=i;
if((0>i)||(i>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1216,nctempstring,i,0,s->d[0]);
}
char nctemp2580=(char)(' ');
int nctemp2574 = (s->a[nctemp2577] ==nctemp2580);
int nctemp2587=i;
if((0>i)||(i>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1216,nctempstring,i,0,s->d[0]);
}
char nctemp2590=(char)(10);
int nctemp2584 = (s->a[nctemp2587] ==nctemp2590);
int nctemp2571 = (nctemp2574 || nctemp2584);

#line 1217  "libe.e"
int nctemp2597=i;
if((0>i)||(i>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1217,nctempstring,i,0,s->d[0]);
}
char nctemp2600=(char)(9);
int nctemp2594 = (s->a[nctemp2597] ==nctemp2600);
int nctemp2568 = (nctemp2571 || nctemp2594);
int nctemp2603=nctemp2568;
while(nctemp2603)
{{

#line 1218  "libe.e"
int nctemp2612 = i + 1;
i =nctemp2612;

#line 1217  "libe.e"
}

#line 1216  "libe.e"
int nctemp2622=i;
if((0>i)||(i>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1216,nctempstring,i,0,s->d[0]);
}
char nctemp2625=(char)(' ');
int nctemp2619 = (s->a[nctemp2622] ==nctemp2625);
int nctemp2632=i;
if((0>i)||(i>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1216,nctempstring,i,0,s->d[0]);
}
char nctemp2635=(char)(10);
int nctemp2629 = (s->a[nctemp2632] ==nctemp2635);
int nctemp2616 = (nctemp2619 || nctemp2629);

#line 1217  "libe.e"
int nctemp2642=i;
if((0>i)||(i>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1217,nctempstring,i,0,s->d[0]);
}
char nctemp2645=(char)(9);
int nctemp2639 = (s->a[nctemp2642] ==nctemp2645);
int nctemp2613 = (nctemp2616 || nctemp2639);
nctemp2603=nctemp2613;}
#line 1223  "libe.e"
int nctemp2651=i;
if((0>i)||(i>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1223,nctempstring,i,0,s->d[0]);
}
char nctemp2654=(char)('-');
int nctemp2648 = (s->a[nctemp2651] ==nctemp2654);
if(nctemp2648)
{

#line 1224  "libe.e"
int nctemp2660= -1;
sign =nctemp2660;

#line 1225  "libe.e"
int nctemp2669 = i + 1;
i =nctemp2669;

#line 1223  "libe.e"
}

#line 1227  "libe.e"
else{
int nctemp2673=i;
if((0>i)||(i>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1227,nctempstring,i,0,s->d[0]);
}
char nctemp2676=(char)('+');
int nctemp2670 = (s->a[nctemp2673] ==nctemp2676);
if(nctemp2670)
{

#line 1228  "libe.e"
sign =1;

#line 1229  "libe.e"
int nctemp2691 = i + 1;
i =nctemp2691;

#line 1227  "libe.e"
}

#line 1232  "libe.e"
else{
sign =1;
}

#line 1227  "libe.e"
}

#line 1236  "libe.e"
n =0;
int nctemp2706=i;
if((0>i)||(i>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1236,nctempstring,i,0,s->d[0]);
}
int nctemp2703=(int)(s->a[nctemp2706]);
int nctemp2701= nctemp2703;
int nctemp2708=LibeIsdigit(nctemp2701);
while(nctemp2708){
{

#line 1237  "libe.e"
int nctemp2723 = 10 * n;
int nctemp2728=i;
if((0>i)||(i>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1237,nctempstring,i,0,s->d[0]);
}
int nctemp2725=(int)(s->a[nctemp2728]);
int nctemp2730 = nctemp2723 + nctemp2725;
int nctemp2732 = nctemp2730 - '0';
n =nctemp2732;

#line 1236  "libe.e"
}
int nctemp2741 = i + 1;
i =nctemp2741;
int nctemp2748=i;
if((0>i)||(i>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1236,nctempstring,i,0,s->d[0]);
}
int nctemp2745=(int)(s->a[nctemp2748]);
int nctemp2743= nctemp2745;
int nctemp2750=LibeIsdigit(nctemp2743);
nctemp2708=nctemp2750;
}

#line 1239  "libe.e"
int nctemp2755 = sign * n;
return nctemp2755;

#line 1208  "libe.e"
}

#line 1252  "libe.e"
int LibeItoa (int n,nctempchar1 *s)

#line 1253  "libe.e"
{

#line 1254  "libe.e"
int sign;
int i;

#line 1257  "libe.e"
nctempchar1 *nctemp2757 =s;
int nctemp2756 =(nctemp2757==0);
if(nctemp2756)
{
return 0;
}

#line 1259  "libe.e"
sign =n;
int nctemp2762 = (sign < 0);
if(nctemp2762)
{

#line 1260  "libe.e"
int nctemp2773= -n;
n =nctemp2773;

#line 1259  "libe.e"
}

#line 1262  "libe.e"
i =0;

#line 1263  "libe.e"
int nctemp2781=0;
if((0>0)||(0>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1263,nctempstring,0,0,s->d[0]);
}
int nctemp2789= n;
int nctemp2791= 10;
int nctemp2793=LibeMod(nctemp2789,nctemp2791);
int nctemp2795 = nctemp2793 + 48;
char nctemp2784=(char)(nctemp2795);
s->a[nctemp2781] =nctemp2784;

#line 1264  "libe.e"
int nctemp2807 = n / 10;
n =nctemp2807;
int nctemp2796 = (n > 0);
int nctemp2809=nctemp2796;
while(nctemp2809)
{{

#line 1265  "libe.e"
int nctemp2817 = i + 1;
int nctemp2822=s->d[0];int nctemp2827 = nctemp2822 - 1;
int nctemp2810 = (nctemp2817 > nctemp2827);
if(nctemp2810)
{
return 0;
}

#line 1266  "libe.e"
int nctemp2841 = i + 1;
i =nctemp2841;
int nctemp2832=i;
if((0>i)||(i>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1266,nctempstring,i,0,s->d[0]);
}
int nctemp2848= n;
int nctemp2850= 10;
int nctemp2852=LibeMod(nctemp2848,nctemp2850);
int nctemp2854 = nctemp2852 + 48;
char nctemp2843=(char)(nctemp2854);
s->a[nctemp2832] =nctemp2843;

#line 1264  "libe.e"
}
int nctemp2866 = n / 10;
n =nctemp2866;
int nctemp2855 = (n > 0);
nctemp2809=nctemp2855;}
#line 1268  "libe.e"
int nctemp2868 = (sign < 0);
if(nctemp2868)
{

#line 1269  "libe.e"
int nctemp2879 = i + 1;
int nctemp2884=s->d[0];int nctemp2889 = nctemp2884 - 1;
int nctemp2872 = (nctemp2879 > nctemp2889);
if(nctemp2872)
{
return 0;
}

#line 1270  "libe.e"
int nctemp2903 = i + 1;
i =nctemp2903;
int nctemp2894=i;
if((0>i)||(i>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1270,nctempstring,i,0,s->d[0]);
}
char nctemp2905=(char)(45);
s->a[nctemp2894] =nctemp2905;

#line 1268  "libe.e"
}

#line 1272  "libe.e"
int nctemp2915 = i + 1;
int nctemp2920=s->d[0];int nctemp2925 = nctemp2920 - 1;
int nctemp2908 = (nctemp2915 > nctemp2925);
if(nctemp2908)
{
return 0;
}

#line 1273  "libe.e"
int nctemp2939 = i + 1;
i =nctemp2939;
int nctemp2930=i;
if((0>i)||(i>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1273,nctempstring,i,0,s->d[0]);
}
char nctemp2941=(char)(0);
s->a[nctemp2930] =nctemp2941;

#line 1274  "libe.e"
nctempchar1* nctemp2945= s;
int nctemp2948=LibeStrev(nctemp2945);

#line 1275  "libe.e"
return 1;

#line 1253  "libe.e"
}

#line 1284  "libe.e"
int LibeItoh (int n,nctempchar1 *s)

#line 1285  "libe.e"
{

#line 1286  "libe.e"
int i;
int sign;

#line 1288  "libe.e"
sign =n;
int nctemp2950 = (sign < 0);
if(nctemp2950)

#line 1289  "libe.e"
{
int nctemp2961= -n;
n =nctemp2961;
}

#line 1291  "libe.e"
i =0;

#line 1292  "libe.e"
int nctemp2969= n;
int nctemp2971= 16;
int nctemp2973=LibeMod(nctemp2969,nctemp2971);
int nctemp2966 = (nctemp2973 <= 9);
if(nctemp2966)
{

#line 1293  "libe.e"
int nctemp2978=0;
if((0>0)||(0>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1293,nctempstring,0,0,s->d[0]);
}
int nctemp2986= n;
int nctemp2988= 16;
int nctemp2990=LibeMod(nctemp2986,nctemp2988);
int nctemp2992 = nctemp2990 + 48;
char nctemp2981=(char)(nctemp2992);
s->a[nctemp2978] =nctemp2981;

#line 1292  "libe.e"
}

#line 1295  "libe.e"
else{

#line 1296  "libe.e"
int nctemp2996=0;
if((0>0)||(0>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1296,nctempstring,0,0,s->d[0]);
}
int nctemp3007= n;
int nctemp3009= 16;
int nctemp3011=LibeMod(nctemp3007,nctemp3009);
int nctemp3013 = nctemp3011 + 'a';
int nctemp3015 = nctemp3013 - 10;
char nctemp2999=(char)(nctemp3015);
s->a[nctemp2996] =nctemp2999;

#line 1295  "libe.e"
}

#line 1298  "libe.e"
int nctemp3027 = n / 16;
n =nctemp3027;
int nctemp3016 = (n > 0);
int nctemp3029=nctemp3016;
while(nctemp3029)
{{

#line 1299  "libe.e"
int nctemp3033= n;
int nctemp3035= 16;
int nctemp3037=LibeMod(nctemp3033,nctemp3035);
int nctemp3030 = (nctemp3037 <= 9);
if(nctemp3030)
{

#line 1300  "libe.e"
int nctemp3051 = i + 1;
i =nctemp3051;
int nctemp3042=i;
if((0>i)||(i>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1300,nctempstring,i,0,s->d[0]);
}
int nctemp3058= n;
int nctemp3060= 16;
int nctemp3062=LibeMod(nctemp3058,nctemp3060);
int nctemp3064 = nctemp3062 + 48;
char nctemp3053=(char)(nctemp3064);
s->a[nctemp3042] =nctemp3053;

#line 1299  "libe.e"
}

#line 1302  "libe.e"
else{

#line 1303  "libe.e"
int nctemp3077 = i + 1;
i =nctemp3077;
int nctemp3068=i;
if((0>i)||(i>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1303,nctempstring,i,0,s->d[0]);
}
int nctemp3087= n;
int nctemp3089= 16;
int nctemp3091=LibeMod(nctemp3087,nctemp3089);
int nctemp3093 = nctemp3091 + 'a';
int nctemp3095 = nctemp3093 - 10;
char nctemp3079=(char)(nctemp3095);
s->a[nctemp3068] =nctemp3079;

#line 1302  "libe.e"
}

#line 1298  "libe.e"
}
int nctemp3107 = n / 16;
n =nctemp3107;
int nctemp3096 = (n > 0);
nctemp3029=nctemp3096;}
#line 1306  "libe.e"
int nctemp3109 = (sign < 0);
if(nctemp3109)

#line 1307  "libe.e"
{
int nctemp3125 = i + 1;
i =nctemp3125;
int nctemp3116=i;
if((0>i)||(i>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1307,nctempstring,i,0,s->d[0]);
}
char nctemp3127=(char)(45);
s->a[nctemp3116] =nctemp3127;
}

#line 1308  "libe.e"
int nctemp3142 = i + 1;
i =nctemp3142;
int nctemp3133=i;
if((0>i)||(i>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1308,nctempstring,i,0,s->d[0]);
}
char nctemp3144=(char)(0);
s->a[nctemp3133] =nctemp3144;

#line 1309  "libe.e"
nctempchar1* nctemp3148= s;
int nctemp3151=LibeStrev(nctemp3148);

#line 1310  "libe.e"
return 0;

#line 1285  "libe.e"
}

#line 1321  "libe.e"
float LibeAtof (nctempchar1 *s)

#line 1322  "libe.e"
{

#line 1323  "libe.e"
float val;
float power;
int exponent;
int sign;
int esign;
int i;

#line 1326  "libe.e"
sign =1;

#line 1327  "libe.e"
val =0.0;

#line 1328  "libe.e"
power =1.0;

#line 1329  "libe.e"
exponent =0;

#line 1330  "libe.e"
esign =1;

#line 1331  "libe.e"
i =0;

#line 1332  "libe.e"
int nctemp3180=i;
if((0>i)||(i>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1332,nctempstring,i,0,s->d[0]);
}
char nctemp3183=(char)(' ');
int nctemp3177 = (s->a[nctemp3180] ==nctemp3183);
int nctemp3186=nctemp3177;
while(nctemp3186)
{
#line 1333  "libe.e"
{
int nctemp3195 = i + 1;
i =nctemp3195;
}

#line 1332  "libe.e"
int nctemp3199=i;
if((0>i)||(i>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1332,nctempstring,i,0,s->d[0]);
}
char nctemp3202=(char)(' ');
int nctemp3196 = (s->a[nctemp3199] ==nctemp3202);

#line 1333  "libe.e"
nctemp3186=nctemp3196;}
#line 1334  "libe.e"
int nctemp3211=i;
if((0>i)||(i>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1334,nctempstring,i,0,s->d[0]);
}
char nctemp3214=(char)('+');
int nctemp3208 = (s->a[nctemp3211] ==nctemp3214);
int nctemp3221=i;
if((0>i)||(i>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1334,nctempstring,i,0,s->d[0]);
}
char nctemp3224=(char)('-');
int nctemp3218 = (s->a[nctemp3221] ==nctemp3224);
int nctemp3205 = (nctemp3208 || nctemp3218);
if(nctemp3205)
{

#line 1335  "libe.e"
int nctemp3230=i;
if((0>i)||(i>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1335,nctempstring,i,0,s->d[0]);
}
char nctemp3233=(char)('-');
int nctemp3227 = (s->a[nctemp3230] ==nctemp3233);
if(nctemp3227)
{
int nctemp3239= -1;
sign =nctemp3239;
}

#line 1336  "libe.e"
int nctemp3248 = i + 1;
i =nctemp3248;

#line 1334  "libe.e"
}

#line 1338  "libe.e"
int nctemp3255=i;
if((0>i)||(i>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1338,nctempstring,i,0,s->d[0]);
}
int nctemp3252=(int)(s->a[nctemp3255]);
int nctemp3250= nctemp3252;
int nctemp3257=LibeIsdigit(nctemp3250);
int nctemp3258=nctemp3257;
while(nctemp3258)
{{

#line 1339  "libe.e"
float nctemp3270 = 10.0 * val;
int nctemp3280=i;
if((0>i)||(i>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1339,nctempstring,i,0,s->d[0]);
}
int nctemp3277=(int)(s->a[nctemp3280]);
int nctemp3283 = nctemp3277 - '0';
float nctemp3272=(float)(nctemp3283);
float nctemp3284 = nctemp3270 + nctemp3272;
val =nctemp3284;

#line 1340  "libe.e"
int nctemp3293 = i + 1;
i =nctemp3293;

#line 1338  "libe.e"
}
int nctemp3300=i;
if((0>i)||(i>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1338,nctempstring,i,0,s->d[0]);
}
int nctemp3297=(int)(s->a[nctemp3300]);
int nctemp3295= nctemp3297;
int nctemp3302=LibeIsdigit(nctemp3295);
nctemp3258=nctemp3302;}
#line 1342  "libe.e"
int nctemp3306=i;
if((0>i)||(i>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1342,nctempstring,i,0,s->d[0]);
}
char nctemp3309=(char)('.');
int nctemp3303 = (s->a[nctemp3306] ==nctemp3309);
if(nctemp3303)
{

#line 1343  "libe.e"
int nctemp3320 = i + 1;
i =nctemp3320;

#line 1344  "libe.e"
int nctemp3327=i;
if((0>i)||(i>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1344,nctempstring,i,0,s->d[0]);
}
int nctemp3324=(int)(s->a[nctemp3327]);
int nctemp3322= nctemp3324;
int nctemp3329=LibeIsdigit(nctemp3322);
int nctemp3330=nctemp3329;
while(nctemp3330)
{{

#line 1345  "libe.e"
float nctemp3342 = 10.0 * val;
int nctemp3352=i;
if((0>i)||(i>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1345,nctempstring,i,0,s->d[0]);
}
int nctemp3349=(int)(s->a[nctemp3352]);
int nctemp3355 = nctemp3349 - '0';
float nctemp3344=(float)(nctemp3355);
float nctemp3356 = nctemp3342 + nctemp3344;
val =nctemp3356;

#line 1346  "libe.e"
int nctemp3365 = i + 1;
i =nctemp3365;

#line 1347  "libe.e"
float nctemp3374 = 10.0 * power;
power =nctemp3374;

#line 1344  "libe.e"
}
int nctemp3381=i;
if((0>i)||(i>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1344,nctempstring,i,0,s->d[0]);
}
int nctemp3378=(int)(s->a[nctemp3381]);
int nctemp3376= nctemp3378;
int nctemp3383=LibeIsdigit(nctemp3376);
nctemp3330=nctemp3383;}
#line 1342  "libe.e"
}

#line 1350  "libe.e"
int nctemp3390=i;
if((0>i)||(i>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1350,nctempstring,i,0,s->d[0]);
}
char nctemp3393=(char)('e');
int nctemp3387 = (s->a[nctemp3390] ==nctemp3393);
int nctemp3400=i;
if((0>i)||(i>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1350,nctempstring,i,0,s->d[0]);
}
char nctemp3403=(char)('E');
int nctemp3397 = (s->a[nctemp3400] ==nctemp3403);
int nctemp3384 = (nctemp3387 || nctemp3397);
if(nctemp3384)
{

#line 1351  "libe.e"
int nctemp3414 = i + 1;
i =nctemp3414;

#line 1352  "libe.e"
int nctemp3421=i;
if((0>i)||(i>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1352,nctempstring,i,0,s->d[0]);
}
char nctemp3424=(char)('+');
int nctemp3418 = (s->a[nctemp3421] ==nctemp3424);
int nctemp3431=i;
if((0>i)||(i>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1352,nctempstring,i,0,s->d[0]);
}
char nctemp3434=(char)('-');
int nctemp3428 = (s->a[nctemp3431] ==nctemp3434);
int nctemp3415 = (nctemp3418 || nctemp3428);
if(nctemp3415)
{

#line 1353  "libe.e"
int nctemp3440=i;
if((0>i)||(i>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1353,nctempstring,i,0,s->d[0]);
}
char nctemp3443=(char)('-');
int nctemp3437 = (s->a[nctemp3440] ==nctemp3443);
if(nctemp3437)
{
int nctemp3449= -1;
esign =nctemp3449;
}

#line 1354  "libe.e"
int nctemp3458 = i + 1;
i =nctemp3458;

#line 1352  "libe.e"
}

#line 1356  "libe.e"
int nctemp3465=i;
if((0>i)||(i>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1356,nctempstring,i,0,s->d[0]);
}
int nctemp3462=(int)(s->a[nctemp3465]);
int nctemp3460= nctemp3462;
int nctemp3467=LibeIsdigit(nctemp3460);
int nctemp3468=nctemp3467;
while(nctemp3468)
{{

#line 1357  "libe.e"
int nctemp3483 = 10 * exponent;
int nctemp3488=i;
if((0>i)||(i>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1357,nctempstring,i,0,s->d[0]);
}
int nctemp3485=(int)(s->a[nctemp3488]);
int nctemp3490 = nctemp3483 + nctemp3485;
int nctemp3492 = nctemp3490 - '0';
exponent =nctemp3492;

#line 1358  "libe.e"
int nctemp3501 = i + 1;
i =nctemp3501;

#line 1356  "libe.e"
}
int nctemp3508=i;
if((0>i)||(i>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1356,nctempstring,i,0,s->d[0]);
}
int nctemp3505=(int)(s->a[nctemp3508]);
int nctemp3503= nctemp3505;
int nctemp3510=LibeIsdigit(nctemp3503);
nctemp3468=nctemp3510;}
#line 1350  "libe.e"
}

#line 1361  "libe.e"
float nctemp3519=(float)(sign);
float nctemp3523 = nctemp3519 * val;
float nctemp3525=(float)(power);
float nctemp3528 = nctemp3523 / nctemp3525;
float nctemp3512= nctemp3528;
int nctemp3534 = esign * exponent;
int nctemp3529= nctemp3534;
float nctemp3535=LibeFscale(nctemp3512,nctemp3529);
return nctemp3535;

#line 1322  "libe.e"
}

#line 1372  "libe.e"
int LibeFtoa (float f,nctempchar1 *fmt,nctempchar1 *s)

#line 1373  "libe.e"
{

#line 1374  "libe.e"
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

#line 1381  "libe.e"
int nctemp3539=s->d[0];int nctemp3544=fmt->d[0];int nctemp3536 = (nctemp3539 < nctemp3544);
if(nctemp3536)

#line 1382  "libe.e"
{
return 0;
}

#line 1384  "libe.e"
int nctemp3556=fmt->d[0];int nctemp3561 = nctemp3556 - 2;
l =nctemp3561;

#line 1385  "libe.e"
p =0;

#line 1386  "libe.e"
q =0;

#line 1391  "libe.e"
int nctemp3577=p;
if((0>p)||(p>=fmt->d[0])){
nctempstring->a="fmt";
nctempstring->d[0]=strlen("fmt")+1;;
LibeArrayex(1391,nctempstring,p,0,fmt->d[0]);
}
int nctemp3574=(int)(fmt->a[nctemp3577]);
c =nctemp3574;

#line 1393  "libe.e"
int nctemp3579 = (c =='g');
if(nctemp3579)
{

#line 1394  "libe.e"
mode ='g';

#line 1393  "libe.e"
}

#line 1396  "libe.e"
else{

#line 1397  "libe.e"
int nctemp3590= c;
int nctemp3592=LibeIsdigit(nctemp3590);
int nctemp3587 = (nctemp3592 ==1);
if(nctemp3587)
{

#line 1398  "libe.e"
int nctemp3597= c;
int nctemp3599=LibeIsdigit(nctemp3597);
int nctemp3594 = (nctemp3599 ==1);
int nctemp3601=nctemp3594;
while(nctemp3601)
{{

#line 1399  "libe.e"
int nctemp3605=q;
if((0>q)||(q>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1399,nctempstring,q,0,s->d[0]);
}
int nctemp3608=p;
if((0>p)||(p>=fmt->d[0])){
nctempstring->a="fmt";
nctempstring->d[0]=strlen("fmt")+1;;
LibeArrayex(1399,nctempstring,p,0,fmt->d[0]);
}
s->a[nctemp3605] =fmt->a[nctemp3608];

#line 1400  "libe.e"
int nctemp3621 = p + 1;
p =nctemp3621;
int nctemp3610 = (p > l);
if(nctemp3610)

#line 1401  "libe.e"
{
return 0;
}

#line 1402  "libe.e"
int nctemp3632 = q + 1;
q =nctemp3632;

#line 1403  "libe.e"
int nctemp3640=p;
if((0>p)||(p>=fmt->d[0])){
nctempstring->a="fmt";
nctempstring->d[0]=strlen("fmt")+1;;
LibeArrayex(1403,nctempstring,p,0,fmt->d[0]);
}
int nctemp3637=(int)(fmt->a[nctemp3640]);
c =nctemp3637;

#line 1398  "libe.e"
}
int nctemp3645= c;
int nctemp3647=LibeIsdigit(nctemp3645);
int nctemp3642 = (nctemp3647 ==1);
nctemp3601=nctemp3642;}
#line 1405  "libe.e"
int nctemp3652=q;
if((0>q)||(q>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1405,nctempstring,q,0,s->d[0]);
}
char nctemp3655=(char)(0);
s->a[nctemp3652] =nctemp3655;

#line 1406  "libe.e"
nctempchar1* nctemp3662= s;
int nctemp3665=LibeAtoi(nctemp3662);
nfield =nctemp3665;

#line 1397  "libe.e"
}

#line 1409  "libe.e"
else{
return 0;
}

#line 1411  "libe.e"
int nctemp3667 = (c !='.');
if(nctemp3667)

#line 1412  "libe.e"
{
return 0;
}

#line 1414  "libe.e"
int nctemp3683 = p + 1;
p =nctemp3683;
int nctemp3672 = (p > l);
if(nctemp3672)

#line 1415  "libe.e"
{
return 0;
}

#line 1416  "libe.e"
int nctemp3693=p;
if((0>p)||(p>=fmt->d[0])){
nctempstring->a="fmt";
nctempstring->d[0]=strlen("fmt")+1;;
LibeArrayex(1416,nctempstring,p,0,fmt->d[0]);
}
int nctemp3690=(int)(fmt->a[nctemp3693]);
c =nctemp3690;

#line 1418  "libe.e"
q =0;

#line 1419  "libe.e"
int nctemp3702= c;
int nctemp3704=LibeIsdigit(nctemp3702);
int nctemp3699 = (nctemp3704 ==1);
if(nctemp3699)
{

#line 1420  "libe.e"
int nctemp3709= c;
int nctemp3711=LibeIsdigit(nctemp3709);
int nctemp3706 = (nctemp3711 ==1);
int nctemp3713=nctemp3706;
while(nctemp3713)
{{

#line 1421  "libe.e"
int nctemp3717=q;
if((0>q)||(q>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1421,nctempstring,q,0,s->d[0]);
}
int nctemp3720=p;
if((0>p)||(p>=fmt->d[0])){
nctempstring->a="fmt";
nctempstring->d[0]=strlen("fmt")+1;;
LibeArrayex(1421,nctempstring,p,0,fmt->d[0]);
}
s->a[nctemp3717] =fmt->a[nctemp3720];

#line 1422  "libe.e"
int nctemp3733 = p + 1;
p =nctemp3733;
int nctemp3722 = (p > l);
if(nctemp3722)

#line 1423  "libe.e"
{
return 0;
}

#line 1424  "libe.e"
int nctemp3744 = q + 1;
q =nctemp3744;

#line 1425  "libe.e"
int nctemp3752=p;
if((0>p)||(p>=fmt->d[0])){
nctempstring->a="fmt";
nctempstring->d[0]=strlen("fmt")+1;;
LibeArrayex(1425,nctempstring,p,0,fmt->d[0]);
}
int nctemp3749=(int)(fmt->a[nctemp3752]);
c =nctemp3749;

#line 1420  "libe.e"
}
int nctemp3757= c;
int nctemp3759=LibeIsdigit(nctemp3757);
int nctemp3754 = (nctemp3759 ==1);
nctemp3713=nctemp3754;}
#line 1427  "libe.e"
int nctemp3764=q;
if((0>q)||(q>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1427,nctempstring,q,0,s->d[0]);
}
char nctemp3767=(char)(0);
s->a[nctemp3764] =nctemp3767;

#line 1428  "libe.e"
nctempchar1* nctemp3774= s;
int nctemp3777=LibeAtoi(nctemp3774);
nfrac =nctemp3777;

#line 1419  "libe.e"
}

#line 1431  "libe.e"
else{
return 0;
}

#line 1433  "libe.e"
int nctemp3779 = (c =='f');
if(nctemp3779)
{

#line 1434  "libe.e"
mode ='f';

#line 1433  "libe.e"
}

#line 1436  "libe.e"
else{
int nctemp3787 = (c =='e');
if(nctemp3787)
{

#line 1437  "libe.e"
mode ='e';

#line 1436  "libe.e"
}

#line 1440  "libe.e"
else{
return 0;
}

#line 1436  "libe.e"
}

#line 1396  "libe.e"
}

#line 1445  "libe.e"
int nctemp3796 = (mode =='g');
if(nctemp3796)
{

#line 1446  "libe.e"
float nctemp3804= f;
int nctemp3806=LibeGetmaxdig(nctemp3804);
nfrac =nctemp3806;

#line 1447  "libe.e"
int nctemp3833 = 1 + 1;
int nctemp3835 = nctemp3833 + 1;
int nctemp3837 = nctemp3835 + 1;
int nctemp3839 = nctemp3837 + nfrac;
int nctemp3841 = nctemp3839 + 1;
int nctemp3843 = nctemp3841 + 1;
int nctemp3845 = nctemp3843 + 2;
nfield =nctemp3845;

#line 1448  "libe.e"
int nctemp3854 = nfrac + 1;
ndigit =nctemp3854;

#line 1449  "libe.e"
float nctemp3859= f;
int nctemp3861= ndigit;
int nctemp3863=LibeGetfman(nctemp3859,nctemp3861);
mant =nctemp3863;

#line 1450  "libe.e"
float nctemp3868= f;
int nctemp3870=LibeGetfexp(nctemp3868);
nexp =nctemp3870;

#line 1451  "libe.e"
int nctemp3872= mant;
int nctemp3874= nexp;
int nctemp3876= nfield;
int nctemp3878= nfrac;
nctempchar1* nctemp3880= s;
int nctemp3883=LibeFtoae(nctemp3872,nctemp3874,nctemp3876,nctemp3878,nctemp3880);

#line 1445  "libe.e"
}

#line 1453  "libe.e"
else{
int nctemp3884 = (mode =='e');
if(nctemp3884)
{

#line 1454  "libe.e"
int nctemp3896 = nfrac + 1;
ndigit =nctemp3896;

#line 1455  "libe.e"
float nctemp3901= f;
int nctemp3903= ndigit;
int nctemp3905=LibeGetfman(nctemp3901,nctemp3903);
mant =nctemp3905;

#line 1456  "libe.e"
float nctemp3910= f;
int nctemp3912=LibeGetfexp(nctemp3910);
nexp =nctemp3912;

#line 1457  "libe.e"
int nctemp3914= mant;
int nctemp3916= nexp;
int nctemp3918= nfield;
int nctemp3920= nfrac;
nctempchar1* nctemp3922= s;
int nctemp3925=LibeFtoae(nctemp3914,nctemp3916,nctemp3918,nctemp3920,nctemp3922);

#line 1453  "libe.e"
}

#line 1459  "libe.e"
else{
int nctemp3926 = (mode =='f');
if(nctemp3926)
{

#line 1460  "libe.e"
float nctemp3934= f;
int nctemp3936=LibeGetfexp(nctemp3934);
nexp =nctemp3936;

#line 1461  "libe.e"
int nctemp3948 = nexp + nfrac;
int nctemp3950 = nctemp3948 + 1;
ndigit =nctemp3950;

#line 1462  "libe.e"
float nctemp3955= f;
int nctemp3957= ndigit;
int nctemp3959=LibeGetfman(nctemp3955,nctemp3957);
mant =nctemp3959;

#line 1463  "libe.e"
int nctemp3961= mant;
int nctemp3963= nexp;
int nctemp3965= nfield;
int nctemp3967= nfrac;
nctempchar1* nctemp3969= s;
int nctemp3972=LibeFtoaf(nctemp3961,nctemp3963,nctemp3965,nctemp3967,nctemp3969);

#line 1459  "libe.e"
}
}

#line 1453  "libe.e"
}

#line 1465  "libe.e"
return 1;

#line 1373  "libe.e"
}

#line 1474  "libe.e"
int LibeFtoae (int mant,int nexp,int nfield,int nfrac,nctempchar1 *s)

#line 1475  "libe.e"
{

#line 1477  "libe.e"
int tp;
int sign;
int i;
int l;
nctempchar1 *t;

#line 1482  "libe.e"
int nctemp3974 = (mant < 0);
if(nctemp3974)
{

#line 1483  "libe.e"
int nctemp3981= -mant;
mant =nctemp3981;

#line 1484  "libe.e"
int nctemp3985= -1;
sign =nctemp3985;

#line 1482  "libe.e"
}

#line 1487  "libe.e"
else{
sign =1;
}

#line 1496  "libe.e"
int nctemp3993=s->d[0];int nctemp4020 = 1 + 1;
int nctemp4022 = nctemp4020 + 1;
int nctemp4024 = nctemp4022 + nfrac;
int nctemp4026 = nctemp4024 + 1;
int nctemp4028 = nctemp4026 + 1;
int nctemp4030 = nctemp4028 + 2;
int nctemp4032 = nctemp4030 + 1;
int nctemp3990 = (nctemp3993 < nctemp4032);
if(nctemp3990)

#line 1497  "libe.e"
{
return 0;
}

#line 1499  "libe.e"
int nctemp4042=s->d[0];int nctemp4040=nctemp4042;
nctempchar1 *nctemp4039;
nctemp4039=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp4047=s->d[0];nctemp4039->d[0]=nctemp4047;
nctemp4039->a=(char *)RunMalloc(sizeof(char)*nctemp4040);
t=nctemp4039;

#line 1501  "libe.e"
int nctemp4074 = 1 + 1;
int nctemp4076 = nctemp4074 + nfrac;
int nctemp4078 = nctemp4076 + 1;
int nctemp4080 = nctemp4078 + 1;
int nctemp4082 = nctemp4080 + 2;
int nctemp4084 = nctemp4082 + 1;
l =nctemp4084;

#line 1502  "libe.e"
int nctemp4085 = (sign < 0);
if(nctemp4085)
{
int nctemp4097 = l + 1;
l =nctemp4097;
}

#line 1504  "libe.e"
int nctemp4098 = (nfield < l);
if(nctemp4098)
{

#line 1505  "libe.e"
i =0;
int nctemp4106 = (i < nfield);
while(nctemp4106){
{

#line 1506  "libe.e"
int nctemp4113=i;
if((0>i)||(i>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1506,nctempstring,i,0,s->d[0]);
}
char nctemp4116=(char)('*');
s->a[nctemp4113] =nctemp4116;

#line 1505  "libe.e"
}
int nctemp4127 = i + 1;
i =nctemp4127;
int nctemp4128 = (i < nfield);
nctemp4106=nctemp4128;
}

#line 1508  "libe.e"
int nctemp4135=nfield;
if((0>nfield)||(nfield>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1508,nctempstring,nfield,0,s->d[0]);
}
char nctemp4138=(char)(0);
s->a[nctemp4135] =nctemp4138;

#line 1509  "libe.e"
return 0;

#line 1504  "libe.e"
}

#line 1512  "libe.e"
else{
int nctemp4150 = nfield - l;
tp =nctemp4150;
}

#line 1514  "libe.e"
i =0;
int nctemp4155 = (i < tp);
while(nctemp4155){
{

#line 1515  "libe.e"
int nctemp4162=i;
if((0>i)||(i>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1515,nctempstring,i,0,s->d[0]);
}
char nctemp4165=(char)(' ');
s->a[nctemp4162] =nctemp4165;

#line 1514  "libe.e"
}
int nctemp4176 = i + 1;
i =nctemp4176;
int nctemp4177 = (i < tp);
nctemp4155=nctemp4177;
}

#line 1518  "libe.e"
int nctemp4182= mant;
nctempchar1* nctemp4184= t;
int nctemp4187=LibeItoa(nctemp4182,nctemp4184);

#line 1520  "libe.e"
int nctemp4188 = (sign < 0);
if(nctemp4188)
{

#line 1521  "libe.e"
int nctemp4195=tp;
if((0>tp)||(tp>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1521,nctempstring,tp,0,s->d[0]);
}
char nctemp4198=(char)('-');
s->a[nctemp4195] =nctemp4198;

#line 1522  "libe.e"
int nctemp4209 = tp + 1;
tp =nctemp4209;

#line 1520  "libe.e"
}

#line 1525  "libe.e"
int nctemp4213=tp;
if((0>tp)||(tp>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1525,nctempstring,tp,0,s->d[0]);
}
int nctemp4216=0;
if((0>0)||(0>=t->d[0])){
nctempstring->a="t";
nctempstring->d[0]=strlen("t")+1;;
LibeArrayex(1525,nctempstring,0,0,t->d[0]);
}
s->a[nctemp4213] =t->a[nctemp4216];

#line 1526  "libe.e"
int nctemp4226 = tp + 1;
int nctemp4221=nctemp4226;
if((0>nctemp4226)||(nctemp4226>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1526,nctempstring,nctemp4226,0,s->d[0]);
}
char nctemp4228=(char)('.');
s->a[nctemp4221] =nctemp4228;

#line 1528  "libe.e"
i =0;
int nctemp4235 = (i < nfrac);
while(nctemp4235){
{

#line 1529  "libe.e"
int nctemp4250 = tp + 2;
int nctemp4252 = nctemp4250 + i;
int nctemp4242=nctemp4252;
if((0>nctemp4252)||(nctemp4252>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1529,nctempstring,nctemp4252,0,s->d[0]);
}
int nctemp4259 = i + 1;
int nctemp4254=nctemp4259;
if((0>nctemp4259)||(nctemp4259>=t->d[0])){
nctempstring->a="t";
nctempstring->d[0]=strlen("t")+1;;
LibeArrayex(1529,nctempstring,nctemp4259,0,t->d[0]);
}
s->a[nctemp4242] =t->a[nctemp4254];

#line 1528  "libe.e"
}
int nctemp4268 = i + 1;
i =nctemp4268;
int nctemp4269 = (i < nfrac);
nctemp4235=nctemp4269;
}

#line 1531  "libe.e"
int nctemp4284 = tp + 2;
int nctemp4286 = nctemp4284 + nfrac;
int nctemp4276=nctemp4286;
if((0>nctemp4286)||(nctemp4286>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1531,nctempstring,nctemp4286,0,s->d[0]);
}
char nctemp4288=(char)(0);
s->a[nctemp4276] =nctemp4288;

#line 1535  "libe.e"
sign =1;

#line 1536  "libe.e"
int nctemp4295 = (nexp < 0);
if(nctemp4295)
{

#line 1537  "libe.e"
int nctemp4302= -1;
sign =nctemp4302;

#line 1538  "libe.e"
int nctemp4306= -nexp;
nexp =nctemp4306;

#line 1536  "libe.e"
}

#line 1541  "libe.e"
struct nctempchar1 *nctemp4310;
static struct nctempchar1 nctemp4311 = {{ 2}, (char*)"e\0"};
nctemp4310=&nctemp4311;
nctempchar1* nctemp4308= nctemp4310;
nctempchar1* nctemp4312= s;
int nctemp4315=LibeStrcat(nctemp4308,nctemp4312);

#line 1542  "libe.e"
int nctemp4316 = (sign > 0);
if(nctemp4316)
{

#line 1543  "libe.e"
struct nctempchar1 *nctemp4323;
static struct nctempchar1 nctemp4324 = {{ 2}, (char*)"+\0"};
nctemp4323=&nctemp4324;
nctempchar1* nctemp4321= nctemp4323;
nctempchar1* nctemp4325= s;
int nctemp4328=LibeStrcat(nctemp4321,nctemp4325);

#line 1542  "libe.e"
}

#line 1546  "libe.e"
else{
struct nctempchar1 *nctemp4332;
static struct nctempchar1 nctemp4333 = {{ 2}, (char*)"-\0"};
nctemp4332=&nctemp4333;
nctempchar1* nctemp4330= nctemp4332;
nctempchar1* nctemp4334= s;
int nctemp4337=LibeStrcat(nctemp4330,nctemp4334);
}

#line 1548  "libe.e"
int nctemp4339= nexp;
nctempchar1* nctemp4341= t;
int nctemp4344=LibeItoa(nctemp4339,nctemp4341);

#line 1549  "libe.e"
nctempchar1* nctemp4348= t;
int nctemp4351=LibeStrlen(nctemp4348);
int nctemp4345 = (nctemp4351 ==1);
if(nctemp4345)

#line 1550  "libe.e"
{
struct nctempchar1 *nctemp4356;
static struct nctempchar1 nctemp4357 = {{ 2}, (char*)"0\0"};
nctemp4356=&nctemp4357;
nctempchar1* nctemp4354= nctemp4356;
nctempchar1* nctemp4358= s;
int nctemp4361=LibeStrcat(nctemp4354,nctemp4358);
}

#line 1552  "libe.e"
nctempchar1* nctemp4363= t;
nctempchar1* nctemp4366= s;
int nctemp4369=LibeStrcat(nctemp4363,nctemp4366);

#line 1553  "libe.e"
RunFree(t->a);
RunFree(t);

#line 1554  "libe.e"
return 1;

#line 1475  "libe.e"
}

#line 1563  "libe.e"
int LibeFtoaf (int mant,int nexp,int nfield,int nfrac,nctempchar1 *s)

#line 1564  "libe.e"
{

#line 1565  "libe.e"
nctempchar1 *t;
int sign;
int i;
int tp;
int l;

#line 1570  "libe.e"
int nctemp4374 = (mant < 0);
if(nctemp4374)
{

#line 1571  "libe.e"
int nctemp4381= -1;
sign =nctemp4381;

#line 1572  "libe.e"
int nctemp4385= -mant;
mant =nctemp4385;

#line 1570  "libe.e"
}

#line 1575  "libe.e"
else{
sign =1;
}

#line 1577  "libe.e"
int nctemp4393=s->d[0];int nctemp4402 = nfield + 1;
int nctemp4390 = (nctemp4393 < nctemp4402);
if(nctemp4390)
{

#line 1578  "libe.e"
return 0;

#line 1577  "libe.e"
}

#line 1581  "libe.e"
int nctemp4418 = nexp + 1;
int nctemp4420 = nctemp4418 + 1;
int nctemp4422 = nctemp4420 + nfrac;
l =nctemp4422;

#line 1582  "libe.e"
int nctemp4423 = (sign < 0);
if(nctemp4423)
{
int nctemp4435 = l + 1;
l =nctemp4435;
}

#line 1584  "libe.e"
int nctemp4436 = (nfield < l);
if(nctemp4436)
{

#line 1585  "libe.e"
i =0;
int nctemp4444 = (i < nfield);
while(nctemp4444){
{

#line 1586  "libe.e"
int nctemp4451=i;
if((0>i)||(i>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1586,nctempstring,i,0,s->d[0]);
}
char nctemp4454=(char)('*');
s->a[nctemp4451] =nctemp4454;

#line 1585  "libe.e"
}
int nctemp4465 = i + 1;
i =nctemp4465;
int nctemp4466 = (i < nfield);
nctemp4444=nctemp4466;
}

#line 1588  "libe.e"
int nctemp4473=nfield;
if((0>nfield)||(nfield>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1588,nctempstring,nfield,0,s->d[0]);
}
char nctemp4476=(char)(0);
s->a[nctemp4473] =nctemp4476;

#line 1589  "libe.e"
return 0;

#line 1584  "libe.e"
}

#line 1592  "libe.e"
else{
int nctemp4488 = nfield - l;
tp =nctemp4488;
}

#line 1595  "libe.e"
int nctemp4500 = 6 + 1;
int nctemp4495=nctemp4500;
nctempchar1 *nctemp4494;
nctemp4494=(nctempchar1*)RunMalloc(sizeof(nctempchar1));
int nctemp4505 = 6 + 1;
nctemp4494->d[0]=nctemp4505;
nctemp4494->a=(char *)RunMalloc(sizeof(char)*nctemp4495);
t=nctemp4494;

#line 1596  "libe.e"
int nctemp4507= mant;
nctempchar1* nctemp4509= t;
int nctemp4512=LibeItoa(nctemp4507,nctemp4509);

#line 1598  "libe.e"
i =0;
int nctemp4517 = (i < tp);
while(nctemp4517){
{

#line 1599  "libe.e"
int nctemp4524=i;
if((0>i)||(i>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1599,nctempstring,i,0,s->d[0]);
}
char nctemp4527=(char)(' ');
s->a[nctemp4524] =nctemp4527;

#line 1598  "libe.e"
}
int nctemp4538 = i + 1;
i =nctemp4538;
int nctemp4539 = (i < tp);
nctemp4517=nctemp4539;
}

#line 1602  "libe.e"
int nctemp4543 = (nexp >= 0);
if(nctemp4543)
{

#line 1603  "libe.e"
int nctemp4550= -1;
int nctemp4547 = (sign ==nctemp4550);
if(nctemp4547)
{

#line 1604  "libe.e"
int nctemp4554=tp;
if((0>tp)||(tp>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1604,nctempstring,tp,0,s->d[0]);
}
char nctemp4557=(char)('-');
s->a[nctemp4554] =nctemp4557;

#line 1605  "libe.e"
int nctemp4568 = tp + 1;
tp =nctemp4568;

#line 1603  "libe.e"
}

#line 1607  "libe.e"
i =0;
int nctemp4573 = (i <= nexp);
while(nctemp4573){
{

#line 1608  "libe.e"
int nctemp4585 = i + tp;
int nctemp4580=nctemp4585;
if((0>nctemp4585)||(nctemp4585>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1608,nctempstring,nctemp4585,0,s->d[0]);
}
int nctemp4587=i;
if((0>i)||(i>=t->d[0])){
nctempstring->a="t";
nctempstring->d[0]=strlen("t")+1;;
LibeArrayex(1608,nctempstring,i,0,t->d[0]);
}
s->a[nctemp4580] =t->a[nctemp4587];

#line 1607  "libe.e"
}
int nctemp4597 = i + 1;
i =nctemp4597;
int nctemp4598 = (i <= nexp);
nctemp4573=nctemp4598;
}

#line 1610  "libe.e"
int nctemp4602 = (nfrac > 0);
if(nctemp4602)
{

#line 1611  "libe.e"
int nctemp4617 = tp + nexp;
int nctemp4619 = nctemp4617 + 1;
int nctemp4609=nctemp4619;
if((0>nctemp4619)||(nctemp4619>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1611,nctempstring,nctemp4619,0,s->d[0]);
}
char nctemp4621=(char)('.');
s->a[nctemp4609] =nctemp4621;

#line 1610  "libe.e"
}

#line 1613  "libe.e"
i =0;
int nctemp4628 = (i < nfrac);
while(nctemp4628){
{

#line 1614  "libe.e"
int nctemp4632 = (mant ==0);
if(nctemp4632)

#line 1615  "libe.e"
{
int nctemp4653 = tp + nexp;
int nctemp4655 = nctemp4653 + 1;
int nctemp4657 = nctemp4655 + 1;
int nctemp4659 = nctemp4657 + i;
int nctemp4639=nctemp4659;
if((0>nctemp4659)||(nctemp4659>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1615,nctempstring,nctemp4659,0,s->d[0]);
}
char nctemp4661=(char)('0');
s->a[nctemp4639] =nctemp4661;
}

#line 1617  "libe.e"
else{
int nctemp4681 = tp + nexp;
int nctemp4683 = nctemp4681 + 1;
int nctemp4685 = nctemp4683 + 1;
int nctemp4687 = nctemp4685 + i;
int nctemp4667=nctemp4687;
if((0>nctemp4687)||(nctemp4687>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1617,nctempstring,nctemp4687,0,s->d[0]);
}
int nctemp4697 = nexp + 1;
int nctemp4699 = nctemp4697 + i;
int nctemp4689=nctemp4699;
if((0>nctemp4699)||(nctemp4699>=t->d[0])){
nctempstring->a="t";
nctempstring->d[0]=strlen("t")+1;;
LibeArrayex(1617,nctempstring,nctemp4699,0,t->d[0]);
}
s->a[nctemp4667] =t->a[nctemp4689];
}

#line 1613  "libe.e"
}
int nctemp4708 = i + 1;
i =nctemp4708;
int nctemp4709 = (i < nfrac);
nctemp4628=nctemp4709;
}

#line 1619  "libe.e"
int nctemp4713 = (nfrac > 0);
if(nctemp4713)
{

#line 1620  "libe.e"
int nctemp4734 = tp + nexp;
int nctemp4736 = nctemp4734 + 1;
int nctemp4738 = nctemp4736 + 1;
int nctemp4740 = nctemp4738 + nfrac;
int nctemp4720=nctemp4740;
if((0>nctemp4740)||(nctemp4740>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1620,nctempstring,nctemp4740,0,s->d[0]);
}
char nctemp4742=(char)(0);
s->a[nctemp4720] =nctemp4742;

#line 1619  "libe.e"
}

#line 1621  "libe.e"
else{

#line 1622  "libe.e"
int nctemp4756 = tp + nexp;
int nctemp4758 = nctemp4756 + 1;
int nctemp4748=nctemp4758;
if((0>nctemp4758)||(nctemp4758>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1622,nctempstring,nctemp4758,0,s->d[0]);
}
char nctemp4760=(char)(0);
s->a[nctemp4748] =nctemp4760;

#line 1621  "libe.e"
}

#line 1602  "libe.e"
}

#line 1625  "libe.e"
else{

#line 1626  "libe.e"
int nctemp4766= -nexp;
nexp =nctemp4766;

#line 1627  "libe.e"
int nctemp4770= -1;
int nctemp4767 = (sign ==nctemp4770);
if(nctemp4767)
{

#line 1628  "libe.e"
int nctemp4774=tp;
if((0>tp)||(tp>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1628,nctempstring,tp,0,s->d[0]);
}
char nctemp4777=(char)('-');
s->a[nctemp4774] =nctemp4777;

#line 1629  "libe.e"
int nctemp4788 = tp + 1;
tp =nctemp4788;

#line 1627  "libe.e"
}

#line 1631  "libe.e"
int nctemp4792=tp;
if((0>tp)||(tp>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1631,nctempstring,tp,0,s->d[0]);
}
char nctemp4795=(char)('0');
s->a[nctemp4792] =nctemp4795;

#line 1632  "libe.e"
int nctemp4806 = tp + 1;
int nctemp4801=nctemp4806;
if((0>nctemp4806)||(nctemp4806>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1632,nctempstring,nctemp4806,0,s->d[0]);
}
char nctemp4808=(char)('.');
s->a[nctemp4801] =nctemp4808;

#line 1633  "libe.e"
i =0;
int nctemp4823 = nexp - 1;
int nctemp4815 = (i < nctemp4823);
while(nctemp4815){
{

#line 1634  "libe.e"
int nctemp4835 = i + tp;
int nctemp4837 = nctemp4835 + 2;
int nctemp4827=nctemp4837;
if((0>nctemp4837)||(nctemp4837>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1634,nctempstring,nctemp4837,0,s->d[0]);
}
char nctemp4839=(char)('0');
s->a[nctemp4827] =nctemp4839;

#line 1633  "libe.e"
}
int nctemp4850 = i + 1;
i =nctemp4850;
int nctemp4859 = nexp - 1;
int nctemp4851 = (i < nctemp4859);
nctemp4815=nctemp4851;
}

#line 1636  "libe.e"
i =0;
int nctemp4875 = nfrac - nexp;
int nctemp4877 = nctemp4875 + 1;
int nctemp4864 = (i < nctemp4877);
while(nctemp4864){
{

#line 1637  "libe.e"
int nctemp4895 = tp + 2;
int nctemp4897 = nctemp4895 + i;
int nctemp4899 = nctemp4897 + nexp;
int nctemp4901 = nctemp4899 - 1;
int nctemp4881=nctemp4901;
if((0>nctemp4901)||(nctemp4901>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1637,nctempstring,nctemp4901,0,s->d[0]);
}
int nctemp4903=i;
if((0>i)||(i>=t->d[0])){
nctempstring->a="t";
nctempstring->d[0]=strlen("t")+1;;
LibeArrayex(1637,nctempstring,i,0,t->d[0]);
}
s->a[nctemp4881] =t->a[nctemp4903];

#line 1636  "libe.e"
}
int nctemp4913 = i + 1;
i =nctemp4913;
int nctemp4925 = nfrac - nexp;
int nctemp4927 = nctemp4925 + 1;
int nctemp4914 = (i < nctemp4927);
nctemp4864=nctemp4914;
}

#line 1639  "libe.e"
int nctemp4939 = tp + 2;
int nctemp4941 = nctemp4939 + nfrac;
int nctemp4931=nctemp4941;
if((0>nctemp4941)||(nctemp4941>=s->d[0])){
nctempstring->a="s";
nctempstring->d[0]=strlen("s")+1;;
LibeArrayex(1639,nctempstring,nctemp4941,0,s->d[0]);
}
char nctemp4943=(char)(0);
s->a[nctemp4931] =nctemp4943;

#line 1625  "libe.e"
}

#line 1641  "libe.e"
return 1;

#line 1564  "libe.e"
}

#line 1658  "libe.e"
float LibeMach (int flag)

#line 1659  "libe.e"
{

#line 1660  "libe.e"
int nctemp4947 = (flag ==1);
if(nctemp4947)

#line 1661  "libe.e"
{
return 1.1754943508222875e-38;
}

#line 1662  "libe.e"
else{
int nctemp4952 = (flag ==2);
if(nctemp4952)

#line 1663  "libe.e"
{
return 3.4028234663852886e+38;
}

#line 1664  "libe.e"
else{
int nctemp4957 = (flag ==3);
if(nctemp4957)

#line 1665  "libe.e"
{
return 5.9604644775390625e-08;
}

#line 1666  "libe.e"
else{
int nctemp4962 = (flag ==4);
if(nctemp4962)

#line 1667  "libe.e"
{
return 1.1920928955078125e-07;
}

#line 1668  "libe.e"
else{
int nctemp4967 = (flag ==5);
if(nctemp4967)

#line 1669  "libe.e"
{
return 0.6931471805599453;
}

#line 1671  "libe.e"
else{
float nctemp4973=(float)(0);
return nctemp4973;
}

#line 1668  "libe.e"
}

#line 1666  "libe.e"
}

#line 1664  "libe.e"
}

#line 1662  "libe.e"
}

#line 1659  "libe.e"
}

#line 1680  "libe.e"
float LibeFabs (float x)

#line 1681  "libe.e"
{

#line 1682  "libe.e"
int nctemp4976 = (x < 0.0);
if(nctemp4976)

#line 1683  "libe.e"
{
float nctemp4980= -x;
return nctemp4980;
}

#line 1685  "libe.e"
else{
return x;
}

#line 1681  "libe.e"
}

#line 1695  "libe.e"
float LibeFscale2 (float x,int n)

#line 1696  "libe.e"
{

#line 1697  "libe.e"
int i;
float rval;

#line 1700  "libe.e"
int nctemp4982 = (n ==0);
if(nctemp4982)

#line 1701  "libe.e"
{
return x;
}

#line 1702  "libe.e"
rval =1.0;

#line 1703  "libe.e"
int nctemp4991 = (n > 0);
if(nctemp4991)
{

#line 1704  "libe.e"
i =0;
int nctemp4999 = (i < n);
while(nctemp4999){
{

#line 1705  "libe.e"
float nctemp5011 = rval * 2.0;
rval =nctemp5011;

#line 1704  "libe.e"
}
int nctemp5020 = i + 1;
i =nctemp5020;
int nctemp5021 = (i < n);
nctemp4999=nctemp5021;
}

#line 1703  "libe.e"
}

#line 1708  "libe.e"
else{

#line 1709  "libe.e"
int nctemp5028= -n;
n =nctemp5028;

#line 1710  "libe.e"
i =0;
int nctemp5033 = (i < n);
while(nctemp5033){
{

#line 1711  "libe.e"
float nctemp5045 = rval * 0.5;
rval =nctemp5045;

#line 1710  "libe.e"
}
int nctemp5054 = i + 1;
i =nctemp5054;
int nctemp5055 = (i < n);
nctemp5033=nctemp5055;
}

#line 1708  "libe.e"
}

#line 1714  "libe.e"
float nctemp5063 = rval * x;
return nctemp5063;

#line 1696  "libe.e"
}

#line 1726  "libe.e"
float LibeGetfman2 (float x)

#line 1727  "libe.e"
{

#line 1728  "libe.e"
float absx;
int n;

#line 1731  "libe.e"
float nctemp5068= x;
float nctemp5070=LibeFabs(nctemp5068);
absx =nctemp5070;

#line 1732  "libe.e"
n =0;

#line 1734  "libe.e"
int nctemp5075 = (x ==0.0);
if(nctemp5075)

#line 1735  "libe.e"
{
return 0.0;
}

#line 1737  "libe.e"
int nctemp5080 = (absx < 0.5);
int nctemp5084=nctemp5080;
while(nctemp5084)
{{

#line 1738  "libe.e"
int nctemp5093 = n - 1;
n =nctemp5093;

#line 1739  "libe.e"
float nctemp5102 = absx * 2.0;
absx =nctemp5102;

#line 1737  "libe.e"
}
int nctemp5103 = (absx < 0.5);
nctemp5084=nctemp5103;}
#line 1742  "libe.e"
int nctemp5107 = (absx >= 1.0);
int nctemp5111=nctemp5107;
while(nctemp5111)
{{

#line 1743  "libe.e"
int nctemp5120 = n + 1;
n =nctemp5120;

#line 1744  "libe.e"
float nctemp5129 = absx * 0.5;
absx =nctemp5129;

#line 1742  "libe.e"
}
int nctemp5130 = (absx >= 1.0);
nctemp5111=nctemp5130;}
#line 1746  "libe.e"
int nctemp5134 = (x < 0.0);
if(nctemp5134)

#line 1747  "libe.e"
{
float nctemp5138= -absx;
return nctemp5138;
}

#line 1749  "libe.e"
else{
return absx;
}

#line 1727  "libe.e"
}

#line 1761  "libe.e"
int LibeGetfexp2 (float x)

#line 1762  "libe.e"
{

#line 1763  "libe.e"
float absx;
int n;

#line 1766  "libe.e"
float nctemp5144= x;
float nctemp5146=LibeFabs(nctemp5144);
absx =nctemp5146;

#line 1767  "libe.e"
n =0;

#line 1769  "libe.e"
int nctemp5151 = (x ==0.0);
if(nctemp5151)

#line 1770  "libe.e"
{
return 0;
}

#line 1772  "libe.e"
int nctemp5156 = (absx < 0.5);
int nctemp5160=nctemp5156;
while(nctemp5160)
{{

#line 1773  "libe.e"
int nctemp5169 = n - 1;
n =nctemp5169;

#line 1774  "libe.e"
float nctemp5178 = absx * 2.0;
absx =nctemp5178;

#line 1772  "libe.e"
}
int nctemp5179 = (absx < 0.5);
nctemp5160=nctemp5179;}
#line 1777  "libe.e"
int nctemp5183 = (absx >= 1.0);
int nctemp5187=nctemp5183;
while(nctemp5187)
{{

#line 1778  "libe.e"
int nctemp5196 = n + 1;
n =nctemp5196;

#line 1779  "libe.e"
float nctemp5205 = absx * 0.5;
absx =nctemp5205;

#line 1777  "libe.e"
}
int nctemp5206 = (absx >= 1.0);
nctemp5187=nctemp5206;}
#line 1781  "libe.e"
return n;

#line 1762  "libe.e"
}

#line 1791  "libe.e"
float LibeFscale (float x,int n)

#line 1792  "libe.e"
{

#line 1793  "libe.e"
int i;
float rval;

#line 1796  "libe.e"
rval =1.0;

#line 1797  "libe.e"
int nctemp5215 = (n ==0);
if(nctemp5215)

#line 1798  "libe.e"
{
return x;
}

#line 1800  "libe.e"
int nctemp5220 = (n > 0);
if(nctemp5220)
{

#line 1801  "libe.e"
i =0;
int nctemp5228 = (i < n);
while(nctemp5228){
{

#line 1802  "libe.e"
float nctemp5240 = rval * 10.0;
rval =nctemp5240;

#line 1801  "libe.e"
}
int nctemp5249 = i + 1;
i =nctemp5249;
int nctemp5250 = (i < n);
nctemp5228=nctemp5250;
}

#line 1800  "libe.e"
}

#line 1805  "libe.e"
else{

#line 1806  "libe.e"
int nctemp5257= -n;
n =nctemp5257;

#line 1807  "libe.e"
i =0;
int nctemp5262 = (i < n);
while(nctemp5262){
{

#line 1808  "libe.e"
float nctemp5274 = rval * 0.1;
rval =nctemp5274;

#line 1807  "libe.e"
}
int nctemp5283 = i + 1;
i =nctemp5283;
int nctemp5284 = (i < n);
nctemp5262=nctemp5284;
}

#line 1805  "libe.e"
}

#line 1811  "libe.e"
float nctemp5292 = rval * x;
return nctemp5292;

#line 1792  "libe.e"
}

#line 1823  "libe.e"
int LibeGetfman (float f,int maxdig)

#line 1824  "libe.e"
{

#line 1825  "libe.e"
int sign;
int nexp;
int n;
int i;

#line 1832  "libe.e"
int nctemp5293 = (f ==0.0);
if(nctemp5293)
{
return 0;
}

#line 1834  "libe.e"
sign =1;

#line 1835  "libe.e"
int nctemp5302 = (f < 0.0);
if(nctemp5302)
{

#line 1836  "libe.e"
float nctemp5309= -f;
f =nctemp5309;

#line 1837  "libe.e"
int nctemp5313= -sign;
sign =nctemp5313;

#line 1835  "libe.e"
}

#line 1842  "libe.e"
nexp =0;

#line 1843  "libe.e"
float nctemp5328 = f / 10.0;
float nctemp5330 = nctemp5328 + 1.1920928955078125e-07;
int nctemp5318 = (nctemp5330 >= 1.0);
if(nctemp5318)
{

#line 1844  "libe.e"
float nctemp5342 = f / 10.0;
float nctemp5344 = nctemp5342 + 1.1920928955078125e-07;
int nctemp5332 = (nctemp5344 >= 1.0);
int nctemp5346=nctemp5332;
while(nctemp5346)
{{

#line 1845  "libe.e"
float nctemp5355 = f / 10.0;
f =nctemp5355;

#line 1846  "libe.e"
int nctemp5364 = nexp + 1;
nexp =nctemp5364;

#line 1844  "libe.e"
}
float nctemp5375 = f / 10.0;
float nctemp5377 = nctemp5375 + 1.1920928955078125e-07;
int nctemp5365 = (nctemp5377 >= 1.0);
nctemp5346=nctemp5365;}
#line 1843  "libe.e"
}

#line 1849  "libe.e"
else{
float nctemp5386 = f + 1.1920928955078125e-07;
int nctemp5379 = (nctemp5386 < 1.0);
if(nctemp5379)
{

#line 1850  "libe.e"
float nctemp5395 = f + 1.1920928955078125e-07;
int nctemp5388 = (nctemp5395 < 1.0);
int nctemp5397=nctemp5388;
while(nctemp5397)
{{

#line 1851  "libe.e"
float nctemp5406 = f * 10.0;
f =nctemp5406;

#line 1852  "libe.e"
int nctemp5415 = nexp - 1;
nexp =nctemp5415;

#line 1850  "libe.e"
}
float nctemp5423 = f + 1.1920928955078125e-07;
int nctemp5416 = (nctemp5423 < 1.0);
nctemp5397=nctemp5416;}
#line 1849  "libe.e"
}
}

#line 1859  "libe.e"
i =0;
int nctemp5437 = maxdig - 1;
int nctemp5429 = (i < nctemp5437);
while(nctemp5429){
{

#line 1860  "libe.e"
float nctemp5446 = f * 10.0;
f =nctemp5446;

#line 1859  "libe.e"
}
int nctemp5455 = i + 1;
i =nctemp5455;
int nctemp5464 = maxdig - 1;
int nctemp5456 = (i < nctemp5464);
nctemp5429=nctemp5456;
}

#line 1862  "libe.e"
float nctemp5475 = f + 0.5;
int nctemp5469=(int)(nctemp5475);
n =nctemp5469;

#line 1863  "libe.e"
int nctemp5476 = (sign < 0);
if(nctemp5476)
{
int nctemp5483= -n;
n =nctemp5483;
}

#line 1864  "libe.e"
return n;

#line 1824  "libe.e"
}

#line 1876  "libe.e"
float LibeGetffman (float f)

#line 1877  "libe.e"
{

#line 1878  "libe.e"
int sign;
int nexp;

#line 1883  "libe.e"
int nctemp5485 = (f ==0.0);
if(nctemp5485)
{
return 0.0;
}

#line 1885  "libe.e"
sign =1;

#line 1886  "libe.e"
int nctemp5494 = (f < 0.0);
if(nctemp5494)
{

#line 1887  "libe.e"
float nctemp5501= -f;
f =nctemp5501;

#line 1888  "libe.e"
int nctemp5505= -sign;
sign =nctemp5505;

#line 1886  "libe.e"
}

#line 1893  "libe.e"
nexp =0;

#line 1894  "libe.e"
float nctemp5520 = f / 10.0;
float nctemp5522 = nctemp5520 + 1.1920928955078125e-07;
int nctemp5510 = (nctemp5522 >= 1.0);
if(nctemp5510)
{

#line 1895  "libe.e"
float nctemp5534 = f / 10.0;
float nctemp5536 = nctemp5534 + 1.1920928955078125e-07;
int nctemp5524 = (nctemp5536 >= 1.0);
int nctemp5538=nctemp5524;
while(nctemp5538)
{{

#line 1896  "libe.e"
float nctemp5547 = f / 10.0;
f =nctemp5547;

#line 1897  "libe.e"
int nctemp5556 = nexp + 1;
nexp =nctemp5556;

#line 1895  "libe.e"
}
float nctemp5567 = f / 10.0;
float nctemp5569 = nctemp5567 + 1.1920928955078125e-07;
int nctemp5557 = (nctemp5569 >= 1.0);
nctemp5538=nctemp5557;}
#line 1894  "libe.e"
}

#line 1900  "libe.e"
else{
float nctemp5578 = f + 1.1920928955078125e-07;
int nctemp5571 = (nctemp5578 < 1.0);
if(nctemp5571)
{

#line 1901  "libe.e"
float nctemp5587 = f + 1.1920928955078125e-07;
int nctemp5580 = (nctemp5587 < 1.0);
int nctemp5589=nctemp5580;
while(nctemp5589)
{{

#line 1902  "libe.e"
float nctemp5598 = f * 10.0;
f =nctemp5598;

#line 1903  "libe.e"
int nctemp5607 = nexp - 1;
nexp =nctemp5607;

#line 1901  "libe.e"
}
float nctemp5615 = f + 1.1920928955078125e-07;
int nctemp5608 = (nctemp5615 < 1.0);
nctemp5589=nctemp5608;}
#line 1900  "libe.e"
}
}

#line 1906  "libe.e"
return f;

#line 1877  "libe.e"
}

#line 1915  "libe.e"
int LibeGetmaxdig (float f)

#line 1916  "libe.e"
{

#line 1917  "libe.e"
int sign;
int nexp;
int i;
int loop;
float r;

#line 1925  "libe.e"
int nctemp5618 = (f ==0.0);
if(nctemp5618)
{
return 0;
}

#line 1927  "libe.e"
sign =1;

#line 1928  "libe.e"
int nctemp5627 = (f < 0.0);
if(nctemp5627)
{

#line 1929  "libe.e"
float nctemp5634= -f;
f =nctemp5634;

#line 1930  "libe.e"
int nctemp5638= -sign;
sign =nctemp5638;

#line 1928  "libe.e"
}

#line 1935  "libe.e"
nexp =0;

#line 1936  "libe.e"
float nctemp5653 = f / 10.0;
float nctemp5655 = nctemp5653 + 1.1920928955078125e-07;
int nctemp5643 = (nctemp5655 >= 1.0);
if(nctemp5643)
{

#line 1937  "libe.e"
float nctemp5667 = f / 10.0;
float nctemp5669 = nctemp5667 + 1.1920928955078125e-07;
int nctemp5657 = (nctemp5669 >= 1.0);
int nctemp5671=nctemp5657;
while(nctemp5671)
{{

#line 1938  "libe.e"
float nctemp5680 = f / 10.0;
f =nctemp5680;

#line 1939  "libe.e"
int nctemp5689 = nexp + 1;
nexp =nctemp5689;

#line 1937  "libe.e"
}
float nctemp5700 = f / 10.0;
float nctemp5702 = nctemp5700 + 1.1920928955078125e-07;
int nctemp5690 = (nctemp5702 >= 1.0);
nctemp5671=nctemp5690;}
#line 1936  "libe.e"
}

#line 1942  "libe.e"
else{
float nctemp5711 = f + 1.1920928955078125e-07;
int nctemp5704 = (nctemp5711 < 1.0);
if(nctemp5704)
{

#line 1943  "libe.e"
float nctemp5720 = f + 1.1920928955078125e-07;
int nctemp5713 = (nctemp5720 < 1.0);
int nctemp5722=nctemp5713;
while(nctemp5722)
{{

#line 1944  "libe.e"
float nctemp5731 = f * 10.0;
f =nctemp5731;

#line 1945  "libe.e"
int nctemp5740 = nexp - 1;
nexp =nctemp5740;

#line 1943  "libe.e"
}
float nctemp5748 = f + 1.1920928955078125e-07;
int nctemp5741 = (nctemp5748 < 1.0);
nctemp5722=nctemp5741;}
#line 1942  "libe.e"
}
}

#line 1952  "libe.e"
i =0;

#line 1953  "libe.e"
loop =1;

#line 1954  "libe.e"
int nctemp5759=loop;
while(nctemp5759)
{{

#line 1955  "libe.e"
int nctemp5771=(int)(f);
float nctemp5768=(float)(nctemp5771);
float nctemp5774 = f - nctemp5768;
r =nctemp5774;

#line 1956  "libe.e"
int nctemp5775 = (r < 1.1920928955078125e-07);
if(nctemp5775)

#line 1957  "libe.e"
{
loop =0;
}

#line 1959  "libe.e"
else{
float nctemp5791 = f * 10.0;
f =nctemp5791;
}

#line 1960  "libe.e"
int nctemp5800 = i + 1;
i =nctemp5800;

#line 1961  "libe.e"
int nctemp5801 = (i >= 10);
if(nctemp5801)
{
loop =0;
}

#line 1954  "libe.e"
}
nctemp5759=loop;}
#line 1963  "libe.e"
return i;

#line 1916  "libe.e"
}

#line 1975  "libe.e"
int LibeGetfexp (float f)

#line 1976  "libe.e"
{

#line 1977  "libe.e"
int nexp;

#line 1981  "libe.e"
int nctemp5811 = (f ==0.0);
if(nctemp5811)
{
return 0;
}

#line 1983  "libe.e"
nexp =0;

#line 1984  "libe.e"
int nctemp5820 = (f < 0.0);
if(nctemp5820)

#line 1985  "libe.e"
{
float nctemp5827= -f;
f =nctemp5827;
}

#line 1986  "libe.e"
float nctemp5838 = f / 10.0;
float nctemp5840 = nctemp5838 + 1.1920928955078125e-07;
int nctemp5828 = (nctemp5840 >= 1.0);
if(nctemp5828)
{

#line 1987  "libe.e"
float nctemp5852 = f / 10.0;
float nctemp5854 = nctemp5852 + 1.1920928955078125e-07;
int nctemp5842 = (nctemp5854 >= 1.0);
int nctemp5856=nctemp5842;
while(nctemp5856)
{{

#line 1988  "libe.e"
float nctemp5865 = f / 10.0;
f =nctemp5865;

#line 1989  "libe.e"
int nctemp5874 = nexp + 1;
nexp =nctemp5874;

#line 1987  "libe.e"
}
float nctemp5885 = f / 10.0;
float nctemp5887 = nctemp5885 + 1.1920928955078125e-07;
int nctemp5875 = (nctemp5887 >= 1.0);
nctemp5856=nctemp5875;}
#line 1986  "libe.e"
}

#line 1992  "libe.e"
else{
float nctemp5896 = f + 1.1920928955078125e-07;
int nctemp5889 = (nctemp5896 < 1.0);
if(nctemp5889)
{

#line 1993  "libe.e"
float nctemp5905 = f + 1.1920928955078125e-07;
int nctemp5898 = (nctemp5905 < 1.0);
int nctemp5907=nctemp5898;
while(nctemp5907)
{{

#line 1994  "libe.e"
float nctemp5916 = f * 10.0;
f =nctemp5916;

#line 1995  "libe.e"
int nctemp5925 = nexp - 1;
nexp =nctemp5925;

#line 1993  "libe.e"
}
float nctemp5933 = f + 1.1920928955078125e-07;
int nctemp5926 = (nctemp5933 < 1.0);
nctemp5907=nctemp5926;}
#line 1992  "libe.e"
}
}

#line 1998  "libe.e"
return nexp;

#line 1976  "libe.e"
}

#line 2012  "libe.e"
float LibeClock (
#line 2013  "libe.e"
)
{

#line 2014  "libe.e"
float nctemp5937=RunClock();
return nctemp5937;

#line 2013  "libe.e"
}

#line 2022  "libe.e"
int NBLOCKS;

#line 2023  "libe.e"
int NTHREADS;

#line 2026  "libe.e"
int LibeSetnb (int nb)

#line 2027  "libe.e"
{

#line 2028  "libe.e"
NBLOCKS =nb;

#line 2029  "libe.e"
return 1;

#line 2027  "libe.e"
}

#line 2033  "libe.e"
int LibeSetnt (int nt)

#line 2034  "libe.e"
{

#line 2035  "libe.e"
NTHREADS =nt;

#line 2036  "libe.e"
return 1;

#line 2034  "libe.e"
}

#line 2040  "libe.e"
int LibeGetnb (
#line 2041  "libe.e"
)
{

#line 2042  "libe.e"
return NBLOCKS;

#line 2041  "libe.e"
}

#line 2046  "libe.e"
int LibeGetnt (
#line 2047  "libe.e"
)
{

#line 2048  "libe.e"
return NTHREADS;

#line 2047  "libe.e"
}

#line 2074  "libe.e"
float LibeSincosmax;

#line 2075  "libe.e"
float LibeSincoslim;

#line 2076  "libe.e"
float LibeLnmax;

#line 2077  "libe.e"
float LibeLnmin;

#line 2079  "libe.e"
float LibeSincos (float x,float y,float sign);

#line 2080  "libe.e"
float LibeAtan (float f);

#line 2088  "libe.e"
int LibeMathinit (
#line 2089  "libe.e"
)
{

#line 2090  "libe.e"
float nctemp5954= 1.0;
int nctemp5961 = 24 - 1;
int nctemp5956= nctemp5961;
float nctemp5962=LibeFscale2(nctemp5954,nctemp5956);
LibeSincosmax =nctemp5962;

#line 2091  "libe.e"
float nctemp5971= LibeSincosmax;
float nctemp5973=LibeSqrt(nctemp5971);
float nctemp5974 = 3.1415926535897932384626433832795028841972 * nctemp5973;
LibeSincosmax =nctemp5974;

#line 2092  "libe.e"
float nctemp5983= 1.0;
int nctemp5990 = 24 / 2;
int nctemp5985= nctemp5990;
float nctemp5991=LibeFscale2(nctemp5983,nctemp5985);
float nctemp5992 = 1.0 / nctemp5991;
LibeSincoslim =nctemp5992;

#line 2093  "libe.e"
float nctemp5997= 3.4028234663852886e+38;
float nctemp5999=LibeLn(nctemp5997);
LibeLnmax =nctemp5999;

#line 2094  "libe.e"
float nctemp6004= 1.1754943508222875e-38;
float nctemp6006=LibeLn(nctemp6004);
LibeLnmin =nctemp6006;

#line 2095  "libe.e"
return 1;

#line 2089  "libe.e"
}

#line 2106  "libe.e"
float LibeSqrt (float x)

#line 2107  "libe.e"
{

#line 2108  "libe.e"
float f;
float yest;
float z;
int n;

#line 2114  "libe.e"
int nctemp6008 = (x ==0.0);
if(nctemp6008)
{
return 0.0;
}

#line 2115  "libe.e"
int nctemp6013 = (x < 0.0);
if(nctemp6013)
{

#line 2116  "libe.e"
LibeErrno =(-101);

#line 2117  "libe.e"
struct nctempchar1 *nctemp6026;
static struct nctempchar1 nctemp6027 = {{ 25}, (char*)"Sqrt input argument < 0 \0"};
nctemp6026=&nctemp6027;
LibeErrstr=nctemp6026;

#line 2118  "libe.e"
return 0.0;

#line 2115  "libe.e"
}

#line 2122  "libe.e"
float nctemp6033= x;
float nctemp6035=LibeGetfman2(nctemp6033);
f =nctemp6035;

#line 2123  "libe.e"
float nctemp6040= x;
int nctemp6042=LibeGetfexp2(nctemp6040);
n =nctemp6042;

#line 2126  "libe.e"
float nctemp6055 = 0.59016 * f;
float nctemp6056 = 0.41731 + nctemp6055;
yest =nctemp6056;

#line 2129  "libe.e"
float nctemp6069 = f / yest;
float nctemp6070 = yest + nctemp6069;
z =nctemp6070;

#line 2130  "libe.e"
float nctemp6082 = 0.25 * z;
float nctemp6088 = f / z;
float nctemp6089 = nctemp6082 + nctemp6088;
yest =nctemp6089;

#line 2132  "libe.e"
int nctemp6093= n;
int nctemp6095= 2;
int nctemp6097=LibeMod(nctemp6093,nctemp6095);
int nctemp6090 = (nctemp6097 !=0);
if(nctemp6090)
{

#line 2133  "libe.e"
float nctemp6107 = yest * 0.70710678118654752440;
yest =nctemp6107;

#line 2134  "libe.e"
int nctemp6116 = n + 1;
n =nctemp6116;

#line 2132  "libe.e"
}

#line 2136  "libe.e"
float nctemp6118= yest;
int nctemp6125 = n / 2;
int nctemp6120= nctemp6125;
float nctemp6126=LibeFscale2(nctemp6118,nctemp6120);
return nctemp6126;

#line 2107  "libe.e"
}

#line 2145  "libe.e"
float LibeLn (float x)

#line 2146  "libe.e"
{

#line 2147  "libe.e"
float f;
int n;
float z;
float zn;
float zd;
float w;
float r;
float xn;

#line 2158  "libe.e"
int nctemp6127 = (x <= 0.0);
if(nctemp6127)
{

#line 2159  "libe.e"
LibeErrno =(-101);

#line 2160  "libe.e"
struct nctempchar1 *nctemp6140;
static struct nctempchar1 nctemp6141 = {{ 23}, (char*)"Ln input argument < 0 \0"};
nctemp6140=&nctemp6141;
LibeErrstr=nctemp6140;

#line 2161  "libe.e"
return 3.4028234663852886e+38;

#line 2158  "libe.e"
}

#line 2163  "libe.e"
float nctemp6147= x;
float nctemp6149=LibeGetfman2(nctemp6147);
f =nctemp6149;

#line 2164  "libe.e"
float nctemp6154= x;
int nctemp6156=LibeGetfexp2(nctemp6154);
n =nctemp6156;

#line 2166  "libe.e"
int nctemp6157 = (f > 0.70710678118654752440);
if(nctemp6157)
{

#line 2167  "libe.e"
float nctemp6172 = f - 0.5;
float nctemp6174 = nctemp6172 - 0.5;
zn =nctemp6174;

#line 2168  "libe.e"
float nctemp6186 = f * 0.5;
float nctemp6188 = nctemp6186 + 0.5;
zd =nctemp6188;

#line 2166  "libe.e"
}

#line 2170  "libe.e"
else{

#line 2171  "libe.e"
float nctemp6197 = f - 0.5;
zn =nctemp6197;

#line 2172  "libe.e"
float nctemp6209 = zn * 0.5;
float nctemp6211 = nctemp6209 + 0.5;
zd =nctemp6211;

#line 2173  "libe.e"
int nctemp6220 = n - 1;
n =nctemp6220;

#line 2170  "libe.e"
}

#line 2176  "libe.e"
float nctemp6229 = zn / zd;
z =nctemp6229;

#line 2177  "libe.e"
float nctemp6238 = z * z;
w =nctemp6238;

#line 2178  "libe.e"
float nctemp6258 = w * (-0.5527074855E+0);
float nctemp6264 = w + (-0.6632718214E+1);
float nctemp6265 = nctemp6258 / nctemp6264;
float nctemp6266 = z * nctemp6265;
float nctemp6267 = z + nctemp6266;
r =nctemp6267;

#line 2180  "libe.e"
float nctemp6272=(float)(n);
xn =nctemp6272;

#line 2181  "libe.e"
float nctemp6285 = xn * (-2.121944400546905827679E-4);
float nctemp6287 = nctemp6285 + r;
float nctemp6293 = xn * 0.69335938;
float nctemp6294 = nctemp6287 + nctemp6293;
return nctemp6294;

#line 2146  "libe.e"
}

#line 2210  "libe.e"
float LibeExp (float x)

#line 2211  "libe.e"
{

#line 2212  "libe.e"
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

#line 2219  "libe.e"
P0 =0.24999999950E+0;

#line 2220  "libe.e"
P1 =0.41602886268E-2;

#line 2221  "libe.e"
Q1 =0.49987178778E-1;

#line 2223  "libe.e"
int nctemp6307 = (x >= LibeLnmax);
if(nctemp6307)
{

#line 2224  "libe.e"
LibeErrno =(-102);

#line 2225  "libe.e"
struct nctempchar1 *nctemp6320;
static struct nctempchar1 nctemp6321 = {{ 25}, (char*)"Overflow in exp function\0"};
nctemp6320=&nctemp6321;
LibeErrstr=nctemp6320;

#line 2226  "libe.e"
return 3.4028234663852886e+38;

#line 2223  "libe.e"
}

#line 2228  "libe.e"
int nctemp6323 = (x < LibeLnmin);
if(nctemp6323)
{

#line 2229  "libe.e"
LibeErrno =(-102);

#line 2230  "libe.e"
struct nctempchar1 *nctemp6336;
static struct nctempchar1 nctemp6337 = {{ 26}, (char*)"Underflow in exp function\0"};
nctemp6336=&nctemp6337;
LibeErrstr=nctemp6336;

#line 2231  "libe.e"
return 0.0;

#line 2228  "libe.e"
}

#line 2233  "libe.e"
float nctemp6349 = x * 1.4426950408889634073;
int nctemp6343=(int)(nctemp6349);
n =nctemp6343;

#line 2234  "libe.e"
float nctemp6354=(float)(n);
xn =nctemp6354;

#line 2235  "libe.e"
float nctemp6369 = xn * 0.693147180559945309417232;
float nctemp6370 = x - nctemp6369;
g =nctemp6370;

#line 2236  "libe.e"
float nctemp6379 = g * g;
z =nctemp6379;

#line 2237  "libe.e"
float nctemp6394 = P1 * z;
float nctemp6396 = nctemp6394 + P0;
float nctemp6398 = nctemp6396 * g;
p =nctemp6398;

#line 2238  "libe.e"
float nctemp6410 = Q1 * z;
float nctemp6412 = nctemp6410 + 0.5;
q =nctemp6412;

#line 2239  "libe.e"
float nctemp6429 = q - p;
float nctemp6430 = p / nctemp6429;
float nctemp6431 = 0.5 + nctemp6430;
rval =nctemp6431;

#line 2240  "libe.e"
float nctemp6433= rval;
int nctemp6440 = n + 1;
int nctemp6435= nctemp6440;
float nctemp6441=LibeFscale2(nctemp6433,nctemp6435);
return nctemp6441;

#line 2211  "libe.e"
}

#line 2249  "libe.e"
float LibeSincos (float x,float y,float sign)

#line 2250  "libe.e"
{

#line 2251  "libe.e"
int n;
float xn;
float f;
float g;
float R1;
float R2;
float R3;
float R4;

#line 2256  "libe.e"
float nctemp6445= -0.1666665668E+0;
R1 =nctemp6445;

#line 2257  "libe.e"
R2 =0.8333025139E-2;

#line 2258  "libe.e"
float nctemp6453= -0.1980741872E-3;
R3 =nctemp6453;

#line 2259  "libe.e"
R4 =0.2601903036E-5;

#line 2261  "libe.e"
int nctemp6458 = (y > LibeSincosmax);
if(nctemp6458)
{

#line 2262  "libe.e"
LibeErrno =(-102);

#line 2263  "libe.e"
struct nctempchar1 *nctemp6471;
static struct nctempchar1 nctemp6472 = {{ 37}, (char*)"Loss of accuracy in sin/cos function\0"};
nctemp6471=&nctemp6472;
LibeErrstr=nctemp6471;

#line 2264  "libe.e"
return 0.0;

#line 2261  "libe.e"
}

#line 2266  "libe.e"
float nctemp6487 = y * 0.31830988618379067154;
float nctemp6489 = nctemp6487 + 0.5;
int nctemp6478=(int)(nctemp6489);
n =nctemp6478;

#line 2267  "libe.e"
float nctemp6494=(float)(n);
xn =nctemp6494;

#line 2268  "libe.e"
int nctemp6500= n;
int nctemp6502= 2;
int nctemp6504=LibeMod(nctemp6500,nctemp6502);
int nctemp6497 = (nctemp6504 !=0);
if(nctemp6497)
{

#line 2269  "libe.e"
float nctemp6509= -sign;
sign =nctemp6509;

#line 2268  "libe.e"
}

#line 2272  "libe.e"
float nctemp6514= x;
float nctemp6516=LibeFabs(nctemp6514);
x =nctemp6516;

#line 2273  "libe.e"
int nctemp6517 = (x !=y);
if(nctemp6517)
{

#line 2274  "libe.e"
float nctemp6529 = xn - 0.5;
xn =nctemp6529;

#line 2273  "libe.e"
}

#line 2276  "libe.e"
float nctemp6537= x;
float nctemp6539=LibeFabs(nctemp6537);
float nctemp6545 = xn * 3.1415926535897932384626433832795028841972;
float nctemp6546 = nctemp6539 - nctemp6545;
f =nctemp6546;

#line 2277  "libe.e"
float nctemp6550= f;
float nctemp6552=LibeFabs(nctemp6550);
int nctemp6547 = (nctemp6552 < LibeSincoslim);
if(nctemp6547)
{

#line 2278  "libe.e"
float nctemp6558 = sign * f;
return nctemp6558;

#line 2277  "libe.e"
}

#line 2280  "libe.e"
float nctemp6567 = f * f;
g =nctemp6567;

#line 2281  "libe.e"
float nctemp6594 = R4 * g;
float nctemp6596 = nctemp6594 + R3;
float nctemp6598 = nctemp6596 * g;
float nctemp6600 = nctemp6598 + R2;
float nctemp6602 = nctemp6600 * g;
float nctemp6604 = nctemp6602 + R1;
float nctemp6606 = nctemp6604 * g;
g =nctemp6606;

#line 2282  "libe.e"
float nctemp6619 = f * g;
float nctemp6620 = f + nctemp6619;
g =nctemp6620;

#line 2283  "libe.e"
float nctemp6625 = sign * g;
return nctemp6625;

#line 2250  "libe.e"
}

#line 2292  "libe.e"
float LibeSin (float x)

#line 2293  "libe.e"
{

#line 2294  "libe.e"
int nctemp6626 = (x < 0.0);
if(nctemp6626)

#line 2295  "libe.e"
{
float nctemp6631= x;
float nctemp6634= -x;
float nctemp6633= nctemp6634;
float nctemp6636= -1.0;
float nctemp6635= nctemp6636;
float nctemp6637=LibeSincos(nctemp6631,nctemp6633,nctemp6635);
return nctemp6637;
}

#line 2297  "libe.e"
else{
float nctemp6639= x;
float nctemp6641= x;
float nctemp6643= 1.0;
float nctemp6645=LibeSincos(nctemp6639,nctemp6641,nctemp6643);
return nctemp6645;
}

#line 2293  "libe.e"
}

#line 2306  "libe.e"
float LibeCos (float x)

#line 2307  "libe.e"
{

#line 2308  "libe.e"
float nctemp6647= x;
float nctemp6653= x;
float nctemp6655=LibeFabs(nctemp6653);
float nctemp6657 = nctemp6655 + 1.57079632679489661923132;
float nctemp6649= nctemp6657;
float nctemp6658= 1.0;
float nctemp6660=LibeSincos(nctemp6647,nctemp6649,nctemp6658);
return nctemp6660;

#line 2307  "libe.e"
}

#line 2317  "libe.e"
float LibeTan (float x)

#line 2318  "libe.e"
{

#line 2319  "libe.e"
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

#line 2325  "libe.e"
float nctemp6664= -0.958017723E-1;
P1 =nctemp6664;

#line 2326  "libe.e"
float nctemp6668= -0.429135777E+0;
Q1 =nctemp6668;

#line 2327  "libe.e"
Q2 =0.971685835E-2;

#line 2329  "libe.e"
float nctemp6677= x;
float nctemp6679=LibeFabs(nctemp6677);
y =nctemp6679;

#line 2331  "libe.e"
int nctemp6680 = (y > LibeSincosmax);
if(nctemp6680)
{

#line 2332  "libe.e"
LibeErrno =(-102);

#line 2333  "libe.e"
struct nctempchar1 *nctemp6693;
static struct nctempchar1 nctemp6694 = {{ 33}, (char*)"Loss of accuracy in tan function\0"};
nctemp6693=&nctemp6694;
LibeErrstr=nctemp6693;

#line 2334  "libe.e"
return 0.0;

#line 2331  "libe.e"
}

#line 2337  "libe.e"
float nctemp6706 = x * 0.63661977236758134308;
int nctemp6700=(int)(nctemp6706);
n =nctemp6700;

#line 2338  "libe.e"
float nctemp6711=(float)(n);
xn =nctemp6711;

#line 2339  "libe.e"
float nctemp6726 = xn * 1.57079632679489661923132;
float nctemp6727 = x - nctemp6726;
f =nctemp6727;

#line 2341  "libe.e"
float nctemp6731= f;
float nctemp6733=LibeFabs(nctemp6731);
int nctemp6728 = (nctemp6733 < LibeSincoslim);
if(nctemp6728)
{

#line 2342  "libe.e"
xnum =f;

#line 2343  "libe.e"
xden =1.0;

#line 2341  "libe.e"
}

#line 2345  "libe.e"
else{

#line 2346  "libe.e"
float nctemp6751 = f * f;
g =nctemp6751;

#line 2347  "libe.e"
float nctemp6766 = P1 * g;
float nctemp6768 = nctemp6766 * f;
float nctemp6770 = nctemp6768 + f;
xnum =nctemp6770;

#line 2348  "libe.e"
float nctemp6791 = Q2 * g;
float nctemp6793 = nctemp6791 + Q1;
float nctemp6795 = nctemp6793 * g;
float nctemp6797 = nctemp6795 + 0.5;
float nctemp6799 = nctemp6797 + 0.5;
xden =nctemp6799;

#line 2345  "libe.e"
}

#line 2351  "libe.e"
int nctemp6803= n;
int nctemp6805= 2;
int nctemp6807=LibeMod(nctemp6803,nctemp6805);
int nctemp6800 = (nctemp6807 !=0);
if(nctemp6800)
{

#line 2352  "libe.e"
float nctemp6812= -xnum;
float nctemp6813 = xden / nctemp6812;
return nctemp6813;

#line 2351  "libe.e"
}

#line 2354  "libe.e"
else{

#line 2355  "libe.e"
float nctemp6818 = xnum / xden;
return nctemp6818;

#line 2354  "libe.e"
}

#line 2318  "libe.e"
}

#line 2365  "libe.e"
float LibeArcsin (float x)

#line 2366  "libe.e"
{

#line 2367  "libe.e"
float P1;
float P2;
float Q0;
float Q1;
float y;
float g;
float r;
float res;
int i;

#line 2372  "libe.e"
P1 =0.933935835E+0;
float nctemp6826= -0.504400557E+0;
P2 =nctemp6826;

#line 2373  "libe.e"
Q0 =0.560363004E+1;
float nctemp6834= -0.554846723E+1;
Q1 =nctemp6834;

#line 2375  "libe.e"
float nctemp6839= x;
float nctemp6841=LibeFabs(nctemp6839);
y =nctemp6841;

#line 2376  "libe.e"
int nctemp6842 = (y > 0.5);
if(nctemp6842)
{

#line 2377  "libe.e"
i =1;

#line 2378  "libe.e"
int nctemp6850 = (y > 1.0);
if(nctemp6850)
{

#line 2379  "libe.e"
LibeErrno =(-101);

#line 2380  "libe.e"
struct nctempchar1 *nctemp6863;
static struct nctempchar1 nctemp6864 = {{ 41}, (char*)"Absolute value of argument of arcsin > 1\0"};
nctemp6863=&nctemp6864;
LibeErrstr=nctemp6863;

#line 2381  "libe.e"
return 3.4028234663852886e+38;

#line 2378  "libe.e"
}

#line 2386  "libe.e"
float nctemp6877 = 1.0 - y;
float nctemp6879 = nctemp6877 * 0.5;
g =nctemp6879;

#line 2387  "libe.e"
float nctemp6884= g;
float nctemp6886=LibeSqrt(nctemp6884);
r =nctemp6886;

#line 2388  "libe.e"
float nctemp6890= -r;
r =nctemp6890;

#line 2389  "libe.e"
float nctemp6899 = r + r;
y =nctemp6899;

#line 2393  "libe.e"
float nctemp6917 = P2 * g;
float nctemp6919 = nctemp6917 + P1;
float nctemp6921 = nctemp6919 * g;
float nctemp6933 = g + Q1;
float nctemp6935 = nctemp6933 * g;
float nctemp6937 = nctemp6935 + Q0;
float nctemp6938 = nctemp6921 / nctemp6937;
r =nctemp6938;

#line 2394  "libe.e"
float nctemp6951 = y * r;
float nctemp6952 = y + nctemp6951;
res =nctemp6952;

#line 2376  "libe.e"
}

#line 2396  "libe.e"
else{

#line 2397  "libe.e"
i =0;

#line 2398  "libe.e"
int nctemp6957 = (y < LibeSincoslim);
if(nctemp6957)

#line 2399  "libe.e"
{
res =y;
}

#line 2400  "libe.e"
else{

#line 2401  "libe.e"
float nctemp6973 = y * y;
g =nctemp6973;

#line 2405  "libe.e"
float nctemp6991 = P2 * g;
float nctemp6993 = nctemp6991 + P1;
float nctemp6995 = nctemp6993 * g;
float nctemp7007 = g + Q1;
float nctemp7009 = nctemp7007 * g;
float nctemp7011 = nctemp7009 + Q0;
float nctemp7012 = nctemp6995 / nctemp7011;
g =nctemp7012;

#line 2406  "libe.e"
float nctemp7025 = y * g;
float nctemp7026 = y + nctemp7025;
res =nctemp7026;

#line 2400  "libe.e"
}

#line 2396  "libe.e"
}

#line 2410  "libe.e"
int nctemp7027 = (i ==1);
if(nctemp7027)

#line 2411  "libe.e"
{
float nctemp7043 = 0.78539816339744830962 + res;
float nctemp7044 = 0.78539816339744830962 + nctemp7043;
res =nctemp7044;
}

#line 2412  "libe.e"
int nctemp7045 = (x < 0.0);
if(nctemp7045)

#line 2413  "libe.e"
{
float nctemp7052= -res;
res =nctemp7052;
}

#line 2414  "libe.e"
return res;

#line 2366  "libe.e"
}

#line 2423  "libe.e"
float LibeArccos (float x)

#line 2424  "libe.e"
{

#line 2425  "libe.e"
float P1;
float P2;
float Q0;
float Q1;
float y;
float g;
float r;
float res;
int i;

#line 2430  "libe.e"
P1 =0.933935835E+0;
float nctemp7061= -0.504400557E+0;
P2 =nctemp7061;

#line 2431  "libe.e"
Q0 =0.560363004E+1;
float nctemp7069= -0.554846723E+1;
Q1 =nctemp7069;

#line 2433  "libe.e"
float nctemp7074= x;
float nctemp7076=LibeFabs(nctemp7074);
y =nctemp7076;

#line 2434  "libe.e"
int nctemp7077 = (y > 0.5);
if(nctemp7077)
{

#line 2435  "libe.e"
i =0;

#line 2436  "libe.e"
int nctemp7085 = (y > 1.0);
if(nctemp7085)
{

#line 2437  "libe.e"
LibeErrno =(-101);

#line 2438  "libe.e"
struct nctempchar1 *nctemp7098;
static struct nctempchar1 nctemp7099 = {{ 50}, (char*)"Absolute value of argument of arccos out of range\0"};
nctemp7098=&nctemp7099;
LibeErrstr=nctemp7098;

#line 2439  "libe.e"
return 3.4028234663852886e+38;

#line 2436  "libe.e"
}

#line 2444  "libe.e"
float nctemp7112 = 1.0 - y;
float nctemp7114 = nctemp7112 * 0.5;
g =nctemp7114;

#line 2445  "libe.e"
float nctemp7119= g;
float nctemp7121=LibeSqrt(nctemp7119);
r =nctemp7121;

#line 2446  "libe.e"
float nctemp7125= -r;
r =nctemp7125;

#line 2447  "libe.e"
float nctemp7134 = r + r;
y =nctemp7134;

#line 2451  "libe.e"
float nctemp7152 = P2 * g;
float nctemp7154 = nctemp7152 + P1;
float nctemp7156 = nctemp7154 * g;
float nctemp7168 = g + Q1;
float nctemp7170 = nctemp7168 * g;
float nctemp7172 = nctemp7170 + Q0;
float nctemp7173 = nctemp7156 / nctemp7172;
r =nctemp7173;

#line 2452  "libe.e"
float nctemp7186 = y * r;
float nctemp7187 = y + nctemp7186;
res =nctemp7187;

#line 2434  "libe.e"
}

#line 2454  "libe.e"
else{

#line 2455  "libe.e"
i =1;

#line 2456  "libe.e"
int nctemp7192 = (y < LibeSincoslim);
if(nctemp7192)

#line 2457  "libe.e"
{
res =y;
}

#line 2458  "libe.e"
else{

#line 2459  "libe.e"
float nctemp7208 = y * y;
g =nctemp7208;

#line 2463  "libe.e"
float nctemp7226 = P2 * g;
float nctemp7228 = nctemp7226 + P1;
float nctemp7230 = nctemp7228 * g;
float nctemp7242 = g + Q1;
float nctemp7244 = nctemp7242 * g;
float nctemp7246 = nctemp7244 + Q0;
float nctemp7247 = nctemp7230 / nctemp7246;
g =nctemp7247;

#line 2464  "libe.e"
float nctemp7260 = y * g;
float nctemp7261 = y + nctemp7260;
res =nctemp7261;

#line 2458  "libe.e"
}

#line 2454  "libe.e"
}

#line 2468  "libe.e"
int nctemp7262 = (x < 0.0);
if(nctemp7262)
{

#line 2469  "libe.e"
int nctemp7266 = (i ==0);
if(nctemp7266)

#line 2470  "libe.e"
{
float nctemp7282 = 1.57079632679489661923132 + res;
float nctemp7283 = 1.57079632679489661923132 + nctemp7282;
res =nctemp7283;
}

#line 2472  "libe.e"
else{
float nctemp7296 = 0.78539816339744830962 + res;
float nctemp7297 = 0.78539816339744830962 + nctemp7296;
res =nctemp7297;
}

#line 2468  "libe.e"
}

#line 2474  "libe.e"
else{

#line 2475  "libe.e"
int nctemp7298 = (i ==1);
if(nctemp7298)

#line 2476  "libe.e"
{
float nctemp7314 = 0.78539816339744830962 - res;
float nctemp7315 = 0.78539816339744830962 + nctemp7314;
res =nctemp7315;
}

#line 2478  "libe.e"
else{
float nctemp7319= -res;
res =nctemp7319;
}

#line 2474  "libe.e"
}

#line 2480  "libe.e"
return res;

#line 2424  "libe.e"
}

#line 2489  "libe.e"
float LibeAtan (float f)

#line 2490  "libe.e"
{

#line 2491  "libe.e"
float rt32;
float rt3;
float a;
float P0;
float P1;
float Q0;
int n;
float res;
float g;

#line 2498  "libe.e"
rt32 =0.26794919243112270647;

#line 2499  "libe.e"
rt3 =1.73205080756887729353;

#line 2500  "libe.e"
float nctemp7337 = rt3 - 1.0;
a =nctemp7337;

#line 2501  "libe.e"
float nctemp7341= -0.4708325141E+0;
P0 =nctemp7341;
float nctemp7345= -0.5090958253E-1;
P1 =nctemp7345;
Q0 =0.1412500740E+1;

#line 2503  "libe.e"
int nctemp7350 = (f > 1.0);
if(nctemp7350)
{

#line 2504  "libe.e"
float nctemp7362 = 1.0 / f;
f =nctemp7362;

#line 2505  "libe.e"
n =2;

#line 2503  "libe.e"
}

#line 2508  "libe.e"
else{
n =0;
}

#line 2512  "libe.e"
int nctemp7371 = (f > rt32);
if(nctemp7371)
{

#line 2513  "libe.e"
float nctemp7395 = a * f;
float nctemp7397 = nctemp7395 - 0.5;
float nctemp7399 = nctemp7397 - 0.5;
float nctemp7401 = nctemp7399 + f;
float nctemp7407 = rt3 + f;
float nctemp7408 = nctemp7401 / nctemp7407;
f =nctemp7408;

#line 2514  "libe.e"
int nctemp7417 = n + 1;
n =nctemp7417;

#line 2512  "libe.e"
}

#line 2519  "libe.e"
float nctemp7421= f;
float nctemp7423=LibeFabs(nctemp7421);
int nctemp7418 = (nctemp7423 < LibeSincoslim);
if(nctemp7418)

#line 2520  "libe.e"
{
res =f;
}

#line 2521  "libe.e"
else{

#line 2522  "libe.e"
float nctemp7437 = f * f;
g =nctemp7437;

#line 2523  "libe.e"
float nctemp7455 = P1 * g;
float nctemp7457 = nctemp7455 + P0;
float nctemp7459 = nctemp7457 * g;
float nctemp7465 = g + Q0;
float nctemp7466 = nctemp7459 / nctemp7465;
res =nctemp7466;

#line 2524  "libe.e"
float nctemp7479 = f * res;
float nctemp7480 = f + nctemp7479;
res =nctemp7480;

#line 2521  "libe.e"
}

#line 2526  "libe.e"
int nctemp7481 = (n > 1);
if(nctemp7481)

#line 2527  "libe.e"
{
float nctemp7488= -res;
res =nctemp7488;
}

#line 2529  "libe.e"
int nctemp7489 = (n ==1);
if(nctemp7489)

#line 2530  "libe.e"
{
float nctemp7501 = res + 0.52359877559829887308;
res =nctemp7501;
}

#line 2531  "libe.e"
else{
int nctemp7502 = (n ==2);
if(nctemp7502)

#line 2532  "libe.e"
{
float nctemp7514 = res + 1.57079632679489661923132;
res =nctemp7514;
}

#line 2533  "libe.e"
else{
int nctemp7515 = (n ==3);
if(nctemp7515)

#line 2534  "libe.e"
{
float nctemp7527 = res + 1.04719755119659774615;
res =nctemp7527;
}

#line 2533  "libe.e"
}

#line 2531  "libe.e"
}

#line 2536  "libe.e"
return res;

#line 2490  "libe.e"
}

#line 2545  "libe.e"
float LibeArctan (float x)

#line 2546  "libe.e"
{

#line 2547  "libe.e"
float rval;

#line 2549  "libe.e"
int nctemp7529 = (x < 0.0);
if(nctemp7529)
{

#line 2550  "libe.e"
float nctemp7538= -x;
float nctemp7537= nctemp7538;
float nctemp7539=LibeAtan(nctemp7537);
rval =nctemp7539;

#line 2551  "libe.e"
float nctemp7543= -rval;
rval =nctemp7543;

#line 2549  "libe.e"
}

#line 2554  "libe.e"
else{
float nctemp7548= x;
float nctemp7550=LibeAtan(nctemp7548);
rval =nctemp7550;
}

#line 2556  "libe.e"
return rval;

#line 2546  "libe.e"
}

#line 2565  "libe.e"
float LibePow (float base,float exponent)

#line 2566  "libe.e"
{

#line 2567  "libe.e"
float nctemp7558= base;
float nctemp7560=LibeLn(nctemp7558);
float nctemp7561 = exponent * nctemp7560;
float nctemp7553= nctemp7561;
float nctemp7562=LibeExp(nctemp7553);
return nctemp7562;

#line 2566  "libe.e"
}

#line 2585  "libe.e"
int LibeMod (int n,int r)

#line 2586  "libe.e"
{

#line 2587  "libe.e"
int nctemp7563 = (r ==0);
if(nctemp7563)
{
return n;
}

#line 2588  "libe.e"
int nctemp7579 = n / r;
int nctemp7581 = nctemp7579 * r;
int nctemp7582 = n - nctemp7581;
return nctemp7582;

#line 2586  "libe.e"
}

#line 2591  "libe.e"
int LibeSystem (nctempchar1 *cmd)

#line 2592  "libe.e"
{

#line 2593  "libe.e"
int rval;

#line 2595  "libe.e"
nctempchar1* nctemp7587= cmd;
int nctemp7590=RunSystem(nctemp7587);
rval =nctemp7590;

#line 2597  "libe.e"
return rval;

#line 2592  "libe.e"
}
