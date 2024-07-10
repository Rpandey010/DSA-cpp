#include<bits/stdc++.h>
using namespace std;

int maximumProduct(vector<int>& nums) {
    int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
    int min1 = INT_MAX, min2 = INT_MAX;

    for (int num : nums) {
            // Update the three largest numbers
            if (num > max1) {
                max3 = max2;
                max2 = max1;
                max1 = num;
            } else if (num > max2) {
                max3 = max2;
                max2 = num;
            } else if (num > max3) {
                max3 = num;
            }

            // Update the two smallest numbers
            if (num < min1) {
                min2 = min1;
                min1 = num;
            } else if (num < min2) {
                min2 = num;
            }
        }
    // Return the maximum product of either the three largest numbers or
    // the product of the two smallest and the largest number.
    return max(max1 * max2 * max3 , min1 * min2 * max1);
};


int main() {
    vector<int> nums = {1, 2, 3, 4};
    int result = maximumProduct(nums);
    cout << "The maximum product of three numbers in the array is " << result << endl;
    return 0;
}