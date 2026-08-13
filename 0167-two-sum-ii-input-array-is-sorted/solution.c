/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int high=numbersSize-1,low=0,sum=0;
    int *arr = malloc(2 * sizeof(*arr));

    *returnSize=2;

    while(low<high)
    {
        sum=numbers[low]+numbers[high];
        if(sum==target)
        {
            arr[0]=low+1;
            arr[1]=high+1;
            return arr;
        }
        if(sum>target)
            high--;
        else
            low++;
    }
return arr;
}
