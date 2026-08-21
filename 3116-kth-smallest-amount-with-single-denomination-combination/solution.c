    return count;
}

long long findKthSmallest(int* coins, int coinsSize, int k) {
    int minVal = coins[0];
    for (int i = 1; i < coinsSize; ++i) {
        if (coins[i] < minVal) minVal = coins[i];
    }
    long long low = 1;
    long long high = (long long)minVal * k;
    long long ans = high;
    while (low <= high) {
        long long mid = low + (high - low) / 2;
        if (countMultiples(mid, coins, coinsSize) >= k) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}
