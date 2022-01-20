
#include <iostream>
#include <iomanip>
#include <typeinfo>
#include <typeindex>
#include <string>

//#include <emsr/numeric_limits.h>
//#include <emsr/numeric_limits_float128.h>
#include <bits/numeric_limits.h>

//#include <emsr/float128_io.h>
//#include <mpreal.h>

#include <emsr/math_constants.h>
#include <emsr/math_constants_float128.h>
#include <emsr/math_constants_mpreal.h>

template<typename _Tp>
  void
  test_const(_Tp proto)
  {
    auto name{std::type_index{typeid(proto)}.name()};

    auto prec = __gnu_cxx::__digits10(proto);
    auto wd = 8 + prec;
    auto lprec = std::numeric_limits<long double>::digits10;
    auto lwd = 8 + lprec;

    std::cout << '\n';
    std::cout << "type                      : " << std::quoted(name) << '\n';
    std::cout << " 4 pi/3                   : "
	      << std::setprecision(lprec) << std::setw(lwd) << emsr::pi_4
	      << std::setprecision(prec) << std::setw(wd) << emsr::pi_4_v<_Tp> << '\n';
    std::cout << " 4 pi/3                   : "
	      << std::setprecision(lprec) << std::setw(lwd) << emsr::pi_4_div_3
	      << std::setprecision(prec) << std::setw(wd) << emsr::pi_4_div_3_v<_Tp> << '\n';
    std::cout << " 2 pi                     : "
	      << std::setprecision(lprec) << std::setw(lwd) << emsr::tau
	      << std::setprecision(prec) << std::setw(wd) << emsr::tau_v<_Tp> << '\n';
    std::cout << " pi                       : "
	      << std::setprecision(lprec) << std::setw(lwd) << emsr::pi
	      << std::setprecision(prec) << std::setw(wd) << emsr::pi_v<_Tp> << '\n';
    std::cout << " sqrt(pi)                 : "
	      << std::setprecision(lprec) << std::setw(lwd) << emsr::sqrtpi
	      << std::setprecision(prec) << std::setw(wd) << emsr::sqrtpi_v<_Tp> << '\n';
    std::cout << " cbrt(pi)                 : "
	      << std::setprecision(lprec) << std::setw(lwd) << emsr::cbrtpi
	      << std::setprecision(prec) << std::setw(wd) << emsr::cbrtpi_v<_Tp> << '\n';
    std::cout << " 1/ pi                    : "
	      << std::setprecision(lprec) << std::setw(lwd) << emsr::inv_pi
	      << std::setprecision(prec) << std::setw(wd) << emsr::inv_pi_v<_Tp> << '\n';
    std::cout << " 1/ 2pi                    : "
	      << std::setprecision(lprec) << std::setw(lwd) << emsr::inv_tau
	      << std::setprecision(prec) << std::setw(wd) << emsr::inv_tau_v<_Tp> << '\n';
    std::cout << " 2/ pi                    : "
	      << std::setprecision(lprec) << std::setw(lwd) << emsr::two_div_pi
	      << std::setprecision(prec) << std::setw(wd) << emsr::two_div_pi_v<_Tp> << '\n';
    std::cout << " 2/ sqrt(pi)              : "
	      << std::setprecision(lprec) << std::setw(lwd) << emsr::two_div_sqrtpi
	      << std::setprecision(prec) << std::setw(wd) << emsr::two_div_sqrtpi_v<_Tp> << '\n';
    std::cout << " pi^2/6                   : "
	      << std::setprecision(lprec) << std::setw(lwd) << emsr::pi_sqr_div_6
	      << std::setprecision(prec) << std::setw(wd) << emsr::pi_sqr_div_6_v<_Tp> << '\n';
    std::cout << " sqrt(2 pi)               : "
	      << std::setprecision(lprec) << std::setw(lwd) << emsr::sqrttau
	      << std::setprecision(prec) << std::setw(wd) << emsr::sqrttau_v<_Tp> << '\n';
    std::cout << " ln(sqrt(2 pi))           : "
	      << std::setprecision(lprec) << std::setw(lwd) << emsr::lnsqrttau
	      << std::setprecision(prec) << std::setw(wd) << emsr::lnsqrttau_v<_Tp> << '\n';
    std::cout << " rad2deg                  : "
	      << std::setprecision(lprec) << std::setw(lwd) << emsr::deg
	      << std::setprecision(prec) << std::setw(wd) << emsr::deg_v<_Tp> << '\n';
    std::cout << " deg2rad                  : "
	      << std::setprecision(lprec) << std::setw(lwd) << emsr::rad
	      << std::setprecision(prec) << std::setw(wd) << emsr::rad_v<_Tp> << '\n';
    std::cout << " Euler's number e         : "
	      << std::setprecision(lprec) << std::setw(lwd) << emsr::e
	      << std::setprecision(prec) << std::setw(wd) << emsr::e_v<_Tp> << '\n';
    std::cout << " 1/e                      : "
	      << std::setprecision(lprec) << std::setw(lwd) << emsr::inv_e
	      << std::setprecision(prec) << std::setw(wd) << emsr::inv_e_v<_Tp> << '\n';
    std::cout << " log_2(e)                 : "
	      << std::setprecision(lprec) << std::setw(lwd) << emsr::log2e
	      << std::setprecision(prec) << std::setw(wd) << emsr::log2e_v<_Tp> << '\n';
    std::cout << " log_10(e)                : "
	      << std::setprecision(lprec) << std::setw(lwd) << emsr::log10e
	      << std::setprecision(prec) << std::setw(wd) << emsr::log10e_v<_Tp> << '\n';
    std::cout << " ln(2)                    : "
	      << std::setprecision(lprec) << std::setw(lwd) << emsr::ln2
	      << std::setprecision(prec) << std::setw(wd) << emsr::ln2_v<_Tp> << '\n';
    std::cout << " ln(3)                    : "
	      << std::setprecision(lprec) << std::setw(lwd) << emsr::ln3
	      << std::setprecision(prec) << std::setw(wd) << emsr::ln3_v<_Tp> << '\n';
    std::cout << " ln(10)                   : "
	      << std::setprecision(lprec) << std::setw(lwd) << emsr::ln10
	      << std::setprecision(prec) << std::setw(wd) << emsr::ln10_v<_Tp> << '\n';
    std::cout << " log(pi)                  : "
	      << std::setprecision(lprec) << std::setw(lwd) << emsr::lnpi
	      << std::setprecision(prec) << std::setw(wd) << emsr::lnpi_v<_Tp> << '\n';
    std::cout << " Euler-Mascheroni gamma_E : "
	      << std::setprecision(lprec) << std::setw(lwd) << emsr::egamma
	      << std::setprecision(prec) << std::setw(wd) << emsr::egamma_v<_Tp> << '\n';
    std::cout << " Golden Ratio phi         : "
	      << std::setprecision(lprec) << std::setw(lwd) << emsr::phi
	      << std::setprecision(prec) << std::setw(wd) << emsr::phi_v<_Tp> << '\n';
    std::cout << " Catalan's constant       : "
	      << std::setprecision(lprec) << std::setw(lwd) << emsr::catalan
	      << std::setprecision(prec) << std::setw(wd) << emsr::catalan_v<_Tp> << '\n';
    std::cout << " sqrt(2)                  : "
	      << std::setprecision(lprec) << std::setw(lwd) << emsr::sqrt2
	      << std::setprecision(prec) << std::setw(wd) << emsr::sqrt2_v<_Tp> << '\n';
    std::cout << " sqrt(3)                  : "
	      << std::setprecision(lprec) << std::setw(lwd) << emsr::sqrt3
	      << std::setprecision(prec) << std::setw(wd) << emsr::sqrt3_v<_Tp> << '\n';
    std::cout << " sqrt(3)                  : "
	      << std::setprecision(lprec) << std::setw(lwd) << emsr::sqrt3_div_2
	      << std::setprecision(prec) << std::setw(wd) << emsr::sqrt3_div_2_v<_Tp> << '\n';
    std::cout << " sqrt(5)                  : "
	      << std::setprecision(lprec) << std::setw(lwd) << emsr::sqrt5
	      << std::setprecision(prec) << std::setw(wd) << emsr::sqrt5_v<_Tp> << '\n';
    std::cout << " sqrt(7)                  : "
	      << std::setprecision(lprec) << std::setw(lwd) << emsr::sqrt7
	      << std::setprecision(prec) << std::setw(wd) << emsr::sqrt7_v<_Tp> << '\n';
    std::cout << " cbrt(3)                  : "
	      << std::setprecision(lprec) << std::setw(lwd) << emsr::cbrt3
	      << std::setprecision(prec) << std::setw(wd) << emsr::cbrt3_v<_Tp> << '\n';
    std::cout << "1/ sqrt(2)                : "
	      << std::setprecision(lprec) << std::setw(lwd) << emsr::inv_sqrt2
	      << std::setprecision(prec) << std::setw(wd) << emsr::inv_sqrt2_v<_Tp> << '\n';
  }

int
main()
{
  test_const(1.0f);
  test_const(1.0);
  test_const(1.0l);
  //wait for float128 tools//test_const(1.0q);
  //test_const(mpfr::mpreal(1, 256));
}
