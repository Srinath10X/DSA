#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  void nextPermutation(vector<int> &arr) {
    // code here
    int n = arr.size();
    int i = n - 2;

    while (i >= 0 && arr[i] >= arr[i + 1]) {
      i--;
    }

    if (i >= 0) {
      int j = n - 1;

      while (arr[j] <= arr[i]) {
        j--;
      }

      swap(arr[i], arr[j]);
    }

    /* I don't use reverse
       I just use this while loop instead */

    int left = i + 1, right = n - 1;

    while (left < right) {
      swap(arr[left], arr[right]);
      left++, right--;
    }
  }
};
