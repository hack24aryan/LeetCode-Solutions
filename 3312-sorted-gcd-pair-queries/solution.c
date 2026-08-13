int gcd(int a, int b)
{
    if (b == 0) return a;
    return gcd(b, a % b);
}

int* gcdValues(int* nums, int numsSize, long long* queries, int queriesSize, int* returnSize) {
    int maxVal = 50000;
    int i, j;

    int *freq = (int*)calloc(maxVal + 1, sizeof(int));
    for (i = 0; i < numsSize; i++)
        freq[nums[i]]++;

    long long *cntMultiple = (long long*)calloc(maxVal + 1, sizeof(long long));
    for (i = 1; i <= maxVal; i++) {
        long long c = 0;
        for (j = i; j <= maxVal; j += i)
            c += freq[j];
        cntMultiple[i] = c;
    }

    long long *exact = (long long*)calloc(maxVal + 1, sizeof(long long));
    for (i = maxVal; i >= 1; i--) {
        long long total = cntMultiple[i] * (cntMultiple[i] - 1) / 2;
        for (j = 2 * i; j <= maxVal; j += i)
            total -= exact[j];
        exact[i] = total;
    }

    long long *prefix = (long long*)calloc(maxVal + 1, sizeof(long long));
    for (i = 1; i <= maxVal; i++)
        prefix[i] = prefix[i - 1] + exact[i];

    int *ans = (int*)malloc(queriesSize * sizeof(int));
    for (i = 0; i < queriesSize; i++) {
        long long q = queries[i];
        int lo = 1, hi = maxVal, res = maxVal;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (prefix[mid] > q) {
                res = mid;
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }
        ans[i] = res;
    }

    *returnSize = queriesSize;

    free(freq);
    free(cntMultiple);
    free(exact);
    free(prefix);

    return ans;
}
