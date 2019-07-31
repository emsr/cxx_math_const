/**
 *
 */
#include <bits/numeric_limits.h>
#include <ext/numeric_limits_float128.h>
#include <mpreal.h>
#include <ext/float128_io.h>
#include <ext/math_constants.h>
#include <ext/math_constants_float128.h>
#include <ext/math_constants_mpreal.h>

#include <iostream>
#include <iomanip>
#include <typeinfo>
#include <typeindex>
#include <string>

template<typename _Tp>
  void
  test_const(_Tp proto)
  {
    using namespace __gnu_cxx::numbers;

    auto name{std::type_index{typeid(proto)}.name()};

    auto prec = __gnu_cxx::__digits10(proto);
    auto wd = 8 + prec;
    auto lprec = std::numeric_limits<long double>::digits10;
    auto lwd = 8 + lprec;

    std::cout << '\n';
    std::cout << "type                      : " << std::quoted(name) << '\n';
    std::cout << " 4 pi/3                   : "
	      << std::setprecision(lprec) << std::setw(lwd) << __4_pi
	      << std::setprecision(prec) << std::setw(wd) << __gnu_cxx::numbers::__4_pi_v<_Tp> << '\n';
    std::cout << " 4 pi/3                   : "
	      << std::setprecision(lprec) << std::setw(lwd) << __4_pi_div_3
	      << std::setprecision(prec) << std::setw(wd) << __gnu_cxx::numbers::__4_pi_div_3_v<_Tp> << '\n';
    std::cout << " 2 pi                     : "
	      << std::setprecision(lprec) << std::setw(lwd) << __2_pi
	      << std::setprecision(prec) << std::setw(wd) << __gnu_cxx::numbers::__2_pi_v<_Tp> << '\n';
    std::cout << " pi                       : "
	      << std::setprecision(lprec) << std::setw(lwd) << __pi
	      << std::setprecision(prec) << std::setw(wd) << __gnu_cxx::numbers::__pi_v<_Tp> << '\n';
    std::cout << " pi/2                     : "
	      << std::setprecision(lprec) << std::setw(lwd) << __pi_half
	      << std::setprecision(prec) << std::setw(wd) << __gnu_cxx::numbers::__pi_half_v<_Tp> << '\n';
    std::cout << " pi/3                     : "
	      << std::setprecision(lprec) << std::setw(lwd) << __pi_third
	      << std::setprecision(prec) << std::setw(wd) << __gnu_cxx::numbers::__pi_third_v<_Tp> << '\n';
    std::cout << " pi/4                     : "
	      << std::setprecision(lprec) << std::setw(lwd) << __pi_quarter
	      << std::setprecision(prec) << std::setw(wd) << __gnu_cxx::numbers::__pi_quarter_v<_Tp> << '\n';
    std::cout << " sqrt(pi)                 : "
	      << std::setprecision(lprec) << std::setw(lwd) << __root_pi
	      << std::setprecision(prec) << std::setw(wd) << __gnu_cxx::numbers::__root_pi_v<_Tp> << '\n';
    std::cout << " cbrt(pi)                 : "
	      << std::setprecision(lprec) << std::setw(lwd) << __cbrt_pi
	      << std::setprecision(prec) << std::setw(wd) << __gnu_cxx::numbers::__cbrt_pi_v<_Tp> << '\n';
    std::cout << " sqrt(pi/2)               : "
	      << std::setprecision(lprec) << std::setw(lwd) << __root_pi_div_2
	      << std::setprecision(prec) << std::setw(wd) << __gnu_cxx::numbers::__root_pi_div_2_v<_Tp> << '\n';
    std::cout << " 1/ pi                    : "
	      << std::setprecision(lprec) << std::setw(lwd) << __one_div_pi
	      << std::setprecision(prec) << std::setw(wd) << __gnu_cxx::numbers::__one_div_pi_v<_Tp> << '\n';
    std::cout << " 1/ 2pi                    : "
	      << std::setprecision(lprec) << std::setw(lwd) << __one_div_2_pi
	      << std::setprecision(prec) << std::setw(wd) << __gnu_cxx::numbers::__one_div_2_pi_v<_Tp> << '\n';
    std::cout << " 2/ pi                    : "
	      << std::setprecision(lprec) << std::setw(lwd) << __two_div_pi
	      << std::setprecision(prec) << std::setw(wd) << __gnu_cxx::numbers::__two_div_pi_v<_Tp> << '\n';
    std::cout << " 2/ sqrt(pi)              : "
	      << std::setprecision(lprec) << std::setw(lwd) << __two_div_root_pi
	      << std::setprecision(prec) << std::setw(wd) << __gnu_cxx::numbers::__two_div_root_pi_v<_Tp> << '\n';
    std::cout << " pi^2/6                   : "
	      << std::setprecision(lprec) << std::setw(lwd) << __pi_sqr_div_6
	      << std::setprecision(prec) << std::setw(wd) << __gnu_cxx::numbers::__pi_sqr_div_6_v<_Tp> << '\n';
    std::cout << " sqrt(2 pi)               : "
	      << std::setprecision(lprec) << std::setw(lwd) << __root_2_pi
	      << std::setprecision(prec) << std::setw(wd) << __gnu_cxx::numbers::__root_2_pi_v<_Tp> << '\n';
    std::cout << " ln(sqrt(2 pi))           : "
	      << std::setprecision(lprec) << std::setw(lwd) << __ln_root_2_pi
	      << std::setprecision(prec) << std::setw(wd) << __gnu_cxx::numbers::__ln_root_2_pi_v<_Tp> << '\n';
    std::cout << " rad2deg                  : "
	      << std::setprecision(lprec) << std::setw(lwd) << __deg
	      << std::setprecision(prec) << std::setw(wd) << __gnu_cxx::numbers::__deg_v<_Tp> << '\n';
    std::cout << " deg2rad                  : "
	      << std::setprecision(lprec) << std::setw(lwd) << __rad
	      << std::setprecision(prec) << std::setw(wd) << __gnu_cxx::numbers::__rad_v<_Tp> << '\n';
    std::cout << " Euler's number e         : "
	      << std::setprecision(lprec) << std::setw(lwd) << __e
	      << std::setprecision(prec) << std::setw(wd) << __gnu_cxx::numbers::__e_v<_Tp> << '\n';
    std::cout << " 1/e                      : "
	      << std::setprecision(lprec) << std::setw(lwd) << __one_div_e
	      << std::setprecision(prec) << std::setw(wd) << __gnu_cxx::numbers::__one_div_e_v<_Tp> << '\n';
    std::cout << " log_2(e)                 : "
	      << std::setprecision(lprec) << std::setw(lwd) << __log2_e
	      << std::setprecision(prec) << std::setw(wd) << __gnu_cxx::numbers::__log2_e_v<_Tp> << '\n';
    std::cout << " log_10(e)                : "
	      << std::setprecision(lprec) << std::setw(lwd) << __log10_e
	      << std::setprecision(prec) << std::setw(wd) << __gnu_cxx::numbers::__log10_e_v<_Tp> << '\n';
    std::cout << " ln(2)                    : "
	      << std::setprecision(lprec) << std::setw(lwd) << __ln_2
	      << std::setprecision(prec) << std::setw(wd) << __gnu_cxx::numbers::__ln_2_v<_Tp> << '\n';
    std::cout << " ln(3)                    : "
	      << std::setprecision(lprec) << std::setw(lwd) << __ln_3
	      << std::setprecision(prec) << std::setw(wd) << __gnu_cxx::numbers::__ln_3_v<_Tp> << '\n';
    std::cout << " ln(10)                   : "
	      << std::setprecision(lprec) << std::setw(lwd) << __ln_10
	      << std::setprecision(prec) << std::setw(wd) << __gnu_cxx::numbers::__ln_10_v<_Tp> << '\n';
    std::cout << " log(pi)                  : "
	      << std::setprecision(lprec) << std::setw(lwd) << __ln_pi
	      << std::setprecision(prec) << std::setw(wd) << __gnu_cxx::numbers::__ln_pi_v<_Tp> << '\n';
    std::cout << " Euler-Mascheroni gamma_E : "
	      << std::setprecision(lprec) << std::setw(lwd) << __gamma_e
	      << std::setprecision(prec) << std::setw(wd) << __gnu_cxx::numbers::__gamma_e_v<_Tp> << '\n';
    std::cout << " Golden Ratio phi         : "
	      << std::setprecision(lprec) << std::setw(lwd) << __phi
	      << std::setprecision(prec) << std::setw(wd) << __gnu_cxx::numbers::__phi_v<_Tp> << '\n';
    std::cout << " Catalan's constant       : "
	      << std::setprecision(lprec) << std::setw(lwd) << __catalan
	      << std::setprecision(prec) << std::setw(wd) << __gnu_cxx::numbers::__catalan_v<_Tp> << '\n';
    std::cout << " sqrt(2)                  : "
	      << std::setprecision(lprec) << std::setw(lwd) << __root_2
	      << std::setprecision(prec) << std::setw(wd) << __gnu_cxx::numbers::__root_2_v<_Tp> << '\n';
    std::cout << " sqrt(3)                  : "
	      << std::setprecision(lprec) << std::setw(lwd) << __root_3
	      << std::setprecision(prec) << std::setw(wd) << __gnu_cxx::numbers::__root_3_v<_Tp> << '\n';
    std::cout << " sqrt(3)                  : "
	      << std::setprecision(lprec) << std::setw(lwd) << __root_3_div_2
	      << std::setprecision(prec) << std::setw(wd) << __gnu_cxx::numbers::__root_3_div_2_v<_Tp> << '\n';
    std::cout << " sqrt(5)                  : "
	      << std::setprecision(lprec) << std::setw(lwd) << __root_5
	      << std::setprecision(prec) << std::setw(wd) << __gnu_cxx::numbers::__root_5_v<_Tp> << '\n';
    std::cout << " sqrt(7)                  : "
	      << std::setprecision(lprec) << std::setw(lwd) << __root_7
	      << std::setprecision(prec) << std::setw(wd) << __gnu_cxx::numbers::__root_7_v<_Tp> << '\n';
    std::cout << " cbrt(3)                  : "
	      << std::setprecision(lprec) << std::setw(lwd) << __cbrt_3
	      << std::setprecision(prec) << std::setw(wd) << __gnu_cxx::numbers::__cbrt_3_v<_Tp> << '\n';
    std::cout << "1/ sqrt(2)                : "
	      << std::setprecision(lprec) << std::setw(lwd) << __one_div_root_2
	      << std::setprecision(prec) << std::setw(wd) << __gnu_cxx::numbers::__one_div_root_2_v<_Tp> << '\n';
  }

int
main()
{
  test_const(1.0f);
  test_const(1.0);
  test_const(1.0l);
  test_const(1.0q);
  //test_const(mpfr::mpreal(1, 256));
}
