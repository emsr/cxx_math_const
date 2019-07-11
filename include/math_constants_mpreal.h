// <math_constants_float128.h> -*- C++ -*-

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

/** @file include/math_constants_mpreal.h
 *  This file is a GNU extension to the Standard C++ Library.
 */

#ifndef _MATH_CONSTANTS_MPREAL_H
#define _MATH_CONSTANTS_MPREAL_H 1

#pragma GCC system_header

#if __cplusplus < 201103L
# include <bits/c++0x_warning.h>
#else

#include <mpreal.h>
#include <math_constants.h>

namespace std //_GLIBCXX_VISIBILITY(default)
{
namespace math
{
//_GLIBCXX_BEGIN_NAMESPACE_VERSION

  template<>
    inline mpfr::mpreal
    e_v
      = mpfr::exp(mpfr::mpreal(1, mpfr::mpreal::get_default_prec()));

  template<>
    inline mpfr::mpreal
    log2e_v
      = mpfr::log2(mpfr::exp(mpfr::mpreal(1, mpfr::mpreal::get_default_prec())));

  template<>
    inline mpfr::mpreal
    log10e_v
      = mpfr::log10(mpfr::exp(mpfr::mpreal(1, mpfr::mpreal::get_default_prec())));

  template<>
    inline mpfr::mpreal
    pi_v
      = mpfr::const_pi(mpfr::mpreal::get_default_prec());

  template<>
    inline mpfr::mpreal
    inv_pi_v
      = 1 / mpfr::const_pi(mpfr::mpreal::get_default_prec());

  template<>
    inline mpfr::mpreal
    inv_sqrtpi_v
      = 1 / mpfr::sqrt(mpfr::const_pi(mpfr::mpreal::get_default_prec()));

  template<>
    inline mpfr::mpreal
    ln2_v
      = mpfr::const_log2(mpfr::mpreal::get_default_prec());

  template<>
    inline mpfr::mpreal
    ln10_v
      = mpfr::log(mpfr::mpreal(10, mpfr::mpreal::get_default_prec()));

  template<>
    inline mpfr::mpreal
    sqrt2_v
      = mpfr::sqrt(mpfr::mpreal(2, mpfr::mpreal::get_default_prec()));

  template<>
    inline mpfr::mpreal
    sqrt3_v
      = mpfr::sqrt(mpfr::mpreal(3, mpfr::mpreal::get_default_prec()));

  template<>
    inline mpfr::mpreal
    inv_sqrt3_v
      = 1 / mpfr::sqrt(mpfr::mpreal(3, mpfr::mpreal::get_default_prec()));

  template<>
    inline mpfr::mpreal
    egamma_v
      = mpfr::const_euler(mpfr::mpreal::get_default_prec());

  template<>
    inline mpfr::mpreal
    phi_v
      = (1 + mpfr::sqrt(mpfr::mpreal(5, mpfr::mpreal::get_default_prec()))) / 2;

//_GLIBCXX_END_NAMESPACE_VERSION
} // namespace math
} // namespace std

#endif // C++11

#endif // _MATH_CONSTANTS_MPREAL_H
