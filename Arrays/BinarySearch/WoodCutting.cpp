#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Read input
    int N, M;
    cin >> N >> M;

    vector<int> heights(N);
    for (int i = 0; i < N; i++) {
        cin >> heights[i];
    }

    // Binary search for the maximum height
    int left = 0;
    int right = *max_element(heights.begin(), heights.end());
    int result = 0;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Calculate the total wood obtained at height mid
        long long totalWood = 0;
        for (int i = 0; i < N; i++) {
            if (heights[i] > mid) {
                totalWood += heights[i] - mid;
            }
        }

        // Adjust the search range
        if (totalWood >= M) {
            result = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    // Output the result
    cout << result << endl;

    return 0;
}
