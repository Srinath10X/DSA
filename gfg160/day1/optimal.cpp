#include <bits/stdc++.h>

/**
 * Optimal solution
 * Traverse the array and assign the largest and second largest
 * while traversing
 *
 *   Time Complexity: O(n)
 *   Space Complexity: O(1) as I'm passing vector by reference
 */
int getSecondLargest(std::vector<int> &arr) {
  int largest = -1, second_largest = -1;

  for (int i = 0; i < arr.size(); ++i) {
    if (arr[i] > largest) {
      second_largest = largest;
      largest = arr[i];
    } else if (arr[i] > second_largest && arr[i] < largest) {
      second_largest = arr[i];
    }
  }

  return second_largest;
}

int main(int argc, char *argv[]) {
  std::vector<int> vec = {1, 2, 3, 4, 5};

  std::cout << getSecondLargest(vec);
  return 0;
}
