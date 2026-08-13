bool canJump(int* nums, int numsSize) {
    int i,far=0;

    int max(int a,int b)
    {
        if(a>b)
        return a;
        else return b;
    }
    for(i=0;i<numsSize;i++)
    {
        if(i>far)
            return false;
        far=max(far,i+nums[i]);

    }

    return 1;


}
