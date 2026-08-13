#include<stdlib.h>
int compare(const void *x_void,const void *y_void)
{
    int x=*(int*)x_void;
    int y=*(int*)y_void;
    return x-y;
}
int countElements(int* nums, int numsSize) {
    int i,count=0;
    qsort(nums,numsSize,sizeof(int),compare);

    int large=nums[numsSize-1],small=nums[0];
    for(i=0;i<numsSize;i++)
    {
        if(nums[i]!=small && nums[i]!=large)
        count++;
    }
    return count;
}
