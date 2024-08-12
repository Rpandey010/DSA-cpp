#include<bits/stdc++.h>
using namespace std;

class StockSpanner {
public:
    stack<pair<int, int>> st;  // stack of <price, span>

    StockSpanner() {
        // Constructor doesn't need to do anything specific in this case
    }
    
    int next(int price) {
        int span = 1;  // currently span of price is 1 which is itself

        while (!st.empty() && st.top().first <= price) {
            span += st.top().second;
            st.pop();  // pop out the smaller prices
        }

        st.push({price, span});

        return span;
    }
};

int main() {
    StockSpanner stockSpanner;

    vector<int> prices = {100, 80, 60, 70, 60, 75, 85};
    for (int price : prices) {
        cout << "Price: " << price << ", Span: " << stockSpanner.next(price) << endl;
    }

    return 0;
}