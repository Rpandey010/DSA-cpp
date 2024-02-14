#include <iostream>
using namespace std;

int getMax(int num[], int n){

    int max= INT16_MIN;

    for(int i=0; i<n; i++){
        if(num[i] > max){
            max = num[i];
        }
    }
    //returning max value
    return max;
}

int getMin(int num[], int n){

    // int min= INT16_MAX;
    int mini= INT16_MAX;
    
    
    for(int i=0; i<n; i++){

        mini = min(mini, num[i]);
        // if(num[i] < min){
        //     min = num[i];
        // }
    }
    //returning min value
    // return min;
    return mini;
}


int main(){

    int size;
    cout<<"Enter the size of an array: ";
    cin>>size;

    cout<<"Enter the element in array"<<endl;

    int num[10];  //i am saying that the size/capacity of array is 10
    //taking input in array
    for(int i=0; i<size; i++){
        if(i >= 100) {
            cout << "Cannot enter more than 100 integers." << endl;
            break;
        }
        cin>>num[i];
    }

    cout<<"Maximum value is "<< getMax(num, size) <<endl;
    cout<<"Minimum value is "<< getMin(num, size) <<endl;

    return 0;
}