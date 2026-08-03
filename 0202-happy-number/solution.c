bool isHappy(int n) {
    int rem,sod,i=0;

    while(n>1)
    {
        i++;
        sod=0;
    while(n>0)
    {
        rem=n%10;
        sod=sod+(rem*rem);
        n=n/10;
    }
    n=sod;
    if(i==20)
    return 0;
    }
    if(sod==1 || n==1)
        return 1;
    else
        return 0;
}
