#ifndef _Line_
#define _Line_

typedef struct _point_
{
  int x;
  int y;
} Point;



typedef struct _line_
{
   Point p1;
   Point p2;
} Line;



Line createLine(int,int,int,int);


#endif
