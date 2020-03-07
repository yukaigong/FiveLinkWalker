/*
 * Automatically Generated from Mathematica.
 * Thu 19 Dec 2019 16:00:28 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t1500;
  double t1484;
  double t1489;
  double t1503;
  double t1480;
  double t1496;
  double t1504;
  double t1505;
  double t1508;
  double t1510;
  double t1511;
  double t1512;
  double t1515;
  double t1528;
  double t1529;
  double t1530;
  double t1522;
  double t1523;
  double t1524;
  double t1526;
  double t1527;
  double t1531;
  double t1532;
  double t1533;
  double t1534;
  double t1535;
  double t1536;
  double t1537;
  double t1543;
  double t1550;
  double t1551;
  double t1552;
  double t1549;
  double t1553;
  double t1554;
  double t1555;
  double t1556;
  double t1557;
  double t1507;
  double t1514;
  double t1516;
  double t1518;
  double t1519;
  double t1520;
  double t1521;
  double t1538;
  double t1539;
  double t1540;
  double t1541;
  double t1542;
  double t1544;
  double t1545;
  double t1546;
  double t1547;
  double t1548;
  double t1558;
  double t1559;
  double t1560;
  t1500 = Cos(var1[2]);
  t1484 = Cos(var1[3]);
  t1489 = Sin(var1[2]);
  t1503 = Sin(var1[3]);
  t1480 = Cos(var1[4]);
  t1496 = -1.*t1484*t1489;
  t1504 = -1.*t1500*t1503;
  t1505 = t1496 + t1504;
  t1508 = t1500*t1484;
  t1510 = -1.*t1489*t1503;
  t1511 = t1508 + t1510;
  t1512 = Sin(var1[4]);
  t1515 = t1480*t1505;
  t1528 = -1.*t1500*t1484;
  t1529 = t1489*t1503;
  t1530 = t1528 + t1529;
  t1522 = -1.*t1480;
  t1523 = 1. + t1522;
  t1524 = -0.4*t1523;
  t1526 = 0. + t1524;
  t1527 = t1526*t1505;
  t1531 = 0.4*t1512;
  t1532 = 0. + t1531;
  t1533 = t1530*t1532;
  t1534 = t1530*t1512;
  t1535 = t1515 + t1534;
  t1536 = -0.64*t1535;
  t1537 = t1527 + t1533 + t1536;
  t1543 = t1480*t1530;
  t1550 = t1484*t1489;
  t1551 = t1500*t1503;
  t1552 = t1550 + t1551;
  t1549 = t1526*t1530;
  t1553 = t1552*t1532;
  t1554 = t1552*t1512;
  t1555 = t1543 + t1554;
  t1556 = -0.64*t1555;
  t1557 = t1549 + t1553 + t1556;
  t1507 = 0.4*t1480*t1505;
  t1514 = -0.4*t1511*t1512;
  t1516 = -1.*t1511*t1512;
  t1518 = t1515 + t1516;
  t1519 = -0.64*t1518;
  t1520 = t1507 + t1514 + t1519;
  t1521 = var2[4]*t1520;
  t1538 = var2[2]*t1537;
  t1539 = var2[3]*t1537;
  t1540 = t1521 + t1538 + t1539;
  t1541 = 0.4*t1480*t1530;
  t1542 = -0.4*t1505*t1512;
  t1544 = -1.*t1505*t1512;
  t1545 = t1543 + t1544;
  t1546 = -0.64*t1545;
  t1547 = t1541 + t1542 + t1546;
  t1548 = var2[4]*t1547;
  t1558 = var2[2]*t1557;
  t1559 = var2[3]*t1557;
  t1560 = t1548 + t1558 + t1559;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t1540;
  p_output1[7]=0;
  p_output1[8]=t1560;
  p_output1[9]=t1540;
  p_output1[10]=0;
  p_output1[11]=t1560;
  p_output1[12]=t1520*var2[2] + t1520*var2[3] + (t1514 - 0.4*t1480*t1552 - 0.64*(t1516 - 1.*t1480*t1552))*var2[4];
  p_output1[13]=0;
  p_output1[14]=t1547*var2[2] + t1547*var2[3] + (-0.4*t1480*t1511 + t1542 - 0.64*(-1.*t1480*t1511 + t1544))*var2[4];
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 7, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dJp_LeftShin_mex.hh"

namespace SymExpression
{

void dJp_LeftShin_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
