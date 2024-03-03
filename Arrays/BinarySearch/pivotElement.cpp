#include<iostream>
using namespace std;

int pivot(int arr[], int n){
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
    return s;   //
}

int main(){
    int Arr[5] = {7, 9, 1, 2, 3};
    cout << "Index of Pivot is "<< pivot(Arr, 5) <<endl;

    return 0;

}