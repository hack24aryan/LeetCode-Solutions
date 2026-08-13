int smallestNumber(int n, int t) {
    int rem,i;

    for(i=n;i<101;i++)
    {
        int sod=1;
        int num=i;
    while(num!=0)
    {
        rem=num%10;
        sod=sod*rem;
        num/=10;
    }
    if(sod%t==0)
        return i;


}

    return 0;
}
