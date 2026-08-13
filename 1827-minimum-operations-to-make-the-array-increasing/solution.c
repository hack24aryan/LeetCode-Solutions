

int minOperations(int* nums, int numsSize){
    int count=0,i,x;

    for(i=1;i<numsSize;i++)
    {
        if(nums[i]<=nums[i-1])
        {
            x=nums[i-1]-nums[i]+1;
            nums[i]=nums[i]+x;
            count+=x;
        }
    }
    return count;
}
