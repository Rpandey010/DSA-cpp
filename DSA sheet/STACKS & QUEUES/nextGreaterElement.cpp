#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        if(nums2.empty() || nums1.empty())
            return vector<int>();  // Empty array

        unordered_map<int, int> numberNGE;
        stack<int> helperStack;

        // Start from the last element of nums2
        helperStack.push(nums2.back());
        numberNGE[nums2.back()] = -1;

        for(int i = nums2.size() - 2; i >= 0; --i) {
            if(nums2[i] < helperStack.top()) {
                numberNGE[nums2[i]] = helperStack.top();
                helperStack.push(nums2[i]);
                continue;
            }

            while(!helperStack.empty() && helperStack.top() < nums2[i])
                helperStack.pop();

            if(helperStack.empty()) {
                helperStack.push(nums2[i]);
                numberNGE[nums2[i]] = -1;
            } else {
                numberNGE[nums2[i]] = helperStack.top();
                helperStack.push(nums2[i]);
            }
        }
        
        for (int i = 0; i < nums1.size(); ++i)
            nums1[i] = numberNGE[nums1[i]];

        return nums1;
    }
};

int main() {
    Solution solution;

    // Example input arrays
    vector<int> nums1 = {4, 1, 2};
    vector<int> nums2 = {1, 3, 4, 2};

    // Call the nextGreaterElement function
    vector<int> result = solution.nextGreaterElement(nums1, nums2);

    // Output the result
    cout << "Next Greater Elements: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}