
#include <numbers>
#include <complex>
#include <iostream>
#include <string>
#include <type_traits>

#include <emsr/float128_io.h>
#include <emsr/math_constants_float128.h>


int
main()
{
  std::cout.precision(34);

  auto pi = emsr::pi_v<__float128>;
  std::cout << pi << '\n';
}

