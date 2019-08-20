#!/bin/sh
gcc -o test test.c && ./test | gnuplot -p -e 'set terminal png size 400,300; set output "xyz.png"; plot "/dev/stdin"'
