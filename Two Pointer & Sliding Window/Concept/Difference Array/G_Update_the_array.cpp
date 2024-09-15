#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 1e6 + 5;

void solution() {
    int n, u;
    cin >> n >> u;
    vector<int> d(n + 1, 0);   
    for (int i = 1; i <= u; i++) {
        int l, r, val;
        cin >> l >> r >> val;
        d[l] += val;
        d[r + 1] -= val;
    }
    for (int i = 1; i <= n; i++) {
        d[i] += d[i - 1];
    }
    int q;
    cin >> q;
    while(q--) {
        int idx;
        cin >> idx;
        cout << d[idx] << endl;
    }
}

int32_t main() {
    fastio;
    int t = 1;
    cin >> t;
    while(t--) {
        solution();
    }
    return 0;
}
