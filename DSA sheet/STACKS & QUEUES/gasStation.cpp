#include <bits/stdc++.h>
using namespace std;

using namespace std;

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();

        // First check whether totalKharch is smaller or greater than totalKamai
        int totalKamai = accumulate(begin(gas), end(gas), 0);
        int totalKharch = accumulate(begin(cost), end(cost), 0);

        if (totalKamai < totalKharch) // Spending more than earning - return -1
            return -1;

        int result_index = 0;
        int total = 0; // Whatever left after subtracting cost and adding earning

        for (int i = 0; i < n; i++) {
            total += gas[i] - cost[i];

            if (total < 0) {
                result_index = i + 1;
                total = 0;
            }
        }

        return result_index;
    }
};

int main() {
    vector<int> gas = {1, 2, 3, 4, 5};
    vector<int> cost = {3, 4, 5, 1, 2};

    Solution solution;
    int start_index = solution.canCompleteCircuit(gas, cost);

    if (start_index != -1) {
        cout << "The starting gas station index is: " << start_index << endl;
    } else {
        cout << "It is not possible to complete the circuit." << endl;
    }

    return 0;
}
