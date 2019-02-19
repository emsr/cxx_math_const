/*
g++ -std=c++17 -o test_ext_cmath_const test_ext_cmath_const.cpp
*/

#include <ext/cmath>

template<typename Real>
  void
  test_ext_cmath_const()
  {
  }

int
main()
{
  using namespace __gnu_cxx::constants;
  auto foo = math_constants<double>::__pi;
}

