#!/bin/bash
gcc -fPIC -c try.c
gcc -shared try.o -o libtry.so
