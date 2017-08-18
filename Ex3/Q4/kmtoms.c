/*kilometer to meters per second conversion */


#include<stdio.h>
float convert(float);
int main()
{
	float kph,mps;
	printf("kilometre per hour to Meter per second \n");
	printf("kph:");
	scanf("%f",&kph);
	
	mps=convert(kph);
	printf("mps = %f \n",mps);

	return 0;
}