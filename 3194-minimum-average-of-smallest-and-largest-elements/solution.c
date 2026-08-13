#include<stdlib.h>

int compare(const void *x_void,const void *y_void)
{
    int x=*(int*)x_void;
    int y=*(int*)y_void;
    return x-y;
}

double minimumAverage(int* nums, int numsSize)
{
    int i;
    qsort(nums,numsSize,sizeof(int),compare);

    int left=0,right=numsSize-1,j=0;
    float avg,small=1000;
    while(left<right)
    {
        avg=(nums[left]+nums[right])/2.0;
        left++;
        right--;
        if(avg<small)
            small=avg;
    }

    return small;
}
