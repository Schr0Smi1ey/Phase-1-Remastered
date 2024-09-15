#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 2e5 + 5;

int divisor(int n,int x,int y) {
    int ans = 0;
    for (int i = 1; i * i <= n; i++) {
        if ((n % i) == 0 && i > 1) {
            if(x == -1 && y == -1)
                return i;
            else if(i != x && y == -1)
                return i;
        }
    }
    return ans;
}
void solution() {
    int n;
    cin >> n;
    int a = divisor(n, -1, -1); // a is the smallest divisor of n and > 1
    if(a == 0) {
        cout << "NO" << endl;
        return;
    }
    int b = divisor(n / a, a, -1); // b is the smallest divisor of n / a and != a and > 1
    if(b == 0) {
        cout << "NO" << endl;
        return;
    }
    int c = n / (a * b); // c is the remaining number
    if(c == 1 || c == a || c == b) {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    cout << a << " " << b << " " << c << endl;
}

int32_t main() {
    fastio;
    int t = 1;
    cin >> t;
    while(t--) {
        solution();
    }
    return 0;
}
