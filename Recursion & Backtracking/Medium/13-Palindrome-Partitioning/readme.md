# Palindrome Partitioning

**Difficulty:** Medium  
**Topic:** Array, Recursion, BackTracking  



## Problem

Link : https://leetcode.com/problems/palindrome-partitioning/description/

Given a string s, partition s such that every substring of the partition is a palindrome. Return all possible palindrome partitioning of s.

Example 1:

Input: s = "aab"
Output: [["a","a","b"],["aa","b"]]


Example 2:

Input: s = "a"
Output: [["a"]]

## Approach
We can do the partition at indexes 0,1,2 etc upto n where n is the size of string.For this we maintain a or loop. Now to get a valid partition the substring upto that index must be a palindrome.We keep that substring in a list and after that we do the same for the rest of the string. If we have reached till the end the list contains a valid answer


## Complexity
- **Time:** $O(2^N * N)$  $(2^N)$ for partitioning and n for checking palindrome
- **Space:** $O(2^N)$ for the list in which we store the answer and $O(N)$ for the recursion stack space (the depth of recursion tree will be n)

## Key Learnings
-Partitioning problems often map to backtracking
