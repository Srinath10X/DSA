int linear_search(int *nums, int target) {
  int i;
  for (i = 0; i < sizeof(nums) / sizeof(nums[0]); i++) {
    if (nums[i] == target) {
      return i;
    }
  }
  return -1;
}
