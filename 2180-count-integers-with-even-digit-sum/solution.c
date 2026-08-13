int countEven(int num) {
    int count=0,rem,sod=0;
    for(int i=2;i<=num;i++)
    {
            int temp=i;
            sod=0;
        while(temp>0)
        {
            rem=temp%10;
            sod=sod+rem;
            temp/=10;
        }
        if(sod%2==0)
        count++;
    }
    return count;

    }
