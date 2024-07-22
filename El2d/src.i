// Src is the source object
struct src 
{ 
  int [*] Sx;
  int [*] Sy;
  int [*,*] Sqxx;
  float  [*,*] Sqyy;
  floaat [*,*] Sqxx;
  float  [*,*] Sfx;
  float  [*,*] Sfy;
  int Ns;
}
// SrcNew creates a new source object
struct src SrcNew(float [*] source, int [*] sx, int [*] sy, 
                                    float [*,*] sqxx, float [*,*] sqyy,
                                    float [*,*] sfx,  float [*,*] sfy){}

// SrcDel deletes a source object
int SrcDel(struct src Src){}
