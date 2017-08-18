int BtoD(int bin_val)
{ 
    int num,base=1,rem,deci_val=0;
    num=bin_val;
    while(num > 0)
    {
        rem = num % 10;
        deci_val = deci_val + (rem * base);
        num /= 10;
        base *= 2;
    }
    return deci_val;
}
