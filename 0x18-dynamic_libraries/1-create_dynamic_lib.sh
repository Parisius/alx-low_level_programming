#!/bin/bash
gcc -fPIC -g -c -Wall -pedantic -Werror -Wextra *.c
gcc -shared -Wl,-soname,liball.so -o liball.so *.o -lc
2e62adf7355751d061db