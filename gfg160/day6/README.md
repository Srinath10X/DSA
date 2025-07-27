# Majority Element - More Than n/3
---
Given an array arr[] consisting of n integers, the task is to find all the array elements which occurs more than floor(n/3) times.
Note: The returned array of majority elements should be sorted.
Example:
```
Input: arr[] = [2, 2, 3, 1, 3, 2, 1, 1]
Output: [1, 2]
Explanation: The frequency of 1 and 2 is 3, which is more than floor n/3 (8/3 = 2).

Input:  arr[] = [-5, 3, -5]
Output: [-5]
Explanation: The frequency of -5 is 2, which is more than floor n/3 (3/3 = 1).

Input:  arr[] = [3, 2, 2, 4, 1, 4]
Output: []
Explanation: There is no majority element
```
Constraint:
```
1 ≤ arr.size() ≤ 106
-105 ≤ arr[i] ≤ 105
```
