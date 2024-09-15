#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int

int32_t main() {
    fastio;
    int n, s;cin >> n >> s;
    int arr[n];
    for(auto &i : arr)
        cin >> i;

    int ans = 0, sum = 0, r = 0;
    for (int l = 0; l < n; l++) {
        while(r < n && sum + arr[r] <= s) {
            sum += arr[r];
            r++;
        }
        ans += r - l; // Number of segments with sum <= s
        sum -= arr[l];
    }
    cout << ans << endl;
    return 0;
}
