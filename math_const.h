
namespace std {
inline namespace constants { // I added this.
namespace math_constants {

  /// Euler constant @f$ e = 2.71828... @f$
  /// (OEIS A001113)
  template<typename _Tp>
    inline constexpr _Tp
    e_v         = 2.7182'81828'45904'52353'60287'47135'26624'97759e+0L;

  /// The base-2 logarithm of the Euler constant @f$ log_2(e) @f$
  /// (OEIS A181171)
  template<typename _Tp>
    inline constexpr _Tp
    log2e_v     = 1.4426'95040'88896'34073'59924'68100'18921'37427e+0L;

  /// The base-10 logarithm of the Euler constant @f$ log_{10}(e) @f$
  /// (OEIS A002392)
  template<typename _Tp>
    inline constexpr _Tp
    log10e_v    = 4.3429'44819'03251'82765'11289'18916'60508'22940e-1L;

  /// The Archimedean constant @f$ \pi = 3.1415... @f$
  /// (OEIS A000796)
  template<typename _Tp>
    inline constexpr _Tp
    pi_v        = 3.1415'92653'58979'32384'62643'38327'95028'84195e+0L;
              //= 0x3.243'F6A8'885A'308D'3131'98A2'E037'0734'4A40'9382'2299'F31Dp+0

  /// The reciprocal of Archimedes' constant @f$ 1/\pi @f$
  /// (OEIS )
  template<typename _Tp>
    inline constexpr _Tp
    invpi_v     = 3.1830'98861'83790'67153'77675'26745'02872'40691e-1L;

  /// The reciprocal square root of Archimedes' constant @f$ 1/\sqrt{\pi} @f$
  /// (OEIS )
  template<typename _Tp>
    inline constexpr _Tp
    invsqrtpi_v = 5.6418'95835'47756'28694'80794'51560'77258'58438e-1L;

  /// The Napierian logarithm of 2 @f$ ln(2) @f$
  /// (OEIS A002162)
  template<typename _Tp>
    inline constexpr _Tp
    ln2_v       = 6.9314'71805'59945'30941'72321'21458'17656'80748e-1L;

  /// The Napierian logarithm of 10 @f$ ln(10) @f$
  /// (OEIS )
  template<typename _Tp>
    inline constexpr _Tp
    ln10_v      = 2.3025'85092'99404'56840'17991'45468'43642'07602e+0L;

  /// The square root of 2 @f$ \sqrt{2} @f$
  /// (OEIS )
  template<typename _Tp>
    inline constexpr _Tp
    sqrt2_v     = 1.4142'13562'37309'50488'01688'72420'96980'78569e+0L;

  /// The square root of 3 @f$ \sqrt{3} @f$
  /// (OEIS )
  template<typename _Tp>
    inline constexpr _Tp
    sqrt3_v     = 1.7320'50807'56887'72935'27446'34150'58723'66945e+0L;

  /// The reciprocal square root of 3 @f$ 1 / \sqrt{3} @f$
  /// (OEIS )
  template<typename _Tp>
    inline constexpr _Tp
    invsqrt3_v  = 5.7735'02691'89625'76450'91487'80501'95745'56475e-1L;

  /// The radians per degree conversion factor @f$ \pi / 180 @f$
  /// (OEIS )
  template<typename _Tp>
    inline constexpr _Tp
    radian_v    = 1.7453'29251'99432'95769'23690'76848'86127'13443e-2L;

  /// The Euler-Mascheroni constant @f$ \gamma_E @f$
  /// (OEIS A001620)
  template<typename _Tp>
    inline constexpr _Tp
    egamma_v    = 5.7721'56649'01532'86060'65120'90082'40243'10432e-1L;

  /// The golden ratio @f$ \phi = (\sqrt{5} + 1)/2 @f$
  /// (OEIS )
  template<typename _Tp>
    inline constexpr _Tp
    phi_v       = 1.6180'33988'74989'48482'04586'83436'56381'17720e+0L;

  /// Catalan's constant @f$ @f$ G = 1 - 1/9 + 1/25 - 1/49 + 1/81 - ... @f$
  /// (OEIS A006752)
  template<typename _Tp>
    inline constexpr _Tp
    catalan_v   = 9.1596'55941'77219'01505'46035'14932'38411'07741e-1L;

  /// Ape'ry's constant @f$ \zeta(3) = \pi^2/6 @f$
  /// (OEIS A002117)
  template<typename _Tp>
    inline constexpr _Tp
    apery_v     = 1.2020'56903'15959'42853'99738'16151'14499'90768e+0L;

  /// Glaisher's constant @f$ A =  @f$
  /// (OEIS A074962)
  template<typename _Tp>
    inline constexpr _Tp
    glaisher_v  = 1.2824'27129'10062'26368'75342'56886'97917'27767e+0L;

  // float "specializations"

  inline constexpr float
  ef = e_v<float>;

  inline constexpr float
  log2ef = log2e_v<float>;

  inline constexpr float
  log10ef = log10e_v<float>;

  inline constexpr float
  pif = pi_v<float>;

  inline constexpr float
  invpif = invpi_v<float>;

  inline constexpr float
  invsqrtpif = invsqrtpi_v<float>;

  inline constexpr float
  ln2f = ln2_v<float>;

  inline constexpr float
  ln10f = ln10_v<float>;

  inline constexpr float
  sqrt2f = sqrt2_v<float>;

  inline constexpr float
  sqrt3f = sqrt3_v<float>;

  inline constexpr float
  invsqrt3f = invsqrt3_v<float>;

  inline constexpr float
  radianf = radian_v<float>;

  inline constexpr float
  egammaf = egamma_v<float>;

  inline constexpr float
  phif = phi_v<float>;

  inline constexpr float
  catalanf = catalan_v<float>;

  inline constexpr float
  aperyf = apery_v<float>;

  inline constexpr float
  glaisherf = glaisher_v<float>;

  // double "specializations"

  inline constexpr double
  e = e_v<double>;

  inline constexpr double
  log2e = log2e_v<double>;

  inline constexpr double
  log10e = log10e_v<double>;

  inline constexpr double
  pi = pi_v<double>;

  inline constexpr double
  invpi = invpi_v<double>;

  inline constexpr double
  invsqrtpi = invsqrtpi_v<double>;

  inline constexpr double
  ln2 = ln2_v<double>;

  inline constexpr double
  ln10 = ln10_v<double>;

  inline constexpr double
  sqrt2 = sqrt2_v<double>;

  inline constexpr double
  sqrt3 = sqrt3_v<double>;

  inline constexpr double
  invsqrt3 = invsqrt3_v<double>;

  inline constexpr double
  radian = radian_v<double>;

  inline constexpr double
  egamma = egamma_v<double>;

  inline constexpr double
  phi = phi_v<double>;

  inline constexpr double
  catalan = catalan_v<double>;

  inline constexpr double
  apery = apery_v<double>;

  inline constexpr double
  glaisher = glaisher_v<double>;

  // long double "specializations"

  inline constexpr long double
  el = e_v<long double>;

  inline constexpr long double
  log2el = log2e_v<long double>;

  inline constexpr long double
  log10el = log10e_v<long double>;

  inline constexpr long double
  pil = pi_v<long double>;

  inline constexpr long double
  invpil = invpi_v<long double>;

  inline constexpr long double
  invsqrtpil = invsqrtpi_v<long double>;

  inline constexpr long double
  ln2l = ln2_v<long double>;

  inline constexpr long double
  ln10l = ln10_v<long double>;

  inline constexpr long double
  sqrt2l = sqrt2_v<long double>;

  inline constexpr long double
  sqrt3l = sqrt3_v<long double>;

  inline constexpr long double
  invsqrt3l = invsqrt3_v<long double>;

  inline constexpr long double
  radianl = radian_v<long double>;

  inline constexpr long double
  egammal = egamma_v<long double>;

  inline constexpr long double
  phil = phi_v<long double>;

  inline constexpr long double
  catalanl = catalan_v<long double>;

  inline constexpr long double
  aperyl = apery_v<long double>;

  inline constexpr long double
  glaisherl = glaisher_v<long double>;

} // namespace math_constants
} // inline namespace constants // I added this.
} // namespace std
