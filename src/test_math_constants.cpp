/**
 *
 */

#include <limits>
#include <math>
#include <iostream>
#include <iomanip>
#include <typeinfo>
#include <typeindex>
#include <string>
#include <ext/math_constants.h>

template<typename _Tp>
  void
  test_std_math_constants()
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

template<typename _Tp>
  void
  test_ext_math_constants()
  {
    using namespace __gnu_cxx::math;

    auto name{std::type_index{typeid(_Tp{})}.name()};

    const auto prec = std::numeric_limits<_Tp>::digits10;
    std::cout.precision(prec);
    const auto wd = 8 + std::cout.precision();

    std::cout << '\n';
    std::cout << "type                      : " << std::quoted(name) << '\n';

    std::cout << "  4 pi/3                   : "
	      << std::setw(wd) << __4_pi_v<_Tp> << '\n';

    std::cout << "  4 pi/3                   : "
	      << std::setw(wd) << __4_pi_div_3_v<_Tp> << '\n';

    std::cout << "  2 pi                     : "
	      << std::setw(wd) << __2_pi_v<_Tp> << '\n';

    std::cout << "* pi                       : "
	      << std::setw(wd) << __pi_v<_Tp> << '\n';

    std::cout << "  pi/2                     : "
	      << std::setw(wd) << __pi_half_v<_Tp> << '\n';

    std::cout << "  pi/3                     : "
	      << std::setw(wd) << __pi_third_v<_Tp> << '\n';

    std::cout << "  pi/4                     : "
	      << std::setw(wd) << __pi_quarter_v<_Tp> << '\n';

    std::cout << "  sqrt(pi)                 : "
	      << std::setw(wd) << __root_pi_v<_Tp> << '\n';

    std::cout << "  cbrt(pi)                 : "
	      << std::setw(wd) << __cbrt_pi_v<_Tp> << '\n';

    std::cout << "  sqrt(pi/2)               : "
	      << std::setw(wd) << __root_pi_div_2_v<_Tp> << '\n';

    std::cout << "* 1/pi                     : "
	      << std::setw(wd) << __one_div_pi_v<_Tp> << '\n';

    std::cout << "  1/2pi                    : "
	      << std::setw(wd) << __one_div_2_pi_v<_Tp> << '\n';

    std::cout << "  2/pi                     : "
	      << std::setw(wd) << __two_div_pi_v<_Tp> << '\n';

    std::cout << "* 1/sqrt(pi)               : "
	      << std::setw(wd) << __one_div_root_pi_v<_Tp> << '\n';

    std::cout << "  2/sqrt(pi)               : "
	      << std::setw(wd) << __two_div_root_pi_v<_Tp> << '\n';

    std::cout << "  pi^2/6                   : "
	      << std::setw(wd) << __pi_sqr_div_6_v<_Tp> << '\n';

    std::cout << "  sqrt(2 pi)               : "
	      << std::setw(wd) << __root_2_pi_v<_Tp> << '\n';

    std::cout << "  ln(sqrt(2 pi))           : "
	      << std::setw(wd) << __ln_root_2_pi_v<_Tp> << '\n';

    std::cout << "  rad2deg                  : "
	      << std::setw(wd) << __deg_v<_Tp> << '\n';

    std::cout << "  deg2rad                  : "
	      << std::setw(wd) << __rad_v<_Tp> << '\n';

    std::cout << "* Euler's number e         : "
	      << std::setw(wd) << __e_v<_Tp> << '\n';

    std::cout << "  1/e                      : "
	      << std::setw(wd) << __one_div_e_v<_Tp> << '\n';

    std::cout << "* log_2(e)                 : "
	      << std::setw(wd) << __log2_e_v<_Tp> << '\n';

    std::cout << "* log_10(e)                : "
	      << std::setw(wd) << __log10_e_v<_Tp> << '\n';

    std::cout << "* ln(2)                    : "
	      << std::setw(wd) << __ln_2_v<_Tp> << '\n';

    std::cout << "  ln(3)                    : "
	      << std::setw(wd) << __ln_3_v<_Tp> << '\n';

    std::cout << "* ln(10)                   : "
	      << std::setw(wd) << __ln_10_v<_Tp> << '\n';

    std::cout << "  log(pi)                  : "
	      << std::setw(wd) << __ln_pi_v<_Tp> << '\n';

    std::cout << "* Euler-Mascheroni gamma_E : "
	      << std::setw(wd) << __gamma_e_v<_Tp> << '\n';

    std::cout << "* Golden Ratio phi         : "
	      << std::setw(wd) << __phi_v<_Tp> << '\n';

    std::cout << "* Catalan's constant       : "
	      << std::setw(wd) << __catalan_v<_Tp> << '\n';

    std::cout << "* sqrt(2)                  : "
	      << std::setw(wd) << __root_2_v<_Tp> << '\n';

    std::cout << "* sqrt(3)                  : "
	      << std::setw(wd) << __root_3_v<_Tp> << '\n';

    std::cout << "  sqrt(3)                  : "
	      << std::setw(wd) << __root_3_div_2_v<_Tp> << '\n';

    std::cout << "  sqrt(5)                  : "
	      << std::setw(wd) << __root_5_v<_Tp> << '\n';

    std::cout << "  sqrt(7)                  : "
	      << std::setw(wd) << __root_7_v<_Tp> << '\n';

    std::cout << "  cbrt(3)                  : "
	      << std::setw(wd) << __cbrt_3_v<_Tp> << '\n';

    std::cout << "1/sqrt(2)                  : "
	      << std::setw(wd) << __one_div_root_2_v<_Tp> << '\n';
  }

int
main()
{
  test_std_math_constants<float>();
  test_std_math_constants<double>();
  test_std_math_constants<long double>();
}
