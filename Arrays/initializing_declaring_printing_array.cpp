#include <iostream>
using namespace std;

// void printArray(int arr[], int size){

//     cout<<"Printing the array"<<endl;

//     for(int i=0; i<=size; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<"Printing Done"<<endl;
// }

int main(){
    //declare
    int number[15];
    //accessing an array
    cout<<"Value at 13th index "<<number[13]<<endl;

//----------------------------------------------------------------------------------------

    //initialising an array
    int second[3] = {5, 7, 11};
    cout<<"Value at 2nd index "<<second[2]<<endl;

//----------------------------------------------------------------------------------------

    int third[15] = {2, 3};
    //printing an array          output will be     2 3 0 0 0 0 0 0 0 0 0 0 0 0 0

    cout<<"Printing an array"<<endl;
    int n=15;
    for(int i=0; i<n; i++){
        cout<<third[i]<<" ";
    }

//----------------------------------------------------------------------------------------    
    //initializing with 0
    int fourth[10]= {0};

    cout<<"Printing an array"<<endl;
    n=10;
    for(int i=0; i<n; i++){
        cout<<fourth[i]<<" ";
    }

//----------------------------------------------------------------------------------------
    //initializing with 1 but we cant print all 1
    int fifth[10]= {1};

    cout<<"Printing an array"<<endl;
    n=10;
    for(int i=0; i<n; i++){
        cout<<fifth[i]<<" ";
    }

    //Printing all 1
    int sixth[10];
    fill_n(sixth, 10, 1);

    cout<<"Printing an array"<<endl;
    n=10;
    for(int i=0; i<n; i++){
        cout<<sixth[i]<<" ";
    }

}