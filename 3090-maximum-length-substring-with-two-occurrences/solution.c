int maximumLengthSubstring(char* s) {
    int left=0,right=0,freq[27]={0},max=0;

    while(right<strlen(s))
    {
        freq[s[right]-'a']++;
        while(freq[s[right]-'a']>2)
        {
            freq[s[left]-'a']--;
        }
    }
            left++;
        right++;
    return max;
        if((right-left+1)>max)
            max=right-left+1;
}
