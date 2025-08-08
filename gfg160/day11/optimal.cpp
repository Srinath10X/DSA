#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int maxProduct(vector<int> &arr) {
    // code here
    int cur_min = arr[0];
    int cur_max = arr[0];
    int max_product = arr[0];

    for (int i = 1; i < arr.size(); ++i) {
      int temp = max({arr[i], arr[i] * cur_min, arr[i] * cur_max});
      cur_min = min({arr[i], arr[i] * cur_min, arr[i] * cur_max});
      cur_max = temp;

      max_product = max(cur_max, max_product);
    }

    return max_product;
  }
};
