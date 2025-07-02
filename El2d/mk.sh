#!/bin/sh
# mk is a script for compiling the py2acd el2d code
cc=$1

# Compile nividia cuda version and copy the c++ code to ../Python-cuda
opt=" -C "
if  test $cc = cuda ; then
  path=../Python-cuda
  ecc  -c     model.e
  cp          model.cpp $path
  ecc  -c     src.e
  cp          src.cpp   $path
  ecc  -c     rec.e
  cp          rec.cpp   $path
  ecc  -c     diff.e
  cp          diff.cpp  $path
  ecc  -c     el2d.e
  cp          el2d.cpp  $path
  ecc  -c     model.e
  cp          model.cpp $path
fi
rm *.cpp

# Compile amd hip version
#if  test $cc = hip ; then
#  ech  -O diff.e
#  ech  -O model.e
#  ech  -O src.e
#  ech  -O rec.e
#  ech  -O el2d.e
#  ar rcs libel2dhip.o el2d.o diff.o model.o src.o rec.o
#fi

# Compile c code
if  test $cc = c ; then
  path=../Python-c
  ec    -c   model.e
  cp         model.c $path
  ec    -c   src.e
  cp         src.c   $path
  ec    -c   rec.e
  cp         rec.c   $path
  ec    -c   diff.e
  cp         diff.c  $path
  ec    -c   el2d.e
  cp         el2d.c  $path
  ec    -c   model.e
  cp         model.c $path
fi
rm *.c

# Compile open mp code
if  test $cc = c ; then
  path=../Python-omp
  ec    -c   model.e
  cp         model.c $path
  ec    -c   src.e
  cp         src.c   $path
  ec    -c   rec.e
  cp         rec.c   $path
  ec    -c   diff.e
  cp         diff.c  $path
  ec    -c   el2d.e
  cp         el2d.c  $path
  ec    -c   model.e
  cp         model.c $path
fi
rm *.c

