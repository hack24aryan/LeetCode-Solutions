int maxDigitRange(int* nums, int numsSize) {
 int i,sum=0,maximum=0,range=0,minimum=9,rem;
    int arr[numsSize];
    for(i=0;i<numsSize;i++)
    {
        arr[i]=nums[i];
    }
    for(i=0;i<numsSize;i++)
    {
        maximum=0;minimum=99999;
        while(arr[i]>0)
        {
            rem=arr[i]%10;
            if(rem>maximum)
                maximum=rem;
            if(rem<minimum)
                minimum=rem;
            arr[i]=arr[i]/10;
        }
        if(range<(maximum-minimum))
        {
            range=maximum-minimum;
            sum=0;
        }
        if(range==(maximum-minimum))
            sum+=nums[i];


    }
    return sum;
}
