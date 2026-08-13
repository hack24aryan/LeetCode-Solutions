# 1140. Stone Game II

🟡 Medium &nbsp;|&nbsp; [View on LeetCode](https://leetcode.com/problems/stone-game-ii/submissions/2100516124/)

---

## Problem

Alice and Bob continue their games with piles of stones. There are a number of piles **arranged in a row**, and each pile has a positive integer number of stones `piles[i]`. The objective of the game is to end with the most stones.

Alice and Bob take turns, with Alice starting first.

On each player's turn, that player can take **all the stones** in the **first** `X` remaining piles, where `1 Example 1:

**Input:** piles = [2,7,9,4,4]

**Output:** 10

**Explanation:**

	- If Alice takes one pile at the beginning, Bob takes two piles, then Alice takes 2 piles again. Alice can get `2 + 4 + 4 = 10` stones in total.

	- If Alice takes two piles at the beginning, then Bob can take all three piles left. In this case, Alice get `2 + 7 = 9` stones in total.

So we return 10 since it's larger.

Example 2:

**Input:** piles = [1,2,3,4,5,100]

**Output:** 104

 

**Constraints:**

	- `1 <= piles.length <= 100`

	- `1 <= piles[i] <= 104`

---

## 📚 Topics

- Array
- Math
- Dynamic Programming
- Minimax
- Prefix Sum
- Game Theory
- Zero-Sum Game

---

## 🧠 Solution

| | |
|---|---|
| ⚡ **Runtime** | 2 ms |
| 💾 **Memory** | 10.5 MB |
| 🔤 **Language** | C |
| 📅 **Submitted** | 09 Aug 2026 |

---

*Generated automatically by [LeetHub Tapash](https://github.com/topics/leethub-tapash)*
