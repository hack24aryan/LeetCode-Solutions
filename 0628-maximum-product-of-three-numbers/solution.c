int maximumProduct(int* nums, int numsSize) {
    int max1=-1001,max2=-1001,max3=-1001;
    int i,min1=0,min2=0;
    for(i=0;i<numsSize;i++)
    {
        if(nums[i]<min1)
        {
            min2=min1;
            min1=nums[i];
        }
        else if(nums[i]<min2 && nums[i]>=min1)
            min2=nums[i];

        if(nums[i]>max1)
        {
            max3=max2;
            max2=max1;
            max1=nums[i];
        }
        else if(nums[i]>max2 && nums[i]<=max1)
        {
            max3=max2;
            max2=nums[i];
        }
        else if(nums[i]>max3 && nums[i]<=max2)
            max3=nums[i];
    }
    if(min1*min2*max1>max1*max2*max3)
        return min1*min2*max1;
    return max1*max2*max3;
}
