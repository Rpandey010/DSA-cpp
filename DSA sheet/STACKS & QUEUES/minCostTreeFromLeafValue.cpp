#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mctFromLeafValues(vector<int>& arr) {
        int ans = 0;
        stack<int> s;

        s.push(INT_MAX);  // Sentinel value to avoid empty stack issues

        for (int num : arr) {
            // While the current element is greater than the top of the stack
            while (s.top() <= num) {
                int mid = s.top();
                s.pop();
                ans += mid * min(s.top(), num);  // Multiply with the smaller of the two neighbors
            }
            s.push(num);
        }

        // Clean up the stack
        while (s.size() > 2) {  // More than the sentinel and one leaf
            int mid = s.top();
            s.pop();
            ans += mid * s.top();  // Multiply with the next top element in the stack
        }

        return ans;
    }
};

int main() {
    Solution solution;

    // Test case 1
    vector<int> arr1 = {6, 2, 4};
    int result1 = solution.mctFromLeafValues(arr1);
    cout << "Test case 1: arr = [6, 2, 4]\n";
    cout << "Expected Output: 32\n";
    cout << "Actual Output: " << result1 << "\n\n";

    // Test case 2
    vector<int> arr2 = {4, 11};
    int result2 = solution.mctFromLeafValues(arr2);
    cout << "Test case 2: arr = [4, 11]\n";
    cout << "Expected Output: 44\n";
    cout << "Actual Output: " << result2 << "\n\n";

    // You can add more test cases here

    return 0;
}