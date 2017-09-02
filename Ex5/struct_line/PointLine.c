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

int checkLine(Line l)
{
  if(l.p1.x==l.p2.x) return 1;
  if(l.p1.y==l.p2.y) return 2;
  return 3;
}
