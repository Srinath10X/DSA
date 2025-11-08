#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, k;
  cin >> n >> k;

  vector<int> scores(n);

  for (int i = 0; i < n; ++i) {
    cin >> scores[i];
  }

  int kth_score = scores[k - 1];
  int advanced_participents = 0;

  for (const int score : scores) {
    if (score >= kth_score && score > 0) {
      advanced_participents++;
    }
  }

  cout << advanced_participents;

  return 0;
}
