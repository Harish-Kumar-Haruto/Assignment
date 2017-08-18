/*****************************************
find the sum of digits in the given number
*****************************************/

#include<stdio.h>
#include<assert.h>

int fun(int x);

int main()
{
    int i;
    
    assert(fun(2586)==21);
    assert(fun(357)==15);
    assert(fun(20)==2);
    assert(fun(1)==1);
    
    printf("Enter digit:");
    scanf("%d",&i);
    
    printf("sum is %d \n",fun(i));
    return 0;
}

