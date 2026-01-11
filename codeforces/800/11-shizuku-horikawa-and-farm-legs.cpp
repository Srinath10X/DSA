#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int num;
    cin >> num;

    if (num % 2 != 0) {
      cout << 0 << "\n";
    } else {
      /// N/4 + 1
      cout << (num / 4) + 1 << "\n";
    }
  }

  return 0;
}
