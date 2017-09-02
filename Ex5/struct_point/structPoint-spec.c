#include "structPoint.h"
#include "structPoint.h"
#include<stdio.h>

int main()
{
  Point p1,p2;
  int x1,x2,y1,y2;
  printf("Enter the co-ordinates of point1\n");
  scanf("%d %d", &x1,&y1);
  printf("Enter the co-ordinates of point2\n");
  scanf("%d %d", &x2,&y2);

  p1=createPoint(x1,y1);
  p2=createPoint(x2,y2);

  int quad = quadrantPoint(p1);
  int res = comparePoints(p1,p2);

  if (quad == 1) printf("Point (%d,%d) is in I Quadrant.\n",p1.x,p1.y);
  if (quad == 2) printf("Point (%d,%d) is in II Quadrant.\n",p1.x,p1.y);
  if (quad == 3) printf("Point (%d,%d) is in III Quadrant.\n",p1.x,p1.y);
  if (quad == 4) printf("Point (%d,%d) is in IV Quadrant.\n",p1.x,p1.y);
  if (quad == 0) printf("Point (%d,%d) is on the Origin.\n",p1.x,p1.y);
  
  switch(res)
  { 
	case 1: printf("Points (%d,%d) and (%d,%d) are same!\n",p1.x,p1.y,p2.x,p2.y);
 		break;
	default: printf("Points (%d,%d) and (%d,%d) are NOT same!\n",p1.x,p1.y,p2.x,p2.y);
 		break;
  }
  return 0;
}
