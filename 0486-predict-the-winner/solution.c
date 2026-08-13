#include <stdbool.h>

bool predictTheWinner(int* nums, int numsSize) {
    // Array to store the maximum score difference.
    // The constraints state nums.length <= 20, so size 20 is sufficient.
    int dp[20];

    // Base case: For subarrays of length 1, the difference is just the number itself.
    for (int i = 0; i < numsSize; i++) {
        dp[i] = nums[i];
    }

    // Build up the DP array for lengths from 2 to numsSize.
    for (int len = 2; len <= numsSize; len++) {
        // Iterate through all possible starting indices for the current length.
        for (int i = 0; i <= numsSize - len; i++) {
            int j = i + len - 1;

            // If the player picks the left end (nums[i]), subtract the opponent's best outcome.
            int pickLeft = nums[i] - dp[i + 1];

            // If the player picks the right end (nums[j]), subtract the opponent's best outcome.
            int pickRight = nums[j] - dp[i];

            // Maximize the current player's score difference.
            dp[i] = pickLeft > pickRight ? pickLeft : pickRight;
        }
    }

    // If the maximum difference from the whole array is >= 0, Player 1 wins or ties.
    return dp[0] >= 0;
}
