# Differentiator exports

#diff object
class diff :
  int  l;        # Differentiator length
  int lmax;
  float [*,*] coeffs; 
  float [*]   w;# Differentiator weights 
end
#Methods:
struct diff DiffNew(int l):end
int DiffDxminus(struct diff Diff, float [*,*] A, float [*,*] dA, float dx):end
int DiffDyminus(struct diff Diff, float [*,*] A, float [*,*] dA, float dx):end
int DiffDxplus(struct diff Diff, float [*,*] A, float [*,*] dA, float dx):end
int DiffDyplus(struct diff Diff, float [*,*] A, float [*,*] dA, float dx):end





