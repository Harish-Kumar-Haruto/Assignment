#include<stdio.h>
#define SIZE 255
int main()
{

	 char string[SIZE];
 
	printf("Enter the string\n");
 	fgets(string,3*SIZE,stdin);
 
	StrRev(string);
 
	printf("Reversed string is: %s\n",string);

	 return 0;
}
