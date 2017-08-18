/* convert binary number to decimal number */
#include<stdio.h>
#include<assert.h>

int BtoD(int );

int main()
{
    int num,deci;
    assert(BtoD(110)==6);
    assert(BtoD(111)==7);
    
    printf("enter a binary number\n");
    scanf("%d",&num);
    
    deci=BtoD(num);
    printf("the decimal number is %d\n",deci);
}

