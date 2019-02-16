#! /bin/bash

cmake . -DCMAKE_BUILD_TYPE=DEBUG -DCODE_COVERAGE=ON

make

