#include<iostream>
using namespace std;

//FIRST OCCURENCE
int firstOcc(int arr[], int size, int key){
    int s = 0, e =size -1;
    int mid = s + (e - s)/2;
    int stored_ans = -1;

    while(s<=e){
        if(key == arr[mid]){
            stored_ans = mid;
            e = mid -1;                     //left side dekh rahe h
        }

        else if(key > arr[mid]){
            s = mid + 1;
        }

        else if(key < arr[mid]){
            e = mid - 1;
        }
        mid = s + (e - s)/2; 
    }
    return stored_ans;
}

//Last OCCURENCE
int lastOcc(int arr[], int size, int key){
    int s = 0, e =size -1;
    int mid = s + (e - s)/2;
    int stored_ans = -1;

    while(s<=e){
        if(key == arr[mid]){
            stored_ans = mid;
            s = mid +1;                 //only here is the change (right wala dekh rahe h)
        }

        else if(key > arr[mid]){
            s = mid + 1;
        }

        else if(key < arr[mid]){
            e = mid - 1;
        }
        mid = s + (e - s)/2; 
    }
    return stored_ans;
}

int main(){
    int A[7] = {1, 2, 3, 3, 3, 6, 7};

    int firstOccurence = firstOcc(A, 7, 3);
    cout<<" The first Occurence of 3 is at index "<<firstOccurence<<endl;

    int lastOccurence = lastOcc(A, 7, 3);
    cout<<" The last Occurence of 3 is at index "<<lastOccurence<<endl;

    //TOTAL OCCURENCE
    int totalOccurence = (lastOccurence - firstOccurence) + 1;
    cout<<" Total no. of occurence of 3 is " << totalOccurence << endl;
    
    return 0;
}