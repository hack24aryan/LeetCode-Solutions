int compare(const void *a,const void *b)
{
    char x=*(char*)a;
    char y=*(char*)b;
    return x-y;
}

char* smallestPalindrome(char* s) {
    int len=strlen(s),mid=len/2;
    int i=0;

    qsort(s,mid,sizeof(char),compare);

    for(i=0;s[i]!='\0';i++)
    {
        s[len-1-i]=s[i];
        if(i==mid)
            break;
    }
    return s;
}
