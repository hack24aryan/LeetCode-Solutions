bool detectCapitalUse(char* word) {
    int i,length=0,countcapital=0,countsmall=0,flag=0;
    for(i=0;word[i]!='\0';i++)
    length++;
    for(i=0;i<length;i++)
    {
        int check=word[i];
        if(check>=65 && check<=90)
        {
        if(i==0)
        flag=1;
        countcapital++;

        }
        else
        countsmall++;
    }
    if(countcapital==length || countsmall==length||flag==1&&countsmall==length-1)
    return 1;
    else
    return 0;
}
