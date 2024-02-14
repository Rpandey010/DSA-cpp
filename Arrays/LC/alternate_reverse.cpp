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

    // int even_arr[8] = {2, 5, 6, 4, 9, 7, 1, 0};
    // int odd_arr[5] = {1, 3, 6, 9, 22};

    // swapAlternate(even_arr, 8);
    // printArray(even_arr, 8);

    // cout<<endl;

    // swapAlternate(odd_arr, 5);
    // printArray(odd_arr, 5);

//     return 0;
// }

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



//     return 0;
// }