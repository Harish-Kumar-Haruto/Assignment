int fun(int x)
{ 
    int sum = 0,y;
    while(x>0)
    {
        y=x%10;
        sum=sum+y;
        x=x/10;
    }
    return sum;
}
