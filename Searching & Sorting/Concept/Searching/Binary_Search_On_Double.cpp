#include<bits/stdc++.h>
using namespace std;
double sqrt_float(double n){
    double low = 0.0, high = n , ans;
    while(high - low >= 1e-15){ //  // We can't check is two double are same or not, instead of we will check if they are equal by their absolute difference
    // (high - low >= 1e-14) means high is greater than low
        double mid = low + (high - low)/2;
        double val = mid * mid;
        if(fabs(val - n) < 1e-15){  // We can't check is two double are same or not, instead of we will check if they are equal by their
        // absolute difference
            return mid; // if they are same then we will return the mid;
        }
        else if(val > n){
            high = mid; // instead of assigning (high = mid-1) , we will assign mid ,as -1 changes is huge and if we do , we can loose our ans
        }
        else{
            low = mid; // // instead of assigning (low = mid+1) , we will assign mid ,as +1 changes is huge and if we do , we can loose our ans
        }
    }
}
signed main()
{
    double  n;
    cin >> n ;
    cout << "Square root value of " << n << " " << sqrt_float(n);
    return 0;
}   


#include <bits/stdc++.h>
using namespace std;

// Function to calculate the square root of a double precision number 'n'
double sqrt_float(double n) {
    // Initialize low and high for binary search
    double low = 0.0, high = n, ans;

    // Perform binary search for the square root with a precision threshold of 1e-14
    while (high - low >= 1e-15) {
        // Calculate the midpoint
        double mid = low + (high - low) / 2;

        // Calculate the square of the midpoint
        double val = mid * mid;

        // Check if the square is close enough to 'n' (within 1e-14 precision)
        if (fabs(val - n) < 1e-15) {
            return mid; // Return the approximate square root when it's close enough
        } else if (val > n) {
            high = mid; // If the square is too large, adjust the high bound
        } else {
            low = mid; // If the square is too small, adjust the low bound
        }
    }
    // Return the final answer
    return ans;
}

int main() {
    double n;
    cin >> n;
    cout << "Square root value of " << n << " is " << sqrt_float(n);
    return 0;
}

/*
    Comparing double values using == can be inaccurate due to tiny precision differences in how computers represent floating-point numbers. 
    Using the absolute difference with a small tolerance (e.g., fabs(val - n) < 1e-10) is a better way to check if two doubles are effectively equal within an acceptable range. 
    This approach accounts for precision variations in floating-point calculations, ensuring accurate results.
*/