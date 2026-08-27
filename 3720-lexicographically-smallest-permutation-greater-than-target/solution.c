
        ans[n]='\0';
        return ans;
    }

        ans[i]='a'+k;
        freq[k]--;

        int j=i+1;

        for(k=0;k<26;k++) {
            while(freq[k]>0) {
                ans[j++]='a'+k;
                freq[k]--;
            }
        }
    return "";
}

        for(int j=0;j<i;j++)
            ans[j]=target[j];
