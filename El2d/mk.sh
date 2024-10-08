#!/bin/sh
# mk is a script for compiling the py2acd el2d code
cc=$1

# Compile nividia cuda version
if  test $cc = cuda ; then
  ecc      -O model.e
  ecc      -O src.e
  ecc      -O rec.e
  ecc      -O diff.e
  ecc      -O el2d.e
  ecc      -O model.e
ar rcs libel2dcuda.o el2d.o diff.o model.o src.o rec.o
fi

# Compile amd hip version
if  test $cc = hip ; then
  ech  -O diff.e
  ech  -O model.e
  ech  -O src.e
  ech  -O rec.e
  ech  -O el2d.e
  ar rcs libel2dhip.o el2d.o diff.o model.o src.o rec.o
fi

# Compile c code
if  test $cc = c ; then
  ec  -O $f model.e
  ec  -O $f src.e
  ec  -O $f rec.e
  ec  -O $f diff.e
  ec  -O $f el2d.e
  ar rcs libel2dcpu.o el2d.o diff.o model.o src.o rec.o
fi

