/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* applyOperations(int* nums, int numsSize, int* returnSize) {
    int i,j=0;
    int *ans=(int*)malloc(numsSize*sizeof(int*));

    for(i=1;i<numsSize;i++)
    {
        if(nums[i]==nums[i-1])
        {
            nums[i-1]=nums[i-1]*2;
            nums[i]=0;
        }
    }

    for(i=0;i<numsSize;i++)
    {
        if(nums[i]!=0)
        {
            ans[j++]=nums[i];
        }
    }
    for(i=j;i<numsSize;i++)
    {
        ans[i]=0;
    }

    *returnSize=numsSize;
    return ans;
}
