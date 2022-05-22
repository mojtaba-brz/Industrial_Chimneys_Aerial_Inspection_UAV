#include "rtwtypes.h"
#include "multiword_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include "atan_NHvdu6PS.h"

void atan_NHvdu6PS(creal_T *x)
{
  real_T b_t;
  real_T xi;
  real_T xr;
  if (x->im == 0.0) {
    x->re = muDoubleScalarAtan(x->re);
    x->im = 0.0;
  } else {
    xr = muDoubleScalarAbs(-x->im);
    xi = muDoubleScalarAbs(x->re);
    if ((xr > 3.3519519824856489E+153) || (xi > 3.3519519824856489E+153)) {
      if (xi == 0.0) {
        xr = 1.0 / xr;
      } else if (xr == 0.0) {
        xr = 0.0;
      } else if (xr > xi) {
        b_t = xi / xr;
        xr = (b_t * 0.0 + 1.0) / (b_t * xi + xr);
      } else if (xi == xr) {
        xr = ((xi > 0.0 ? 0.5 : -0.5) * 0.0 + (xr > 0.0 ? 0.5 : -0.5)) / xr;
      } else {
        b_t = xr / xi;
        xr = b_t / (b_t * xr + xi);
      }

      xi = 1.5707963267948966;
    } else if ((xr == 1.0) && (xi == 0.0)) {
      xr = (rtInf);
    } else if (xr == 1.0) {
      xr = muDoubleScalarLog(muDoubleScalarSqrt(muDoubleScalarSqrt(xi * xi + 4.0))
        / muDoubleScalarSqrt(xi + 2.9833362924800834E-154));
      xi = (muDoubleScalarAtan((xi + 2.9833362924800834E-154) / 2.0) +
            1.5707963267948966) / 2.0;
    } else if ((xi == 0.0) && (!(xr > 1.0))) {
      if (xr < 0.5) {
        b_t = xr + xr;
        xr = xr / (1.0 - xr) * b_t + b_t;
        if (!(xr < 2.2204460492503131E-16)) {
          xr = xr / ((xr + 1.0) - 1.0) * muDoubleScalarLog(xr + 1.0);
        }

        xr /= 2.0;
      } else if (xr == 1.0) {
        xr = (rtInf);
      } else {
        xr = (xr + xr) / (1.0 - xr);
        if ((xr > 4.503599627370496E+15) || muDoubleScalarIsNaN(xr)) {
          xr = muDoubleScalarLog(xr + 1.0);
        } else {
          xr = xr / ((xr + 1.0) - 1.0) * muDoubleScalarLog(xr + 1.0);
        }

        xr /= 2.0;
      }
    } else {
      b_t = xi + 2.9833362924800834E-154;
      xi = muDoubleScalarAtan2(2.0 * xi, (1.0 - xr) * (xr + 1.0) - (xi +
        2.9833362924800834E-154) * (xi + 2.9833362924800834E-154)) / 2.0;
      xr = xr / ((1.0 - xr) * (1.0 - xr) + b_t * b_t) * 4.0;
      b_t = muDoubleScalarAbs(xr);
      if ((b_t > 4.503599627370496E+15) || (muDoubleScalarIsInf(xr) ||
           muDoubleScalarIsNaN(xr))) {
        xr = muDoubleScalarLog(xr + 1.0);
      } else if (!(b_t < 2.2204460492503131E-16)) {
        xr = xr / ((xr + 1.0) - 1.0) * muDoubleScalarLog(xr + 1.0);
      }

      xr /= 4.0;
    }

    if (-x->im < 0.0) {
      xr = -xr;
    }

    if ((x->re < 0.0) || ((x->re == 0.0) && (-x->im < -1.0))) {
      xi = -xi;
    }

    x->re = xi;
    x->im = -xr;
  }
}
