#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices) {
    int n = prices.size();
    int minPrice = INT_MAX;
    int maxPro = 0;

    for(int i = 0; i < n; i++){
        minPrice = min(minPrice, prices[i]);
        maxPro = max(maxPro, prices[i]-minPrice);           //usdin ka price minus abb tak ka min price i.e minPrice
    }
    return maxPro;
}

int main() {
    vector<int> prices = {7,1,5,3,6,4};
    int maxPro = maxProfit(prices);
    cout << "Max profit is: " << maxPro << endl;
}