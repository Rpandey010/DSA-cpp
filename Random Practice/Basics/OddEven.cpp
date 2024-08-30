#include <iostream>
#include <vector>

using namespace std;

bool isEven(int num) {
    return num % 2 == 0;
}

int main() {
    vector<int> testNumbers = {4, 7, 10, 15, 22};  // List of test numbers

    cout << "Testing isEven function:" << endl;

    for(int num : testNumbers) {
        cout << "Number: " << num << endl;
        
        if (isEven(num)) {
            cout << num << " is even." << endl;
        } else {
            cout << num << " is odd." << endl;
        }
        
        cout << endl;  // Extra line for better readability
    }

    return 0;
}
