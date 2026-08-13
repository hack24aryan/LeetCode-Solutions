#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

int stoneGameII(int* piles, int pilesSize) {
    int n = pilesSize;
    int* suffixSum = (int*)malloc((n + 1) * sizeof(int));
    suffixSum[n] = 0;
    for (int i = n - 1; i >= 0; --i) {
        suffixSum[i] = suffixSum[i + 1] + piles[i];
    }


    int** dp = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        dp[i] = (int*)calloc(n + 1, sizeof(int));
    }

    for (int i = n - 1; i >= 0; --i) {
        for (int m = 1; m <= n; ++m) {
            if (i + 2 * m >= n) {
                dp[i][m] = suffixSum[i];
            } else {
                int maxStones = 0;
                for (int x = 1; x <= 2 * m; ++x) {
                    int opponentScore = dp[i + x][MAX(m, x)];
                    int currentScore = suffixSum[i] - opponentScore;
                    if (currentScore > maxStones) {
                        maxStones = currentScore;
                    }
                }
                dp[i][m] = maxStones;
            }
        }
    }

    int result = dp[0][1];

    for (int i = 0; i < n; i++) {
        free(dp[i]);
    }
    free(dp);
    free(suffixSum);

    return result;
}
