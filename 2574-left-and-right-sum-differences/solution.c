/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* leftRightDifference(int* nums, int numsSize, int* returnSize) {
    int i,left=0,right=0,sum=0;
    int *leftsum=(int*)malloc(numsSize*sizeof(int));
    int *rightsum=(int*)malloc(numsSize*sizeof(int));
    int *ans=(int*)malloc(numsSize*sizeof(int));

    for(i=0;i<numsSize;i++)
    {
        leftsum[i]=left;
        left+=nums[i];
    }
    for(i=numsSize-1;i>=0;i--)
    {
        rightsum[i]=right;
        right+=nums[i];
    }
    for(i=0;i<numsSize;i++)
    {
        sum=leftsum[i]-rightsum[i];
        sum=(sum<0)?-sum:sum;
        ans[i]=sum;
    }
    *returnSize=numsSize;
    return ans;
}
