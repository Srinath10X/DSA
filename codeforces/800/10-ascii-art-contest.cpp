#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<int> nums(3);

  for (int i = 0; i < 3; ++i) {
    cin >> nums[i];
  }

  int min_value = *min_element(nums.begin(), nums.end());
  int max_value = *max_element(nums.begin(), nums.end());

  if (abs(min_value - max_value) >= 10) {
    cout << "check again";
  } else {
    sort(nums.begin(), nums.end());
    cout << "final " << nums[1];
  }

  return 0;
}
