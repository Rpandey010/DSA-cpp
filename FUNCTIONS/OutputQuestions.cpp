#include<iostream>
using namespace std;

void update(int a){
    a = a/2;
    // cout << "value of a is: "<<a<<endl;
}

int main(){
    int a =10;
    update(a);

    cout<< a << endl;
}

// ans ---> 10   
//reason- in C++, parameters are passed by value, meaning a copy of the value is created for 
// the function to use. Any changes made to this copy will not affect the original value.