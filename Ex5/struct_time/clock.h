#ifndef _CLOCK_STRUCT_
#define _CLOCK_STRUCT_
#include<stdio.h>

typedef struct _clock_
{
   int sec;
   int min;
   int hour;
   int format;
   char amorPM;
} Clock;


Clock initClock(Clock c);
Clock setTime(Clock c,int hour,int min,int sec);
void getTime(Clock c);
Clock addTime(Clock c,int hour,int min,int sec);

#endif
