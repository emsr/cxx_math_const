
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

/** @file include/emsr/math_constants_float128.h
 */

#ifndef EMSR_MATH_CONSTANTS_FLOAT128_H
#define EMSR_MATH_CONSTANTS_FLOAT128_H 1

#if __cplusplus < 201703L
# error "Require C++17 for math constants"
#else

#include <emsr/math_constants.h>

// This first block of numbers is available in <numbers>, std::numbers:: in C++20.

namespace emsr
{

  /// Euler constant @f$ e = 2.71828... @f$
  /// <a href="https://oeis.org/A001113"> (OEIS A001113) </a>
  template<>
    inline constexpr __float128
    e_v<__float128>
      = 2.7182'81828'45904'52353'60287'47135'26624'97759Q;

  /// The base-2 logarithm of the Euler constant @f$ log_2(e) @f$
  /// <a href="https://oeis.org/A181171"> (OEIS A181171) </a>
  template<>
    inline constexpr __float128
    log2e_v<__float128>
      = 1.4426'95040'88896'34073'59924'68100'18921'37427Q;

  /// The base-10 logarithm of the Euler constant @f$ log_{10}(e) @f$
  /// <a href="https://oeis.org/A002392"> (OEIS A002392) </a>
  template<>
    inline constexpr __float128
    log10e_v<__float128>
      = 0.43429'44819'03251'82765'11289'18916'60508'22940Q;

  /// The Archimedean constant @f$ \pi = 3.1415... @f$
  /// <a href="https://oeis.org/A000796"> (OEIS A000796) </a>
  template<>
    inline constexpr __float128
    pi_v<__float128>
      = 3.1415'92653'58979'32384'62643'38327'95028'84195Q;

  /// The reciprocal of Archimedes' constant @f$ 1/\pi @f$
  /// <a href="https://oeis.org/A049541"> (OEIS A049541)</a>
  template<>
    inline constexpr __float128
    inv_pi_v<__float128>
      = 0.31830'98861'83790'67153'77675'26745'02872'40691Q;

  /// The reciprocal square root of Archimedes' constant @f$ 1/\sqrt{\pi} @f$
  /// <a href="https://oeis.org/A087197"> (OEIS A087197) </a>
  template<>
    inline constexpr __float128
    inv_sqrtpi_v<__float128>
      = 0.56418'95835'47756'28694'80794'51560'77258'58438Q;

  /// The Napierian logarithm of 2 @f$ ln(2) @f$
  /// <a href="https://oeis.org/A002162"> (OEIS A002162) </a>
  template<>
    inline constexpr __float128
    ln2_v<__float128>
      = 0.69314'71805'59945'30941'72321'21458'17656'80748Q;

  /// The Napierian logarithm of 10 @f$ ln(10) @f$
  /// <a href="https://oeis.org/A002392"> (OEIS A002392) </a>
  template<>
    inline constexpr __float128
    ln10_v<__float128>
      = 2.3025'85092'99404'56840'17991'45468'43642'07602Q;

  /// The square root of 2 @f$ \sqrt{2} @f$
  /// <a href="https://oeis.org/A002193"> (OEIS A002193) </a>
  template<>
    inline constexpr __float128
    sqrt2_v<__float128>
      = 1.4142'13562'37309'50488'01688'72420'96980'78569Q;

  /// The square root of 3 @f$ \sqrt{3} @f$
  /// <a href="https://oeis.org/A002194"> (OEIS A002194) </a>
  template<>
    inline constexpr __float128
    sqrt3_v<__float128>
      = 1.7320'50807'56887'72935'27446'34150'58723'66945Q;

  /// The reciprocal square root of 3 @f$ 1 / \sqrt{3} @f$
  /// <a href="https://oeis.org/A020760"> (OEIS A020760) </a>
  template<>
    inline constexpr __float128
    inv_sqrt3_v<__float128>
      = 0.57735'02691'89625'76450'91487'80501'95745'56475Q;

  /// The Euler-Mascheroni constant @f$ \gamma_E @f$
  /// <a href="https://oeis.org/A001620"> (OEIS A001620) </a>
  template<>
    inline constexpr __float128
    egamma_v<__float128>
      = 0.57721'56649'01532'86060'65120'90082'40243'10432Q;

  /// The golden ratio @f$ \phi = (\sqrt{5} + 1)/2 @f$
  /// <a href="https://oeis.org/A001622"> (OEIS A001622)
  template<>
    inline constexpr __float128
    phi_v<__float128>
      = 1.6180'33988'74989'48482'04586'83436'56381'17720Q;

} // namespace emsr

// End 'std' numbers; begin 'extended' numbers.

namespace emsr
{

  // Constant @f$ 4\pi @f$.
  template<>
    inline constexpr __float128
    pi_4_v
      = 12.566'37061'43591'72953'85057'35331'18011'53678Q;

