#include<iostream>
using namespace std;


//findind Pivot
int getPivot(int arr[], int n){
    int s = 0, e = n - 1;
    int mid = s + (e-s)/2;

    while(s<e){
        if(arr[mid] >= arr[0]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;   
}

//Binary Search
int BS(int arr[], int s, int e, int key){
    int start = s;
    int end = e;
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

//Searching in Rotated array
int searchInRotated(int arr[], int n, int k){
    //pehele pivot nikalo
    int pivot = getPivot(arr, n);

    if(k >= arr[pivot] && k <= arr[n-1]){
        return BS(arr, pivot, n-1, k);
    }
    else{
        return BS(arr, 0, pivot - 1, k);
    }
}


int main(){
    int Arr[7] = {7, 9, 1, 2, 3, 4, 5};
    cout << "Index of Element is "<< searchInRotated(Arr, 7, 3) <<endl;

    return 0;
}