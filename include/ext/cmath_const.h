// Math extensions -*- C++ -*-

// Copyright (C) 2013-2017 Free Software Foundation, Inc.
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

/** @file ext/cmath_const.h
 *  This file is a GNU extension to the Standard C++ Library.
 */

#ifndef _GLIBCXX_EXT_CMATH_CONST_H
#define _GLIBCXX_EXT_CMATH_CONST_H 1

#include <type_traits>
#include <limits>

namespace std
{
namespace constants
{

  // A class for math constants.
  template<typename _Real>
    struct math_constants
    {
      static_assert(std::is_floating_point<_Real>::value,
		    "template argument not a floating point type");

      // Constant @f$ 4\pi @f$.
      inline static constexpr _Real __4_pi
	= 12.56637061435917295385057353311801153678L;
      // Constant @f$ 4\pi/3 @f$.
      inline static constexpr _Real __4_pi_div_3
	= 4.188790204786390984616857844372670512253L;
      // Constant @f$ 2\pi @f$.
      inline static constexpr _Real __2_pi
	= 6.283185307179586476925286766559005768391L;
      // Constant @f$ \pi @f$.
      inline static constexpr _Real __pi
	= 3.141592653589793238462643383279502884195L;
      // Constant @f$ \pi / 2 @f$.
      inline static constexpr _Real __pi_half
	= 1.570796326794896619231321691639751442098L;
      // Constant @f$ \pi / 3 @f$.
      inline static constexpr _Real __pi_third
	= 1.047197551196597746154214461093167628063L;
      // Constant @f$ \pi / 4 @f$.
      inline static constexpr _Real __pi_quarter
	= 0.785398163397448309615660845819875721049L;
      // Constant @f$ \sqrt(\pi) @f$.
      inline static constexpr _Real __root_pi
	= 1.772453850905516027298167483341145182798L;
      // Constant @f$ \cbrt(\pi) @f$.
      inline static constexpr _Real __cbrt_pi
	= 1.464591887561523263020142527263790391736L;
      // Constant @f$ \sqrt(\pi / 2) @f$.
      inline static constexpr _Real __root_pi_div_2
	= 1.253314137315500251207882642405522626505L;
      // Constant @f$ 1 / \pi @f$.
      inline static constexpr _Real __one_div_pi
	= 0.318309886183790671537767526745028724069L;
      // Constant @f$ 1 / 2\pi @f$.
      inline static constexpr _Real __one_div_2_pi
	= 0.1591549430918953357688837633725143620346L;
      // Constant @f$ 2 / \pi @f$.
      inline static constexpr _Real __two_div_pi
	= 0.636619772367581343075535053490057448138L;
      // Constant @f$ 2 / \sqrt(\pi) @f$.
      inline static constexpr _Real __two_div_root_pi
	= 1.128379167095512573896158903121545171688L;
      // Constant: @f$ \pi^2/6 @f$.
      inline static constexpr _Real __pi_sqr_div_6
	= 1.644934066848226436472415166646025189221L;
      // Constant: @f$ \sqrt{2\pi}
      inline static constexpr _Real __root_2_pi
        = 2.506628274631000502415765284811045253010L;
      // Constant: @f$ \log(\sqrt{2\pi})
      inline static constexpr _Real __ln_root_2_pi
        = 0.918938533204672741780329736405617639862L;
      // Constant: radians to degree conversion.
      inline static constexpr _Real __deg
	= _Real{180} / __pi;
      // Constant: degree to radians conversion.
      inline static constexpr _Real __rad
	= __pi / _Real{180};
      // Constant Euler's number @f$ e @f$.
      inline static constexpr _Real __e
	= 2.718281828459045235360287471352662497759L;
      // Constant @f$ 1 / e @f$.
      inline static constexpr _Real __one_div_e
	= 0.367879441171442321595523770161460867446L;
      // Constant @f$ \log_2(e) @f$.
      inline static constexpr _Real __log2_e
	= 1.442695040888963407359924681001892137427L;
      // Constant @f$ \log_10(e) @f$.
      inline static constexpr _Real __log10_e
	= 0.434294481903251827651128918916605082294L;
      // Constant @f$ \ln(2) @f$.
      inline static constexpr _Real __ln_2
	= 0.693147180559945309417232121458176568075L;
      // Constant @f$ \ln(3) @f$.
      inline static constexpr _Real __ln_3
	= 1.098612288668109691395245236922525704648L;
      // Constant @f$ \ln(10) @f$.
      inline static constexpr _Real __ln_10
	= 2.302585092994045684017991454684364207602L;
      // Constant @f$ \log(\pi) @f$.
      inline static constexpr _Real __ln_pi
	= 1.144729885849400174143427351353058711646L;
      // Constant Euler-Mascheroni @f$ \gamma_E @f$.
      inline static constexpr _Real __gamma_e
	= 0.577215664901532860606512090082402431043L;
      // Constant Golden Ratio @f$ \phi @f$.
      inline static constexpr _Real __phi
	= 1.618033988749894848204586834365638117720L;
      // Catalan's constant.
      inline static constexpr _Real __catalan
	= 0.915965594177219015054603514932384110773L;
      // Constant @f$ \sqrt(2) @f$.
      inline static constexpr _Real __root_2
	= 1.414213562373095048801688724209698078569L;
      // Constant @f$ \sqrt(3) @f$.
      inline static constexpr _Real __root_3
	= 1.732050807568877293527446341505872366945L;
      // Constant @f$ \sqrt(3) @f$.
      inline static constexpr _Real __root_3_div_2
	= 0.866025403784438646763723170752936183473L;
      // Constant @f$ \sqrt(5) @f$.
      inline static constexpr _Real __root_5
	= 2.236067977499789696409173668731276235440L;
      // Constant @f$ \sqrt(7) @f$.
      inline static constexpr _Real __root_7
	= 2.645751311064590590501615753639260425706L;
      // Constant @f$ \cbrt(3) @f$.
      inline static constexpr _Real __cbrt_3
	= 1.442249570307408382321638310780109588390L;
      // Constant @f$ 1 / \sqrt(2) @f$.
      inline static constexpr _Real __one_div_root_2
	= 0.707106781186547524400844362104849039285L;
    };

