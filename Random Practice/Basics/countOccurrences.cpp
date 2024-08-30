#include<iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    unordered_map<int, int> countOccurrences(vector<int>& nums) {
        unordered_map<int, int> occurrences;
        for(int num : nums) {
            occurrences[num]++;
        }
        return occurrences;
    }
};


int main() {
    vector<int> testVector = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};  // Test case

    Solution solution;
    unordered_map<int, int> result = solution.countOccurrences(testVector);  // Call the function

    // Output the results
    cout << "Occurrences of each element:" << endl;
    for(const auto& pair : result) {
        cout << "Element " << pair.first << " occurs " << pair.second << " times." << endl;
    }

    return 0;
}