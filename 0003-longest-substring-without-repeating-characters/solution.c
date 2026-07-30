


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
    return max;
}
