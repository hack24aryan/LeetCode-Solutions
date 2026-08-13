int hIndex(int* citations, int citationsSize) {
    int i,j,n=citationsSize,count=0;

    for(i=0;i<n-1;i++)
    for(j=0;j<n-1-i;j++)
    {
        if(citations[j]<citations[j+1])
        {
            int temp=citations[j];
            citations[j]=citations[j+1];
            citations[j+1]=temp;
        }
    }
    for(i=0;i<n;i++)
    {
        if(i+1<=citations[i])
        count++;
        else
        break;
    }
    return count;
}
