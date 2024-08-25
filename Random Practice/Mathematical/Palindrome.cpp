#include<bits/stdc++.h>
using namespace std;


// Approach 1: 
// 1. Conversion to String
// 2. Reversing the String
// 3. Comparison
bool isPalindrome(int x){
    //Convert the integer to string
    string str = to_string(x);

    // create a copy of str named reversedStr
    string reversedStr = str;    
    // reverse reversedStr 
    reverse(reversedStr.begin(), reversedStr.end());

    //check if the original string is equal to the reversed string
    return str == reversedStr;
}


int main(){
    int n;
    cout<< "Enter a number: ";
    cin>>n;

    if(isPalindrome(n)){
        cout<< n <<" is a Palindrome"<<endl;
    }
    else{
        cout<< n <<" is not a Palindrome"<<endl;
    }
}