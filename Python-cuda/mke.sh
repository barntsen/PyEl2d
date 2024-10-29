#!/bin/sh
# mk.sh is a script for building the python-cuda interface

# To regenerate the cuda-code from
# eps source uncomment below.
cp ../El2d/model.e .
cp ../El2d/src.e .
cp ../El2d/rec.e .
cp ../El2d/diff.e .
cp ../El2d/el2d.e .
cp ../El2d/pyeps.e .
cp $EPS/Src/libe.e .
cp $EPS/Src/m-cuda.e m.e
cp $EPS/Src/run.e .
cp $EPS/Src/runcuda.e .
ecc -c m.e
ecc -c run.e
ecc -c libe.e
ecc -c pyeps.e
ecc -c model.e
ecc -c src.e
ecc -c rec.e
ecc -c diff.e
ecc -c el2d.e
cp runcuda.e runcuda.cpp

nvcc  --x cu --compiler-options "-fPIC -ffast-math -z muldefs" -c -O3            \
       libe.cpp runcuda.cpp pyeps.cpp model.cpp src.cpp rec.cpp \
       diff.cpp el2d.cpp  

g++  -z muldefs -shared -o pyel2dcuda.so -L/usr/local/cuda-11.8/lib64/ runcuda.o libe.o \
                el2d.o model.o pyeps.o src.o rec.o diff.o \
                -lcuda -lcudart
