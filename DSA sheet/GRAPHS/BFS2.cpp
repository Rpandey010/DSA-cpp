#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Solution {
  public:
    // Function to perform BFS traversal of the graph from a given source
    void BFS(int V, vector<int> adj[], int start) {
        vector<bool> visited(V, false); // Initialize all vertices as unvisited
        queue<int> q; // Queue for BFS

        visited[start] = true; // Mark the start node as visited
        q.push(start); // Push the start node to the queue

        while(!q.empty()) {
            int u = q.front(); // Get the front node in the queue
            q.pop(); // Remove the front node from the queue
            cout << u << " "; // Print the current node

            // Traverse all adjacent vertices
            for(int &v : adj[u]) {
                if(!visited[v]) { // If the adjacent vertex is not visited
                    visited[v] = true; // Mark it as visited
                    q.push(v); // Push it to the queue
                }
            }
        }
    }
};

int main() {
    int V = 5; // Number of vertices
    vector<int> adj[V]; // Adjacency list

    // Add edges to the graph
adj[0].push_back(1);
adj[0].push_back(4);
adj[1].push_back(0);
adj[1].push_back(2);
adj[1].push_back(4);
adj[2].push_back(1);
adj[2].push_back(3);
adj[3].push_back(2);
adj[3].push_back(4);
adj[4].push_back(0);
adj[4].push_back(1);
adj[4].push_back(3);

    Solution sol;
    sol.BFS(V, adj, 0); // Perform BFS traversal starting from vertex 0

    return 0;
}
