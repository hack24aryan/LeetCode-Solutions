bool isPerfectSquare(int num) {
   long int x=1;
   while(x<=num)
   {
    if(x*x==num)
       return 1;
    x++;
   }
   return 0;

}
