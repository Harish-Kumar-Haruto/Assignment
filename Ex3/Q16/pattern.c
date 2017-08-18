#include<stdio.h>
#include<string.h>
#include<assert.h>

int start_index(char string[256],char string1[10]);
int main()
{
    char string[256];
    char pattern[10];
    
    printf("line:\n");
    scanf("%[^\n]",string);
    
    printf("Patern:\n");
    scanf("%s",pattern);
    
    int i=start_index(string,pattern);
    
    if(i)
            printf("string %s is found at position %d \n",pattern,i);
        else
            printf("not found \n");
    
	return 0;
}


