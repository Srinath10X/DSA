#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int maximumProfit(vector<int> &prices) {
    // code here
    int max_profit = 0;
    int left_ptr = 0, right_ptr = 1;

    while (right_ptr < prices.size()) {
      if (prices[left_ptr] < prices[right_ptr]) {
        int profit = prices[right_ptr] - prices[left_ptr];
        max_profit = max(max_profit, profit);
      } else {
        left_ptr = right_ptr;
      }

      right_ptr++;
    }

    return max_profit;
  }
};
