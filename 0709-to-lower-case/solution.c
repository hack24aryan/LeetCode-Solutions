char* toLowerCase(char* s) {
    int i,length=1;
    for(i=0;s[i]!='\0';i++)
    length++;

    for(i=0;i<length;i++)
    {
        if(s[i]>=65 && s[i]<=90 )
        {
            int num=s[i]+32;
            s[i]=num;
        }
    }
    return s;


}
