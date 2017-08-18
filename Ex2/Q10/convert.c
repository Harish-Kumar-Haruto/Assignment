char fun( char ch)
{
    if('a'<=ch && ch<='z')
    {
        return (ch-32);
    }
    else if ('A'<=ch && ch<='Z')
    {
        return (ch+32);
    }
    return 0;
}
