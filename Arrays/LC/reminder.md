#Shopping List
<!-- ctrl + k then V -->

``` cp
#include<iostream>
using namespace std;

void printArray(int arr[], int n){

    for(int i=0; i<n; i++){
        cout<< arr[i] << " ";
    }
}

void swapAlternate(int arr[],int size){

    for(int i=0; i<size; i+=2){
        if(i+1 < size){
            swap(arr[i], arr[i+1]);
        }
        cout<<endl;
    }
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

    swapAlternate(arr, size);

    printArray(arr, size);

    return 0;
}

```