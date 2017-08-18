/*************************************
convert joules to kilowatt hour
*************************************/
#include <stdio.h>
#include<assert.h>
float kilowatt(float jps);
int main()
{
    float EC,energy,time;
    printf("enter the value of energy in joules:");
    scanf("%f",&energy);
    printf("usage in seconds: ");
    scanf("%f",&time);
    EC = kilowatt(energy/time);
    printf("Energy consumption of electric circuit is %f kwh /n",EC);
    
    return 0;
}


