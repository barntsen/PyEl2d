#!/bin/sh
# mk is a script for compiling the py2acd el2d code
#and copy output c/c++ code to the python-c, python-cuda or
#python-omp directories.

# Get the architecture (cpu,cuda or omp)
cc=$1

# Compile nividia cuda version and copy the c++ code to ../Python-cuda
if  test $cc = cuda ; then
  opt="-x cuda "
  path=../Python-cuda
  ec  $opt -c -z model.e
  cp             model.cpp $path
  ec  $opt -c -z src.e
  cp             src.cpp   $path
  ec  $opt -c -z rec.e
  cp           rec.cpp   $path
  ec  $opt -c  diff.e
  cp           diff.cpp  $path
  ec  $opt -c -z el2d.e
  cp           el2d.cpp  $path
  ec  $opt -c  pyeps.e
  cp           pyeps.cpp $path
  ec  $opt -c  m.e
  cp           m.cpp    $path
  ec  $opt -c  run.e
  ec  $opt -c  libe.e
  cp           libe.cpp $path
  cp           runcuda.e $path/runcuda.cpp
fi

# Compile c code
if  test $cc = c ; then
  opt=" -x cpu "
  path=../Python-c
  ec  $opt -c   model.e
  cp         model.c $path
  ec  $opt -c -z src.e
  cp         src.c   $path
  ec  $opt -c -z  rec.e
  cp         rec.c   $path
  ec  $opt  -c   diff.e
  cp         diff.c  $path
  ec  $opt  -c -z   el2d.e
  cp         el2d.c  $path
  ec  $opt  -c -z  model.e
  cp         model.c $path
  ec  $opt  -c   pyeps.e
  cp         pyeps.c $path
  ec  $opt  -c   m.e
  cp         m.c    $path
  ec  $opt  -c run.e
  ec  $opt  -c   libe.e
  cp         libe.c $path
  cp         runcpu.e $path/runcpu.c
fi

# Compile omp code
if  test $cc = omp ; then
  opt="-x cpu -f "
  path=../Python-omp
  ec  $opt -c   model.e
  cp         model.c $path
  ec  $opt -c   src.e
  cp         src.c   $path
  ec  $opt -c   rec.e
  cp         rec.c   $path
  ec  $opt  -c   diff.e
  cp         diff.c  $path
  ec  $opt  -c   el2d.e
  cp         el2d.c  $path
  ec  $opt  -c   model.e
  cp         model.c $path
  ec  $opt  -c   pyeps.e
  cp         pyeps.c $path
  ec  $opt  -c   m.e
  cp         m.c    $path
  ec  $opt  -c   libe.e
  cp         libe.c $path
  cp         runcpu.e $path/runcpu.c
fi

