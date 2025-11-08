#include <bits/stdc++.h>
using namespace std;

/*
 *
        word
        localization
        internationalization
        pneumonoultramicroscopicsilicovolcanoconiosis
 *
 *
 *
 *
 */

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;

    if (s.size() > 10) {
      int num = s.size() - 2;
      char first = s[0], second = s[s.size() - 1];

      s = first + to_string(num) + second;
      cout << s << "\n";
    } else {
      cout << s << "\n";
    }
  }

  return 0;
}
