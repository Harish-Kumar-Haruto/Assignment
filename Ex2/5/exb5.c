#include <stdio.h>

/* C program to generate Armstrong numbers. */
 
int check_armstrong(int c);
int power(int n, int r);
 
int main ()
{
    int c, a, b;
 
    printf("Enter the range of amstrong numbers\n");
    scanf("%d%d", &a, &b);
 
    for (c = a; c <= b; c++)
    {
        if (check_armstrong(c) == 1)
        printf("%d\n", c);
    }
 
   return 0;
}
 
int check_armstrong(int n)
{
    long sum = 0, temp;
    int remainder, digits = 0;
 
    temp = n;
 
    while (temp != 0)
    {
        digits++;
        temp = temp/10;
    }
 
    temp = n;
 
    while (temp != 0)
    {
        remainder = temp%10;
        sum = sum + power(remainder, digits);
        temp = temp/10;
    }
 
    if (n == sum)
        return 1;
    else
        return 0;
}
 
int  power(int n, int r)
{
    int c, p = 1;
 
    for (c = 1; c <= r; c++)
        p = p*n;
 
    return p;
}
