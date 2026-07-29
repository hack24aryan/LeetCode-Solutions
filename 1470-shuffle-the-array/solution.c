

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    int i,k=0;
    int* ans=(int*)malloc(numsSize*sizeof(int));
    for(i=0;i<numsSize/2;i++)
    {
        ans[k++]=nums[i];
        ans[k++]=nums[(numsSize/2)+i];
    }
    *returnSize=numsSize;
    return ans;
}
