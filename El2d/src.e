# Src object

import libe

class src :
  int [*] Sx;
  int [*] Sy;
  float  [*,*] Sqyy;
  float [*,*]  Sqxx;
  float  [*,*] Sfx;
  float  [*,*] Sfy;
  int Ns;



def class src SrcNew(int [*] sx, int [*] sy,              \
                  float [*,*] sqxx, float [*,*] sqyy, \
                  float [*,*] sfx,  float [*,*] sfy) :

  # SrcNew creates a new source object.
  #
  # Arguments:
  #   sx : 1D array with x-coordinate of source position
  #   sy : 1D array with y-coordinate of source position
  #   sqxx : 2D array of sxx (xx component of stress) of explosive source.
  #          sqxx[i,j] contains time sample no i for source no j
  #          at position (sx[j],sy[j]). 
  #   sqyy : 2D array of syy (yy component of stress) of explosive source.
  #          sqyy[i,j] contains time sample no i for source no j
  #          at position (sx[j],sy[j]). 
  #   sfx  : 2D array of fx (x component of force) of force source.
  #          fx[i,j] contains time sample no i for source no j
  #          at position (sx[j],sy[j]). 
  #   sfy  : 2D array of fy (y component of force) of force source.
  #          fy[i,j] contains time sample no i for source no j
  #          at position (sx[j],sy[j]). 
  #    
  #    The source functions sqxx,sqyy,sfx and sfy are all added as
  #    sources, if one or more is not needed the arrays must
  #    contain zeros. 
  #          
  struct src Src;

  Src = new(struct src);

  Src.Sx = sx;
  Src.Sy = sy;
  Src.Sfx = sfx;
  Src.Sfy = sfy;
  Src.Sqxx =  sqxx;
  Src.Sqyy = sqyy;
  Src.Ns = len(sx,0);

  return(Src);


def int SrcDel(struct src Src) :

  # SrcDel deletes a source object
  #
  # Arguments: 
  #   Src:    Source structure
  #

  delete(Src); 
  return(OK);


# Ricker pulse
def int Srcricker(float [*] source, float t0, float f0, int nt, float dt) :
  float t;
  float w0;
  float arg;
  int i;

  for(i=0; i<nt; i=i+1):
    t = cast(float,i)*dt-t0;
    w0 = 2.0*3.14159*f0;
    arg = w0*t; 
    source[i] = (1.0-0.5*arg*arg)*LibeExp(-0.25*arg*arg);
  
  return(OK);

