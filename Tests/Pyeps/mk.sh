# To regenerate c-code frome the eps source
# uncomment the lines below.
OPT="-C -g"

cp $EPS/Src/libe.e .
cp $EPS/Src/m.e .
cp $EPS/Src/run.e .
cp $EPS/Src/runcpu.e .

cp runcpu.e runcpu.c
ec -c m.e
ec -c run.e
ec -c libe.e
ec -c pyeps.e

gcc -fPIC -ffast-math -c pyeps.c libe.c runcpu.c

gcc -shared -o pyepscpu.so pyeps.o libe.o runcpu.o
