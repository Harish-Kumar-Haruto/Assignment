/* convert watts to luminous flux*/
#include <stdio.h>
#include <assert.h>
double convert(double , double );
int main()
{
    double PC,LE;               //PC:power consumption  LE:lumen efficiency
    double LF;                  //LF:lumen flux
    
    assert(convert(10.5,0.5)== 5.25);
    assert(convert(20,10)==200);
    assert(convert(2,6)==12);
    
    printf("watts:");
    scanf("%lf",&PC);
    printf("\n Lumen Efficiency:");
    scanf("%lf",&LE);
    
    LF = convert(PC,LE);
    printf("%.2lf\n",LF);
 
    return 0;
}

