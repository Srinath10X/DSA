#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  void reverseArray(vector<int> &arr) {
    for (int i = 0; i < arr.size() / 2; ++i) {
      swap(arr[i], arr[arr.size() - i - 1]);
    }
  }
};
