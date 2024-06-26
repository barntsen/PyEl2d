#!/bin/sh
# mk.sh is a test script for PyAc2d. 

./clean.sh

#Create wavelet
nt=1001 #No of samples
ricker -nt $nt -f0 30.0 -t0 0.100 -dt 0.0005 src.bin 

n1=2501
n2=2501
#Create vp
spike -n1 $n1 -n2 $n2 -val 2500.0 vp.bin

#Create vs
spike -n1 $n1 -n2 $n2 -val 1100.0 vs.bin

#Create rho 
spike -n1 $n1 -n2 $n2 -val 1000.0 rho.bin

#Create Qp 
spike -n1 $n1 -n2 $n2 -val 100000.0 qp.bin

#Create Qp 
spike -n1 $n1 -n2 $n2 -val 100000.0 qs.bin

#Create Ql 
spike -n1 $n1 -n2 $n2 -val 100000.0 ql.bin

#Create Qm 
spike -n1 $n1 -n2 $n2 -val 100000.0 qm.bin

#Run modelling
export NTHREADS=256
export NBLOCKS=246
BIN=../../Bin
$BIN/el2dmod -m cuda mod.py

#./snp.sh

