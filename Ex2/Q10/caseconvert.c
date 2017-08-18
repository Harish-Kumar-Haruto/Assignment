/******************************
change the case of the alphabet
******************************/
#include<stdio.h>
#include<assert.h>
#include<string.h>

char fun(char );
int main()
{
    char character;
    
    assert(fun('a') == 'A');
    assert(fun('B') == 'b');
    
    printf("enter the alphabet \n");
    scanf("%c",&character);
    
    printf("%c \n",fun(character));
    return 0;
    
}


