#!/bin/sh
# mk.sh is a test script for PyAc2d. 
cp vp.bin.orig vp.bin
cp vs.bin.orig vs.bin
cp rho.bin.orig rho.bin

#Create wavelet
nt=30001 #No of samples
ricker -nt $nt -f0 1.5 -t0 0.700 -dt 0.001 src.bin 

#Run modelling
BIN=../Bin
export NTHREADS=1024
export NBLOCKS=1024

$BIN/el2dmod -m cuda modvx.py 

add -op '+' snp-sxx.bin snp-syy.bin vx-snp-p.bin
add -op '+' sxx.bin syy.bin vx-p.bin

$BIN/el2dmod -m cuda modvy.py 

add -op '+' snp-sxx.bin snp-syy.bin vy-snp-p.bin
add -op '+' sxx.bin syy.bin vy-p.bin