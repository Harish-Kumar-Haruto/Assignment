/* the 3 numbers are from a fibonacci */

#include <stdio.h>
#include <assert.h>

int perfectsq(int x);
int check(int n);
int fun(int,int,int);

int main()
{
    int x,y,z;
    
    assert(fun(3,5,8) == 1);
    assert(fun(3,5,9) == 0);
    assert(fun(21,34,55) == 1);
    
    printf("enter the series\n");
    scanf("%d %d %d",&x,&y,&z);
    
    if(fun(x, y, z))
        printf("the 3 numbers are in fibonacci series \n");
    else
        printf("not in series \n");
    return 0;
}

