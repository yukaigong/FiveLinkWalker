/*
 * Automatically Generated from Mathematica.
 * Thu 19 Dec 2019 16:00:30 GMT-05:00
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
  double t1550;
  double t1541;
  double t1547;
  double t1551;
  double t1558;
  double t1540;
  double t1559;
  double t1562;
  double t1563;
  double t1548;
  double t1553;
  double t1554;
  double t1566;
  double t1567;
  double t1568;
  double t1564;
  double t1579;
  double t1580;
  double t1581;
  double t1582;
  double t1583;
  double t1585;
  double t1587;
  double t1591;
  double t1592;
  double t1593;
  double t1584;
  double t1588;
  double t1589;
  t1550 = Cos(var1[3]);
  t1541 = Cos(var1[4]);
  t1547 = Sin(var1[3]);
  t1551 = Sin(var1[4]);
  t1558 = Cos(var1[2]);
  t1540 = Sin(var1[2]);
  t1559 = t1550*t1541;
  t1562 = -1.*t1547*t1551;
  t1563 = 0. + t1559 + t1562;
  t1548 = -1.*t1541*t1547;
  t1553 = -1.*t1550*t1551;
  t1554 = 0. + t1548 + t1553;
  t1566 = t1541*t1547;
  t1567 = t1550*t1551;
  t1568 = 0. + t1566 + t1567;
  t1564 = t1558*t1563;
  t1579 = -1.*t1541;
  t1580 = 1. + t1579;
  t1581 = -0.4*t1580;
  t1582 = -0.64*t1541;
  t1583 = 0. + t1581 + t1582;
  t1585 = -0.24*t1551;
  t1587 = 0. + t1585;
  t1591 = t1550*t1583;
  t1592 = -1.*t1547*t1587;
  t1593 = 0. + t1591 + t1592;
  t1584 = t1583*t1547;
  t1588 = t1550*t1587;
  t1589 = 0. + t1584 + t1588;
  p_output1[0]=0. + t1540*t1554 + t1564;
  p_output1[1]=0.;
  p_output1[2]=0. + t1540*t1563 + t1558*t1568;
  p_output1[3]=0.;
  p_output1[4]=0.;
  p_output1[5]=0.;
  p_output1[6]=0. + t1554*t1558 - 1.*t1540*t1563;
  p_output1[7]=0.;
  p_output1[8]=0. + t1564 - 1.*t1540*t1568;
  p_output1[9]=0.;
  p_output1[10]=0.;
  p_output1[11]=0.;
  p_output1[12]=0. + t1568*t1589 + t1563*t1593;
  p_output1[13]=0.;
  p_output1[14]=0. - 1.*t1563*t1589 - 1.*t1554*t1593;
  p_output1[15]=0.;
  p_output1[16]=1.;
  p_output1[17]=0.;
  p_output1[18]=0. + t1541*t1583 + t1551*t1587;
  p_output1[19]=0.;
  p_output1[20]=0. + t1551*t1583 - 1.*t1541*t1587;
  p_output1[21]=0.;
  p_output1[22]=1.;
  p_output1[23]=0.;
  p_output1[24]=-0.24;
  p_output1[25]=0.;
  p_output1[26]=0.;
  p_output1[27]=0.;
  p_output1[28]=1.;
  p_output1[29]=0.;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 7, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jb_LeftShin_mex.hh"

namespace SymExpression
{

void Jb_LeftShin_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
