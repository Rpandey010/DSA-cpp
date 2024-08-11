#include <iostream>
#include <vector>
using namespace std;

// Assuming the Solution class is already defined as before
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> answer(n, 0);  // Initialize the answer vector with 0s.
        
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (temperatures[j] > temperatures[i]) {
                    answer[i] = j - i;  // Calculate the number of days to wait.
                    break;  // Exit the inner loop once a warmer day is found.
                }
            }
        }
        
        return answer;
    }
};

int main() {
    // Test case
    vector<int> temperatures = {73, 74, 75, 71, 69, 72, 76, 73};
    
    // Create a Solution object
    Solution sol;
    
    // Call the dailyTemperatures method
    vector<int> result = sol.dailyTemperatures(temperatures);
    
    // Print the result
    for (int days : result) {
        cout << days << " ";
    }
    cout << endl;
    
    
    return 0;
}
