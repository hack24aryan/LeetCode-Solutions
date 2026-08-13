/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

typedef struct{
    int val;
    int index;
}pair;

int compare(const void *a,const void *b)
{
    pair *x=(pair*)a;
    pair *y=(pair*)b;
    return x->val-y->val;
}
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int i;
    pair *arr=malloc(numsSize*sizeof(pair));

    for(i=0;i<numsSize;i++)
    {
        arr[i].val=nums[i];
        arr[i].index=i;

    }
    qsort(arr,numsSize,sizeof(pair),compare);

    int *ans=malloc(2*sizeof(int));
    int left=0,right=numsSize-1,total;
    while(left<right)
    {
        total=arr[left].val+arr[right].val;
        if(total==target)
            {
                ans[0]=arr[left].index;
                ans[1]=arr[right].index;
                *returnSize=2;
                free(arr);
                return ans;
            }
        if(total>target)
            right--;
        else
            left++;
    }
    return ans;
}
