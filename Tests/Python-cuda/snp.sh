#!/bin/sh

BIN=../../Bin
n1=3500
n2=601
n3=201

movie  -o1 0.0 -d1 1.0 -o2 0.0 -d2 1.0 -ar 1.0 -cmin -9.5e-9 -cmax 9.5e-9 \
           -n1 $n1 -n2 $n2 -n3 $n3 -ar 3.0 -fbg vp.bin -bgcolormap crust snp-vx.bin 


