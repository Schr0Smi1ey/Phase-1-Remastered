#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long int
#define trace(x) cout << #x << " : " << x << endl;
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 2e5 + 5;

int arr[N], n , k;
bool f(int x) {
    int min_subarray_cnt = 1, sum = 0;
    for (int i = 0; i < n; i++) {
        if(arr[i] > x)
            return false;
        sum += arr[i];
        if (sum > x) {
            min_subarray_cnt++;
            sum = arr[i];
        }
    }
    return min_subarray_cnt <= k;
}

int32_t main() {
    fastio;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int l = 1, r = 1e15, ans = 0;
    while(l <= r) {
        int mid = (l + r) / 2;
        if(f(mid)) {
            ans = mid;
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }
    cout << ans;
    return 0;
}
