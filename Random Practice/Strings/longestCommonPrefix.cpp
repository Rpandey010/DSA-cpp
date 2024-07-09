#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    string result;    //store the result

    //sort the string
    sort(strs.begin(), strs.end());

    string firstStr = strs[0];
    string lastStr = strs[strs.size()-1];

    for(int i = 0; i < firstStr.size(); i++){
        if(firstStr[i] != lastStr[i])
            break;

        result += firstStr[i];
    }
    return result; 
};

int main() {
    vector<string> strs = {"flower", "flow", "flight"};
    string result = longestCommonPrefix(strs);
    cout << result << endl;
    return 0;
}


// main a result string to store the updated result
// sort the string
// get the first and last string
// compare index by index 