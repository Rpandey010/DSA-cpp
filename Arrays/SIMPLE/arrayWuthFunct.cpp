#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    
    // cout<<"Printing an array"<<endl;
    size=20;
    for(int i=0; i<size; i++){
    cout<<arr[i]<<" ";
    }
    cout<<endl; 
}

int main(){
    //initializing with 0
    int fourth[10]= {0};
    int n=10;
    cout<<"Printing fourth array"<<endl;
    printArray(fourth, 10);

//----------------------------------------------------------------------------------------
    //initializing with 1 but we cant print all 1
    int fifth[10]= {1};

    cout<<"Printing fifth array"<<endl;
    printArray(fifth, 10);

    //Printing all 1
    int sixth[19];
    fill_n(sixth, 19, 1);

    cout<<"Printing sixth array"<<endl;
    printArray(sixth, 19);

    //lets say i want the size of sixth array
    int sixthSize = sizeof(sixth)/sizeof(int);
    cout<<"Size of sixth array "<<sixthSize<<endl;
}