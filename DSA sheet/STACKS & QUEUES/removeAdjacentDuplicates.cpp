#include<bits/stdc++.h>
using namespace std;

using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        int n = s.length();
        string result = "";

        for(int i = 0; i < n; i++) {
            if(st.empty() || st.top() != s[i]) {
                st.push(s[i]);
            } else {
                st.pop();
            }
        }

        while(!st.empty()) {
            result.push_back(st.top());
            st.pop();
        }

        // Reverse the result to get the correct order
        reverse(result.begin(), result.end());

        return result;
    }
};

int main() {
    Solution sol;

    // Test cases
    string s1 = "abbaca";
    string s2 = "azxxzy";

    cout << "Result for \"" << s1 << "\": " << sol.removeDuplicates(s1) << endl;  // Output: "ca"
    cout << "Result for \"" << s2 << "\": " << sol.removeDuplicates(s2) << endl;  // Output: "ay"

    return 0;
}
