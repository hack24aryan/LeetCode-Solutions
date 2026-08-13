int maxProduct(int* nums, int numsSize) {
    int i,max=0,max2=0;
    for(i=0;i<numsSize;i++)
    {
        if(nums[i]>=max){
            max2=max;
            max=nums[i];
            }
        else if( nums[i]>=max2)
            max2=nums[i];
    }
    --max;
    --max2;
    return (max*max2);
}
