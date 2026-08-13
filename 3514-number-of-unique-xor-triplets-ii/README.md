# 3514. Number of Unique XOR Triplets II

🟡 Medium &nbsp;|&nbsp; [View on LeetCode](https://leetcode.com/problems/number-of-unique-xor-triplets-ii/submissions/2079209888/)

---

## Problem

You are given an integer array `nums`.

A **XOR triplet** is defined as the XOR of three elements `nums[i] XOR nums[j] XOR nums[k]` where `i Example 1:

**Input:** nums = [1,3]

**Output:** 2

**Explanation:**

The possible XOR triplet values are:

	- `(0, 0, 0) &rarr; 1 XOR 1 XOR 1 = 1`

	- `(0, 0, 1) &rarr; 1 XOR 1 XOR 3 = 3`

	- `(0, 1, 1) &rarr; 1 XOR 3 XOR 3 = 1`

	- `(1, 1, 1) &rarr; 3 XOR 3 XOR 3 = 3`

The unique XOR values are {1, 3}. Thus, the output is 2.

Example 2:

**Input:** nums = [6,7,8,9]

**Output:** 4

**Explanation:**

The possible XOR triplet values are {6, 7, 8, 9}. Thus, the output is 4.

 

**Constraints:**

	- `1 <= nums.length <= 1500`

	- `1 <= nums[i] <= 1500`

---

## 📚 Topics

- Array
- Math
- Bit Manipulation
- Enumeration

---

## 🧠 Solution

| | |
|---|---|
| ⚡ **Runtime** | 407 ms |
| 💾 **Memory** | 11.4 MB |
| 🔤 **Language** | C |
| 📅 **Submitted** | 24 Jul 2026 |

---

*Generated automatically by [LeetHub Tapash](https://github.com/topics/leethub-tapash)*
