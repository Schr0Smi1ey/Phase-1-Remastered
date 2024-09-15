#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int

int32_t main() {
    fastio;
    vector<int> v1 = {1,3,44,2,5,6,7,8,9,10};
    // Way - 01
    sort(v1.begin(), v1.end(), greater<int>());
    for(auto x : v1) {
        cout << x << " ";
    }
    cout << endl;
    vector<int> v2 = {1,3,44,2,5,6,7,8,9,10};
    // Way - 02
    sort(v2.rbegin(), v2.rend()); // We can simply use the rbegin() and rend() the reverse iterators
    for(auto x : v2) {
        cout << x << " ";
    }
    return 0;
}
