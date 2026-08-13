#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* validSequence(char* word1, char* word2, int* returnSize) {
    int n = strlen(word1);
    int m = strlen(word2);

    // last[j] stores the rightmost index in word1 where word1[i] == word2[j]
    int* last = (int*)malloc(m * sizeof(int));
    for (int i = 0; i < m; i++) {
        last[i] = -1;
    }

    int i = n - 1;
    int j = m - 1;
    while (i >= 0 && j >= 0) {
        if (word1[i] == word2[j]) {
            last[j] = i;
            j--;
        }
        i--;
    }

    int* ans = (int*)malloc(m * sizeof(int));
    bool canSkip = true;
    j = 0;
    int ansSize = 0;

    for (i = 0; i < n; i++) {
        if (ansSize == m) break;

        if (word1[i] == word2[j]) {
            ans[ansSize++] = i;
            j++;
        } else if (canSkip && (j == m - 1 || i < last[j + 1])) {
            canSkip = false;
            ans[ansSize++] = i;
            j++;
        }
    }

    if (ansSize == m) {
        *returnSize = m;
        free(last);
        return ans;
    } else {
        *returnSize = 0;
        free(last);
        free(ans);
        return NULL;
    }
}
