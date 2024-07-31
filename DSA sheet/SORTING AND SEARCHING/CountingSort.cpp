#include<bits/stdc++.h>
using namespace std;

void countingSort(vector<int>& arr) {
    // Find the maximum and minimum elements in the array
    int max = *max_element(arr.begin(), arr.end());
    int min = *min_element(arr.begin(), arr.end());
    int range = max - min + 1;

    // Auxiliary array to store counts of each element
    vector<int> count(range, 0);

    // Auxiliary array to store the resultant sorted array
    vector<int> output(arr.size());

    // Store count of each element
    for (int num : arr) {
        count[num - min]++;
    }

    // Change count[i] so that count[i] now contains actual
    // position of this character in output array
    for (int i = 1; i < range; i++) {
        count[i] += count[i - 1];
    }

    // Build the output character array
    // To make it stable we are operating in reverse order.
    for (int i = arr.size() - 1; i >= 0; i--) {
        output[count[arr[i] - min] - 1] = arr[i];
        count[arr[i] - min]--;
    }

    // Copy the output array to arr, so that arr now contains sorted numbers
    copy(output.begin(), output.end(), arr.begin());
}

// Utility function to print an array
void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

// Driver program to test the Counting Sort function
int main() {
    vector<int> arr = {4, 2, 2, 8, 3, 3, 1}; // Example array

    cout << "Original array: ";
    printArray(arr);

    countingSort(arr);

    cout << "Sorted array: ";
    printArray(arr);

    return 0;
}
