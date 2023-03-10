#!/bin/bash
gcc -wall -pedantic -werror -wextra -c *.c
arc -rc liball.a *.o
ranlib liball.a
