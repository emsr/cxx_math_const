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

  auto ef          = std::math::ef;
  auto log2ef      = std::math::log2ef;
  auto log10ef     = std::math::log10ef;
  auto pif         = std::math::pif;
  auto inv_pif     = std::math::inv_pif;
  auto inv_sqrtpif = std::math::inv_sqrtpif;
  auto ln2f        = std::math::ln2f;
  auto ln10f       = std::math::ln10f;
  auto sqrt2f      = std::math::sqrt2f;
  auto sqrt3f      = std::math::sqrt3f;
  auto inv_sqrt3f  = std::math::inv_sqrt3f;
  auto egammaf     = std::math::egammaf;
  auto phif        = std::math::phif;

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

  auto el          = std::math::el;
  auto log2el      = std::math::log2el;
  auto log10el     = std::math::log10el;
  auto pil         = std::math::pil;
  auto inv_pil     = std::math::inv_pil;
  auto inv_sqrtpil = std::math::inv_sqrtpil;
  auto ln2l        = std::math::ln2l;
  auto ln10l       = std::math::ln10l;
  auto sqrt2l      = std::math::sqrt2l;
  auto sqrt3l      = std::math::sqrt3l;
  auto inv_sqrt3l  = std::math::inv_sqrt3l;
  auto egammal     = std::math::egammal;
  auto phil        = std::math::phil;
}
