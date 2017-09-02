#include<stdio.h>
#include "PointLine.h"

int main()
{ 
  int x1,x2,y1,y2;
  printf("Enter the co-ordinates of point1\n");
  scanf("%d %d", &x1,&y1);
  printf("Enter the co-ordinates of point2\n");
  scanf("%d %d", &x2,&y2);
  Line l = createLine(x1,y1,x2,y2);
  int res = checkLine(l);
  switch(res)
  {
	case 1: printf("Line with Points (%d,%d) & (%d,%d) is Vertical\n",l.p1.x,l.p1.y,l.p2.x,l.p2.y);
		break;
 	case 2: printf("Line with Points (%d,%d) & (%d,%d) is Horizontal\n",l.p1.x,l.p1.y,l.p2.x,l.p2.y);
		break;
	default: printf("Line with Points (%d,%d) & (%d,%d) is Oblique\n",l.p1.x,l.p1.y,l.p2.x,l.p2.y);
		break;
  }
  return 0;
}
