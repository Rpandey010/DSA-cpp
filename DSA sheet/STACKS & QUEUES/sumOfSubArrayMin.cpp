#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        int mod = 1e9 + 7;
        long long sum = 0;

        for(int i = 0; i < n; i++){
            int mini = arr[i];   // Initialize minimum for subarray starting at i

            //sub arrat
            for(int j = i; j < n; j++){
                mini = min(mini, arr[j]);

                sum = (sum + mini) % mod;
            }
        }

        return sum;
    }
};

int main() {
    // Create solution object
    Solution solution;

    // Define the array
    vector<int> arr = {3, 1, 2, 4};

    // Call the sumSubarrayMins function
    int result = solution.sumSubarrayMins(arr);

    // Print the result
    cout << "The sum of minimums of all subarrays is: " << result << endl;

    return 0;
}