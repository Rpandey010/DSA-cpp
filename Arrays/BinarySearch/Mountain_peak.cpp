#include<iostream>
using namespace std;

int peakElement(int arr[], int size){
    int s = 0, e = size - 1;
    int mid = s + (e-s)/2;

    while(s<e){
        if(arr[mid] < arr[mid + 1]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}

int main(){
    int mount[7] = {2, 4, 5, 6, 4, 2, 1};
    
    int peak = peakElement(mount, 7);
    cout<< "The index of the peak element of the mountain array is "<<peak<<endl;

    return 0;
}