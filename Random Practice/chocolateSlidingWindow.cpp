#include <bits/stdc++.h>
using namespace std;

int findMinDiff(vector<int> arr, int n, int m)
{
    sort(arr.begin(), arr.end());

    int result = INT_MAX;

    for (int i = 0; i <= n - m; i++)
    {
        int minElement = arr[i];
        int maxELement = arr[i + m - 1];
        int diff = maxELement - minElement;

        result = min(result, diff);
    }
    return result;
};

int main() {
    vector<int> arr = {3, 4, 1, 9, 56, 7, 9, 12};
    int m = 5; // Number of students
    int n = arr.size();
    int result = findMinDiff(arr, n, m);
    cout << "Minimum difference is " << result << endl;
    return 0;
}