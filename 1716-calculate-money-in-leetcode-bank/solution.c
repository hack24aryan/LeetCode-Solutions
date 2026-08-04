int totalMoney(int n) {
    int sum=0,monday=0;
   for(int i=1;i<=n;i++)
    {
        sum=sum+i+monday;
        if (i%7==0)
        {
            i=i-7;
            n=n-7;
            monday++;
    }}
    return sum;
}
