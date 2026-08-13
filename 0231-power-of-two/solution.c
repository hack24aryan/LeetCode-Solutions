bool isPowerOfTwo(int n) {
long int num=n;
    if((num&(num-1))==0 && n>0)
        return 1;
    else
        return 0;


}
