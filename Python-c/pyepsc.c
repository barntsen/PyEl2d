// C support routines for pyeps.e

typedef struct nctempint1   { int d[1]; int *a;} nctempint1;
typedef struct nctempint2   { int d[2]; int *a;} nctempint2;
typedef struct nctempfloat1 { int d[1]; float *a;} nctempfloat1;
typedef struct nctempfloat2 { int d[2]; float *a;} nctempfloat2;

void *RunMalloc(int n);

 nctempint1 *Desc1di(int nx, int *data)
{
  nctempint1 *descr;
  descr=(nctempint1 *)RunMalloc(sizeof(nctempint1));
  descr->d[0]=nx;
  descr->a=data;

  return(descr);
}

int *Data1di(nctempint1 *descr)
{
  return(descr->a);
}

 nctempint2 *Desc2di(int nx, int ny, int *data)
{
  nctempint2 *descr;
  descr=(nctempint2 *)RunMalloc(sizeof(nctempint2));
  descr->d[0]=nx;
  descr->d[1]=ny;
  descr->a=data;

  return(descr);
}

int *Data2di(nctempint2 *descr)
{
  return(descr->a);
}

nctempfloat1 *Desc1df(int nx, float *data)
{
  nctempfloat1 *descr;
  descr=(nctempfloat1 *)RunMalloc(sizeof(nctempfloat1));
  descr->d[0]=nx;
  descr->a=data;

  return(descr);
}

float *Data1df(nctempfloat1 *descr)
{
  return(descr->a);
}

nctempfloat2 *Desc2df(int nx, int ny, float *data)
{
  nctempfloat2 *descr;
  descr=(nctempfloat2 *)RunMalloc(sizeof(nctempfloat2));
  descr->d[0]=nx;
  descr->d[1]=ny;
  descr->a=data;

  return(descr);
}

float *Data2df(nctempfloat2 *descr)
{
  return(descr->a);
}

