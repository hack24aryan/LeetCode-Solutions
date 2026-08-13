# 3993. Maximum Value of an Alternating Sequence

🟡 Medium &nbsp;|&nbsp; [View on LeetCode](https://leetcode.com/problems/maximum-value-of-an-alternating-sequence/submissions/2072525799/)

---

## Problem

You are given three integers `n`, `s`, and `m`.

A sequence `seq` of integers of length `n` is considered **valid** if:

	- `seq[0] = s`.

	- The sequence is **alternating**, meaning that either:
	

		`seq[0] > seq[1]  ...`, or

		- `seq[0]  seq[2] 
	- For every adjacent pair, `|seq[i] - seq[i - 1]| Example 1:

**Input:** n = 4, s = 3, m = 5

**Output:** 12

**Explanation:**

	- One valid sequence is `[3, 8, 7, 12]`.

	- The maximum element in the sequence is 12.

Example 2:

**Input:** n = 2, s = 4, m = 3

**Output:** 7

**Explanation:**

	- One valid sequence is `[4, 7]`.

	- The maximum element in the sequence is 7.

 

**Constraints:**

	- `1 <= n, s <= 109`

	- `1 <= m <= 105`

---

## 📚 Topics

- General

---

## 🧠 Solution

| | |
|---|---|
| ⚡ **Runtime** | 3 ms |
| 💾 **Memory** | 9.3 MB |
| 🔤 **Language** | C |
| 📅 **Submitted** | 18 Jul 2026 |

---

*Generated automatically by [LeetHub Tapash](https://github.com/topics/leethub-tapash)*
