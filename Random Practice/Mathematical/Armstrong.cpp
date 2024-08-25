#include<bits/stdc++.h>
using namespace std;

bool isArmstrong(int n){
    if(n < 0) return false;

    int originalNum = n;
    int sum = 0;
    
    int length = to_string(n).length();

    while(n > 0){
        int digit = n % 10;
        sum += pow(digit , length);

        n = n /10;
    }

    if(originalNum == sum){
        return true;
    }

    return false;

}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if(isArmstrong(num)) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}