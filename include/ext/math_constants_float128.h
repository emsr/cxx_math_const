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

/** @file include/ext/math_constants_float128.h
 *  This file is a GNU extension to the Standard C++ Library.
 */

#ifndef _EXT_MATH_CONSTANTS_FLOAT128_H
#define _EXT_MATH_CONSTANTS_FLOAT128_H 1

#pragma GCC system_header

#if __cplusplus >= 201703L
# include <bits/c++0x_warning.h>
#else

#include <math_constants_float128.h>

namespace __gnu_cxx
{
namespace math
{
//_GLIBCXX_BEGIN_NAMESPACE_VERSION

  // Constant @f$ 4\pi @f$.
  template<>
    inline constexpr __float128
    __4_pi_v
      = 12.566'37061'43591'72953'85057'35331'18011'53678Q;

  // Constant @f$ 4\pi/3 @f$.
  template<>
    inline constexpr __float128
    __4_pi_div_3_v
      = 4.1887'90204'78639'09846'16857'84437'26705'12253Q;

  // Constant @f$ 2\pi @f$.
  template<>
    inline constexpr __float128
    __2_pi_v
      = 6.2831'85307'17958'64769'25286'76655'90057'68391Q;

  // Constant @f$ \pi @f$.
  template<>
    inline constexpr __float128
    __pi_v
      = 3.1415'92653'58979'32384'62643'38327'95028'84195Q;

  // Constant @f$ \pi / 2 @f$.
  template<>
    inline constexpr __float128
    __pi_half_v
      = 1.5707'96326'79489'66192'31321'69163'97514'42098Q;

  // Constant @f$ \pi / 3 @f$.
  template<>
    inline constexpr __float128
    __pi_third_v
      = 1.0471'97551'19659'77461'54214'46109'31676'28063Q;

  // Constant @f$ \pi / 4 @f$.
  template<>
    inline constexpr __float128
    __pi_quarter_v
      = 0.7853'98163'39744'83096'15660'84581'98757'21049Q;

  // Constant @f$ \sqrt(\pi) @f$.
  template<>
    inline constexpr __float128
    __root_pi_v
      = 1.7724'53850'90551'60272'98167'48334'11451'82798Q;

  // Constant @f$ \cbrt(\pi) @f$.
  template<>
    inline constexpr __float128
    __cbrt_pi_v
      = 1.4645'91887'56152'32630'20142'52726'37903'91736Q;

  // Constant @f$ \sqrt(\pi / 2) @f$.
  template<>
    inline constexpr __float128
    __root_pi_div_2_v
      = 1.2533'14137'31550'02512'07882'64240'55226'26505Q;

  // Constant @f$ 1 / \pi @f$.
  template<>
    inline constexpr __float128
    __one_div_pi_v
      = 0.3183'09886'18379'06715'37767'52674'50287'24069Q;

  // Constant @f$ 1 / 2\pi @f$.
  template<>
    inline constexpr __float128
    __one_div_2_pi_v
      = 0.1591'54943'09189'53357'68883'76337'25143'62035Q;

  // Constant @f$ 2 / \pi @f$.
  template<>
    inline constexpr __float128
    __two_div_pi_v
      = 0.6366'19772'36758'13430'75535'05349'00574'48138Q;

  // Constant @f$ 1 / \sqrt(\pi) @f$.
  template<>
    inline constexpr __float128
    __one_div_root_pi_v
      = 5.6418'95835'47756'28694'80794'51560'77258'58438e-1Q;

  // Constant @f$ 2 / \sqrt(\pi) @f$.
  template<>
    inline constexpr __float128
    __two_div_root_pi_v
      = 1.1283'79167'09551'25738'96158'90312'15451'71688Q;

  // Constant: @f$ \pi^2/6 @f$.
  template<>
    inline constexpr __float128
    __pi_sqr_div_6_v
      = 1.6449'34066'84822'64364'72415'16664'60251'89221Q;

  // Constant: @f$ \sqrt{2\pi}
  template<>
    inline constexpr __float128
    __root_2_pi_v
      = 2.5066'28274'63100'05024'15765'28481'10452'53010Q;

