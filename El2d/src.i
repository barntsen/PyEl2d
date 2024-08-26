# Src is the source object
struct src 
: 
  int [*] Sx;
  int [*] Sy;
  float  [*,*] Sqyy;
  float [*,*]  Sqxx;
  float  [*,*] Sfx;
  float  [*,*] Sfy;
  int Ns;
end
# SrcNew creates a new source object
struct src SrcNew(int [*] sx, int [*] sy, 
                  float [*,*] sqxx, float [*,*] sqyy,
                  float [*,*] sfx,  float [*,*] sfy):end

# SrcDel deletes a source object
int SrcDel(struct src Src):end
