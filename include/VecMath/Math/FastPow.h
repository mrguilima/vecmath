#ifndef VECMATH_MATH_FASTPOW_H
#define VECMATH_MATH_FASTPOW_H

#include "FastExp.h"
#include "FastLog.h"

namespace vecMath {
template <typename R> inline R FastPow(R x, R n) {
  return FastExp(FastLog(x) * n);
}

// Implementation from https://stackoverflow.com/questions/16443682/
template <class R>
inline constexpr R IntPow(const R base, unsigned const exponent) {
  // (parentheses not required in next line)
  return (exponent == 0)
             ? 1
             : (exponent % 2 == 0)
                   ? IntPow(base, exponent / 2) * IntPow(base, exponent / 2)
                   : base * IntPow(base, (exponent - 1) / 2) *
                         IntPow(base, (exponent - 1) / 2);
}
} // namespace vecMath

#endif // VECMATH_MATH_FASTPOW_H
