#include<bits/stdc++.h>
using namespace std;

string convertToTitle(int columnNumber) {
    string result;
    while(columnNumber > 0){
        int offset = (columnNumber - 1)%26;
        result += char('A' + offset);
        columnNumber = (columnNumber -1)/26;
    }
    reverse(result.begin(), result.end());
    return result;
};

int main() {
    int columnNumber = 701;
    string result = convertToTitle(columnNumber);
    cout << "The Excel column title for the number " << columnNumber << " is " << result << endl;
    return 0;
}