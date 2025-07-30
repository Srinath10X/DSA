#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int maximumProfit(vector<int> &prices) {
    // code here
    int profit = 0;

    for (int i = 1; i < prices.size(); ++i) {
      if (prices[i] > prices[i - 1]) {
        profit += prices[i] - prices[i - 1];
      }
    }

    return profit;
  }
};
