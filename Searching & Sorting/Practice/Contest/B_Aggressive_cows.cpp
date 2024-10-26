#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long int
#define trace(x) cout << #x << " : " << x << endl;
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 1e5 + 5;

int search(int *arr, int n, int c) {
    int low = 0, high = 1e9, ans = 0;
    while(low <= high) {
        int mid = (low + high) / 2;
        int cnt = 1, last = arr[0];
        for (int i = 1; i < n; i++) {
            if(arr[i] -  last >= mid) {
                cnt++;
                last = arr[i];
            }
        }
        if(cnt >= c) {
            ans = max(ans, mid);
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return ans;
}
void solution() {
    int n, c;
    cin >> n >> c;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    cout << search(arr, n, c) << endl;
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
