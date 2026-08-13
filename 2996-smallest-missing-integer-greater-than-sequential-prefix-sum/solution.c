int compare(const void *a,const void *b)
{
    int x=*(int*)a;
    int y=*(int*)b;

    return x-y;
}

int missingInteger(int* nums, int numsSize) {
    int i,sum=nums[0];

    for(i=0;i<numsSize-1;i++)
    {
        if(nums[i]==nums[i+1]-1)
            sum+=nums[i+1];
        if(nums[i] != nums[i+1]-1)
            break;
    }

    qsort(nums,numsSize,sizeof(int),compare);

    for(i=0;i<numsSize;i++)
    {
        if(sum==nums[i])
            sum++;
    }
    return sum;
}
