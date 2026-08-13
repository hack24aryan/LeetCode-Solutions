int lengthOfLongestSubstring(char* s) {

    int left=0,right=0,freq[128]={0},current,max=0;

    while(s[right]!='\0')
    {
        if(freq[s[right]]==0)
        {
            freq[s[right]]++;
            right++;
        }
        else
        {
            freq[s[left]]--;
            left++;
        }
        current=right-left;
        if(max<current)
            max=current;
    }
    return max;


}
