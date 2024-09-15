#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 1e3 + 5;

int arr[N][N];
void solution() {
    int n, q;
    cin >> n >> q;
    for (int i = 1;i <= n; i++) {
        char ch;
        for (int j = 1; j <= n;j ++) {
            cin >> ch;
            arr[i][j] = (ch == '*') + arr[i - 1][j] + arr[i][j - 1] - arr[i - 1][j - 1];
        }
    }
    while(q--) {
        int u, l, d, r;
        cin >> u >> l >> d >> r;
        cout << arr[d][r] - arr[u - 1][r] - arr[d][l - 1] + arr[u - 1][l - 1] << endl;
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
