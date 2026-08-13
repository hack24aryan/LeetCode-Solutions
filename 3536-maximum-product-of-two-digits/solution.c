int maxProduct(int n) {
    int largest=0,second=-1,rem;

    while(n>0){
        rem=n%10;
        if(largest<rem)
        {
            second=largest;
            largest=rem;
        }
        else if(rem>second)
        {
            second=rem;
        }
        n/=10;
    }

    return largest*second;

}
