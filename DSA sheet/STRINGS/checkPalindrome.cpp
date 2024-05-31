#include<iostream>
using namespace std;

bool checkPalindrome(char a[], int n){
    int start = 0;
    int end = n-1;

    while(start <= end){
        if(a[start] != a[end]){
            return 0;
        }
        else{
            start ++;
            end --;
        }
    }
    return 1;
}

int getLength(char a[]){
    int count = 0; //initializing count with 0

    for(int i = 0; a[i] != '\0'; i++){
        count ++;
    }
    return count;
}

int main(){
    char a[20];

    cout<< "Write the string to check is Palindrome or not: "<<endl;
    cin >> a ;

    int length = getLength(a);

    if(checkPalindrome(a, length)) {
        cout << "The string is a palindrome." << endl;
    } 
    else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}