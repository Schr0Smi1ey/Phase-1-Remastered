#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 2e5 + 5;

int f(int *arr,int n,int k){
    int low = 0,high = 1e12,ans = 0;
    while(low <= high){
        int mid = (low + high)/2;
        int temp = 0;
        for(int i = (n/2);i < n;i++){
            if(arr[i] < mid)
                temp += abs(mid - arr[i]);
            if(temp > k)
                break;
        }
        if(temp <= k){
            ans = mid;
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return ans;
}
int32_t main() {
    fastio;
    int n,k;cin >> n >> k;
    int arr[n];
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    cout << f(arr,n,k);
    return 0;
}
