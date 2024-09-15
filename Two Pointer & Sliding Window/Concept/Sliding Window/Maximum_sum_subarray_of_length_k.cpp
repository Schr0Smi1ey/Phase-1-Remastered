#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int

int32_t main() {
    fastio;
    int n, k;cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxima = 0, sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if(i >= k - 1) {
            maxima = max(maxima, sum);
            sum -= arr[i - k + 1];
        }
    }
    cout << maxima;
    return 0;
}
