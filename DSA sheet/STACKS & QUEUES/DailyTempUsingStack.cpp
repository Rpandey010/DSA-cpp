#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n =temperatures.size();
        stack<int> st;

        vector<int> result(n);

        for(int i = n-1; i >=0; i--){    //ulta traverse
            // till stack is not empty and current element is greater or equal to top element 
            while(!st.empty() && temperatures[i] >= temperatures[st.top()]){
                st.pop();
            }

            if(st.empty()){
                result[i] = 0;
            }
            else{
                result[i] = st.top() - i;   //no of days
            }

            st.push(i);
        }

        return result;
    }
};


int main() {
    // Test case
    vector<int> temperatures = {73, 74, 75, 71, 69, 72, 76, 73};
    
    // Create a Solution object
    Solution sol;
    
    // Call the dailyTemperatures method
    vector<int> result = sol.dailyTemperatures(temperatures);
    
    // Print the result
    for (int days : result) {
        cout << days << " ";
    }
    cout << endl;
    
    
    return 0;
}
