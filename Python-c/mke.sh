# To regenerate c-code frome the eps source
# uncomment the lines below.
OPT=" "
cp ../El2d/pyeps.e .
cp ../El2d/model.e .
cp ../El2d/src.e .
cp ../El2d/rec.e .
cp ../El2d/el2d.e .
cp ../El2d/diff.e .

cp ../El2d/libe.e .
cp ../El2d/m-cpu.e m.e
cp ../El2d/run.e .
cp ../El2d/runcpu.e .
ec -c  $OPT m.e
ec -c  $OPT run.e
ec -c  $OPT libe.e
ec -c  $OPT model.e
ec -c  $OPT src.e
ec -c  $OPT rec.e
ec -c  $OPT diff.e
ec -c  $OPT el2d.e
ec -c  $OPT pyeps.e

cp runcpu.e runcpu.c

gcc -O2 -fPIC -ffast-math -c libe.c runcpu.c \
     pyeps.c model.c src.c rec.c diff.c el2d.c  

gcc -shared -o pyel2dcpu.so pyeps.o libe.o runcpu.o src.o rec.o model.o \
               el2d.o diff.o
