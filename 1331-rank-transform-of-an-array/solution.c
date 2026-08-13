/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include<stdlib.h>
typedef struct{
    int value;
    int index;
}pair;



int compare(const void *a,const void *b)
{
    pair *x=(pair*)a;
    pair *y=(pair*)b;
    return x->value-y->value;
}

int* arrayRankTransform(int* arr, int arrSize, int* returnSize) {
    int i,rank=1;
    if(arrSize==0)
{
    *returnSize=0;
    return NULL;
}
    pair p[arrSize];
    int *ans=(int*)malloc(arrSize*sizeof(int));
    for(i=0;i<arrSize;i++)
    {
        p[i].value=arr[i];
        p[i].index=i;
    }
    qsort(p,arrSize,sizeof(pair),compare);

    ans[p[0].index]=rank++;
    for(i=1;i<arrSize;i++)
    {
        if(p[i].value==p[i-1].value)
        {
            rank--;
            ans[p[i].index]=rank++;
        }
        else
            ans[p[i].index]=rank++;
    }
    *returnSize=arrSize;
    return ans;
}
