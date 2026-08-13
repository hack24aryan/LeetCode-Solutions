char* smallestSubsequence(char* s) {
    int n=strlen(s);

    int freq[26]={0};
    int vis[26]={0};

    for (int i=0;i<n;i++)
        freq[s[i]-'a']++;

    char *ans=(char*)malloc(n+1);
    int top=-1;

    for (int i=0;i<n;i++) {
        char ch=s[i];
        int idx=ch-'a';

        freq[idx]--;

        if (vis[idx])
            continue;

        while (top>=0 && ans[top]>ch && freq[ans[top]-'a']>0) {
            vis[ans[top]-'a']=0;
            top--;
        }

        ans[++top]=ch;
        vis[idx]=1;
    }

    ans[top+1]='\0';
    return ans;
}
