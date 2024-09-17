#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 9;
int a[N], x;
// search for x in a[l...r]
bool search(int l, int r) { // O(log n)
  while (l <= r) { // run while there is at least one element in the search interval
    int mid = (l + r) / 2;
    if (a[mid] == x) {
      return true;
    }
    else if (x < a[mid]) {
      r = mid - 1;
    }
    else{
      l = mid + 1;
    }
  }
  return false;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, q; cin >> n >> q;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  while (q--) {
    cin >> x;
    bool found = search(1, n);
    if (found) {
      cout << "YES\n";
    }
    else {
      cout << "NO\n";
    }
  }
  return 0;
}