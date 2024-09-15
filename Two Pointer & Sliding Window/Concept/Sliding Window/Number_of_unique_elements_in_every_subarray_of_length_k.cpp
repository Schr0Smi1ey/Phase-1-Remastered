#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int

int32_t main() {
    fastio;
    int n,k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    map<int, int> mp;
    for (int i = 0;i < n; i++) {
        mp[arr[i]]++;
        if(i  >= k - 1) {
            cout << mp.size() << " ";
            mp[arr[i - k + 1]]--;
            if(mp[arr[i - k + 1]] == 0) {
                mp.erase(arr[i - k + 1]);
            }
        }
    }
    return 0;
}
