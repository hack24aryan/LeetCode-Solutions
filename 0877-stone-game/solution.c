#include <stdlib.h>
#include <stdbool.h>

// Helper function to find the maximum of two integers
int max(int a, int b) {
    return (a > b) ? a : b;
}

bool stoneGame(int* piles, int pilesSize) {
    int n = pilesSize;

    // dp[i][j] stores the maximum score difference (my score - opponent's score)
    // a player can achieve from the subarray piles[i] to piles[j]
    int** dp = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        dp[i] = (int*)malloc(n * sizeof(int));
        // Base case: If there's only one pile left, the player takes it
        dp[i][i] = piles[i];
    }

    // len is the size of the subarray we are currently evaluating
    for (int len = 2; len <= n; len++) {
        for (int i = 0; i <= n - len; i++) {
            int j = i + len - 1;

            // Option 1: Take the left pile.
            // We gain piles[i], but the opponent gets the optimal score difference for the rest.
            int takeLeft = piles[i] - dp[i + 1][j];

            // Option 2: Take the right pile.
            // We gain piles[j], but the opponent gets the optimal score difference for the rest.
            int takeRight = piles[j] - dp[i][j - 1];

            // We want to maximize our net advantage
            dp[i][j] = max(takeLeft, takeRight);
        }
    }

    // Alice wins if her score difference over Bob is greater than 0
    bool aliceWins = dp[0][n - 1] > 0;

    // Free the allocated memory
    for (int i = 0; i < n; i++) {
        free(dp[i]);
    }
    free(dp);

    return aliceWins;
}
