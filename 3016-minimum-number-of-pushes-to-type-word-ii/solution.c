int compare(const void *a,const void *b)
{
    int x=*(int*)a;
    int y=*(int*)b;
    return y-x;
}
int minimumPushes(char* word) {
    int freq[26]={0},i,cost=1,total=0;
    for(i=0;word[i]!='\0';i++)
        freq[word[i]-'a']++;

    qsort(freq,26,sizeof(int),compare);

    for(i=0;i<26;i++)
    {
        if(i%8==0 && i!=0)
            cost++;

    total+=(freq[i]*cost);
    }
    return total;
}
