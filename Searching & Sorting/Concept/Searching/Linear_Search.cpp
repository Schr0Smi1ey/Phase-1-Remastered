#include<bits/stdc++.h>
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, x; cin >> n >> x;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  // O(n)
  for (int i = 0; i < n; i++) {
    if (a[i] == x) {
      cout << "YES\n";
      return 0;
    }
  }
  cout << "NO\n";
  return 0;
}