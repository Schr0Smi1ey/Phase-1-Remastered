#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int

int32_t main() {
    fastio;
    int a = 4, b = 4, c = 5, d = 2;

    // Way - 01
    int mn = min(min(a, b), min(c, d));
    int mx = max(max(a, b), max(c, d));
    cout << mn << " " << mx << endl;
    // Way - 02 --------> easier

    mn = min({a, b, c, d});
    mx = max({a, b, c, d});
    cout << mn << " " << mx << endl;
    return 0;
}
