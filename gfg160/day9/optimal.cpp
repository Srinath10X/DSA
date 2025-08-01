#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int getMinDiff(vector<int> &arr, int k) {
    // code here
    if (arr.size() == 1) return 0;

    sort(arr.begin(), arr.end());

    int min_ = arr[0];
    int max_ = arr[arr.size() - 1];

    int res = max_ - min_;

    for (int i = 1; i < arr.size(); ++i) {
      if (arr[i] < k) continue;

      max_ = max(arr[i - 1] + k, arr[arr.size() - 1] - k);
      min_ = min(arr[i] - k, arr[0] + k);

      res = min(res, max_ - min_);
    }

    return res;
  }
};
