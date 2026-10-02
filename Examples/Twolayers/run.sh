#!/bin/sh
# run.sh is a test script for PyEl2d

# Path to Bin directory
B=../../Bin

./clean.sh

# Create wavelet
nt=2501 #No of samples
$B/ricker -nt $nt -f0 15.0 -t0 0.100 -dt 0.0005 src.bin 
graph -d1 0.0005 -o src.pdf -noshow -n1 $nt src.bin


# Create vp,vs,rho
./model.py

#Run modelling 

export NTHREADS=1024
export NBLOCKS=1024

$B/el2dmod -m cuda mod.py 

