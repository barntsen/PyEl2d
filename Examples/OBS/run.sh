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

$BIN/el2dmod -m cuda modvx.py 

add -op '+' snp-sxx.bin snp-syy.bin snpvx.bin
add -op '+' sxx.bin syy.bin vx.bin
rm snp-sxx.bin snp-syy.bin
rm sxx.bin syy.bin

#$BIN/el2dmod -m cuda modvy.py 

#add -op '+' snp-sxx.bin snp-syy.bin snpvy.bin
#add -op '+' sxx.bin syy.bin vy.bin
rm snp-sxx.bin snp-syy.bin
rm sxx.bin syy.bin
