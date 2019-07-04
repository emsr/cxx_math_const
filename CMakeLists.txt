cmake_minimum_required (VERSION 3.2.0)

project(
  cxx_math_constants
  VERSION 0.7.0
  LANGUAGES CXX
)

include_directories(include)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

if (NOT MSVC)
  if (NOT CMAKE_CROSSCOMPILING)
    set(CMAKE_INSTALL_RPATH_USE_LINK_PATH TRUE)
  endif ()
endif ()

enable_testing()

add_library(cxx_math_constants INTERFACE)
target_include_directories(cxx_math_constants INTERFACE include)

add_executable(test_math_const src/test_math_const.cpp)
target_link_libraries(test_math_const cxx_math_constants)
add_test(NAME run_test_math_const COMMAND bash -c "./bin/test_math_const > output/test_math_const.txt")

add_executable(test_ext_math_const src/test_ext_math_const.cpp)
target_link_libraries(test_ext_math_const cxx_math_constants)
add_test(NAME run_test_ext_math_const COMMAND bash -c "./bin/test_ext_math_const > output/test_ext_math_const.txt")

add_executable(test_math_const_float128 src/test_math_const_float128.cpp)
target_include_directories(test_math_const_float128
   PRIVATE ../tr29124_test/include ../tr29124_test/cxx_complex_utils/include ../tr29124_test/cxx_fp_utils/include)
target_link_libraries(test_math_const_float128 cxx_math_constants quadmath)
add_test(NAME run_test_math_const_float128 COMMAND bash -c "./bin/test_math_const_float128 > output/test_math_const_float128.txt")

find_package(Doxygen)
if (DOXYGEN_FOUND)
  add_custom_target(docs_math_constants
    COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_CURRENT_BINARY_DIR}/docs
    COMMAND ${DOXYGEN_EXECUTABLE} ${DOXYGEN_OUTPUT}
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
    COMMENT "Generating API documentation for cxx_math_constants" VERBATIM
  )
endif (DOXYGEN_FOUND)
