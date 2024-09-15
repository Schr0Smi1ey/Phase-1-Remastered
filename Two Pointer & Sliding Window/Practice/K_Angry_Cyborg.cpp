#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long int
#define trace(x) cout << #x << " : " << x << endl;
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 2e5 + 5;


// Problem : Add arightmatic progression on range
void solution() {
    int n, q;
    cin >> n >> q;
    int arr[n], brr[n];
    for(int i = 0; i < n; i++) {
        arr[i] = brr[i] = 0;
    }
    int a = 1, d = 1;
    while(q--) {
        int l, r;cin >> l >> r;
        l--;r--;
        arr[l] += (a - (l * d));
        brr[l] += d;
        if(r + 1 < n) {
            arr[r + 1] -= (a - (l * d));
            brr[r + 1] -= d;
        }
    }
    for (int i = 1; i < n; i++) {
        arr[i] += arr[i - 1];
        brr[i] += brr[i - 1];
    }

    for (int i = 0; i < n; i++) {
        arr[i] += (brr[i] * i);
        cout << arr[i] << " ";
    }
    cout << endl;
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
