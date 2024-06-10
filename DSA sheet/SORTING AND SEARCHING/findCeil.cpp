#include <bits/stdc++.h>
using namespace std;

int ceilSearch(vector<int>& nums, int target) {
    int n = nums.size(); // size of the array
    int low = 0, high = n - 1;

    // If the target is smaller than or equal to the first element
    if (target <= nums[low]) {
        return low;
    }

    // If the target is greater than the last element
    if (target > nums[high]) {
        return -1;
    }

    // Perform binary search steps
    while (low <= high) {
        int mid = (low + high) / 2;

        // If the target is same as the middle element
        if (nums[mid] == target) {
            return mid;
        }

        // If the target is greater than the middle element
        else if (target > nums[mid]) {
            if (mid + 1 <= high && target <= nums[mid + 1]) {
                return mid + 1;
            } else {
                low = mid + 1;
            }
        }

        // If the target is smaller than the middle element
        else {
            if (mid - 1 >= low && target > nums[mid - 1]) {
                return mid;
            } else {
                high = mid - 1;
            }
        }
    }

    return -1;
}

int main() {
    vector<int> arr = {1, 2, 8, 10, 10, 12, 19};
    int target = 18;
    int index = ceilSearch(arr, target);
    if (index == -1) {
        cout << "Ceiling of " << target << " doesn't exist in the array." << endl;
    } else {
        cout << "Ceiling of " << target << " is " << arr[index] << endl;
    }

    return 0;
}
