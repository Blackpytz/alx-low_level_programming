#!/bin/bash
gcc -c liball.a *.c
ar rc liball.a *.o
ranlib liball.a
