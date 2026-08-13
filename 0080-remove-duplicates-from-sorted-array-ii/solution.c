int removeDuplicates(int* nums, int numsSize) {
     int j=2;
     if(numsSize<=2)
        return numsSize;
     for(int i=2;i<numsSize;i++)
        {
        if (nums[i] !=nums[j-2])
            nums[j++]=nums[i];
        }
        return j;
}
