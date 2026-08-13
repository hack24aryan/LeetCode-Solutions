int subtractProductAndSum(int n) {
    int pod=1,sod=0,rem;
    while(n>0)
    {
        rem=n%10;
        pod=(rem)*pod;
        sod=sod+(rem);
        n=n/10;
    }return pod-sod;
}
