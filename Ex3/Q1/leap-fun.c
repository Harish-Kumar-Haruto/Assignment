int leap(int yr)
{
    if(yr % 4 == 0)
    {
        return 1; // it is  a leap year
    }
    else
    {
        return 0; // not a leap year
    }
}