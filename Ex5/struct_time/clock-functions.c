#include "clock.h"

Clock initClock(Clock c)
{
  c.sec=0;
  c.min=0;
  c.hour=0;
  printf("Clock is Initialzed\n");
  return c;
}

Clock setTime(Clock c,int hour,int min,int sec)
{
   if(sec>=60)
   {
	min += (sec/60);
	sec %= 60;
   }
   if(min>=60)
   {
	hour += (min/60);
	min %= 60;
   }
   c.hour=hour;
   c.min=min;
   c.sec=sec;
   return c;
}

void getTime(Clock c)
{
  printf("Current time is %d hr %d min and %d sec\n",c.hour,c.min,c.sec);
}

Clock addTime(Clock c1,int hour,int min,int sec)
{
   c1.hour += hour;
   c1.min += min;
   c1.sec += sec;
   if(sec>=60)
   {
	c1.min += (sec/60);
	c1.sec %= 60;
   }
   if(min>=60)
   {
	c1.hour += (min/60);
	c1.min %= 60;
   }
   return c1;
}
