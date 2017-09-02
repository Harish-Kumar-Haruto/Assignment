#include "structPoint.h"
Point createPoint(int x, int y)
{
  
Point p;
  p.x = x;
  p.y = y;

  return p;
}

int quadrantPoint(Point p)
{

  if (p.x>=0 && p.y>0)
	 return 1;
  if (p.x<0 && p.y>=0)
	 return 2;
  if (p.x<=0 && p.y<0) 
	return 3;
  if (p.x>0 && p.y<=0) 
	return 4;

  return 0;
}

int comparePoints(Point p1, Point p2)
{

  if(p1.x==p2.x && p1.y==p2.y) return 1;
  return 0;

}
