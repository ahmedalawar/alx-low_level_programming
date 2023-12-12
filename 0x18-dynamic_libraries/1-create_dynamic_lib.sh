#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -fpic -c *.c
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
