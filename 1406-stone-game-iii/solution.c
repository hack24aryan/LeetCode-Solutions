        for (int k = 0; k < 3 && i + k < n; k++) {
            currentTake += stoneValue[i + k];

            // The score difference is what we take NOW minus the best difference
            // the opponent can get from the remaining stones.
            int scoreDiff = currentTake - dp[i + k + 1];
        // A player can take 1, 2, or 3 stones (as long as they are within bounds)

        dp[i] = INT_MIN;
        int currentTake = 0;
    for (int i = n - 1; i >= 0; i--) {
    // Work backwards from the end of the array

    dp[n] = 0;
    // Base case: If there are no stones left, the score difference is 0.

    int* dp = (int*)malloc((n + 1) * sizeof(int));
    // a player can achieve starting from index i to the end of the array.
    // dp[i] represents the maximum score difference (my score - opponent's score)

    int n = stoneValueSize;
char* stoneGameIII(int* stoneValue, int stoneValueSize) {

#include <limits.h>
#include <stdlib.h>
