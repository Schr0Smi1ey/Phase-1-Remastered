#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 2e5 + 5;

int arr[N],d[N];
void solution() {
    int n, q;
    cin >> n >> q;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n + 1);
    vector<pair<int, int>> v;
    while(q--) {
        int l, r;cin >> l >> r;
        v.push_back({l, r});
        d[l]++;
        d[r + 1]--;
    }
    for(int i = 1; i <= n; i++) {
        d[i] += d[i - 1];
    }
    priority_queue<pair<int,int>> pq;
    for(int i = 1;i <= n; i++) {
        pq.push({d[i], i});
    }
    for (int i = 1;i <= n; i++) {
        int x = pq.top().second;
        pq.pop();
        d[x] = arr[n - i + 1];
    }
    for(int i = 1;i <= n; i++) {
        d[i] += d[i - 1];
    }
    int sum = 0;
    for (auto x : v) {
        sum += d[x.second] - d[x.first - 1];
    }
    cout << sum;
}

int32_t main() {
    fastio;
    int t = 1;
    while(t--) {
        solution();
    }
    return 0;
}
