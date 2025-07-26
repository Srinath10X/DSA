# Second Largest Element in an Array
---
Given an array of positive integers arr[] of size n, the task is to find second largest distinct element in the array.

> [!NOTE]
> If the second largest element does not exist, return -1. 

*Examples*:
```
Input: arr[] = [12, 35, 1, 10, 34, 1]
Output: 34
Explanation: The largest element of the array is 35 and the second largest element is 34.

Input: arr[] = [10, 5, 10]
Output: 5
Explanation: The largest element of the array is 10 and the second largest element is 5.

Input: arr[] = [10, 10, 10]
Output: -1
Explanation: The largest element of the array is 10 there is no second largest element.
```

## Brute Force Approach:
- The idea is to sort the array in non-decreasing order. Now, we know that the largest element will be at index n - 1. So, starting from index (n - 2), traverse the remaining array in reverse order. As soon as we encounter an element which is not equal to the largest element, return it as the second largest element in the array. If all the elements are equal to the largest element, return -1.

Look at the code in `brute.cpp`

## Better Approach:
- The approach is to traverse the array twice. In the first traversal, find the maximum element. In the second traversal, find the maximum element ignoring the one we found in the first traversal.

Look at the code in `better.cpp`

## Optimal Approach:
- The idea is to keep track of the largest and second largest element while traversing the array. Initialize largest and secondLargest with -1. Now, for any index i,
    - If `arr[i] > largest`, update secondLargest with largest and largest with `arr[i]`.
    - Else If `arr[i] < largest` and `arr[i] > secondLargest`, update secondLargest with `arr[i]`. 