  // The following functions mirror the constants abobe but also
  // admit generic programming with non-findamental types.
  // For fundamental types, these constexpr functions return
  // the appropriate constant above.
  // Developers of multi-precision types are encouraged to overload
  // these functions calling multiprecision "constant" functions as
  // available.

  template<typename _Real>
    constexpr _Real
    const_4_pi(_Real = _Real{})
    noexcept(noexcept(std::is_fundamental<_Real>::value))
    { return math_constants<_Real>::__4_pi; }

  template<typename _Real>
    constexpr _Real
    const_4_pi_div_3(_Real = _Real{})
    noexcept(noexcept(std::is_fundamental<_Real>::value))
    { return math_constants<_Real>::__4_pi_div_3; }

  template<typename _Real>
    constexpr _Real
    const_2_pi(_Real = _Real{})
    noexcept(noexcept(std::is_fundamental<_Real>::value))
    { return math_constants<_Real>::__2_pi; }

  template<typename _Real>
    constexpr _Real
    const_pi(_Real = _Real{})
    noexcept(noexcept(std::is_fundamental<_Real>::value))
    { return math_constants<_Real>::__pi; }

  template<typename _Real>
    constexpr _Real
    const_pi_half(_Real = _Real{})
    noexcept(noexcept(std::is_fundamental<_Real>::value))
    { return math_constants<_Real>::__pi_half; }

  template<typename _Real>
    constexpr _Real
    const_pi_third(_Real = _Real{})
    noexcept(noexcept(std::is_fundamental<_Real>::value))
    { return math_constants<_Real>::__pi_third; }

  template<typename _Real>
    constexpr _Real
    const_pi_quarter(_Real = _Real{})
    noexcept(noexcept(std::is_fundamental<_Real>::value))
    { return math_constants<_Real>::__pi_quarter; }

  template<typename _Real>
    constexpr _Real
    const_root_pi(_Real = _Real{})
    noexcept(noexcept(std::is_fundamental<_Real>::value))
    { return math_constants<_Real>::__root_pi; }

  template<typename _Real>
    constexpr _Real
    const_cbrt_pi(_Real = _Real{})
    noexcept(noexcept(std::is_fundamental<_Real>::value))
    { return math_constants<_Real>::__cbrt_pi; }

  template<typename _Real>
    constexpr _Real
    const_root_pi_div_2(_Real = _Real{})
    noexcept(noexcept(std::is_fundamental<_Real>::value))
    { return math_constants<_Real>::__root_pi_div_2; }

  template<typename _Real>
    constexpr _Real
    const_one_div_pi(_Real = _Real{})
    noexcept(noexcept(std::is_fundamental<_Real>::value))
    { return math_constants<_Real>::__one_div_pi; }

  template<typename _Real>
    constexpr _Real
    const_one_div_2_pi(_Real = _Real{})
    noexcept(noexcept(std::is_fundamental<_Real>::value))
    { return math_constants<_Real>::__one_div_2_pi; }

  template<typename _Real>
    constexpr _Real
    const_two_div_pi(_Real = _Real{})
    noexcept(noexcept(std::is_fundamental<_Real>::value))
    { return math_constants<_Real>::__two_div_pi; }

  template<typename _Real>
    constexpr _Real
    const_two_div_root_pi(_Real = _Real{})
    noexcept(noexcept(std::is_fundamental<_Real>::value))
    { return math_constants<_Real>::__two_div_root_pi; }

  template<typename _Real>
    constexpr _Real
    const_pi_sqr_div_6(_Real = _Real{})
    noexcept(noexcept(std::is_fundamental<_Real>::value))
    { return math_constants<_Real>::__pi_sqr_div_6; }

