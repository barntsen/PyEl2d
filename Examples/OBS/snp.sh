#!/bin/sh

BIN=../../Bin
n1=1750
n2=336
n3=601

movie  -o1 0.0 -d1 0.1 -o2 0.0 -d2 0.1 -ar 1.0 \
           -n1 $n1 -n2 $n2 -n3 $n3 -ar 3.0 -fbg vp.bin -bgcolormap crust \
       -cmin -5.0e-08 -cmax 2.5e-08   \
       -title "GO OBS Model Vx" \
       -xlabel "Depth (Km)"     \
       -ylabel "Depth (Km)"     \
       snp-p.bin 


