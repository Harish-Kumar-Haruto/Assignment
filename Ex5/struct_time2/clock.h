#ifndef _CLOCK_STRUCT_
#define _CLOCK_STRUCT_
#include<stdio.h>

 enum timezone{
		  Hawaii=-10, California = -8, Texas = -6, Brazil = -4, Ireland =0,
		  India =+5, Singapore =+8, Australia =+10, NewZealand =+12
		};

typedef struct _clock_
{
   int sec;
   int min;
   int hour;
   int format;
   char amorPM; 
   int zone;
} Clock;



Clock initClock(Clock c);
Clock setTime(Clock c,int hour,int min,int sec);
void getTime(Clock c);
Clock addTime(Clock c,int hour,int min,int sec);
Clock timeZone(Clock c,enum timezone z);

#endif
