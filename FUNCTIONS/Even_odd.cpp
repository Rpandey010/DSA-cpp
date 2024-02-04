#include<iostream>
using namespace std;

//1 -->Even
//0 -->Odd

bool isEven(int a){
    if(a&1){
        //odd
        return 0;
    }
    else {
        //even
        return 1;
    }
}

int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;

    if (isEven(n)){
        cout<<"Even"<<endl;

    }
    else{
        cout<<"Odd"<<endl;
    }
}
