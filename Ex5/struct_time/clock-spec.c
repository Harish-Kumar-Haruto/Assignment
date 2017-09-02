#include "clock.h"

int main()
{
  char inp = 'Y';
  int op;
  Clock c;
  int hour,minute,second;
  while(inp == 'Y' || inp=='y')
  {
    printf("-----------------------\n");
    printf("1.Intialize the Clock\n2.Set the time\n3.Get the current time\n4.Add your time to current time\n0.Exit\n");
    scanf(" %d",&op);
    switch(op)
    {
       case 1:
		 c = initClock(c);
		break;
	case 2: printf("Enter the time in Hours Minutes Seconds format\n");
		scanf("%d %d %d",&hour,&minute,&second);
		c=setTime(c,hour,minute,second);
		break;
	case 3:	getTime(c);
		break;
	case 4: printf("Enter the time in Hours Minutes Seconds format to be added to existing time\n");
		scanf("%d %d %d",&hour,&minute,&second);
		c=addTime(c,hour,minute,second);
		break;
	default: break;
    }
	printf("Do you want to continue?(Y/N)\n");
	scanf(" %c",&inp);
  }
 return 0;
}
