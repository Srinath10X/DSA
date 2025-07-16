#include <bits/stdc++.h>

int main() {
  std::array<int, 5> arr = {5, 2, 3, 1, 4};

  // size()
  std::cout << "Size: " << arr.size() << "\n";

  // front() & back()
  std::cout << "First element: " << arr.front() << "\n";
  std::cout << "Last element: " << arr.back() << "\n";

  // at(i)
  std::cout << "Element at index 2: " << arr.at(2) << "\n";

  // operator[] (no bounds checking)
  std::cout << "Element at index 3: " << arr[3] << "\n";

  // fill(x)
  arr.fill(10);
  std::cout << "After fill: ";
  for (int x : arr)
    std::cout << x << " ";
  std::cout << "\n";

  // swap()
  std::array<int, 5> brr = {1, 2, 3, 4, 5};
  arr.swap(brr);
  std::cout << "After swap with brr: ";
  for (int x : arr)
    std::cout << x << " ";
  std::cout << "\n";

  // data() (returns raw pointer to the array)
  int *raw = arr.data();
  std::cout << "Raw data pointer: " << raw << ", first element: " << *raw << "\n";

  // sort (from <algorithm>)
  std::sort(arr.begin(), arr.end());
  std::cout << "Sorted: ";
  for (int x : arr)
    std::cout << x << " ";
  std::cout << "\n";

  // reverse (from <algorithm>)
  std::reverse(arr.begin(), arr.end());
  std::cout << "Reversed: ";
  for (int x : arr)
    std::cout << x << " ";
  std::cout << "\n";

  return 0;
}
