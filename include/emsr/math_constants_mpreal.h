
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

  /// Euler constant @f$ e = 2.71828... @f$
  /// <a href="https://oeis.org/A001113"> (OEIS A001113) </a>
  template<>
    inline mpfr::mpreal
    e_v<mpfr::mpreal>
      = mpfr::exp(mpfr::mpreal(1, mpfr::mpreal::get_default_prec()));

  /// The base-2 logarithm of the Euler constant @f$ log_2(e) @f$
  /// <a href="https://oeis.org/A181171"> (OEIS A181171) </a>
  template<>
    inline mpfr::mpreal
    log2e_v<mpfr::mpreal>
      = mpfr::log2(mpfr::exp(mpfr::mpreal(1, mpfr::mpreal::get_default_prec())));

  /// The base-10 logarithm of the Euler constant @f$ log_{10}(e) @f$
  /// <a href="https://oeis.org/A002392"> (OEIS A002392) </a>
  template<>
    inline mpfr::mpreal
    log10e_v<mpfr::mpreal>
      = mpfr::log10(mpfr::exp(mpfr::mpreal(1, mpfr::mpreal::get_default_prec())));

  /// The Archimedean constant @f$ \pi = 3.1415... @f$
  /// <a href="https://oeis.org/A000796"> (OEIS A000796) </a>
  template<>
    inline mpfr::mpreal
    pi_v<mpfr::mpreal>
      = mpfr::const_pi(mpfr::mpreal::get_default_prec());

  /// The reciprocal of Archimedes' constant @f$ 1/\pi @f$
  /// <a href="https://oeis.org/A049541"> (OEIS A049541)</a>
  template<>
    inline mpfr::mpreal
    inv_pi_v<mpfr::mpreal>
      = 1 / mpfr::const_pi(mpfr::mpreal::get_default_prec());

  /// The reciprocal square root of Archimedes' constant @f$ 1/\sqrt{\pi} @f$
  /// <a href="https://oeis.org/A087197"> (OEIS A087197) </a>
  template<>
    inline mpfr::mpreal
    inv_sqrtpi_v<mpfr::mpreal>
      = 1 / mpfr::sqrt(mpfr::const_pi(mpfr::mpreal::get_default_prec()));

  /// The Napierian logarithm of 2 @f$ ln(2) @f$
  /// <a href="https://oeis.org/A002162"> (OEIS A002162) </a>
  template<>
    inline mpfr::mpreal
    ln2_v<mpfr::mpreal>
      = mpfr::const_log2(mpfr::mpreal::get_default_prec());

  /// The Napierian logarithm of 10 @f$ ln(10) @f$
  /// <a href="https://oeis.org/A002392"> (OEIS A002392) </a>
  template<>
    inline mpfr::mpreal
    ln10_v<mpfr::mpreal>
      = mpfr::log(mpfr::mpreal(10, mpfr::mpreal::get_default_prec()));

  /// The square root of 2 @f$ \sqrt{2} @f$
  /// <a href="https://oeis.org/A002193"> (OEIS A002193) </a>
  template<>
    inline mpfr::mpreal
    sqrt2_v<mpfr::mpreal>
      = mpfr::sqrt(mpfr::mpreal(2, mpfr::mpreal::get_default_prec()));

  /// The square root of 3 @f$ \sqrt{3} @f$
  /// <a href="https://oeis.org/A002194"> (OEIS A002194) </a>
  template<>
    inline mpfr::mpreal
    sqrt3_v<mpfr::mpreal>
      = mpfr::sqrt(mpfr::mpreal(3, mpfr::mpreal::get_default_prec()));

  /// The reciprocal square root of 3 @f$ 1 / \sqrt{3} @f$
  /// <a href="https://oeis.org/A020760"> (OEIS A020760) </a>
  template<>
    inline mpfr::mpreal
    inv_sqrt3_v<mpfr::mpreal>
      = 1 / mpfr::sqrt(mpfr::mpreal(3, mpfr::mpreal::get_default_prec()));

  /// The Euler-Mascheroni constant @f$ \gamma_E @f$
  /// <a href="https://oeis.org/A001620"> (OEIS A001620) </a>
  template<>
    inline mpfr::mpreal
    egamma_v<mpfr::mpreal>
      = mpfr::const_euler(mpfr::mpreal::get_default_prec());

  /// The golden ratio @f$ \phi = (\sqrt{5} + 1)/2 @f$
  /// <a href="https://oeis.org/A001622"> (OEIS A001622)
  template<>
    inline mpfr::mpreal
    phi_v<mpfr::mpreal>
      = (1 + mpfr::sqrt(mpfr::mpreal(5, mpfr::mpreal::get_default_prec()))) / 2;

} // namespace emsr

// End 'std' numbers; begin 'extended' numbers.

namespace emsr
{

  // Constant @f$ 4\pi @f$.
  template<>
    inline mpfr::mpreal
    pi_4_v<mpfr::mpreal>
      = 4 * mpfr::const_pi(mpfr::mpreal::get_default_prec());

  // Constant @f$ 4\pi/3 @f$.
  template<>
    inline mpfr::mpreal
    pi_4_div_3_v<mpfr::mpreal>
      = 4 * mpfr::const_pi(mpfr::mpreal::get_default_prec()) / 3;

