#!/bin/sh

BIN=../../Bin
n1=400
n2=200
n3=151

$BIN/movie  -o1 0.0 -d1 1.0 -o2 0.0 -d2 1.0 -ar 1.0  -cmin -1.0e-6 -cmax 1.0e-6 \
           -n1 $n1 -n2 $n2 -n3 $n3 snp-p.bin 


