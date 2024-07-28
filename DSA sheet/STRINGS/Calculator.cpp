#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    int calculate(string s) {
        stack<int> st;
        int number = 0;
        int result = 0;
        char sign = '+'; // initialize sign to '+'

        for (int i = 0; i < s.length(); ++i) {
            char c = s[i];
            
            if (isdigit(c)) {
                number = 10 * number + (c - '0');
            }

            if ((!isdigit(c) && c != ' ') || i == s.length() - 1) {
                if (sign == '+') {
                    st.push(number);
                } else if (sign == '-') {
                    st.push(-number);
                } else if (sign == '*') {
                    int top = st.top();
                    st.pop();
                    st.push(top * number);
                } else if (sign == '/') {
                    int top = st.top();
                    st.pop();
                    st.push(top / number);
                }

                sign = c;
                number = 0;
            }

            if (c == '(') {
                st.push(result);
                st.push(sign == '+' ? 1 : -1);
                result = 0;
                sign = '+';
            } else if (c == ')') {
                result += (sign == '+' ? number : -number);
                number = 0;
                int signTop = st.top();
                st.pop();
                int resultTop = st.top();
                st.pop();
                result = resultTop + signTop * result;
            }
        }
        while (!st.empty()) {
            result += st.top();
            st.pop();
        }
        return result;
    }
};

int main() {
    Solution sol;
    cout << sol.calculate("3 + 2 * 2 - 4 / 2") << endl;            // Output: 5
    cout << sol.calculate("1 + 1") << endl;                        // Output: 2
    cout << sol.calculate(" 2-1 + 2 ") << endl;                    // Output: 3
    return 0;
}
