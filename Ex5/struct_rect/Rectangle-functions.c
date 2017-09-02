#include "Rectangle.h"
#include<math.h>

void createPoint(Point P,int x,int y)
{
  	P.x=x;
	P.y=y; 
}

void calculateDistance(double *d,Point P1,Point P2)
{
  *d = sqrt(((P2.x-P1.x)*(P2.x-P1.x))+((P2.y-P1.y)*(P2.y-P1.y))); 
}

int checkLine(Point P1,Point P2,Point P4)
{
  if(P1.x==P4.x && P1.y==P2.y) 
   return 1;
  else return 0;
}

int checkRect(double d1,double d2,double d3,double d4,Point P1,Point P2,Point P4)
{
  
  if(d1!=d3 && d2!=d4) return 0;
  if(checkLine(P1,P2,P4)) return 1;
  float slope1,slope2;
  slope1 = (P2.y-P1.y)/(float)(P2.x-P1.x);
  slope2 = (P4.y-P1.y)/(float)(P4.x-P1.x);
  if((slope1*slope2)!=-1.0f) return 0;
  else return 1;
}

void calArea(double *area, double d1,double d2)
{
   *area = (d1*d2);
}

double calPeri(double *peri,double d1,double d2)
{
   *peri = (2*(d1+d2));
}

void createRectangle(double *area)
{
  int x1,x2,y1,y2,x3,y3,x4,y4;
  Point P1,P2,P3,P4;
  printf("Enter the co-ordinates of point1 for Rectangle\n");
  scanf("%d %d", &x1,&y1);
  P1.x=x1;P1.y=y1;
  printf("Enter the co-ordinates of point2 for Rectangle\n");
  scanf("%d %d", &x2,&y2);
  P2.x=x2;P2.y=y2;
  printf("Enter the co-ordinates of point3 for Rectangle\n");
  scanf("%d %d", &x3,&y3);
  P3.x=x3;P3.y=y3;
  printf("Enter the co-ordinates of point4 for Rectangle\n");
  scanf("%d %d", &x4,&y4);
  P4.x=x4;P4.y=y4;
  double d1,d2,d3,d4,area1,peri1;
  calculateDistance(&d1,P1,P2);
  calculateDistance(&d2,P2,P3);
  calculateDistance(&d3,P3,P4);
  calculateDistance(&d4,P4,P1);
  int res = checkRect(d1,d2,d3,d4,P1,P2,P4);
  switch(res)
 {
	case 0:printf("Given Points doesn't form a Rectangle.. Please give correct co-ordinates\n");
 		break;
	default: calArea(&area1,d1,d2);
                 *area=area1;
		 calPeri(&peri1,d1,d2);
               printf("Area of Rectangle: %f\nPerimeter of Rectangle: %f\n",area1,peri1);
 		break;
 }
}


