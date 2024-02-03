#include<iostream>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int ans = 0;

        while (x != 0) {
            int digit = x % 10;

            // Manually declare INT_MIN and INT_MAX
            if ((ans > 214748364) || (ans < -214748364)) {
            // if ((ans > 2^31/10) || (ans < -(2^31 - 1)/10)) {
                return 0;
            }

            ans = (ans * 10) + digit;
            x = x / 10;
        }

        return ans;
    }
};

int main() {
    Solution sol;

    // Take input from the user
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    int reversed = sol.reverse(num);
    cout << "Reversed: " << reversed << endl;

    return 0;
}
