int* findMissingElements(int* nums, int numsSize, int* returnSize) {
   int i,freq[101]={0},j=0,min=101,max=0;
   int *arr=(int*)malloc(101*sizeof(int));

    for(i=0;i<numsSize;i++)
    {
        if(min>nums[i])
            min=nums[i];
        if(max<nums[i])
            max=nums[i];
        freq[nums[i]]++;
    }

    for(i=min+1;i<max;i++)
    {
        if(freq[i]==0)
            arr[j++]=i;
    }
    *returnSize=j;
    return arr;

}
