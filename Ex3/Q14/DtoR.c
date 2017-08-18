/* conversion of decimal number 0-1000 to roman number */


#include <stdio.h>
#include<assert.h>
 
void predigit(char num1, char num2);
void postdigit(char c, int n);
char* convert(int);

int main()
{
    int j,number;
    char* res;
 
    printf("Enter the number: ");
    scanf("%d", &number);
    res = convert(number);
    printf("\n Converted Roman number is: %s\n",res);

}


