char* IntToCharArray(int x)
{
    int z,e,i,a,b,c,d;
    z = x;
    d =  IntPower(10, IntLength(x) - 1);
    static char ch[10];
    e = IntLength(x);
    for(i=0;i<e;i++)
    {
        a = x%d;
        b = x - a;
        c = b / d;
        d = d / 10;
        ch[i] = '0' + c;
        x = a;
    }
    return ch;
}
