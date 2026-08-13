int maxProfit(int* prices, int pricesSize) {
    int i,buy,profit=0;

    for(i=0;i<pricesSize;i++)
    {
        if(buy>prices[i])
            buy=prices[i];

        if((prices[i]-buy)>=profit)
            profit=prices[i]-buy;

    }

    return profit;
}
