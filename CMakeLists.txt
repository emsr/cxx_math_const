cmake_minimum_required (VERSION 3.2.0)

project(
  math_const
  VERSION 0.7.0
  LANGUAGES CXX
)

include_directories(include)

set(CMAKE_CXX_STANDARD 17)

add_executable(test_math_const src/test_math_const.cpp)
target_include_directories(test_math_const PRIVATE include)

add_executable(test_ext_math_const src/test_ext_math_const.cpp)
target_include_directories(test_ext_math_const PRIVATE include)

