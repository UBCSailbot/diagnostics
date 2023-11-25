#!/bin/bash

# Run CMake with source directory '.' and build directory out/build
cmake -S . -B out/build

# Compile and link the project with generated MakeFile from CMake
make -C out/build

# Copy the results to output file
cp -r out/build/src/main out/main