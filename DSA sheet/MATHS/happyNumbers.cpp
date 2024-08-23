#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        std::unordered_set<int> set; // to store the sum

        while (true) {
            int sum = 0;
            // now until the number is zero
            while (n != 0) {
                sum += pow(n % 10, 2);
                n = n / 10;
            }
            if (sum == 1) return true;
            // if current sum is not 1, then first store that sum in hashset
            n = sum;
            // If the current sum n is already present in the set, 
            // it means we're stuck in a loop and the number is not happy, 
            // so the function returns false. Otherwise, 
            // the current sum n is added to the set to keep track of it and continue the process.

            if (set.count(n)) return false;
            else set.insert(n);
        }
    }
};

int main() {
    Solution solution;
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    if (solution.isHappy(number)) {
        std::cout << number << " is a happy number." << std::endl;
    } else {
        std::cout << number << " is not a happy number." << std::endl;
    }

    return 0;
}