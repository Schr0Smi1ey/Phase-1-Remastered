#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 1e6 + 5;

int d[N];
void divisors() { // TC = O(nlogn)
    for (int i = 1; i < N; i++) {
        for (int j = i; j < N; j += i) {
            d[j]++;
        }
    }
}

int32_t main() {
    fastio;
    int t = 1;
    cin >> t;
    divisors();
    while(t--) {
        int n;
        cin >> n;
        cout << d[n] << endl;
    }
    return 0;
}
