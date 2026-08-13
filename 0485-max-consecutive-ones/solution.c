int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int i=0,max=0,sum=0;

     for(i=0;i<numsSize;i++)
     {
        if(nums[i]==0)
            sum=0;
        else
            sum++;
        if(sum>max)
            max=sum;
     }
    return max;
}
