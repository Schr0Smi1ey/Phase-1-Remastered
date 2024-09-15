/*
Given an array of n elements, perform q queries of the following type:
1. Update the elements in the range [l, r] by adding x to each element.
after performing all the queries, print the final array.
*/

#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define endl "\n"
#define int long long int

const N = 1e5 + 5;
int a[N], d[N];
int32_t main()
{
    fastio;
    int n, q;
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    };

    // Finding the difference array

    for (int i = 1; i <= n; i++)
    {
        d[i] = a[i] - a[i - 1];
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        int x;
        cin >> x;
        d[l] += x;
        d[r + 1] -= x;
    }

    // Finding the original array from the difference array

    for (int i = 1; i <= n; i++)
    {
        a[i] = a[i - 1] + d[i];
    }

    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
