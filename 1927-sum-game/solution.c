        if(num[i]=='?')
        {
            if(i<n/2)
                leftquestionmark++;
        }
            else
                rightquestionmark++;
        else
        {
            if(i<n/2)
        }
    }
                leftknownsum+=num[i]-'0';
            else
                rightknownsum+=num[i]-'0';
    if((leftquestionmark+rightquestionmark)%2!=0)
        return 1;
    else
    {
        int left=2*leftknownsum+9*leftquestionmark;
        int right=2*rightknownsum+9*rightquestionmark;
    {
    for(i=0;i<n;i++)
        if(left==right)
            return 0;
        else
