double findMaxAverage(int* nums, int numsSize, int k) {
    int l=0,r=k-1;
    double avg,max=0.00000;
    int sum=0;
    for(int i=0;i<=r;i++)
    {
        sum+=nums[i];
    }
    avg=(double)sum/k;
    max=avg;
    while(r!=numsSize-1)
    {
        l++;r++;
        sum=sum-nums[l-1]+nums[r];
        avg=(double)sum/k;
        if(max<avg)
            max=avg;
    }
    return max;
}
