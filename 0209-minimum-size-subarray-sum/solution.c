int minSubArrayLen(int target, int* nums, int numsSize) {
    int l=0,r=0;
    int sum=0,len=numsSize+1;

    while(r<numsSize)
    {
        sum=sum+nums[r];

        while(sum>=target){
            if(r-l+1<len)
                len=r-l+1;
            sum=sum-nums[l];
            l++;
            }

        r++;
    }
    return (len==numsSize+1?0:len);
}
