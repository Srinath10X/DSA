#include <bits/stdc++.h>
using namespace std;

/* Brute Force */
class BruteForceSolution {
public:
  vector<int> productExceptSelf(vector<int> &nums) {
    vector<int> vec(nums.size());

    for (int i = 0; i < nums.size(); ++i) {
      int count = 1;

      for (int j = 0; j < nums.size(); ++j) {
        if (i == j) continue;
        count *= nums[j];
      }

      vec[i] = count;
    }

    return vec;
  }
};

/* Optimal */
class OptimalSolution {
public:
  vector<int> productExceptSelf(vector<int> &nums) {
    int prefix = 1, suffix = 1;
    vector<int> res(nums.size(), 1);

    for (int i = 0; i < nums.size(); ++i) {
      res[i] = prefix;
      prefix *= nums[i];
    }

    for (int i = nums.size() - 1; i >= 0; --i) {
      res[i] *= suffix;
      suffix *= nums[i];
    }

    return res;
  }
};
