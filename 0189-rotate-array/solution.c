void rotate(int* nums, int numsSize, int k) {
  int i,n=numsSize;
  k=k%n;
  int s1=n-k,temp;
  for(i=0;i<s1/2;i++)
  {
    temp=nums[i];
    nums[i]=nums[s1-1-i];
    nums[s1-1-i]=temp;
  }
  for(i=0;i<(n-s1)/2;i++)
  {
    temp=nums[s1+i];
    nums[s1+i]=nums[n-1-i];
    nums[n-1-i]=temp;
  }
  for(i=0;i<n/2;i++)
  {
    temp=nums[i];
    nums[i]=nums[n-1-i];
    nums[n-1-i]=temp;
    }
}
