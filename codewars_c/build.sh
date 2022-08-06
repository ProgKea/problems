#!/bin/sh

set -xe

C_FLAGS="-Wall -Wextra -std=c11 -pedantic -O2 -ggdb -lm"

if [[ $1 == "all" ]]; then
    for dir in $(ls -l | grep ^d | awk '{print $NF}')
    do
        gcc -o $dir"_solution" $dir"/solution.c" $C_FLAGS
    done
else
    gcc -o $1"_solution" $1"/solution.c" $C_FLAGS
fi
