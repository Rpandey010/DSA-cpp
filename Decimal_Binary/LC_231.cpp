#include<iostream>
#include<cmath>  // Include the cmath header for the pow function
using namespace std;

// Declare the function prototype outside main
bool isPowerOfTwo(int n);

int main() {
    int n;
    cin >> n;

    // Call the function isPowerOfTwo and print the result
    if (isPowerOfTwo(n)) {
        cout << "The number is a power of two." << endl;
    } else {
        cout << "The number is not a power of two." << endl;
    }

    return 0;
}

// Define the function outside main
bool isPowerOfTwo(int n) {
    for (int i = 0; i <= 30; i++) {
        int ans = pow(2, i);
        if (ans == n) {
            return true;
        }
    }
    return false;
}
