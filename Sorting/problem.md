#Leetcode Qustions 75, 747,  414,  506,  215
# LeetCode 75 - Sort Colors

## Problem Statement
Given an array `nums` with `n` objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with colors in the order red (0), white (1), and blue (2).

- Input: `nums = [2,0,2,1,1,0]`
- Output: `[0,0,1,1,2,2]`
---
## Approach 1: Bubble Sort (Simple but O(n²))
We repeatedly compare adjacent elements and swap them if they are out of order.  
This ensures that after each pass, the largest element moves to the end.


# LeetCode 747 - Largest Number At Least Twice of Others

## Problem Statement
Given an integer array `nums`, return the index of the largest element if it is at least twice as large as every other number in the array. Otherwise, return -1.

- Input: nums = [3,6,1,0]
- Output: 1 (since 6 is at least twice of all others)

---
## Approach 1: Brute Force (O(n log n))
We copy the array, sort it, and then check if the largest element is at least twice the second largest.  
Finally, we return the index of the largest element from the original array.
## Approach: Optimized O(n)
Instead of sorting, we find the largest and second largest elements in a single pass.  
Then check if `largest >= 2 * secondLargest`.  
If true, return the index of the largest element; otherwise return -1.
   

   # LeetCode 414 - Third Maximum Number

## Problem Statement
Given an integer array `nums`, return the third distinct maximum number in this array.  
If the third maximum does not exist, return the maximum number.

- Input: nums = [3,2,1]
- Output: 1
- Input: nums = [1,2]
- Output: 2
- Input: nums = [2,2,3,1]
- Output: 1

---

## Approach: Optimized O(n)
We keep track of the **first**, **second**, and **third** distinct maximums in a single pass.  
Duplicates are skipped to ensure distinct values.

# LeetCode 506: Relative Ranks

## Problem Statement
Given an array `score[i]` representing athletes’ scores, assign ranks:
- Highest score → "Gold Medal"
- 2nd highest → "Silver Medal"
- 3rd highest → "Bronze Medal"