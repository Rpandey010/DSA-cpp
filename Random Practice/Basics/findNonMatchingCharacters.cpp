// How do you find the non-matching characters in a string?
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    unordered_set<char> findNonMatchingCharacters(const string& s1, const string& s2) {
        unordered_set<char> nonMatching;

        // Find characters in s1 that are not in s2
        for(char c : s1) {
            if(s2.find(c) == string::npos) {  // Check if character is not found in s2
                nonMatching.insert(c);
            }
        }

        // Find characters in s2 that are not in s1
        for(char c : s2) {
            if(s1.find(c) == string::npos) {  // Check if character is not found in s1
                nonMatching.insert(c);
            }
        }

        return nonMatching;
    }
};


int main() {
    string s1 = "abcde";  // First test string
    string s2 = "cdefg";  // Second test string

    Solution solution;
    unordered_set<char> result = solution.findNonMatchingCharacters(s1, s2);  // Call the function

    // Output the results
    cout << "Non-matching characters between \"" << s1 << "\" and \"" << s2 << "\":" << endl;
    for(char c : result) {
        cout << c << " ";
    }
    cout << endl;

    return 0;
}