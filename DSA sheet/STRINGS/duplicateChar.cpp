#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;

void printDuplicateChar(string s){
    unordered_map<char, int> charCount;   // Map to store character counts

    // Count occurrences of each character
    for (int i = 0; i < s.length(); i++) {
        charCount[s[i]]++;
    }

    for(auto iterate : charCount){
        if(iterate.second > 1){
            cout << iterate.first << ", count = " << iterate.second << endl;
        }
    }
}

int main(){
    cout<<"Enter the string: ";
    string s;
    cin>> s;

    printDuplicateChar(s);
}