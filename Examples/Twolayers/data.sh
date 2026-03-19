#!/bin/sh

n1=2501
n2=300

image -o vx0.pdf -n1 $n1 -n2 $n2 -t -d1 0.0005 -d2 2.5 vx0.bin
window -n1 $n1 -n2 $n2 -f2 150 -l2 1 vx0.bin trace0-150.bin
graph -o trace-150.pdf -n1 $n1  -d1 0.0005 trace0-150.bin

image -o vx.pdf -n1 $n1 -n2 $n2 -t -d1 0.0005 -d2 2.5 vx.bin
window -n1 $n1 -n2 $n2 -f1 1200 -l1 1301 -f2 150 -l2 1 vx.bin trace-150.bin
n1=1301
graph -o1 0.6 -o trace-150.pdf -n1 $n1  -d1 0.0005 trace-150.bin



