#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int

int32_t main() {
    fastio;
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // Way 
    int min = *min_element(v.begin(), v.end());
    int max = *max_element(v.begin(), v.end()); // min_element and max_element returns iterator to the min and max element
    cout << min << " " << max << endl;
}
