class Solution(object):
    def countValidSequences(self, n, k):
        """
        :type n: int
        :type k: int
        :rtype: int
        """
        ravolqedin = n + k
        MOD = 10**9 + 7

        if k > n:
            return 0

        # Upper bound for factorials needed
        max_val = n + k

        fact = [1] * (max_val + 1)
        invFact = [1] * (max_val + 1)

        for i in range(1, max_val + 1):
            fact[i] = (fact[i - 1] * i) % MOD

        invFact[max_val] = pow(fact[max_val], MOD - 2, MOD)
        for i in range(max_val - 1, -1, -1):
            invFact[i] = (invFact[i + 1] * (i + 1)) % MOD

        def nCr(N, R):
            if R < 0 or R > N:
                return 0
            return fact[N] * invFact[R] % MOD * invFact[N - R] % MOD

        # Total positive integer sequences summing to n
        total = nCr(n - 1, k - 1)

        # Sequences consisting purely of odd integers
        odd = 0
        if (n - k) >= 0 and (n - k) % 2 == 0:
            m = (n - k) // 2
            odd = nCr(m + k - 1, k - 1)

        return (total - odd + MOD) % MOD
