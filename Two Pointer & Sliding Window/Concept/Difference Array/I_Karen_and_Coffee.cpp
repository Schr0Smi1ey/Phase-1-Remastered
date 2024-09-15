#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 2e5 + 5;

int d[N], admissible[N];
void solution() {
    int n, k, q;
    cin >> n >> k >> q;
    int l, r;
    while(n--) {
        cin >> l >> r;
        d[l]++;
        d[r + 1]--;
    }
    for (int i = 1; i <= N; i++) {
        d[i] += d[i - 1];
        if(d[i] >= k)
            admissible[i] = 1;
    }
    for (int i = 1; i <= N; i++) {
        admissible[i] += admissible[i - 1];
    }
    while(q--) {
        cin >> l >> r;
        cout << admissible[r] - admissible[l - 1] << endl;
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
