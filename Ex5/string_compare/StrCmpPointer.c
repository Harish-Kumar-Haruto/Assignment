#include<stdio.h>
#define SIZE 255

int main()
{

 	char string1[SIZE],string2[SIZE];

 	printf("Enter the string1\n");
 	fgets(string1,3*SIZE,stdin);

 	printf("Enter the string2\n");
 	fgets(string2,3*SIZE,stdin);
 
	if(!StrComp(string1,string2))
	 printf("String1 and String2 are same!!\n");

	 else
	 printf("String1 and String2 are NOT same\n");

	 return 0;

}
