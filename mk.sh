#!/bin/sh
# install compiles all .e files and installs all runable codes
# and scripts.

cc=$1

if test -z $cc ; then 
  echo " usage: mk.sh arg "
  echo "        arg is one of c, cuda, or omp"
  exit
fi

if test $cc != c && test $cc != cuda  && test $cc != omp ; then
  echo " usage: mk.sh arg "
  echo "        arg is one of c, cuda or omp"
  exit
fi

echo "** Compiling eps code"

if test $cc = c ;  then
  cd El2d       #Compile El2d library for c
  ./mk.sh $cc   
  cd ..
fi

if test $cc = omp ;  then
  cd El2d       #Compile el2d library with gcc and omp
  ./mk.sh $cc   
  cd ..
fi

if test $cc = cuda ; then  
  cd El2d        #Compile el2d library for nvidia gpu
  ./mk.sh $cc    
  cd ..
fi

# Install python scripts and modules in the Bin folder
 
echo "** Running ./install.sh"
./install.sh $cc

