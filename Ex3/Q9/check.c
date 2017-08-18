int perfectsq(int x);
int check(int n);
int fun(int a,int b, int c)
{
    int sum,fiba,fibb,fibc;
    sum=a+b;
    if(check(a)&&check(b)&&check(c))
    {
        if(sum == c)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
        return 0;
}
int check(int n)
{
    return perfectsq(5*n*n + 4)|| perfectsq(5*n*n -4);
}
int perfectsq(int x)
{
    for(int i = 0;i <= x; i++)
    {
        if(x == i*i)
            return 1;
    }
    return 0;
}
