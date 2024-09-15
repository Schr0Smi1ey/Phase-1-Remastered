#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 1e6 + 5;

int d[N], kPrime[N];

bool prime(int n) {
    if(n <= 1)
        return false;
    if(n <= 3)
        return true;
    if(n % 2 == 0 || n % 3 == 0)
        return false;

    for(int i = 5; i * i <= n; i += 6) {
        if(n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

void divisors() {
    for (int i = 1;i < N; i++) {
        for (int j = 1; j < N; j += i) {
            d[j] += i;
        }
    }
}
void kPrimeNumber() {
    for(int i = 1;i < N; i++) {
        kPrime[i] += kPrime[i - 1] + prime(d[i]);
    }
}
void solution() {
    int a, b;
    cin >> a >> b;
    cout << kPrime[b] - kPrime[a - 1] << endl;
}

int32_t main() {
    fastio;
    int t = 1;
    cin >> t;
    divisors();
    kPrimeNumber();
    while(t--) {
        solution();
    }
    return 0;
}
