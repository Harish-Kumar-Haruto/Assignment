int palindrome(int original)
{
    int rev=0,rem, n;
    n=original;
    
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    
    if(original==rev)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
