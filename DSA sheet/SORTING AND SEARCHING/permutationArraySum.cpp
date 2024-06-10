// Permute two arrays such that sum of every pair is greater or equal to K

#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isPossible(long long a[], long long b[], int n, long long k) {
        // Sort array a in ascending order
        std::sort(a, a + n);

        // Sort array b in descending order
        std::sort(b, b + n, std::greater<long long>());

        // Check if the condition a[i] + b[i] >= k is satisfied for all i
        for (int i = 0; i < n; i++) {
            if (a[i] + b[i] < k) {
                return false;
            }
        }

        // If all pairs satisfy the condition, return true
        return true;
    }
};

int main() {
    Solution sol;
    long long a[] = {2, 1, 3};
    long long b[] = {7, 8, 9};
    int n = 3;
    long long k = 10;

    bool result = sol.isPossible(a, b, n, k);
    std::cout << (result ? "True" : "False") << std::endl; // Output: True

    return 0;
}