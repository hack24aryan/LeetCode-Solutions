# 1929. Concatenation of Array

🟢 Easy &nbsp;|&nbsp; [View on LeetCode](https://leetcode.com/problems/concatenation-of-array/submissions/2085886413/)

---

## Problem

Given an integer array `nums` of length `n`, you want to create an array `ans` of length `2n` where `ans[i] == nums[i]` and `ans[i + n] == nums[i]` for `0 Example 1:

```
Input: nums = [1,2,1]
Output: [1,2,1,1,2,1]
Explanation: The array ans is formed as follows:
- ans = [nums[0],nums[1],nums[2],nums[0],nums[1],nums[2]]
- ans = [1,2,1,1,2,1]
```

Example 2:

```
Input: nums = [1,3,2,1]
Output: [1,3,2,1,1,3,2,1]
Explanation: The array ans is formed as follows:
- ans = [nums[0],nums[1],nums[2],nums[3],nums[0],nums[1],nums[2],nums[3]]
- ans = [1,3,2,1,1,3,2,1]
```

 

**Constraints:**

	- `n == nums.length`

	- `1 <= n <= 1000`

	- `1 <= nums[i] <= 1000`

---

## 📚 Topics

- Array
- Simulation

---

## 🧠 Solution

| | |
|---|---|
| ⚡ **Runtime** | 0 ms |
| 💾 **Memory** | 15.2 MB |
| 🔤 **Language** | C |
| 📅 **Submitted** | 29 Jul 2026 |

---

*Generated automatically by [LeetHub Tapash](https://github.com/topics/leethub-tapash)*
