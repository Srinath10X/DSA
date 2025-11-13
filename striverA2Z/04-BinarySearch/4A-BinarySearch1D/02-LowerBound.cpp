#include <bits/stdc++.h>
using namespace std;

/**
 *  Algorithm: LowerBound
 *  Time Complexity: O(log n)
 *  Space Complexity: O(1)
 *
 *  The lower bound of a number can be defined as
 *  the first index in the sorted array which is
 *  greater than or equal to the target number
 */

int lowerBound(vector<int> &nums, int target) {
  int low = 0, high = nums.size() - 1;

  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (nums[mid] >= target) {
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }

  return low;
}

int main() {
  int x = 9;
  vector<int> nums = {2, 3, 7, 10, 11, 11, 25};

  cout << lowerBound(nums, x);
  return 0;
}
