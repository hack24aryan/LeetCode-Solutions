int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}

int findGCD(int* nums, int numsSize) {
    int smallest=nums[0],largest=nums[0],i;

    for(i=0;i<numsSize;i++){
        if(nums[i]>largest)
            largest=nums[i];
        if(nums[i]<smallest)
            smallest=nums[i];
    }
    return gcd(smallest,largest);
}
