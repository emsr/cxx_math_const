/*
g++ -std=c++17 -o test_ext_math_const test_ext_math_const.cpp
*/

#include <ext/math>

template<typename Real>
  void
  test_ext_math_const()
  {
  }

int
main()
{
  using namespace std::constants;
  auto foo = math_constants<double>::__pi;
}

