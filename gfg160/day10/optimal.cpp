#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int maxSubarraySum(vector<int> &arr) {
    // Code here
    int max_sum = arr[0];
    int current_sum = arr[0];

    for (int i = 1; i < arr.size(); ++i) {
      current_sum = max(arr[i], arr[i] + current_sum);
      max_sum = max(max_sum, current_sum);
    }

    return max_sum;
  }
};
