#include<bits/stdc++.h>
using namespace std;

int strStr(string haystack, string needle) {

    int haystackLen = haystack.length();
    int needleLen = needle.length();

    if(needle.empty()) return 0;    //if there is no subtring eg - Raja  needle- xx

    for(int i = 0; i < haystackLen - needleLen; i++){        
        if(haystack.substr(i, needleLen) == needle){
            return i;
        }
    }
    return -1;
};


int main() {
    string haystack = "hello";
    string needle = "ll";
    int result = strStr(haystack, needle);
    cout << result << endl;
    return 0;
}