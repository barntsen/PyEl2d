#!/bin/sh
# run.sh runs modeling of a layered model.

# Path to Bin directory
B=../../Bin

#./clean.sh

#Create wavelet
nt=20001 
$B/ricker -nt $nt -f0 10.0 -t0 0.150 -dt 0.00005 src.bin 
graph -noshow -o src.pdf -n1 $nt src.bin
spec -n1 $nt src.bin spectr.bin
graph -noshow -o spectr.pdf -n1 201 -xlabel "Frequency (Hz)" -d1 1.0 spectr.bin

#Run modelling

export NTHREADS=1024
export NBLOCKS=1024

$B/el2dmod -m cuda mod.py 
#./snp.sh

