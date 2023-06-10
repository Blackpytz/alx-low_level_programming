#!/bin/bash
gcc -o *.c
ar -rc liball.a *.o
ranlib liball.a
