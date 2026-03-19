#!/bin/sh
# mk.sh is a script for building the python-cuda interface

nvcc   -use_fast_math  --x cu --compiler-options "-fPIC -ffast-math" -c -O3   \
       libe.cpp pyeps.cpp model.cpp src.cpp rec.cpp diff.cpp el2d.cpp libe.cpp runcuda.cpp 

#nvcc   -shared -o pyel2dcuda.so \
#       -L/usr/local/cuda-11.8/lib64/ runcuda.o libe.o      \
#       el2d.o model.o pyeps.o src.o rec.o diff.o -l cuda   
                
nvcc   -shared -o pyel2dcuda.so \
       runcuda.o libe.o      \
       el2d.o model.o pyeps.o src.o rec.o diff.o 
                
rm -f *.o

