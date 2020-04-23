/*
 * Automatically Generated from Mathematica.
 * Thu 19 Dec 2019 02:11:59 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_COM_src.h"

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
static void output1(double *p_output1,const double *var1)
{
  double t1348;
  double t1480;
  double t1481;
  double t1506;
  double t1507;
  double t1508;
  double t1509;
  double t1511;
  double t1518;
  double t1519;
  double t1520;
  double t1521;
  double t1529;
  double t1530;
  double t1531;
  double t1532;
  double t1533;
  double t1538;
  double t1542;
  double t1543;
  double t1544;
  double t1545;
  double t1512;
  double t1516;
  double t1558;
  double t1559;
  double t1560;
  double t1539;
  double t1540;
  double t1570;
  double t1571;
  double t1572;
  double t1510;
  double t1517;
  double t1522;
  double t1523;
  double t1524;
  double t1525;
  double t1526;
  double t1527;
  double t1528;
  double t1556;
  double t1557;
  double t1561;
  double t1562;
  double t1563;
  double t1564;
  double t1565;
  double t1566;
  double t1567;
  double t1587;
  double t1588;
  double t1589;
  double t1537;
  double t1541;
  double t1546;
  double t1547;
  double t1548;
  double t1549;
  double t1550;
  double t1551;
  double t1552;
  double t1568;
  double t1569;
  double t1573;
  double t1574;
  double t1575;
  double t1576;
  double t1577;
  double t1578;
  double t1579;
  double t1608;
  double t1609;
  double t1610;
  t1348 = Cos(var1[2]);
  t1480 = Cos(var1[3]);
  t1481 = t1348*t1480;
  t1506 = Sin(var1[2]);
  t1507 = Sin(var1[3]);
  t1508 = -1.*t1506*t1507;
  t1509 = t1481 + t1508;
  t1511 = Cos(var1[4]);
  t1518 = -1.*t1480*t1506;
  t1519 = -1.*t1348*t1507;
  t1520 = t1518 + t1519;
  t1521 = Sin(var1[4]);
  t1529 = Cos(var1[5]);
  t1530 = t1348*t1529;
  t1531 = Sin(var1[5]);
  t1532 = -1.*t1506*t1531;
  t1533 = t1530 + t1532;
  t1538 = Cos(var1[6]);
  t1542 = -1.*t1529*t1506;
  t1543 = -1.*t1348*t1531;
  t1544 = t1542 + t1543;
  t1545 = Sin(var1[6]);
  t1512 = -1.*t1511;
  t1516 = 1. + t1512;
  t1558 = -1.*t1348*t1480;
  t1559 = t1506*t1507;
  t1560 = t1558 + t1559;
  t1539 = -1.*t1538;
  t1540 = 1. + t1539;
  t1570 = -1.*t1348*t1529;
  t1571 = t1506*t1531;
  t1572 = t1570 + t1571;
  t1510 = -0.748*t1509;
  t1517 = -0.4*t1516*t1509;
  t1522 = 0.4*t1520*t1521;
  t1523 = t1511*t1509;
  t1524 = t1520*t1521;
  t1525 = t1523 + t1524;
  t1526 = -0.64*t1525;
  t1527 = t1517 + t1522 + t1526;
  t1528 = 3.2*t1527;
  t1556 = -0.748*t1520;
  t1557 = -0.4*t1516*t1520;
  t1561 = 0.4*t1560*t1521;
  t1562 = t1511*t1520;
  t1563 = t1560*t1521;
  t1564 = t1562 + t1563;
  t1565 = -0.64*t1564;
  t1566 = t1557 + t1561 + t1565;
  t1567 = 3.2*t1566;
  t1587 = t1480*t1506;
  t1588 = t1348*t1507;
  t1589 = t1587 + t1588;
  t1537 = -0.748*t1533;
  t1541 = -0.4*t1540*t1533;
  t1546 = 0.4*t1544*t1545;
  t1547 = t1538*t1533;
  t1548 = t1544*t1545;
  t1549 = t1547 + t1548;
  t1550 = -0.64*t1549;
  t1551 = t1541 + t1546 + t1550;
  t1552 = 3.2*t1551;
  t1568 = -0.748*t1544;
  t1569 = -0.4*t1540*t1544;
  t1573 = 0.4*t1572*t1545;
  t1574 = t1538*t1544;
  t1575 = t1572*t1545;
  t1576 = t1574 + t1575;
  t1577 = -0.64*t1576;
  t1578 = t1569 + t1573 + t1577;
  t1579 = 3.2*t1578;
  t1608 = t1529*t1506;
  t1609 = t1348*t1531;
  t1610 = t1608 + t1609;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=1.;
  p_output1[6]=0.03125*(2.88*t1348 + t1510 + t1528 + t1537 + t1552);
  p_output1[7]=0;
  p_output1[8]=0.03125*(-2.88*t1506 + t1556 + t1567 + t1568 + t1579);
  p_output1[9]=0.03125*(t1510 + t1528);
  p_output1[10]=0;
  p_output1[11]=0.03125*(t1556 + t1567);
  p_output1[12]=0.1*(0.4*t1509*t1511 - 0.4*t1521*t1589 - 0.64*(t1523 - 1.*t1521*t1589));
  p_output1[13]=0;
  p_output1[14]=0.1*(0.4*t1511*t1520 - 0.4*t1509*t1521 - 0.64*(-1.*t1509*t1521 + t1562));
  p_output1[15]=0.03125*(t1537 + t1552);
  p_output1[16]=0;
  p_output1[17]=0.03125*(t1568 + t1579);
  p_output1[18]=0.1*(0.4*t1533*t1538 - 0.4*t1545*t1610 - 0.64*(t1547 - 1.*t1545*t1610));
  p_output1[19]=0;
  p_output1[20]=0.1*(0.4*t1538*t1544 - 0.4*t1533*t1545 - 0.64*(-1.*t1533*t1545 + t1574));
}



void Jp_COM_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
