#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define endl "\n"
#define int long long int
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 2e5 + 5;

void solution() {
    int n, k;
    cin >> n >> k;
    vector<int> v;
    for (int i = 1; i * i <= n;i++) {
        if(n % i == 0) {
            v.push_back(i);
            if ((n / i) != i) {
                v.push_back((n / i));
            }
        }
    }
    sort(v.begin(), v.end());
    cout << endl;
    if(v.size() < k) {
        cout << -1;
        return;
    }
    cout << v[k-1] << endl;
}

int32_t main() {
    fastio;
    int t = 1;
    while (t--)
    {
        solution();
    }
    return 0;
}
