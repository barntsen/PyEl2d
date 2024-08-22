#!/bin/sh


gcc -O2 -fopenmp -fPIC -c  libe.c runcpu.c                        \
     pyeps.c model.c src.c rec.c diff.c el2d.c  

gcc -O2 -fopenmp -shared -o pyel2domp.so                          \
        runcpu.o libe.o                                           \
        el2d.o model.o pyeps.o src.o rec.o diff.o 
