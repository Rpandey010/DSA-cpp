// Problem statement
// You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].
// Now, in the given array/list, 'M' numbers are present twice and one number is present only once.
// You need to find and return that number which is unique in the array/list.

#include<iostream>
using namespace std;

int findUnique(int arr[], int size){
    int ans = 0;

    for(int i = 0; i<size; i++){
        ans = ans^arr[i];                    // XOR operation
    } 
    return ans;
}

int main(){
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array: ";
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }

    int uniqueElement = findUnique(arr, size);
    cout << "The unique element is: " << uniqueElement << endl;

    return 0;
}



