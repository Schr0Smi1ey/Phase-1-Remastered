#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 2e5 + 5;

struct DS { // TC : O(logn) per operation
    multiset<int> st;

    void insert(int x) {
        st.insert(x);
    }

    void erase(int x) {
        st.erase(st.find(x));
    }

    int get_max() {
        return *(--st.end());
    }

    int get_min() {
        return *st.begin();
    }

    int get() {
        return get_max() - get_min();
    }

    void print() {
        for(auto x : st) {
            cout << x << " ";
        }
        cout << endl;
    }
} ds;

void solution() {
    int n, k;cin >> n >> k;
    int arr[n];
    for (int i = 0;i < n; i++)
        cin >> arr[i];
    int ans = 0, r = 0;
    for (int l = 0; l < n; l++) { // TC : O(n)
        while(r < n) {
            ds.insert(arr[r]); // TC : O(logn)
            if(ds.get() > k) {
                ds.erase(arr[r]);
                break;
            }
            r++;
        }
        ans += (r - l);
        cout << endl;
        ds.erase(arr[l]);
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
