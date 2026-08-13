int maximum69Number (int num) {
    int temp=num,rem,index=0,x=1,flag=0,y=1;

    while(temp>0)
    {

        rem=temp%10;
        if(rem==6)
        {
            x=index;
            flag=1;
        }
        temp/=10;
        index++;
    }
    if(flag==1)
    {
        for(int i=0;i<x;i++)
        {
            y*=10;
        }
       return num+(3*y);
    }
    else
    return num;

}
