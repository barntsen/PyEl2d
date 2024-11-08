#!/bin/sh
# mk.sh is a test script for PyEl2d. 

cp vp.bin.orig vp.bin
cp vs.bin.orig vs.bin
cp rho.bin.orig rho.bin

#Create wavelet
nt=30001 #No of samples
ricker -nt $nt -f0 1.5 -t0 0.700 -dt 0.001 src.bin 

#Run modelling
BIN=../../Bin
export NTHREADS=1024
export NBLOCKS=1024

$BIN/el2dmod -m cuda mod.py 
#$BIN/el2dmod -m c    mod.py 
exit



