#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MOD 1000000007LL

static int gcdInt(int a, int b) {
    while (b) {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int subsequencePairCount(int* nums, int numsSize) {
    int V = 0;
    for (int i = 0; i < numsSize; i++)
        if (nums[i] > V) V = nums[i];

    int size = V + 1;

    // dp[g1][g2] flattened as dp[g1*size + g2]
    long long *dp  = (long long *)calloc((size_t)size * size, sizeof(long long));
    long long *ndp = (long long *)malloc((size_t)size * size * sizeof(long long));

    dp[0] = 1; // dp[0][0] = 1

    for (int idx = 0; idx < numsSize; idx++) {
        int x = nums[idx];

        // start ndp as a copy of dp (option: exclude x)
        memcpy(ndp, dp, (size_t)size * size * sizeof(long long));

        for (int g1 = 0; g1 < size; g1++) {
            long long *row = dp + (size_t)g1 * size;
            for (int g2 = 0; g2 < size; g2++) {
                long long c = row[g2];
                if (c == 0) continue;

                // put x into seq1
                int ng1 = g1 ? gcdInt(g1, x) : x;
                ndp[(size_t)ng1 * size + g2] = (ndp[(size_t)ng1 * size + g2] + c) % MOD;

                // put x into seq2
                int ng2 = g2 ? gcdInt(g2, x) : x;
                ndp[(size_t)g1 * size + ng2] = (ndp[(size_t)g1 * size + ng2] + c) % MOD;
            }
        }

        // swap dp and ndp for next iteration
        long long *tmp = dp;
        dp = ndp;
        ndp = tmp;
    }

    long long ans = 0;
    for (int g = 1; g < size; g++) {
        ans = (ans + dp[(size_t)g * size + g]) % MOD;
    }

    free(dp);
    free(ndp);

    return (int)ans;
}
