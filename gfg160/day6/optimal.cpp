#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  vector<int> findMajority(vector<int> &arr) {
    unordered_map<int, int> hashMap;

    for (int i = 0; i < arr.size(); ++i) {
      hashMap[arr[i]]++;
    }

    vector<int> results;

    for (auto pair : hashMap) {
      if (pair.second > (arr.size() / 3)) {
        results.push_back(pair.first);
      }
    }

    sort(results.begin(), results.end());

    return results;
  }
};
