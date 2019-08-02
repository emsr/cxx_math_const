#! /bin/bash

git checkout concepts

cmake . \
  -DCMAKE_CXX_COMPILER=g++-8 \
  -DCMAKE_BUILD_TYPE=DEBUG \
  -DCODE_COVERAGE=ON

make
