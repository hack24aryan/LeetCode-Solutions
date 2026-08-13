#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Safe combination helper nCk with limit cap
static long long nCk(int n, int k, long long limit) {
    if (k < 0 || k > n) return 0;
    if (k == 0 || k == n) return 1;
    if (k > n - k) k = n - k;

    long long res = 1;
    for (int i = 1; i <= k; i++) {
        res = res * (n - i + 1) / i;
        if (res >= limit) return limit;
    }
    return res;
}

// Computes distinct arrangements of remaining half-string
static long long countArrangements(const int* count, int total, long long limit) {
    long long res = 1;
    int remaining = total;
    for (int i = 0; i < 26; i++) {
        int c = count[i];
        if (c > 0) {
            long long ways = nCk(remaining, c, limit);
            if (ways == 0) return 0; // Guard against 0 before any division
            if (limit / ways < res) { // Safe overflow check
                return limit;
            }
            res *= ways;
            if (res >= limit) return limit;
            remaining -= c;
        }
    }
    return res;
}

char* smallestPalindrome(char* s, int k) {
    int total_freq[26] = {0};
    int n = strlen(s);
    long long target_k = k;
    long long limit = target_k + 1;

    // Count total frequency of each character in string s
    for (int i = 0; i < n; i++) {
        total_freq[s[i] - 'a']++;
    }

    int half_count[26] = {0};
    int half_len = 0;
    char mid_char = '\0';

    // Halve the counts to get exact counts for the left side of the palindrome
    for (int i = 0; i < 26; i++) {
        half_count[i] = total_freq[i] / 2;
        half_len += half_count[i];
        if (total_freq[i] % 2 != 0) {
            mid_char = (char)('a' + i);
        }
    }

    // Check if target k exceeds total valid palindromic permutations
    long long total_perms = countArrangements(half_count, half_len, limit);
    if (target_k > total_perms) {
        char* empty_res = (char*)malloc(1);
        empty_res[0] = '\0';
        return empty_res;
    }

    char* left_half = (char*)malloc(half_len + 1);
    int left_idx = 0;

    // Build the left half character-by-character greedily
    for (int step = 0; step < half_len; step++) {
        for (int i = 0; i < 26; i++) {
            if (half_count[i] == 0) continue;

            half_count[i]--;
            long long permutations = countArrangements(half_count, half_len - 1 - step, limit);

            if (permutations >= target_k) {
                left_half[left_idx++] = (char)('a' + i);
                break;
            } else {
                target_k -= permutations;
                half_count[i]++;
            }
        }
    }
    left_half[left_idx] = '\0';

    // Construct full palindrome: left_half + mid_char + reverse(left_half)
    int full_len = 2 * half_len + (mid_char != '\0' ? 1 : 0);
    char* result = (char*)malloc(full_len + 1);

    for (int i = 0; i < half_len; i++) {
        result[i] = left_half[i];
    }

    int curr = half_len;
    if (mid_char != '\0') {
        result[curr++] = mid_char;
    }

    for (int i = half_len - 1; i >= 0; i--) {
        result[curr++] = left_half[i];
    }
    result[curr] = '\0';

    free(left_half);
    return result;
}
