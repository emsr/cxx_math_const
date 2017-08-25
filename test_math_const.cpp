/*
$HOME/bin/bin/g++ -std=c++17 -g -o test_math_const test_math_const.cpp
./test_math_const > test_math_const.txt
*/

#include "math_const.h"
#include <complex>
#include <iostream>
#include <string>
#include <type_traits>

struct sfloat : public std::string
{
  sfloat(float f)
  : std::string(std::to_string(f))
  { }
};

template<typename _Tp, typename _Flt>
  struct
  __math_constant_t : std::enable_if<std::is_constructible_v<_Tp, _Flt>
				  && std::is_floating_point_v<_Flt>, _Flt>
  { };


int
main()
{
  using namespace std::math_constants;

  auto pi = std::math_constants::pi_v<std::complex<double>>;
  std::cout << pi << '\n';

  auto glaisher = std::math_constants::glaisher_v<sfloat>;
  std::cout << glaisher << '\n';
}
