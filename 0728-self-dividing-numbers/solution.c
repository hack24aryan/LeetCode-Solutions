/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* selfDividingNumbers(int left, int right, int* returnSize) {
    int j=0,temp,rem,flag=1;
    int *arr=(int*)malloc((right-left+1)*sizeof(int));

    while(left!=right+1)
    {
        flag=1;
        temp=left;
        while(temp>0)
        {
            rem=temp%10;
            temp/=10;
            if(rem==0)
            {
                flag=0;
                continue;
            }
            if(left%rem!=0 )
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
            arr[j++]=left;
        left++;
    }
    *returnSize=j;
    return arr;
}
