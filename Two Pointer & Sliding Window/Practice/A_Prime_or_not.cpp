#include <bits / stdc++.h> 
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define endl "\n"
#define int long long int
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 2e5 + 5;

bool solution()
{
    int n;
    cin >> n;
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int32_t main()
{
    fastio;
    if (solution())
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}
