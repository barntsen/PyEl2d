#!/bin/sh
# mk.sh is a test script for PyAc2d. 

transp n1=174 < marmousi_II_marine.vp >vp.bin
transp n1=174 < marmousi_II_marine.vs >vs.bin
transp n1=174 < marmousi_II_marine.rho >rho.bin

image -noshow -o vp.pdf -n1 500 -n2 174 -colormap crust vp.bin
#./clean.sh


#Create wavelet
nt=4001 #No of samples
ricker -nt $nt -f0 15.0 -t0 0.200 -dt 0.0010 src.bin 
graph -noshow -o src.pdf -n1 4001 src.bin

n1=500
n2=174

#Run modelling
BIN=../../Bin
export NTHREADS=1024
export NBLOCKS=1024
$BIN/el2dmod -m cuda mod.py 

