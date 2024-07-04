#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    // Depth First Search (DFS) utility function
    void DFS(unordered_map<int, vector<int>> &adj, int u, vector<bool>& visited, vector<int>& result){
        if(visited[u] == true)
            return; // If the current node is already visited, return
            
        visited[u] = true; // Mark the current node as visited
        result.push_back(u); // Add the current node to the result
        
        // Iterate over all the adjacent nodes of the current node
        for(int &v : adj[u]){
            if(!visited[v]){
                DFS(adj, v, visited, result); // Recursively visit the unvisited adjacent nodes
            }
        }
    }

    // Function to return a list containing the DFS traversal of the graph
    vector<int> dfsOfGraph(int V, vector<int> mp[]) {
        unordered_map<int, vector<int>> adj; // Adjacency list representation of the graph
        
        // Convert the input adjacency list array to an unordered_map for easier manipulation
        for(int u = 0; u < V; u++){
            for(auto v = mp[u].begin(); v != mp[u].end(); v++){
                adj[u].push_back(*v);
            }
        }
        
        vector<int> result; // Vector to store the result of the DFS traversal
        vector<bool> visited(V, false); // Vector to keep track of visited nodes, initialized to false
        
        DFS(adj, 0, visited, result); // Start DFS from node 0
        
        return result; // Return the DFS traversal result
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
    vector<int> result = solution.dfsOfGraph(4, graph);
    for(int node : result) {
        cout << node << " ";
    }
    return 0;
}