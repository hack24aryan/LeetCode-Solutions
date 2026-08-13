int titleToNumber(char* columnTitle) {

    long int i,length=0,power=1,sum=0;
    for(i=0;columnTitle[i]!='\0';i++)
    length++;

    for(i=length-1;i>=0;i--)
    {
        int num=columnTitle[i]-64;
        sum=sum+(num*power);
        power=power*26;
    }
    return sum;

}
