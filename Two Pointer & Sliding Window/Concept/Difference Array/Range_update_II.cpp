/*
Given n list, perform q queries of the following type:
1. Update the elements in the range [l, r] by adding x to each list.
after performing all the queries, print the number of unique element in evey list.
*/

#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define endl "\n"
#define int long long int

const int N = 1e5 + 5;
vector<int> add[N], rem[N];
int32_t main()
{
    fastio;
    int n, q;
    cin >> n >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        int x;
        cin >> x;
        add[l].push_back(x);
        rem[r + 1].push_back(x);
    }

    map<int, int> mp;
    for (int i = 1; i <= n; i++)
    {
        for (auto x : add[i])
        {
            mp[x]++;
        }
        for (auto x : rem[i])
        {
            mp[x]--;
            if (mp[x] == 0)
            {
                mp.erase(x);
            }
        }
        cout << mp.size() << endl;
    }
}
