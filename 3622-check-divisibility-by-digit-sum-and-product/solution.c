bool checkDivisibility(int n) {
    int temp=n,sod=0,pod=1;
    while(n>0)
    {
        int rem=n%10;
        sod+=rem;
        pod*=rem;
        n/=10;
    }
    if(temp%(sod+pod)==0)
        return 1;
    else
        return 0;
}
