#include<stdlib.h>

int compare (const void *x_void,const void *y_void)
{
    int x=*(int *)x_void;
    int y=*(int *)y_void;
    return y-x;
}

int minimumBoxes(int* apple, int appleSize, int* capacity, int capacitySize) {
    int i,sum=0,count=0;

    qsort(capacity,capacitySize,sizeof(int),compare);

    for(i=0;i<appleSize;i++)
    {
        sum+=apple[i];
    }

    for(i=0;i<capacitySize;i++)
    {
        sum-=capacity[i];
        count++;
        if(sum<=0)
        {
            break;
        }
    }
    return count;
}
