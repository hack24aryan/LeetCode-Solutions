int alternateDigitSum(int n) {
    int rem,i,sod=0,j=0,arr[11],k;
    while(n>0)
    {
        rem=n%10;
        arr[j]=rem;
        n/=10;
        j++;
    }
    for(i=j-1,k=2;i>=0;i--,k++)
    {
        if(k%2==0)
            sod=sod+arr[i];
        else
            sod=sod-arr[i];
    }
    return sod;
}
