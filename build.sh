#!/bin/bash
DIR="build"
if [ -d "$DIR" ]; then
    # Delete build directory
    rm -rf build
fi
mkdir build
cd build

cmake .. && make