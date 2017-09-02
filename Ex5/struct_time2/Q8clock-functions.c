#include "clock.h"

Clock initClock(Clock c)
{
  c.sec=0;
  c.min=0;
  c.hour=0;
  if(c.format==12)
  c.amorPM='a';
  c.zone=Ireland;
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
   switch(c.format)
   {
	case 12: if(hour>12){
		hour = hour%12;
	        c.amorPM = 'p';
		}
                 if(hour<12){
		c.amorPM = 'a';
		}
		break;
	case 24: if(hour>24)
		hour %= 24;
		break;
   }
   c.hour=hour;
   c.min=min;
   c.sec=sec;
   return c;
}

void getTime(Clock c)
{
  if(c.format==12)
  printf("Current time is %d:%d:%d %cm in %d format TimeZone (GMT+%d)\n",c.hour,c.min,c.sec,c.amorPM,c.format,c.zone);
  else
  printf("Current time is %d:%d:%d in %d format TimeZone (GMT+%d)\n",c.hour,c.min,c.sec,c.format,c.zone);
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
   switch(c1.format)
   {
	case 12: if(hour>12){
		c1.hour %= 12;
	        c1.amorPM = 'p';
		}
		if(hour<12){
		c1.amorPM = 'a';
		}
		break;
	case 24: if(hour>24)
		c1.hour %= 24;
		break;
  }	
   return c1;
}

Clock timeZone(Clock c,enum timezone z)
{
  c.zone=z;
  c= addTime(c,z,0,0);
  return c;
}
