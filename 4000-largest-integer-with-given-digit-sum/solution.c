int largestInteger(int n, int s) {
    if (s > 9 * n) {
        return -1;
    }

    if (s == 0) {
        return 0;
    }

    int result = 0;

    for (int i = 0; i < n; i++) {
        int digit;

        if (s >= 9) {
            digit = 9;
            s -= 9;
        } else {
            digit = s;
            s = 0;
        }

        result = result * 10 + digit;
    }

    return result;
}
