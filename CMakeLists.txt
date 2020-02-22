cmake_minimum_required (VERSION 3.2.0)

project(
  cxx_math_constants
  VERSION 0.7.0
  LANGUAGES CXX
)

include_directories(include)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -Wno-psabi -Wno-deprecated-declarations -Wold-style-cast")

if (NOT MSVC)
  if (NOT CMAKE_CROSSCOMPILING)
    set(CMAKE_INSTALL_RPATH_USE_LINK_PATH TRUE)
  endif ()
endif ()

enable_testing()

add_custom_target(make_cxx_math_constants_output_dir ALL
  COMMAND ${CMAKE_COMMAND} -E make_directory output)

add_library(cxx_math_constants INTERFACE)
target_include_directories(cxx_math_constants INTERFACE include)

add_executable(test_math_constants src/test_math_constants.cpp)
target_include_directories(test_math_constants PRIVATE
  ../cxx_float128/include
  ../cxx_complex_utils/include # ../include/complex needs this.
  ../cxx_fp_utils/include # then this...
  ../include
  ../3rdparty/mpreal)
target_link_libraries(test_math_constants cxx_math_constants cxx_numeric_limits quadmath mpfr gmp)
add_test(NAME run_test_math_constants COMMAND bash -c "${CMAKE_BINARY_DIR}/bin/test_math_constants > output/test_math_constants.txt")

add_executable(test_math_const src/test_math_const.cpp)
target_link_libraries(test_math_const cxx_math_constants)
add_test(NAME run_test_math_const COMMAND bash -c "${CMAKE_BINARY_DIR}/bin/test_math_const > output/test_math_const.txt")

add_executable(test_ext_math_const src/test_ext_math_const.cpp)
target_link_libraries(test_ext_math_const cxx_math_constants)
add_test(NAME run_test_ext_math_const COMMAND bash -c "${CMAKE_BINARY_DIR}/bin/test_ext_math_const > output/test_ext_math_const.txt")

add_executable(test_math_const_float128 src/test_math_const_float128.cpp)
target_include_directories(test_math_const_float128 PRIVATE
  ../include
  ../cxx_complex_utils/include
  ../cxx_fp_utils/include
  ../cxx_float128/include)
target_link_libraries(test_math_const_float128 cxx_math_constants quadmath)
add_test(NAME run_test_math_const_float128 COMMAND bash -c "${CMAKE_BINARY_DIR}/bin/test_math_const_float128 > output/test_math_const_float128.txt")

find_package(Doxygen)
if (DOXYGEN_FOUND)
  add_custom_target(docs_cxx_math_constants
    COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_CURRENT_BINARY_DIR}/docs
    COMMAND ${DOXYGEN_EXECUTABLE} ${DOXYGEN_OUTPUT}
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
    COMMENT "Generating API documentation for cxx_math_constants" VERBATIM
  )
endif (DOXYGEN_FOUND)
