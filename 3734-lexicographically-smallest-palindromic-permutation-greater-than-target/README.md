# 3734. Lexicographically Smallest Palindromic Permutation Greater Than Target

🔴 Hard &nbsp;|&nbsp; [View on LeetCode](https://leetcode.com/problems/lexicographically-smallest-palindromic-permutation-greater-than-target/)

---

## Problem

You are given two strings `s` and `target`, each of length `n`, consisting of lowercase English letters.

Return the **lexicographically smallest string** that is **both** a **palindromic permutation** of `s` and **strictly** greater than `target`. If no such permutation exists, return an empty string.

 

Example 1:

**Input:** s = "baba", target = "abba"

**Output:** "baab"

**Explanation:**

	- The palindromic permutations of `s` (in lexicographical order) are `"abba"` and `"baab"`.

	- The lexicographically smallest permutation that is strictly greater than `target` is `"baab"`.

Example 2:

**Input:** s = "baba", target = "bbaa"

**Output:** ""

**Explanation:**

	- The palindromic permutations of `s` (in lexicographical order) are `"abba"` and `"baab"`.

	- None of them is lexicographically strictly greater than `target`. Therefore, the answer is `""`.

Example 3:

**Input:** s = "abc", target = "abb"

**Output:** ""

**Explanation:**

`s` has no palindromic permutations. Therefore, the answer is `""`.

Example 4:

**Input:** s = "aac", target = "abb"

**Output:** "aca"

**Explanation:**

	- The only palindromic permutation of `s` is `"aca"`.

	- `"aca"` is strictly greater than `target`. Therefore, the answer is `"aca"`.

 

**Constraints:**

	- `1 <= n == s.length == target.length <= 300`

	- `s` and `target` consist of only lowercase English letters.

---

## 📚 Topics

- Two Pointers
- String
- Enumeration

---

## 🧠 Solution

| | |
|---|---|
| ⚡ **Runtime** | 8 ms |
| 💾 **Memory** | 46.8 MB |
| 🔤 **Language** | Java |
| 📅 **Submitted** | 29 Aug 2026 |

---

*Generated automatically by [LeetHub Tapash](https://github.com/topics/leethub-tapash)*
