// Problem statement
// You are given an array ‘ARR’ of size ‘N’ containing each number between 1 and ‘N’ - 1 at least once. There is a single integer value that is present in the array twice. Your task is to find the duplicate integer value present in the array.

// For example:

// Consider ARR = [1, 2, 3, 4, 4], the duplicate integer value present in the array is 4. Hence, the answer is 4 in this case.
// Note :
// A duplicate number is always present in the given array.

//input                 //output                        
// 5                    // 1
// 4 2 1 3 1


#include<iostream>
#include<vector>
using namespace std;

int findDuplicate(vector<int>& arr){
    int ans = 0;

    for(int i = 0; i < arr.size(); i++){
        ans = ans ^ arr[i];                    // XOR operation
    } 
    
    for(int i = 1; i <= arr.size() - 1; i++){
        ans = ans ^ i;
    }
    return ans;
}

int main(){
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    vector<int> arr(size);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int duplicateElement = findDuplicate(arr);
    cout << "The duplicate element in the array is: " << duplicateElement << endl;

    return 0;
}
