#include <bits/stdc++.h>
using namespace std;

int getLongestSubarray(vector<int> &a, long long k) {
  int n = a.size();

  int maxLen = 0;
  long long sum = 0;
  map<long long, int> preSumMap;

  for (int i = 0; i < n; i++) {
    sum += a[i];

    // This is for sub array from idx = 0 -> i where sum == k
    // it means that the max_len be the i + 1 for example
    // arr = [1, 2, 3, 4, 5] and k = 6 and let's say 1 + 2 + 3 = 6
    // it means that 0 to 2 idx we've found that at idx 2 prefix sum is 6
    // that concludes that the sum from 0 -> 2 is 6
    // then the length will be i + 1
    if (sum == k) {
      maxLen = max(maxLen, i + 1);
    }

    long long rem = sum - k;

    if (preSumMap.find(rem) != preSumMap.end()) {
      int len = i - preSumMap[rem];
      maxLen = max(maxLen, len);
    }

    if (preSumMap.find(sum) == preSumMap.end()) {
      preSumMap[sum] = i;
    }
  }

  return maxLen;
}

int main() {
  vector<int> a = {2, 3, 5, 1, 9};
  long long k = 10;
  int len = getLongestSubarray(a, k);
  cout << "The length of the longest subarray is: " << len << "\n";
  return 0;
}
