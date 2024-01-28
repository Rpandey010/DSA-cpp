//Prime or not

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    
    bool isPrime =1;
    // 1 is niether prime nor compo and till less than the no 
    for(int i=1; i<n; i++){

        // remainder is zero 
        if(n%i == 0){
            isPrime = 0;     // agar condition true hori h toh prime nhi h no. bool change kardo
            break;
        }
    }
    if(isPrime == 0){
        cout<<"Not a Prime Number"<<endl;
    }
    else{
        cout<<"is a Prime Number"<<endl;
    }


}