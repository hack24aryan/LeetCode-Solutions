
            // Option 1: Take the left pile.
            // We gain piles[i], but the opponent gets the optimal score difference for the rest.
            int takeLeft = piles[i] - dp[i + 1][j];

            // Option 2: Take the right pile.
            // We gain piles[j], but the opponent gets the optimal score difference for the rest.
            int takeRight = piles[j] - dp[i][j - 1];

            // We want to maximize our net advantage
            dp[i][j] = max(takeLeft, takeRight);
        }
    }

    // Alice wins if her score difference over Bob is greater than 0
    bool aliceWins = dp[0][n - 1] > 0;

    // Free the allocated memory
    for (int i = 0; i < n; i++) {
        free(dp[i]);
    }
    free(dp);

    return aliceWins;
}
