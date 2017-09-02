#ifndef _RECTANGLE_
#define _RECTANGLE_
#include <stdio.h>
#include<math.h>

typedef struct _point_
{
  int x;
  int y;
} Point;


typedef struct _rectangle_
{
   Point p1;
   Point p2;
   Point p3;
   Point p4;
} Rect;


void createRectangle(double *area);
void createPoint(Point P,int x,int y);
void calculateDistance(double *d,Point P1,Point P2);
int checkLine(Point P1,Point P2,Point P4);
int checkRect(double d1,double d2,double d3,double d4,Point P1,Point P2,Point P4);
void calArea(double *area, double d1,double d2);
double calPeri(double *peri,double d1,double d2);

#endif
