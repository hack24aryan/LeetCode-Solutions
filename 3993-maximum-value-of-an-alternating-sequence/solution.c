long long maximumValue(int n, int s, int m) {
    if (n == 1)
        return s;

    long long up = n / 2;
    return (long long)s + up * m - (up - 1);
}
