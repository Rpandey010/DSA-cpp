#include<iostream>
using namespace std;

// terminating condition  s > e
void reverse(int arr[], int n){

    int start = 0;
    int end = n-1;

    while(start <= end){    // terminating condition  s > e
        swap(arr[start], arr[end]);
        start++;
        end--;

    }
}

void printArray(int arr[], int n){

    for(int i=0; i<n; i++){
        cout<< arr[i]<<" ";
    }
    cout<<endl;
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

    reverse(arr, size);

    printArray(arr, size);

    return 0;
}


// int main(){

//     int arr[6] = {1, 4, 6, 8, 3, 0};
//     int brr[5] = {22, 4, 7, 2, 6};

//     reverse(arr, 6);
//     reverse(brr, 5);

//     printArray(arr, 6);
//     printArray(brr, 5);
//     return 0;
// }