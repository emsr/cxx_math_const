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

// You should have received a copy of the GNU General Public License along
// with this library; see the file COPYING3.  If not see
// <http://www.gnu.org/licenses/>.

// { dg-options "-std=gnu++2a" }
// { dg-do compile }

#include <math>

namespace gnu
{
  template<typename _Tp>
    auto e          = std::math::e_v<_Tp>;

  template<typename _Tp>
    auto log2e      = std::math::log2e_v<_Tp>;

  template<typename _Tp>
    auto log10e     = std::math::log10e_v<_Tp>;

  template<typename _Tp>
    auto pi         = std::math::pi_v<_Tp>;

  template<typename _Tp>
    auto inv_pi     = std::math::inv_pi_v<_Tp>;

  template<typename _Tp>
    auto inv_sqrtpi = std::math::inv_sqrtpi_v<_Tp>;

  template<typename _Tp>
    auto ln2        = std::math::ln2_v<_Tp>;

  template<typename _Tp>
    auto ln10       = std::math::ln10_v<_Tp>;

  template<typename _Tp>
    auto sqrt2      = std::math::sqrt2_v<_Tp>;

  template<typename _Tp>
    auto sqrt3      = std::math::sqrt3_v<_Tp>;

  template<typename _Tp>
    auto inv_sqrt3  = std::math::inv_sqrt3_v<_Tp>;

  template<typename _Tp>
    auto egamma     = std::math::egamma_v<_Tp>;

  template<typename _Tp>
    auto phi        = std::math::phi_v<_Tp>;

  auto ef          = std::math::e_v<float>;
  auto log2ef      = std::math::log2e_v<float>;
  auto log10ef     = std::math::log10e_v<float>;
  auto pif         = std::math::pi_v<float>;
  auto inv_pif     = std::math::inv_pi_v<float>;
  auto inv_sqrtpif = std::math::inv_sqrtpi_v<float>;
  auto ln2f        = std::math::ln2_v<float>;
  auto ln10f       = std::math::ln10_v<float>;
  auto sqrt2f      = std::math::sqrt2_v<float>;
  auto sqrt3f      = std::math::sqrt3_v<float>;
  auto inv_sqrt3f  = std::math::inv_sqrt3_v<float>;
  auto egammaf     = std::math::egamma_v<float>;
  auto phif        = std::math::phi_v<float>;

  auto ed          = std::math::e;
  auto log2ed      = std::math::log2e;
  auto log10ed     = std::math::log10e;
  auto pid         = std::math::pi;
  auto inv_pid     = std::math::inv_pi;
  auto inv_sqrtpid = std::math::inv_sqrtpi;
  auto ln2d        = std::math::ln2;
  auto ln10d       = std::math::ln10;
  auto sqrt2d      = std::math::sqrt2;
  auto sqrt3d      = std::math::sqrt3;
  auto inv_sqrt3d  = std::math::inv_sqrt3;
  auto egammad     = std::math::egamma;
  auto phid        = std::math::phi;

  auto el          = std::math::e_v<long double>;
  auto log2el      = std::math::log2e_v<long double>;
  auto log10el     = std::math::log10e_v<long double>;
  auto pil         = std::math::pi_v<long double>;
  auto inv_pil     = std::math::inv_pi_v<long double>;
  auto inv_sqrtpil = std::math::inv_sqrtpi_v<long double>;
  auto ln2l        = std::math::ln2_v<long double>;
  auto ln10l       = std::math::ln10_v<long double>;
  auto sqrt2l      = std::math::sqrt2_v<long double>;
  auto sqrt3l      = std::math::sqrt3_v<long double>;
  auto inv_sqrt3l  = std::math::inv_sqrt3_v<long double>;
  auto egammal     = std::math::egamma_v<long double>;
  auto phil        = std::math::phi_v<long double>;
}
