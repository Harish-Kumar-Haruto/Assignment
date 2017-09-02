#include "clock.h"

int main()
{
  char inp = 'Y';
  int op,t;
  char str[255];
  Clock c;
  enum timezone z;
  int hour,minute,second;
  while(1)
  {
    printf("-----------------------\n");
    printf("1.Intialize the Clock\n2.Set the time\n3.Get the current time\n4.Add your time to current time\n5.Add Time zone\n0.Exit\n");
    scanf(" %d",&op);
    switch(op)
    {
       case 1: printf("Enter the format you want:(12/24)\n");
		scanf("%d",&c.format);
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
        case 5: printf("Enter the time zone\n");
		printf("----------------\n");
                printf("1.Hawaii\n");
		printf("2.California\n");
		printf("3.Texas\n");
		printf("4.Brazil\n");
		printf("5.Ireland\n");
		printf("6.India\n");
		printf("7.Singapore\n");
		printf("8.Australia\n");
		printf("9.New Zealand\n");
		scanf("%d",&t);
		switch(t)
		{
			case 1: z=Hawaii;
				c=timeZone(c,z);
				break;
			case 2: z=California;
				c=timeZone(c,z);
				break;
			case 3: z=Texas;
				c=timeZone(c,z);
				break;
			case 4: z=Brazil;
				c=timeZone(c,z);
				break;
			case 5: z=Ireland;
				c=timeZone(c,z);
				break;
			case 6: z=India;
				c=timeZone(c,z);
				break;
			case 7: z=Singapore;
				c=timeZone(c,z);
				break;
			case 8: z=Australia;
				c=timeZone(c,z);
				break;
			case 9: z=NewZealand;
				c=timeZone(c,z);
				break;
			}
			break;	
	default: return 0; 
		break;
    }
	
  }
 return 0;
}
