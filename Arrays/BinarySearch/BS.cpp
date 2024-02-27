#include<iostream>
using namespace std;

int BS(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    // int mid = (start + end)/2;

    int mid = start + (end - start)/2;

    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }
        if(key > arr[mid]){
            //going to right side because badi value right me hogi
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        // mid = (start + end)/2;
        mid = start + (end - start)/2;
    }
    return -1;
}

int main(){
    int even[6]={2, 4, 6, 8, 9, 12};
    int odd[5]={4, 16, 18, 29, 32};

    int index_even= BS(even, 6, 8);
    cout<< "Index of 8 is " << index_even <<endl;

    int index_odd = BS(odd, 5, 32);
    cout<< "Index of 32 is " << index_odd<< endl;

    return 0;

}