# To regenerate c-code frome the eps source
# uncomment the lines below.
OPT="-C -g"
cp ../El2d/pyeps.e .
cp ../El2d/model.i .
cp ../El2d/model.e .
cp ../El2d/src.i .
cp ../El2d/src.e .
cp ../El2d/rec.i .
cp ../El2d/rec.e .
cp ../El2d/el2d.i .
cp ../El2d/el2d.e .
cp ../El2d/diff.e .
cp ../El2d/diff.i .
cp $EPS/Src/libe.e .
cp $EPS/Src/libe.i .
cp $EPS/Src/m-cpu.i m.i
cp $EPS/Src/run.i .
cp $EPS/Src/runcpu.e .
ec -c  $OPT pyeps.e
ec -c  $OPT model.e
ec -c  $OPT src.e
ec -c  $OPT rec.e
ec -c  $OPT el2d.e
ec -c  $OPT diff.e
ec -c  $OPT libe.e
cp runcpu.e runcpu.c

gcc -O2 -fPIC -ffast-math -c libe.c runcpu.c \
     pyeps.c model.c src.c rec.c diff.c el2d.c  

gcc -shared -o pyel2dcpu.so pyeps.o libe.o runcpu.o src.o rec.o model.o \
               el2d.o diff.o
