#!/bin/sh
#install compiles and installs all runable codes
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

echo "** Compiling and installing binaries"

if test $cc = c ;  then

  cd Python-c #Compile Python bindings for c
  ./mk.sh
  cd ..

fi

if test $cc = omp ;  then

  cd Python-omp #Compile Python bindings for gcc and omp
  ./mk.sh
  cd ..

fi

if test $cc = cuda ; then  

  cd Python-cuda #Compile Python bindings for nvidia gpu
  ./mk.sh
  cd ..

fi

# Install python scripts and modules in the Bin folder

echo "** Installing binaries to the Bin folder"

#Install all python scripts in Bin
mkdir -p Bin

cp El2d/el2dmod.py          Bin/el2dmod 
chmod +x                    Bin/el2dmod
cp El2d/q.py                Bin
cp El2d/src.py              Bin
cp El2d/rec.py              Bin
cp El2d/model.py            Bin
cp El2d/el2d.py             Bin
cp El2d/q.py                Bin
cp El2d/pyeps.py            Bin
cp Scripts/spike.py         Bin/spike
chmod +x                    Bin/spike
cp Scripts/ricker.py        Bin/ricker
chmod +x                    Bin/ricker
cp Scripts/movie.py         Bin/movie
chmod +x                    Bin/movie
cp Scripts/image.py         Bin/image
chmod +x                    Bin/image
cp Scripts/parula.py        Bin
cp Scripts/babin.py         Bin
cp El2d/babinf.py           Bin
cp Scripts/bacolmaps.py     Bin
cp Scripts/pltcom.py        Bin
cp Scripts/segy.py          Bin
cp Scripts/rss.py           Bin

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

echo "** Installing Examples"
# Install examples
cd Examples
  ./mk.sh
cd ..
