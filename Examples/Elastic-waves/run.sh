#!/bin/sh
# run.sh is a test script for PyEl2d

# Path to Bin directory
B=/home/barn/Dropbox/Src/PyEl2d/Bin

#./clean.sh

#Create wavelet
nt=10001 #No of samples
$B/ricker -nt $nt -f0 25.0 -t0 0.100 -dt 0.0005 src.bin 

#Run modelling

export NTHREADS=1024
export NBLOCKS=1024

$B/el2dmod -m cuda mod.py 
#./snp.sh

