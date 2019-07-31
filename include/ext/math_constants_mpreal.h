// Math extensions -*- C++ -*-

// Copyright (C) 2013-2019 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

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

/** @file include/ext/math_constants_mpreal.h
 *  This file is a GNU extension to the Standard C++ Library.
 */

#ifndef _EXT_MATH_CONSTANTS_MPREAL_H
#define _EXT_MATH_CONSTANTS_MPREAL_H 1

#pragma GCC system_header

#if __cplusplus < 201103L
# include <bits/c++0x_warning.h>
#else

#include <math_constants_mpreal.h>

namespace __gnu_cxx _GLIBCXX_VISIBILITY(default)
{
namespace numbers
{
//_GLIBCXX_BEGIN_NAMESPACE_VERSION

  template<>
    inline mpfr::mpreal
    __4_pi_v
      = 4 * mpfr::const_pi(mpfr::mpreal::get_default_prec());

  template<>
    inline mpfr::mpreal
    __4_pi_div_3_v
      = 4 * mpfr::const_pi(mpfr::mpreal::get_default_prec()) / 3;

  template<>
    inline mpfr::mpreal
    __2_pi_v
      = 2 * mpfr::const_pi(mpfr::mpreal::get_default_prec());

  template<>
    inline mpfr::mpreal
    __pi_v
      = mpfr::const_pi(mpfr::mpreal::get_default_prec());

  template<>
    inline mpfr::mpreal
    __pi_half_v
      = mpfr::const_pi(mpfr::mpreal::get_default_prec()) / 2;

  template<>
    inline mpfr::mpreal
    __pi_third_v
      = mpfr::const_pi(mpfr::mpreal::get_default_prec()) / 3;

  template<>
    inline mpfr::mpreal
    __pi_quarter_v
      = mpfr::const_pi(mpfr::mpreal::get_default_prec()) / 4;

  template<>
    inline mpfr::mpreal
    __root_pi_v
      = mpfr::sqrt(mpfr::const_pi(mpfr::mpreal::get_default_prec()));

  template<>
    inline mpfr::mpreal
    __cbrt_pi_v
      = mpfr::cbrt(mpfr::const_pi(mpfr::mpreal::get_default_prec()));

  template<>
    inline mpfr::mpreal
    __root_pi_div_2_v
      = mpfr::sqrt(mpfr::const_pi(mpfr::mpreal::get_default_prec()) / 2);

  template<>
    inline mpfr::mpreal
    __one_div_pi_v
      = 1 / mpfr::const_pi(mpfr::mpreal::get_default_prec());

  template<>
    inline mpfr::mpreal
    __one_div_2_pi_v
      = 1 / (2 * mpfr::const_pi(mpfr::mpreal::get_default_prec()));

  template<>
    inline mpfr::mpreal
    __two_div_pi_v
      = 2 / mpfr::const_pi(mpfr::mpreal::get_default_prec());

  template<>
    inline mpfr::mpreal
    __two_div_root_pi_v
      = 2 / mpfr::sqrt(mpfr::const_pi(mpfr::mpreal::get_default_prec()));

  template<>
    inline mpfr::mpreal
    __pi_sqr_div_6_v
      = mpfr::pow(mpfr::const_pi(mpfr::mpreal::get_default_prec()), 2);//__pi_v * __pi_v / 6;
   

  template<>
    inline mpfr::mpreal
    __root_2_pi_v
      = mpfr::sqrt(2 * mpfr::const_pi(mpfr::mpreal::get_default_prec()));
   

  template<>
    inline mpfr::mpreal
    __ln_root_2_pi_v
      = mpfr::log(mpfr::sqrt(2 * mpfr::const_pi(mpfr::mpreal::get_default_prec())));
   

  template<>
    inline mpfr::mpreal
    __deg_v
      = 180 / mpfr::const_pi(mpfr::mpreal::get_default_prec());

  template<>
    inline mpfr::mpreal
    __rad_v
      = mpfr::const_pi(mpfr::mpreal::get_default_prec()) / 180;

  template<>
    inline mpfr::mpreal
    __e_v
      = mpfr::exp(mpfr::mpreal(1, mpfr::mpreal::get_default_prec()));

  template<>
    inline mpfr::mpreal
    __one_div_e_v
      = 1 / mpfr::exp(mpfr::mpreal(1, mpfr::mpreal::get_default_prec()));

  template<>
    inline mpfr::mpreal
    __log2_e_v
      = mpfr::log2(mpfr::exp(mpfr::mpreal(1, mpfr::mpreal::get_default_prec())));

  template<>
    inline mpfr::mpreal
    __log10_e_v
      = mpfr::log10(mpfr::exp(mpfr::mpreal(1, mpfr::mpreal::get_default_prec())));

  template<>
    inline mpfr::mpreal
    __ln_2_v
      = mpfr::const_log2(mpfr::mpreal::get_default_prec());

  template<>
    inline mpfr::mpreal
    __ln_3_v
      = mpfr::log(mpfr::mpreal(3, mpfr::mpreal::get_default_prec()));

  template<>
    inline mpfr::mpreal
    __ln_10_v
      = mpfr::log(mpfr::mpreal(10, mpfr::mpreal::get_default_prec()));

  template<>
    inline mpfr::mpreal
    __ln_pi_v
      = mpfr::log(mpfr::const_pi(mpfr::mpreal::get_default_prec()));

  template<>
    inline mpfr::mpreal
    __gamma_e_v
      = mpfr::const_euler(mpfr::mpreal::get_default_prec());

  template<>
    inline mpfr::mpreal
    __phi_v
      = (1 + mpfr::sqrt(mpfr::mpreal(5, mpfr::mpreal::get_default_prec()))) / 2;

  template<>
    inline mpfr::mpreal
    __catalan_v
      = mpfr::const_catalan(mpfr::mpreal::get_default_prec());

  template<>
    inline mpfr::mpreal
    __root_2_v
      = mpfr::sqrt(mpfr::mpreal(2, mpfr::mpreal::get_default_prec()));

  template<>
    inline mpfr::mpreal
    __root_3_v
      = mpfr::sqrt(mpfr::mpreal(3, mpfr::mpreal::get_default_prec()));

  template<>
    inline mpfr::mpreal
    __root_3_div_2_v
      = mpfr::sqrt(mpfr::mpreal(3, mpfr::mpreal::get_default_prec())) / 2;

  template<>
    inline mpfr::mpreal
    __root_5_v
      = mpfr::sqrt(mpfr::mpreal(5, mpfr::mpreal::get_default_prec()));

  template<>
    inline mpfr::mpreal
    __root_7_v
      = mpfr::sqrt(mpfr::mpreal(7, mpfr::mpreal::get_default_prec()));

  template<>
    inline mpfr::mpreal
    __cbrt_3_v
      = mpfr::cbrt(mpfr::mpreal(3, mpfr::mpreal::get_default_prec()));

  template<>
    inline mpfr::mpreal
    __one_div_root_2_v
      = 1 / mpfr::sqrt(mpfr::mpreal(2, mpfr::mpreal::get_default_prec()));

//_GLIBCXX_END_NAMESPACE_VERSION
} // namespace numbers
} // namespace __gnu_cxx

#endif // C++17

#endif // _EXT_MATH_CONSTANTS_MPREAL_H
