#!/bin/sh

# data plots \dot{e}xx 

#image -cmin -1.0e-25  -cmax 1.0e-25 -t -n2 601 -n1 2001 exx.bin
image -pclip 95.0 -d1 0.0005 -d2 5.0 -t -n1 2001 -n2 601 exx.bin
