#include<bits/stdc++.h>
using namespace std;

bool alphaNum(char c){
    return(('A' <= c && c <= 'Z') ||
           ('Z' <= c && c <= 'z') ||
           ('0' <= c && c <= '9')
    );
}

bool isPalindrome(string s) {
    int l = 0, r = s.length()-1;

    while(l < r){

        while(l < r && !alphaNum(s[l]))
            l++;

        while(l < r && !alphaNum(s[r]))
            r--;

        if(tolower(s[l]) != tolower(s[r])){
            return false;
        }
        else{
            l++;
            r--;
        }
    }
    return true;
};


int main() {
    vector<string> testCases = {
        "A man, a plan, a canal: Panama",
        "race a car",
        " "
    };

    for (const auto& testCase : testCases) {
        bool result = isPalindrome(testCase);
        cout << "The string \"" << testCase << "\" is "
             << (result ? "" : "not ") << "a palindrome." << endl;
    }

    return 0;
}


// int main() {
//     string a = "A man, a plan, a canal: Panama";
//     string b = "race a car";
//     string d =  " ";

//     bool result1 = isPalindrome(a);
//     bool result2 = isPalindrome(b);
//     bool result3 = isPalindrome(d);

//     cout << result1 << endl;
//     cout << result2 << endl;
//     cout << result3 << endl;

//     return ;
// }