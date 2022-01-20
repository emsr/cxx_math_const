
#include <complex>
#include <iostream>
#include <string>
#include <type_traits>
#include <numbers>

#include <emsr/math_constants.h>

// This can't work as constexpr.
struct sfloat : public std::string
{
  sfloat(float f)
  : std::string(std::to_string(f))
  { }
};

template<typename _Tp, typename _Flt>
  struct
  math_constant_t : std::enable_if<std::is_constructible_v<_Tp, _Flt>
				&& std::is_floating_point_v<_Flt>, _Flt>
  { };


int
main()
{
  auto pi = emsr::pi_v<std::complex<double>>;
  std::cout << pi << '\n';
}

