/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findErrorNums(int* nums, int numsSize, int* returnSize) {
    int i,miss,dup;
    int *arr=(int*)malloc(2*sizeof(int));
    int *freq=calloc(numsSize+1,sizeof(int));

    for(i=0;i<numsSize;i++)
        freq[nums[i]]++;

    for(i=1;i<=numsSize;i++)
    {
        if(freq[i]==0)
            miss=i;
        if(freq[i]==2)
        {
            dup=i;
        }
    }
    arr[0]=dup;
    arr[1]=miss;

    *returnSize=2;
    return arr;
}
