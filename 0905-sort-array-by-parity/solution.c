/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* nums, int numsSize, int* returnSize) {
    int i,k=numsSize-1,l=0;

    int *nums1 = (int*)malloc(numsSize * sizeof(int));

    for(i=0;i<numsSize;i++){
        if((nums[i]%2)==0)
        nums1[l++]=nums[i];

        else
             nums1[k--]=nums[i];
    }
    *returnSize=numsSize;
    return nums1;
}
