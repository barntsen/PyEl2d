#!/bin/sh

# Script for compiling c-code and creating a shared library

SRC=../El2d

gcc  -O2 -fPIC -ffast-math -c libe.c runcpu.c \
     pyeps.c model.c src.c rec.c diff.c el2d.c  

gcc -shared -o pyel2dcpu.so \
       pyeps.o libe.o runcpu.o src.o rec.o model.o  el2d.o diff.o
      
