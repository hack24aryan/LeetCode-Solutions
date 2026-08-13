int addDigits(int num) {
    int sum=0 ,temp;
    while(num>9)
    {
        temp=num;
        sum=0;
    while(temp>0)
    {
        int rem=temp%10;
        temp=temp/10;
        sum=sum+rem;
    }
    num=sum;
    }
    sum=num;
    return sum;
}
