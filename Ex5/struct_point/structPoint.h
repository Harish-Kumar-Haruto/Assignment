#ifndef _strucPoint_
#define _strucPoint_

typedef struct _point_
{
  int x;
  int y;
}Point;


Point createPoint(int,int);
int quadrantPoint(Point);
int comparePoints(Point, Point);

#endif
