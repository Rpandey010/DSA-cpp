#include<bits/stdc++.h>
using namespace std;

// Function to get the maximum value in the array
int getMax(int arr[], int n) {
    int maxVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

// Function to perform counting sort based on the digit represented by exp (1, 10, 100, ...)
void countingSort(int arr[], int n, int exp) {
    int output[n]; // Output array to store sorted numbers
    int count[10] = {0}; // Count array to store occurrences of digits (0 to 9)

    // Store count of occurrences of each digit in count[]
    for (int i = 0; i < n; i++) {
        int index = (arr[i] / exp) % 10;
        count[index]++;
    }

    // Change count[i] so that count[i] now contains the actual position of this digit in the output array
    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }

    // Build the output array by placing numbers in their correct positions
    for (int i = n - 1; i >= 0; i--) {
        int index = (arr[i] / exp) % 10;
        output[count[index] - 1] = arr[i];
        count[index]--;
    }

    // Copy the sorted numbers from output array back to the original array
    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

// Main function to sort an array using Radix Sort
void radixSort(int arr[], int n) {
    // Find the maximum number to know the number of digits
    int maxVal = getMax(arr, n);

    // Perform counting sort for every digit. The exponent is used to represent the current digit (1, 10, 100, ...)
    for (int exp = 1; maxVal / exp > 0; exp *= 10) {
        countingSort(arr, n, exp);
    }
}

// Driver program to test the Radix Sort function
int main() {
    int arr1[] = {1, 9, 345, 2}; // Example array 1
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    cout << "Original array: ";
    for (int i = 0; i < n1; i++) cout << arr1[i] << " ";
    cout << endl;

    radixSort(arr1, n1);

    cout << "Sorted array: ";
    for (int i = 0; i < n1; i++) cout << arr1[i] << " ";
    cout << endl;

    int arr2[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}; // Example array 2
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    cout << "Original array: ";
    for (int i = 0; i < n2; i++) cout << arr2[i] << " ";
    cout << endl;

    radixSort(arr2, n2);

    cout << "Sorted array: ";
    for (int i = 0; i < n2; i++) cout << arr2[i] << " ";
    cout << endl;

    return 0;
}
