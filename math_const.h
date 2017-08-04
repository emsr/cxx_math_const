
namespace std {
inline namespace constants { // I added this.
namespace math_constants {

  /// Euler constant @f$ e = 2.71828... @f$
  template<typename _Tp>
    inline constexpr _Tp e_t;

  /// The base-2 logarithm of the Euler constant @f$ log_2(e) @f$
  template<typename _Tp>
    inline constexpr _Tp log2e_t;

  /// The base-10 logarithm of the Euler constant @f$ log_{10}(e) @f$
  template<typename _Tp>
    inline constexpr _Tp log10e_t;

  /// The Archimedean constant @f$ \pi = 3.1415... @f$
  template<typename _Tp>
    inline constexpr _Tp pi_t;

  /// The reciprocal of Archimedes' constant @f$ 1/\pi @f$
  template<typename _Tp>
    inline constexpr _Tp invpi_t;

  /// The reciprocal square root of Archimedes' constant @f$ 1/\sqrt{\pi} @f$
  template<typename _Tp>
    inline constexpr _Tp invsqrtpi_t;

  /// The Napierian logarithm of 2 @f$ ln(2) @f$
  template<typename _Tp>
    inline constexpr _Tp ln2_t;

  /// The Napierian logarithm of 10 @f$ ln(10) @f$
  template<typename _Tp>
    inline constexpr _Tp ln10_t;

  /// The square root of 2 @f$ \sqrt{2} @f$
  template<typename _Tp>
    inline constexpr _Tp sqrt2_t;

  /// The square root of 3 @f$ \sqrt{3} @f$
  template<typename _Tp>
    inline constexpr _Tp sqrt3_t;

  /// The reciprocal square root of 3 @f$ 1 / \sqrt{3} @f$
  template<typename _Tp>
    inline constexpr _Tp invsqrt3_t;

  /// The radians per degree conversion factor @f$ \pi / 180 @f$
  template<typename _Tp>
    inline constexpr _Tp radian_t;

  /// The Euler constant @f$ \gamma_E @f$
  template<typename _Tp>
    inline constexpr _Tp egamma_t;

  /// The golden ratio @f$ \phi = (\sqrt{5} + 1)/2 @f$
  template<typename _Tp>
    inline constexpr _Tp phi_t;

  /// Catalan's constant @f$ @f$ G = 1 - 1/9 + 1/25 - 1/49 + 1/81 - ... @f$
  template<typename _Tp>
    inline constexpr _Tp catalan_t;

  /// Ape'ry's constant @f$ \zeta(3) = \pi^2/6 @f$
  template<typename _Tp>
    inline constexpr _Tp apery_t;

  /// Glaisher's constant @f$  @f$
  template<typename _Tp>
    inline constexpr _Tp glaisher_t;

  inline constexpr float
  ef = e_t<float>;

  inline constexpr float
  log2ef = log2e_t<float>;

  inline constexpr float
  log10ef = log10e_t<float>;

  inline constexpr float
  pif = pi_t<float>;

  inline constexpr float
  invpif = invpi_t<float>;

  inline constexpr float
  invsqrtpif = invsqrtpi_t<float>;

  inline constexpr float
  ln2f = ln2_t<float>;

  inline constexpr float
  ln10f = ln10_t<float>;

  inline constexpr float
  sqrt2f = sqrt2_t<float>;

  inline constexpr float
  sqrt3f = sqrt3_t<float>;

  inline constexpr float
  invsqrt3f = invsqrt3_t<float>;

  inline constexpr float
  radianf = radian_t<float>;

  inline constexpr float
  egammaf = egamma_t<float>;

  inline constexpr float
  phif = phi_t<float>;

  inline constexpr float
  catalanf = catalan_t<float>;

  inline constexpr float
  aperyf = apery_t<float>;

  inline constexpr float
  glaisherf = glaisher_t<float>;

  inline constexpr double
  e = e_t<double>;

  inline constexpr double
  log2e = log2e_t<double>;

  inline constexpr double
  log10e = log10e_t<double>;

  inline constexpr double
  pi = pi_t<double>;

  inline constexpr double
  invpi = invpi_t<double>;

  inline constexpr double
  invsqrtpi = invsqrtpi_t<double>;

  inline constexpr double
  ln2 = ln2_t<double>;

  inline constexpr double
  ln10 = ln10_t<double>;

  inline constexpr double
  sqrt2 = sqrt2_t<double>;

  inline constexpr double
  sqrt3 = sqrt3_t<double>;

  inline constexpr double
  invsqrt3 = invsqrt3_t<double>;

  inline constexpr double
  radian = radian_t<double>;

  inline constexpr double
  egamma = egamma_t<double>;

  inline constexpr double
  phi = phi_t<double>;

  inline constexpr double
  catalan = catalan_t<double>;

  inline constexpr double
  apery = apery_t<double>;

  inline constexpr double
  glaisher = glaisher_t<double>;

  inline constexpr long double
  el = e_t<long double>;

  inline constexpr long double
  log2el = log2e_t<long double>;

  inline constexpr long double
  log10el = log10e_t<long double>;

  inline constexpr long double
  pil = pi_t<long double>;

  inline constexpr long double
  invpil = invpi_t<long double>;

  inline constexpr long double
  invsqrtpil = invsqrtpi_t<long double>;

  inline constexpr long double
  ln2l = ln2_t<long double>;

  inline constexpr long double
  ln10l = ln10_t<long double>;

  inline constexpr long double
  sqrt2l = sqrt2_t<long double>;

  inline constexpr long double
  sqrt3l = sqrt3_t<long double>;

  inline constexpr long double
  invsqrt3l = invsqrt3_t<long double>;

  inline constexpr long double
  radianl = radian_t<long double>;

  inline constexpr long double
  egammal = egamma_t<long double>;

  inline constexpr long double
  phil = phi_t<long double>;

  inline constexpr long double
  catalanl = catalan_t<long double>;

  inline constexpr long double
  aperyl = apery_t<long double>;

  inline constexpr long double
  glaisherl = glaisher_t<long double>;

} // namespace math_constants
} // inline namespace constants // I added this.
} // namespace std
