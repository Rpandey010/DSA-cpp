// // Enter a positive integer: 21
// // Fibonacci Series: 0, 1, 1, 2, 3, 5, 8, 13, 21

#include <iostream>
using namespace std;

void printFibo(int n) {
    int t1 = 0, t2 = 1;
    int nextTerm = t1 + t2;

    cout << "Fibonacci series: " << t1 << ", " << t2;

    while (nextTerm <= n) {
        cout << ", " << nextTerm;
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }

    cout << endl; // Print a newline at the end
}

int main() {
    int n;
    cout << "Enter a positive number: ";
    cin >> n;

    if (n < 0) {
        cout << "Please enter a positive number." << endl;
    } else {
        printFibo(n);
    }

    return 0;
}
