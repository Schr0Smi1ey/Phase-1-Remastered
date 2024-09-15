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
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int ans = 0,sum = 0,minSum = -1, j = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if(i >= k - 1) {
            if(minSum == -1)
                minSum = sum;
            if(sum <= minSum) {
                minSum = sum;
                ans = j + 1;
            }
            sum -= arr[j++];
        }
    }
    cout << ans << endl;
}

int32_t main() {
    fastio;
    int t = 1;
    while(t--) {
        solution();
    }
    return 0;
}
