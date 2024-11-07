#!/bin/sh
# mk.sh is a test script for PyAc2d. 

./clean.sh

#Create wavelet
nt=4001 #No of samples
ricker -nt $nt -f0 25.0 -t0 0.100 -dt 0.0005 src.bin 

n1=500
n2=174
#Create vp
spike -n1 $n1 -n2 $n2 -val 2500.0 vp.bin

#Create vs
spike -n1 $n1 -n2 $n2 -val 1100.0 vs.bin

#Create rho 
spike -n1 $n1 -n2 $n2 -val 1000.0 rho.bin


#Run modelling
BIN=../../Bin

$BIN/el2dmod -m c mod.py 

