#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int

int32_t main() {
    fastio;
    // gcd
    cout << __gcd(10, 15) << endl;
    // lcm
    cout << (10 * 15) / __gcd(10, 15) << endl;

    // builtin popcount
    cout << __builtin_popcount(10) << endl; // counts the number of set bits of int
    cout << __builtin_popcountll(15) << endl; // counts the number of set bits of long long int

    // builtin clz (count leading zeros in bit representation)
    cout << __builtin_clz(10) << endl; // counts the number of leading zeros of int
    cout << __builtin_clzll(15) << endl; // counts the number of leading zeros of long long int


    // builtin ctz (count trailing zeros in bit representation)
    cout << __builtin_ctz(10) << endl; // counts the number of trailing zeros of int
    cout << __builtin_ctzll(15) << endl; // counts the number of trailing zeros of long long int

    // index of the first set bit from right
    cout << __builtin_ffs(10) - 1 << endl; // ffs --> (find first set) returns 1-based index
    cout << __builtin_ffsll(15) - 1 << endl; // ffs --> (find first set) returns 1-based index
    cout << __builtin_ctz(10) << endl; // ctz --> (count trailing zeros) == first set bit from right
}
