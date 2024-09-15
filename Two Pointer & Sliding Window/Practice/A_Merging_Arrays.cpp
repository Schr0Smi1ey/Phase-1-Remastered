#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 2e5 + 5;

void solution() {
    int n,m;cin >> n >> m;
    vector<int> a(n), b(m);
    for(auto &i : a) cin >> i;
    for(auto &i : b) cin >> i;
    int merge[n + m];
    int i = 0, j = 0, k = 0;
    while(i < n && j < m) {
         if (a[i] < b[j]) {
            merge[k++] = a[i++];
        } else {
            merge[k++] = b[j++];
        }
    }
    while(i < n) {
        merge[k++]  = a[i++];
    }
    while(j < m) {
        merge[k++] = b[j++];
    }
    for(auto x : merge) {
        cout << x << " ";
    }
}

int32_t main() {
    fastio;
    int t = 1;
    while(t--) {
        solution();
    }
    return 0;
}
