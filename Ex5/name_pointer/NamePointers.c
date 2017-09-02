#include<stdio.h>

int main()
{

	 char name[300],first[100],mid[100],last[100];

	 printf("Enter the full name\n");
	 fgets(name,50,stdin);

	 nameSplit(name,first,mid,last);
	 printf("First name: %s\nMiddle name: %s\nLast name: %s\n",first,mid,last);

	 return 0;

}
