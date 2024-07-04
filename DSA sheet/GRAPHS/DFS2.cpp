#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    // Helper function to perform DFS traversal
    void DFSUtil(int u, vector<int> adj[], vector<bool>& visited) {
        visited[u] = true; // Mark the current node as visited
        cout << u << " ";  // Print the current node

        // Traverse all adjacent vertices
        for(int &v : adj[u]) {
            if(!visited[v]) { // If the adjacent vertex is not visited
                DFSUtil(v, adj, visited); // Recursively visit the adjacent vertex
            }
        }
    }
    
    // Function to perform DFS traversal of the entire graph
    void DFS(int V, vector<int> adj[]) {
        vector<bool> visited(V, false); // Initialize all vertices as unvisited
        
        // Perform DFS for each component of the graph
        for(int i = 0; i < V; i++) {
            if(!visited[i]) { // If the vertex is not visited
                DFSUtil(i, adj, visited); // Perform DFS from the vertex
            }
        }
    }
};

int main() {
    int V = 8; // Number of vertices
    vector<int> adj[V]; // Adjacency list

// Add edges to the graph
adj[0].push_back(1);
adj[0].push_back(2);

adj[1].push_back(0);
adj[1].push_back(4);
adj[1].push_back(5);

adj[2].push_back(0);
adj[2].push_back(3);
adj[2].push_back(6);

adj[3].push_back(2);
adj[3].push_back(7);

adj[4].push_back(1);

adj[5].push_back(1);

adj[6].push_back(2);
adj[6].push_back(7);

adj[7].push_back(3);
adj[7].push_back(6);


    Solution sol;
    sol.DFS(V, adj); // Perform DFS traversal

    return 0;
}
