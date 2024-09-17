#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
#define trace(x) cout << #x << " : " << x << endl;

// Upper Bound Function for array
int upper(int *arr, int n, int x) {
    int low = 0, high = n - 1, ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] > x) {
            ans = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return ans;
}

// Upper Bound Function for vector
int upper(vector<int>& arr, int n, int x) {
    int low = 0, high = n - 1, ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] > x) {
            ans = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return ans;
}

int32_t main() {
    fastio;
    int n = 21;
    int a[n] = {1, 2, 3, 4, 6, 5, 2, 3, 4, 5, 5, 5, 6, 7, 8, 4, 5, 7, 8, 9, 10};
    vector<int> v = {1, 2, 3, 4, 6, 5, 2, 3, 4, 5, 5, 5, 6, 7, 8, 4, 5, 7, 8, 9, 10};
    
    sort(v.begin(), v.end());  // Sort vector v for comparison
    sort(a, a + n);            // Sort array a for binary search
    int x = 6;

    // Upper bound search on the array
    int idx1 = upper(a, n, x);
    if(idx1 == -1) {
        cout << "Element Not Found in array for Upper Bound" << endl;
    }
    else {
        cout << "Upper bound of " << x << " in array is at index " << idx1 << " with value " << a[idx1] << endl;
    }

    // Upper bound search on the vector
    int idx2 = upper(v, n, x);
    if(idx2 == -1) {
        cout << "Element Not Found in vector for Upper Bound" << endl;
    }
    else {
        cout << "Upper bound of " << x << " in vector is at index " << idx2 << " with value " << v[idx2] << endl;
    }

    return 0;
}
