#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool validPalindrome(string s) {
        int left = 0;
        int right = s.length()-1;

        while(left < right){
            if(s[left] != s[right]){

                //Try deleting any one character using helper function
                return delChar(s, left, right-1) || delChar(s, left + 1, right);     
            }
            left++;
            right--;
        }
        return true;
    }

    bool delChar(string s, int start, int end){
        while(start < end){
            if(s[start] != s[end])
                return false;

            start++;
            end--;
        }
        return true;
    }
};

int main() {
    Solution solution;
    vector<string> testCases = {"aba", "abca", "abc"};

    for (const auto& testCase : testCases) {
        bool result = solution.validPalindrome(testCase);
        cout << "The string \"" << testCase << "\" is "
             << (result ? "" : "not ") << "a valid palindrome." << endl;
    }

    return 0;
}