#!/bin/bash
gcc -shared -Wl,-soname,liball.so -o liball.so *.o -lc
