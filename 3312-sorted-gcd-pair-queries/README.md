# 3312. Sorted GCD Pair Queries

🔴 Hard &nbsp;|&nbsp; [View on LeetCode](https://leetcode.com/problems/sorted-gcd-pair-queries/submissions/2085119373/)

---

## Problem

You are given an integer array `nums` of length `n` and an integer array `queries`.

Let `gcdPairs` denote an array obtained by calculating the GCD of all possible pairs `(nums[i], nums[j])`, where `0 Example 1:

**Input:** nums = [2,3,4], queries = [0,2,2]

**Output:** [1,2,2]

**Explanation:**

`gcdPairs = [gcd(nums[0], nums[1]), gcd(nums[0], nums[2]), gcd(nums[1], nums[2])] = [1, 2, 1]`.

After sorting in ascending order, `gcdPairs = [1, 1, 2]`.

So, the answer is `[gcdPairs[queries[0]], gcdPairs[queries[1]], gcdPairs[queries[2]]] = [1, 2, 2]`.

Example 2:

**Input:** nums = [4,4,2,1], queries = [5,3,1,0]

**Output:** [4,2,1,1]

**Explanation:**

`gcdPairs` sorted in ascending order is `[1, 1, 1, 2, 2, 4]`.

Example 3:

**Input:** nums = [2,2], queries = [0,0]

**Output:** [2,2]

**Explanation:**

`gcdPairs = [2]`.

 

**Constraints:**

	- `2 <= n == nums.length <= 105`

	- `1 <= nums[i] <= 5 * 104`

	- `1 <= queries.length <= 105`

	- `0 <= queries[i] < n * (n - 1) / 2`

---

## 📚 Topics

- Array
- Hash Table
- Math
- Binary Search
- Combinatorics
- Counting
- Number Theory
- Prefix Sum
- Euclidean Algorithm
- Greatest Common Divisor

---

## 🧠 Solution

| | |
|---|---|
| ⚡ **Runtime** | 1473 ms |
| 💾 **Memory** | 301 MB |
| 🔤 **Language** | C |
| 📅 **Submitted** | 28 Jul 2026 |

---

*Generated automatically by [LeetHub Tapash](https://github.com/topics/leethub-tapash)*
