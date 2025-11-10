#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<vector<int>> matrix(5, vector<int>(5));

  pair<int, int> target;
  for (int i = 0; i < 5; ++i) {
    for (int j = 0; j < 5; ++j) {
      cin >> matrix[i][j];

      if (matrix[i][j] == 1) {
        target = {i, j};
      }
    }
  }

  int count = 0;

  count += abs(target.first - 2);
  count += abs(target.second - 2);

  cout << count;

  return 0;
}
