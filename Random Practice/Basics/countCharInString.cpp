// How do you find the count for the occurrence of a particular character in a string?

#include<iostream>
using namespace std;

int countCharInString(string& s, char target){
    int count = 0;

    for(char c : s){
        if(c == target){
            count++;
        }
    }
    return count;
};

int main() {
    string testString = "banana";  // Test case string
    char targetChar = 'a';         // Target character to count

    int charCount = countCharInString(testString, targetChar);  // Call the function

    cout << "Test String: " << testString << endl;
    cout << "Character to count: '" << targetChar << "'" << endl;
    cout << "Number of occurrences: " << charCount << endl;  // Output the result

    return 0;
}