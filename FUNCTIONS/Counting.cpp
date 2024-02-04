#include<iostream>
using namespace std;


// void- when function does not return anything
void printCounting(int n){
    int i=1;
    for(i=1; i<=n; i++){
        cout<< i <<" ";
    }
    cout<< endl;
}

int main(){
    int n;
    cin>>n;

    //func call
    printCounting(n);

    // return 0;
}