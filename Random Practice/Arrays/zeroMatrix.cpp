#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix) {
    int n = matrix.size();
    int m = matrix[0].size();

    int col0 = 1;
    // row --> matrix[..][0]
    // col --> matrix[0][..]
    
    // step 1: Traverse the matrix and
    // mark 1st row & col accordingly:
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(matrix[i][j] == 0){
                //mark the row and col
                matrix[i][0] = 0;
                if(j != 0)
                    matrix[0][j] = 0;
                else
                    col0 = 1;
            }
        }
    }

    //INNER MATRIX excluding the very first row and col
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(matrix[i][0] == 0 || matrix[0][j] == 0){
                matrix[i][j] = 0;
            }
        }
    }

    //checking for the very first col
    if(matrix[0][0] == 0){
        for(int j = 0; j < m; j++){
            matrix[0][j] = 0;
        }
    }

    if(col0 == 0){
        for(int i = 0; i < n; i++){
            matrix[i][0] = 0;
        }
    }
    return matrix;
};

int main()
{
    vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> ans = zeroMatrix(matrix);

    cout << "The Final matrix is:" << endl;
    for (auto it : ans) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << endl;
    }
    return 0;
}