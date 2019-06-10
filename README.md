# C++ Math Constants
[![Build Status](https://travis-ci.org[![Build Status](https://travis-ci.org/emsr/cxx_math_const.svg?branch=master)](https://travis-ci.org/emsr/cxx_math_const)
[![Codacy Badge](https://api.codacy.com/project/badge/Grade/221f0486a7304f0abb963cbcf910c922)](https://www.codacy.com/app/emsr/cxx_math_const?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=emsr/cxx_math_const&amp;utm_campaign=Badge_Grade)

This project collects various ideas about mathematical constants for C++.

The main effort now is to follow the effort in
[D0631R1 Math Constants](https://wg21.link/p0631).

The file math_const.h implements the latest version of that paper.

## New ideas:

There are several directions this could go once the basics are in place.

  * template<typename Constant, typename NumTp>
    class floating_point_constant
    {
      NumTp fact;
    };

  * Constant is able to belch out mantissa bits - as many as needed for the type of float NumTp.
    Actually NumTp could be floating-point, rational or fixed-point.

  * Math operations involving floating_point_constant would modify the factor and accumulate operations
    using template programming.
    Ratios need to cancel the constant.

  * Only evaluate at the end and with the best precision.

  * This could work a lot like units.


## Current state in libstdc++ and Old Ideas:

  Variable template math constants for the standard library.
  Edward M. Smith-Rowland <esmith-rowland at alionscience dot com>
  2014-03-12

  We have variable templates in C++14.  In fact pi was offered as a use case for that feature.
  We can do math constants right.  The constants in math.h are double precision
  and promote computations unless you cast or erode long double precision.
  These M_* constants are actually POSIX compatibility - std C++ does not mandate them.
  GCC has extension for long double versions suffixed by 'l'
  (but apparently no float versions with 'f' suffix).
  In any case these macros don't help with generic code.
  There are several bespoke versions of generic template math constants around libstdc++
  using all the pre-variable-template techniques and with all the annoyances outlined
  by the variable template proposal.

  'Grammar' + Bikeshedding
  I find 'm_' gives me flexibility in the 'grammar'.  We could do just '_'.  Or 'c_'.
  Dividing numbers: 1_2 is 1/2, pi_2 is pi/2. Alt. _div_ seems wordy.
  Multiples of pi: Npi (2pi, 4pi).   For some reason nobody cares about multiples of e
  but 2e that would be my proposal for 2*e<> if someone were to want.
  Function args preceded by '_' (unlike math.h!) make things easier to read.  Alt. revert that to math.h.
  Lower case because these are not macros and because that's how we roll in the std library.

  What to put in?
  Help people with intensive calculations.
  Division and sqrt are are more expensive than multiplication and integral powers.
  Logs can take a while too.
  On the other hand, logs and square roots of integers appear in series expansions of various
  functions.  Rather than having just a few, perhaps a substantial table would be in order.

  This is a superset of math.h, <ext/cmath> from libstdc++ (with different grammar).

  Prevent collision with an extra constants namespace after std.
  Add namespace versioning.
  This should go right into std not through experimental.

  Should we default to double?  Doing so might play nice with auto.

  Although it spoils the genericity of the template variable constants
  we could offer typedefs to the different precisions.  I'll hold off for now.

  I made the constants and math_constants name spaces inline for the same reason
  library literal operator namespaces are inline: using std to get the math functions
  should give you access to the constants as well.

  This would go in some <cmath> or another.
