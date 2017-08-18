/* the series 1+1/2!+1/3!+...1/N! */

#include<stdio.h>
#include<assert.h>

double sum(double n);

int main()
{
    assert(sum(2)==(double)1.500000);
    assert(sum(1)==(double)1.000000);
    assert(sum(2)==(double)1.500000);

    printf("sum of series is %lf \n",sum(2));
    return 0;
}
