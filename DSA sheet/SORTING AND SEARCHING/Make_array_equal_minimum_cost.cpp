// Approach:
// Sort the Array: Sorting helps to find the median efficiently.
// Find the Median: For an array of length n:
// If n is odd, the median is the middle element.
// If n is even, the median can be any of the two middle elements (usually the lower middle element is chosen).
// Calculate the Cost: Sum up the absolute differences between each array element and the median.

#include<bits/stdc++.h>
using namespace std;

int minCostToEqualElements(vector<int>& arr){
    int n = arr.size();

    //sort the array
    sort(arr.begin(), arr.end());

    //Find the median
    int median = arr[n/2];

    //Calculate the cost
    int cost = 0;
    for(int i = 0; i < n; i++){
        cost += abs(arr[i] - median);
    }

    return cost;
};


int main() {
    vector<int> arr1 = {1, 100, 101};
    cout << "Minimum cost to make all elements equal (Example 1): " << minCostToEqualElements(arr1) << endl;
    
    vector<int> arr2 = {4, 6};
    cout << "Minimum cost to make all elements equal (Example 2): " << minCostToEqualElements(arr2) << endl;
    
    return 0;
}
