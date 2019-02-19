// <math_const.h> -*- C++ -*-

// Copyright (C) 2019 Free Software Foundation, Inc.
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

/** @file include/math_const.h
 *  This is a Standard C++ Library header.
 */

#ifndef _GLIBCXX_MATH_CONST_H
#define _GLIBCXX_MATH_CONST_H 1

#pragma GCC system_header

//#if __cplusplus > 201703L
#if __cplusplus >= 201703L

namespace std //_GLIBCXX_VISIBILITY(default)
{
namespace math
{
//_GLIBCXX_BEGIN_NAMESPACE_VERSION

  /// Euler constant @f$ e = 2.71828... @f$
  /// <a href="https://oeis.org/A001113"> (OEIS A001113) </a>
  template<typename _Tp>
    inline constexpr _Tp
    e_v           = _Tp{2.7182'81828'45904'52353'60287'47135'26624'97759e+0L};

  /// The base-2 logarithm of the Euler constant @f$ log_2(e) @f$
  /// <a href="https://oeis.org/A181171"> (OEIS A181171) </a>
  template<typename _Tp>
    inline constexpr _Tp
    log2e_v       = _Tp{1.4426'95040'88896'34073'59924'68100'18921'37427e+0L};

  /// The base-10 logarithm of the Euler constant @f$ log_{10}(e) @f$
  /// <a href="https://oeis.org/A002392"> (OEIS A002392) </a>
  template<typename _Tp>
    inline constexpr _Tp
    log10e_v      = _Tp{4.3429'44819'03251'82765'11289'18916'60508'22940e-1L};

  /// The Archimedean constant @f$ \pi = 3.1415... @f$
  /// <a href="https://oeis.org/A000796"> (OEIS A000796) </a>
  template<typename _Tp>
    inline constexpr _Tp
    pi_v          = _Tp{3.1415'92653'58979'32384'62643'38327'95028'84195e+0L};
  //= _Tp{0x3.243'F6A8'885A'308D'3131'98A2'E037'0734'4A40'9382'2299'F31Dp+0L}

  /// The reciprocal of Archimedes' constant @f$ 1/\pi @f$
  /// <a href="https://oeis.org/A049541"> (OEIS A049541)</a>
  template<typename _Tp>
    inline constexpr _Tp
    inv_pi_v      = _Tp{3.1830'98861'83790'67153'77675'26745'02872'40691e-1L};

  /// The reciprocal square root of Archimedes' constant @f$ 1/\sqrt{\pi} @f$
  /// <a href="https://oeis.org/A087197"> (OEIS A087197) </a>
  template<typename _Tp>
    inline constexpr _Tp
    inv_sqrtpi_v  = _Tp{5.6418'95835'47756'28694'80794'51560'77258'58438e-1L};

  /// The Napierian logarithm of 2 @f$ ln(2) @f$
  /// <a href="https://oeis.org/A002162"> (OEIS A002162) </a>
  template<typename _Tp>
    inline constexpr _Tp
    ln2_v         = _Tp{6.9314'71805'59945'30941'72321'21458'17656'80748e-1L};

  /// The Napierian logarithm of 10 @f$ ln(10) @f$
  /// <a href="https://oeis.org/A002392"> (OEIS A002392) </a>
  template<typename _Tp>
    inline constexpr _Tp
    ln10_v        = _Tp{2.3025'85092'99404'56840'17991'45468'43642'07602e+0L};

  /// The square root of 2 @f$ \sqrt{2} @f$
  /// <a href="https://oeis.org/A002193"> (OEIS A002193) </a>
  template<typename _Tp>
    inline constexpr _Tp
    sqrt2_v       = _Tp{1.4142'13562'37309'50488'01688'72420'96980'78569e+0L};

  /// The square root of 3 @f$ \sqrt{3} @f$
  /// <a href="https://oeis.org/A002194"> (OEIS A002194) </a>
  template<typename _Tp>
    inline constexpr _Tp
    sqrt3_v       = _Tp{1.7320'50807'56887'72935'27446'34150'58723'66945e+0L};

  /// The reciprocal square root of 3 @f$ 1 / \sqrt{3} @f$
  /// <a href="https://oeis.org/A020760"> (OEIS A020760) </a>
  template<typename _Tp>
    inline constexpr _Tp
    inv_sqrt3_v   = _Tp{5.7735'02691'89625'76450'91487'80501'95745'56475e-1L};

  /// The Euler-Mascheroni constant @f$ \gamma_E @f$
  /// <a href="https://oeis.org/A001620"> (OEIS A001620) </a>
  template<typename _Tp>
    inline constexpr _Tp
    egamma_v      = _Tp{5.7721'56649'01532'86060'65120'90082'40243'10432e-1L};

  /// The golden ratio @f$ \phi = (\sqrt{5} + 1)/2 @f$
  /// <a href="https://oeis.org/A001622"> (OEIS A001622)
  template<typename _Tp>
    inline constexpr _Tp
    phi_v         = _Tp{1.6180'33988'74989'48482'04586'83436'56381'17720e+0L};

  // float "specializations"

  /// The \c float version of the Euler constant @f$ e = 2.71828... @f$
  inline constexpr float
  ef = e_v<float>;

  /// The \c float version of the base-2 logarithm of the Euler constant
  /// @f$ log_2(e) @f$
  inline constexpr float
  log2ef = log2e_v<float>;

  /// The \c float version of the base-10 logarithm of the Euler constant
  /// @f$ log_{10}(e) @f$
  inline constexpr float
  log10ef = log10e_v<float>;

  /// The \c float version of the Archimedean constant @f$ \pi = 3.1415... @f$
  inline constexpr float
  pif = pi_v<float>;

  /// The \c float version of the reciprocal of Archimedes' constant
  /// @f$ 1/\pi @f$
  inline constexpr float
  inv_pif = inv_pi_v<float>;

  /// The \c float version of the reciprocal square root
  /// of Archimedes' constant @f$ 1/\sqrt{\pi} @f$
  inline constexpr float
  inv_sqrtpif = inv_sqrtpi_v<float>;

  /// The \c float version of the Napierian logarithm of 2 @f$ ln(2) @f$
  inline constexpr float
  ln2f = ln2_v<float>;

  /// The \c float version of the Napierian logarithm of 10 @f$ ln(10) @f$
  inline constexpr float
  ln10f = ln10_v<float>;

  /// The \c float version of the square root of 2 @f$ \sqrt{2} @f$
  inline constexpr float
  sqrt2f = sqrt2_v<float>;

  /// The \c float version of the square root of 3 @f$ \sqrt{3} @f$
  inline constexpr float
  sqrt3f = sqrt3_v<float>;

  /// The \c float version of the reciprocal square root of 3
  /// @f$ 1 / \sqrt{3} @f$
  inline constexpr float
  inv_sqrt3f = inv_sqrt3_v<float>;

  /// The \c float version of the Euler-Mascheroni constant @f$ \gamma_E @f$
  inline constexpr float
  egammaf = egamma_v<float>;

  /// The \c float version of the golden ratio @f$ \phi = (\sqrt{5} + 1)/2 @f$
  inline constexpr float
  phif = phi_v<float>;

  // double "specializations"

  /// The \c double version of the Euler constant @f$ e = 2.71828... @f$
  inline constexpr double
  e = e_v<double>;

  /// The \c double version of the base-2 logarithm of the Euler constant
  inline constexpr double
  log2e = log2e_v<double>;

  /// The \c double version of the base-10 logarithm of the Euler constant
  inline constexpr double
  log10e = log10e_v<double>;

  /// The \c double version of the Archimedean constant @f$ \pi = 3.1415... @f$
  inline constexpr double
  pi = pi_v<double>;

  /// The \c double version of the reciprocal of Archimedes' constant
  /// @f$ 1/\pi @f$
  inline constexpr double
  inv_pi = inv_pi_v<double>;

  /// The \c double version of the reciprocal square root of Archimedes'
  /// constant @f$ 1/\sqrt{\pi} @f$
  inline constexpr double
  inv_sqrtpi = inv_sqrtpi_v<double>;

  /// The \c double version of the Napierian logarithm of 2 @f$ ln(2) @f$
  inline constexpr double
  ln2 = ln2_v<double>;

  /// The \c double version of the Napierian logarithm of 10 @f$ ln(10) @f$
  inline constexpr double
  ln10 = ln10_v<double>;

  /// The \c double version of the square root of 2 @f$ \sqrt{2} @f$
  inline constexpr double
  sqrt2 = sqrt2_v<double>;

  /// The \c double version of the square root of 3 @f$ \sqrt{3} @f$
  inline constexpr double
  sqrt3 = sqrt3_v<double>;

  /// The \c double version of the reciprocal square root of 3
  /// @f$ 1 / \sqrt{3} @f$
  inline constexpr double
  inv_sqrt3 = inv_sqrt3_v<double>;

  /// The \c double version of the Euler-Mascheroni constant @f$ \gamma_E @f$
  inline constexpr double
  egamma = egamma_v<double>;

  /// The \c double version of the golden ratio @f$ \phi = (\sqrt{5} + 1)/2 @f$
  inline constexpr double
  phi = phi_v<double>;

  // long double "specializations"

  /// The \c long double version of the Euler constant @f$ e = 2.71828... @f$
  inline constexpr long double
  el = e_v<long double>;

  /// The \c long double version of the base-2 logarithm of the Euler constant
  inline constexpr long double
  log2el = log2e_v<long double>;

  /// The \c long double version of the base-10 logarithm of the Euler constant
  inline constexpr long double
  log10el = log10e_v<long double>;

  /// The \c long double version of the Archimedean constant
  /// @f$ \pi = 3.1415... @f$
  inline constexpr long double
  pil = pi_v<long double>;

  /// The \c long double version of the reciprocal of Archimedes' constant
  /// @f$ 1/\pi @f$
  inline constexpr long double
  inv_pil = inv_pi_v<long double>;

  /// The \c long double version of the reciprocal square root of Archimedes'
  /// constant @f$ 1/\sqrt{\pi} @f$
  inline constexpr long double
  inv_sqrtpil = inv_sqrtpi_v<long double>;

  /// The \c long double version of the Napierian logarithm of 2 @f$ ln(2) @f$
  inline constexpr long double
  ln2l = ln2_v<long double>;

  /// The \c long double version of the Napierian logarithm of 10 @f$ ln(10) @f$
  inline constexpr long double
  ln10l = ln10_v<long double>;

  /// The \c long double version of the square root of 2 @f$ \sqrt{2} @f$
  inline constexpr long double
  sqrt2l = sqrt2_v<long double>;

  /// The \c long double version of the square root of 3 @f$ \sqrt{3} @f$
  inline constexpr long double
  sqrt3l = sqrt3_v<long double>;

  /// The \c long double version of the reciprocal square root of 3
  /// @f$ 1 / \sqrt{3} @f$
  inline constexpr long double
  inv_sqrt3l = inv_sqrt3_v<long double>;

  /// The \c long double version of the Euler-Mascheroni constant
  /// @f$ \gamma_E @f$
  inline constexpr long double
  egammal = egamma_v<long double>;

  /// The \c long double version of the golden ratio
  /// @f$ \phi = (\sqrt{5} + 1)/2 @f$
  inline constexpr long double
  phil = phi_v<long double>;

//_GLIBCXX_END_NAMESPACE_VERSION
} // namespace math
} // namespace std

#endif // C++17
//#endif // C++2a

#endif // _GLIBCXX_MATH_CONST_H
