#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long int
#define trace(x) cout << #x << " : " << x << endl;
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 2e5 + 5;

int32_t main() {
    fastio;
    int cnt = 1;
    while(true) {
        int n, q;cin >> n >> q;
        if(n == 0 && q == 0)
            break;
        cout << "CASE# " << cnt++ << ":" << endl;
        int arr[n + 1];
        for(int i = 1;i <= n; i++) {
            cin >> arr[i];
        }
        sort(arr + 1, arr + n + 1);
        map<int, int> mp;
        for (int i = 1;i <= n; i++) {
            if(mp.find(arr[i]) != mp.end())
                mp[arr[i]] = min(mp[arr[i]], i);
            else 
                mp[arr[i]] = i;
        }
        while(q--) {
            int x;cin >> x;
            if(mp.find(x) != mp.end()) {
                cout << x << " found at " << mp[x] << endl;
            } else {
                cout << x << " not found" << endl;
            }
        }
    }
    return 0;
}
