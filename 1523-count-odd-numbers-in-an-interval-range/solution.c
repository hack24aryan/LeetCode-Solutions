

int countOdds(int low, int high){
    int count=0 ,total=high-low;
        if(low%2==0 && high %2==0)
           count=total/2;

        else
        count=(total/2)+1;



    return count;
}
