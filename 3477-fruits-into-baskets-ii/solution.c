int numOfUnplacedFruits(int* fruits, int fruitsSize, int* baskets, int basketsSize) {
    int i,j,count=0,k;
    for(i=0;i<fruitsSize;i++)
    {
        for(j=0,k=0;j<basketsSize;j++)
        {
            if(fruits[i]<=baskets[j])
            {
                baskets[j]=0;
                count++;
                k=1;
            }
            if(k==1)
                break;
        }

    }
    count=basketsSize-count;
    return count;
}
