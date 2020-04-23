/*
 * Automatically Generated from Mathematica.
 * Thu 19 Dec 2019 16:00:27 GMT-05:00
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
  double t1456;
  double t1459;
  double t1455;
  double t1460;
  double t1443;
  double t1458;
  double t1463;
  double t1464;
  double t1466;
  double t1467;
  double t1468;
  double t1469;
  double t1444;
  double t1448;
  double t1453;
  double t1454;
  double t1470;
  double t1473;
  double t1481;
  double t1482;
  double t1483;
  double t1465;
  double t1474;
  double t1475;
  double t1476;
  double t1477;
  double t1478;
  double t1479;
  double t1480;
  double t1484;
  double t1485;
  double t1486;
  double t1487;
  double t1488;
  double t1489;
  double t1491;
  double t1492;
  double t1493;
  t1456 = Cos(var1[3]);
  t1459 = Sin(var1[2]);
  t1455 = Cos(var1[2]);
  t1460 = Sin(var1[3]);
  t1443 = Cos(var1[4]);
  t1458 = t1455*t1456;
  t1463 = -1.*t1459*t1460;
  t1464 = t1458 + t1463;
  t1466 = -1.*t1456*t1459;
  t1467 = -1.*t1455*t1460;
  t1468 = t1466 + t1467;
  t1469 = Sin(var1[4]);
  t1444 = -1.*t1443;
  t1448 = 1. + t1444;
  t1453 = -0.4*t1448;
  t1454 = 0. + t1453;
  t1470 = 0.4*t1469;
  t1473 = 0. + t1470;
  t1481 = -1.*t1455*t1456;
  t1482 = t1459*t1460;
  t1483 = t1481 + t1482;
  t1465 = t1454*t1464;
  t1474 = t1468*t1473;
  t1475 = t1443*t1464;
  t1476 = t1468*t1469;
  t1477 = t1475 + t1476;
  t1478 = -0.64*t1477;
  t1479 = t1465 + t1474 + t1478;
  t1480 = t1454*t1468;
  t1484 = t1483*t1473;
  t1485 = t1443*t1468;
  t1486 = t1483*t1469;
  t1487 = t1485 + t1486;
  t1488 = -0.64*t1487;
  t1489 = t1480 + t1484 + t1488;
  t1491 = t1456*t1459;
  t1492 = t1455*t1460;
  t1493 = t1491 + t1492;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=1.;
  p_output1[6]=t1479;
  p_output1[7]=0;
  p_output1[8]=t1489;
  p_output1[9]=t1479;
  p_output1[10]=0;
  p_output1[11]=t1489;
  p_output1[12]=0.4*t1443*t1464 - 0.4*t1469*t1493 - 0.64*(t1475 - 1.*t1469*t1493);
  p_output1[13]=0;
  p_output1[14]=0.4*t1443*t1468 - 0.4*t1464*t1469 - 0.64*(-1.*t1464*t1469 + t1485);
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 7, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jp_LeftShin_mex.hh"

namespace SymExpression
{

void Jp_LeftShin_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
