#include <iostream>

using namespace std;

// ListNode structure definition
struct ListNode {
    int val;
    ListNode* next;

    // Constructor
    ListNode(int x) : val(x), next(nullptr) {}
};

// Function to insert a node at the beginning of the list
ListNode* insertAtBeginning(ListNode* head, int valToInsert) {
    // Create a new node to insert
    ListNode* newNode = new ListNode(valToInsert);

    // Assign the next of this new node to head
    newNode->next = head;

    // Point the head of the list to this new node
    head = newNode;

    return head;
}

int main(){
    //Creating 5 nodes
    ListNode* l1 = new ListNode(4);
    ListNode* l2 = new ListNode(9);
    ListNode* l3 = new ListNode(12);
    ListNode* l4 = new ListNode(18);
    ListNode* l5 = new ListNode(21);

    //Link the nodes
    l1->next = l2;
    l2->next = l3;
    l3->next = l4;
    l4->next = l5;
    l5->next = nullptr;

    // Insert 1 at the beginning of the list
    ListNode* head = insertAtBeginning(l1, 1);

    // Print the updated list
    ListNode* temp = head;
    while(temp != nullptr) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    return 0;
}

