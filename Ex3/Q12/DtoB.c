/* convert a decimanl number into binary */
#include<stdio.h>
#include<assert.h>

int DtoB(int );

int main()
{
    int num;
    long decimal_num,bin;
    
    assert(DtoB(6)==110);
    assert(DtoB(7)==111);
    
    printf("enter the decimal number\n");
    scanf("%d",&num);
    
    bin=DtoB(num);
    printf("the binary no is %ld \n", bin);
    
    return 0;
}

 
