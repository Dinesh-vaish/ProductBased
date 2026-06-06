# LeetCode 75 - Sort Colors

## Problem Statement
Given an array `nums` with `n` objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with colors in the order red (0), white (1), and blue (2).

- Input: `nums = [2,0,2,1,1,0]`
- Output: `[0,0,1,1,2,2]`
---
## Approach 1: Bubble Sort (Simple but O(n²))
We repeatedly compare adjacent elements and swap them if they are out of order.  
This ensures that after each pass, the largest element moves to the end.


   