cmake_minimum_required (VERSION 3.2.0)

project(
  math_const
  VERSION 0.7.0
  LANGUAGES CXX
)

include_directories(include)

set(CMAKE_CXX_STANDARD 17)

add_library(cxx_math_constants INTERFACE)
target_include_directories(cxx_math_constants INTERFACE include)

add_executable(test_math_const src/test_math_const.cpp)
target_link_libraries(test_math_const cxx_math_constants)

add_executable(test_ext_math_const src/test_ext_math_const.cpp)
target_link_libraries(test_ext_math_const cxx_math_constants)

