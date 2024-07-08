#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int>mpp;
    int n = nums.size();

    for(int i = 0; i < n; i++){
        int num = nums[i];       //the current number in array
        int moreNeeded = target - num;

        if(mpp.find(moreNeeded) != mpp.end()){
            return{
                mpp[moreNeeded], i
            };
        }
        mpp[num] = i;
    }
    return {-1, -1};
};

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSum(nums, target);
    if (result[0] != -1 && result[1] != -1) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No two sum solution" << endl;
    }
    return 0;
}


// Given nums = {2, 7, 11, 15} and target = 9:

// Iteration 1:
// num = 2, moreNeeded = 9 - 2 = 7
// 7 is not in the map.
// Add 2 to the map: mpp = {2: 0}

// Iteration 2:
// num = 7, moreNeeded = 9 - 7 = 2
// 2 is in the map at index 0.
// Return indices [0, 1] because nums[0] + nums[1] = 2 + 7 = 9.