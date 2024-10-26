#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long int
#define trace(x) cout << #x << " : " << x << endl;
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 2e5 + 5;

int search(int k, int x) {
    int l = 1, r = k, ans = 1;
    while(l <= r) {
        int mid = (l + r) / 2;
        int total = mid * (mid + 1) / 2;
        if(total <= x) {
            l = mid + 1;
            ans = mid;
        }
        else {
            r = mid - 1;
        }
    }
    return ans;
}
int search2(int k, int x) {
    int l = 1, r = k, ans = 1,maxima = (k * (k + 1)) / 2;
    while(l <= r) {
        int mid = (l + r) / 2;
        int total = mid * (mid + 1) / 2;
        if((maxima - total) <= x && (maxima - total) >= 0) {
            r = mid - 1;
            ans = mid;
        }
        else {
            l = mid + 1;
        }
    }
    return ans;
}
void solution() {
    int k, x;cin >> k >> x;
    int ans = search(k, x);
    x -= (ans * (ans + 1) / 2);
    k -= 1;
    if(x == 0 || k == 0) {
        cout << ans << endl;
        return;
    }
    int ans2 = search2(k, x);
    ans += (k - ans2);
    x -= ((k * (k + 1))/2 - (ans2 * (ans2 + 1) / 2));
    ans += (x > 0);
    cout << ans << endl;
}

int32_t main() {
    // fastio;
    int t = 1;
    cin >> t;
    while(t--) {
        solution();
    }
    return 0;
}
