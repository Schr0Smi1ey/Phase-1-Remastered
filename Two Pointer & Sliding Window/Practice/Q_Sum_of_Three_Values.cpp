#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long int
#define trace(x) cout << #x << " : " << x << endl;
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 2e5 + 5;

bool cmp(pair<int, int> a, pair<int, int> b) {
    return a.first < b.first;
} 
void solution() {
    int n, x;cin >> n >> x;
    pair<int, int> p[n];
    for (int i = 0; i < n; i++) {
        cin >> p[i].first;
        p[i].second = i + 1;
    }
    sort(p, p + n,cmp);
    for (int i = 0; i < n - 2; i++) {
        int comp = x - p[i].first;
        int l = i + 1, r = n - 1;
        while(l < r) {
            if(p[l].first + p[r].first == comp) {
                cout << p[i].second << " " << p[l].second << " " << p[r].second << endl;
                return;
            }
            else if(p[l].first + p[r].first > comp) {
                r--;
            }
            else {
                l++;
            }
        }
    }
    cout << "IMPOSSIBLE";
}

int32_t main() {
    fastio;
    int t = 1;
    while(t--) {
        solution();
    }
    return 0;
}
