int minimumPushes(char* word) {
    int i,cost=1,total=0;
    for(i=0;word[i]!='\0';i++)
    {
        if(i%8==0 && i!=0)
            cost++;
        total+=cost;
    }
    return total;
}
