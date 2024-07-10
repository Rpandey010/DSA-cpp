#include<bits/stdc++.h>
using namespace std;

string addBinary(string a, string b) {
    string result;
    int i = a.size()-1;
    int j = b.size()-1;
    int sum, carry = 0;

    while(i >= 0 || j >= 0){
        sum = carry;

        if(i >= 0) 
            sum += a[i] - '0';
        if(j >= 0)
            sum += b[j] - '0';

        result += to_string(sum % 2);

        carry = sum / 2;
        i--, j--;
    }
    //incase we have a carry
    if(carry  != 0) result += '1';

    //reverse
    reverse(result.begin(), result.end());
    return result;
};

int main() {
    string a = "1010";
    string b = "1011";
    string result = addBinary(a, b);
    cout << "The result of adding the binary strings is " << result << endl;
    return 0;
}