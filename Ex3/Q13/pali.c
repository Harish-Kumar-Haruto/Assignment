/* check entered number is a palindrom */
#include<stdio.h>
#include<assert.h>

int palindrome(int );

int main()
{
    assert(palindrome(2442) == 1);
    assert(palindrome(2445) == 0);
    
    int n;
    
    printf("enter an interger \n");
    scanf("%d",&n);
    
    if(palindrome(n))
    {
        printf("\n the number is palindrome \n");
    }
    else
        printf("\n the number is not a palindrome \n");
    
    return 0;
}


