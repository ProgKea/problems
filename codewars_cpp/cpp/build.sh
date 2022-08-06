#!/bin/sh

if [ $1 == "" ]; then echo "No file provided"; exit 1; fi

file=$1
name=${file::-4}
g++ $file -o $name
./$name
