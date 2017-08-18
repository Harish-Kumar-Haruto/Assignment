/*Car */

#include<stdio.h>
#include<assert.h>
int car(float a,float b );

int main()
{
    assert(car(30,4)==0);
    assert(car(70,22)==1);
    if(car(80,3))
        printf("\ncar will not hit the truck \n");
    else
        printf("\ncar hits the truck \n");
    
    return 0;
}

int car(float a,float b)
{
    float d;
    d=a*0.2777778;
    if(d<b)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
