#include <bits/stdc++.h>
using namespace std;

/**
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

class Solution {
public:
  bool check(vector<int> &nums) {
    size_t count = 0;

    if (nums.size() == 1)
      return true;

    for (size_t i = 0; i < nums.size() - 1; ++i) {
      if (nums[i] > nums[i + 1])
        count++;
    }

    if (nums[nums.size() - 1] > nums[0])
      count++;

    return count <= 1;
  }
};
