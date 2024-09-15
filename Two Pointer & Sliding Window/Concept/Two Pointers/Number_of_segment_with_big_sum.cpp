#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int

int32_t main() {
    fastio;
    int n, s;
    cin >> n >> s;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ans = 0, sum = 0, r = 0;
    for (int l = 0; l < n; l++) {
        while(r < n && sum + a[r] < s) {
            sum += a[r];
            r++;
        }
        ans += n - r;
        sum -= a[l];
    }
    cout << ans << endl;
    return 0;
}
