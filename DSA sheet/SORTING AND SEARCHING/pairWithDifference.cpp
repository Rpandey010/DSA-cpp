// C++ program to find a pair with the given difference
#include <bits/stdc++.h>
using namespace std;

// The function assumes that the array is sorted
bool findPair(int arr[], int size, int n)
{
	unordered_map<int, int> mpp;
	for (int i = 0; i < size; i++) {
		mpp[arr[i]]++;

		// Check if any element whose frequency
		// is greater than 1 exist or not for n == 0
		if (n == 0 && mpp[arr[i]] > 1)
			return true;
	}

	// Check if difference is zero and
	// we are unable to find any duplicate or
	// element whose frequency is greater than 1
	// then no such pair found.
	if (n == 0)
		return false;

	for (int i = 0; i < size; i++) {
		if (mpp.find(n + arr[i]) != mpp.end()) {
			cout << "Pair Found: (" << arr[i] << ", "
				<< n + arr[i] << ")";
			return true;
		}
	}

	cout << "No Pair found";
	return false;
}

// Driver program to test above function
int main()
{
	int arr[] = { 1, 8, 30, 40, 100 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int n = -60;
	findPair(arr, size, n);
	return 0;
}



// Dry Run with Example:
// Array: arr[] = { 1, 8, 30, 40, 100 }
// Difference: n = -60
// Hash Table after first loop: {1: 1, 8: 1, 30: 1, 40: 1, 100: 1}

// Second Loop (Finding the Pair):
// For i = 0, element arr[0] = 1:
// Check if n + arr[0] = -60 + 1 = -59 exists in mpp. It does not.
// check for all index 

// For i = 4, element arr[4] = 100:
// Check if n + arr[4] = -60 + 100 = 40 exists in mpp. It does.
// Pair found: (100, 40).