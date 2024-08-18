#include<bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        // Initialize the visited array with the same size as grid, filled with 0
        vector<vector<int>> vis(n, vector<int>(m, 0));
        
        // Queue to store {{row, column}, time}
        queue<pair<pair<int, int>, int>> q;
        
        int cntFresh = 0;
        
        // Initial traversal to populate the queue with rotten oranges and count fresh ones
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 2){
                    q.push({{i, j}, 0});
                    vis[i][j] = 2; // Mark as visited (rotten)
                } else {
                    vis[i][j] = 0; // Mark as unvisited
                }
                
                if(grid[i][j] == 1)
                    cntFresh++;
            }
        }
        
        int time = 0;
        
        // Delta row and delta column arrays for the four possible directions
        int drow[] = {-1, 0, +1, 0};
        int dcol[] = {0, 1, 0, -1};
        int cnt = 0;
        
        // BFS traversal
        while(!q.empty()){
            int r = q.front().first.first;
            int c = q.front().first.second;
            int t = q.front().second;
            
            time = max(time , t);
            q.pop();
            
            // Check the four possible directions
            for(int i = 0; i < 4; i++){
                int nrow = r + drow[i];
                int ncol = c + dcol[i];
                
                // Check if the neighboring cell is valid and contains a fresh orange
                if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m
                   && vis[nrow][ncol] == 0 && grid[nrow][ncol] == 1){
                    // Push into queue with incremented time
                    q.push({{nrow, ncol}, t+1});
                    
                    // Mark as rotten in the visited array
                    vis[nrow][ncol] = 2;
                    cnt++;
                }
            }
        }
        
        // If all oranges are not rotten
        if(cnt != cntFresh) return -1;
        
        return time;
    }
};

int main() {
    Solution sol;

    // Example test case 1
    vector<vector<int>> grid1 = {
        {2, 1, 1},
        {1, 1, 0},
        {0, 1, 1}
    };
    
    int result1 = sol.orangesRotting(grid1);
    cout << "Minimum time required to rot all oranges (Test Case 1): " << result1 << endl;

    // Example test case 2
    vector<vector<int>> grid2 = {
        {2, 1, 1},
        {0, 1, 1},
        {1, 0, 1}
    };

    int result2 = sol.orangesRotting(grid2);
    cout << "Minimum time required to rot all oranges (Test Case 2): " << result2 << endl;

    // Example test case 3 (all oranges already rotten)
    vector<vector<int>> grid3 = {
        {0, 2}
    };

    int result3 = sol.orangesRotting(grid3);
    cout << "Minimum time required to rot all oranges (Test Case 3): " << result3 << endl;

    return 0;
}
