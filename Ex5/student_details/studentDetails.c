#include<stdio.h>
#include "studentDetails.h"

int main()
{
  	int inp;
  	static int i;
  
	Student s[SIZE];
  	
	char ip='Y';
 
while(1)
  {
   
	 printf("Student Registry of SOIS, Manipal\n");
    	 printf("-----------------------------------\n");
         printf("1.Add new Entry\n");
         printf("2.Display Student details who scored more than 90\n");
         printf("3.Display total number of students in each branch");
         scanf("%d",&inp);
   
 switch(inp)
    {
     
	 case 1: do
		{
		s[i]=addNew();
   		i++;
		printf("Do you want to add another Student's Detail?(Y/N)\n");
		scanf(" %c",&ip);
		}while(ip=='Y'||ip=='y');
	      break;
         case 2: displayMarks(s,i);
	      break;
      //case 3: 
		
	      
    }
  }
}
