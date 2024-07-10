#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minMoves(vector<int>& nums) {
        int i = nums[0];
        int min = INT_MAX;
        int result = 0;

        //GET THE MINIMUM ELEMENT FROM ARRAY
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < min)
                min = nums[i];
        }

        //WE GOT THE MIN ELEMENT NOW SUBTRACT THAT MIN FROM EACH ELEMENT
        for(int i = 0; i < nums.size(); i++){
            int difference = nums[i] - min;

            result += difference;
        }
        return result;
    }
};

int main() {
    int arr[] = {1, 2, 3};
    vector<int> nums(arr, arr + sizeof(arr) / sizeof(arr[0]));
    Solution solution;
    int result = solution.minMoves(nums);
    cout << "The minimum number of moves to equalize the array is " << result << endl;
    return 0;
}

