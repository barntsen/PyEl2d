#!/bin/sh

cp ../El2d/model.e .
cp ../El2d/src.e .
cp ../El2d/rec.e .
cp ../El2d/el2d.e .
cp ../El2d/diff.e .
cp ../El2d/pyeps.e .
ec -c m.e
ec -c run.e
ec -c libe.e
ec -c  pyeps.e
ec -c  model.e
ec -c  src.e
ec -c  rec.e
ec -c  el2d.e
ec -c  diff.e
cp $EPS/Src/libe.e .
cp $EPS/Src/m-cpu.e m.e
cp $EPS/Src/run.e .
cp $EPS/Src/runcpu.e .
cp runcpu.e runcpu.c

gcc -O2 -fopenmp -fPIC -c  libe.c runcpu.c                        \
     pyeps.c model.c src.c rec.c diff.c el2d.c  

gcc -O2 -fopenmp -shared -o pyel2domp.so                          \
        runcpu.o libe.o                                           \
        el2d.o model.o pyeps.o src.o rec.o diff.o 
