#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long int
#define trace(x) cout << #x << " : " << x << endl;
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 2e5 + 5;

int n, k, a[N], b[N];

// ----> Time Complexity O(n)

bool f(int x) { // ---> Number of pairs that are less than or equal to x
    int cnt = 0, i = 0, j = n - 1;
    while(i < n && j >= 0) {
        if(a[i] + b[j] > x) {
            j--;
        }
        else {
            cnt += (j + 1);
            i++;
        }
    }
    return cnt >= k;
}

// ----> Time Complexity O(nlogn)
bool f1(int x) {
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cnt += (upper_bound(b, b + n, x - a[i]) - b - 1);
    }
    cout << "cnt : " << cnt << endl << endl;
    return cnt >= k;
}

void solution() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    sort(a, a + n);
    sort(b, b + n);
    int l = 1, r = 3e9, ans = 0;
    while(l <= r) {
        int mid = (l + r) / 2;
        cout << "mid : " << mid << endl;
        if(f1(mid)) { //--- > f(mid) == true ---- this could one of our answer but we need to minimize it such that it is the smallest possible for which the number of pairs is k
            ans = mid;
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }
    cout << ans;
}

int32_t main() {
    fastio;
    int t = 1;
    while(t--) {
        solution();
    }
    return 0;
}
