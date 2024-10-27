#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long int
#define trace(x) cout << #x << " : " << x << endl;
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 2e5 + 5;
int cnt = 1;
void solution() {
    int n, q;cin >> n >> q;
    cout << "Case " << cnt++ << ":" << endl;
    int arr[n];
    for(int i = 0;i < n; i++) {
        cin >> arr[i];
    }
    for(int i = 0;i < q; i++) {
        int l, r;cin >> l >> r;
        int lIndex = lower_bound(arr, arr + n, l) - arr;
        int rIndex = upper_bound(arr, arr + n, r) - arr;
        if(lIndex == n) {
            cout << 0 << endl;
        } else {
            cout << rIndex - lIndex << endl;
        }
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
