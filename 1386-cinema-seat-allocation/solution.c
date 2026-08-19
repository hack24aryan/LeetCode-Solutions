                middle=0;

        for(int s=6;s<=9;s++)
            if(reserved[s])
                right=0;

        if(left&&right)
            ans+=2;
        else if(left||middle||right)
            ans+=1;
    }

    ans+=(n-rowsProcessed)*2;

    return ans;
}
        for(int s=2;s<=5;s++)
            if(reserved[s])
                left=0;

        for(int s=4;s<=7;s++)
            if(reserved[s])
