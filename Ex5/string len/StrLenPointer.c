#include<stdio.h>
#include<assert.h>
#define SIZE 255

int main()
{

	char srce[SIZE];
 	int count=0;

 	printf("Enter the string\n");
 	fgets(srce,SIZE,stdin);

 	StrLen(srce,&count);

 	printf("The length of string is %d\n",count);
 
	return 0;

}
