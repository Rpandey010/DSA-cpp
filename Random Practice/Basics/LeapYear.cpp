#include<bits/stdc++.h>
using namespace std;

bool isLeap(int year){
    // A year is a leap year if:
    // It is divisible by 4 and not divisible by 100, or
    // It is divisible by 400.
    
    if((year % 4 == 0 && year % 100 != 0 ) || (year % 400 == 0)){
        return true;
    }
    return false;
}

int main(){
    int x;
    cout<<"Enter the year: ";
    cin>>x;

    if(isLeap(x)){
        cout<< x <<" is a Leap year."<<endl;
    }
    else{
        cout<< x <<" is not a Leap year."<<endl;
    }
}