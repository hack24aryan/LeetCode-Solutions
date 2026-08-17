#define MAX(a, b) ((a) > (b) ? (a) : (b))
int memo[505][505];
int prefix[505];

int getSum(int l, int r) {
    return prefix[r + 1] - prefix[l];
}

int solve(int i, int j) {
    if (i >= j) return 0;
    if (memo[i][j] != -1) return memo[i][j];

    int max_score = 0;

    for (int k = i; k < j; k++) {
        int left_sum = getSum(i, k);
        int right_sum = getSum(k + 1, j);

        if (left_sum < right_sum) {
            max_score = MAX(max_score, left_sum + solve(i, k));
        } else if (left_sum > right_sum) {
            max_score = MAX(max_score, right_sum + solve(k + 1, j));
        } else {
            int take_left = left_sum + solve(i, k);
            int take_right = right_sum + solve(k + 1, j);
