#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 9;
int a[N], x;
// search for x in a[l...r]
bool search(int l, int r) { // O(log n)
  if (l > r) return false;
  int mid = (l + r) / 2;
  if (a[mid] == x) return true;
  else if (x < a[mid]) {
    return search(l, mid - 1);
  }
  else {
    return search(mid + 1, r);
  }
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