    }
     if(size<k)
    {
        free(ones);
        return "";
    }

    i=0;
    int r=k-1,beststart,small=999;
    while(r<size)
    {
        int len = ones[r] - ones[i] + 1;

        if(len<small)
            {
                small=len;
                beststart=ones[i];
            }
        else if(len==small)
        {
            if(strncmp(s+ones[i],s+beststart,len)<0)
                beststart=ones[i];
        }
        r++;
        i++;
    }
