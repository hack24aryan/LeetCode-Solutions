int firstMissingPositive(int* nums, int numsSize) {
    int i;
    bool *seen=calloc(numsSize+2,sizeof(bool));

    for(i=0;i<numsSize;i++)
    {
        if(nums[i]>0 && nums[i]<numsSize+1)
            seen[nums[i]]=1;
    }
    for(i=1;i<=numsSize+1;i++)
    {
            if(!seen[i])
            {
                free(seen);
                return i;
            }
    }
    free(seen);
    return numsSize+1;
}
