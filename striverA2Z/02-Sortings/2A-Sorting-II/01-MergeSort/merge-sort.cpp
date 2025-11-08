#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &nums, int low, int mid, int high) {
  int n1 = mid + 1 - low;
  int n2 = high - mid;

  vector<int> left(n1);
  vector<int> right(n2);

  for (int i = 0; i < n1; i++) {
    left[i] = nums[low + i];
  }

  for (int i = 0; i < n2; i++) {
    right[i] = nums[mid + 1 + i];
  }

  int i = 0, j = 0, k = low;
  while (i < n1 && j < n2) {
    if (left[i] <= right[j]) {
      nums[k] = left[i];
      i++;
    } else {
      nums[k] = right[j];
      j++;
    }
    k++;
  }

  while (i < n1) {
    nums[k] = left[i];
    i++;
    k++;
  }

  while (j < n2) {
    nums[k] = right[j];
    j++;
    k++;
  }
}

void merge_sort(vector<int> &nums, int low, int high) {
  if (low < high) {
    int mid = (low + high) >> 1;

    merge_sort(nums, low, mid);
    merge_sort(nums, mid + 1, high);

    merge(nums, low, mid, high);
  }
}

int main() {
  vector<int> nums = {1, 6, 8, 5, 3, 3, 2};

  merge_sort(nums, 0, nums.size() - 1);

  for (int i = 0; i < nums.size(); i++) {
    cout << nums[i] << " ";
  }
  return 0;
}
