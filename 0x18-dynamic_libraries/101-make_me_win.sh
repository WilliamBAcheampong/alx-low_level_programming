#!/bin/bash

echo 'void make_me_win(void) __attribute__((constructor)); void make_me_win(void) { printf("Please make me win!\n"); }' > libwin.c
gcc -Wall -fPIC -shared -o libwin.so libwin.c -ldl
export LD_PRELOAD=./libwin.so
./gm 9 8 10 24 75 9
