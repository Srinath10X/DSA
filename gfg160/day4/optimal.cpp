#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  void rotateArr(vector<int> &arr, int d) {
    d = d % arr.size();

    for (int i = 0; i < d / 2; ++i) {
      swap(arr[i], arr[d - i - 1]);
    }

    for (int i = 0; i < (arr.size() - d) / 2; ++i) {
      swap(arr[d + i], arr[arr.size() - i - 1]);
    }

    for (int i = 0; i < arr.size() / 2; ++i) {
      swap(arr[i], arr[arr.size() - i - 1]);
    }
  }
};
