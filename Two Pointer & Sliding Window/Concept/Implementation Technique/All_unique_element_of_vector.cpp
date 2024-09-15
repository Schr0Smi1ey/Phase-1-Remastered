#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int

int32_t main() {
    fastio;
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // Way - 01
    set<int> s(v.begin(), v.end());
    v = vector<int>(s.begin(), s.end());
    for(auto x : v) {
        cout << x << " ";
    }

    // Way - 02
    v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    sort(v.begin(), v.end());
    auto it = unique(v.begin(), v.end()); // returns iterator to the end of the unique elements
    v.erase(it, v.end());
    for(auto x : v) {
        cout << x << " ";
    }
}
