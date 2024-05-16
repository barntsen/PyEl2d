#!/bin/sh
# install is a script for installing all runable codes
# and scripts.

cc=$1

if test -z $cc ; then 
  echo " usage: install.sh arg "
  echo "        arg is one of cpu, cuda, hip or omp"
  exit
fi

if test $cc != cpu  && test $cc != cuda  && test $cc != hip && test $cc != omp ; then 
  echo " usage: mk.sh arg "
  echo "        arg is one of cpu, cuda, hip or omp"
fi

echo "** Installing binaries to the Bin folder"

#Install all python scripts
cp El2d/el2dmod.py          Bin/el2dmod 
chmod +x                    Bin/el2dmod
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
cp El2d/babin.py            Bin
cp Scripts/bacolmaps.py     Bin
cp Scripts/pltcom.py        Bin
cp Scripts/segy.py          Bin

# Install shared libs (python callable)

if  test $cc = cpu ; then 
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

