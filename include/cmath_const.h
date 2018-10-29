
// Toy implementation:

#if __cplusplus <= 201103L
# include <bits/c++14_warning.h>
#else

namespace std
{
inline namespace constants
{
inline namespace math_constants
{
  /// Constant: @f$ \pi @f$ (see POSIX @c M_PI).
  template<typename _RealType>
    constexpr _RealType
    m_pi        = 3.1415'92653'58979'32384'62643'38327'95028'84195e+0L;

  /// Constant: @f$ \pi / 2 @f$ (see POSIX @c M_PI_2).
  template<typename _RealType>
    constexpr _RealType
    m_pi_2      = 1.5707'96326'79489'66192'31321'69163'97514'42098e+0L;

  /// Constant: @f$ \pi / 3 @f$.
  template<typename _RealType>
    constexpr _RealType
    m_pi_3      = 1.0471'97551'19659'77461'54214'46109'31676'28063e+0L;

  /// Constant: @f$ \pi / 4 @f$ (see POSIX @c M_PI_4).
  template<typename _RealType>
    constexpr _RealType
    m_pi_4      = 7.8539'81633'97448'30961'56608'45819'87572'10488e-1L;

  /// Constant: @f$ 4 \pi / 3 @f$.
  template<typename _RealType>
    constexpr _RealType
    m_4pi_3     = 4.1887'90204'78639'09846'16857'84437'26705'12253e+0L;

  /// Constant: @f$ 2 \pi @f$.
  template<typename _RealType>
    constexpr _RealType
    m_2pi       = 6.2831'85307'17958'64769'25286'76655'90057'68391e+0L;

  /// Constant: @f$ 4 \pi @f$.
  template<typename _RealType>
    constexpr _RealType
    m_4pi       = 1.2566'37061'43591'72953'85057'35331'18011'53678e+1L;

  /// Constant: @f$ \sqrt{\pi / 2} @f$.
  template<typename _RealType>
    constexpr _RealType
    m_sqrt_pi_2 = 1.2533'14137'31550'02512'07882'64240'55226'26505e+0L;

  /// Constant: @f$ 1 / \pi @f$ (see POSIX @c M_1_PI).
  template<typename _RealType>
    constexpr _RealType
    m_1_pi      = 3.1830'98861'83790'67153'77675'26745'02872'40691e-1L;

  /// Constant: @f$ 2 / \pi @f$ (see POSIX @c M_2_PI).
  template<typename _RealType>
    constexpr _RealType
    m_2_pi      = 6.3661'97723'67581'34307'55350'53490'05744'81383e-1L;

  /// Constant: @f$ 1 / \sqrt{\pi} @f$.
  template<typename _RealType>
    constexpr _RealType
    m_1_sqrt_pi = 5.6418'95835'47756'28694'80794'51560'77258'58438e-1L;

  /// Constant: @f$ \sqrt{\pi} @f$.
  template<typename _RealType>
    constexpr _RealType
    m_sqrt_pi   = 1.7724'53850'90551'60272'98167'48334'11451'82797e+0L;

  /// Constant: @f$ 2 / \sqrt{\pi} @f$ (see POSIX @c M_2_SQRTPI).
  template<typename _RealType>
    constexpr _RealType
    m_2_sqrt_pi = 1.1283'79167'09551'25738'96158'90312'15451'71688e+0L;

  /// Constant: Euler's number @f$ e @f$ (see POSIX @c M_E).
  template<typename _RealType>
    constexpr _RealType
    m_e         = 2.7182'81828'45904'52353'60287'47135'26624'97759e+0L;

  /// Constant: @f$ 1 / e @f$.
  template<typename _RealType>
    constexpr _RealType
    m_1_e       = 3.6787'94411'71442'32159'55237'70161'46086'74462e-1L;

  /// Constant: @f$ \log_2(e) @f$ (see POSIX @c M_LOG2E).
  template<typename _RealType>
    constexpr _RealType
    m_log2_e    = 1.4426'95040'88896'34073'59924'68100'18921'37427e+0L;

  /// Constant: @f$ \log_2(10) @f$.
  template<typename _RealType>
    constexpr _RealType
    m_log2_10   = 3.3219'28094'88736'23478'70319'42948'93901'75867e+0L;

  /// Constant: @f$ \log_10(2) @f$.
  template<typename _RealType>
    constexpr _RealType
    m_log10_2   = 3.0102'99956'63981'19521'37388'94724'49302'67680e-1L;

  /// Constant: @f$ \log_10(e) @f$ (see POSIX @c M_LOG10E).
  template<typename _RealType>
    constexpr _RealType
    m_log10_e   = 4.3429'44819'03251'82765'11289'18916'60508'22940e-1L;

  /// Constant: @f$ \log_10(pi) @f$.
  template<typename _RealType>
    constexpr _RealType
    m_log10_pi  = 4.9714'98726'94133'85435'12682'88290'89887'36507e-1L;

  /// Constant: @f$ \ln(2) @f$ (see POSIX @c M_LN2).
  template<typename _RealType>
    constexpr _RealType
    m_ln_2      = 6.9314'71805'59945'30941'72321'21458'17656'80748e-1L;

  /// Constant: @f$ \ln(3) @f$.
  template<typename _RealType>
    constexpr _RealType
    m_ln_3      = 1.0986'12288'66810'96913'95245'23692'25257'04648e+0L;

  /// Constant: @f$ \ln(10)@f$ (see POSIX @c M_LN10).
  template<typename _RealType>
    constexpr _RealType
    m_ln_10     = 2.3025'85092'99404'56840'17991'45468'43642'07602e+0L;

  /// Constant: Euler-Mascheroni @f$ \gamma_E @f$.
  template<typename _RealType>
    constexpr _RealType
    m_gamma_e   = 5.7721'56649'01532'86060'65120'90082'40243'10432e-1L;

  /// Constant: Golden Ratio @f$ \phi = (1 + \sqrt{5})/2 @f$.
  template<typename _RealType>
    constexpr _RealType
    m_phi       = 1.6180'33988'74989'48482'04586'83436'56381'17720e+0L;

  /// Constant: @f$ \sqrt{2}@f$ (see POSIX @c M_SQRT2).
  template<typename _RealType>
    constexpr _RealType
    m_sqrt_2    = 1.4142'13562'37309'50488'01688'72420'96980'78569e+0L;

  /// Constant: @f$ \sqrt{3} @f$.
  template<typename _RealType>
    constexpr _RealType
    m_sqrt_3    = 1.7320'50807'56887'72935'27446'34150'58723'66945e+0L;

  /// Constant: @f$ \sqrt{5} @f$.
  template<typename _RealType>
    constexpr _RealType
    m_sqrt_5    = 2.2360'67977'49978'96964'09173'66873'12762'35440e+0L;

  /// Constant: @f$ \sqrt{7} @f$.
  template<typename _RealType>
    constexpr _RealType
    m_sqrt_7    = 2.6457'51311'06459'05905'01615'75363'92604'25706e+0L;

  /// Constant: @f$ 1 / \sqrt{2}@f$ (see POSIX @c M_SQRT1_2).
  template<typename _RealType>
    constexpr _RealType
    m_1_sqrt_2  = 7.0710'67811'86547'52440'08443'62104'84903'92845e-1L;

  /// Constant: Catalan's @f$ G = 1 - 1/9 + 1/25 - 1/49 + 1/81 - ... @f$.
  template<typename _RealType>
    constexpr _RealType
    m_catalan   = 9.1596'55941'77219'01505'46035'14932'38411'07741e-1L;

  /// Constant: @f$ \pi^2/6 @f$.
  template<typename _RealType>
    constexpr _RealType
    m_pi2_6     = 1.6449'34066'84822'64364'72415'16664'60251'89218e+0L;

} // inline namespace math_constants
} // inline namespace constants
} // namespace std

#endif // C++14
