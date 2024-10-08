#!/bin/sh
# Compiles and installs all runable codes
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
  ./mke.sh
  cd ..
fi

if test $cc = omp ;  then
  cd El2d       #Compile el2d library with gcc and omp
  ./mk.sh $cc   
  cd ..

  cd Python-omp #Compile Python bindings for gcc and omp
  ./mke.sh
  cd ..
fi

if test $cc = cuda ; then  
  cd El2d        #Compile el2d library for nvidia gpu
  ./mk.sh $cc    
  cd ..

  cd Python-cuda #Compile Python bindings for nvidia gpu
  ./mke.sh
  cd ..
fi

if test $cc = hip ; then
  cd El2d       #Compile el2d library for nvidia gpu
  ./mk.sh $cc  
  cd ..

  cd Python-hip #Compile Python bindings for nvidia gpu
  ./mke.sh
  cd ..
fi

# Install python scripts and modules in the Bin folder

echo "** Installing binaries to the Bin folder"

#Install all python scripts in Bin
mkdir -p Bin

cd Examples/Basic
./mk.sh
cd ../..

cp El2d/el2dmod.py          Bin/el2dmod 
chmod +x                    Bin/el2dmod
cp El2d/q.py             Bin
cp El2d/src.py              Bin
cp El2d/rec.py              Bin
cp El2d/model.py            Bin
cp El2d/el2d.py             Bin
cp El2d/pyeps.py            Bin
cp Scripts/spike.py         Bin/spike
chmod +x                    Bin/spike
cp Scripts/ricker.py        Bin/ricker
chmod +x                    Bin/ricker
cp Scripts/movie.py         Bin/movie
chmod +x                    Bin/movie
cp Scripts/parula.py        Bin
cp Scripts/babin.py         Bin
cp El2d/babinf.py           Bin
cp Scripts/bacolmaps.py     Bin
cp Scripts/pltcom.py        Bin
cp Scripts/segy.py          Bin

# Install shared libs (python callable)

if  test $cc = c ; then 
  cp Python-c/pyel2dcpu.so  Bin
fi

if  test $cc = omp ; then 
  cp Python-omp/pyel2domp.so  Bin
fi

if test $cc = cuda ; then 
  cp Python-cuda/pyel2dcuda.so  Bin
fi

if test $cc = hip ; then 
  cp Python-hip/pyel2dhip.so  Bin
fi

