#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
  unordered_map<int, int> mp;

  for (char c : s) {
    mp[c]++;
  }

  for (char c : t) {
    mp[c]--;
  }

  for (auto it : mp) {
    if (it.second != 0) {
      return false;
    }
  }

  return true;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    int size;
    cin >> size;

    string s, t;
    cin >> s >> t;

    if (!isAnagram(s, t)) {
      cout << "NO\n";
    } else {
      cout << "YES\n";
    }
  }

  return 0;
}
