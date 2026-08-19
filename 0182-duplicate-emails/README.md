# 182. Duplicate Emails

🟢 Easy &nbsp;|&nbsp; [View on LeetCode](https://leetcode.com/problems/duplicate-emails/)

---

## Problem

Table: `Person`

```
+-------------+---------+
| Column Name | Type    |
+-------------+---------+
| id          | int     |
| email       | varchar |
+-------------+---------+
id is the primary key (column with unique values) for this table.
Each row of this table contains an email. The emails will not contain uppercase letters.
```

 

Write a solution to report all the duplicate emails. Note that it's guaranteed that the email field is not NULL.

Return the result table in **any order**.

The result format is in the following example.

 

Example 1:

```
Input: 
Person table:
+----+---------+
| id | email   |
+----+---------+
| 1  | a@b.com |
| 2  | c@d.com |
| 3  | a@b.com |
+----+---------+
Output: 
+---------+
| Email   |
+---------+
| a@b.com |
+---------+
Explanation: a@b.com is repeated two times.
```

---

## 📚 Topics

- Database

---

## 🧠 Solution

| | |
|---|---|
| ⚡ **Runtime** | 476 ms |
| 💾 **Memory** | 0B |
| 🔤 **Language** | MySQL |
| 📅 **Submitted** | 19 Aug 2026 |

---

*Generated automatically by [LeetHub Tapash](https://github.com/topics/leethub-tapash)*
