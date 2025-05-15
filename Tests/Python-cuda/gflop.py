
l=6
nx=251
ny=251
nt=2001

nop=nt*(8*(2*l+1)+14*2+60)*nx*ny
t=1.1
gflop=nop/1.1
print(gflop/1.0e+09)
