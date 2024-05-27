#include <iostream>
using namespace std;

bool search(int arr[], int size, int key){
    // traversing whole array 
    for(int i=0; i<size; i++){

        if(arr[i] == key){
            return 1;   //milgaya return true
        }
        
    }
    return 0;           //mhi milaa

}

int main(){

    int arr[5]= {3, 5, 7, -9, 12};

    cout<<"Enter the key you want to check: ";
    int key;
    cin>>key;

    // function call 
    bool found = search(arr, 5, key);

    if(found){
        cout<<"Key is present"<<endl;
    }
    else{
        cout<<"Key is not Present"<<endl;
    }

    return 0;
}