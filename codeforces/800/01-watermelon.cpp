#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  while (t--) {
    int num;
    cin >> num;

    num % 2 == 0 && num != 2 ? cout << "YES" : cout << "NO";
  }

  return 0;
}
