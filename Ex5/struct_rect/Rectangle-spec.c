#include<stdio.h>
#include "Rectangle.h"

int main()
{
  double area1,area2;
  createRectangle(&area1);
  createRectangle(&area2);
  if(area1==area2)
   printf("Areas of both the rectangles are equal!\n");
  else
   printf("Areas of both the rectangles are NOT equal!\n");
  return 0;  
}
