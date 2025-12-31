# Subsets

**Difficulty:** Medium  
**Topic:** Array, Recursion, BackTracking  



## Problem

Link : https://leetcode.com/problems/subsets/description/

Given an integer array nums of unique elements, return all possible subsets (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.

Example 1:

Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]


Example 2:

Input: nums = [0]
Output: [[],[0]]

## Approach
 We either pick an element or not pick it. If the element is picked we keep it in a data structure and go on to the next index. After this branch of recursion is completed we remove that element from the data Structure and calculate the case when that element is not picked.

Base Case : If we have reached at the end of array we add the current subset to answer list and return


## Complexity
- **Time:** $O(2^N * N)$
- **Space:** $O(2^N)$ for the list in which we store the answer and $O(N)$ for the recursion stack space (the depth of recursion tree will be n)

## Key Learnings
- The "Pick / Not Pick" Pattern: This is the foundational pattern for many DP (Knapsack) and Backtracking problems.