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
    int n;cin >> n;
    int arr[n];
    for(int i = 0;i < n; i++) {
        cin >> arr[i];
    }
    int ans = 0, r = 0;
    map<int, int> mp;
    for (int i = 0;i < n; i++) {
        mp[arr[i]]++;
        if(mp[arr[i]] > 1) {
            while(mp[arr[i]] > 1) {
                mp[arr[r]]--;
                r++;
            }
        }
        ans = max(ans, i - r + 1);
    }
    cout << ans << endl;
}

int32_t main() {
    fastio;
    int t = 1;
    while(t--) {
        solution();
    }
    return 0;
}
