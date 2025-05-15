#!/bin/sh

BIN=../../Bin
n1=1750
n2=336
n3=301

movie  -o1 0.0 -d1 0.1 -o2 0.0 -d2 0.1 -ar 1.0 -cmin -0.3 -cmax 0.3 \
           -n1 $n1 -n2 $n2 -n3 $n3 -ar 3.0 -fbg vp.bin -bgcolormap crust \
       -title "GO OBS Model Vx" \
       -xlabel "Depth (Km)"     \
       -ylabel "Depth (Km)"     \
       snp-fy.bin 


