int binary_search(int *nums, int target) {
  int low = 0, high = sizeof(nums) / sizeof(nums[0]);

  while (low <= high) {
    int mid = low + (high - low) / 2;
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
