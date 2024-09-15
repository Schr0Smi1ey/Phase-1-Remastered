#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int

int32_t main() {
    fastio;
    // Using Tuple
    vector<tuple<int, int, int, int, int>> v;
    v.push_back({1, 2, 3, 4, 5}); // We can sort all the elements in different order of tuple elements also
    v.push_back({6, 7, 8, 9, 10});
    for(auto x : v) {
        cout << get<0>(x) << " " << get<1>(x) << " " << get<2>(x) << " " << get<3>(x) << " " << get<4>(x) << endl;
    }

    // Using Array
    vector<array<int, 5>> arr;
    arr.push_back({1, 2, 3, 4, 5});
    arr.push_back({6, 7, 8, 9, 10});
    for(auto x : arr) {
        for(auto y : x) { // array provides easier access to elements than tuples
            cout << y << " ";
        }
        cout << endl;
    }
}
