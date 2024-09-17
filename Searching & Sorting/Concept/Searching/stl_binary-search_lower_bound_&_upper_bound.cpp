#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int> v({1, 2, 4, 4, 4, 6, 6, 9});
    int x = 4;
    if (binary_search(v.begin(), v.end(), x))
    {
        cout << "YES\n";
    }
    auto it = lower_bound(v.begin(), v.end(), x); // first position such that v[i] >= x
    cout << (it - v.begin()) << '\n';             // 2
    it = upper_bound(v.begin(), v.end(), x);      // first position such that v[i] > x
    cout << (it - v.begin()) << '\n';             // 5

    int count_of_x = upper_bound(v.begin(), v.end(), x) - lower_bound(v.begin(), v.end(), x);
    cout << count_of_x << '\n'; // 3

    int l = 4, r = 6;
    int count_of_numbers_in_range = upper_bound(v.begin(), v.end(), r) - lower_bound(v.begin(), v.end(), l);
    cout << count_of_numbers_in_range << '\n'; // 5
    return 0;
}