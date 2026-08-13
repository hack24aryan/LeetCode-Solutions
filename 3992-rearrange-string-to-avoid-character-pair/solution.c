char* rearrangeString(char* s, char x, char y) {
    int i,j=0;
    char *ans=(char*)malloc(strlen(s)+1);
    for(int i=0;i<strlen(s);i++)
    {
         if(s[i]==y)
             ans[j++]=s[i];
    }
    for(int i=0;i<strlen(s);i++)
    {
         if(s[i]==y || s[i]==x)
             continue;
        ans[j++]=s[i];
    }
    for(int i=0;i<strlen(s);i++)
    {
         if(s[i]==x)
             ans[j++]=s[i];
    }
    ans[j]='\0';
    return ans;
}
