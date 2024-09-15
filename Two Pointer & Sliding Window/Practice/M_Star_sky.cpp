#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 1e2 + 5; // Maximum number of rows and columns
const int P = 11; // Maximum brightness level + 1

int a[P][N][N];
void solution() {
    int n, q, c;
    cin >> n >> q >> c;
    for(int i = 0; i < n; i++) {
        int x, y, s;
        cin >> x >> y >> s;
        a[s][x][y]++;
    }

    // Building 3D prefix sum
    for (int p = 0; p <= c; p++) {
        for (int i = 1; i < N; i++) {
            for (int j = 1; j < N; j++) {
                a[p][i][j] += a[p][i - 1][j] + a[p][i][j - 1] - a[p][i - 1][j - 1];
            }
        }
    }

    // Answering queries
    while(q--) {
        int t, x1, y1, x2, y2;
        cin >> t >> x1 >> y1 >> x2 >> y2;
        int ans = 0;
        for (int p = 0; p <= c; p++) {
            int brightness = (p + t) % (c + 1);

            // Calculating the total number of stars with brightness p in the rectangle
            int amount = a[p][x2][y2] - a[p][x1 - 1][y2] - a[p][x2][y1 - 1] + a[p][x1 - 1][y1 - 1];
            
            ans += (amount * brightness);
        }
        cout << ans << endl;
    }
}

int32_t main() {
    fastio;
    int t = 1;
    while(t--) {
        solution();
    }
    return 0;
}
