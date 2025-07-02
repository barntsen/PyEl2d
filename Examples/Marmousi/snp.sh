#!/bin/sh

BIN=../../Bin
n1=500
n2=174
n3=301

movie  -o1 0.0 -d1 0.020 -o2 0.0 -d2 0.020 -ar 2.0  \
           -n1 $n1 -n2 $n2 -n3 $n3 -ar 3.0 \
       -title "Marmousi " \
       -xlabel "Depth (Km)"     \
       -ylabel "Depth (Km)"     \
       snp-p.bin 


