#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
#define trace(x) cout << #x << " : " << x << endl;

// Check Function
bool check(int *arr, int mid, int x) {
    return arr[mid] >= x;
}

bool check(vector<int>& arr,int mid, int x) {
    return arr[mid] >= x;
}

// Lower Bound Function for array
int lower(int *arr, int n, int x) {
    int low = 0, high = n - 1, ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (check(arr, mid, x)) {
            ans = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return ans;
}

// Lower Bound Function for vector
int lower(vector<int>& arr, int n, int x) {
    int low = 0, high = n - 1, ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (check(arr, mid, x)) {
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

    int idx1 = lower(a, n, x);  // Use the sorted array for lower bound search
    if(idx1 == -1) {
        cout << "Element Not Found" << endl;
    }
    else {
        cout << "Lower bound of " << x << " is at index " << idx1 << " with value " << a[idx1] << endl;
    }

    int idx2 = lower(v, n, x);  // Use the sorted vector for lower bound search
    if(idx2 == -1) {
        cout << "Element Not Found" << endl;
    }
    else {
        cout << "Lower bound of " << x << " is at index " << idx2 << " with value " << a[idx2] << endl;
    }
    
    return 0;
}
