#!/bin/sh

export NTHREADS=1024
export NBLOCKS=1024
export OMP_NUM_THREADS=6

python3 basic.py
./movie.sh
