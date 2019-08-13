#!/bin/sh
gcc -o test test.c && ./test | gnuplot -p -e 'plot "/dev/stdin"'
