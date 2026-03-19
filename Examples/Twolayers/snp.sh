#!/bin/sh

BIN=../../Bin
n1=300
n2=300
n3=201

$BIN/movie  -o1 0.0 -d1 2.5 -o2 0.0 -d2 2.5 -ar 1.0  -cmin -0.1e-05 -cmax 0.1e-05 \
           -n1 $n1 -n2 $n2 -n3 $n3 snp-vx.bin 


