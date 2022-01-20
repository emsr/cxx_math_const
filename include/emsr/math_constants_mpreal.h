
// Copyright (C) 2013-2019 Free Software Foundation, Inc.
// Copyright (C) 2021-2022 Edward M. Smith-Rowland
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 3 of the License, or (at
// your option) any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file include/emsr/math_constants_mpreal.h
 */

#ifndef EMSR_MATH_CONSTANTS_MPREAL_H
#define EMSR_MATH_CONSTANTS_MPREAL_H 1

#if __cplusplus < 201703L
# error "Require C++17 for math constants"
#else

#include <emsr/math_constants.h>
#include <mpreal.h>

// This first block of numbers is available in <numbers>, std::numbers:: in C++20.

namespace emsr
{

  template<>
    inline mpfr::mpreal
    e_v<mpfr::mpreal>
      = mpfr::exp(mpfr::mpreal(1, mpfr::mpreal::get_default_prec()));

  template<>
    inline mpfr::mpreal
    log2e_v<mpfr::mpreal>
      = mpfr::log2(mpfr::exp(mpfr::mpreal(1, mpfr::mpreal::get_default_prec())));

  template<>
    inline mpfr::mpreal
    log10e_v<mpfr::mpreal>
      = mpfr::log10(mpfr::exp(mpfr::mpreal(1, mpfr::mpreal::get_default_prec())));

  template<>
    inline mpfr::mpreal
    pi_v<mpfr::mpreal>
      = mpfr::const_pi(mpfr::mpreal::get_default_prec());

  template<>
    inline mpfr::mpreal
    inv_pi_v<mpfr::mpreal>
      = 1 / mpfr::const_pi(mpfr::mpreal::get_default_prec());

  template<>
    inline mpfr::mpreal
    inv_sqrtpi_v<mpfr::mpreal>
      = 1 / mpfr::sqrt(mpfr::const_pi(mpfr::mpreal::get_default_prec()));

  template<>
    inline mpfr::mpreal
    ln2_v<mpfr::mpreal>
      = mpfr::const_log2(mpfr::mpreal::get_default_prec());

  template<>
    inline mpfr::mpreal
    ln10_v<mpfr::mpreal>
      = mpfr::log(mpfr::mpreal(10, mpfr::mpreal::get_default_prec()));

  template<>
    inline mpfr::mpreal
    sqrt2_v<mpfr::mpreal>
      = mpfr::sqrt(mpfr::mpreal(2, mpfr::mpreal::get_default_prec()));

  template<>
    inline mpfr::mpreal
    sqrt3_v<mpfr::mpreal>
      = mpfr::sqrt(mpfr::mpreal(3, mpfr::mpreal::get_default_prec()));

  template<>
    inline mpfr::mpreal
    inv_sqrt3_v<mpfr::mpreal>
      = 1 / mpfr::sqrt(mpfr::mpreal(3, mpfr::mpreal::get_default_prec()));

  template<>
    inline mpfr::mpreal
    egamma_v<mpfr::mpreal>
      = mpfr::const_euler(mpfr::mpreal::get_default_prec());

  template<>
    inline mpfr::mpreal
    phi_v<mpfr::mpreal>
      = (1 + mpfr::sqrt(mpfr::mpreal(5, mpfr::mpreal::get_default_prec()))) / 2;

} // namespace emsr

// End 'std' numbers; begin 'extended' numbers.

namespace emsr
{

  template<>
    inline mpfr::mpreal
    pi_4_v<mpfr::mpreal>
      = 4 * mpfr::const_pi(mpfr::mpreal::get_default_prec());

  template<>
    inline mpfr::mpreal
    pi_4_div_3_v<mpfr::mpreal>
      = 4 * mpfr::const_pi(mpfr::mpreal::get_default_prec()) / 3;

  template<>
    inline mpfr::mpreal
    tau_v<mpfr::mpreal>
      = 2 * mpfr::const_pi(mpfr::mpreal::get_default_prec());

  template<>
    inline mpfr::mpreal
    sqrtpi_v<mpfr::mpreal>
      = mpfr::sqrt(mpfr::const_pi(mpfr::mpreal::get_default_prec()));

  template<>
    inline mpfr::mpreal
    cbrtpi_v<mpfr::mpreal>
      = mpfr::cbrt(mpfr::const_pi(mpfr::mpreal::get_default_prec()));

  template<>
    inline mpfr::mpreal
    sqrtpi_div_2_v<mpfr::mpreal>
      = mpfr::sqrt(mpfr::const_pi(mpfr::mpreal::get_default_prec()) / 2);

  template<>
    inline mpfr::mpreal
    inv_2_pi_v<mpfr::mpreal>
      = 1 / (2 * mpfr::const_pi(mpfr::mpreal::get_default_prec()));

  template<>
    inline mpfr::mpreal
    two_div_pi_v<mpfr::mpreal>
      = 2 / mpfr::const_pi(mpfr::mpreal::get_default_prec());

  template<>
    inline mpfr::mpreal
    two_div_sqrtpi_v<mpfr::mpreal>
      = 2 / mpfr::sqrt(mpfr::const_pi(mpfr::mpreal::get_default_prec()));

  template<>
    inline mpfr::mpreal
    pi_sqr_div_6_v<mpfr::mpreal>
      = mpfr::pow(mpfr::const_pi(mpfr::mpreal::get_default_prec()), 2);//pi_v * pi_v / 6;
   

  template<>
    inline mpfr::mpreal
    sqrt2_pi_v<mpfr::mpreal>
      = mpfr::sqrt(2 * mpfr::const_pi(mpfr::mpreal::get_default_prec()));
   

  template<>
    inline mpfr::mpreal
    lnsqrt2_pi_v<mpfr::mpreal>
      = mpfr::log(mpfr::sqrt(2 * mpfr::const_pi(mpfr::mpreal::get_default_prec())));
   

  template<>
    inline mpfr::mpreal
    deg_v<mpfr::mpreal>
      = 180 / mpfr::const_pi(mpfr::mpreal::get_default_prec());

  template<>
    inline mpfr::mpreal
    rad_v<mpfr::mpreal>
      = mpfr::const_pi(mpfr::mpreal::get_default_prec()) / 180;

  template<>
    inline mpfr::mpreal
    inv_e_v<mpfr::mpreal>
      = 1 / mpfr::exp(mpfr::mpreal(1, mpfr::mpreal::get_default_prec()));

  template<>
    inline mpfr::mpreal
    ln3_v<mpfr::mpreal>
      = mpfr::log(mpfr::mpreal(3, mpfr::mpreal::get_default_prec()));

  template<>
    inline mpfr::mpreal
    lnpi_v<mpfr::mpreal>
      = mpfr::log(mpfr::const_pi(mpfr::mpreal::get_default_prec()));

  template<>
    inline mpfr::mpreal
    catalan_v<mpfr::mpreal>
      = mpfr::const_catalan(mpfr::mpreal::get_default_prec());

  template<>
    inline mpfr::mpreal
    sqrt3_div_2_v<mpfr::mpreal>
      = mpfr::sqrt(mpfr::mpreal(3, mpfr::mpreal::get_default_prec())) / 2;

  template<>
    inline mpfr::mpreal
    sqrt5_v<mpfr::mpreal>
      = mpfr::sqrt(mpfr::mpreal(5, mpfr::mpreal::get_default_prec()));

  template<>
    inline mpfr::mpreal
    sqrt7_v<mpfr::mpreal>
      = mpfr::sqrt(mpfr::mpreal(7, mpfr::mpreal::get_default_prec()));

  template<>
    inline mpfr::mpreal
    cbrt3_v<mpfr::mpreal>
      = mpfr::cbrt(mpfr::mpreal(3, mpfr::mpreal::get_default_prec()));

  template<>
    inline mpfr::mpreal
    inv_sqrt2_v<mpfr::mpreal>
      = 1 / mpfr::sqrt(mpfr::mpreal(2, mpfr::mpreal::get_default_prec()));

} // namespace emsr

#endif // C++17

#endif // EMSR_MATH_CONSTANTS_MPREAL_H
