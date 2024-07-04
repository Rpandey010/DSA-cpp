#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>

using namespace std;

class Solution {
public:
    // BFS helper function
    void BFS(unordered_map<int, vector<int>> adj, int u, vector<bool>& visited, vector<int>& result){
        queue<int> que; // Queue to manage the BFS traversal
    
        que.push(u); // Start the BFS from node u
        visited[u] = true; // Mark the starting node as visited
        result.push_back(u); // Add the starting node to the result
    
        // Continue until there are no more nodes to process
        while(!que.empty()) {
            int u = que.front(); // Get the front node from the queue
            que.pop(); // Remove the front node from the queue
        
            // Iterate over all the adjacent nodes of the current node
            for(int &v : adj[u]){
                if(!visited[v]){
                    que.push(v); // Add the unvisited adjacent node to the queue
                    visited[v] = true; // Mark the adjacent node as visited
                    result.push_back(v); // Add the adjacent node to the result
                }
            }
        }
    }

    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> mp[]) {
        unordered_map<int, vector<int>> adj; // Adjacency list representation of the graph
        
        // Convert the input adjacency list array to an unordered_map for easier manipulation
        for(int u = 0; u < V; u++){
            for(auto v = mp[u].begin(); v != mp[u].end(); v++){
                adj[u].push_back(*v);
            }
        }
        
        vector<int> result; // Vector to store the result of the BFS traversal
        vector<bool> visited(V, false); // Vector to keep track of visited nodes, initialized to false
        
        BFS(adj, 0, visited, result); // Start BFS from node 0
        
        return result; // Return the BFS traversal result
    }
};

int main() {
    Solution solution;
    vector<int> graph[] = {
        {1, 2},
        {0, 3},
        {0, 3},
        {1, 2}
    };
    vector<int> result = solution.bfsOfGraph(4, graph);
    for(int node : result) {
        cout << node << " ";
    }
    return 0;
}