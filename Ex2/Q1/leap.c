/* the year is a leap year or not */
#include<stdio.h>
#include<assert.h>

int leap(int year);

int main()
{
    int yr;
    
    assert(leap(2000)==1);
    assert(leap(2018)==0);
    assert(leap(1952)==1);
    
    printf("enter the year\n");
    scanf("%d",&yr);

    if(leap(yr))
        printf("it is a leap year");
    else
        printf("it is not leap year");

    return 0;
}



