/*
 * Automatically Generated from Mathematica.
 * Thu 19 Dec 2019 16:00:25 GMT-05:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
#include<math.h>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;

inline double Sec(double x) { return 1/cos(x); }
inline double Csc(double x) { return 1/sin(x); }

#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t1433;
  double t1430;
  double t1431;
  double t1434;
  double t1422;
  double t1432;
  double t1435;
  double t1436;
  double t1438;
  double t1439;
  double t1440;
  double t1441;
  double t1423;
  double t1424;
  double t1428;
  double t1429;
  double t1442;
  double t1443;
  double t1451;
  double t1452;
  double t1453;
  t1433 = Cos(var1[2]);
  t1430 = Cos(var1[3]);
  t1431 = Sin(var1[2]);
  t1434 = Sin(var1[3]);
  t1422 = Cos(var1[4]);
  t1432 = t1430*t1431;
  t1435 = t1433*t1434;
  t1436 = t1432 + t1435;
  t1438 = t1433*t1430;
  t1439 = -1.*t1431*t1434;
  t1440 = t1438 + t1439;
  t1441 = Sin(var1[4]);
  t1423 = -1.*t1422;
  t1424 = 1. + t1423;
  t1428 = -0.4*t1424;
  t1429 = 0. + t1428;
  t1442 = 0.4*t1441;
  t1443 = 0. + t1442;
  t1451 = -1.*t1430*t1431;
  t1452 = -1.*t1433*t1434;
  t1453 = t1451 + t1452;
  p_output1[0]=0. + t1429*t1436 - 0.64*(t1422*t1436 + t1440*t1441) + t1440*t1443 + var1[0];
  p_output1[1]=0.;
  p_output1[2]=0. + t1429*t1440 + t1443*t1453 - 0.64*(t1422*t1440 + t1441*t1453) + var1[1];
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "p_LeftShin_mex.hh"

namespace SymExpression
{

void p_LeftShin_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
