#include <bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
    int m = matrix.size();
    int n = m;

    // TRANSPOSE
    for(int i = 0; i < m; i++){
        for(int j = i; j < n; j++){
            swap(matrix[i][j], matrix[j][i]); // row to column convert
        }
    }

    // REVERSE ROWS (for clockwise rotation)
    // To rotate 90 degrees anticlockwise, you would reverse the columns instead
    for(int i = 0; i < m; i++){
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main() {
    // Define a 3x3 matrix (example)
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Print original matrix
    cout << "Original Matrix:" << endl;
    for (const auto& row : matrix) {
        for (int elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }

    // Call the rotate function
    rotate(matrix);

    // Print rotated matrix
    cout << "\nRotated Matrix (90 degrees clockwise):" << endl;
    for (const auto& row : matrix) {
        for (int elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }

    return 0;
}
