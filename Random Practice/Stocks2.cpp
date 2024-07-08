
// The only difference is you can buy and sell the stock multiple time, at the end just tell the maximum profile
// also you have to sell the previous bought stock to buy another stock

#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices) {
    int n = prices.size();

    int yetProfit = 0; //initially zero h

    // we will just start from day 1
    for(int i = 1; i < n; i++){
        if(prices[i] > prices[i-1])
            yetProfit += (prices[i] - prices[i-1]); 
    }
    return yetProfit;
}

int main() {
    vector<int> prices = {7,1,5,3,6,4};
    int maxPro = maxProfit(prices);
    cout << "Max profit is: " << maxPro << endl;
}