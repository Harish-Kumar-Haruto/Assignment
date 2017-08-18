int powernum(int x, int y)
{
    int i, res=1;
    
    for(i=0;i<y;i++)
        res = res * x;
    
    return res;
}