  template<typename _Real>
    constexpr _Real
    const_root_2_pi(_Real = _Real{})
    noexcept(noexcept(std::is_fundamental<_Real>::value))
    { return math_constants<_Real>::__root_2_pi; }

  template<typename _Real>
    constexpr _Real
    const_ln_root_2_pi(_Real = _Real{})
    noexcept(noexcept(std::is_fundamental<_Real>::value))
    { return math_constants<_Real>::__ln_root_2_pi; }

  template<typename _Real>
    constexpr _Real
    const_deg(_Real = _Real{})
    noexcept(noexcept(std::is_fundamental<_Real>::value))
    { return math_constants<_Real>::__deg; }

  template<typename _Real>
    constexpr _Real
    const_rad(_Real = _Real{})
    noexcept(noexcept(std::is_fundamental<_Real>::value))
    { return math_constants<_Real>::__rad; }

  template<typename _Real>
    constexpr _Real
    const_e(_Real = _Real{})
    noexcept(noexcept(std::is_fundamental<_Real>::value))
    { return math_constants<_Real>::__e; }

  template<typename _Real>
    constexpr _Real
    const_one_div_e(_Real = _Real{})
    noexcept(noexcept(std::is_fundamental<_Real>::value))
    { return math_constants<_Real>::__one_div_e; }

  template<typename _Real>
    constexpr _Real
    const_log2_e(_Real = _Real{})
    noexcept(noexcept(std::is_fundamental<_Real>::value))
    { return math_constants<_Real>::__log2_e; }

  template<typename _Real>
    constexpr _Real
    const_log10_e(_Real = _Real{})
    noexcept(noexcept(std::is_fundamental<_Real>::value))
    { return math_constants<_Real>::__log10_e; }

  template<typename _Real>
    constexpr _Real
    const_ln_2(_Real = _Real{})
    noexcept(noexcept(std::is_fundamental<_Real>::value))
    { return math_constants<_Real>::__ln_2; }

  template<typename _Real>
    constexpr _Real
    const_ln_3(_Real = _Real{})
    noexcept(noexcept(std::is_fundamental<_Real>::value))
    { return math_constants<_Real>::__ln_3; }

  template<typename _Real>
    constexpr _Real
    const_ln_10(_Real = _Real{})
    noexcept(noexcept(std::is_fundamental<_Real>::value))
    { return math_constants<_Real>::__ln_10; }

  template<typename _Real>
    constexpr _Real
    const_ln_pi(_Real = _Real{})
    noexcept(noexcept(std::is_fundamental<_Real>::value))
    { return math_constants<_Real>::__ln_pi; }

  template<typename _Real>
    constexpr _Real
    const_gamma_e(_Real = _Real{})
    noexcept(noexcept(std::is_fundamental<_Real>::value))
    { return math_constants<_Real>::__gamma_e; }

  template<typename _Real>
    constexpr _Real
    const_phi(_Real = _Real{})
    noexcept(noexcept(std::is_fundamental<_Real>::value))
    { return math_constants<_Real>::__phi; }

  template<typename _Real>
    constexpr _Real
    const_catalan(_Real = _Real{})
    noexcept(noexcept(std::is_fundamental<_Real>::value))
    { return math_constants<_Real>::__catalan; }

  template<typename _Real>
    constexpr _Real
    const_root_2(_Real = _Real{})
    noexcept(noexcept(std::is_fundamental<_Real>::value))
    { return math_constants<_Real>::__root_2; }

  template<typename _Real>
    constexpr _Real
    const_root_3(_Real = _Real{})
    noexcept(noexcept(std::is_fundamental<_Real>::value))
    { return math_constants<_Real>::__root_3; }

  template<typename _Real>
    constexpr _Real
    const_root_3_div_2(_Real = _Real{})
    noexcept(noexcept(std::is_fundamental<_Real>::value))
    { return math_constants<_Real>::__root_3_div_2; }

  template<typename _Real>
    constexpr _Real
    const_root_5(_Real = _Real{})
    noexcept(noexcept(std::is_fundamental<_Real>::value))
    { return math_constants<_Real>::__root_5; }

  template<typename _Real>
    constexpr _Real
    const_root_7(_Real = _Real{})
    noexcept(noexcept(std::is_fundamental<_Real>::value))
    { return math_constants<_Real>::__root_7; }

  template<typename _Real>
    constexpr _Real
    const_cbrt_3(_Real = _Real{})
    noexcept(noexcept(std::is_fundamental<_Real>::value))
    { return math_constants<_Real>::__cbrt_3; }

  template<typename _Real>
    constexpr _Real
    const_one_div_root_2(_Real = _Real{})
    noexcept(noexcept(std::is_fundamental<_Real>::value))
    { return math_constants<_Real>::__one_div_root_2; }


} // namespace constants
} // namespace std

#endif // _GLIBCXX_EXT_CMATH_CONST_H
