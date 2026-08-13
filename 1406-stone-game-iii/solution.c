#include <stdlib.h>
#include <limits.h>

char* stoneGameIII(int* stoneValue, int stoneValueSize) {
    int n = stoneValueSize;

    // dp[i] represents the maximum score difference (my score - opponent's score)
    // a player can achieve starting from index i to the end of the array.
    int* dp = (int*)malloc((n + 1) * sizeof(int));

    // Base case: If there are no stones left, the score difference is 0.
    dp[n] = 0;

    // Work backwards from the end of the array
    for (int i = n - 1; i >= 0; i--) {
        int currentTake = 0;
        dp[i] = INT_MIN;

        // A player can take 1, 2, or 3 stones (as long as they are within bounds)
        for (int k = 0; k < 3 && i + k < n; k++) {
            currentTake += stoneValue[i + k];

            // The score difference is what we take NOW minus the best difference
            // the opponent can get from the remaining stones.
            int scoreDiff = currentTake - dp[i + k + 1];

            if (scoreDiff > dp[i]) {
                dp[i] = scoreDiff;
            }
        }
    }

    int result = dp[0];
    free(dp);

    // Evaluate the final score difference from the start of the array
    if (result > 0) {
        return "Alice";
    } else if (result < 0) {
        return "Bob";
    } else {
        return "Tie";
    }
}
