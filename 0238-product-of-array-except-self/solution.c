/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int i,suffix=1;
    int *ans=(int*)malloc(numsSize*sizeof(int));
    ans[0]=1;
    for(i=1;i<numsSize;i++)
    {
        ans[i]=ans[i-1]*nums[i-1];
    }

    for(i=numsSize-1;i>=0;i--)
    {
        ans[i]*=suffix;
        suffix*=nums[i];
    }

    *returnSize=numsSize;
    return ans;
}
