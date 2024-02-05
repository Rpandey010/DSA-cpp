#include<iostream>
using namespace std;

// 1 ---> Prime
// 0 ---> Not
bool isPrime(int n){
    for(int i=2; i<=n/2; i++){
        // divide hogaya, not a prime number
        if(n%i ==0){
            return 0;
        }
    }
    // else Prime no.
    return 1;
}

int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;

    if (isPrime(n)){
        cout<<"Prime no"<<endl;
    }
    else{
        cout<<"Not a Prime"<<endl;
    }
}