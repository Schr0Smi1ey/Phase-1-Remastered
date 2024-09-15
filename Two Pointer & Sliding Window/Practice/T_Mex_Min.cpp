#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long int
#define trace(x) cout << #x << " : " << x << endl;
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 1.5e6 + 5;

struct DS {
    set<int> st;
    map<int, int> mp;
    DS() {
        for (int i = 0;i <= N; i++) {
            st.insert(i);
        }
    }
    void insert(int x) {
        mp[x]++;
        if(mp[x] == 1)
            st.erase(x);
    }

    void erase(int x) {
        mp[x]--;
        if(mp[x] == 0) {
            st.insert(x);
        }
    }

    int getMex() {
        return *st.begin();
    }
};

void solution() {
    int n, m;cin >> n >> m;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int ans = INF, r = 0;
    DS ds;
    for (int i = 0; i < n; i++) {
        ds.insert(arr[i]);
        if(i >= m - 1) {
            ans = min(ans, ds.getMex());
            ds.erase(arr[r++]);
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
