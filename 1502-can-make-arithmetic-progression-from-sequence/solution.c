int compare(const void *a,const void *b)
{
    int x=*(int*)a;
    int y=*(int*)b;
    return y-x;
}

bool canMakeArithmeticProgression(int* arr, int arrSize) {
    int olddif,i;
    qsort(arr,arrSize,sizeof(int),compare);
    olddif=arr[0]-arr[1];

    for(i=0;i<arrSize-1;i++)
    {
        if(arr[i]-arr[i+1]!=olddif)
            return 0;
    }
    return 1;
}
