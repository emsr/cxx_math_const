/**
 *
 */

#include <numbers>
#include <limits>
#include <iostream>
#include <iomanip>
#include <typeinfo>
#include <typeindex>
#include <string>

template<typename _Tp>
  void
  test_math_constants()
  {
    using namespace std::math;

    auto name{std::type_index{typeid(_Tp{})}.name()};

    const auto prec = std::numeric_limits<_Tp>::digits10;
    std::cout.precision(prec);
    const auto wd = 8 + std::cout.precision();

    std::cout << '\n';
    std::cout << "type                      : " << std::quoted(name) << '\n';

    std::cout << "  e                        : "
	      << std::setw(wd) << e_v<_Tp> << '\n';

    std::cout << "  log_2(e)                 : "
	      << std::setw(wd) << log2e_v<_Tp> << '\n';

    std::cout << "  log_10(e)                : "
	      << std::setw(wd) << log10e_v<_Tp> << '\n';

    std::cout << "  pi                       : "
	      << std::setw(wd) << pi_v<_Tp> << '\n';

    std::cout << "  1/pi                     : "
	      << std::setw(wd) << inv_pi_v<_Tp> << '\n';

    std::cout << "  1/sqrt(pi)               : "
	      << std::setw(wd) << inv_sqrtpi_v<_Tp> << '\n';

    std::cout << "  ln(2)                    : "
	      << std::setw(wd) << ln2_v<_Tp> << '\n';

    std::cout << "  ln(10)                   : "
	      << std::setw(wd) << ln10_v<_Tp> << '\n';

    std::cout << "  sqrt(2)                  : "
	      << std::setw(wd) << sqrt2_v<_Tp> << '\n';

    std::cout << "  sqrt(3)                  : "
	      << std::setw(wd) << sqrt3_v<_Tp> << '\n';

    std::cout << "  1/sqrt(3)                : "
	      << std::setw(wd) << inv_sqrt3_v<_Tp> << '\n';

    std::cout << "  Euler-Mascheroni gamma_E : "
	      << std::setw(wd) << egamma_v<_Tp> << '\n';

    std::cout << "  Golden Ratio phi         : "
	      << std::setw(wd) << phi_v<_Tp> << '\n';
  }

int
main()
{
  test_math_constants<float>();
  test_math_constants<double>();
  test_math_constants<long double>();
}
