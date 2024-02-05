#include<iostream>
using namespace std;

int update(int a){
    a -= 5;
    return a;
    // cout<<"a is"<<a<<endl;
}

int main(){
    int a = 15;
    update(a);
    cout<<a<<endl;
}