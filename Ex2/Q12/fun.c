int DtoB(int num)
{
    long remainder, decimal_num,base=1,binary=0;
    decimal_num = num;
    while(num>0)
    {
        remainder=num%2;
        binary=binary+remainder*base;
        num=num/2;
        base=base*10;
    }
    return binary;
}
