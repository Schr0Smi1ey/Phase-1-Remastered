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
    string str = "";
    if(n == 0) {
        cout << 10 << endl;
        return;
    }
    if(n == 1) {
        cout << 1 << endl;
        return;
    }
    for (int i = 9; i > 1; i--) {
        while(n % i == 0) {
            str += to_string(i);
            n /= i;
        }
    }
    if(n != 1) {
        cout << -1 << endl;
        return;
    }
    reverse(str.begin(), str.end());
    cout << str << endl;
}

int32_t main() {
    fastio;
    int t = 1;
    while(t--) {
        solution();
    }
    return 0;
}
