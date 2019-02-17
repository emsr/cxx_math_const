# C++ Math Constants
[![Build Status](https://travis-ci.org[![Build Status](https://travis-ci.org/emsr/cxx_math_const.svg?branch=master)](https://travis-ci.org/emsr/cxx_math_const)
[![Codacy Badge](https://api.codacy.com/project/badge/Grade/221f0486a7304f0abb963cbcf910c922)](https://www.codacy.com/app/emsr/cxx_math_const?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=emsr/cxx_math_const&amp;utm_campaign=Badge_Grade)

This project collects various ideas about mathematical constants for C++.

The main effort now is to follow the effort in
[D0631R1 Math Constants](https://wg21.link/p0631).

The file math_const.h has the latest.

The files cmath_variable_template and cmath_const.h were earlier, similar thoughts of my own.


New idea:

template<typename Constant, typename NumTp>
  class floating_point_constant
  {
    NumTp fact;
  };

Constant is able to belch out mantissa bits - as many as needed for the type of float NumTp.
Actually NumTp could be floating-point, rational or fixed-point.

Math operations involving floating_point_constant would modify the factor and accumulate operations
using template programming.
Ratios need to cancel the constant.

Only evaluate at the end and with the best precision.

This could work a lot like units.

