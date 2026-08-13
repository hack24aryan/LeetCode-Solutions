int majorityElement(int* nums, int numsSize) {
    int i,count=0,major=0;
    for(i=0;i<numsSize;i++)
    {
        if(count==0)
            major=nums[i];
        if(major==nums[i])
            count++;
        else count--;
    }
    return major;
}
