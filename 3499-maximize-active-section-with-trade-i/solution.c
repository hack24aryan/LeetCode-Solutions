
int maxActiveSectionsAfterTrade(char* s)
{
    int i=0,len=strlen(s),count1=0;
    int *arr=(int*)malloc(len*sizeof(int));
    int zero=0;
    while(s[i]!='\0')
    {
        if(s[i]=='1')
            count1++;
        i++;
    }
    i=0;
    int size=0,temp=0,max=0;

    while(s[i]!='\0')
    {
        if(s[i]=='0')
            zero++;

        if(s[i]=='1')
            temp=zero;

        if(temp>0)
            {

                arr[size]=temp;
                size++;
                zero=0;
                temp=0;
            }

        i++;
    }


    if(zero>0)
    {

        arr[size]=zero;
        size++;
    }

    if(size>=2)
    {
        for(i=1;i<size;i++)
        {
            if(max<(arr[i]+arr[i-1]))
                max=arr[i]+arr[i-1];
        }
    }
    int answer;
    answer=count1+max;





    return answer;
}
