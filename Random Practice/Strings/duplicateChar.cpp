// GFG Problem 

// Input: S = “geeksforgeeks”
// Output:

// e, count = 4
// g, count = 2
// k, count = 2
// s, count = 2

#include<bits/stdc++.h>
using namespace std;

// void printDuplicateCharacters(const string& S) {
//     //hashmap to stor <char, count>
//     unordered_map<char, int> charCount;

//     //iterate through string and count the char
//     for(int i = 0; i < S.size(); i++){
//         char currentChar = S[i];
//         charCount[currentChar]++;    //increase the count of current character        
//     }

//     //print the char with count greater than 1
//     for(auto& entry : charCount){
//         if(entry.second > 1){
//             cout << entry.first << ", count = "<< entry.second <<endl;
//         } 
//     }
// };

// int main() {
//     string S = "geeksforgeeks";
//     printDuplicateCharacters(S);
//     return 0;
// }


//WITHOUT USING A HASHMAP
void printDuplicateCharacters(const string& S) {
    int charCount[256] = {0};

    //iterate through string and count the char
    for(int i = 0; i < S.size(); i++){
        char currentChar = S[i];
        charCount[currentChar]++;    //increase the count of current character        
    }

    // Print characters with a count greater than 1
    for (int i = 0; i < 256; ++i) {
        if (charCount[i] > 1) {
            cout << (char)i << ", count = " << charCount[i] << endl;
        }
    }

};

int main() {
    string S = "geeks&&rgeeks";
    printDuplicateCharacters(S);
    return 0;
}