  // Constant @f$ 4\pi/3 @f$.
  template<>
    inline constexpr __float128
    pi_4_div_3_v<__float128>
      = 4.1887'90204'78639'09846'16857'84437'26705'12253Q;

  // Constant @f$ 2\pi @f$.
  template<>
    inline constexpr __float128
    tau_v<__float128>
      = 6.2831'85307'17958'64769'25286'76655'90057'68391Q;

  // Constant @f$ \sqrt(\pi) @f$.
  template<>
    inline constexpr __float128
    sqrtpi_v<__float128>
      = 1.7724'53850'90551'60272'98167'48334'11451'82798Q;

  // Constant @f$ \cbrt(\pi) @f$.
  template<>
    inline constexpr __float128
    cbrtpi_v<__float128>
      = 1.4645'91887'56152'32630'20142'52726'37903'91736Q;

  // Constant @f$ \sqrt(\pi / 2) @f$.
  template<>
    inline constexpr __float128
    sqrtpi_div_2_v<__float128>
      = 1.2533'14137'31550'02512'07882'64240'55226'26505Q;

  // Constant @f$ 1 / 2\pi @f$.
  template<>
    inline constexpr __float128
    inv_2_pi_v<__float128>
      = 0.1591'54943'09189'53357'68883'76337'25143'62035Q;

  // Constant @f$ 2 / \pi @f$.
  template<>
    inline constexpr __float128
    two_div_pi_v<__float128>
      = 0.6366'19772'36758'13430'75535'05349'00574'48138Q;

  // Constant @f$ 2 / \sqrt(\pi) @f$.
  template<>
    inline constexpr __float128
    two_div_sqrtpi_v<__float128>
      = 1.1283'79167'09551'25738'96158'90312'15451'71688Q;

  // Constant: @f$ \pi^2/6 @f$.
  template<>
    inline constexpr __float128
    pi_sqr_div_6_v<__float128>
      = 1.6449'34066'84822'64364'72415'16664'60251'89221Q;

  // Constant: @f$ \sqrt{2\pi}
  template<>
    inline constexpr __float128
    sqrt2_pi_v<__float128>
      = 2.5066'28274'63100'05024'15765'28481'10452'53010Q;

  // Constant: @f$ \log(\sqrt{2\pi})
  template<>
    inline constexpr __float128
    lnsqrt2_pi_v<__float128>
      = 0.9189'38533'20467'27417'80329'73640'56176'39862Q;

  // Constant: radians to degree conversion.
  template<>
    inline constexpr __float128
    deg_v<__float128>
      = __float128{180} / pi_v<__float128>;

  // Constant: degree to radians conversion.
  template<>
    inline constexpr __float128
    rad_v<__float128>
      = pi_v<__float128> / __float128{180};

  // Constant @f$ 1 / e @f$.
  template<>
    inline constexpr __float128
    inv_e_v<__float128>
      = 0.3678'79441'17144'23215'95523'77016'14608'67446Q;

  // Constant @f$ \ln(3) @f$.
  template<>
    inline constexpr __float128
    ln3_v<__float128>
      = 1.0986'12288'66810'96913'95245'23692'25257'04648Q;

  // Constant @f$ \log(\pi) @f$.
  template<>
    inline constexpr __float128
    lnpi_v<__float128>
      = 1.1447'29885'84940'01741'43427'35135'30587'11646Q;

  // Catalan's constant.
  template<>
    inline constexpr __float128
    catalan_v<__float128>
      = 0.9159'65594'17721'90150'54603'51493'23841'10773Q;

  // Constant @f$ \sqrt(3) @f$.
  template<>
    inline constexpr __float128
    sqrt3_div_2_v<__float128>
      = 0.8660'25403'78443'86467'63723'17075'29361'83473Q;

  // Constant @f$ \sqrt(5) @f$.
  template<>
    inline constexpr __float128
    sqrt5_v<__float128>
      = 2.2360'67977'49978'96964'09173'66873'12762'35440Q;

  // Constant @f$ \sqrt(7) @f$.
  template<>
    inline constexpr __float128
    sqrt7_v<__float128>
      = 2.6457'51311'06459'05905'01615'75363'92604'25706Q;

  // Constant @f$ \cbrt(3) @f$.
  template<>
    inline constexpr __float128
    cbrt3_v<__float128>
      = 1.4422'49570'30740'83823'21638'31078'01095'88390Q;

  // Constant @f$ 1 / \sqrt(2) @f$.
  template<>
    inline constexpr __float128
    inv_sqrt2_v<__float128>
      = 0.7071'06781'18654'75244'00844'36210'48490'39285Q;

} // namespace emsr

#endif // C++17

#endif // EMSR_MATH_CONSTANTS_FLOAT128_H
