char* reverseWords(char* s) {
    int i=0,j=0,left=0,right=0;

    while(s[right]!='\0')
    {
        while(s[right]!='\0' && s[right]==' ')
            right++;

        while(s[right]!='\0' && s[right]!=' ')
            s[left++]=s[right++];

        while(s[right]!='\0' && s[right]==' ')
            right++;

        if (s[right]!='\0')
            s[left++]=' ';
    }

    s[left]='\0';
    j=left-1;
    while(i<j)
    {
        char t=s[i];
        s[i]=s[j];
        s[j]=t;
        i++;
        j--;
    }


    left=0;
    while(s[left]!='\0')
    {
        i=left;
        while(s[left]!='\0' && s[left]!=' ')
            left++;

        j=left-1;

        while(i<j)
        {
            char t=s[i];
            s[i]=s[j];
            s[j]=t;
            i++;
            j--;
        }

        if(s[left]==' ')
            left++;
    }

    return s;
}
