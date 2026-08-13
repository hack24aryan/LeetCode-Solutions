int lengthOfLastWord(char* s) {
    int count=0,len=0,i;
    i=strlen(s)-1;
    while(i>=0 && s[i]==' ')
    i--;
    while(i>=0 && s[i]!=' ')
    {
        i--;
        count++;
    }
    return count;
}
