#include <iostream>
#include <unordered_map>
using namespace std;

void countFreq(int arr[], int n) {
    unordered_map<int, int> map;

    for (int i = 0; i < n; i++) {
        // If element is already in the map, increment its count
        if (map.find(arr[i]) != map.end()) {
            map[arr[i]] += 1;
        } 
        // If element is not in the map, add it with a count of 1
        else {
            map[arr[i]] = 1;
        }
    }

    // Iterate through the map and print the frequency of each element
    for (auto entry : map) {
        cout << entry.first << " -> " << entry.second << endl;
    }
}

int main() {
    int arr[] = {10, 20, 20, 10, 10, 20, 5, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    countFreq(arr, n);
    return 0;
}


// Time Complexity: O(n)
// Space Complexity: O(n)