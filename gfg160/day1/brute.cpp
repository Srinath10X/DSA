#include <bits/stdc++.h>

/**
 * Bruteforce solution
 * 1.Sort the array takes O(nlogn) time
 * 2.Traverse the array in reverse order and return
 *   the element which isn't equal to the last element takes O(n)
 *
 *   Time Complexity: O(nlogn + n) = O(nlogn)
 *   Space Complexity: O(1) as I'm passing vector by reference
 */
int getSecondLargest(std::vector<int> &arr) {
  sort(arr.begin(), arr.end());

  int n = arr.size();

  for (int i = n - 2; i >= 0; i--) {
    if (arr[i] != arr[n - 1]) {
      return arr[i];
    }
  }

  return -1;
}

int main(int argc, char *argv[]) {
  std::vector<int> vec = {1, 2, 3, 4, 5};

  std::cout << getSecondLargest(vec);
  return 0;
}
