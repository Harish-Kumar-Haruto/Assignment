#include<stdio.h>
#include "PointLine.h"

int main()
{
 int x1,x2,y1,y2,x3,y3,x4,y4;
  printf("Enter the co-ordinates of point1 for Line1\n");
  scanf("%d %d", &x1,&y1);
  printf("Enter the co-ordinates of point2 for Line1\n");
  scanf("%d %d", &x2,&y2);
  Line l1 = createLine(x1,y1,x2,y2);
  //int ch = checkLine(l1);
  printf("Enter the co-ordinates of point1 for Line2\n");
  scanf("%d %d", &x3,&y3);
  printf("Enter the co-ordinates of point2 for Line2\n");
  scanf("%d %d", &x4,&y4);
  Line l2 = createLine(x3,y3,x4,y4);
  //ch = checkLine(l2);
  int res = checkParallel(l1,l2);
  switch(res)
 {
	case 1:printf("Line 1 and Line 2 are parallel with one another\n");
 		break;
	default: printf("Line 1 and Line 2 are NOT parallel with one another\n");
 		break;
 }
  return 0;  
}
