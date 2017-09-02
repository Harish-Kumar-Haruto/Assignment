#include "PointLine.h"

Line createLine(int x1, int y1, int x2, int y2)
{
  Line l;
  l.p1.x=x1;
  l.p1.y=y1;
  l.p2.x=x2;
  l.p2.y=y2;
  return l;
}

int checkCross(Line l1, Line l2)
{
  if(l1.p1.x==l1.p2.x && l2.p1.x==l2.p2.x) return 0;
  else if(l1.p1.y==l1.p2.y && l2.p1.y==l2.p2.y) return 0;
  float slope1,slope2;
  slope1 = (l1.p2.y-l1.p1.y)/(float)(l1.p2.x-l1.p1.x);
  slope2 = (l2.p2.y-l2.p1.y)/(float)(l2.p2.x-l2.p1.x);
  if(slope1!=slope2) return 1;
  else return 0;
}

/*int checkLine(Line l)
{
  if(l.p1.x==l.p2.x) return 1;
  if(l.p1.y==l.p2.y) return 2;
  return 3;
}*/
