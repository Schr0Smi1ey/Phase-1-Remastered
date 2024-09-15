#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long int
#define trace(x) cout << #x << " : " << x << endl;
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 2e5 + 5;

struct DS {
    multiset<int> st;
    DS() {}
    void insert(int x) {
        st.insert(x);
    }
    void erase(int x) {
        st.erase(st.find(x));
    }
    int getMax() {
        return *(--st.end());
    }

    int getMin() {
        return *st.begin();
    }
} ds;

void solution() {
    int n, k;cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> a, b;
    int j = 0;
    for (int i = 0; i < n;i++) {
        ds.insert(arr[i]);
        if(i >= k - 1) {
            a.push_back(ds.getMin());
            b.push_back(ds.getMax());
            ds.erase(arr[j++]);
        }
    }
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " \n"[i == a.size() - 1]; // ternary operator. if i == a.size() - 1 then print \n else print space
    }
    for (int i = 0; i < b.size(); i++) {
        cout << b[i] << " \n"[i == b.size() - 1];
    }
}

int32_t main() {
    fastio;
    int t = 1;
    while(t--) {
        solution();
    }
    return 0;
}
