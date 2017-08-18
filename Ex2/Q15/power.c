/* compute the power of an integer 'm', raised to postive integer */

#include<stdio.h>
#include<assert.h>

int powernum(int x,int y);

int main()
{
    int n,p,result;
    
    printf("enetr the no and raised to the power\n");
    scanf("%d", &n);
    scanf("%d", &p);
    
    assert(powernum(2,3)==8);
    
    result = powernum(n,p);
    printf("%d to power of %d is : %d\n", n,p,result);
    
    return 0;
}

