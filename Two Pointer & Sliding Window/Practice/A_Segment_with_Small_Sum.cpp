#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
 
int32_t main() {
    fastio;
    int n, s;
    cin >> n >> s;
    int arr[n];
    for (int i = 0;i < n; i++) {
        cin >> arr[i];
    }
    int ans = 0,sum = 0,j = 0;
    for (int i = 0; i < n; i++) {
        while(j < n && sum + arr[j] <= s) {
            sum += arr[j];
            j++;
        }
        ans = max(ans, j - i);
        sum -= arr[i];
    }
    cout << ans << endl;
}