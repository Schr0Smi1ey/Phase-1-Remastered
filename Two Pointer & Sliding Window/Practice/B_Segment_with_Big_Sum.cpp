#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long int
#define trace(x) cout << #x << " : " << x << endl;
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 2e5 + 5;

void solution() {
    int n, s;cin >> n >> s;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ans = -1, sum = 0, r = 0;
    for (int l = 0; l < n; l++) {
        sum += a[l];
        while(sum >= s) {
            if (sum >= s) {
                if (ans == -1)
                    ans = l - r + 1;
                else
                    ans = min(ans, l - r + 1);
            }
            sum -= a[r++];
        }
    }
    cout << ans;
}

int32_t main() {
    fastio;
    int t = 1;
    while(t--) {
        solution();
    }
    return 0;
}
