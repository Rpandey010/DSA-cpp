#include<iostream>
using namespace std;

int countDigitsInString(string& s){
    int count = 0;   //to keep the count

    for(int num : s){
        if(isdigit(num)){
            count++;
        }
    }
    return count;
};

int main() {
    string testString = "Hello123World456";  // Test case with digits
    int digitCount = countDigitsInString(testString);  // Call the function
    
    cout << "Test String: " << testString << endl;
    cout << "Number of digits in the string: " << digitCount << endl;  // Output the result

    return 0;
}