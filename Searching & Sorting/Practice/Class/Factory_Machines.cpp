#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 2e5 + 5;

int fun(int *arr,int n,int t){
    int low = 0LL,high = INF,ans = 0;
    while(low <= high){
        int mid = (low + high) / 2LL;
        int temp = 0LL;
        for(int i = 0;i < n;i++){
            temp += (mid/arr[i]);
            if(temp >= INF)
                break;
        }
        if(temp >= t){
            ans = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return ans;
}
int32_t main() {
    fastio;
    int n,t;cin >> n >> t;
    int arr[n];
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }
    cout << fun(arr,n,t);
    return 0;
}
