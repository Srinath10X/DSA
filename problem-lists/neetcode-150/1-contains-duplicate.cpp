#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  bool containsDuplicate(vector<int> &nums) {
    unordered_set<int> uset;

    for (int num : nums) {
      if (uset.find(num) != uset.end())
        return true;
      else
        uset.insert(num);
    }

    return false;
  }
};
