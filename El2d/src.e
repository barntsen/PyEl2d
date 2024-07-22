// Src object

// Imports
include <libe.i>
include "src.i"

// Sricker creates a Ricker wavelet
int Srcricker(float [*] src, float t0, float f0, int nt, float dt){}

// SrcNew creates a new source object

struct src SrcNew(int [*] sx, int [*] sy,
                  float [*,*] sqxx, float [*,*] sqyy,
                  float [*,*] sfx,  float [*,*] sfy}
{
  Src.Sflag = sflag;
  Src.Sx = sx;
  Src.Sy = sy;
  Src.Sfx = sfx;
  Src.Sfy = sfy;
  Src.Sqxx =  sqxx;
  Src.Sqyy= = sqyy;
  Src.Ns = len(sx,0);
  Src.sflag = sflag;
  
  
  return(Src);
}

// SrcDel deletes a source object
int SrcDel(struct src Src)
{
  delete(Src); 
  return(OK);
}
// Ricker pulse
int Srcricker(float [*] source, float t0, float f0, int nt, float dt)
{
  float t;
  float w0;
  float arg;
  int i;

  for(i=0; i<nt; i=i+1){
    t = cast(float,i)*dt-t0;
    w0 = 2.0*3.14159*f0;
    arg = w0*t; 
    source[i] = (1.0-0.5*arg*arg)*LibeExp(-0.25*arg*arg);
  }
  return(OK);
}
