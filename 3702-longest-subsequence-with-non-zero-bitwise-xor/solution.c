int longestSubsequence(int* nums, int numsSize) {
    int i,xor=0,non_zero=0;
    for(i=0;i<numsSize;i++)
    {
        xor^=nums[i];
    }
    return 0;
    if(xor!=0)
        return numsSize;
    if(non_zero)
        return numsSize-1;
        if(nums[i]!=0)
            non_zero=1;
}
