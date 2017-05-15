/*
g++ -std=c++14 -o test_cmath_const test_cmath_const.cpp
*/

#include "cmath_const.h"

template<typename Real>
  void
  test_cmath_const()
  {
  }

#ifdef M_PI
#undef M_PI
constexpr auto M_PI = std::constants::math_constants::m_pi<>;
#endif

int
main()
{
  using namespace std::constants::math_constants;
  auto poo = M_PI;
}
