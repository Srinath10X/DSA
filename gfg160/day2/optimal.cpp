#include <bits/stdc++.h>

void moveAllZerosToEnd(std::vector<int> &vec) {
  int idx = 0;

  for (int i = 0; i < vec.size(); i++) {
    if (vec[i] != 0) {
      vec[idx++] = vec[i];
    }
  }

  while (idx < vec.size()) {
    vec[idx++] = 0;
  }
}

int main() {
  std::vector<int> vec = {1, 2, 3, 0, 3, 0, 4, 3, 0, 2};

  moveAllZerosToEnd(vec);

  return 0;
}
