#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  bool isAnagram(string s, string t) {
    if (s.size() != t.size()) return false;

    unordered_map<char, int> umap;

    for (const char c : s) {
      umap[c]++;
    }

    for (const char c : t) {
      umap[c]--;
    }

    for (auto pair : umap) {
      if (pair.second > 0) return false;
    }

    return true;
  }
};
