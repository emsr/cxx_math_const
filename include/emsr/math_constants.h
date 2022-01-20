
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

/** @file include/emsr/math_constants.h
 */

#ifndef EMSR_MATH_CONSTANTS_H
#define EMSR_MATH_CONSTANTS_H 1

#if __cplusplus < 201703L
# error "Require C++17 for math constants"
#else

// This first block of numbers is available in <numbers>, std::numbers:: in C++20.

namespace emsr
{

  /// Euler constant @f$ e = 2.71828... @f$
  /// <a href="https://oeis.org/A001113"> (OEIS A001113) </a>
  template<typename Tp>
    inline constexpr Tp
    e_v           = Tp{2.7182'81828'45904'52353'60287'47135'26624'97759e+0L};

  /// The base-2 logarithm of the Euler constant @f$ log_2(e) @f$
  /// <a href="https://oeis.org/A181171"> (OEIS A181171) </a>
  template<typename Tp>
    inline constexpr Tp
    log2e_v       = Tp{1.4426'95040'88896'34073'59924'68100'18921'37427e+0L};

  /// The base-10 logarithm of the Euler constant @f$ log_{10}(e) @f$
  /// <a href="https://oeis.org/A002392"> (OEIS A002392) </a>
  template<typename Tp>
    inline constexpr Tp
    log10e_v      = Tp{4.3429'44819'03251'82765'11289'18916'60508'22940e-1L};

  /// The Archimedean constant @f$ \pi = 3.1415... @f$
  /// <a href="https://oeis.org/A000796"> (OEIS A000796) </a>
  template<typename Tp>
    inline constexpr Tp
    pi_v          = Tp{3.1415'92653'58979'32384'62643'38327'95028'84195e+0L};

  /// The reciprocal of Archimedes' constant @f$ 1/\pi @f$
  /// <a href="https://oeis.org/A049541"> (OEIS A049541)</a>
  template<typename Tp>
    inline constexpr Tp
    inv_pi_v      = Tp{3.1830'98861'83790'67153'77675'26745'02872'40691e-1L};

  /// The reciprocal square root of Archimedes' constant @f$ 1/\sqrt{\pi} @f$
  /// <a href="https://oeis.org/A087197"> (OEIS A087197) </a>
  template<typename Tp>
    inline constexpr Tp
    inv_sqrtpi_v  = Tp{5.6418'95835'47756'28694'80794'51560'77258'58438e-1L};

  /// The Napierian logarithm of 2 @f$ ln(2) @f$
  /// <a href="https://oeis.org/A002162"> (OEIS A002162) </a>
  template<typename Tp>
    inline constexpr Tp
    ln2_v         = Tp{6.9314'71805'59945'30941'72321'21458'17656'80748e-1L};

  /// The Napierian logarithm of 10 @f$ ln(10) @f$
  /// <a href="https://oeis.org/A002392"> (OEIS A002392) </a>
  template<typename Tp>
    inline constexpr Tp
    ln10_v        = Tp{2.3025'85092'99404'56840'17991'45468'43642'07602e+0L};

  /// The square root of 2 @f$ \sqrt{2} @f$
  /// <a href="https://oeis.org/A002193"> (OEIS A002193) </a>
  template<typename Tp>
    inline constexpr Tp
    sqrt2_v       = Tp{1.4142'13562'37309'50488'01688'72420'96980'78569e+0L};

  /// The square root of 3 @f$ \sqrt{3} @f$
  /// <a href="https://oeis.org/A002194"> (OEIS A002194) </a>
  template<typename Tp>
    inline constexpr Tp
    sqrt3_v       = Tp{1.7320'50807'56887'72935'27446'34150'58723'66945e+0L};

  /// The reciprocal square root of 3 @f$ 1 / \sqrt{3} @f$
  /// <a href="https://oeis.org/A020760"> (OEIS A020760) </a>
  template<typename Tp>
    inline constexpr Tp
    inv_sqrt3_v   = Tp{5.7735'02691'89625'76450'91487'80501'95745'56475e-1L};

  /// The Euler-Mascheroni constant @f$ \gamma_E @f$
  /// <a href="https://oeis.org/A001620"> (OEIS A001620) </a>
  template<typename Tp>
    inline constexpr Tp
    egamma_v      = Tp{5.7721'56649'01532'86060'65120'90082'40243'10432e-1L};

  /// The golden ratio @f$ \phi = (\sqrt{5} + 1)/2 @f$
  /// <a href="https://oeis.org/A001622"> (OEIS A001622)
  template<typename Tp>
    inline constexpr Tp
    phi_v         = Tp{1.6180'33988'74989'48482'04586'83436'56381'17720e+0L};

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

} // namespace emsr

// End 'std' numbers; begin 'extended' numbers.

namespace emsr
{

  // Constant @f$ 4\pi @f$.
  template<typename Tp>
    inline constexpr Tp
    pi_4_v           = Tp{12.566'37061'43591'72953'85057'35331'18011'53678L};

  // Constant @f$ 4\pi/3 @f$.
  template<typename Tp>
    inline constexpr Tp
    pi_4_div_3_v     = Tp{4.1887'90204'78639'09846'16857'84437'26705'12253L};

  // Constant @f$ 2\pi @f$.
  template<typename Tp>
    inline constexpr Tp
    tau_v           = Tp{6.2831'85307'17958'64769'25286'76655'90057'68391L};

  // Constant @f$ \sqrt(\pi) @f$.
  template<typename Tp>
    inline constexpr Tp
    sqrtpi_v        = Tp{1.7724'53850'90551'60272'98167'48334'11451'82798L};

  // Constant @f$ \cbrt(\pi) @f$.
  template<typename Tp>
    inline constexpr Tp
    cbrtpi_v        = Tp{1.4645'91887'56152'32630'20142'52726'37903'91736L};

  // Constant @f$ \sqrt(\pi / 2) @f$.
  template<typename Tp>
    inline constexpr Tp
    sqrtpi_div_2_v  = Tp{1.2533'14137'31550'02512'07882'64240'55226'26505L};

  // Constant @f$ 1 / 2\pi @f$.
  template<typename Tp>
    inline constexpr Tp
    inv_2_pi_v   = Tp{0.1591'54943'09189'53357'68883'76337'25143'62035L};

  // Constant @f$ 2 / \pi @f$.
  template<typename Tp>
    inline constexpr Tp
    two_div_pi_v     = Tp{0.6366'19772'36758'13430'75535'05349'00574'48138L};

  // Constant @f$ 2 / \sqrt(\pi) @f$.
  template<typename Tp>
    inline constexpr Tp
    two_div_sqrtpi_v= Tp{1.1283'79167'09551'25738'96158'90312'15451'71688L};

  // Constant: @f$ \pi^2/6 @f$.
  template<typename Tp>
    inline constexpr Tp
    pi_sqr_div_6_v   = Tp{1.6449'34066'84822'64364'72415'16664'60251'89221L};

  // Constant: @f$ \sqrt{2\pi}
  template<typename Tp>
    inline constexpr Tp
    sqrt2_pi_v      = Tp{2.5066'28274'63100'05024'15765'28481'10452'53010L};

  // Constant: @f$ \log(\sqrt{2\pi})
  template<typename Tp>
    inline constexpr Tp
    lnsqrt2_pi_v   = Tp{0.9189'38533'20467'27417'80329'73640'56176'39862L};

  // Constant: radians to degree conversion.
  template<typename Tp>
    inline constexpr Tp
    deg_v            = Tp{180} / pi_v<Tp>;

  // Constant: degree to radians conversion.
  template<typename Tp>
    inline constexpr Tp
    rad_v            = pi_v<Tp> / Tp{180};

  // Constant @f$ 1 / e @f$.
  template<typename Tp>
    inline constexpr Tp
    inv_e_v      = Tp{0.3678'79441'17144'23215'95523'77016'14608'67446L};

  // Constant @f$ \ln(3) @f$.
  template<typename Tp>
    inline constexpr Tp
    ln3_v           = Tp{1.0986'12288'66810'96913'95245'23692'25257'04648L};

  // Constant @f$ \log(\pi) @f$.
  template<typename Tp>
    inline constexpr Tp
    lnpi_v          = Tp{1.1447'29885'84940'01741'43427'35135'30587'11646L};

  // Catalan's constant.
  template<typename Tp>
    inline constexpr Tp
    catalan_v        = Tp{0.9159'65594'17721'90150'54603'51493'23841'10773L};

  // Constant @f$ \sqrt(3) @f$.
  template<typename Tp>
    inline constexpr Tp
    sqrt3_div_2_v   = Tp{0.8660'25403'78443'86467'63723'17075'29361'83473L};

  // Constant @f$ \sqrt(5) @f$.
  template<typename Tp>
    inline constexpr Tp
    sqrt5_v         = Tp{2.2360'67977'49978'96964'09173'66873'12762'35440L};

  // Constant @f$ \sqrt(7) @f$.
  template<typename Tp>
    inline constexpr Tp
    sqrt7_v         = Tp{2.6457'51311'06459'05905'01615'75363'92604'25706L};

  // Constant @f$ \cbrt(3) @f$.
  template<typename Tp>
    inline constexpr Tp
    cbrt3_v         = Tp{1.4422'49570'30740'83823'21638'31078'01095'88390L};

  // Constant @f$ 1 / \sqrt(2) @f$.
  template<typename Tp>
    inline constexpr Tp
    inv_sqrt2_v = Tp{0.7071'06781'18654'75244'00844'36210'48490'39285L};

  // double "specializations"

  inline constexpr double
  pi_4  	      = pi_4_v<double>;

  inline constexpr double
  pi_4_div_3        = pi_4_div_3_v<double>;

  inline constexpr double
  tau  	      = tau_v<double>;

  inline constexpr double
  sqrtpi  	      = sqrtpi_v<double>;

  inline constexpr double
  cbrtpi  	      = cbrtpi_v<double>;

  inline constexpr double
  sqrtpi_div_2     = sqrtpi_div_2_v<double>;

  inline constexpr double
  inv_2_pi      = inv_2_pi_v<double>;

  inline constexpr double
  two_div_pi        = two_div_pi_v<double>;

  inline constexpr double
  two_div_sqrtpi   = two_div_sqrtpi_v<double>;

  inline constexpr double
  pi_sqr_div_6      = pi_sqr_div_6_v<double>;

  inline constexpr double
  sqrt2_pi         = sqrt2_pi_v<double>;

  inline constexpr double
  lnsqrt2_pi      = lnsqrt2_pi_v<double>;

  inline constexpr double
  deg  	      = deg_v<double>;

  inline constexpr double
  rad               = rad_v<double>;

  inline constexpr double
  inv_e         = inv_e_v<double>;

  inline constexpr double
  ln3  	      = ln3_v<double>;

  inline constexpr double
  lnpi  	      = lnpi_v<double>;

  inline constexpr double
  catalan  	      = catalan_v<double>;

  inline constexpr double
  sqrt3_div_2      = sqrt3_div_2_v<double>;

  inline constexpr double
  sqrt5  	      = sqrt5_v<double>;

  inline constexpr double
  sqrt7  	      = sqrt7_v<double>;

  inline constexpr double
  cbrt3  	      = cbrt3_v<double>;

  inline constexpr double
  inv_sqrt2    = inv_sqrt2_v<double>;

} // namespace emsr

#endif // C++17

#endif // EMSR_MATH_CONSTANTS_H
