#!/bin/sh

n1=6801
n2=501

#Create rho
$B/spike -n1 $n1 -n2 $n2 -val 1000.0 rho.bin

#Run modelling
BIN=../../Bin
export NTHREADS=1024
export NBLOCKS=1024

$BIN/el2dmod -m cuda mod.py 
exit



