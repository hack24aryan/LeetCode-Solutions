
int uniqueXorTriplets(int* nums, int numsSize) {
    int i,j,k,count=0;
    int seen[2048]={0};
    int freq[2048]={0};

    for(i=0;i<numsSize;i++)
    {
        for(j=i;j<numsSize;j++)
        {
           seen[nums[i]^nums[j]]=1;
        }
    }

    for(k=0;k<2048;k++)
    {
        if(seen[k]>0)
        {
            for(i=0;i<numsSize;i++)
                freq[k^nums[i]]=1;
        }
    }
    for(k=0;k<2048;k++)
        if(freq[k]>0)
            count++;




    return count;
}
