int alternatingSum(int* nums, int numsSize) {
    int i,sum=0;
    for(i=0;i<numsSize;i++)
    {

        if(i%2==0)
            sum=sum+nums[i];
        else
            sum=sum-nums[i];
    }
    return sum;
}
