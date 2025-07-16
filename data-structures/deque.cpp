#include <deque>
#include <iostream>

int main() {
  std::deque<int> d;

  /// The front and back operations will have a consistent O(1) complexity
  d.push_back(5);
  d.push_front(10);
  d.pop_back();
  d.pop_front();

  // Access elements
  std::cout << "First element: " << d.front() << std::endl;
  std::cout << "Last element: " << d.back() << std::endl;

  return 0;
}
