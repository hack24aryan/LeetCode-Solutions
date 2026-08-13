
int gcd(int a, int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}

int compare(const void *a,const void *b)
{
    int x=*(int*)a;
    int y=*(int*)b;
    return x-y;
}
long long gcdSum(int* nums, int numsSize) {
    int i,greatest=0;
    int prefixgcd[numsSize];
    for(i=0;i<numsSize;i++)
    {
        if(nums[i]>greatest)
            greatest=nums[i];

        prefixgcd[i]=gcd(nums[i],greatest);

    }
    qsort(prefixgcd,numsSize,sizeof(int),compare);

    long long int sum=0,j=numsSize-1;
    i=0;

    while(i<j){
        sum+=gcd(prefixgcd[i],prefixgcd[j]);
        i++;j--;
    }
    return sum;

}
