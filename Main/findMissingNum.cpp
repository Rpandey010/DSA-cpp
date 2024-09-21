#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {9,6,4,2,3,5,7,0,1};
    // {0, 1, 2, 3, 4, 5, 6, 7, _ , 9}

    int n = nums.size();

    int sum = n * (n+1) / 2;    //sum of n natural number

    for(int n : nums){
        sum = sum - n;
    }

    cout << "Missing number is "<< sum << endl;
}