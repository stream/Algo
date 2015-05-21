int IntPower(int n, int c)
{
    int i, m=1;
    for(i=0;i<c;i++)
        m = m * n;
    return m;
}
