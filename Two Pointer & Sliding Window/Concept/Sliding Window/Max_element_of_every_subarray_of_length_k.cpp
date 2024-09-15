#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int

struct DS {
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
} ds;
int32_t main() {
    fastio;
    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++) {
        ds.insert(arr[i]);
        if(i >= k - 1) {
            cout << ds.get_max() << " ";
            ds.erase(arr[i - k + 1]);
        }
    }
    return 0;
}
