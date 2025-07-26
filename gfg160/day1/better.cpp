#include <bits/stdc++.h>

/**
 * Better solution
 * 1. Traverse the array and find the largest element
 * 2. Traverse the array and find the maximum element which is
 *    not equal to the largest element.
 *
 *   Time Complexity: O(n) = O(nlogn)
 *   Space Complexity: O(1) as I'm passing vector by reference
 */
int getSecondLargest(std::vector<int> &arr) {
  int largest = -1, second_largest = -1;

  for (int i = 0; i < arr.size(); ++i) {
    if (arr[i] > largest) largest = arr[i];
  }

  for (int i = 0; i < arr.size(); ++i) {
    if (arr[i] > second_largest && arr[i] != largest) second_largest = arr[i];
  }

  return second_largest;
}

int main(int argc, char *argv[]) {
  std::vector<int> vec = {1, 2, 3, 4, 5};

  std::cout << getSecondLargest(vec);
  return 0;
}
