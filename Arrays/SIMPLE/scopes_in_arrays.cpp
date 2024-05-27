#include <iostream>
using namespace std;

void update(int arr[], int n){
    cout<<"Inside the function"<<endl;
    
    arr[0] =120;     // try to uncomment this
    //(but we learned in cases of variables, pass by values, if we do any changes in variable taken from main function, it wont show the changes, because in cases of variable copy is created)
    //(in case of array, address pr update hota h)

    //printing the array
    //here i=0 means 0th index se start hai till 2
    for(int i=0; i<3; i++){
        cout<< arr[i]<<" ";
    }cout<<endl;


    cout<<"Going back to the main function"<<endl;

}

int main(){

    // int arr[4] ={1, 2, 3, 4};    ////jitna size utne element daalo
    int arr[3] ={1, 2, 3};

    update(arr, 3);
    
    //printing the array
    for(int i=0; i<3; i++){
        cout<< arr[i]<<" ";
    }cout<<endl;


    return 0;
}