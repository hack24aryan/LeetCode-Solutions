int uniqueXorTriplets(int* nums, int numsSize) {
    int bits=0,i,max=0;

    for(i=0;i<numsSize;i++)
    {
        if(nums[i]>max)
            max=nums[i];
    }
    int n=max;
    while(max>0)
    {
        bits++;
        max/=2;
    }

    int total;
    if(n>=3)
        total=1<<bits;
    if(n==2)
        return 2;
    if(n==1)
        return 1;
    return total;
}
