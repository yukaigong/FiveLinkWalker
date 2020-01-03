/*
 * Automatically Generated from Mathematica.
 * Thu 19 Dec 2019 16:00:29 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJp_LeftShin_src.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE inline        /* use standard inline */
#endif

/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
INLINE double Power(double x, double y) { return pow(x, y); }
INLINE double Sqrt(double x) { return sqrt(x); }

INLINE double Abs(double x) { return fabs(x); }

INLINE double Exp(double x) { return exp(x); }
INLINE double Log(double x) { return log(x); }

INLINE double Sin(double x) { return sin(x); }
INLINE double Cos(double x) { return cos(x); }
INLINE double Tan(double x) { return tan(x); }

INLINE double Csc(double x) { return 1.0/sin(x); }
INLINE double Sec(double x) { return 1.0/cos(x); }

INLINE double ArcSin(double x) { return asin(x); }
INLINE double ArcCos(double x) { return acos(x); }
//INLINE double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
INLINE double ArcTan(double x, double y) { return atan2(y,x); }

INLINE double Sinh(double x) { return sinh(x); }
INLINE double Cosh(double x) { return cosh(x); }
INLINE double Tanh(double x) { return tanh(x); }

#define E 2.71828182845904523536029
#define Pi 3.14159265358979323846264
#define Degree 0.01745329251994329576924

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t1518;
  double t1508;
  double t1514;
  double t1519;
  double t1507;
  double t1515;
  double t1520;
  double t1521;
  double t1526;
  double t1527;
  double t1529;
  double t1530;
  double t1532;
  double t1543;
  double t1545;
  double t1546;
  double t1538;
  double t1539;
  double t1540;
  double t1541;
  double t1542;
  double t1547;
  double t1548;
  double t1549;
  double t1550;
  double t1551;
  double t1553;
  double t1554;
  double t1560;
  double t1567;
  double t1568;
  double t1569;
  double t1566;
  double t1570;
  double t1571;
  double t1572;
  double t1573;
  double t1574;
  double t1524;
  double t1531;
  double t1533;
  double t1534;
  double t1535;
  double t1536;
  double t1537;
  double t1555;
  double t1556;
  double t1557;
  double t1558;
  double t1559;
  double t1561;
  double t1562;
  double t1563;
  double t1564;
  double t1565;
  double t1575;
  double t1576;
  double t1577;
  t1518 = Cos(var1[2]);
  t1508 = Cos(var1[3]);
  t1514 = Sin(var1[2]);
  t1519 = Sin(var1[3]);
  t1507 = Cos(var1[4]);
  t1515 = -1.*t1508*t1514;
  t1520 = -1.*t1518*t1519;
  t1521 = t1515 + t1520;
  t1526 = t1518*t1508;
  t1527 = -1.*t1514*t1519;
  t1529 = t1526 + t1527;
  t1530 = Sin(var1[4]);
  t1532 = t1507*t1521;
  t1543 = -1.*t1518*t1508;
  t1545 = t1514*t1519;
  t1546 = t1543 + t1545;
  t1538 = -1.*t1507;
  t1539 = 1. + t1538;
  t1540 = -0.4*t1539;
  t1541 = 0. + t1540;
  t1542 = t1541*t1521;
  t1547 = 0.4*t1530;
  t1548 = 0. + t1547;
  t1549 = t1546*t1548;
  t1550 = t1546*t1530;
  t1551 = t1532 + t1550;
  t1553 = -0.64*t1551;
  t1554 = t1542 + t1549 + t1553;
  t1560 = t1507*t1546;
  t1567 = t1508*t1514;
  t1568 = t1518*t1519;
  t1569 = t1567 + t1568;
  t1566 = t1541*t1546;
  t1570 = t1569*t1548;
  t1571 = t1569*t1530;
  t1572 = t1560 + t1571;
  t1573 = -0.64*t1572;
  t1574 = t1566 + t1570 + t1573;
  t1524 = 0.4*t1507*t1521;
  t1531 = -0.4*t1529*t1530;
  t1533 = -1.*t1529*t1530;
  t1534 = t1532 + t1533;
  t1535 = -0.64*t1534;
  t1536 = t1524 + t1531 + t1535;
  t1537 = var2[4]*t1536;
  t1555 = var2[2]*t1554;
  t1556 = var2[3]*t1554;
  t1557 = t1537 + t1555 + t1556;
  t1558 = 0.4*t1507*t1546;
  t1559 = -0.4*t1521*t1530;
  t1561 = -1.*t1521*t1530;
  t1562 = t1560 + t1561;
  t1563 = -0.64*t1562;
  t1564 = t1558 + t1559 + t1563;
  t1565 = var2[4]*t1564;
  t1575 = var2[2]*t1574;
  t1576 = var2[3]*t1574;
  t1577 = t1565 + t1575 + t1576;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t1557;
  p_output1[7]=0;
  p_output1[8]=t1577;
  p_output1[9]=t1557;
  p_output1[10]=0;
  p_output1[11]=t1577;
  p_output1[12]=t1536*var2[2] + t1536*var2[3] + (t1531 - 0.4*t1507*t1569 - 0.64*(t1533 - 1.*t1507*t1569))*var2[4];
  p_output1[13]=0;
  p_output1[14]=t1564*var2[2] + t1564*var2[3] + (-0.4*t1507*t1529 + t1559 - 0.64*(-1.*t1507*t1529 + t1561))*var2[4];
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
}



void dJp_LeftShin_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
