#!/bin/sh

BIN=../../Bin
n1=601
n2=101
n3=200

$BIN/movie  -noshow -o exx.mp4 -o1 0.0 -d1 5.0 -o2 0.0 -d2 5.0 -ar 3.0  \
           -cmin -2.0e-15 -cmax 2.5e-15 -n1 $n1 -n2 $n2 -n3 $n3 snp-exx.bin 


