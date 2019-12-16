#!/bin/bash
gcc -fPIC -g -c *.c
gcc -shared -fPIC *.o -o liball.so
