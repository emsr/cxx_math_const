// <math_constants_float128.h> -*- C++ -*-

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

/** @file include/math_constants_float128.h
 *  This is a Standard C++ Library header.
 */

#ifndef _MATH_CONSTANTS_FLOAT128_H
#define _MATH_CONSTANTS_FLOAT128_H 1

#pragma GCC system_header

//#if __cplusplus > 201703L
#if __cplusplus >= 201703L

namespace std //_GLIBCXX_VISIBILITY(default)
{
namespace numbers
{
//_GLIBCXX_BEGIN_NAMESPACE_VERSION

  /// Euler constant @f$ e = 2.71828... @f$
  /// <a href="https://oeis.org/A001113"> (OEIS A001113) </a>
  template<>
    inline constexpr __float128
    e_v
      = 2.7182'81828'45904'52353'60287'47135'26624'97759e+0Q;

  /// The base-2 logarithm of the Euler constant @f$ log_2(e) @f$
  /// <a href="https://oeis.org/A181171"> (OEIS A181171) </a>
  template<>
    inline constexpr __float128
    log2e_v
      = 1.4426'95040'88896'34073'59924'68100'18921'37427e+0Q;

  /// The base-10 logarithm of the Euler constant @f$ log_{10}(e) @f$
  /// <a href="https://oeis.org/A002392"> (OEIS A002392) </a>
  template<>
    inline constexpr __float128
    log10e_v
      = 4.3429'44819'03251'82765'11289'18916'60508'22940e-1Q;

  /// The Archimedean constant @f$ \pi = 3.1415... @f$
  /// <a href="https://oeis.org/A000796"> (OEIS A000796) </a>
  template<>
    inline constexpr __float128
    pi_v
      = 3.1415'92653'58979'32384'62643'38327'95028'84195e+0Q;
  //= 0x3.243'F6A8'885A'308D'3131'98A2'E037'0734'4A40'9382'2299'F31Dp+0L}

  /// The reciprocal of Archimedes' constant @f$ 1/\pi @f$
  /// <a href="https://oeis.org/A049541"> (OEIS A049541)</a>
  template<>
    inline constexpr __float128
    inv_pi_v
      = 3.1830'98861'83790'67153'77675'26745'02872'40691e-1Q;

  /// The reciprocal square root of Archimedes' constant @f$ 1/\sqrt{\pi} @f$
  /// <a href="https://oeis.org/A087197"> (OEIS A087197) </a>
  template<>
    inline constexpr __float128
    inv_sqrtpi_v
      = 5.6418'95835'47756'28694'80794'51560'77258'58438e-1Q;

  /// The Napierian logarithm of 2 @f$ ln(2) @f$
  /// <a href="https://oeis.org/A002162"> (OEIS A002162) </a>
  template<>
    inline constexpr __float128
    ln2_v
      = 6.9314'71805'59945'30941'72321'21458'17656'80748e-1Q;

  /// The Napierian logarithm of 10 @f$ ln(10) @f$
  /// <a href="https://oeis.org/A002392"> (OEIS A002392) </a>
  template<>
    inline constexpr __float128
    ln10_v
      = 2.3025'85092'99404'56840'17991'45468'43642'07602e+0Q;

  /// The square root of 2 @f$ \sqrt{2} @f$
  /// <a href="https://oeis.org/A002193"> (OEIS A002193) </a>
  template<>
    inline constexpr __float128
    sqrt2_v
      = 1.4142'13562'37309'50488'01688'72420'96980'78569e+0Q;

  /// The square root of 3 @f$ \sqrt{3} @f$
  /// <a href="https://oeis.org/A002194"> (OEIS A002194) </a>
  template<>
    inline constexpr __float128
    sqrt3_v
      = 1.7320'50807'56887'72935'27446'34150'58723'66945e+0Q;

  /// The reciprocal square root of 3 @f$ 1 / \sqrt{3} @f$
  /// <a href="https://oeis.org/A020760"> (OEIS A020760) </a>
  template<>
    inline constexpr __float128
    inv_sqrt3_v
      = 5.7735'02691'89625'76450'91487'80501'95745'56475e-1Q;

  /// The Euler-Mascheroni constant @f$ \gamma_E @f$
  /// <a href="https://oeis.org/A001620"> (OEIS A001620) </a>
  template<>
    inline constexpr __float128
    egamma_v
      = 5.7721'56649'01532'86060'65120'90082'40243'10432e-1Q;

  /// The golden ratio @f$ \phi = (\sqrt{5} + 1)/2 @f$
  /// <a href="https://oeis.org/A001622"> (OEIS A001622)
  template<>
    inline constexpr __float128
    phi_v
      = 1.6180'33988'74989'48482'04586'83436'56381'17720e+0Q;

//_GLIBCXX_END_NAMESPACE_VERSION
} // namespace numbers
} // namespace std

#endif // C++17
//#endif // C++2a

#endif // _MATH_CONSTANTS_FLOAT128_H
