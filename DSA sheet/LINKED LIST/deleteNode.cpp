#include<bits/stdc++.h>
using namespace std;

struct Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1 = nullptr){
        data = data1;
        next = next1;
    }
};

class Solution {
public:
    void deleteNode(Node* node) {
        Node* prev = NULL;

        while(node != NULL && node->next != NULL){
            node->data = node->next->data;

            prev = node;

            node = node->next;
        }

        prev->next = NULL;  //break the link

        delete(node);   
    }
};

int main() {
    // Create nodes
    Node* node1 = new Node(1);
    Node* node2 = new Node(2, node1);
    Node* node3 = new Node(3, node2);
    Node* node4 = new Node(4, node3);

    // Create solution object
    Solution solution;

    // Delete node
    solution.deleteNode(node3);

    // Print the linked list
    Node* current = node4;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }

    // Clean up
    delete node1;
    delete node2;
    delete node4;

    return 0;
}


// 4 -> 3 -> 2 -> 1
// to
// 4 -> 2 -> 1