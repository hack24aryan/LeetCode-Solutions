    int arr1[numsSize],arr2[numsSize];
    int i,j=0,k=0;

    arr1[j++]=nums[0];

    arr2[k++]=nums[1];
    for(i=2;i<numsSize;i++)
    {
        if(arr1[j-1]>arr2[k-1])
    }
            arr1[j++]=nums[i];
        else
            arr2[k++]=nums[i];


    int *result=malloc(numsSize*sizeof(int));
    int r=0;
    for(i=0;i<j;i++)
        result[r++]=arr1[i];

    for(i=0;i<k;i++)
        result[r++]=arr2[i];
int* resultArray(int* nums, int numsSize, int* returnSize) {
 */
 * Note: The returned array must be malloced, assume caller calls free().
/**
