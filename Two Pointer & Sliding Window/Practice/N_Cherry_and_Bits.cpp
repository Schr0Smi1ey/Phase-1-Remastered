#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 1e3 + 5;

bool a[N][N];
int pre[N][N];

void solution() {
    int n, m;cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            char ch;
            cin >> ch;
            a[i][j] = (ch == '1');
        }
    }
    int q;
    cin >> q;
    while(q--) {
        int u, l, d, r;
        cin >> u >> l >> d >> r;
        pre[u][l] += 1;
        pre[u][r + 1] -= 1;
        pre[d + 1][l] -= 1;
        pre[d + 1][r + 1] += 1;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++)
        {
            pre[i][j] += pre[i - 1][j] + pre[i][j - 1] - pre[i - 1][j - 1];
            if(pre[i][j] & 1)
                cout << (a[i][j] ^ 1);
            else
                cout << a[i][j];
        }
        cout << endl;
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
