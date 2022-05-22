#include "rtwtypes.h"
#include "multiword_types.h"
#include "rt_nonfinite.h"
#include <math.h>
#include "mwmathutil.h"
#include "iseq_sJSIRDHq.h"

boolean_T iseq_sJSIRDHq(real_T x, real_T y)
{
  real_T absx;
  int32_T exponent;
  boolean_T p;
  absx = muDoubleScalarAbs(y / 2.0);
  if ((!muDoubleScalarIsInf(absx)) && (!muDoubleScalarIsNaN(absx))) {
    if (absx <= 2.2250738585072014E-308) {
      absx = 4.94065645841247E-324;
    } else {
      frexp(absx, &exponent);
      absx = ldexp(1.0, exponent - 53);
    }
  } else {
    absx = (rtNaN);
  }

  if ((muDoubleScalarAbs(y - x) < absx) || (muDoubleScalarIsInf(x) &&
       muDoubleScalarIsInf(y) && ((x > 0.0) == (y > 0.0)))) {
    p = true;
  } else {
    p = false;
  }

  return p;
}
