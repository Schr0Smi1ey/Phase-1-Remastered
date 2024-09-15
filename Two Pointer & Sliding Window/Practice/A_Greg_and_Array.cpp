#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 1e5 + 5;

int a[N], d[N], temp[N];
vector<int> op[N];
void solution() {
    int n,m,k;
    cin >> n >> m >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    
    for (int i = 1; i <= m; i++) {
        int l, r, d;cin >> l >> r >> d;
        op[i].push_back(l);
        op[i].push_back(r);
        op[i].push_back(d);
    }
    while(k--) {
        int x,y;
        cin >> x >> y;
        temp[x]++;
        temp[y + 1]--;
    }
    for (int i = 1; i <= m; i++) {
        temp[i] += temp[i - 1];
    }
    for (int i = 1; i <= n; i++) {
        d[i] = a[i] - a[i - 1];
    }

    for (int i = 1; i <= m; i++) {
        d[op[i][0]] += temp[i] * op[i][2];
        d[op[i][1] + 1] -= temp[i] * op[i][2];
    }
    for (int i = 1; i <= n; i++) {
        d[i] += d[i - 1];
    }
    for (int i = 1; i <= n; i++) {
        cout << d[i] << " ";
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
