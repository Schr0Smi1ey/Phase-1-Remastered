#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int

vector<int> divisors(int n) {
    vector<int> divisor;
    for (int i = 1; i * i <= n;i++){
        if(n % i == 0){
            if(n / i == i){
                divisor.push_back(i);
            }
            else {
                divisor.push_back(i);
                divisor.push_back(n / i);
            }
        }
    }
    sort(divisor.begin(), divisor.end());
    return divisor;
}
int32_t main() {
    fastio;
    int n;
    cin >> n;
    vector<int> div = divisors(n);
    for(auto x : div){
        cout << x << " ";
    }
    return 0;
}
