int IntLength(int x)
{
    x = (x<0) ? -x : x ;
    if(x>999999999) return 10;
    if(x>99999999) return 9;
    if(x>9999999) return 8;
    if(x>999999) return 7;
    if(x>99999) return 6;
    if(x>9999) return 5;
    if(x>999) return 4;
    if(x>99) return 3;
    if(x>9) return 2;
    return 1;
}
