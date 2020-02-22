
#include <numbers>
#include <complex>
#include <iostream>
#include <string>
#include <type_traits>

#if __cpp_lib_type_trait_variable_templates < 201510L
namespace std
{
  template<typename _Tp, typename... _Args>
    constexpr bool is_constructible_v = is_constructible<_Tp, _Args...>::value;
  template<typename _Flt>
    constexpr bool is_floating_point_v = is_floating_point<_Flt>::value;
}
#endif

// This can't work as constexpr.
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
  using namespace std::numbers;

  auto pi = std::numbers::pi_v<std::complex<double>>;
  std::cout << pi << '\n';
}