  // Constant @f$ 2\pi @f$.
  template<>
    inline mpfr::mpreal
    tau_v<mpfr::mpreal>
      = 2 * mpfr::const_pi(mpfr::mpreal::get_default_prec());

  // Constant @f$ \sqrt(\pi) @f$.
  template<>
    inline mpfr::mpreal
    sqrtpi_v<mpfr::mpreal>
      = mpfr::sqrt(mpfr::const_pi(mpfr::mpreal::get_default_prec()));

  // Constant @f$ \cbrt(\pi) @f$.
  template<>
    inline mpfr::mpreal
    cbrtpi_v<mpfr::mpreal>
      = mpfr::cbrt(mpfr::const_pi(mpfr::mpreal::get_default_prec()));

  // Constant @f$ 1 / 2\pi = 1 / \tau @f$.
  template<>
    inline mpfr::mpreal
    inv_tau_v<mpfr::mpreal>
      = 1 / (2 * mpfr::const_pi(mpfr::mpreal::get_default_prec()));

  // Constant @f$ 2 / \pi @f$.
  template<>
    inline mpfr::mpreal
    two_div_pi_v<mpfr::mpreal>
      = 2 / mpfr::const_pi(mpfr::mpreal::get_default_prec());

  // Constant @f$ 2 / \sqrt(\pi) @f$.
  template<>
    inline mpfr::mpreal
    two_div_sqrtpi_v<mpfr::mpreal>
      = 2 / mpfr::sqrt(mpfr::const_pi(mpfr::mpreal::get_default_prec()));

  // Constant: @f$ \pi^2/6 @f$.
  template<>
    inline mpfr::mpreal
    pi_sqr_div_6_v<mpfr::mpreal>
      = mpfr::pow(mpfr::const_pi(mpfr::mpreal::get_default_prec()), 2);//pi_v * pi_v / 6;

  // Constant: @f$ \sqrt{2\pi} = \sqrt(\tau) @f$.
  template<>
    inline mpfr::mpreal
    sqrttau_v<mpfr::mpreal>
      = mpfr::sqrt(2 * mpfr::const_pi(mpfr::mpreal::get_default_prec()));

  // Constant: @f$ \log(\sqrt{2\pi}) = \log(\sqrt(\tau)) @f$.
  template<>
    inline mpfr::mpreal
    lnsqrttau_v<mpfr::mpreal>
      = mpfr::log(mpfr::sqrt(2 * mpfr::const_pi(mpfr::mpreal::get_default_prec())));

  // Constant: radians to degree conversion.
  template<>
    inline mpfr::mpreal
    deg_v<mpfr::mpreal>
      = 180 / mpfr::const_pi(mpfr::mpreal::get_default_prec());

  // Constant: degree to radians conversion.
  template<>
    inline mpfr::mpreal
    rad_v<mpfr::mpreal>
      = mpfr::const_pi(mpfr::mpreal::get_default_prec()) / 180;

  // Constant @f$ 1 / e @f$.
  template<>
    inline mpfr::mpreal
    inv_e_v<mpfr::mpreal>
      = 1 / mpfr::exp(mpfr::mpreal(1, mpfr::mpreal::get_default_prec()));

  // Constant @f$ \ln(3) @f$.
  template<>
    inline mpfr::mpreal
    ln3_v<mpfr::mpreal>
      = mpfr::log(mpfr::mpreal(3, mpfr::mpreal::get_default_prec()));

  // Constant @f$ \log(\pi) @f$.
  template<>
    inline mpfr::mpreal
    lnpi_v<mpfr::mpreal>
      = mpfr::log(mpfr::const_pi(mpfr::mpreal::get_default_prec()));

  // Catalan's constant.
  template<>
    inline mpfr::mpreal
    catalan_v<mpfr::mpreal>
      = mpfr::const_catalan(mpfr::mpreal::get_default_prec());

  // Constant @f$ \sqrt(3) / 2 @f$.
  template<>
    inline mpfr::mpreal
    sqrt3_div_2_v<mpfr::mpreal>
      = mpfr::sqrt(mpfr::mpreal(3, mpfr::mpreal::get_default_prec())) / 2;

  // Constant @f$ \sqrt(5) @f$.
  template<>
    inline mpfr::mpreal
    sqrt5_v<mpfr::mpreal>
      = mpfr::sqrt(mpfr::mpreal(5, mpfr::mpreal::get_default_prec()));

  // Constant @f$ \sqrt(7) @f$.
  template<>
    inline mpfr::mpreal
    sqrt7_v<mpfr::mpreal>
      = mpfr::sqrt(mpfr::mpreal(7, mpfr::mpreal::get_default_prec()));

  // Constant @f$ \cbrt(3) @f$.
  template<>
    inline mpfr::mpreal
    cbrt3_v<mpfr::mpreal>
      = mpfr::cbrt(mpfr::mpreal(3, mpfr::mpreal::get_default_prec()));

  // Constant @f$ 1 / \sqrt(2) @f$.
  template<>
    inline mpfr::mpreal
    inv_sqrt2_v<mpfr::mpreal>
      = 1 / mpfr::sqrt(mpfr::mpreal(2, mpfr::mpreal::get_default_prec()));

} // namespace emsr

#endif // C++17

#endif // EMSR_MATH_CONSTANTS_MPREAL_H
