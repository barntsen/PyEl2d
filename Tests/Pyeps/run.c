//  Translated by epsc  version today  
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
int RunCreate (nctempchar1 *name)
{
int a;
a =0;
}
float RunClock ()
{
int a;
a =0;
}
int RunOpen (nctempchar1 *name,nctempchar1 *mode)
;
int RunClose (int fd)
{
int a;
a =0;
}
int RunRead (int fd,int lbuff,nctempchar1 *buffer)
{
int a;
a =0;
}
int RunWrite (int fd,int lbuff,nctempchar1 *buffer)
{
int a;
a =0;
}
int RunSeek (int fd,int pos,int flag)
{
int a;
a =0;
}
nctempchar1 * RunGetenv (nctempchar1 *name)
{
int a;
a =0;
}
int RunGetnt ()
{
int a;
a =0;
}
int RunGetnb ()
{
int a;
a =0;
}
int RunStrcmp (nctempchar1 *s,nctempchar1 *t)
{
int a;
a =0;
}
int RunStrlen (nctempchar1 *s)
{
int a;
a =0;
}
int RunExit ()
{
int a;
a =0;
}
int RunSystem (nctempchar1 *cmd)
{
int a;
a =0;
}
