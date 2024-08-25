#include<bits/stdc++.h>
using namespace std;


// Approach 1: 
// 1. Conversion to String
// 2. Reversing the String
// 3. Comparison
// bool isPalindrome(int x){
//     //Convert the integer to string
//     string str = to_string(x);

//     // create a copy of str named reversedStr
//     string reversedStr = str;    
//     // reverse reversedStr 
//     reverse(reversedStr.begin(), reversedStr.end());

//     //check if the original string is equal to the reversed string
//     return str == reversedStr;
// }

// Approach 2 : Without converting into a string
bool isPalindrome(int x){
    if(x < 0) return false;

    if(x != 0 && x % 10 == 0){
        return false;
    }

    //lets just store the orignal integer
    int original = x;
    int reversed = 0;
    
    while(x != 0){

        if(reversed > (INT_MAX - x % 10) /10 ){
            return false;
        }    
        
        reversed = reversed * 10 + x % 10;
        x /= 10;    
    }

    // Check if the original number is equal to its reversed version
    return original == reversed;
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