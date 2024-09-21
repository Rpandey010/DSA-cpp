#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> num = {80, 3, 4, 1, 6, 23, 70, 9, 69};

    int maxE = num[0];

    // for(int i = 1; i <= num.size(); i++){
    //     if(num[i-1] > maxE){
    //         maxE = num[i-1];
    //     }
    // }

    for(int n : num){
        if(n > maxE){
            maxE = n;
        }
    }

    cout << "Max element is " << maxE << endl;
}