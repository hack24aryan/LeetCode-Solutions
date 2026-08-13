int minimumSum(int num) {
    int i=0,j=0,temp,arr[4]={0};

    while(num>0)
    {
        arr[i++]=num%10;
        num/=10;
    }

    for(i=0;i<4;i++)
    {
        for(j=i+1;j<4;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    return ((arr[0]*10+arr[2])+(arr[1]*10+arr[3]));
}
