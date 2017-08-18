double sum(double n)
{
    double sum = 0;
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
       fact *= i;         
       sum += 1.0/fact;
    }
    return sum;
}
 
