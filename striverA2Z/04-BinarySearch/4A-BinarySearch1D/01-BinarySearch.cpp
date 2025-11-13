#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &nums, int target) {
  int low = 0, high = nums.size() - 1;

  while (low <= high) {
    int mid = low + (high - low) / 2;

    ///  Visualization
    ///
    ///           0  1  2  3  4  5
    ///  nums = [-1, 0, 3, 5, 9, 12]  target = 9
    ///           ^     ^         ^
    ///           |     |         |
    ///          low   mid      high
    ///
    ///  If the mid value is < target then
    ///  move `low -> mid + 1` other wise high -> mid - 1

    if (nums[mid] == target) {
      return mid;
    } else if (nums[mid] < target) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }

  return -1;
}

int main() {
  int target = 9;
  vector<int> nums = {-1, 0, 3, 5, 9, 12};
  cout << binarySearch(nums, target) << endl;
  return 0;
}
