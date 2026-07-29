bool isPalindrome(int x) {
    long int temp=x,rem,rev=0;

    while(x>0)
    {
        rem=x%10;
        rev=rev*10+rem;
        x/=10;
    }
    if(temp>=0 && rev==temp)
        return 1;
    else
        return 0;
}
