int sumOfTheDigitsOfHarshadNumber(int x) {
    int i,rem,sod=0,temp=x;
    while(x>0)
    {
        rem=x%10;
        sod=sod+rem;
        x/=10;
    }
    if(temp%sod==0)
        return sod;
    else
        return -1;
}