  // Constant: @f$ \log(\sqrt{2\pi})
  template<>
    inline constexpr __float128
    __ln_root_2_pi_v
      = 0.9189'38533'20467'27417'80329'73640'56176'39862Q;

  // Constant: radians to degree conversion.
  template<>
    inline constexpr __float128
    __deg_v
      = 180} / __pi_v;

  // Constant: degree to radians conversion.
  template<>
    inline constexpr __float128
    __rad_v
      = __pi_v / 180};

  // Constant Euler's number @f$ e @f$.
  template<>
    inline constexpr __float128
    __e_v
      = 2.7182'81828'45904'52353'60287'47135'26624'97759Q;

  // Constant @f$ 1 / e @f$.
  template<>
    inline constexpr __float128
    __one_div_e_v
      = 0.3678'79441'17144'23215'95523'77016'14608'67446Q;

  // Constant @f$ \log_2(e) @f$.
  template<>
    inline constexpr __float128
    __log2_e_v
      = 1.4426'95040'88896'34073'59924'68100'18921'37427Q;

  // Constant @f$ \log_10(e) @f$.
  template<>
    inline constexpr __float128
    __log10_e_v
      = 0.4342'94481'90325'18276'51128'91891'66050'82294Q;

  // Constant @f$ \ln(2) @f$.
  template<>
    inline constexpr __float128
    __ln_2_v
      = 0.6931'47180'55994'53094'17232'12145'81765'68075Q;

  // Constant @f$ \ln(3) @f$.
  template<>
    inline constexpr __float128
    __ln_3_v
      = 1.0986'12288'66810'96913'95245'23692'25257'04648Q;

  // Constant @f$ \ln(10) @f$.
  template<>
    inline constexpr __float128
    __ln_10_v
      = 2.3025'85092'99404'56840'17991'45468'43642'07602Q;

  // Constant @f$ \log(\pi) @f$.
  template<>
    inline constexpr __float128
    __ln_pi_v
      = 1.1447'29885'84940'01741'43427'35135'30587'11646Q;

  // Constant Euler-Mascheroni @f$ \gamma_E @f$.
  template<>
    inline constexpr __float128
    __gamma_e_v
      = 0.5772'15664'90153'28606'06512'09008'24024'31043Q;

  // Constant Golden Ratio @f$ \phi @f$.
  template<>
    inline constexpr __float128
    __phi_v
      = 1.6180'33988'74989'48482'04586'83436'56381'17720Q;

  // Catalan's constant.
  template<>
    inline constexpr __float128
    __catalan_v
      = 0.9159'65594'17721'90150'54603'51493'23841'10773Q;

  // Constant @f$ \sqrt(2) @f$.
  template<>
    inline constexpr __float128
    __root_2_v
      = 1.4142'13562'37309'50488'01688'72420'96980'78569Q;

  // Constant @f$ \sqrt(3) @f$.
  template<>
    inline constexpr __float128
    __root_3_v
      = 1.7320'50807'56887'72935'27446'34150'58723'66945Q;

  // Constant @f$ \sqrt(3) @f$.
  template<>
    inline constexpr __float128
    __root_3_div_2_v
      = 0.8660'25403'78443'86467'63723'17075'29361'83473Q;

  // Constant @f$ \sqrt(5) @f$.
  template<>
    inline constexpr __float128
    __root_5_v
      = 2.2360'67977'49978'96964'09173'66873'12762'35440Q;

  // Constant @f$ \sqrt(7) @f$.
  template<>
    inline constexpr __float128
    __root_7_v
      = 2.6457'51311'06459'05905'01615'75363'92604'25706Q;

  // Constant @f$ \cbrt(3) @f$.
  template<>
    inline constexpr __float128
    __cbrt_3_v
      = 1.4422'49570'30740'83823'21638'31078'01095'88390Q;

  // Constant @f$ 1 / \sqrt(2) @f$.
  template<>
    inline constexpr __float128
    __one_div_root_2_v
      = 0.7071'06781'18654'75244'00844'36210'48490'39285Q;

//_GLIBCXX_END_NAMESPACE_VERSION
} // namespace math
} // namespace __gnu_cxx

#endif // C++17

#endif // _EXT_MATH_CONSTANTS_FLOAT128_H
