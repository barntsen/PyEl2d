#!/bin/sh
# mk is a script for compiling and installing all runable codes
# and scripts.

cc=$1

if test -z $cc ; then 
  echo " usage: mk.sh arg "
  echo "        arg is one of c, cuda, hip or omp"
  exit
fi

if test $cc != c && test $cc != cuda  && test $cc != hip && test $cc != omp ; then
  echo " usage: mk.sh arg "
  echo "        arg is one of c, cuda, hip or omp"
  exit
fi

echo "** Compiling and installing binaries"

if test $cc = c ;  then
  cd El2d       #Compile El2d library for c
  ./mk.sh $cc   
  cd ..

  cd Python-c #Compile Python bindings for c
  ./mk.sh
  cd ..
fi

if test $cc = omp ;  then
  cd El2d       #Compile el2d library with gcc and omp
  ./mk.sh $cc   
  cd ..

  cd Python-omp #Compile Python bindings for gcc and omp
  ./mk.sh
  cd ..
fi

if test $cc = cuda ; then  
  cd El2d        #Compile el2d library for nvidia gpu
  ./mk.sh $cc    
  cd ..

  cd Python-cuda #Compile Python bindings for nvidia gpu
  ./mk.sh
  cd ..
fi

if test $cc = hip ; then
  cd El2d       #Compile el2d library for nvidia gpu
  ./mk.sh $cc  
  cd ..

  cd Python-hip #Compile Python bindings for nvidia gpu
  ./mk.sh
  cd ..
fi

# Install python scripts and modules in the Bin folder
./install.sh $cc
