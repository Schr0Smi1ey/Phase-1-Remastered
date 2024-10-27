#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long int
#define trace(x) cout << #x << " : " << x << endl;
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 2e5 + 5;

int search(int *arr, int n, int k) {
    int low = 1, high = *max_element(arr, arr + n);
    int ans = 0;
    while(low <= high) {
        int mid = low + (high - low) / 2;
        int cnt = 0;
        for(int i = 0;i < n; i++) {
            if(arr[i] < mid) {
                continue;
            }
            cnt += arr[i] / mid;
        }
        if(cnt >= k) {
            ans = mid;
            low = mid + 1;
        } 
        else {
            high = mid - 1;
        }
    }
    return ans;
}
void solution() {
    int n , k; cin >> n >> k;
    int arr[n];
    for(int i = 0;i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    cout << search(arr, n, k) << endl;
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
