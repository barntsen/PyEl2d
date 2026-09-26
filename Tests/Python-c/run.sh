#!/bin/sh
# run.sh is a test script for PyEl2d

# Path to Bin directory
B=../../Bin

./clean.sh

#Create wavelet
nt=1501 #No of samples
$B/ricker -nt $nt -f0 25.0 -t0 0.100 -dt 0.0005 src.bin 

n1=256
n2=256
#Create vp
$B/spike -n1 $n1 -n2 $n2 -val 2500.0 vp.bin

#Create vs
$B/spike -n1 $n1 -n2 $n2 -val 1100.0 vs.bin

#Create rho 
$B/spike -n1 $n1 -n2 $n2 -val 1000.0 rho.bin

#Run modelling

lib="/home/barn/Dropbox/Src/PyEl2d/Bin/pyel2dcpu.so"
$B/el2dmod -m c -path $lib mod.py 
#./snp.sh

