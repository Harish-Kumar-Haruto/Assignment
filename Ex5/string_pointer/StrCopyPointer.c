#include<stdio.h>
#include<assert.h>
#define SIZE 255

int main()
{

 	char dest[SIZE];
 	char srce[SIZE];
 
	printf("Enter the string\n");
 	fgets(srce,SIZE,stdin);
 
	StrCopy(srce,dest);
 
	printf("Copied string is: %s\n",dest);
	
	return 0;

}
