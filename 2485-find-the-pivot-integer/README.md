# 2485. Find the Pivot Integer

🟡 Medium &nbsp;|&nbsp; [View on LeetCode](https://leetcode.com/problems/find-the-pivot-integer/)

---

## Problem

Given a positive integer `n`, find the **pivot integer** `x` such that:

	- The sum of all elements between `1` and `x` inclusively equals the sum of all elements between `x` and `n` inclusively.

Return *the pivot integer *`x`. If no such integer exists, return `-1`. It is guaranteed that there will be at most one pivot index for the given input.

 

Example 1:

```
Input: n = 8
Output: 6
Explanation: 6 is the pivot integer since: 1 + 2 + 3 + 4 + 5 + 6 = 6 + 7 + 8 = 21.
```

Example 2:

```
Input: n = 1
Output: 1
Explanation: 1 is the pivot integer since: 1 = 1.
```

Example 3:

```
Input: n = 4
Output: -1
Explanation: It can be proved that no such integer exist.
```

 

**Constraints:**

	- `1 <= n <= 1000`

---

## 📚 Topics

- Math
- Prefix Sum

---

## 🧠 Solution

| | |
|---|---|
| ⚡ **Runtime** | N/A |
| 💾 **Memory** | N/A |
| 🔤 **Language** | Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0. |
| 📅 **Submitted** | 29 Jul 2026 |

---

*Generated automatically by [LeetHub Tapash](https://github.com/topics/leethub-tapash)*
