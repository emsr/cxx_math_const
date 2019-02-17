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

/** @file ext/math_const.h
 *  This file is a GNU extension to the Standard C++ Library.
 */

#ifndef _GLIBCXX_EXT_MATH_CONST_H
#define _GLIBCXX_EXT_MATH_CONST_H 1

#include <type_traits>
#include <limits>

namespace std
{
namespace constants
{

  // Constant @f$ 4\pi @f$.
  template<typename _Tp>
    inline static constexpr _Tp
    __4_pi_v           = _Tp{12.566'37061'43591'72953'85057'35331'18011'53678L};

  // Constant @f$ 4\pi/3 @f$.
  template<typename _Tp>
    inline constexpr _Tp
    __4_pi_div_3_v     = _Tp{4.1887'90204'78639'09846'16857'84437'26705'12253L};

  // Constant @f$ 2\pi @f$.
  template<typename _Tp>
    inline constexpr _Tp
    __2_pi_v           = _Tp{6.2831'85307'17958'64769'25286'76655'90057'68391L};

  // Constant @f$ \pi @f$.
  template<typename _Tp>
    inline constexpr _Tp
    __pi_v             = _Tp{3.1415'92653'58979'32384'62643'38327'95028'84195L};

  // Constant @f$ \pi / 2 @f$.
  template<typename _Tp>
    inline constexpr _Tp
    __pi_half_v        = _Tp{1.5707'96326'79489'66192'31321'69163'97514'42098L};

  // Constant @f$ \pi / 3 @f$.
  template<typename _Tp>
    inline constexpr _Tp
    __pi_third_v       = _Tp{1.0471'97551'19659'77461'54214'46109'31676'28063L};

  // Constant @f$ \pi / 4 @f$.
  template<typename _Tp>
    inline constexpr _Tp
    __pi_quarter_v     = _Tp{0.7853'98163'39744'83096'15660'84581'98757'21049L};

  // Constant @f$ \sqrt(\pi) @f$.
  template<typename _Tp>
    inline constexpr _Tp
    __root_pi_v        = _Tp{1.7724'53850'90551'60272'98167'48334'11451'82798L};

  // Constant @f$ \cbrt(\pi) @f$.
  template<typename _Tp>
    inline constexpr _Tp
    __cbrt_pi_v        = _Tp{1.4645'91887'56152'32630'20142'52726'37903'91736L};

  // Constant @f$ \sqrt(\pi / 2) @f$.
  template<typename _Tp>
    inline constexpr _Tp
    __root_pi_div_2_v  = _Tp{1.2533'14137'31550'02512'07882'64240'55226'26505L};

  // Constant @f$ 1 / \pi @f$.
  template<typename _Tp>
    inline constexpr _Tp
    __one_div_pi_v     = _Tp{0.3183'09886'18379'06715'37767'52674'50287'24069L};

  // Constant @f$ 1 / 2\pi @f$.
  template<typename _Tp>
    inline constexpr _Tp
    __one_div_2_pi_v   = _Tp{0.1591'54943'09189'53357'68883'76337'25143'62035L};

  // Constant @f$ 2 / \pi @f$.
  template<typename _Tp>
    inline constexpr _Tp
    __two_div_pi_v     = _Tp{0.6366'19772'36758'13430'75535'05349'00574'48138L};

  // Constant @f$ 2 / \sqrt(\pi) @f$.
  template<typename _Tp>
    inline constexpr _Tp
    __two_div_root_pi_v= _Tp{1.1283'79167'09551'25738'96158'90312'15451'71688L};

  // Constant: @f$ \pi^2/6 @f$.
  template<typename _Tp>
    inline constexpr _Tp
    __pi_sqr_div_6_v   = _Tp{1.6449'34066'84822'64364'72415'16664'60251'89221L};

  // Constant: @f$ \sqrt{2\pi}
  template<typename _Tp>
    inline constexpr _Tp
    __root_2_pi_v      = _Tp{2.5066'28274'63100'05024'15765'28481'10452'53010L};

  // Constant: @f$ \log(\sqrt{2\pi})
  template<typename _Tp>
    inline constexpr _Tp
    __ln_root_2_pi_v   = _Tp{0.9189'38533'20467'27417'80329'73640'56176'39862L};

  // Constant: radians to degree conversion.
  template<typename _Tp>
    inline constexpr _Tp
    __deg_v            = _Tp{180} / __pi_v<_Tp>;

  // Constant: degree to radians conversion.
  template<typename _Tp>
    inline constexpr _Tp
    __rad_v            = __pi_v<_Tp> / _Tp{180};

  // Constant Euler's number @f$ e @f$.
  template<typename _Tp>
    inline constexpr _Tp
    __e_v              = _Tp{2.7182'81828'45904'52353'60287'47135'26624'97759L};

  // Constant @f$ 1 / e @f$.
  template<typename _Tp>
    inline constexpr _Tp
    __one_div_e_v      = _Tp{0.3678'79441'17144'23215'95523'77016'14608'67446L};

  // Constant @f$ \log_2(e) @f$.
  template<typename _Tp>
    inline constexpr _Tp
    __log2_e_v         = _Tp{1.4426'95040'88896'34073'59924'68100'18921'37427L};

  // Constant @f$ \log_10(e) @f$.
  template<typename _Tp>
    inline constexpr _Tp
    __log10_e_v        = _Tp{0.4342'94481'90325'18276'51128'91891'66050'82294L};

  // Constant @f$ \ln(2) @f$.
  template<typename _Tp>
    inline constexpr _Tp
    __ln_2_v           = _Tp{0.6931'47180'55994'53094'17232'12145'81765'68075L};

  // Constant @f$ \ln(3) @f$.
  template<typename _Tp>
    inline constexpr _Tp
    __ln_3_v           = _Tp{1.0986'12288'66810'96913'95245'23692'25257'04648L};

  // Constant @f$ \ln(10) @f$.
  template<typename _Tp>
    inline constexpr _Tp
    __ln_10_v          = _Tp{2.3025'85092'99404'56840'17991'45468'43642'07602L};

  // Constant @f$ \log(\pi) @f$.
  template<typename _Tp>
    inline constexpr _Tp
    __ln_pi_v          = _Tp{1.1447'29885'84940'01741'43427'35135'30587'11646L};

  // Constant Euler-Mascheroni @f$ \gamma_E @f$.
  template<typename _Tp>
    inline constexpr _Tp
    __gamma_e_v        = _Tp{0.5772'15664'90153'28606'06512'09008'24024'31043L};

  // Constant Golden Ratio @f$ \phi @f$.
  template<typename _Tp>
    inline constexpr _Tp
    __phi_v            = _Tp{1.6180'33988'74989'48482'04586'83436'56381'17720L};

  // Catalan's constant.
  template<typename _Tp>
    inline constexpr _Tp
    __catalan_v        = _Tp{0.9159'65594'17721'90150'54603'51493'23841'10773L};

  // Constant @f$ \sqrt(2) @f$.
  template<typename _Tp>
    inline constexpr _Tp
    __root_2_v         = _Tp{1.4142'13562'37309'50488'01688'72420'96980'78569L};

  // Constant @f$ \sqrt(3) @f$.
  template<typename _Tp>
    inline constexpr _Tp
    __root_3_v         = _Tp{1.7320'50807'56887'72935'27446'34150'58723'66945L};

  // Constant @f$ \sqrt(3) @f$.
  template<typename _Tp>
    inline constexpr _Tp
    __root_3_div_2_v   = _Tp{0.8660'25403'78443'86467'63723'17075'29361'83473L};

  // Constant @f$ \sqrt(5) @f$.
  template<typename _Tp>
    inline constexpr _Tp
    __root_5_v         = _Tp{2.2360'67977'49978'96964'09173'66873'12762'35440L};

  // Constant @f$ \sqrt(7) @f$.
  template<typename _Tp>
    inline constexpr _Tp
    __root_7_v         = _Tp{2.6457'51311'06459'05905'01615'75363'92604'25706L};

  // Constant @f$ \cbrt(3) @f$.
  template<typename _Tp>
    inline constexpr _Tp
    __cbrt_3_v         = _Tp{1.4422'49570'30740'83823'21638'31078'01095'88390L};

  // Constant @f$ 1 / \sqrt(2) @f$.
  template<typename _Tp>
    inline constexpr _Tp
    __one_div_root_2_v = _Tp{0.7071'06781'18654'75244'00844'36210'48490'39285L};

  // float "specializations"

  inline constexpr float
  __4_pif 	      = __4_pi_v<float>;

  inline constexpr float
  __4_pi_div_3f       = __4_pi_div_3_v<float>;

  inline constexpr float
  __2_pif 	      = __2_pi_v<float>;

  inline constexpr float
  __pif 	      = __pi_v<float>;

  inline constexpr float
  __pi_halff 	      = __pi_half_v<float>;

  inline constexpr float
  __pi_thirdf 	      = __pi_third_v<float>;

  inline constexpr float
  __pi_quarterf       = __pi_quarter_v<float>;

  inline constexpr float
  __root_pif 	      = __root_pi_v<float>;

  inline constexpr float
  __cbrt_pif 	      = __cbrt_pi_v<float>;

  inline constexpr float
  __root_pi_div_2f    = __root_pi_div_2_v<float>;

  inline constexpr float
  __one_div_pif       = __one_div_pi_v<float>;

  inline constexpr float
  __one_div_2_pif     = __one_div_2_pi_v<float>;

  inline constexpr float
  __two_div_pif       = __two_div_pi_v<float>;

  inline constexpr float
  __two_div_root_pif  = __two_div_root_pi_v<float>;

  inline constexpr float
  __pi_sqr_div_6f     = __pi_sqr_div_6_v<float>;

  inline constexpr float
  __root_2_pif        = __root_2_pi_v<float>;

  inline constexpr float
  __ln_root_2_pif     = __ln_root_2_pi_v<float>;

  inline constexpr float
  __degf 	      = __deg_v<float>;

  inline constexpr float
  __radf              = __rad_v<float>;

  inline constexpr float
  __ef                = __e_v<float>;

  inline constexpr float
  __one_div_ef        = __one_div_e_v<float>;

  inline constexpr float
  __log2_ef 	      = __log2_e_v<float>;

  inline constexpr float
  __log10_ef 	      = __log10_e_v<float>;

  inline constexpr float
  __ln_2f 	      = __ln_2_v<float>;

  inline constexpr float
  __ln_3f 	      = __ln_3_v<float>;

  inline constexpr float
  __ln_10f 	      = __ln_10_v<float>;

  inline constexpr float
  __ln_pif 	      = __ln_pi_v<float>;

  inline constexpr float
  __gamma_ef 	      = __gamma_e_v<float>;

  inline constexpr float
  __phif 	      = __phi_v<float>;

  inline constexpr float
  __catalanf 	      = __catalan_v<float>;

  inline constexpr float
  __root_2f 	      = __root_2_v<float>;

  inline constexpr float
  __root_3f 	      = __root_3_v<float>;

  inline constexpr float
  __root_3_div_2f     = __root_3_div_2_v<float>;

  inline constexpr float
  __root_5f 	      = __root_5_v<float>;

  inline constexpr float
  __root_7f 	      = __root_7_v<float>;

  inline constexpr float
  __cbrt_3f 	      = __cbrt_3_v<float>;

  inline constexpr float
  __one_div_root_2f   = __one_div_root_2_v<float>;

  // double "specializations"

  inline constexpr double
  __4_pi  	      = __4_pi_v<double>;

  inline constexpr double
  __4_pi_div_3        = __4_pi_div_3_v<double>;

  inline constexpr double
  __2_pi  	      = __2_pi_v<double>;

  inline constexpr double
  __pi  	      = __pi_v<double>;

  inline constexpr double
  __pi_half  	      = __pi_half_v<double>;

  inline constexpr double
  __pi_third  	      = __pi_third_v<double>;

  inline constexpr double
  __pi_quarter        = __pi_quarter_v<double>;

  inline constexpr double
  __root_pi  	      = __root_pi_v<double>;

  inline constexpr double
  __cbrt_pi  	      = __cbrt_pi_v<double>;

  inline constexpr double
  __root_pi_div_2     = __root_pi_div_2_v<double>;

  inline constexpr double
  __one_div_pi        = __one_div_pi_v<double>;

  inline constexpr double
  __one_div_2_pi      = __one_div_2_pi_v<double>;

  inline constexpr double
  __two_div_pi        = __two_div_pi_v<double>;

  inline constexpr double
  __two_div_root_pi   = __two_div_root_pi_v<double>;

  inline constexpr double
  __pi_sqr_div_6      = __pi_sqr_div_6_v<double>;

  inline constexpr double
  __root_2_pi         = __root_2_pi_v<double>;

  inline constexpr double
  __ln_root_2_pi      = __ln_root_2_pi_v<double>;

  inline constexpr double
  __deg  	      = __deg_v<double>;

  inline constexpr double
  __rad               = __rad_v<double>;

  inline constexpr double
  __e                 = __e_v<double>;

  inline constexpr double
  __one_div_e         = __one_div_e_v<double>;

  inline constexpr double
  __log2_e  	      = __log2_e_v<double>;

  inline constexpr double
  __log10_e  	      = __log10_e_v<double>;

  inline constexpr double
  __ln_2  	      = __ln_2_v<double>;

  inline constexpr double
  __ln_3  	      = __ln_3_v<double>;

  inline constexpr double
  __ln_10  	      = __ln_10_v<double>;

  inline constexpr double
  __ln_pi  	      = __ln_pi_v<double>;

  inline constexpr double
  __gamma_e  	      = __gamma_e_v<double>;

  inline constexpr double
  __phi  	      = __phi_v<double>;

  inline constexpr double
  __catalan  	      = __catalan_v<double>;

  inline constexpr double
  __root_2  	      = __root_2_v<double>;

  inline constexpr double
  __root_3  	      = __root_3_v<double>;

  inline constexpr double
  __root_3_div_2      = __root_3_div_2_v<double>;

  inline constexpr double
  __root_5  	      = __root_5_v<double>;

  inline constexpr double
  __root_7  	      = __root_7_v<double>;

  inline constexpr double
  __cbrt_3  	      = __cbrt_3_v<double>;

  inline constexpr double
  __one_div_root_2    = __one_div_root_2_v<double>;

  // long double "specializations"

  inline constexpr long double
  __4_pil 	      = __4_pi_v<long double>;

  inline constexpr long double
  __4_pi_div_3l       = __4_pi_div_3_v<long double>;

  inline constexpr long double
  __2_pil 	      = __2_pi_v<long double>;

  inline constexpr long double
  __pil 	      = __pi_v<long double>;

  inline constexpr long double
  __pi_halfl 	      = __pi_half_v<long double>;

  inline constexpr long double
  __pi_thirdl 	      = __pi_third_v<long double>;

  inline constexpr long double
  __pi_quarterl       = __pi_quarter_v<long double>;

  inline constexpr long double
  __root_pil 	      = __root_pi_v<long double>;

  inline constexpr long double
  __cbrt_pil 	      = __cbrt_pi_v<long double>;

  inline constexpr long double
  __root_pi_div_2l    = __root_pi_div_2_v<long double>;

  inline constexpr long double
  __one_div_pil       = __one_div_pi_v<long double>;

  inline constexpr long double
  __one_div_2_pil     = __one_div_2_pi_v<long double>;

  inline constexpr long double
  __two_div_pil       = __two_div_pi_v<long double>;

  inline constexpr long double
  __two_div_root_pil  = __two_div_root_pi_v<long double>;

  inline constexpr long double
  __pi_sqr_div_6l     = __pi_sqr_div_6_v<long double>;

  inline constexpr long double
  __root_2_pil        = __root_2_pi_v<long double>;

  inline constexpr long double
  __ln_root_2_pil     = __ln_root_2_pi_v<long double>;

  inline constexpr long double
  __degl 	      = __deg_v<long double>;

  inline constexpr long double
  __radl              = __rad_v<long double>;

  inline constexpr long double
  __el                = __e_v<long double>;

  inline constexpr long double
  __one_div_el        = __one_div_e_v<long double>;

  inline constexpr long double
  __log2_el 	      = __log2_e_v<long double>;

  inline constexpr long double
  __log10_el 	      = __log10_e_v<long double>;

  inline constexpr long double
  __ln_2l 	      = __ln_2_v<long double>;

  inline constexpr long double
  __ln_3l 	      = __ln_3_v<long double>;

  inline constexpr long double
  __ln_10l 	      = __ln_10_v<long double>;

  inline constexpr long double
  __ln_pil 	      = __ln_pi_v<long double>;

  inline constexpr long double
  __gamma_el 	      = __gamma_e_v<long double>;

  inline constexpr long double
  __phil 	      = __phi_v<long double>;

  inline constexpr long double
  __catalanl 	      = __catalan_v<long double>;

  inline constexpr long double
  __root_2l 	      = __root_2_v<long double>;

  inline constexpr long double
  __root_3l 	      = __root_3_v<long double>;

  inline constexpr long double
  __root_3_div_2l     = __root_3_div_2_v<long double>;

  inline constexpr long double
  __root_5l 	      = __root_5_v<long double>;

  inline constexpr long double
  __root_7l 	      = __root_7_v<long double>;

  inline constexpr long double
  __cbrt_3l 	      = __cbrt_3_v<long double>;

  inline constexpr long double
  __one_div_root_2l   = __one_div_root_2_v<long double>;


} // namespace constants
} // namespace std

#endif // _GLIBCXX_EXT_MATH_CONST_H
