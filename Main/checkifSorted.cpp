#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> num = {2, 3, 6, 11, 13, 45};
    bool isSorted = true;

    for(int i = 1; i < num.size(); i++){
        if(num[i-1] > num[i]){
            isSorted = false;
            break;
        }
    }

    if(isSorted){
        cout << "Sorted" << endl;
    }
    else{
        cout << "Not Sorted" << endl;
    }

    return 0;
}