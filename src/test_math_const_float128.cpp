/*
$HOME/bin/bin/g++ -std=c++17 -g -o test_math_const_float128 test_math_const_float128.cpp
./test_math_const_float128 > test_math_const_float128.txt
*/

#include <numbers>
#include <math_constants_float128.h>
#include <ext/math_constants_float128.h>
#include <complex>
#include <iostream>
#include <string>
#include <type_traits>
#include <ext/float128_io.h>


int
main()
{
  using namespace std::numbers;
  std::cout.precision(34);

  auto pi = std::numbers::pi_v<__float128>;
  std::cout << pi << '\n';
}

