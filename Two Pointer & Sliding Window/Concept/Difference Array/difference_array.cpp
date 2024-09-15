#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define endl "\n"
#define int long long int

const int N = 1e5 + 5;
int a[N], diff[N], p[N];
int32_t main()
{
    fastio;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    // Finding the difference array from the original array
    for (int i = 1; i <= n; i++)
    {
        diff[i] = a[i] - a[i - 1];
    }
    for (int i = 1; i <= n; i++)
    {
        cout << diff[i] << " ";
    }
    cout << endl;
    // Finding the original array from the difference array
    // Basically origina array is the prefix sum of the difference array

    for (int i = 1; i <= n; i++)
    {
        p[i] = p[i - 1] + diff[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cout << p[i] << " ";
    }

    return 0;
}
